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

[Token(Token = "0x20007AC")]
public static class AottgCreditsParser
{
	[Token(Token = "0x60049E3")]
	[Address(RVA = "0x43C6560", Offset = "0x43C6560", VA = "0x43C6560")]
	public static bool TryParse(string json, out AottgCreditsResponse credits, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x60049E4")]
	[Address(RVA = "0x43C6700", Offset = "0x43C6700", VA = "0x43C6700")]
	public static bool TryParse(JSONNode root, out AottgCreditsResponse credits, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x60049E5")]
	[Address(RVA = "0x43C6A50", Offset = "0x43C6A50", VA = "0x43C6A50")]
	private static bool TryParseCategory(JSONNode node, out AottgCreditCategory category)
	{
		return default(bool);
	}

	[Token(Token = "0x60049E6")]
	[Address(RVA = "0x43C7060", Offset = "0x43C7060", VA = "0x43C7060")]
	private static bool TryReadGroups(JSONNode node, out AottgCreditGroup[] groups)
	{
		return default(bool);
	}

	[Token(Token = "0x60049E7")]
	[Address(RVA = "0x43C7230", Offset = "0x43C7230", VA = "0x43C7230")]
	private static bool TryParseGroup(JSONNode node, out AottgCreditGroup group)
	{
		return default(bool);
	}

	[Token(Token = "0x60049E8")]
	[Address(RVA = "0x43C6DD0", Offset = "0x43C6DD0", VA = "0x43C6DD0")]
	private static bool TryReadContributors(JSONNode node, out AottgCreditContributor[] contributors)
	{
		return default(bool);
	}

	[Token(Token = "0x60049E9")]
	[Address(RVA = "0x43C73A0", Offset = "0x43C73A0", VA = "0x43C73A0")]
	private static bool TryParseContributor(JSONNode node, out AottgCreditContributor contributor)
	{
		return default(bool);
	}

	[Token(Token = "0x60049EA")]
	[Address(RVA = "0x43C6CB0", Offset = "0x43C6CB0", VA = "0x43C6CB0")]
	private static bool TryReadDescription(JSONNode node, out string description)
	{
		return default(bool);
	}

	[Token(Token = "0x60049EB")]
	[Address(RVA = "0x43C6BF0", Offset = "0x43C6BF0", VA = "0x43C6BF0")]
	private static bool TryReadRequiredString(JSONNode node, string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60049EC")]
	[Address(RVA = "0x43C75E0", Offset = "0x43C75E0", VA = "0x43C75E0")]
	private static string Trimmed(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x60049ED")]
	[Address(RVA = "0x43C69E0", Offset = "0x43C69E0", VA = "0x43C69E0")]
	private static bool IsObject(JSONNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x60049EE")]
	[Address(RVA = "0x43C66A0", Offset = "0x43C66A0", VA = "0x43C66A0")]
	private static bool Fail(out AottgCreditsResponse credits, out string error)
	{
		return default(bool);
	}
}
