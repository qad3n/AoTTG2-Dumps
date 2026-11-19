// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.Shaders
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005BF")]
internal static class Shaders
{
	[Token(Token = "0x40014D6")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string k_AtlasBlit;

	[Token(Token = "0x40014D7")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string k_Default;

	[Token(Token = "0x40014D8")]
	[FieldOffset(Offset = "0x10")]
	public static readonly string k_RuntimeGaussianBlur;

	[Token(Token = "0x40014D9")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string k_RuntimeColorEffect;

	[Token(Token = "0x40014DA")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string k_ColorConversionBlit;

	[Token(Token = "0x40014DB")]
	[FieldOffset(Offset = "0x28")]
	public static readonly string k_ForceGammaKeyword;

	[Token(Token = "0x40014DC")]
	[FieldOffset(Offset = "0x30")]
	public static readonly string k_TextureSlotCount1;

	[Token(Token = "0x40014DD")]
	[FieldOffset(Offset = "0x38")]
	public static readonly string k_TextureSlotCount2;

	[Token(Token = "0x40014DE")]
	[FieldOffset(Offset = "0x40")]
	public static readonly string k_TextureSlotCount4;

	[Token(Token = "0x40014DF")]
	[FieldOffset(Offset = "0x48")]
	public static readonly string k_ForceRenderTypeSolid;

	[Token(Token = "0x40014E0")]
	[FieldOffset(Offset = "0x50")]
	public static readonly string k_ForceRenderTypeTextured;

	[Token(Token = "0x40014E1")]
	[FieldOffset(Offset = "0x58")]
	public static readonly string k_ForceRenderTypeText;

	[Token(Token = "0x40014E2")]
	[FieldOffset(Offset = "0x60")]
	public static readonly string k_ForceRenderTypeSvgGradient;

	[Token(Token = "0x40014E3")]
	[FieldOffset(Offset = "0x68")]
	private static Material s_DefaultMaterial;

	[Token(Token = "0x40014E4")]
	[FieldOffset(Offset = "0x70")]
	private static int s_RefCount;

	[Token(Token = "0x17000A98")]
	public static Material defaultMaterial
	{
		[Token(Token = "0x6002AEB")]
		[Address(RVA = "0x6BA9FD0", Offset = "0x6BA8FD0", VA = "0x6BA9FD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002AEC")]
	[Address(RVA = "0x6BAA020", Offset = "0x6BA9020", VA = "0x6BAA020")]
	private static Material GetOrCreateMaterial(ref Material material, string shaderName)
	{
		return null;
	}

	[Token(Token = "0x6002AED")]
	[Address(RVA = "0x6BAA180", Offset = "0x6BA9180", VA = "0x6BAA180")]
	public static void Acquire()
	{
	}

	[Token(Token = "0x6002AEE")]
	[Address(RVA = "0x6BAA1F0", Offset = "0x6BA91F0", VA = "0x6BAA1F0")]
	public static void Release()
	{
	}
}
