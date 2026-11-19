// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileParser
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileParser.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace ApplicationManagers.PublicProfiles;

[Token(Token = "0x2000991")]
public static class AottgPublicProfileParser
{
	[Token(Token = "0x6005961")]
	[Address(RVA = "0x5D1FF50", Offset = "0x5D1EF50", VA = "0x5D1FF50")]
	public static bool TryParse(string json, out AottgPublicProfile profile, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6005962")]
	[Address(RVA = "0x5D200C0", Offset = "0x5D1F0C0", VA = "0x5D200C0")]
	public static bool TryParse(JSONNode node, out AottgPublicProfile profile, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6005963")]
	[Address(RVA = "0x5D20710", Offset = "0x5D1F710", VA = "0x5D20710")]
	private static string RawJson(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6005964")]
	[Address(RVA = "0x5D207A0", Offset = "0x5D1F7A0", VA = "0x5D207A0")]
	private static string[] StringArray(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6005965")]
	[Address(RVA = "0x5D20670", Offset = "0x5D1F670", VA = "0x5D20670")]
	private static string NullableTrimmed(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6005966")]
	[Address(RVA = "0x5D205A0", Offset = "0x5D1F5A0", VA = "0x5D205A0")]
	private static string Trimmed(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6005967")]
	[Address(RVA = "0x5D20090", Offset = "0x5D1F090", VA = "0x5D20090")]
	private static bool Fail(out AottgPublicProfile profile, out string error, string value)
	{
		return default(bool);
	}
}
