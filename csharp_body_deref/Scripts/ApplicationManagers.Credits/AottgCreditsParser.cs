using Il2CppDummyDll;
using SimpleJSONFixed;

namespace ApplicationManagers.Credits;

[Token(Token = "0x200075D")]
public static class AottgCreditsParser
{
	[Token(Token = "0x6004774")]
	[Address(RVA = "0x40AD630", Offset = "0x40AD630", VA = "0x40AD630")]
	public static bool TryParse(string json, out AottgCreditsResponse credits, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6004775")]
	[Address(RVA = "0x40AD7D0", Offset = "0x40AD7D0", VA = "0x40AD7D0")]
	public static bool TryParse(JSONNode root, out AottgCreditsResponse credits, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6004776")]
	[Address(RVA = "0x40ADB20", Offset = "0x40ADB20", VA = "0x40ADB20")]
	private static bool TryParseCategory(JSONNode node, out AottgCreditCategory category)
	{
		return default(bool);
	}

	[Token(Token = "0x6004777")]
	[Address(RVA = "0x40AE130", Offset = "0x40AE130", VA = "0x40AE130")]
	private static bool TryReadGroups(JSONNode node, out AottgCreditGroup[] groups)
	{
		return default(bool);
	}

	[Token(Token = "0x6004778")]
	[Address(RVA = "0x40AE300", Offset = "0x40AE300", VA = "0x40AE300")]
	private static bool TryParseGroup(JSONNode node, out AottgCreditGroup group)
	{
		return default(bool);
	}

	[Token(Token = "0x6004779")]
	[Address(RVA = "0x40ADEA0", Offset = "0x40ADEA0", VA = "0x40ADEA0")]
	private static bool TryReadContributors(JSONNode node, out AottgCreditContributor[] contributors)
	{
		return default(bool);
	}

	[Token(Token = "0x600477A")]
	[Address(RVA = "0x40AE470", Offset = "0x40AE470", VA = "0x40AE470")]
	private static bool TryParseContributor(JSONNode node, out AottgCreditContributor contributor)
	{
		return default(bool);
	}

	[Token(Token = "0x600477B")]
	[Address(RVA = "0x40ADD80", Offset = "0x40ADD80", VA = "0x40ADD80")]
	private static bool TryReadDescription(JSONNode node, out string description)
	{
		return default(bool);
	}

	[Token(Token = "0x600477C")]
	[Address(RVA = "0x40ADCC0", Offset = "0x40ADCC0", VA = "0x40ADCC0")]
	private static bool TryReadRequiredString(JSONNode node, string key, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600477D")]
	[Address(RVA = "0x40AE6B0", Offset = "0x40AE6B0", VA = "0x40AE6B0")]
	private static string Trimmed(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x600477E")]
	[Address(RVA = "0x40ADAB0", Offset = "0x40ADAB0", VA = "0x40ADAB0")]
	private static bool IsObject(JSONNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x600477F")]
	[Address(RVA = "0x40AD770", Offset = "0x40AD770", VA = "0x40AD770")]
	private static bool Fail(out AottgCreditsResponse credits, out string error)
	{
		return default(bool);
	}
}
