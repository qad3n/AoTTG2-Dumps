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

[Token(Token = "0x2000937")]
public static class AottgCreditsParser
{
	[Token(Token = "0x600565B")]
	[Address(RVA = "0x2365080", Offset = "0x2363680", VA = "0x182365080")]
	public static bool TryParse(string json, out AottgCreditsResponse credits, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x600565C")]
	[Address(RVA = "0x2364D60", Offset = "0x2363360", VA = "0x182364D60")]
	public static bool TryParse(JSONNode root, out AottgCreditsResponse credits, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x600565D")]
	[Address(RVA = "0x2364510", Offset = "0x2362B10", VA = "0x182364510")]
	private static bool TryParseCategory(JSONNode node, out AottgCreditCategory category)
	{
		return default(bool);
	}

	[Token(Token = "0x600565E")]
	[Address(RVA = "0x23654B0", Offset = "0x2363AB0", VA = "0x1823654B0")]
	private static bool TryReadGroups(JSONNode node, out AottgCreditGroup[] groups)
	{
		return default(bool);
	}

	[Token(Token = "0x600565F")]
	[Address(RVA = "0x2364B60", Offset = "0x2363160", VA = "0x182364B60")]
	private static bool TryParseGroup(JSONNode node, out AottgCreditGroup group)
	{
		return default(bool);
	}

	[Token(Token = "0x6005660")]
	[Address(RVA = "0x2365170", Offset = "0x2363770", VA = "0x182365170")]
	private static bool TryReadContributors(JSONNode node, out AottgCreditContributor[] contributors)
	{
		return default(bool);
	}

	[Token(Token = "0x6005661")]
	[Address(RVA = "0x2364900", Offset = "0x2362F00", VA = "0x182364900")]
	private static bool TryParseContributor(JSONNode node, out AottgCreditContributor contributor)
	{
		return default(bool);
	}

	[Token(Token = "0x6005662")]
	[Address(RVA = "0x2365380", Offset = "0x2363980", VA = "0x182365380")]
	private static bool TryReadDescription(JSONNode node, out string description)
	{
		return default(bool);
	}

	[Token(Token = "0x6005663")]
	[Address(RVA = "0x2365680", Offset = "0x2363C80", VA = "0x182365680")]
	private static bool TryReadRequiredString(JSONNode node, string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6005664")]
	[Address(RVA = "0x2364470", Offset = "0x2362A70", VA = "0x182364470")]
	private static string Trimmed(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6005665")]
	[Address(RVA = "0x23643F0", Offset = "0x23629F0", VA = "0x1823643F0")]
	private static bool IsObject(JSONNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6005666")]
	[Address(RVA = "0x2364380", Offset = "0x2362980", VA = "0x182364380")]
	private static bool Fail(out AottgCreditsResponse credits, out string error)
	{
		return default(bool);
	}
}
