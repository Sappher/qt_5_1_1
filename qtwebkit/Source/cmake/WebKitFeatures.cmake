SET(_WEBKIT_AVAILABLE_OPTIONS "")

MACRO (WEBKIT_OPTION_DEFINE _name _description _initialvalue)
    SET(_WEBKIT_AVAILABLE_OPTIONS_INITALVALUE_${_name} ${_initialvalue})
    SET(_WEBKIT_AVAILABLE_OPTIONS_DESCRIPTION_${_name} ${_description})
    LIST(APPEND _WEBKIT_AVAILABLE_OPTIONS ${_name})
ENDMACRO ()

MACRO (WEBKIT_OPTION_DEFAULT_PORT_VALUE _name _value)
    SET(_WEBKIT_AVAILABLE_OPTIONS_INITALVALUE_${_name} ${_value})
ENDMACRO ()

MACRO (WEBKIT_OPTION_BEGIN)
    WEBKIT_OPTION_DEFINE(ENABLE_3D_RENDERING "Toggle 3D rendering support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_ACCELERATED_2D_CANVAS "Toggle accelerated 2D canvas support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_ANIMATION_API "Toggle animation API support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_API_TESTS "Enable public API unit tests" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_ASSEMBLER_WX_EXCLUSIVE "Toggel Assembler WX Exclusive support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_BATTERY_STATUS "Toggle battery status API support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_BLOB "Toggle Blob support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_CHANNEL_MESSAGING "Toggle MessageChannel and MessagePort support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_CSP_NEXT "Toggle Content Security Policy 1.1 support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_CSS3_BACKGROUND "Toggle CSS3 Background support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_CSS3_CONDITIONAL_RULES "Toggle CSS3 Conditional Rules support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_CSS3_TEXT "Toggle CSS3 Text support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_CSS_BOX_DECORATION_BREAK "Toggle Box Decoration Break (CSS Backgrounds and Borders) support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_CSS_COMPOSITING "Toggle CSS COMPOSITING support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_CSS_DEVICE_ADAPTATION "Toggle CSS Device Adaptation support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_CSS_EXCLUSIONS "Toggle CSS Exclusion support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_CSS_FILTERS "Toggle CSS Filters support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_CSS_IMAGE_ORIENTATION "Toggle CSS image-orientation support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_CSS_IMAGE_RESOLUTION "Toggle CSS image-resolution support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_CSS_IMAGE_SET "Toggle CSS image-set support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_CSS_REGIONS "Toggle CSS regions support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_CSS_SHADERS "Toggle CSS Shaders (within CSS Filters) support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_CSS_STICKY_POSITION "Toggle CSS sticky position support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_CSS_VARIABLES "Toggle CSS Variables support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_CUSTOM_SCHEME_HANDLER "Toggle Custom Scheme Handler support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_DATALIST_ELEMENT "Toggle HTML5 datalist support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_DATA_TRANSFER_ITEMS "Toggle HTML5 data transfer items support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_DETAILS_ELEMENT "Toggle HTML5 details support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_DEVICE_ORIENTATION "Toggle DeviceOrientation support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_DIALOG_ELEMENT "Toggle Dialog Element support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_DIRECTORY_UPLOAD "Toggle Directory upload support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_DOWNLOAD_ATTRIBUTE "Toggle download attribute support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_DRAG_SUPPORT "Toggle Drag Support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_FAST_MOBILE_SCROLLING "Toogle Fast Mobile Scrolling support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_FILE_SYSTEM "Toggle FileSystem support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_FILTERS "Toggle SVG Filters support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_FTPDIR "Toggle FTP directory support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_FULLSCREEN_API "Toggle Fullscreen API support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_GAMEPAD "Toggle Gamepad support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_GEOLOCATION "Toggle Geolocation support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_GLIB_SUPPORT "Toggle Glib support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_HIDDEN_PAGE_DOM_TIMER_THROTTLING "Toggle hidden page DOM timer throttling support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_HIGH_DPI_CANVAS "Toggle high-DPI canvas backing store support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_ICONDATABASE "Toggle Icon database support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_IFRAME_SEAMLESS "Toggle iframe seamless attribute support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_IMAGE_DECODER_DOWN_SAMPLING "Toggle image decoder down sampling support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_INDEXED_DATABASE "Toggle Indexed Database API support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_INPUT_SPEECH "Toggle Speech Input API support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_INPUT_TYPE_COLOR "Toggle Color Input support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_INPUT_TYPE_DATE "Toggle date type <input> support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_INPUT_TYPE_DATETIME "Toggle datetime type <input> support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_INPUT_TYPE_DATETIMELOCAL "Toggle datetime-local type <input> support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_INPUT_TYPE_MONTH "Toggle month type <input> support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_INPUT_TYPE_TIME "Toggle time type <input> support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_INPUT_TYPE_WEEK "Toggle week type <input> support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_INSPECTOR "Toggle Web Inspector support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_JAVASCRIPT_DEBUGGER "Toggle JavaScript Debugger/Profiler support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_JIT "Enable JustInTime javascript support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_LEGACY_NOTIFICATIONS "Toggle Legacy Desktop Notifications Support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_LEGACY_VIEWPORT_ADAPTION "Toogle legacy viewport adaption" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_LEGACY_VENDOR_PREFIXES "Toggle Legacy Vendor Prefix Support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_LEGACY_WEB_AUDIO "Toggle Legacy Web Audio support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_LINK_PREFETCH "Toggle pre fetching support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_LINK_PRERENDER "Toggle pre rendering support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_LLINT "Enable JSC Low Level Interpreter" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_MATHML "Toggle MathML support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_MEDIA_CAPTURE "Toggle Media Capture support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_MEDIA_SOURCE "Toggle Media Source support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_MEDIA_STATISTICS "Toggle Media Statistics support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_MEDIA_STREAM "Toggle Media Stream API support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_MEMORY_SAMPLER "Toggle Memory Sampler support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_METER_ELEMENT "Toggle Meter Tag support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_MHTML "Toggle MHTML support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_MICRODATA "Toggle Microdata support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_MUTATION_OBSERVERS "Toggle DOM mutation observer support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_NAVIGATOR_CONTENT_UTILS "Toggle Navigator Content Utils support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_NETSCAPE_PLUGIN_API "Toggle Netscape Plugin support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_NETWORK_INFO "Toggle Network Information API support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_NOTIFICATIONS "Toggle Desktop Notifications Support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_ORIENTATION_EVENTS "Toggle Orientation Events support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_PAGE_VISIBILITY_API "Toggle Page Visibility API support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_PROGRESS_ELEMENT "Toggle Progress Tag support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_PLUGIN_PROXY_FOR_VIDEO "Toggle Plugin Proxy for Video support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_PROXIMITY_EVENTS "Toggle Proximity Events support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_QUOTA "Toggle Quota support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_REPAINT_THROTTLING "Toggle repaint throttling support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_REQUEST_ANIMATION_FRAME "Toggle requestAnimationFrame support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_RESOLUTION_MEDIA_QUERY "Toggle resolution media query support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_SCRIPTED_SPEECH "Toggle Scripted Speech API support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_SHADOW_DOM "Toggle Shadow DOM support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_SHARED_WORKERS "Toggle SharedWorkers support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_SPELLCHECK "Toggle Spellchecking support (requires Enchant)" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_SQL_DATABASE "Toggle SQL Database Support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_STYLE_SCOPED "Toggle <style scoped> support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_SVG "Toggle SVG support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_SVG_DOM_OBJC_BINDINGS "Toggle SVG DOM Objective-C bindings support (implies SVG support)" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_SVG_FONTS "Toggle SVG fonts support (imples SVG support)" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_TEMPLATE_ELEMENT "Toggle Template support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_TEXT_AUTOSIZING "Toggle Text auto sizing support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_TOUCH_EVENTS "Toggle Touch Events support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_TOUCH_SLIDER "Toggle Touch Slider support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_TOUCH_ICON_LOADING "Toggle Touch Icon Loading Support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_VIBRATION "Toggle Vibration API support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_VIDEO "Toggle Video support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_VIDEO_TRACK "Toggle Track support for HTML5 video" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_WEB_AUDIO "Toggle Web Audio support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_WEB_INTENTS "Toggle Web Intents support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_WEB_INTENTS_TAG "Toogle HTMLIntentElement tag support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_WEB_SOCKETS "Toggle Web Sockets support" ON)
    WEBKIT_OPTION_DEFINE(ENABLE_WEB_TIMING "Toggle Web Timing support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_WEBGL "Toggle 3D canvas (WebGL) support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_WORKERS "Toggle Web Workers support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_XHR_TIMEOUT "Toggle XHR timeout support" OFF)
    WEBKIT_OPTION_DEFINE(ENABLE_XSLT "Toggle XSLT support" ON)
    WEBKIT_OPTION_DEFINE(USE_SYSTEM_MALLOC "Toggle system allocator instead of TCmalloc" OFF)
    WEBKIT_OPTION_DEFINE(WTF_USE_TILED_BACKING_STORE "Toggle Tiled Backing Store support" OFF)
    WEBKIT_OPTION_DEFINE(WTF_USE_WTFURL "Toogle the use of WTFURL for URL parsing" OFF)
ENDMACRO ()

MACRO (WEBKIT_OPTION_END)
    FOREACH (_name ${_WEBKIT_AVAILABLE_OPTIONS})
        OPTION(${_name} "${_WEBKIT_AVAILABLE_OPTIONS_DESCRIPTION_${_name}}" ${_WEBKIT_AVAILABLE_OPTIONS_INITALVALUE_${_name}})
    ENDFOREACH ()


    MESSAGE(STATUS "Enabled features:")

    SET(_MAX_FEATURE_LENGTH 0)
    FOREACH (_name ${_WEBKIT_AVAILABLE_OPTIONS})
        STRING(LENGTH ${_name} _NAME_LENGTH)
        IF (_NAME_LENGTH GREATER _MAX_FEATURE_LENGTH)
            SET(_MAX_FEATURE_LENGTH ${_NAME_LENGTH})
        ENDIF ()
    ENDFOREACH ()

    SET(_SHOULD_PRINT_POINTS OFF)
    FOREACH (_name ${_WEBKIT_AVAILABLE_OPTIONS})
        STRING(LENGTH ${_name} _NAME_LENGTH)

        SET(_MESSAGE " ${_name} ")

        IF (_SHOULD_PRINT_POINTS)
            FOREACH (IGNORE RANGE ${_NAME_LENGTH} ${_MAX_FEATURE_LENGTH})
                SET(_MESSAGE "${_MESSAGE} ")
            ENDFOREACH ()
            SET(_SHOULD_PRINT_POINTS OFF)
        ELSE ()
            FOREACH (IGNORE RANGE ${_NAME_LENGTH} ${_MAX_FEATURE_LENGTH})
                SET(_MESSAGE "${_MESSAGE}.")
            ENDFOREACH ()
            SET(_SHOULD_PRINT_POINTS ON)
        ENDIF ()

        IF (${_name})
            LIST(APPEND FEATURE_DEFINES ${_name})
            SET(FEATURE_DEFINES_WITH_SPACE_SEPARATOR "${FEATURE_DEFINES_WITH_SPACE_SEPARATOR} ${_name}")
        ENDIF ()

        SET(_MESSAGE "${_MESSAGE} ${_WEBKIT_AVAILABLE_OPTIONS_INITALVALUE_${_name}}")
        MESSAGE(STATUS "${_MESSAGE}")
    ENDFOREACH ()
ENDMACRO ()
