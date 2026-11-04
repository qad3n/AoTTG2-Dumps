// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.EventSource
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.InputForUI;

[Token(Token = "0x200000D")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal enum EventSource
{
	[Token(Token = "0x4000046")]
	Unspecified,
	[Token(Token = "0x4000047")]
	Keyboard,
	[Token(Token = "0x4000048")]
	Gamepad,
	[Token(Token = "0x4000049")]
	Mouse,
	[Token(Token = "0x400004A")]
	Pen,
	[Token(Token = "0x400004B")]
	Touch,
	[Token(Token = "0x400004C")]
	TrackedDevice
}
