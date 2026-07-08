using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001C8")]
[MovedFrom("Utilities")]
public static class MaterialQualityUtilities
{
	[Token(Token = "0x40007DA")]
	[FieldOffset(Offset = "0x0")]
	public static string[] KeywordNames;

	[Token(Token = "0x40007DB")]
	[FieldOffset(Offset = "0x8")]
	public static string[] EnumNames;

	[Token(Token = "0x40007DC")]
	[FieldOffset(Offset = "0x10")]
	public static ShaderKeyword[] Keywords;

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x48DD1D0", Offset = "0x48DD1D0", VA = "0x48DD1D0")]
	public static MaterialQuality GetHighestQuality(this MaterialQuality levels)
	{
		return default(MaterialQuality);
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x48DD280", Offset = "0x48DD280", VA = "0x48DD280")]
	public static MaterialQuality GetClosestQuality(this MaterialQuality availableLevels, MaterialQuality requestedLevel)
	{
		return default(MaterialQuality);
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x48DD4D0", Offset = "0x48DD4D0", VA = "0x48DD4D0")]
	public static void SetGlobalShaderKeywords(this MaterialQuality level)
	{
	}

	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x48DD5C0", Offset = "0x48DD5C0", VA = "0x48DD5C0")]
	public static void SetGlobalShaderKeywords(this MaterialQuality level, CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x48DD440", Offset = "0x48DD440", VA = "0x48DD440")]
	public static int ToFirstIndex(this MaterialQuality level)
	{
		return default(int);
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x48DD4C0", Offset = "0x48DD4C0", VA = "0x48DD4C0")]
	public static MaterialQuality FromIndex(int index)
	{
		return default(MaterialQuality);
	}
}
