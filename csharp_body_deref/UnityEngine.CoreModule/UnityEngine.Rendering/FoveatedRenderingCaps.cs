// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.FoveatedRenderingCaps
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000340")]
[Flags]
public enum FoveatedRenderingCaps
{
	[Token(Token = "0x4000936")]
	None = 0,
	[Token(Token = "0x4000937")]
	FoveationImage = 1,
	[Token(Token = "0x4000938")]
	NonUniformRaster = 2,
	[Token(Token = "0x4000939")]
	ModeChangeOnlyBeforeRenderTargetSet = 4
}
