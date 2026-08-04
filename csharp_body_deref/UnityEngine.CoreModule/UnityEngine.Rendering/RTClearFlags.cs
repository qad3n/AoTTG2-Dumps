// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RTClearFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002C8")]
[Flags]
public enum RTClearFlags
{
	[Token(Token = "0x40007F7")]
	None = 0,
	[Token(Token = "0x40007F8")]
	Color = 1,
	[Token(Token = "0x40007F9")]
	Depth = 2,
	[Token(Token = "0x40007FA")]
	Stencil = 4,
	[Token(Token = "0x40007FB")]
	All = 7,
	[Token(Token = "0x40007FC")]
	DepthStencil = 6,
	[Token(Token = "0x40007FD")]
	ColorDepth = 3,
	[Token(Token = "0x40007FE")]
	ColorStencil = 5
}
