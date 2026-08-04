// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngineInternal.Input.NativeInputUpdateType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngineInternal.Input;

[Token(Token = "0x2000004")]
[Flags]
internal enum NativeInputUpdateType
{
	[Token(Token = "0x4000006")]
	Dynamic = 1,
	[Token(Token = "0x4000007")]
	Fixed = 2,
	[Token(Token = "0x4000008")]
	BeforeRender = 4,
	[Token(Token = "0x4000009")]
	Editor = 8,
	[Token(Token = "0x400000A")]
	IgnoreFocus = int.MinValue
}
