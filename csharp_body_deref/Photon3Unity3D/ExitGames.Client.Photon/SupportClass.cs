// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.SupportClass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using System.Threading;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000045")]
public class SupportClass
{
	[Token(Token = "0x2000046")]
	[Obsolete("Use a Stopwatch (or equivalent) instead.")]
	public delegate int IntegerMillisecondsDelegate();

	[Token(Token = "0x2000047")]
	public class ThreadSafeRandom
	{
		[Token(Token = "0x400020A")]
		[FieldOffset(Offset = "0x0")]
		private static readonly Random _r;

		[Token(Token = "0x6000310")]
		[Address(RVA = "0x1CFD650", Offset = "0x1CFBC50", VA = "0x181CFD650")]
		public static int Next()
		{
			return default(int);
		}

		[Token(Token = "0x6000311")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public ThreadSafeRandom()
		{
		}
	}

	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0x0")]
	private static List<Thread> threadList;

	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object ThreadListLock;

	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x10")]
	[Obsolete("Use a Stopwatch (or equivalent) instead.")]
	protected internal static IntegerMillisecondsDelegate IntegerMilliseconds;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x18")]
	private static uint[] crcLookupTable;

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x1CFA710", Offset = "0x1CF8D10", VA = "0x181CFA710")]
	public static List<MethodInfo> GetMethods(Type type, Type attribute)
	{
		return null;
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x1CFA890", Offset = "0x1CF8E90", VA = "0x181CFA890")]
	[Obsolete("Use a Stopwatch (or equivalent) instead.")]
	public static int GetTickCount()
	{
		return default(int);
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x1CFAA50", Offset = "0x1CF9050", VA = "0x181CFAA50")]
	public static byte StartBackgroundCalls(Func<bool> myThread, int millisecondsInterval = 100, string taskName = "")
	{
		return default(byte);
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x1CFB230", Offset = "0x1CF9830", VA = "0x181CFB230")]
	public static bool StopBackgroundCalls(byte id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x1CFAF60", Offset = "0x1CF9560", VA = "0x181CFAF60")]
	public static bool StopAllBackgroundCalls()
	{
		return default(bool);
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x1CFB490", Offset = "0x1CF9A90", VA = "0x181CFB490")]
	public static void WriteStackTrace(Exception throwable, TextWriter stream)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x1CFB560", Offset = "0x1CF9B60", VA = "0x181CFB560")]
	public static void WriteStackTrace(Exception throwable)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x1CF92F0", Offset = "0x1CF78F0", VA = "0x181CF92F0")]
	public static string DictionaryToString(IDictionary dictionary, bool includeTypes = true)
	{
		return null;
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x1CF9D50", Offset = "0x1CF8350", VA = "0x181CF9D50")]
	public static string DictionaryToString(NonAllocDictionary<byte, object> dictionary, bool includeTypes = true)
	{
		return null;
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x1CFA900", Offset = "0x1CF8F00", VA = "0x181CFA900")]
	[Obsolete("Use DictionaryToString() instead.")]
	public static string HashtableToString(Hashtable hash)
	{
		return null;
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x1CF90A0", Offset = "0x1CF76A0", VA = "0x181CF90A0")]
	public static string ByteArrayToString(byte[] list, int length = -1)
	{
		return null;
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x1CFA950", Offset = "0x1CF8F50", VA = "0x181CFA950")]
	private static uint[] InitializeTable(uint polynomial)
	{
		return null;
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x1CF90D0", Offset = "0x1CF76D0", VA = "0x181CF90D0")]
	public static uint CalculateCrc(byte[] buffer, int length)
	{
		return default(uint);
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public SupportClass()
	{
	}
}
