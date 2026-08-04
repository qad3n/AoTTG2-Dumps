// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.AottgChangelogParser
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Changelog/AottgChangelogParser.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace ApplicationManagers.Changelog;

[Token(Token = "0x20007B7")]
public static class AottgChangelogParser
{
	[Token(Token = "0x20007B8")]
	private delegate bool Parser<T>(JSONNode node, out T value) where T : class;

	[Token(Token = "0x6004A3E")]
	[Address(RVA = "0x43C8BF0", Offset = "0x43C8BF0", VA = "0x43C8BF0")]
	public static bool TryParseLatestVersion(string json, out LatestChangelogVersionResponse version, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A3F")]
	[Address(RVA = "0x43C8C90", Offset = "0x43C8C90", VA = "0x43C8C90")]
	public static bool TryParseEntry(string json, out ChangelogEntryResponse entry, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A40")]
	[Address(RVA = "0x43C8D30", Offset = "0x43C8D30", VA = "0x43C8D30")]
	public static bool TryParseList(string json, out PublicChangelogListResponse list, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A41")]
	[Address(RVA = "0x43C8DD0", Offset = "0x43C8DD0", VA = "0x43C8DD0")]
	public static bool TryParseLatestVersion(JSONNode node, out LatestChangelogVersionResponse version)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A42")]
	[Address(RVA = "0x43C9580", Offset = "0x43C9580", VA = "0x43C9580")]
	public static bool TryParseEntry(JSONNode node, out ChangelogEntryResponse entry)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A43")]
	[Address(RVA = "0x43C99C0", Offset = "0x43C99C0", VA = "0x43C99C0")]
	public static bool TryParseList(JSONNode node, out PublicChangelogListResponse list)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A44")]
	[Address(RVA = "0x43C9EF0", Offset = "0x43C9EF0", VA = "0x43C9EF0")]
	private static bool TryParseSummary(JSONNode node, out ChangelogSummaryResponse summary)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A45")]
	private static bool TryParse<T>(string json, Parser<T> parser, out T value, out string error) where T : class
	{
		return default(bool);
	}

	[Token(Token = "0x6004A46")]
	[Address(RVA = "0x43C9450", Offset = "0x43C9450", VA = "0x43C9450")]
	private static bool ReadGuid(JSONNode node, string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A47")]
	[Address(RVA = "0x43C9490", Offset = "0x43C9490", VA = "0x43C9490")]
	private static bool ReadRequiredString(JSONNode node, string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A48")]
	[Address(RVA = "0x43C9920", Offset = "0x43C9920", VA = "0x43C9920")]
	private static bool ReadNullableString(JSONNode node, string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A49")]
	[Address(RVA = "0x43C9E20", Offset = "0x43C9E20", VA = "0x43C9E20")]
	private static bool ReadNonNegativeInt(JSONNode node, string key, out int value)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A4A")]
	[Address(RVA = "0x43C9ED0", Offset = "0x43C9ED0", VA = "0x43C9ED0")]
	private static bool ReadPositiveInt(JSONNode node, string key, out int value)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A4B")]
	[Address(RVA = "0x43C93E0", Offset = "0x43C93E0", VA = "0x43C93E0")]
	private static bool IsNull(JSONNode node, string key)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A4C")]
	[Address(RVA = "0x43C9370", Offset = "0x43C9370", VA = "0x43C9370")]
	private static bool IsObject(JSONNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A4D")]
	private static bool Fail<T>(out T value, out string error) where T : class
	{
		return default(bool);
	}
}
