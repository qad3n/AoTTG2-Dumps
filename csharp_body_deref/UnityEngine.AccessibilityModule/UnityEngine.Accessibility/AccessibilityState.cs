// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Accessibility.AccessibilityState
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Accessibility;

[Token(Token = "0x2000008")]
[UnityEngine.Bindings.NativeHeader("Modules/Accessibility/Native/AccessibilityNodeData.h")]
[Flags]
public enum AccessibilityState : byte
{
	[Token(Token = "0x4000026")]
	None = 0,
	[Token(Token = "0x4000027")]
	Disabled = 1,
	[Token(Token = "0x4000028")]
	Selected = 2,
	[Token(Token = "0x4000029")]
	Expanded = 4
}
