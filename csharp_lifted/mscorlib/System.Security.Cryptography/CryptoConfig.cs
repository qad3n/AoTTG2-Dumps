// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.CryptoConfig
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200031C")]
[ComVisible(true)]
public class CryptoConfig
{
	[Token(Token = "0x4000D47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly object lockObject;

	[Token(Token = "0x4000D48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Dictionary<string, Type> algorithms;

	[Token(Token = "0x170002EE")]
	[System.MonoLimitation("nothing is FIPS certified so it never make sense to restrict to this (empty) subset")]
	public static bool AllowOnlyFipsAlgorithms
	{
		[Token(Token = "0x6001B41")]
		[Address(RVA = "0x534DB40", Offset = "0x534CB40", VA = "0x534DB40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001B38")]
	[Address(RVA = "0x5356450", Offset = "0x5355450", VA = "0x5356450")]
	public static void AddOID(string oid, params string[] names)
	{
	}

	[Token(Token = "0x6001B39")]
	[Address(RVA = "0x53469E0", Offset = "0x53459E0", VA = "0x53469E0")]
	public static object CreateFromName(string name)
	{
		return null;
	}

	[Token(Token = "0x6001B3A")]
	[Address(RVA = "0x5356490", Offset = "0x5355490", VA = "0x5356490")]
	public static object CreateFromName(string name, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6001B3B")]
	[Address(RVA = "0x53581A0", Offset = "0x53571A0", VA = "0x53581A0")]
	internal static string MapNameToOID(string name, object arg)
	{
		return null;
	}

	[Token(Token = "0x6001B3C")]
	[Address(RVA = "0x5358200", Offset = "0x5357200", VA = "0x5358200")]
	public static string MapNameToOID(string name)
	{
		return null;
	}

	[Token(Token = "0x6001B3D")]
	[Address(RVA = "0x53588B0", Offset = "0x53578B0", VA = "0x53588B0")]
	private static void Initialize()
	{
	}

	[Token(Token = "0x6001B3E")]
	[Address(RVA = "0x53589F0", Offset = "0x53579F0", VA = "0x53589F0")]
	public static void AddAlgorithm(Type algorithm, params string[] names)
	{
	}

	[Token(Token = "0x6001B3F")]
	[Address(RVA = "0x5358D90", Offset = "0x5357D90", VA = "0x5358D90")]
	public static byte[] EncodeOID(string str)
	{
		return null;
	}

	[Token(Token = "0x6001B40")]
	[Address(RVA = "0x53591A0", Offset = "0x53581A0", VA = "0x53591A0")]
	private static byte[] EncodeLongNumber(long x)
	{
		return null;
	}

	[Token(Token = "0x6001B42")]
	[Address(RVA = "0x5359350", Offset = "0x5358350", VA = "0x5359350")]
	public CryptoConfig()
	{
	}
}
