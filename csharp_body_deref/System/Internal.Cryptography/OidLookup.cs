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
	[Address(RVA = "0x452C150", Offset = "0x452C150", VA = "0x452C150")]
	public static string ToFriendlyName(string oid, OidGroup oidGroup, bool fallBackToAllGroups)
	{
		return null;
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x452C6F0", Offset = "0x452C6F0", VA = "0x452C6F0")]
	public static string ToOid(string friendlyName, OidGroup oidGroup, bool fallBackToAllGroups)
	{
		return null;
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x452C350", Offset = "0x452C350", VA = "0x452C350")]
	private static bool ShouldUseCache(OidGroup oidGroup)
	{
		return default(bool);
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x452C360", Offset = "0x452C360", VA = "0x452C360")]
	private static string NativeOidToFriendlyName(string oid, OidGroup oidGroup, bool fallBackToAllGroups)
	{
		return null;
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x452C8C0", Offset = "0x452C8C0", VA = "0x452C8C0")]
	private static string NativeFriendlyNameToOid(string friendlyName, OidGroup oidGroup, bool fallBackToAllGroups)
	{
		return null;
	}
}
