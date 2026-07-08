using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000194")]
public static class TextureXR
{
	[Token(Token = "0x40006F8")]
	[FieldOffset(Offset = "0x0")]
	private static int m_MaxViews;

	[Token(Token = "0x40006F9")]
	[FieldOffset(Offset = "0x8")]
	private static Texture m_BlackUIntTexture2DArray;

	[Token(Token = "0x40006FA")]
	[FieldOffset(Offset = "0x10")]
	private static Texture m_BlackUIntTexture;

	[Token(Token = "0x40006FB")]
	[FieldOffset(Offset = "0x18")]
	private static RTHandle m_BlackUIntTexture2DArrayRTH;

	[Token(Token = "0x40006FC")]
	[FieldOffset(Offset = "0x20")]
	private static RTHandle m_BlackUIntTextureRTH;

	[Token(Token = "0x40006FD")]
	[FieldOffset(Offset = "0x28")]
	private static Texture2DArray m_ClearTexture2DArray;

	[Token(Token = "0x40006FE")]
	[FieldOffset(Offset = "0x30")]
	private static Texture2D m_ClearTexture;

	[Token(Token = "0x40006FF")]
	[FieldOffset(Offset = "0x38")]
	private static RTHandle m_ClearTexture2DArrayRTH;

	[Token(Token = "0x4000700")]
	[FieldOffset(Offset = "0x40")]
	private static RTHandle m_ClearTextureRTH;

	[Token(Token = "0x4000701")]
	[FieldOffset(Offset = "0x48")]
	private static Texture2DArray m_MagentaTexture2DArray;

	[Token(Token = "0x4000702")]
	[FieldOffset(Offset = "0x50")]
	private static Texture2D m_MagentaTexture;

	[Token(Token = "0x4000703")]
	[FieldOffset(Offset = "0x58")]
	private static RTHandle m_MagentaTexture2DArrayRTH;

	[Token(Token = "0x4000704")]
	[FieldOffset(Offset = "0x60")]
	private static RTHandle m_MagentaTextureRTH;

	[Token(Token = "0x4000705")]
	[FieldOffset(Offset = "0x68")]
	private static Texture2D m_BlackTexture;

	[Token(Token = "0x4000706")]
	[FieldOffset(Offset = "0x70")]
	private static Texture3D m_BlackTexture3D;

	[Token(Token = "0x4000707")]
	[FieldOffset(Offset = "0x78")]
	private static Texture2DArray m_BlackTexture2DArray;

	[Token(Token = "0x4000708")]
	[FieldOffset(Offset = "0x80")]
	private static RTHandle m_BlackTexture2DArrayRTH;

	[Token(Token = "0x4000709")]
	[FieldOffset(Offset = "0x88")]
	private static RTHandle m_BlackTextureRTH;

	[Token(Token = "0x400070A")]
	[FieldOffset(Offset = "0x90")]
	private static RTHandle m_BlackTexture3DRTH;

	[Token(Token = "0x400070B")]
	[FieldOffset(Offset = "0x98")]
	private static Texture2DArray m_WhiteTexture2DArray;

	[Token(Token = "0x400070C")]
	[FieldOffset(Offset = "0xA0")]
	private static RTHandle m_WhiteTexture2DArrayRTH;

	[Token(Token = "0x400070D")]
	[FieldOffset(Offset = "0xA8")]
	private static RTHandle m_WhiteTextureRTH;

	[Token(Token = "0x1700014C")]
	public static int maxViews
	{
		[Token(Token = "0x6000B91")]
		[Address(RVA = "0x48C74A0", Offset = "0x48C74A0", VA = "0x48C74A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700014D")]
	public static int slices
	{
		[Token(Token = "0x6000B92")]
		[Address(RVA = "0x48C74F0", Offset = "0x48C74F0", VA = "0x48C74F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014E")]
	public static bool useTexArray
	{
		[Token(Token = "0x6000B93")]
		[Address(RVA = "0x48C7560", Offset = "0x48C7560", VA = "0x48C7560")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700014F")]
	public static TextureDimension dimension
	{
		[Token(Token = "0x6000B94")]
		[Address(RVA = "0x48C75A0", Offset = "0x48C75A0", VA = "0x48C75A0")]
		get
		{
			return default(TextureDimension);
		}
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x48C7620", Offset = "0x48C7620", VA = "0x48C7620")]
	public static RTHandle GetBlackUIntTexture()
	{
		return null;
	}

	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x48C76E0", Offset = "0x48C76E0", VA = "0x48C76E0")]
	public static RTHandle GetClearTexture()
	{
		return null;
	}

	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x48C77A0", Offset = "0x48C77A0", VA = "0x48C77A0")]
	public static RTHandle GetMagentaTexture()
	{
		return null;
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x48C7860", Offset = "0x48C7860", VA = "0x48C7860")]
	public static RTHandle GetBlackTexture()
	{
		return null;
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x48C7920", Offset = "0x48C7920", VA = "0x48C7920")]
	public static RTHandle GetBlackTextureArray()
	{
		return null;
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x48C7990", Offset = "0x48C7990", VA = "0x48C7990")]
	public static RTHandle GetBlackTexture3D()
	{
		return null;
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x48C7A00", Offset = "0x48C7A00", VA = "0x48C7A00")]
	public static RTHandle GetWhiteTexture()
	{
		return null;
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x48C7AC0", Offset = "0x48C7AC0", VA = "0x48C7AC0")]
	public static void Initialize(CommandBuffer cmd, ComputeShader clearR32_UIntShader)
	{
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x48C91E0", Offset = "0x48C91E0", VA = "0x48C91E0")]
	private static Texture2DArray CreateTexture2DArrayFromTexture2D(Texture2D source, string name)
	{
		return null;
	}

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x48C8C80", Offset = "0x48C8C80", VA = "0x48C8C80")]
	private static Texture CreateBlackUIntTextureArray(CommandBuffer cmd, ComputeShader clearR32_UIntShader)
	{
		return null;
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x48C8F30", Offset = "0x48C8F30", VA = "0x48C8F30")]
	private static Texture CreateBlackUintTexture(CommandBuffer cmd, ComputeShader clearR32_UIntShader)
	{
		return null;
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x48C9430", Offset = "0x48C9430", VA = "0x48C9430")]
	private static Texture3D CreateBlackTexture3D(string name)
	{
		return null;
	}
}
