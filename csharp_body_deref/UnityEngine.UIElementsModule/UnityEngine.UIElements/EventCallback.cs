// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EventCallback
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001C6")]
public delegate void EventCallback<in TEventType>(TEventType evt);
[Token(Token = "0x20001C7")]
public delegate void EventCallback<in TEventType, in TCallbackArgs>(TEventType evt, TCallbackArgs userArgs);
