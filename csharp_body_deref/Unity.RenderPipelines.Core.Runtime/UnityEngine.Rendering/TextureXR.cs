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
		[Address(RVA = "0x65348D0", Offset = "0x65338D0", VA = "0x65348D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000198")]
	public static int slices
	{
		[Token(Token = "0x6000CAA")]
		[Address(RVA = "0x6534920", Offset = "0x6533920", VA = "0x6534920")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000199")]
	public static bool useTexArray
	{
		[Token(Token = "0x6000CAB")]
		[Address(RVA = "0x6534990", Offset = "0x6533990", VA = "0x6534990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019A")]
	public static TextureDimension dimension
	{
		[Token(Token = "0x6000CAC")]
		[Address(RVA = "0x65349E0", Offset = "0x65339E0", VA = "0x65349E0")]
		get
		{
			return default(TextureDimension);
		}
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x6534A70", Offset = "0x6533A70", VA = "0x6534A70")]
	public static RTHandle GetBlackUIntTexture()
	{
		return null;
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x6534B50", Offset = "0x6533B50", VA = "0x6534B50")]
	public static RTHandle GetClearTexture()
	{
		return null;
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x6534C30", Offset = "0x6533C30", VA = "0x6534C30")]
	public static RTHandle GetMagentaTexture()
	{
		return null;
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x6534D10", Offset = "0x6533D10", VA = "0x6534D10")]
	public static RTHandle GetBlackTexture()
	{
		return null;
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x6534DF0", Offset = "0x6533DF0", VA = "0x6534DF0")]
	public static RTHandle GetBlackTextureArray()
	{
		return null;
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x6534E60", Offset = "0x6533E60", VA = "0x6534E60")]
	public static RTHandle GetBlackTexture3D()
	{
		return null;
	}

	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x6534ED0", Offset = "0x6533ED0", VA = "0x6534ED0")]
	public static RTHandle GetWhiteTexture()
	{
		return null;
	}

	[Token(Token = "0x6000CB4")]
	[Address(RVA = "0x6534FB0", Offset = "0x6533FB0", VA = "0x6534FB0")]
	public static void Initialize(CommandBuffer cmd, ComputeShader clearR32_UIntShader)
	{
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x65364F0", Offset = "0x65354F0", VA = "0x65364F0")]
	private static Texture2DArray CreateTexture2DArrayFromTexture2D(Texture2D source, string name)
	{
		return null;
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x6536080", Offset = "0x6535080", VA = "0x6536080")]
	private static Texture CreateBlackUIntTextureArray(CommandBuffer cmd, ComputeShader clearR32_UIntShader)
	{
		return null;
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x6536330", Offset = "0x6535330", VA = "0x6536330")]
	private static Texture CreateBlackUintTexture(CommandBuffer cmd, ComputeShader clearR32_UIntShader)
	{
		return null;
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x6536710", Offset = "0x6535710", VA = "0x6536710")]
	private static Texture3D CreateBlackTexture3D(string name)
	{
		return null;
	}
}
