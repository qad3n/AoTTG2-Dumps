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

[Token(Token = "0x200079F")]
public static class AottgPublicProfileParser
{
	[Token(Token = "0x6004990")]
	[Address(RVA = "0x43C3150", Offset = "0x43C3150", VA = "0x43C3150")]
	public static bool TryParse(string json, out AottgPublicProfile profile, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6004991")]
	[Address(RVA = "0x43C32C0", Offset = "0x43C32C0", VA = "0x43C32C0")]
	public static bool TryParse(JSONNode node, out AottgPublicProfile profile, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6004992")]
	[Address(RVA = "0x43C3910", Offset = "0x43C3910", VA = "0x43C3910")]
	private static string RawJson(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6004993")]
	[Address(RVA = "0x43C39A0", Offset = "0x43C39A0", VA = "0x43C39A0")]
	private static string[] StringArray(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6004994")]
	[Address(RVA = "0x43C3870", Offset = "0x43C3870", VA = "0x43C3870")]
	private static string NullableTrimmed(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6004995")]
	[Address(RVA = "0x43C37A0", Offset = "0x43C37A0", VA = "0x43C37A0")]
	private static string Trimmed(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6004996")]
	[Address(RVA = "0x43C3290", Offset = "0x43C3290", VA = "0x43C3290")]
	private static bool Fail(out AottgPublicProfile profile, out string error, string value)
	{
		return default(bool);
	}
}
