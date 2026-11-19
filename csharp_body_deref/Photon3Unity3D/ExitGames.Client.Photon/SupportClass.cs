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
		[Address(RVA = "0x56866D0", Offset = "0x56856D0", VA = "0x56866D0")]
		public static int Next()
		{
			return default(int);
		}

		[Token(Token = "0x6000311")]
		[Address(RVA = "0x56867F0", Offset = "0x56857F0", VA = "0x56867F0")]
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
	[Address(RVA = "0x56835F0", Offset = "0x56825F0", VA = "0x56835F0")]
	public static List<MethodInfo> GetMethods(Type type, Type attribute)
	{
		return null;
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x5683830", Offset = "0x5682830", VA = "0x5683830")]
	[Obsolete("Use a Stopwatch (or equivalent) instead.")]
	public static int GetTickCount()
	{
		return default(int);
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x56838B0", Offset = "0x56828B0", VA = "0x56838B0")]
	public static byte StartBackgroundCalls(Func<bool> myThread, int millisecondsInterval = 100, string taskName = "")
	{
		return default(byte);
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x5683DD0", Offset = "0x5682DD0", VA = "0x5683DD0")]
	public static bool StopBackgroundCalls(byte id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x5684030", Offset = "0x5683030", VA = "0x5684030")]
	public static bool StopAllBackgroundCalls()
	{
		return default(bool);
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x5684320", Offset = "0x5683320", VA = "0x5684320")]
	public static void WriteStackTrace(Exception throwable, TextWriter stream)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x5684400", Offset = "0x5683400", VA = "0x5684400")]
	public static void WriteStackTrace(Exception throwable)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x56844A0", Offset = "0x56834A0", VA = "0x56844A0")]
	public static string DictionaryToString(IDictionary dictionary, bool includeTypes = true)
	{
		return null;
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x5685460", Offset = "0x5684460", VA = "0x5685460")]
	public static string DictionaryToString(NonAllocDictionary<byte, object> dictionary, bool includeTypes = true)
	{
		return null;
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x5685F80", Offset = "0x5684F80", VA = "0x5685F80")]
	[Obsolete("Use DictionaryToString() instead.")]
	public static string HashtableToString(Hashtable hash)
	{
		return null;
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x5685FF0", Offset = "0x5684FF0", VA = "0x5685FF0")]
	public static string ByteArrayToString(byte[] list, int length = -1)
	{
		return null;
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x5686030", Offset = "0x5685030", VA = "0x5686030")]
	private static uint[] InitializeTable(uint polynomial)
	{
		return null;
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x5686250", Offset = "0x5685250", VA = "0x5686250")]
	public static uint CalculateCrc(byte[] buffer, int length)
	{
		return default(uint);
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x5686430", Offset = "0x5685430", VA = "0x5686430")]
	public SupportClass()
	{
	}
}
