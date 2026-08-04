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
		[Address(RVA = "0x3E98D50", Offset = "0x3E98D50", VA = "0x3E98D50")]
		public static int Next()
		{
			return default(int);
		}

		[Token(Token = "0x6000311")]
		[Address(RVA = "0x3E98E90", Offset = "0x3E98E90", VA = "0x3E98E90")]
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
	[Address(RVA = "0x3E95CB0", Offset = "0x3E95CB0", VA = "0x3E95CB0")]
	public static List<MethodInfo> GetMethods(Type type, Type attribute)
	{
		return null;
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x3E95F00", Offset = "0x3E95F00", VA = "0x3E95F00")]
	[Obsolete("Use a Stopwatch (or equivalent) instead.")]
	public static int GetTickCount()
	{
		return default(int);
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x3E95F80", Offset = "0x3E95F80", VA = "0x3E95F80")]
	public static byte StartBackgroundCalls(Func<bool> myThread, int millisecondsInterval = 100, string taskName = "")
	{
		return default(byte);
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x3E96570", Offset = "0x3E96570", VA = "0x3E96570")]
	public static bool StopBackgroundCalls(byte id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x3E96820", Offset = "0x3E96820", VA = "0x3E96820")]
	public static bool StopAllBackgroundCalls()
	{
		return default(bool);
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x3E96B50", Offset = "0x3E96B50", VA = "0x3E96B50")]
	public static void WriteStackTrace(Exception throwable, TextWriter stream)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x3E96C10", Offset = "0x3E96C10", VA = "0x3E96C10")]
	public static void WriteStackTrace(Exception throwable)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x3E96CB0", Offset = "0x3E96CB0", VA = "0x3E96CB0")]
	public static string DictionaryToString(IDictionary dictionary, bool includeTypes = true)
	{
		return null;
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x3E97C70", Offset = "0x3E97C70", VA = "0x3E97C70")]
	public static string DictionaryToString(NonAllocDictionary<byte, object> dictionary, bool includeTypes = true)
	{
		return null;
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x3E987B0", Offset = "0x3E987B0", VA = "0x3E987B0")]
	[Obsolete("Use DictionaryToString() instead.")]
	public static string HashtableToString(Hashtable hash)
	{
		return null;
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x3E98820", Offset = "0x3E98820", VA = "0x3E98820")]
	public static string ByteArrayToString(byte[] list, int length = -1)
	{
		return null;
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x3E98860", Offset = "0x3E98860", VA = "0x3E98860")]
	private static uint[] InitializeTable(uint polynomial)
	{
		return null;
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x3E98940", Offset = "0x3E98940", VA = "0x3E98940")]
	public static uint CalculateCrc(byte[] buffer, int length)
	{
		return default(uint);
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x3E98AC0", Offset = "0x3E98AC0", VA = "0x3E98AC0")]
	public SupportClass()
	{
	}
}
