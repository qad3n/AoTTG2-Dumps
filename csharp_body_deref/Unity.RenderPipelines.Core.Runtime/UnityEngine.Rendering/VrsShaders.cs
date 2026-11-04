// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VrsShaders
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000233")]
internal static class VrsShaders
{
	[Token(Token = "0x40009E5")]
	internal const string k_TileSizePrefix = "VRS_TILE_SIZE_";

	[Token(Token = "0x40009E6")]
	internal const string k_DisableTexture2dXArray = "DISABLE_TEXTURE2D_X_ARRAY";

	[Token(Token = "0x40009E7")]
	internal const string k_YFlip = "APPLY_Y_FLIP";

	[Token(Token = "0x40009E8")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int s_ScaleBias;

	[Token(Token = "0x40009E9")]
	[FieldOffset(Offset = "0x4")]
	internal static readonly int s_MainTex;

	[Token(Token = "0x40009EA")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly int s_MainTexLut;

	[Token(Token = "0x40009EB")]
	[FieldOffset(Offset = "0xC")]
	internal static readonly int s_ShadingRateNativeValues;

	[Token(Token = "0x40009EC")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly int s_ShadingRateImage;

	[Token(Token = "0x40009ED")]
	internal const string k_KernelTextureCopy = "TextureCopy";

	[Token(Token = "0x40009EE")]
	internal const string k_KernelTextureReduce = "TextureReduce";

	[Token(Token = "0x40009EF")]
	[FieldOffset(Offset = "0x14")]
	internal static readonly int s_VisualizationLut;

	[Token(Token = "0x40009F0")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly int s_VisualizationParams;
}
