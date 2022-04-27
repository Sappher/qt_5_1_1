/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSTestEventTarget.h"

#include "Event.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "JSNode.h"
#include "Node.h"
#include "TestEventTarget.h"
#include "wtf/text/AtomicString.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSTestEventTargetTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestEventTargetConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSTestEventTargetTable = { 2, 1, JSTestEventTargetTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSTestEventTargetConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSTestEventTargetConstructorTable = { 1, 0, JSTestEventTargetConstructorTableValues, 0 };
const ClassInfo JSTestEventTargetConstructor::s_info = { "TestEventTargetConstructor", &Base::s_info, &JSTestEventTargetConstructorTable, 0, CREATE_METHOD_TABLE(JSTestEventTargetConstructor) };

JSTestEventTargetConstructor::JSTestEventTargetConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSTestEventTargetConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSTestEventTargetPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSTestEventTargetConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTestEventTargetConstructor, JSDOMWrapper>(exec, &JSTestEventTargetConstructorTable, jsCast<JSTestEventTargetConstructor*>(cell), propertyName, slot);
}

bool JSTestEventTargetConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSTestEventTargetConstructor, JSDOMWrapper>(exec, &JSTestEventTargetConstructorTable, jsCast<JSTestEventTargetConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSTestEventTargetPrototypeTableValues[] =
{
    { "item", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsTestEventTargetPrototypeFunctionItem), (intptr_t)1, NoIntrinsic },
    { "addEventListener", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsTestEventTargetPrototypeFunctionAddEventListener), (intptr_t)3, NoIntrinsic },
    { "removeEventListener", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsTestEventTargetPrototypeFunctionRemoveEventListener), (intptr_t)3, NoIntrinsic },
    { "dispatchEvent", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsTestEventTargetPrototypeFunctionDispatchEvent), (intptr_t)1, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSTestEventTargetPrototypeTable = { 8, 7, JSTestEventTargetPrototypeTableValues, 0 };
const ClassInfo JSTestEventTargetPrototype::s_info = { "TestEventTargetPrototype", &Base::s_info, &JSTestEventTargetPrototypeTable, 0, CREATE_METHOD_TABLE(JSTestEventTargetPrototype) };

JSObject* JSTestEventTargetPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSTestEventTarget>(exec, globalObject);
}

bool JSTestEventTargetPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSTestEventTargetPrototype* thisObject = jsCast<JSTestEventTargetPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSTestEventTargetPrototypeTable, thisObject, propertyName, slot);
}

bool JSTestEventTargetPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSTestEventTargetPrototype* thisObject = jsCast<JSTestEventTargetPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSTestEventTargetPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSTestEventTarget::s_info = { "TestEventTarget", &Base::s_info, &JSTestEventTargetTable, 0 , CREATE_METHOD_TABLE(JSTestEventTarget) };

JSTestEventTarget::JSTestEventTarget(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<TestEventTarget> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSTestEventTarget::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSTestEventTarget::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSTestEventTargetPrototype::create(exec->globalData(), globalObject, JSTestEventTargetPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

void JSTestEventTarget::destroy(JSC::JSCell* cell)
{
    JSTestEventTarget* thisObject = static_cast<JSTestEventTarget*>(cell);
    thisObject->JSTestEventTarget::~JSTestEventTarget();
}

JSTestEventTarget::~JSTestEventTarget()
{
    releaseImplIfNotNull();
}

bool JSTestEventTarget::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSTestEventTarget* thisObject = jsCast<JSTestEventTarget*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    const HashEntry* entry = JSTestEventTargetTable.entry(exec, propertyName);
    if (entry) {
        slot.setCustom(thisObject, entry->propertyGetter());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<TestEventTarget*>(thisObject->impl())->length()) {
        slot.setCustomIndex(thisObject, index, indexGetter);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<TestEventTarget*>(thisObject->impl()), propertyName)) {
        slot.setCustom(thisObject, thisObject->nameGetter);
        return true;
    }
    return getStaticValueSlot<JSTestEventTarget, Base>(exec, &JSTestEventTargetTable, thisObject, propertyName, slot);
}

bool JSTestEventTarget::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSTestEventTarget* thisObject = jsCast<JSTestEventTarget*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    const HashEntry* entry = JSTestEventTargetTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(thisObject, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<TestEventTarget*>(thisObject->impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(thisObject, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<TestEventTarget*>(thisObject->impl()), propertyName)) {
        PropertySlot slot;
        slot.setCustom(thisObject, nameGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), ReadOnly | DontDelete | DontEnum);
        return true;
    }
    return getStaticValueDescriptor<JSTestEventTarget, Base>(exec, &JSTestEventTargetTable, thisObject, propertyName, descriptor);
}

