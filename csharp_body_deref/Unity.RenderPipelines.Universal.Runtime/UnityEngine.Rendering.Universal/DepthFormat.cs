// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DepthFormat
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001F4")]
public enum DepthFormat
{
	[Token(Token = "0x4000BCA")]
	[RenderPathCompatible(RenderPathCompatibility.All)]
	Default = 0,
	[Token(Token = "0x4000BCB")]
	[RenderPathCompatible(RenderPathCompatibility.Forward | RenderPathCompatibility.ForwardPlus)]
	Depth_16 = 90,
	[Token(Token = "0x4000BCC")]
	[RenderPathCompatible(RenderPathCompatibility.Forward | RenderPathCompatibility.ForwardPlus)]
	Depth_24 = 91,
	[Token(Token = "0x4000BCD")]
	[RenderPathCompatible(RenderPathCompatibility.Forward | RenderPathCompatibility.ForwardPlus)]
	Depth_32 = 93,
	[Token(Token = "0x4000BCE")]
	[RenderPathCompatible(RenderPathCompatibility.All)]
	Depth_16_Stencil_8 = 151,
	[Token(Token = "0x4000BCF")]
	[RenderPathCompatible(RenderPathCompatibility.All)]
	Depth_24_Stencil_8 = 92,
	[Token(Token = "0x4000BD0")]
	[RenderPathCompatible(RenderPathCompatibility.All)]
	Depth_32_Stencil_8 = 94
}
