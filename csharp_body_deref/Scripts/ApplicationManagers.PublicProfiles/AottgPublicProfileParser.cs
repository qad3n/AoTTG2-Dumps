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

[Token(Token = "0x200092A")]
public static class AottgPublicProfileParser
{
	[Token(Token = "0x6005608")]
	[Address(RVA = "0x2367050", Offset = "0x2365650", VA = "0x182367050")]
	public static bool TryParse(string json, out AottgPublicProfile profile, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x6005609")]
	[Address(RVA = "0x2367140", Offset = "0x2365740", VA = "0x182367140")]
	public static bool TryParse(JSONNode node, out AottgPublicProfile profile, out string error)
	{
		return default(bool);
	}

	[Token(Token = "0x600560A")]
	[Address(RVA = "0x2366C10", Offset = "0x2365210", VA = "0x182366C10")]
	private static string RawJson(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x600560B")]
	[Address(RVA = "0x2366CA0", Offset = "0x23652A0", VA = "0x182366CA0")]
	private static string[] StringArray(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x600560C")]
	[Address(RVA = "0x2366B70", Offset = "0x2365170", VA = "0x182366B70")]
	private static string NullableTrimmed(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x600560D")]
	[Address(RVA = "0x2366F80", Offset = "0x2365580", VA = "0x182366F80")]
	private static string Trimmed(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x600560E")]
	[Address(RVA = "0x2366B30", Offset = "0x2365130", VA = "0x182366B30")]
	private static bool Fail(out AottgPublicProfile profile, out string error, string value)
	{
		return default(bool);
	}
}
