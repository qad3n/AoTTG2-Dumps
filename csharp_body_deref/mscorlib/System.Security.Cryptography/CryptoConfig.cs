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

[Token(Token = "0x2000343")]
[ComVisible(true)]
public class CryptoConfig
{
	[Token(Token = "0x4000DE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly object lockObject;

	[Token(Token = "0x4000DE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Dictionary<string, Type> algorithms;

	[Token(Token = "0x170002EF")]
	[System.MonoLimitation("nothing is FIPS certified so it never make sense to restrict to this (empty) subset")]
	public static bool AllowOnlyFipsAlgorithms
	{
		[Token(Token = "0x6001B64")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001B5B")]
	[Address(RVA = "0x19BA090", Offset = "0x19B8690", VA = "0x1819BA090")]
	public static void AddOID(string oid, params string[] names)
	{
	}

	[Token(Token = "0x6001B5C")]
	[Address(RVA = "0x19BBED0", Offset = "0x19BA4D0", VA = "0x1819BBED0")]
	public static object CreateFromName(string name)
	{
		return null;
	}

	[Token(Token = "0x6001B5D")]
	[Address(RVA = "0x19BA0D0", Offset = "0x19B86D0", VA = "0x1819BA0D0")]
	public static object CreateFromName(string name, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6001B5E")]
	[Address(RVA = "0x19BC5E0", Offset = "0x19BABE0", VA = "0x1819BC5E0")]
	internal static string MapNameToOID(string name, object arg)
	{
		return null;
	}

	[Token(Token = "0x6001B5F")]
	[Address(RVA = "0x19BC630", Offset = "0x19BAC30", VA = "0x1819BC630")]
	public static string MapNameToOID(string name)
	{
		return null;
	}

	[Token(Token = "0x6001B60")]
	[Address(RVA = "0x19BC4C0", Offset = "0x19BAAC0", VA = "0x1819BC4C0")]
	private static void Initialize()
	{
	}

	[Token(Token = "0x6001B61")]
	[Address(RVA = "0x19B9BE0", Offset = "0x19B81E0", VA = "0x1819B9BE0")]
	public static void AddAlgorithm(Type algorithm, params string[] names)
	{
	}

	[Token(Token = "0x6001B62")]
	[Address(RVA = "0x19BC0A0", Offset = "0x19BA6A0", VA = "0x1819BC0A0")]
	public static byte[] EncodeOID(string str)
	{
		return null;
	}

	[Token(Token = "0x6001B63")]
	[Address(RVA = "0x19BBF20", Offset = "0x19BA520", VA = "0x1819BBF20")]
	private static byte[] EncodeLongNumber(long x)
	{
		return null;
	}

	[Token(Token = "0x6001B65")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public CryptoConfig()
	{
	}
}
