using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x200008C")]
public static class TextureFormatUtilities
{
	[Token(Token = "0x40002F9")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<int, RenderTextureFormat> s_FormatAliasMap;

	[Token(Token = "0x40002FA")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<int, bool> s_SupportedRenderTextureFormats;

	[Token(Token = "0x40002FB")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<int, bool> s_SupportedTextureFormats;

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x4840CB0", Offset = "0x4840CB0", VA = "0x4840CB0")]
	static TextureFormatUtilities()
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x48419C0", Offset = "0x48419C0", VA = "0x48419C0")]
	private static bool IsObsolete(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x4841AD0", Offset = "0x4841AD0", VA = "0x4841AD0")]
	public static RenderTextureFormat GetUncompressedRenderTextureFormat(Texture texture)
	{
		return default(RenderTextureFormat);
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x4841C30", Offset = "0x4841C30", VA = "0x4841C30")]
	internal static bool IsSupported(this RenderTextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x4841CC0", Offset = "0x4841CC0", VA = "0x4841CC0")]
	internal static bool IsSupported(this TextureFormat format)
	{
		return default(bool);
	}
}
