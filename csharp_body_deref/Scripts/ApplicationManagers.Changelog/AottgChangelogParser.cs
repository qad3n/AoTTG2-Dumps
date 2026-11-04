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

[Token(Token = "0x2000942")]
public static class AottgChangelogParser
{
	[Token(Token = "0x2000943")]
	private delegate bool Parser<T>(JSONNode node, out T value) where T : class;

	[Token(Token = "0x60056B6")]
	[Address(RVA = "0x23612A0", Offset = "0x235F8A0", VA = "0x1823612A0")]
	public static bool TryParseLatestVersion(string json, out LatestChangelogVersionResponse version, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x60056B7")]
	[Address(RVA = "0x2361210", Offset = "0x235F810", VA = "0x182361210")]
	public static bool TryParseEntry(string json, out ChangelogEntryResponse entry, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x60056B8")]
	[Address(RVA = "0x2361BD0", Offset = "0x23601D0", VA = "0x182361BD0")]
	public static bool TryParseList(string json, out PublicChangelogListResponse list, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x60056B9")]
	[Address(RVA = "0x2361330", Offset = "0x235F930", VA = "0x182361330")]
	public static bool TryParseLatestVersion(JSONNode node, out LatestChangelogVersionResponse version)
	{
		return default(bool);
	}

	[Token(Token = "0x60056BA")]
	[Address(RVA = "0x2360E90", Offset = "0x235F490", VA = "0x182360E90")]
	public static bool TryParseEntry(JSONNode node, out ChangelogEntryResponse entry)
	{
		return default(bool);
	}

	[Token(Token = "0x60056BB")]
	[Address(RVA = "0x2361770", Offset = "0x235FD70", VA = "0x182361770")]
	public static bool TryParseList(JSONNode node, out PublicChangelogListResponse list)
	{
		return default(bool);
	}

	[Token(Token = "0x60056BC")]
	[Address(RVA = "0x2361C60", Offset = "0x2360260", VA = "0x182361C60")]
	private static bool TryParseSummary(JSONNode node, out ChangelogSummaryResponse summary)
	{
		return default(bool);
	}

	[Token(Token = "0x60056BD")]
	private static bool TryParse<T>(string json, Parser<T> parser, out T value, out string error) where T : class
	{
		return default(bool);
	}

	[Token(Token = "0x60056BE")]
	[Address(RVA = "0x2360B70", Offset = "0x235F170", VA = "0x182360B70")]
	private static bool ReadGuid(JSONNode node, string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60056BF")]
	[Address(RVA = "0x2360D80", Offset = "0x235F380", VA = "0x182360D80")]
	private static bool ReadRequiredString(JSONNode node, string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60056C0")]
	[Address(RVA = "0x2360C80", Offset = "0x235F280", VA = "0x182360C80")]
	private static bool ReadNullableString(JSONNode node, string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60056C1")]
	[Address(RVA = "0x2360BB0", Offset = "0x235F1B0", VA = "0x182360BB0")]
	private static bool ReadNonNegativeInt(JSONNode node, string key, out int value)
	{
		return default(bool);
	}

	[Token(Token = "0x60056C2")]
	[Address(RVA = "0x2360D50", Offset = "0x235F350", VA = "0x182360D50")]
	private static bool ReadPositiveInt(JSONNode node, string key, out int value)
	{
		return default(bool);
	}

	[Token(Token = "0x60056C3")]
	[Address(RVA = "0x2360A70", Offset = "0x235F070", VA = "0x182360A70")]
	private static bool IsNull(JSONNode node, string key)
	{
		return default(bool);
	}

	[Token(Token = "0x60056C4")]
	[Address(RVA = "0x2360AF0", Offset = "0x235F0F0", VA = "0x182360AF0")]
	private static bool IsObject(JSONNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x60056C5")]
	private static bool Fail<T>(out T value, out string error) where T : class
	{
		return default(bool);
	}
}
