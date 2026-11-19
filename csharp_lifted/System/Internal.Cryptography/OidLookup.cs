// ==================== AoTTG2 cross-reference ====================
// Type: Internal.Cryptography.OidLookup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Internal.Cryptography;

[Token(Token = "0x200006B")]
internal static class OidLookup
{
	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConcurrentDictionary<string, string> s_lateBoundOidToFriendlyName;

	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ConcurrentDictionary<string, string> s_lateBoundFriendlyNameToOid;

	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<string, string> s_friendlyNameToOid;

	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Dictionary<string, string> s_oidToFriendlyName;

	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Dictionary<string, string> s_compatOids;

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x5E3FB40", Offset = "0x5E3EB40", VA = "0x5E3FB40")]
	public static string ToFriendlyName(string oid, OidGroup oidGroup, bool fallBackToAllGroups)
	{
		return null;
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x5E3FFD0", Offset = "0x5E3EFD0", VA = "0x5E3FFD0")]
	public static string ToOid(string friendlyName, OidGroup oidGroup, bool fallBackToAllGroups)
	{
		return null;
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x5E3FD40", Offset = "0x5E3ED40", VA = "0x5E3FD40")]
	private static bool ShouldUseCache(OidGroup oidGroup)
	{
		return default(bool);
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x5E3FD50", Offset = "0x5E3ED50", VA = "0x5E3FD50")]
	private static string NativeOidToFriendlyName(string oid, OidGroup oidGroup, bool fallBackToAllGroups)
	{
		return null;
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x5E401A0", Offset = "0x5E3F1A0", VA = "0x5E401A0")]
	private static string NativeFriendlyNameToOid(string friendlyName, OidGroup oidGroup, bool fallBackToAllGroups)
	{
		return null;
	}
}
