using Il2CppDummyDll;
using SimpleJSONFixed;

namespace ApplicationManagers.PublicProfiles;

[Token(Token = "0x2000750")]
public static class AottgPublicProfileParser
{
	[Token(Token = "0x6004721")]
	[Address(RVA = "0x40AA150", Offset = "0x40AA150", VA = "0x40AA150")]
	public static bool TryParse(string json, out AottgPublicProfile profile, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6004722")]
	[Address(RVA = "0x40AA2C0", Offset = "0x40AA2C0", VA = "0x40AA2C0")]
	public static bool TryParse(JSONNode node, out AottgPublicProfile profile, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6004723")]
	[Address(RVA = "0x40AA910", Offset = "0x40AA910", VA = "0x40AA910")]
	private static string RawJson(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6004724")]
	[Address(RVA = "0x40AA9A0", Offset = "0x40AA9A0", VA = "0x40AA9A0")]
	private static string[] StringArray(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6004725")]
	[Address(RVA = "0x40AA870", Offset = "0x40AA870", VA = "0x40AA870")]
	private static string NullableTrimmed(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6004726")]
	[Address(RVA = "0x40AA7A0", Offset = "0x40AA7A0", VA = "0x40AA7A0")]
	private static string Trimmed(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6004727")]
	[Address(RVA = "0x40AA290", Offset = "0x40AA290", VA = "0x40AA290")]
	private static bool Fail(out AottgPublicProfile profile, out string error, string value)
	{
		return default(bool);
	}
}
