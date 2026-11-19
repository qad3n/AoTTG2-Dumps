// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Credits.AottgCreditsParser
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Credits/AottgCreditsParser.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace ApplicationManagers.Credits;

[Token(Token = "0x200099E")]
public static class AottgCreditsParser
{
	[Token(Token = "0x60059B4")]
	[Address(RVA = "0x5D22B80", Offset = "0x5D21B80", VA = "0x5D22B80")]
	public static bool TryParse(string json, out AottgCreditsResponse credits, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x60059B5")]
	[Address(RVA = "0x5D22D10", Offset = "0x5D21D10", VA = "0x5D22D10")]
	public static bool TryParse(JSONNode root, out AottgCreditsResponse credits, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x60059B6")]
	[Address(RVA = "0x5D23060", Offset = "0x5D22060", VA = "0x5D23060")]
	private static bool TryParseCategory(JSONNode node, out AottgCreditCategory category)
	{
		return default(bool);
	}

	[Token(Token = "0x60059B7")]
	[Address(RVA = "0x5D23670", Offset = "0x5D22670", VA = "0x5D23670")]
	private static bool TryReadGroups(JSONNode node, out AottgCreditGroup[] groups)
	{
		return default(bool);
	}

	[Token(Token = "0x60059B8")]
	[Address(RVA = "0x5D23830", Offset = "0x5D22830", VA = "0x5D23830")]
	private static bool TryParseGroup(JSONNode node, out AottgCreditGroup group)
	{
		return default(bool);
	}

	[Token(Token = "0x60059B9")]
	[Address(RVA = "0x5D233E0", Offset = "0x5D223E0", VA = "0x5D233E0")]
	private static bool TryReadContributors(JSONNode node, out AottgCreditContributor[] contributors)
	{
		return default(bool);
	}

	[Token(Token = "0x60059BA")]
	[Address(RVA = "0x5D239A0", Offset = "0x5D229A0", VA = "0x5D239A0")]
	private static bool TryParseContributor(JSONNode node, out AottgCreditContributor contributor)
	{
		return default(bool);
	}

	[Token(Token = "0x60059BB")]
	[Address(RVA = "0x5D232C0", Offset = "0x5D222C0", VA = "0x5D232C0")]
	private static bool TryReadDescription(JSONNode node, out string description)
	{
		return default(bool);
	}

	[Token(Token = "0x60059BC")]
	[Address(RVA = "0x5D23200", Offset = "0x5D22200", VA = "0x5D23200")]
	private static bool TryReadRequiredString(JSONNode node, string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60059BD")]
	[Address(RVA = "0x5D23BE0", Offset = "0x5D22BE0", VA = "0x5D23BE0")]
	private static string Trimmed(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x60059BE")]
	[Address(RVA = "0x5D22FF0", Offset = "0x5D21FF0", VA = "0x5D22FF0")]
	private static bool IsObject(JSONNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x60059BF")]
	[Address(RVA = "0x5D22CB0", Offset = "0x5D21CB0", VA = "0x5D22CB0")]
	private static bool Fail(out AottgCreditsResponse credits, out string error)
	{
		return default(bool);
	}
}
