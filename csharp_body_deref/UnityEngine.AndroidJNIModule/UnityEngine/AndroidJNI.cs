using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000004")]
[UnityEngine.Bindings.NativeConditional("PLATFORM_ANDROID")]
[UnityEngine.Bindings.StaticAccessor("AndroidJNIBindingsHelpers", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Modules/AndroidJNI/Public/AndroidJNIBindingsHelpers.h")]
public static class AndroidJNI
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4A6C5E0", Offset = "0x4A6C5E0", VA = "0x4A6C5E0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr FindClass(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4A6C610", Offset = "0x4A6C610", VA = "0x4A6C610")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr FromReflectedMethod(IntPtr refMethod);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4A6C640", Offset = "0x4A6C640", VA = "0x4A6C640")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr ExceptionOccurred();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4A6C670", Offset = "0x4A6C670", VA = "0x4A6C670")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void ExceptionClear();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4A6C6A0", Offset = "0x4A6C6A0", VA = "0x4A6C6A0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int PushLocalFrame(int capacity);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4A6C6D0", Offset = "0x4A6C6D0", VA = "0x4A6C6D0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr PopLocalFrame(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4A6C700", Offset = "0x4A6C700", VA = "0x4A6C700")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewGlobalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4A6C730", Offset = "0x4A6C730", VA = "0x4A6C730")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void DeleteGlobalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4A6C760", Offset = "0x4A6C760", VA = "0x4A6C760")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewWeakGlobalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4A6C790", Offset = "0x4A6C790", VA = "0x4A6C790")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void DeleteWeakGlobalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4A6C7C0", Offset = "0x4A6C7C0", VA = "0x4A6C7C0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewLocalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4A6C7F0", Offset = "0x4A6C7F0", VA = "0x4A6C7F0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void DeleteLocalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4A6C820", Offset = "0x4A6C820", VA = "0x4A6C820")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool IsSameObject(IntPtr obj1, IntPtr obj2);

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4A6C860", Offset = "0x4A6C860", VA = "0x4A6C860")]
	public static IntPtr NewObject(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4A6C8E0", Offset = "0x4A6C8E0", VA = "0x4A6C8E0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr NewObjectA(IntPtr clazz, IntPtr methodID, jvalue* args);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4A6C920", Offset = "0x4A6C920", VA = "0x4A6C920")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetObjectClass(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4A6C950", Offset = "0x4A6C950", VA = "0x4A6C950")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetMethodID(IntPtr clazz, string name, string sig);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4A6C990", Offset = "0x4A6C990", VA = "0x4A6C990")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetFieldID(IntPtr clazz, string name, string sig);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4A6C9D0", Offset = "0x4A6C9D0", VA = "0x4A6C9D0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetStaticMethodID(IntPtr clazz, string name, string sig);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4A6CA10", Offset = "0x4A6CA10", VA = "0x4A6CA10")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetStaticFieldID(IntPtr clazz, string name, string sig);

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4A6CA50", Offset = "0x4A6CA50", VA = "0x4A6CA50")]
	public static IntPtr NewString(string chars)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4A6CA80", Offset = "0x4A6CA80", VA = "0x4A6CA80")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern IntPtr NewStringFromStr(string chars);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4A6CAB0", Offset = "0x4A6CAB0", VA = "0x4A6CAB0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern string GetStringChars(IntPtr str);

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4A6CAE0", Offset = "0x4A6CAE0", VA = "0x4A6CAE0")]
	public static string CallStringMethod(IntPtr obj, IntPtr methodID, jvalue[] args)
	{
		return null;
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4A6CBB0", Offset = "0x4A6CBB0", VA = "0x4A6CBB0")]
	public static string CallStringMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4A6CC30", Offset = "0x4A6CC30", VA = "0x4A6CC30")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern string CallStringMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4A6CC70", Offset = "0x4A6CC70", VA = "0x4A6CC70")]
	public static IntPtr CallObjectMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4A6CCF0", Offset = "0x4A6CCF0", VA = "0x4A6CCF0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr CallObjectMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4A6CD30", Offset = "0x4A6CD30", VA = "0x4A6CD30")]
	public static int CallIntMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4A6CDB0", Offset = "0x4A6CDB0", VA = "0x4A6CDB0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern int CallIntMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4A6CDF0", Offset = "0x4A6CDF0", VA = "0x4A6CDF0")]
	public static bool CallBooleanMethod(IntPtr obj, IntPtr methodID, jvalue[] args)
	{
		return default(bool);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4A6CEC0", Offset = "0x4A6CEC0", VA = "0x4A6CEC0")]
	public static bool CallBooleanMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4A6CF40", Offset = "0x4A6CF40", VA = "0x4A6CF40")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern bool CallBooleanMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4A6CF80", Offset = "0x4A6CF80", VA = "0x4A6CF80")]
	public static short CallShortMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(short);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4A6D000", Offset = "0x4A6D000", VA = "0x4A6D000")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern short CallShortMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4A6D040", Offset = "0x4A6D040", VA = "0x4A6D040")]
	public static sbyte CallSByteMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(sbyte);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4A6D0C0", Offset = "0x4A6D0C0", VA = "0x4A6D0C0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern sbyte CallSByteMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4A6D100", Offset = "0x4A6D100", VA = "0x4A6D100")]
	public static char CallCharMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(char);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4A6D180", Offset = "0x4A6D180", VA = "0x4A6D180")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern char CallCharMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4A6D1C0", Offset = "0x4A6D1C0", VA = "0x4A6D1C0")]
	public static float CallFloatMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4A6D240", Offset = "0x4A6D240", VA = "0x4A6D240")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern float CallFloatMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4A6D280", Offset = "0x4A6D280", VA = "0x4A6D280")]
	public static double CallDoubleMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4A6D300", Offset = "0x4A6D300", VA = "0x4A6D300")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern double CallDoubleMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4A6D340", Offset = "0x4A6D340", VA = "0x4A6D340")]
	public static long CallLongMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4A6D3C0", Offset = "0x4A6D3C0", VA = "0x4A6D3C0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern long CallLongMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4A6D400", Offset = "0x4A6D400", VA = "0x4A6D400")]
	public static void CallVoidMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4A6D480", Offset = "0x4A6D480", VA = "0x4A6D480")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void CallVoidMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4A6D4C0", Offset = "0x4A6D4C0", VA = "0x4A6D4C0")]
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, jvalue[] args)
	{
		return null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4A6D590", Offset = "0x4A6D590", VA = "0x4A6D590")]
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4A6D610", Offset = "0x4A6D610", VA = "0x4A6D610")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern string CallStaticStringMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4A6D650", Offset = "0x4A6D650", VA = "0x4A6D650")]
	public static IntPtr CallStaticObjectMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4A6D6D0", Offset = "0x4A6D6D0", VA = "0x4A6D6D0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr CallStaticObjectMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4A6D710", Offset = "0x4A6D710", VA = "0x4A6D710")]
	public static int CallStaticIntMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4A6D790", Offset = "0x4A6D790", VA = "0x4A6D790")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern int CallStaticIntMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4A6D7D0", Offset = "0x4A6D7D0", VA = "0x4A6D7D0")]
	public static bool CallStaticBooleanMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4A6D850", Offset = "0x4A6D850", VA = "0x4A6D850")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern bool CallStaticBooleanMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4A6D890", Offset = "0x4A6D890", VA = "0x4A6D890")]
	public static short CallStaticShortMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(short);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4A6D910", Offset = "0x4A6D910", VA = "0x4A6D910")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern short CallStaticShortMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4A6D950", Offset = "0x4A6D950", VA = "0x4A6D950")]
	public static sbyte CallStaticSByteMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(sbyte);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4A6D9D0", Offset = "0x4A6D9D0", VA = "0x4A6D9D0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern sbyte CallStaticSByteMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4A6DA10", Offset = "0x4A6DA10", VA = "0x4A6DA10")]
	public static char CallStaticCharMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(char);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4A6DA90", Offset = "0x4A6DA90", VA = "0x4A6DA90")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern char CallStaticCharMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4A6DAD0", Offset = "0x4A6DAD0", VA = "0x4A6DAD0")]
	public static float CallStaticFloatMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4A6DB50", Offset = "0x4A6DB50", VA = "0x4A6DB50")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern float CallStaticFloatMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4A6DB90", Offset = "0x4A6DB90", VA = "0x4A6DB90")]
	public static double CallStaticDoubleMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4A6DC10", Offset = "0x4A6DC10", VA = "0x4A6DC10")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern double CallStaticDoubleMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4A6DC50", Offset = "0x4A6DC50", VA = "0x4A6DC50")]
	public static long CallStaticLongMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4A6DCD0", Offset = "0x4A6DCD0", VA = "0x4A6DCD0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern long CallStaticLongMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4A6DD10", Offset = "0x4A6DD10", VA = "0x4A6DD10")]
	public static void CallStaticVoidMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4A6DD90", Offset = "0x4A6DD90", VA = "0x4A6DD90")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void CallStaticVoidMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4A6DDD0", Offset = "0x4A6DDD0", VA = "0x4A6DDD0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern string GetStaticStringField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4A6DE10", Offset = "0x4A6DE10", VA = "0x4A6DE10")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetStaticObjectField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4A6DE50", Offset = "0x4A6DE50", VA = "0x4A6DE50")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool GetStaticBooleanField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4A6DE90", Offset = "0x4A6DE90", VA = "0x4A6DE90")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern sbyte GetStaticSByteField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4A6DED0", Offset = "0x4A6DED0", VA = "0x4A6DED0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern char GetStaticCharField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005B")]
	[Address(RVA = "0x4A6DF10", Offset = "0x4A6DF10", VA = "0x4A6DF10")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern short GetStaticShortField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4A6DF50", Offset = "0x4A6DF50", VA = "0x4A6DF50")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int GetStaticIntField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x4A6DF90", Offset = "0x4A6DF90", VA = "0x4A6DF90")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern long GetStaticLongField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4A6DFD0", Offset = "0x4A6DFD0", VA = "0x4A6DFD0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern float GetStaticFloatField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4A6E010", Offset = "0x4A6E010", VA = "0x4A6E010")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern double GetStaticDoubleField(IntPtr clazz, IntPtr fieldID);

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4A6E050", Offset = "0x4A6E050", VA = "0x4A6E050")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr ToBooleanArray(bool[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4A6E140", Offset = "0x4A6E140", VA = "0x4A6E140")]
	[UnityEngine.Bindings.ThreadSafe]
	[Obsolete("AndroidJNI.ToByteArray is obsolete. Use AndroidJNI.ToSByteArray method instead")]
	public static IntPtr ToByteArray(byte[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4A6E230", Offset = "0x4A6E230", VA = "0x4A6E230")]
	public static IntPtr ToSByteArray(sbyte[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4A6E280", Offset = "0x4A6E280", VA = "0x4A6E280")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToSByteArray(sbyte* array, int length);

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4A6E2C0", Offset = "0x4A6E2C0", VA = "0x4A6E2C0")]
	public static IntPtr ToCharArray(char[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4A6E310", Offset = "0x4A6E310", VA = "0x4A6E310")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToCharArray(char* array, int length);

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4A6E350", Offset = "0x4A6E350", VA = "0x4A6E350")]
	public static IntPtr ToShortArray(short[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4A6E3A0", Offset = "0x4A6E3A0", VA = "0x4A6E3A0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToShortArray(short* array, int length);

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4A6E3E0", Offset = "0x4A6E3E0", VA = "0x4A6E3E0")]
	public static IntPtr ToIntArray(int[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4A6E430", Offset = "0x4A6E430", VA = "0x4A6E430")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToIntArray(int* array, int length);

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4A6E470", Offset = "0x4A6E470", VA = "0x4A6E470")]
	public static IntPtr ToLongArray(long[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4A6E4C0", Offset = "0x4A6E4C0", VA = "0x4A6E4C0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToLongArray(long* array, int length);

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4A6E500", Offset = "0x4A6E500", VA = "0x4A6E500")]
	public static IntPtr ToFloatArray(float[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4A6E550", Offset = "0x4A6E550", VA = "0x4A6E550")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToFloatArray(float* array, int length);

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4A6E590", Offset = "0x4A6E590", VA = "0x4A6E590")]
	public static IntPtr ToDoubleArray(double[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4A6E5E0", Offset = "0x4A6E5E0", VA = "0x4A6E5E0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToDoubleArray(double* array, int length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000070")]
	[Address(RVA = "0x4A6E620", Offset = "0x4A6E620", VA = "0x4A6E620")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToObjectArray(IntPtr* array, int length, IntPtr arrayClass);

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4A6E660", Offset = "0x4A6E660", VA = "0x4A6E660")]
	public static IntPtr ToObjectArray(IntPtr[] array, IntPtr arrayClass)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4A6E6B0", Offset = "0x4A6E6B0", VA = "0x4A6E6B0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool[] FromBooleanArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4A6E6E0", Offset = "0x4A6E6E0", VA = "0x4A6E6E0")]
	[UnityEngine.Bindings.ThreadSafe]
	[Obsolete("AndroidJNI.FromByteArray is obsolete. Use AndroidJNI.FromSByteArray method instead")]
	public static extern byte[] FromByteArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4A6E710", Offset = "0x4A6E710", VA = "0x4A6E710")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern sbyte[] FromSByteArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000075")]
	[Address(RVA = "0x4A6E740", Offset = "0x4A6E740", VA = "0x4A6E740")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern char[] FromCharArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4A6E770", Offset = "0x4A6E770", VA = "0x4A6E770")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern short[] FromShortArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4A6E7A0", Offset = "0x4A6E7A0", VA = "0x4A6E7A0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int[] FromIntArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4A6E7D0", Offset = "0x4A6E7D0", VA = "0x4A6E7D0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern long[] FromLongArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4A6E800", Offset = "0x4A6E800", VA = "0x4A6E800")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern float[] FromFloatArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4A6E830", Offset = "0x4A6E830", VA = "0x4A6E830")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern double[] FromDoubleArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4A6E860", Offset = "0x4A6E860", VA = "0x4A6E860")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int GetArrayLength(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4A6E890", Offset = "0x4A6E890", VA = "0x4A6E890")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewShortArray(int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007D")]
	[Address(RVA = "0x4A6E8C0", Offset = "0x4A6E8C0", VA = "0x4A6E8C0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewObjectArray(int size, IntPtr clazz, IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007E")]
	[Address(RVA = "0x4A6E900", Offset = "0x4A6E900", VA = "0x4A6E900")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetObjectArrayElement(IntPtr array, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007F")]
	[Address(RVA = "0x4A6E940", Offset = "0x4A6E940", VA = "0x4A6E940")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void SetObjectArrayElement(IntPtr array, int index, IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000080")]
	[Address(RVA = "0x4A6E110", Offset = "0x4A6E110", VA = "0x4A6E110")]
	private static extern IntPtr ToBooleanArray_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000081")]
	[Address(RVA = "0x4A6E200", Offset = "0x4A6E200", VA = "0x4A6E200")]
	private static extern IntPtr ToByteArray_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper array);
}
