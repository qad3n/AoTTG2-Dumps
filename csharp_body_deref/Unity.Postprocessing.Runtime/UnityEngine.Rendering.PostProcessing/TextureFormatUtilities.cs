// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.TextureFormatUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B65DA0", Offset = "0x4B65DA0", VA = "0x4B65DA0")]
	static TextureFormatUtilities()
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x4B66AB0", Offset = "0x4B66AB0", VA = "0x4B66AB0")]
	private static bool IsObsolete(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x4B66BC0", Offset = "0x4B66BC0", VA = "0x4B66BC0")]
	public static RenderTextureFormat GetUncompressedRenderTextureFormat(Texture texture)
	{
		return default(RenderTextureFormat);
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x4B66D20", Offset = "0x4B66D20", VA = "0x4B66D20")]
	internal static bool IsSupported(this RenderTextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x4B66DB0", Offset = "0x4B66DB0", VA = "0x4B66DB0")]
	internal static bool IsSupported(this TextureFormat format)
	{
		return default(bool);
	}
}
