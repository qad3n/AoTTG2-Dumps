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
		[Address(RVA = "0x3B44350", Offset = "0x3B44350", VA = "0x3B44350")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001AF3")]
	[Address(RVA = "0x3B4CC50", Offset = "0x3B4CC50", VA = "0x3B4CC50")]
	public static void AddOID(string oid, params string[] names)
	{
	}

	[Token(Token = "0x6001AF4")]
	[Address(RVA = "0x3B3CFA0", Offset = "0x3B3CFA0", VA = "0x3B3CFA0")]
	public static object CreateFromName(string name)
	{
		return null;
	}

	[Token(Token = "0x6001AF5")]
	[Address(RVA = "0x3B4CC90", Offset = "0x3B4CC90", VA = "0x3B4CC90")]
	public static object CreateFromName(string name, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6001AF6")]
	[Address(RVA = "0x3B4EB30", Offset = "0x3B4EB30", VA = "0x3B4EB30")]
	internal static string MapNameToOID(string name, object arg)
	{
		return null;
	}

	[Token(Token = "0x6001AF7")]
	[Address(RVA = "0x3B4EB90", Offset = "0x3B4EB90", VA = "0x3B4EB90")]
	public static string MapNameToOID(string name)
	{
		return null;
	}

	[Token(Token = "0x6001AF8")]
	[Address(RVA = "0x3B4F240", Offset = "0x3B4F240", VA = "0x3B4F240")]
	private static void Initialize()
	{
	}

	[Token(Token = "0x6001AF9")]
	[Address(RVA = "0x3B4F380", Offset = "0x3B4F380", VA = "0x3B4F380")]
	public static void AddAlgorithm(Type algorithm, params string[] names)
	{
	}

	[Token(Token = "0x6001AFA")]
	[Address(RVA = "0x3B4F770", Offset = "0x3B4F770", VA = "0x3B4F770")]
	public static byte[] EncodeOID(string str)
	{
		return null;
	}

	[Token(Token = "0x6001AFB")]
	[Address(RVA = "0x3B4FBB0", Offset = "0x3B4FBB0", VA = "0x3B4FBB0")]
	private static byte[] EncodeLongNumber(long x)
	{
		return null;
	}

	[Token(Token = "0x6001AFD")]
	[Address(RVA = "0x3B4FD80", Offset = "0x3B4FD80", VA = "0x3B4FD80")]
	public CryptoConfig()
	{
	}
}
