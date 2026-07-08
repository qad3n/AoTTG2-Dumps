using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000314")]
[ComVisible(true)]
public class CryptoConfig
{
	[Token(Token = "0x4000DDA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly object lockObject;

	[Token(Token = "0x4000DDB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Dictionary<string, Type> algorithms;

	[Token(Token = "0x170002ED")]
	[System.MonoLimitation("nothing is FIPS certified so it never make sense to restrict to this (empty) subset")]
	public static bool AllowOnlyFipsAlgorithms
	{
		[Token(Token = "0x6001AFC")]
		[Address(RVA = "0x4E5E830", Offset = "0x4E5E830", VA = "0x4E5E830")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001AF3")]
	[Address(RVA = "0x4E67130", Offset = "0x4E67130", VA = "0x4E67130")]
	public static void AddOID(string oid, params string[] names)
	{
	}

	[Token(Token = "0x6001AF4")]
	[Address(RVA = "0x4E57480", Offset = "0x4E57480", VA = "0x4E57480")]
	public static object CreateFromName(string name)
	{
		return null;
	}

	[Token(Token = "0x6001AF5")]
	[Address(RVA = "0x4E67170", Offset = "0x4E67170", VA = "0x4E67170")]
	public static object CreateFromName(string name, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6001AF6")]
	[Address(RVA = "0x4E69010", Offset = "0x4E69010", VA = "0x4E69010")]
	internal static string MapNameToOID(string name, object arg)
	{
		return null;
	}

	[Token(Token = "0x6001AF7")]
	[Address(RVA = "0x4E69070", Offset = "0x4E69070", VA = "0x4E69070")]
	public static string MapNameToOID(string name)
	{
		return null;
	}

	[Token(Token = "0x6001AF8")]
	[Address(RVA = "0x4E69720", Offset = "0x4E69720", VA = "0x4E69720")]
	private static void Initialize()
	{
	}

	[Token(Token = "0x6001AF9")]
	[Address(RVA = "0x4E69860", Offset = "0x4E69860", VA = "0x4E69860")]
	public static void AddAlgorithm(Type algorithm, params string[] names)
	{
	}

	[Token(Token = "0x6001AFA")]
	[Address(RVA = "0x4E69C50", Offset = "0x4E69C50", VA = "0x4E69C50")]
	public static byte[] EncodeOID(string str)
	{
		return null;
	}

	[Token(Token = "0x6001AFB")]
	[Address(RVA = "0x4E6A090", Offset = "0x4E6A090", VA = "0x4E6A090")]
	private static byte[] EncodeLongNumber(long x)
	{
		return null;
	}

	[Token(Token = "0x6001AFD")]
	[Address(RVA = "0x4E6A260", Offset = "0x4E6A260", VA = "0x4E6A260")]
	public CryptoConfig()
	{
	}
}