bool JSTestEventTarget::getOwnPropertySlotByIndex(JSCell* cell, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSTestEventTarget* thisObject = jsCast<JSTestEventTarget*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (index < static_cast<TestEventTarget*>(thisObject->impl())->length()) {
        slot.setCustomIndex(thisObject, index, thisObject->indexGetter);
        return true;
    }
    PropertyName propertyName = Identifier::from(exec, index);
    if (canGetItemsForName(exec, static_cast<TestEventTarget*>(thisObject->impl()), propertyName)) {
        slot.setCustom(thisObject, thisObject->nameGetter);
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

JSValue jsTestEventTargetConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTestEventTarget* domObject = jsCast<JSTestEventTarget*>(asObject(slotBase));
    return JSTestEventTarget::getConstructor(exec, domObject->globalObject());
}

void JSTestEventTarget::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    JSTestEventTarget* thisObject = jsCast<JSTestEventTarget*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    for (unsigned i = 0; i < static_cast<TestEventTarget*>(thisObject->impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

JSValue JSTestEventTarget::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTestEventTargetConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsTestEventTargetPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSTestEventTarget::s_info))
        return throwVMTypeError(exec);
    JSTestEventTarget* castedThis = jsCast<JSTestEventTarget*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSTestEventTarget::s_info);
    TestEventTarget* impl = static_cast<TestEventTarget*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    int index(MAYBE_MISSING_PARAMETER(exec, 0, DefaultIsUndefined).toUInt32(exec));
    if (index < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->item(index)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsTestEventTargetPrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSTestEventTarget::s_info))
        return throwVMTypeError(exec);
    JSTestEventTarget* castedThis = jsCast<JSTestEventTarget*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSTestEventTarget::s_info);
    TestEventTarget* impl = static_cast<TestEventTarget*>(castedThis->impl());
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl->addEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsTestEventTargetPrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSTestEventTarget::s_info))
        return throwVMTypeError(exec);
    JSTestEventTarget* castedThis = jsCast<JSTestEventTarget*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSTestEventTarget::s_info);
    TestEventTarget* impl = static_cast<TestEventTarget*>(castedThis->impl());
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl->removeEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)).get(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsTestEventTargetPrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSTestEventTarget::s_info))
        return throwVMTypeError(exec);
    JSTestEventTarget* castedThis = jsCast<JSTestEventTarget*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSTestEventTarget::s_info);
    TestEventTarget* impl = static_cast<TestEventTarget*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Event* evt(toEvent(MAYBE_MISSING_PARAMETER(exec, 0, DefaultIsUndefined)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl->dispatchEvent(evt, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

void JSTestEventTarget::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    JSTestEventTarget* thisObject = jsCast<JSTestEventTarget*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    COMPILE_ASSERT(StructureFlags & OverridesVisitChildren, OverridesVisitChildrenWithoutSettingFlag);
    ASSERT(thisObject->structure()->typeInfo().overridesVisitChildren());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl()->visitJSEventListeners(visitor);
}


JSValue JSTestEventTarget::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSTestEventTarget* thisObj = jsCast<JSTestEventTarget*>(asObject(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, &s_info);
    return toJS(exec, thisObj->globalObject(), static_cast<TestEventTarget*>(thisObj->impl())->item(index));
}

static inline bool isObservable(JSTestEventTarget* jsTestEventTarget)
{
    if (jsTestEventTarget->hasCustomProperties())
        return true;
    if (jsTestEventTarget->impl()->hasEventListeners())
        return true;
    return false;
}

bool JSTestEventTargetOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSTestEventTarget* jsTestEventTarget = jsCast<JSTestEventTarget*>(handle.get().asCell());
    if (!isObservable(jsTestEventTarget))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSTestEventTargetOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSTestEventTarget* jsTestEventTarget = jsCast<JSTestEventTarget*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsTestEventTarget->impl(), jsTestEventTarget);
    jsTestEventTarget->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, TestEventTarget* impl)
{
    return wrap<JSTestEventTarget>(exec, globalObject, impl);
}

TestEventTarget* toTestEventTarget(JSC::JSValue value)
{
    return value.inherits(&JSTestEventTarget::s_info) ? jsCast<JSTestEventTarget*>(asObject(value))->impl() : 0;
}

}
