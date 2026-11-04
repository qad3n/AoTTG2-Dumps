// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.TextureXR
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001AB")]
public static class TextureXR
{
	[Token(Token = "0x4000840")]
	[FieldOffset(Offset = "0x0")]
	private static int m_MaxViews;

	[Token(Token = "0x4000841")]
	[FieldOffset(Offset = "0x8")]
	private static Texture m_BlackUIntTexture2DArray;

	[Token(Token = "0x4000842")]
	[FieldOffset(Offset = "0x10")]
	private static Texture m_BlackUIntTexture;

	[Token(Token = "0x4000843")]
	[FieldOffset(Offset = "0x18")]
	private static RTHandle m_BlackUIntTexture2DArrayRTH;

	[Token(Token = "0x4000844")]
	[FieldOffset(Offset = "0x20")]
	private static RTHandle m_BlackUIntTextureRTH;

	[Token(Token = "0x4000845")]
	[FieldOffset(Offset = "0x28")]
	private static Texture2DArray m_ClearTexture2DArray;

	[Token(Token = "0x4000846")]
	[FieldOffset(Offset = "0x30")]
	private static Texture2D m_ClearTexture;

	[Token(Token = "0x4000847")]
	[FieldOffset(Offset = "0x38")]
	private static RTHandle m_ClearTexture2DArrayRTH;

	[Token(Token = "0x4000848")]
	[FieldOffset(Offset = "0x40")]
	private static RTHandle m_ClearTextureRTH;

	[Token(Token = "0x4000849")]
	[FieldOffset(Offset = "0x48")]
	private static Texture2DArray m_MagentaTexture2DArray;

	[Token(Token = "0x400084A")]
	[FieldOffset(Offset = "0x50")]
	private static Texture2D m_MagentaTexture;

	[Token(Token = "0x400084B")]
	[FieldOffset(Offset = "0x58")]
	private static RTHandle m_MagentaTexture2DArrayRTH;

	[Token(Token = "0x400084C")]
	[FieldOffset(Offset = "0x60")]
	private static RTHandle m_MagentaTextureRTH;

	[Token(Token = "0x400084D")]
	[FieldOffset(Offset = "0x68")]
	private static Texture2D m_BlackTexture;

	[Token(Token = "0x400084E")]
	[FieldOffset(Offset = "0x70")]
	private static Texture3D m_BlackTexture3D;

	[Token(Token = "0x400084F")]
	[FieldOffset(Offset = "0x78")]
	private static Texture2DArray m_BlackTexture2DArray;

	[Token(Token = "0x4000850")]
	[FieldOffset(Offset = "0x80")]
	private static RTHandle m_BlackTexture2DArrayRTH;

	[Token(Token = "0x4000851")]
	[FieldOffset(Offset = "0x88")]
	private static RTHandle m_BlackTextureRTH;

	[Token(Token = "0x4000852")]
	[FieldOffset(Offset = "0x90")]
	private static RTHandle m_BlackTexture3DRTH;

	[Token(Token = "0x4000853")]
	[FieldOffset(Offset = "0x98")]
	private static Texture2DArray m_WhiteTexture2DArray;

	[Token(Token = "0x4000854")]
	[FieldOffset(Offset = "0xA0")]
	private static RTHandle m_WhiteTexture2DArrayRTH;

	[Token(Token = "0x4000855")]
	[FieldOffset(Offset = "0xA8")]
	private static RTHandle m_WhiteTextureRTH;

	[Token(Token = "0x17000197")]
	public static int maxViews
	{
		[Token(Token = "0x6000CA9")]
		[Address(RVA = "0x2B4EA70", Offset = "0x2B4D070", VA = "0x182B4EA70")]
		set
		{
		}
	}

	[Token(Token = "0x17000198")]
	public static int slices
	{
		[Token(Token = "0x6000CAA")]
		[Address(RVA = "0x2B4E9C0", Offset = "0x2B4CFC0", VA = "0x182B4E9C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000199")]
	public static bool useTexArray
	{
		[Token(Token = "0x6000CAB")]
		[Address(RVA = "0x2B4EA10", Offset = "0x2B4D010", VA = "0x182B4EA10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019A")]
	public static TextureDimension dimension
	{
		[Token(Token = "0x6000CAC")]
		[Address(RVA = "0x2B4E930", Offset = "0x2B4CF30", VA = "0x182B4E930")]
		get
		{
			return default(TextureDimension);
		}
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x2B4D630", Offset = "0x2B4BC30", VA = "0x182B4D630")]
	public static RTHandle GetBlackUIntTexture()
	{
		return null;
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x2B4D700", Offset = "0x2B4BD00", VA = "0x182B4D700")]
	public static RTHandle GetClearTexture()
	{
		return null;
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x2B4D7D0", Offset = "0x2B4BDD0", VA = "0x182B4D7D0")]
	public static RTHandle GetMagentaTexture()
	{
		return null;
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x2B4D550", Offset = "0x2B4BB50", VA = "0x182B4D550")]
	public static RTHandle GetBlackTexture()
	{
		return null;
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x2B4D4F0", Offset = "0x2B4BAF0", VA = "0x182B4D4F0")]
	public static RTHandle GetBlackTextureArray()
	{
		return null;
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x2B4D490", Offset = "0x2B4BA90", VA = "0x182B4D490")]
	public static RTHandle GetBlackTexture3D()
	{
		return null;
	}

	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x2B4D8A0", Offset = "0x2B4BEA0", VA = "0x182B4D8A0")]
	public static RTHandle GetWhiteTexture()
	{
		return null;
	}

	[Token(Token = "0x6000CB4")]
	[Address(RVA = "0x2B4D980", Offset = "0x2B4BF80", VA = "0x182B4D980")]
	public static void Initialize(CommandBuffer cmd, ComputeShader clearR32_UIntShader)
	{
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x2B4D270", Offset = "0x2B4B870", VA = "0x182B4D270")]
	private static Texture2DArray CreateTexture2DArrayFromTexture2D(Texture2D source, string name)
	{
		return null;
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x2B4CDD0", Offset = "0x2B4B3D0", VA = "0x182B4CDD0")]
	private static Texture CreateBlackUIntTextureArray(CommandBuffer cmd, ComputeShader clearR32_UIntShader)
	{
		return null;
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x2B4D070", Offset = "0x2B4B670", VA = "0x182B4D070")]
	private static Texture CreateBlackUintTexture(CommandBuffer cmd, ComputeShader clearR32_UIntShader)
	{
		return null;
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x2B4CD00", Offset = "0x2B4B300", VA = "0x182B4CD00")]
	private static Texture3D CreateBlackTexture3D(string name)
	{
		return null;
	}
}
