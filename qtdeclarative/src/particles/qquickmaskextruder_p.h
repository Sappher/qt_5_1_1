/****************************************************************************
**
** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtQuick module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef MASKEXTRUDER_H
#define MASKEXTRUDER_H
#include "qquickparticleextruder_p.h"
#include <private/qquickpixmapcache_p.h>
#include <QUrl>
#include <QImage>

QT_BEGIN_NAMESPACE

class QQuickMaskExtruder : public QQuickParticleExtruder
{
    Q_OBJECT
    Q_PROPERTY(QUrl source READ source WRITE setSource NOTIFY sourceChanged)
public:
    explicit QQuickMaskExtruder(QObject *parent = 0);
    virtual QPointF extrude(const QRectF &);
    virtual bool contains(const QRectF &bounds, const QPointF &point);

    QUrl source() const
    {
        return m_source;
    }

signals:

    void sourceChanged(QUrl arg);

public slots:
    void setSource(QUrl arg);

private slots:
    void startMaskLoading();
    void finishMaskLoading();

private:
    QUrl m_source;

    void ensureInitialized(const QRectF &r);
    int m_lastWidth;
    int m_lastHeight;
    QQuickPixmap m_pix;
    QImage m_img;
    QList<QPointF> m_mask;//TODO: More memory efficient datastructures
    //Perhaps just the mask for the largest bounds is stored, and interpolate up
};

QT_END_NAMESPACE

#endif // MASKEXTRUDER_H
