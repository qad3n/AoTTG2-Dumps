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
		[Address(RVA = "0x3BA3400", Offset = "0x3BA3400", VA = "0x3BA3400")]
		public static int Next()
		{
			return default(int);
		}

		[Token(Token = "0x6000311")]
		[Address(RVA = "0x3BA3540", Offset = "0x3BA3540", VA = "0x3BA3540")]
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
	[Address(RVA = "0x3BA0360", Offset = "0x3BA0360", VA = "0x3BA0360")]
	public static List<MethodInfo> GetMethods(Type type, Type attribute)
	{
		return null;
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x3BA05B0", Offset = "0x3BA05B0", VA = "0x3BA05B0")]
	[Obsolete("Use a Stopwatch (or equivalent) instead.")]
	public static int GetTickCount()
	{
		return default(int);
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x3BA0630", Offset = "0x3BA0630", VA = "0x3BA0630")]
	public static byte StartBackgroundCalls(Func<bool> myThread, int millisecondsInterval = 100, string taskName = "")
	{
		return default(byte);
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x3BA0C20", Offset = "0x3BA0C20", VA = "0x3BA0C20")]
	public static bool StopBackgroundCalls(byte id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x3BA0ED0", Offset = "0x3BA0ED0", VA = "0x3BA0ED0")]
	public static bool StopAllBackgroundCalls()
	{
		return default(bool);
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x3BA1200", Offset = "0x3BA1200", VA = "0x3BA1200")]
	public static void WriteStackTrace(Exception throwable, TextWriter stream)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x3BA12C0", Offset = "0x3BA12C0", VA = "0x3BA12C0")]
	public static void WriteStackTrace(Exception throwable)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x3BA1360", Offset = "0x3BA1360", VA = "0x3BA1360")]
	public static string DictionaryToString(IDictionary dictionary, bool includeTypes = true)
	{
		return null;
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x3BA2320", Offset = "0x3BA2320", VA = "0x3BA2320")]
	public static string DictionaryToString(NonAllocDictionary<byte, object> dictionary, bool includeTypes = true)
	{
		return null;
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x3BA2E60", Offset = "0x3BA2E60", VA = "0x3BA2E60")]
	[Obsolete("Use DictionaryToString() instead.")]
	public static string HashtableToString(Hashtable hash)
	{
		return null;
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x3BA2ED0", Offset = "0x3BA2ED0", VA = "0x3BA2ED0")]
	public static string ByteArrayToString(byte[] list, int length = -1)
	{
		return null;
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x3BA2F10", Offset = "0x3BA2F10", VA = "0x3BA2F10")]
	private static uint[] InitializeTable(uint polynomial)
	{
		return null;
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x3BA2FF0", Offset = "0x3BA2FF0", VA = "0x3BA2FF0")]
	public static uint CalculateCrc(byte[] buffer, int length)
	{
		return default(uint);
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x3BA3170", Offset = "0x3BA3170", VA = "0x3BA3170")]
	public SupportClass()
	{
	}
}
