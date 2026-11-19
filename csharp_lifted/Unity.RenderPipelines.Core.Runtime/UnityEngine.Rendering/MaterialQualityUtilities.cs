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

[Token(Token = "0x20001E4")]
[MovedFrom("Utilities")]
public static class MaterialQualityUtilities
{
	[Token(Token = "0x4000951")]
	[FieldOffset(Offset = "0x0")]
	public static string[] KeywordNames;

	[Token(Token = "0x4000952")]
	[FieldOffset(Offset = "0x8")]
	public static string[] EnumNames;

	[Token(Token = "0x4000953")]
	[FieldOffset(Offset = "0x10")]
	public static ShaderKeyword[] Keywords;

	[Token(Token = "0x6000E83")]
	[Address(RVA = "0x654E280", Offset = "0x654D280", VA = "0x654E280")]
	public static MaterialQuality GetHighestQuality(this MaterialQuality levels)
	{
		return default(MaterialQuality);
	}

	[Token(Token = "0x6000E84")]
	[Address(RVA = "0x654E330", Offset = "0x654D330", VA = "0x654E330")]
	public static MaterialQuality GetClosestQuality(this MaterialQuality availableLevels, MaterialQuality requestedLevel)
	{
		return default(MaterialQuality);
	}

	[Token(Token = "0x6000E85")]
	[Address(RVA = "0x654E560", Offset = "0x654D560", VA = "0x654E560")]
	public static void SetGlobalShaderKeywords(this MaterialQuality level)
	{
	}

	[Token(Token = "0x6000E86")]
	[Address(RVA = "0x654E650", Offset = "0x654D650", VA = "0x654E650")]
	public static void SetGlobalShaderKeywords(this MaterialQuality level, CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000E87")]
	[Address(RVA = "0x654E480", Offset = "0x654D480", VA = "0x654E480")]
	public static int ToFirstIndex(this MaterialQuality level)
	{
		return default(int);
	}

	[Token(Token = "0x6000E88")]
	[Address(RVA = "0x654E550", Offset = "0x654D550", VA = "0x654E550")]
	public static MaterialQuality FromIndex(int index)
	{
		return default(MaterialQuality);
	}
}
