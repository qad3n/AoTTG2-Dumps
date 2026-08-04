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

[Token(Token = "0x2000005")]
internal class AndroidJNISafe
{
	[Token(Token = "0x6000082")]
	[Address(RVA = "0x4D961A0", Offset = "0x4D961A0", VA = "0x4D961A0")]
	public static void CheckException()
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4D96750", Offset = "0x4D96750", VA = "0x4D96750")]
	public static void DeleteGlobalRef(IntPtr globalref)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4D96790", Offset = "0x4D96790", VA = "0x4D96790")]
	public static void DeleteWeakGlobalRef(IntPtr globalref)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4D967D0", Offset = "0x4D967D0", VA = "0x4D967D0")]
	public static void DeleteLocalRef(IntPtr localref)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4D96810", Offset = "0x4D96810", VA = "0x4D96810")]
	public static IntPtr NewString(string chars)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x4D968B0", Offset = "0x4D968B0", VA = "0x4D968B0")]
	public static string GetStringChars(IntPtr str)
	{
		return null;
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4D96950", Offset = "0x4D96950", VA = "0x4D96950")]
	public static IntPtr GetObjectClass(IntPtr ptr)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4D93BC0", Offset = "0x4D93BC0", VA = "0x4D93BC0")]
	public static IntPtr GetStaticMethodID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4D969F0", Offset = "0x4D969F0", VA = "0x4D969F0")]
	public static IntPtr GetMethodID(IntPtr obj, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x4D96AA0", Offset = "0x4D96AA0", VA = "0x4D96AA0")]
	public static IntPtr GetFieldID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x4D96B50", Offset = "0x4D96B50", VA = "0x4D96B50")]
	public static IntPtr GetStaticFieldID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x4D96C00", Offset = "0x4D96C00", VA = "0x4D96C00")]
	public static IntPtr FromReflectedMethod(IntPtr refMethod)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x4D93B20", Offset = "0x4D93B20", VA = "0x4D93B20")]
	public static IntPtr FindClass(string name)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x4D96CA0", Offset = "0x4D96CA0", VA = "0x4D96CA0")]
	public static void PushLocalFrame(int capacity)
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x4D96CE0", Offset = "0x4D96CE0", VA = "0x4D96CE0")]
	public static IntPtr NewObject(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x4D96DD0", Offset = "0x4D96DD0", VA = "0x4D96DD0")]
	public static IntPtr GetStaticObjectField(IntPtr clazz, IntPtr fieldID)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x4D96E70", Offset = "0x4D96E70", VA = "0x4D96E70")]
	public static string GetStaticStringField(IntPtr clazz, IntPtr fieldID)
	{
		return null;
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x4D96F10", Offset = "0x4D96F10", VA = "0x4D96F10")]
	public static char GetStaticCharField(IntPtr clazz, IntPtr fieldID)
	{
		return default(char);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x4D96FB0", Offset = "0x4D96FB0", VA = "0x4D96FB0")]
	public static double GetStaticDoubleField(IntPtr clazz, IntPtr fieldID)
	{
		return default(double);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4D97060", Offset = "0x4D97060", VA = "0x4D97060")]
	public static float GetStaticFloatField(IntPtr clazz, IntPtr fieldID)
	{
		return default(float);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x4D97110", Offset = "0x4D97110", VA = "0x4D97110")]
	public static long GetStaticLongField(IntPtr clazz, IntPtr fieldID)
	{
		return default(long);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x4D971B0", Offset = "0x4D971B0", VA = "0x4D971B0")]
	public static short GetStaticShortField(IntPtr clazz, IntPtr fieldID)
	{
		return default(short);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4D97250", Offset = "0x4D97250", VA = "0x4D97250")]
	public static sbyte GetStaticSByteField(IntPtr clazz, IntPtr fieldID)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4D972F0", Offset = "0x4D972F0", VA = "0x4D972F0")]
	public static bool GetStaticBooleanField(IntPtr clazz, IntPtr fieldID)
	{
		return default(bool);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4D97390", Offset = "0x4D97390", VA = "0x4D97390")]
	public static int GetStaticIntField(IntPtr clazz, IntPtr fieldID)
	{
		return default(int);
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x4D97430", Offset = "0x4D97430", VA = "0x4D97430")]
	public static void CallStaticVoidMethod(IntPtr clazz, IntPtr methodID, jvalue[] args)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4D97480", Offset = "0x4D97480", VA = "0x4D97480")]
	public static void CallStaticVoidMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x4D97560", Offset = "0x4D97560", VA = "0x4D97560")]
	public static IntPtr CallStaticObjectMethod(IntPtr clazz, IntPtr methodID, jvalue[] args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x4D93C70", Offset = "0x4D93C70", VA = "0x4D93C70")]
	public static IntPtr CallStaticObjectMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x4D975B0", Offset = "0x4D975B0", VA = "0x4D975B0")]
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, jvalue[] args)
	{
		return null;
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x4D97600", Offset = "0x4D97600", VA = "0x4D97600")]
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return null;
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4D976E0", Offset = "0x4D976E0", VA = "0x4D976E0")]
	public static char CallStaticCharMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(char);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4D977C0", Offset = "0x4D977C0", VA = "0x4D977C0")]
	public static double CallStaticDoubleMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(double);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4D978B0", Offset = "0x4D978B0", VA = "0x4D978B0")]
	public static float CallStaticFloatMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(float);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4D979A0", Offset = "0x4D979A0", VA = "0x4D979A0")]
	public static long CallStaticLongMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(long);
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x4D97A90", Offset = "0x4D97A90", VA = "0x4D97A90")]
	public static short CallStaticShortMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(short);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4D97B70", Offset = "0x4D97B70", VA = "0x4D97B70")]
	public static sbyte CallStaticSByteMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4D97C50", Offset = "0x4D97C50", VA = "0x4D97C50")]
	public static bool CallStaticBooleanMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x4D97D30", Offset = "0x4D97D30", VA = "0x4D97D30")]
	public static int CallStaticIntMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(int);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4D97E10", Offset = "0x4D97E10", VA = "0x4D97E10")]
	public static void CallVoidMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4D97EF0", Offset = "0x4D97EF0", VA = "0x4D97EF0")]
	public static IntPtr CallObjectMethod(IntPtr obj, IntPtr methodID, jvalue[] args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4D97F40", Offset = "0x4D97F40", VA = "0x4D97F40")]
	public static IntPtr CallObjectMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4D98030", Offset = "0x4D98030", VA = "0x4D98030")]
	public static string CallStringMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return null;
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4D98110", Offset = "0x4D98110", VA = "0x4D98110")]
	public static char CallCharMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(char);
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4D981F0", Offset = "0x4D981F0", VA = "0x4D981F0")]
	public static double CallDoubleMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(double);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4D982E0", Offset = "0x4D982E0", VA = "0x4D982E0")]
	public static float CallFloatMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(float);
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x4D983D0", Offset = "0x4D983D0", VA = "0x4D983D0")]
	public static long CallLongMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(long);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x4D984C0", Offset = "0x4D984C0", VA = "0x4D984C0")]
	public static short CallShortMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(short);
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x4D985A0", Offset = "0x4D985A0", VA = "0x4D985A0")]
	public static sbyte CallSByteMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x4D98680", Offset = "0x4D98680", VA = "0x4D98680")]
	public static bool CallBooleanMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x4D98760", Offset = "0x4D98760", VA = "0x4D98760")]
	public static int CallIntMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(int);
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x4D98840", Offset = "0x4D98840", VA = "0x4D98840")]
	public static char[] FromCharArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x4D988E0", Offset = "0x4D988E0", VA = "0x4D988E0")]
	public static double[] FromDoubleArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x4D98980", Offset = "0x4D98980", VA = "0x4D98980")]
	public static float[] FromFloatArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x4D98A20", Offset = "0x4D98A20", VA = "0x4D98A20")]
	public static long[] FromLongArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x4D98AC0", Offset = "0x4D98AC0", VA = "0x4D98AC0")]
	public static short[] FromShortArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x4D98B60", Offset = "0x4D98B60", VA = "0x4D98B60")]
	public static byte[] FromByteArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4D98C00", Offset = "0x4D98C00", VA = "0x4D98C00")]
	public static sbyte[] FromSByteArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x4D98CA0", Offset = "0x4D98CA0", VA = "0x4D98CA0")]
	public static bool[] FromBooleanArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x4D98D40", Offset = "0x4D98D40", VA = "0x4D98D40")]
	public static int[] FromIntArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x4D98DE0", Offset = "0x4D98DE0", VA = "0x4D98DE0")]
	public static IntPtr ToObjectArray(IntPtr[] array, IntPtr type)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x4D98EA0", Offset = "0x4D98EA0", VA = "0x4D98EA0")]
	public static IntPtr ToCharArray(char[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x4D98F50", Offset = "0x4D98F50", VA = "0x4D98F50")]
	public static IntPtr ToDoubleArray(double[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x4D99000", Offset = "0x4D99000", VA = "0x4D99000")]
	public static IntPtr ToFloatArray(float[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x4D990B0", Offset = "0x4D990B0", VA = "0x4D990B0")]
	public static IntPtr ToLongArray(long[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x4D99160", Offset = "0x4D99160", VA = "0x4D99160")]
	public static IntPtr ToShortArray(short[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x4D99210", Offset = "0x4D99210", VA = "0x4D99210")]
	public static IntPtr ToByteArray(byte[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x4D99290", Offset = "0x4D99290", VA = "0x4D99290")]
	public static IntPtr ToSByteArray(sbyte[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x4D99340", Offset = "0x4D99340", VA = "0x4D99340")]
	public static IntPtr ToBooleanArray(bool[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x4D993C0", Offset = "0x4D993C0", VA = "0x4D993C0")]
	public static IntPtr ToIntArray(int[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x4D99470", Offset = "0x4D99470", VA = "0x4D99470")]
	public static IntPtr GetObjectArrayElement(IntPtr array, int index)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x4D99510", Offset = "0x4D99510", VA = "0x4D99510")]
	public static int GetArrayLength(IntPtr array)
	{
		return default(int);
	}
}
