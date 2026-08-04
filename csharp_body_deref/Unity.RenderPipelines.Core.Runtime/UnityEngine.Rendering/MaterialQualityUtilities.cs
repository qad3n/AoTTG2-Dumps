// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.MaterialQualityUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4C02240", Offset = "0x4C02240", VA = "0x4C02240")]
	public static MaterialQuality GetHighestQuality(this MaterialQuality levels)
	{
		return default(MaterialQuality);
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x4C022F0", Offset = "0x4C022F0", VA = "0x4C022F0")]
	public static MaterialQuality GetClosestQuality(this MaterialQuality availableLevels, MaterialQuality requestedLevel)
	{
		return default(MaterialQuality);
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x4C02540", Offset = "0x4C02540", VA = "0x4C02540")]
	public static void SetGlobalShaderKeywords(this MaterialQuality level)
	{
	}

	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x4C02630", Offset = "0x4C02630", VA = "0x4C02630")]
	public static void SetGlobalShaderKeywords(this MaterialQuality level, CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x4C024B0", Offset = "0x4C024B0", VA = "0x4C024B0")]
	public static int ToFirstIndex(this MaterialQuality level)
	{
		return default(int);
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x4C02530", Offset = "0x4C02530", VA = "0x4C02530")]
	public static MaterialQuality FromIndex(int index)
	{
		return default(MaterialQuality);
	}
}
