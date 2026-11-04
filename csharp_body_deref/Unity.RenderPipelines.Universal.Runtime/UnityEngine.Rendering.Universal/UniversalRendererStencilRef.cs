// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRendererStencilRef
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001F0")]
[Flags]
public enum UniversalRendererStencilRef
{
	[Token(Token = "0x4000BBB")]
	CrossFadeStencilRef_0 = 4,
	[Token(Token = "0x4000BBC")]
	CrossFadeStencilRef_1 = 8,
	[Token(Token = "0x4000BBD")]
	CrossFadeStencilRef_All = CrossFadeStencilRef_0 | CrossFadeStencilRef_1
}
