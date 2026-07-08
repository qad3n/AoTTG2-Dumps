using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Internal.Cryptography;

[Token(Token = "0x200006B")]
internal static class OidLookup
{
	[Token(Token = "0x4000130")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConcurrentDictionary<string, string> s_lateBoundOidToFriendlyName;

	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ConcurrentDictionary<string, string> s_lateBoundFriendlyNameToOid;

	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<string, string> s_friendlyNameToOid;

	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Dictionary<string, string> s_oidToFriendlyName;

	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Dictionary<string, string> s_compatOids;

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x4545F60", Offset = "0x4545F60", VA = "0x4545F60")]
	public static string ToFriendlyName(string oid, OidGroup oidGroup, bool fallBackToAllGroups)
	{
		return null;
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x4546500", Offset = "0x4546500", VA = "0x4546500")]
	public static string ToOid(string friendlyName, OidGroup oidGroup, bool fallBackToAllGroups)
	{
		return null;
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x4546160", Offset = "0x4546160", VA = "0x4546160")]
	private static bool ShouldUseCache(OidGroup oidGroup)
	{
		return default(bool);
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x4546170", Offset = "0x4546170", VA = "0x4546170")]
	private static string NativeOidToFriendlyName(string oid, OidGroup oidGroup, bool fallBackToAllGroups)
	{
		return null;
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x45466D0", Offset = "0x45466D0", VA = "0x45466D0")]
	private static string NativeFriendlyNameToOid(string friendlyName, OidGroup oidGroup, bool fallBackToAllGroups)
	{
		return null;
	}
}
