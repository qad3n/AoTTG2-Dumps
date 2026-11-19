// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AndroidJNISafe
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000006")]
internal class AndroidJNISafe
{
	[Token(Token = "0x6000097")]
	[Address(RVA = "0x689B7B0", Offset = "0x689A7B0", VA = "0x689B7B0")]
	public static void CheckException()
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x689BA50", Offset = "0x689AA50", VA = "0x689BA50")]
	public static void QueueDeleteGlobalRef(IntPtr globalref)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x689BA90", Offset = "0x689AA90", VA = "0x689BA90")]
	public static void DeleteWeakGlobalRef(IntPtr globalref)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x689BAD0", Offset = "0x689AAD0", VA = "0x689BAD0")]
	public static void DeleteLocalRef(IntPtr localref)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x689BB10", Offset = "0x689AB10", VA = "0x689BB10")]
	public static IntPtr NewString(string chars)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x689BB90", Offset = "0x689AB90", VA = "0x689BB90")]
	public static string GetStringChars(IntPtr str)
	{
		return null;
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x689BC10", Offset = "0x689AC10", VA = "0x689BC10")]
	public static IntPtr GetObjectClass(IntPtr ptr)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x6897C20", Offset = "0x6896C20", VA = "0x6897C20")]
	public static IntPtr GetStaticMethodID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x689BCB0", Offset = "0x689ACB0", VA = "0x689BCB0")]
	public static IntPtr GetMethodID(IntPtr obj, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x689BD30", Offset = "0x689AD30", VA = "0x689BD30")]
	public static IntPtr GetFieldID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x689BDB0", Offset = "0x689ADB0", VA = "0x689BDB0")]
	public static IntPtr GetStaticFieldID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x689BE30", Offset = "0x689AE30", VA = "0x689BE30")]
	public static IntPtr FromReflectedMethod(IntPtr refMethod)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x6897BA0", Offset = "0x6896BA0", VA = "0x6897BA0")]
	public static IntPtr FindClass(string name)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x689BED0", Offset = "0x689AED0", VA = "0x689BED0")]
	public static void PushLocalFrame(int capacity)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x689BF10", Offset = "0x689AF10", VA = "0x689BF10")]
	public static IntPtr NewObject(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x689C000", Offset = "0x689B000", VA = "0x689C000")]
	public static IntPtr GetStaticObjectField(IntPtr clazz, IntPtr fieldID)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x689C0B0", Offset = "0x689B0B0", VA = "0x689C0B0")]
	public static string GetStaticStringField(IntPtr clazz, IntPtr fieldID)
	{
		return null;
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x689C130", Offset = "0x689B130", VA = "0x689C130")]
	public static char GetStaticCharField(IntPtr clazz, IntPtr fieldID)
	{
		return default(char);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x689C1E0", Offset = "0x689B1E0", VA = "0x689C1E0")]
	public static double GetStaticDoubleField(IntPtr clazz, IntPtr fieldID)
	{
		return default(double);
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x689C290", Offset = "0x689B290", VA = "0x689C290")]
	public static float GetStaticFloatField(IntPtr clazz, IntPtr fieldID)
	{
		return default(float);
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x689C340", Offset = "0x689B340", VA = "0x689C340")]
	public static long GetStaticLongField(IntPtr clazz, IntPtr fieldID)
	{
		return default(long);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x689C3F0", Offset = "0x689B3F0", VA = "0x689C3F0")]
	public static short GetStaticShortField(IntPtr clazz, IntPtr fieldID)
	{
		return default(short);
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x689C4A0", Offset = "0x689B4A0", VA = "0x689C4A0")]
	public static sbyte GetStaticSByteField(IntPtr clazz, IntPtr fieldID)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x689C550", Offset = "0x689B550", VA = "0x689C550")]
	public static bool GetStaticBooleanField(IntPtr clazz, IntPtr fieldID)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x689C600", Offset = "0x689B600", VA = "0x689C600")]
	public static int GetStaticIntField(IntPtr clazz, IntPtr fieldID)
	{
		return default(int);
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x689C6A0", Offset = "0x689B6A0", VA = "0x689C6A0")]
	public static IntPtr CallStaticObjectMethod(IntPtr clazz, IntPtr methodID, jvalue[] args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x6897CA0", Offset = "0x6896CA0", VA = "0x6897CA0")]
	public static IntPtr CallStaticObjectMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x689C6F0", Offset = "0x689B6F0", VA = "0x689C6F0")]
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, jvalue[] args)
	{
		return null;
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x689C740", Offset = "0x689B740", VA = "0x689C740")]
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return null;
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x689C840", Offset = "0x689B840", VA = "0x689C840")]
	public static char CallStaticCharMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(char);
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x689C920", Offset = "0x689B920", VA = "0x689C920")]
	public static double CallStaticDoubleMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(double);
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x689CA10", Offset = "0x689BA10", VA = "0x689CA10")]
	public static float CallStaticFloatMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(float);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x689CB00", Offset = "0x689BB00", VA = "0x689CB00")]
	public static long CallStaticLongMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(long);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x689CBF0", Offset = "0x689BBF0", VA = "0x689CBF0")]
	public static short CallStaticShortMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(short);
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x689CCD0", Offset = "0x689BCD0", VA = "0x689CCD0")]
	public static sbyte CallStaticSByteMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x689CDB0", Offset = "0x689BDB0", VA = "0x689CDB0")]
	public static bool CallStaticBooleanMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x689CE90", Offset = "0x689BE90", VA = "0x689CE90")]
	public static int CallStaticIntMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(int);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x689CF80", Offset = "0x689BF80", VA = "0x689CF80")]
	public static void CallVoidMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x689D060", Offset = "0x689C060", VA = "0x689D060")]
	public static IntPtr CallObjectMethod(IntPtr obj, IntPtr methodID, jvalue[] args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x689D0B0", Offset = "0x689C0B0", VA = "0x689D0B0")]
	public static IntPtr CallObjectMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x689D1A0", Offset = "0x689C1A0", VA = "0x689D1A0")]
	public static string CallStringMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return null;
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x689D2A0", Offset = "0x689C2A0", VA = "0x689D2A0")]
	public static char CallCharMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(char);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x689D380", Offset = "0x689C380", VA = "0x689D380")]
	public static double CallDoubleMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(double);
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x689D470", Offset = "0x689C470", VA = "0x689D470")]
	public static float CallFloatMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(float);
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x689D560", Offset = "0x689C560", VA = "0x689D560")]
	public static long CallLongMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(long);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x689D650", Offset = "0x689C650", VA = "0x689D650")]
	public static short CallShortMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(short);
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x689D730", Offset = "0x689C730", VA = "0x689D730")]
	public static sbyte CallSByteMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x689D810", Offset = "0x689C810", VA = "0x689D810")]
	public static bool CallBooleanMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x689D8F0", Offset = "0x689C8F0", VA = "0x689D8F0")]
	public static int CallIntMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(int);
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x689D9E0", Offset = "0x689C9E0", VA = "0x689D9E0")]
	public static char[] FromCharArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x689DA80", Offset = "0x689CA80", VA = "0x689DA80")]
	public static double[] FromDoubleArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x689DB20", Offset = "0x689CB20", VA = "0x689DB20")]
	public static float[] FromFloatArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x689DBC0", Offset = "0x689CBC0", VA = "0x689DBC0")]
	public static long[] FromLongArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x689DC60", Offset = "0x689CC60", VA = "0x689DC60")]
	public static short[] FromShortArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x689DD00", Offset = "0x689CD00", VA = "0x689DD00")]
	public static byte[] FromByteArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x689DD80", Offset = "0x689CD80", VA = "0x689DD80")]
	public static sbyte[] FromSByteArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x689DE20", Offset = "0x689CE20", VA = "0x689DE20")]
	public static bool[] FromBooleanArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x689DEA0", Offset = "0x689CEA0", VA = "0x689DEA0")]
	public static int[] FromIntArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x689DF40", Offset = "0x689CF40", VA = "0x689DF40")]
	public static IntPtr ToObjectArray(IntPtr[] array, IntPtr type)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x689E000", Offset = "0x689D000", VA = "0x689E000")]
	public static IntPtr ToCharArray(char[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x689E0C0", Offset = "0x689D0C0", VA = "0x689E0C0")]
	public static IntPtr ToDoubleArray(double[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x689E180", Offset = "0x689D180", VA = "0x689E180")]
	public static IntPtr ToFloatArray(float[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x689E240", Offset = "0x689D240", VA = "0x689E240")]
	public static IntPtr ToLongArray(long[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x689E300", Offset = "0x689D300", VA = "0x689E300")]
	public static IntPtr ToShortArray(short[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x689E3C0", Offset = "0x689D3C0", VA = "0x689E3C0")]
	public static IntPtr ToByteArray(byte[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x689E440", Offset = "0x689D440", VA = "0x689E440")]
	public static IntPtr ToSByteArray(sbyte[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x689E500", Offset = "0x689D500", VA = "0x689E500")]
	public static IntPtr ToBooleanArray(bool[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x689E580", Offset = "0x689D580", VA = "0x689E580")]
	public static IntPtr ToIntArray(int[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x689E640", Offset = "0x689D640", VA = "0x689E640")]
	public static IntPtr GetObjectArrayElement(IntPtr array, int index)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x689E6E0", Offset = "0x689D6E0", VA = "0x689E6E0")]
	public static int GetArrayLength(IntPtr array)
	{
		return default(int);
	}
}
