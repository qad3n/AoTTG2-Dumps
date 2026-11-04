// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.Shaders
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005D4")]
internal static class Shaders
{
	[Token(Token = "0x4001594")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string k_AtlasBlit;

	[Token(Token = "0x4001595")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string k_Default;

	[Token(Token = "0x4001596")]
	[FieldOffset(Offset = "0x10")]
	public static readonly string k_RuntimeGaussianBlur;

	[Token(Token = "0x4001597")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string k_RuntimeColorEffect;

	[Token(Token = "0x4001598")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string k_ColorConversionBlit;

	[Token(Token = "0x4001599")]
	[FieldOffset(Offset = "0x28")]
	public static readonly string k_ForceGammaKeyword;

	[Token(Token = "0x400159A")]
	[FieldOffset(Offset = "0x30")]
	public static readonly string k_TextureSlotCount1;

	[Token(Token = "0x400159B")]
	[FieldOffset(Offset = "0x38")]
	public static readonly string k_TextureSlotCount2;

	[Token(Token = "0x400159C")]
	[FieldOffset(Offset = "0x40")]
	public static readonly string k_TextureSlotCount4;

	[Token(Token = "0x400159D")]
	[FieldOffset(Offset = "0x48")]
	public static readonly string k_ForceRenderTypeSolid;

	[Token(Token = "0x400159E")]
	[FieldOffset(Offset = "0x50")]
	public static readonly string k_ForceRenderTypeTextured;

	[Token(Token = "0x400159F")]
	[FieldOffset(Offset = "0x58")]
	public static readonly string k_ForceRenderTypeText;

	[Token(Token = "0x40015A0")]
	[FieldOffset(Offset = "0x60")]
	public static readonly string k_ForceRenderTypeSvgGradient;

	[Token(Token = "0x40015A1")]
	[FieldOffset(Offset = "0x68")]
	private static Material s_DefaultMaterial;

	[Token(Token = "0x40015A2")]
	[FieldOffset(Offset = "0x70")]
	private static int s_RefCount;

	[Token(Token = "0x17000AA4")]
	public static Material defaultMaterial
	{
		[Token(Token = "0x6002B4C")]
		[Address(RVA = "0x31B05C0", Offset = "0x31AEBC0", VA = "0x1831B05C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002B4D")]
	[Address(RVA = "0x31AFF60", Offset = "0x31AE560", VA = "0x1831AFF60")]
	private static Material GetOrCreateMaterial(ref Material material, string shaderName)
	{
		return null;
	}

	[Token(Token = "0x6002B4E")]
	[Address(RVA = "0x31AFF00", Offset = "0x31AE500", VA = "0x1831AFF00")]
	public static void Acquire()
	{
	}

	[Token(Token = "0x6002B4F")]
	[Address(RVA = "0x31B00D0", Offset = "0x31AE6D0", VA = "0x1831B00D0")]
	public static void Release()
	{
	}
}
