// ==================== AoTTG2 cross-reference ====================
// Type: Utility.MobileBuiltinAssets
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Utility/MobileBuiltinAssets.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.IO;
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x2000909")]
internal static class MobileBuiltinAssets
{
	[Token(Token = "0x4002DB4")]
	private const string PackageSeparator = "!/";

	[Token(Token = "0x4002DB5")]
	private const string UnityDataFolder = "bin/";

	[Token(Token = "0x17000EE8")]
	private static string CacheRoot
	{
		[Token(Token = "0x60055D7")]
		[Address(RVA = "0x5CDE9E0", Offset = "0x5CDD9E0", VA = "0x5CDE9E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000EE9")]
	internal static string CachePath
	{
		[Token(Token = "0x60055D8")]
		[Address(RVA = "0x5CDEA70", Offset = "0x5CDDA70", VA = "0x5CDEA70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60055D9")]
	[Address(RVA = "0x5CDEB00", Offset = "0x5CDDB00", VA = "0x5CDEB00")]
	internal static void Prepare()
	{
	}

	[Token(Token = "0x60055DA")]
	[Address(RVA = "0x5CDEB60", Offset = "0x5CDDB60", VA = "0x5CDEB60")]
	private static void DeleteStaleCaches()
	{
	}

	[Token(Token = "0x60055DB")]
	[Address(RVA = "0x5CDED80", Offset = "0x5CDDD80", VA = "0x5CDED80")]
	internal static void Extract(string source, string targetRoot)
	{
	}

	[Token(Token = "0x60055DC")]
	[Address(RVA = "0x5CDEF50", Offset = "0x5CDDF50", VA = "0x5CDEF50")]
	private static void ExtractPackage(string package, string prefix, string targetRoot)
	{
	}

	[Token(Token = "0x60055DD")]
	[Address(RVA = "0x5CDF540", Offset = "0x5CDE540", VA = "0x5CDF540")]
	private static void ExtractDirectory(string source, string targetRoot)
	{
	}

	[Token(Token = "0x60055DE")]
	[Address(RVA = "0x5CDF7F0", Offset = "0x5CDE7F0", VA = "0x5CDF7F0")]
	private static void CopyIfMissing(string relative, string targetRoot, Func<Stream> open)
	{
	}
}
