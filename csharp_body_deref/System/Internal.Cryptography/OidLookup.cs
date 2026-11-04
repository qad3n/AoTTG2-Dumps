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

[Token(Token = "0x20000AC")]
internal static class OidLookup
{
	[Token(Token = "0x4000201")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConcurrentDictionary<string, string> s_lateBoundOidToFriendlyName;

	[Token(Token = "0x4000202")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ConcurrentDictionary<string, string> s_lateBoundFriendlyNameToOid;

	[Token(Token = "0x4000203")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<string, string> s_friendlyNameToOid;

	[Token(Token = "0x4000204")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Dictionary<string, string> s_oidToFriendlyName;

	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Dictionary<string, string> s_compatOids;

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x283ECD0", Offset = "0x283D2D0", VA = "0x18283ECD0")]
	public static string ToFriendlyName(string oid, OidGroup oidGroup, bool fallBackToAllGroups)
	{
		return null;
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x283EF40", Offset = "0x283D540", VA = "0x18283EF40")]
	public static string ToOid(string friendlyName, OidGroup oidGroup, bool fallBackToAllGroups)
	{
		return null;
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
	private static bool ShouldUseCache(OidGroup oidGroup)
	{
		return default(bool);
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x283E980", Offset = "0x283CF80", VA = "0x18283E980")]
	private static string NativeOidToFriendlyName(string oid, OidGroup oidGroup, bool fallBackToAllGroups)
	{
		return null;
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x283E630", Offset = "0x283CC30", VA = "0x18283E630")]
	private static string NativeFriendlyNameToOid(string friendlyName, OidGroup oidGroup, bool fallBackToAllGroups)
	{
		return null;
	}
}
