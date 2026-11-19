// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.AottgChangelogParser
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Changelog/AottgChangelogParser.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace ApplicationManagers.Changelog;

[Token(Token = "0x20009A9")]
public static class AottgChangelogParser
{
	[Token(Token = "0x20009AA")]
	private delegate bool Parser<T>(JSONNode node, out T value) where T : class;

	[Token(Token = "0x6005A0F")]
	[Address(RVA = "0x5D25170", Offset = "0x5D24170", VA = "0x5D25170")]
	public static bool TryParseLatestVersion(string json, out LatestChangelogVersionResponse version, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A10")]
	[Address(RVA = "0x5D25210", Offset = "0x5D24210", VA = "0x5D25210")]
	public static bool TryParseEntry(string json, out ChangelogEntryResponse entry, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A11")]
	[Address(RVA = "0x5D252B0", Offset = "0x5D242B0", VA = "0x5D252B0")]
	public static bool TryParseList(string json, out PublicChangelogListResponse list, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A12")]
	[Address(RVA = "0x5D25350", Offset = "0x5D24350", VA = "0x5D25350")]
	public static bool TryParseLatestVersion(JSONNode node, out LatestChangelogVersionResponse version)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A13")]
	[Address(RVA = "0x5D25950", Offset = "0x5D24950", VA = "0x5D25950")]
	public static bool TryParseEntry(JSONNode node, out ChangelogEntryResponse entry)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A14")]
	[Address(RVA = "0x5D25CC0", Offset = "0x5D24CC0", VA = "0x5D25CC0")]
	public static bool TryParseList(JSONNode node, out PublicChangelogListResponse list)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A15")]
	[Address(RVA = "0x5D26190", Offset = "0x5D25190", VA = "0x5D26190")]
	private static bool TryParseSummary(JSONNode node, out ChangelogSummaryResponse summary)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A16")]
	private static bool TryParse<T>(string json, Parser<T> parser, out T value, out string error) where T : class
	{
		return default(bool);
	}

	[Token(Token = "0x6005A17")]
	[Address(RVA = "0x5D25820", Offset = "0x5D24820", VA = "0x5D25820")]
	private static bool ReadGuid(JSONNode node, string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A18")]
	[Address(RVA = "0x5D25860", Offset = "0x5D24860", VA = "0x5D25860")]
	private static bool ReadRequiredString(JSONNode node, string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A19")]
	[Address(RVA = "0x5D25C20", Offset = "0x5D24C20", VA = "0x5D25C20")]
	private static bool ReadNullableString(JSONNode node, string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A1A")]
	[Address(RVA = "0x5D260C0", Offset = "0x5D250C0", VA = "0x5D260C0")]
	private static bool ReadNonNegativeInt(JSONNode node, string key, out int value)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A1B")]
	[Address(RVA = "0x5D26170", Offset = "0x5D25170", VA = "0x5D26170")]
	private static bool ReadPositiveInt(JSONNode node, string key, out int value)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A1C")]
	[Address(RVA = "0x5D257B0", Offset = "0x5D247B0", VA = "0x5D257B0")]
	private static bool IsNull(JSONNode node, string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A1D")]
	[Address(RVA = "0x5D25740", Offset = "0x5D24740", VA = "0x5D25740")]
	private static bool IsObject(JSONNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A1E")]
	private static bool Fail<T>(out T value, out string error) where T : class
	{
		return default(bool);
	}
}
