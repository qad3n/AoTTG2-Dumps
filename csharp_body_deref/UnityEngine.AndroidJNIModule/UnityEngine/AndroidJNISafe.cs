using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000005")]
internal class AndroidJNISafe
{
	[Token(Token = "0x6000082")]
	[Address(RVA = "0x4A6E980", Offset = "0x4A6E980", VA = "0x4A6E980")]
	public static void CheckException()
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4A6EF30", Offset = "0x4A6EF30", VA = "0x4A6EF30")]
	public static void DeleteGlobalRef(IntPtr globalref)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4A6EF70", Offset = "0x4A6EF70", VA = "0x4A6EF70")]
	public static void DeleteWeakGlobalRef(IntPtr globalref)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4A6EFB0", Offset = "0x4A6EFB0", VA = "0x4A6EFB0")]
	public static void DeleteLocalRef(IntPtr localref)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4A6EFF0", Offset = "0x4A6EFF0", VA = "0x4A6EFF0")]
	public static IntPtr NewString(string chars)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x4A6F090", Offset = "0x4A6F090", VA = "0x4A6F090")]
	public static string GetStringChars(IntPtr str)
	{
		return null;
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4A6F130", Offset = "0x4A6F130", VA = "0x4A6F130")]
	public static IntPtr GetObjectClass(IntPtr ptr)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4A6C3A0", Offset = "0x4A6C3A0", VA = "0x4A6C3A0")]
	public static IntPtr GetStaticMethodID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4A6F1D0", Offset = "0x4A6F1D0", VA = "0x4A6F1D0")]
	public static IntPtr GetMethodID(IntPtr obj, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x4A6F280", Offset = "0x4A6F280", VA = "0x4A6F280")]
	public static IntPtr GetFieldID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x4A6F330", Offset = "0x4A6F330", VA = "0x4A6F330")]
	public static IntPtr GetStaticFieldID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x4A6F3E0", Offset = "0x4A6F3E0", VA = "0x4A6F3E0")]
	public static IntPtr FromReflectedMethod(IntPtr refMethod)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x4A6C300", Offset = "0x4A6C300", VA = "0x4A6C300")]
	public static IntPtr FindClass(string name)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x4A6F480", Offset = "0x4A6F480", VA = "0x4A6F480")]
	public static void PushLocalFrame(int capacity)
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x4A6F4C0", Offset = "0x4A6F4C0", VA = "0x4A6F4C0")]
	public static IntPtr NewObject(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x4A6F5B0", Offset = "0x4A6F5B0", VA = "0x4A6F5B0")]
	public static IntPtr GetStaticObjectField(IntPtr clazz, IntPtr fieldID)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x4A6F650", Offset = "0x4A6F650", VA = "0x4A6F650")]
	public static string GetStaticStringField(IntPtr clazz, IntPtr fieldID)
	{
		return null;
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x4A6F6F0", Offset = "0x4A6F6F0", VA = "0x4A6F6F0")]
	public static char GetStaticCharField(IntPtr clazz, IntPtr fieldID)
	{
		return default(char);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x4A6F790", Offset = "0x4A6F790", VA = "0x4A6F790")]
	public static double GetStaticDoubleField(IntPtr clazz, IntPtr fieldID)
	{
		return default(double);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4A6F840", Offset = "0x4A6F840", VA = "0x4A6F840")]
	public static float GetStaticFloatField(IntPtr clazz, IntPtr fieldID)
	{
		return default(float);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x4A6F8F0", Offset = "0x4A6F8F0", VA = "0x4A6F8F0")]
	public static long GetStaticLongField(IntPtr clazz, IntPtr fieldID)
	{
		return default(long);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x4A6F990", Offset = "0x4A6F990", VA = "0x4A6F990")]
	public static short GetStaticShortField(IntPtr clazz, IntPtr fieldID)
	{
		return default(short);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4A6FA30", Offset = "0x4A6FA30", VA = "0x4A6FA30")]
	public static sbyte GetStaticSByteField(IntPtr clazz, IntPtr fieldID)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4A6FAD0", Offset = "0x4A6FAD0", VA = "0x4A6FAD0")]
	public static bool GetStaticBooleanField(IntPtr clazz, IntPtr fieldID)
	{
		return default(bool);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4A6FB70", Offset = "0x4A6FB70", VA = "0x4A6FB70")]
	public static int GetStaticIntField(IntPtr clazz, IntPtr fieldID)
	{
		return default(int);
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x4A6FC10", Offset = "0x4A6FC10", VA = "0x4A6FC10")]
	public static void CallStaticVoidMethod(IntPtr clazz, IntPtr methodID, jvalue[] args)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4A6FC60", Offset = "0x4A6FC60", VA = "0x4A6FC60")]
	public static void CallStaticVoidMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x4A6FD40", Offset = "0x4A6FD40", VA = "0x4A6FD40")]
	public static IntPtr CallStaticObjectMethod(IntPtr clazz, IntPtr methodID, jvalue[] args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x4A6C450", Offset = "0x4A6C450", VA = "0x4A6C450")]
	public static IntPtr CallStaticObjectMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x4A6FD90", Offset = "0x4A6FD90", VA = "0x4A6FD90")]
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, jvalue[] args)
	{
		return null;
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x4A6FDE0", Offset = "0x4A6FDE0", VA = "0x4A6FDE0")]
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return null;
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4A6FEC0", Offset = "0x4A6FEC0", VA = "0x4A6FEC0")]
	public static char CallStaticCharMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(char);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4A6FFA0", Offset = "0x4A6FFA0", VA = "0x4A6FFA0")]
	public static double CallStaticDoubleMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(double);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4A70090", Offset = "0x4A70090", VA = "0x4A70090")]
	public static float CallStaticFloatMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(float);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4A70180", Offset = "0x4A70180", VA = "0x4A70180")]
	public static long CallStaticLongMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(long);
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x4A70270", Offset = "0x4A70270", VA = "0x4A70270")]
	public static short CallStaticShortMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(short);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4A70350", Offset = "0x4A70350", VA = "0x4A70350")]
	public static sbyte CallStaticSByteMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4A70430", Offset = "0x4A70430", VA = "0x4A70430")]
	public static bool CallStaticBooleanMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x4A70510", Offset = "0x4A70510", VA = "0x4A70510")]
	public static int CallStaticIntMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(int);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4A705F0", Offset = "0x4A705F0", VA = "0x4A705F0")]
	public static void CallVoidMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4A706D0", Offset = "0x4A706D0", VA = "0x4A706D0")]
	public static IntPtr CallObjectMethod(IntPtr obj, IntPtr methodID, jvalue[] args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4A70720", Offset = "0x4A70720", VA = "0x4A70720")]
	public static IntPtr CallObjectMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4A70810", Offset = "0x4A70810", VA = "0x4A70810")]
	public static string CallStringMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return null;
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4A708F0", Offset = "0x4A708F0", VA = "0x4A708F0")]
	public static char CallCharMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(char);
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4A709D0", Offset = "0x4A709D0", VA = "0x4A709D0")]
	public static double CallDoubleMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(double);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4A70AC0", Offset = "0x4A70AC0", VA = "0x4A70AC0")]
	public static float CallFloatMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(float);
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x4A70BB0", Offset = "0x4A70BB0", VA = "0x4A70BB0")]
	public static long CallLongMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(long);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x4A70CA0", Offset = "0x4A70CA0", VA = "0x4A70CA0")]
	public static short CallShortMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(short);
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x4A70D80", Offset = "0x4A70D80", VA = "0x4A70D80")]
	public static sbyte CallSByteMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x4A70E60", Offset = "0x4A70E60", VA = "0x4A70E60")]
	public static bool CallBooleanMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x4A70F40", Offset = "0x4A70F40", VA = "0x4A70F40")]
	public static int CallIntMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(int);
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x4A71020", Offset = "0x4A71020", VA = "0x4A71020")]
	public static char[] FromCharArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x4A710C0", Offset = "0x4A710C0", VA = "0x4A710C0")]
	public static double[] FromDoubleArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x4A71160", Offset = "0x4A71160", VA = "0x4A71160")]
	public static float[] FromFloatArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x4A71200", Offset = "0x4A71200", VA = "0x4A71200")]
	public static long[] FromLongArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x4A712A0", Offset = "0x4A712A0", VA = "0x4A712A0")]
	public static short[] FromShortArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x4A71340", Offset = "0x4A71340", VA = "0x4A71340")]
	public static byte[] FromByteArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4A713E0", Offset = "0x4A713E0", VA = "0x4A713E0")]
	public static sbyte[] FromSByteArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x4A71480", Offset = "0x4A71480", VA = "0x4A71480")]
	public static bool[] FromBooleanArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x4A71520", Offset = "0x4A71520", VA = "0x4A71520")]
	public static int[] FromIntArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x4A715C0", Offset = "0x4A715C0", VA = "0x4A715C0")]
	public static IntPtr ToObjectArray(IntPtr[] array, IntPtr type)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x4A71680", Offset = "0x4A71680", VA = "0x4A71680")]
	public static IntPtr ToCharArray(char[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x4A71730", Offset = "0x4A71730", VA = "0x4A71730")]
	public static IntPtr ToDoubleArray(double[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x4A717E0", Offset = "0x4A717E0", VA = "0x4A717E0")]
	public static IntPtr ToFloatArray(float[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x4A71890", Offset = "0x4A71890", VA = "0x4A71890")]
	public static IntPtr ToLongArray(long[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x4A71940", Offset = "0x4A71940", VA = "0x4A71940")]
	public static IntPtr ToShortArray(short[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x4A719F0", Offset = "0x4A719F0", VA = "0x4A719F0")]
	public static IntPtr ToByteArray(byte[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x4A71A70", Offset = "0x4A71A70", VA = "0x4A71A70")]
	public static IntPtr ToSByteArray(sbyte[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x4A71B20", Offset = "0x4A71B20", VA = "0x4A71B20")]
	public static IntPtr ToBooleanArray(bool[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x4A71BA0", Offset = "0x4A71BA0", VA = "0x4A71BA0")]
	public static IntPtr ToIntArray(int[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x4A71C50", Offset = "0x4A71C50", VA = "0x4A71C50")]
	public static IntPtr GetObjectArrayElement(IntPtr array, int index)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x4A71CF0", Offset = "0x4A71CF0", VA = "0x4A71CF0")]
	public static int GetArrayLength(IntPtr array)
	{
		return default(int);
	}
}
