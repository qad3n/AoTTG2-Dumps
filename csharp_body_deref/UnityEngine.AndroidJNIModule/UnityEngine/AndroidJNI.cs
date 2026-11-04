// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AndroidJNI
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200000D")]
[UnityEngine.Bindings.NativeConditional("PLATFORM_ANDROID")]
[UnityEngine.Bindings.StaticAccessor("AndroidJNIBindingsHelpers", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Modules/AndroidJNI/Public/AndroidJNIBindingsHelpers.h")]
public static class AndroidJNI
{
	[Token(Token = "0x200000E")]
	private struct JStringBinding : IDisposable
	{
		[Token(Token = "0x400001E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IntPtr javaString;

		[Token(Token = "0x400001F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private IntPtr chars;

		[Token(Token = "0x4000020")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int length;

		[Token(Token = "0x4000021")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		private bool ownsRef;

		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x2EA5750", Offset = "0x2EA3D50", VA = "0x182EA5750", Slot = "3")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x2EA5700", Offset = "0x2EA3D00", VA = "0x182EA5700", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x2EA1830", Offset = "0x2E9FE30", VA = "0x182EA1830")]
	[UnityEngine.Bindings.ThreadSafe]
	private static void ReleaseStringChars(JStringBinding str)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x2EA12A0", Offset = "0x2E9F8A0", VA = "0x182EA12A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeAction(Action action)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x2E9F8D0", Offset = "0x2E9DED0", VA = "0x182E9F8D0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr FindClass(string name)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006C")]
	[Address(RVA = "0x2E9FDC0", Offset = "0x2E9E3C0", VA = "0x182E9FDC0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr FromReflectedMethod(IntPtr refMethod);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006D")]
	[Address(RVA = "0x2E9F860", Offset = "0x2E9DE60", VA = "0x182E9F860")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr ExceptionOccurred();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006E")]
	[Address(RVA = "0x2E9F830", Offset = "0x2E9DE30", VA = "0x182E9F830")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void ExceptionClear();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006F")]
	[Address(RVA = "0x2EA1770", Offset = "0x2E9FD70", VA = "0x182EA1770")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int PushLocalFrame(int capacity);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000070")]
	[Address(RVA = "0x2EA1730", Offset = "0x2E9FD30", VA = "0x182EA1730")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr PopLocalFrame(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000071")]
	[Address(RVA = "0x2EA1320", Offset = "0x2E9F920", VA = "0x182EA1320")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewGlobalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000072")]
	[Address(RVA = "0x2E9F770", Offset = "0x2E9DD70", VA = "0x182E9F770")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void DeleteGlobalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000073")]
	[Address(RVA = "0x2EA17B0", Offset = "0x2E9FDB0", VA = "0x182EA17B0")]
	[UnityEngine.Bindings.ThreadSafe]
	internal static extern void QueueDeleteGlobalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000074")]
	[Address(RVA = "0x2EA16F0", Offset = "0x2E9FCF0", VA = "0x182EA16F0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewWeakGlobalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000075")]
	[Address(RVA = "0x2E9F7F0", Offset = "0x2E9DDF0", VA = "0x182E9F7F0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void DeleteWeakGlobalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000076")]
	[Address(RVA = "0x2EA1360", Offset = "0x2E9F960", VA = "0x182EA1360")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewLocalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000077")]
	[Address(RVA = "0x2E9F7B0", Offset = "0x2E9DDB0", VA = "0x182E9F7B0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void DeleteLocalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000078")]
	[Address(RVA = "0x2EA12D0", Offset = "0x2E9F8D0", VA = "0x182EA12D0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool IsSameObject(IntPtr obj1, IntPtr obj2);

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x2EA1450", Offset = "0x2E9FA50", VA = "0x182EA1450")]
	public static IntPtr NewObject(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x2EA13A0", Offset = "0x2E9F9A0", VA = "0x182EA13A0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr NewObjectA(IntPtr clazz, IntPtr methodID, jvalue* args);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x2EA0520", Offset = "0x2E9EB20", VA = "0x182EA0520")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetObjectClass(IntPtr obj);

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x2EA0230", Offset = "0x2E9E830", VA = "0x182EA0230")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr GetMethodID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x2E9FF20", Offset = "0x2E9E520", VA = "0x182E9FF20")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr GetFieldID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x2EA0AB0", Offset = "0x2E9F0B0", VA = "0x182EA0AB0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr GetStaticMethodID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x2EA06B0", Offset = "0x2E9ECB0", VA = "0x182EA06B0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr GetStaticFieldID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x2EA16E0", Offset = "0x2E9FCE0", VA = "0x182EA16E0")]
	public static IntPtr NewString(string chars)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x2EA1550", Offset = "0x2E9FB50", VA = "0x182EA1550")]
	[UnityEngine.Bindings.ThreadSafe]
	private static IntPtr NewStringFromStr(string chars)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x2EA1140", Offset = "0x2E9F740", VA = "0x182EA1140")]
	public static string GetStringChars(IntPtr str)
	{
		return null;
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x2EA10E0", Offset = "0x2E9F6E0", VA = "0x182EA10E0")]
	[UnityEngine.Bindings.ThreadSafe]
	private static JStringBinding GetStringCharsInternal(IntPtr str)
	{
		return default(JStringBinding);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x2E9F4E0", Offset = "0x2E9DAE0", VA = "0x182E9F4E0")]
	public static string CallStringMethod(IntPtr obj, IntPtr methodID, jvalue[] args)
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x2E9F470", Offset = "0x2E9DA70", VA = "0x182E9F470")]
	public static string CallStringMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return null;
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x2E9F2F0", Offset = "0x2E9D8F0", VA = "0x182E9F2F0")]
	public unsafe static string CallStringMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args)
	{
		return null;
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x2E9F290", Offset = "0x2E9D890", VA = "0x182E9F290")]
	[UnityEngine.Bindings.ThreadSafe]
	private unsafe static JStringBinding CallStringMethodUnsafeInternal(IntPtr obj, IntPtr methodID, jvalue* args)
	{
		return default(JStringBinding);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x2E9E4D0", Offset = "0x2E9CAD0", VA = "0x182E9E4D0")]
	public static IntPtr CallObjectMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000089")]
	[Address(RVA = "0x2E9E470", Offset = "0x2E9CA70", VA = "0x182E9E470")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr CallObjectMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x2E9E310", Offset = "0x2E9C910", VA = "0x182E9E310")]
	public static int CallIntMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x2E9E2B0", Offset = "0x2E9C8B0", VA = "0x182E9E2B0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern int CallIntMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x2E9DF40", Offset = "0x2E9C540", VA = "0x182E9DF40")]
	public static bool CallBooleanMethod(IntPtr obj, IntPtr methodID, jvalue[] args)
	{
		return default(bool);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x2E9DEC0", Offset = "0x2E9C4C0", VA = "0x182E9DEC0")]
	public static bool CallBooleanMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x2E9DE60", Offset = "0x2E9C460", VA = "0x182E9DE60")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern bool CallBooleanMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x2E9E690", Offset = "0x2E9CC90", VA = "0x182E9E690")]
	public static short CallShortMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(short);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000090")]
	[Address(RVA = "0x2E9E630", Offset = "0x2E9CC30", VA = "0x182E9E630")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern short CallShortMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x2E9E5B0", Offset = "0x2E9CBB0", VA = "0x182E9E5B0")]
	public static sbyte CallSByteMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(sbyte);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x2E9E550", Offset = "0x2E9CB50", VA = "0x182E9E550")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern sbyte CallSByteMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x2E9E070", Offset = "0x2E9C670", VA = "0x182E9E070")]
	public static char CallCharMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(char);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x2E9E010", Offset = "0x2E9C610", VA = "0x182E9E010")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern char CallCharMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x2E9E230", Offset = "0x2E9C830", VA = "0x182E9E230")]
	public static float CallFloatMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000096")]
	[Address(RVA = "0x2E9E1D0", Offset = "0x2E9C7D0", VA = "0x182E9E1D0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern float CallFloatMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x2E9E150", Offset = "0x2E9C750", VA = "0x182E9E150")]
	public static double CallDoubleMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x2E9E0F0", Offset = "0x2E9C6F0", VA = "0x182E9E0F0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern double CallDoubleMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x2E9E3F0", Offset = "0x2E9C9F0", VA = "0x182E9E3F0")]
	public static long CallLongMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009A")]
	[Address(RVA = "0x2E9E390", Offset = "0x2E9C990", VA = "0x182E9E390")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern long CallLongMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x2E9F5F0", Offset = "0x2E9DBF0", VA = "0x182E9F5F0")]
	public static void CallVoidMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009C")]
	[Address(RVA = "0x2E9F590", Offset = "0x2E9DB90", VA = "0x182E9F590")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void CallVoidMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x2E9F190", Offset = "0x2E9D790", VA = "0x182E9F190")]
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, jvalue[] args)
	{
		return null;
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x2E9F120", Offset = "0x2E9D720", VA = "0x182E9F120")]
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return null;
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x2E9EFA0", Offset = "0x2E9D5A0", VA = "0x182E9EFA0")]
	public unsafe static string CallStaticStringMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args)
	{
		return null;
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x2E9EF40", Offset = "0x2E9D540", VA = "0x182E9EF40")]
	[UnityEngine.Bindings.ThreadSafe]
	private unsafe static JStringBinding CallStaticStringMethodUnsafeInternal(IntPtr clazz, IntPtr methodID, jvalue* args)
	{
		return default(JStringBinding);
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x2E9ECB0", Offset = "0x2E9D2B0", VA = "0x182E9ECB0")]
	public static IntPtr CallStaticObjectMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x2E9EC50", Offset = "0x2E9D250", VA = "0x182E9EC50")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr CallStaticObjectMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x2E9EAF0", Offset = "0x2E9D0F0", VA = "0x182E9EAF0")]
	public static int CallStaticIntMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x2E9EA90", Offset = "0x2E9D090", VA = "0x182E9EA90")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern int CallStaticIntMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x2E9E770", Offset = "0x2E9CD70", VA = "0x182E9E770")]
	public static bool CallStaticBooleanMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x2E9E710", Offset = "0x2E9CD10", VA = "0x182E9E710")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern bool CallStaticBooleanMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x2E9EE70", Offset = "0x2E9D470", VA = "0x182E9EE70")]
	public static short CallStaticShortMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(short);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x2E9EE10", Offset = "0x2E9D410", VA = "0x182E9EE10")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern short CallStaticShortMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x2E9ED90", Offset = "0x2E9D390", VA = "0x182E9ED90")]
	public static sbyte CallStaticSByteMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(sbyte);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x2E9ED30", Offset = "0x2E9D330", VA = "0x182E9ED30")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern sbyte CallStaticSByteMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x2E9E850", Offset = "0x2E9CE50", VA = "0x182E9E850")]
	public static char CallStaticCharMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(char);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x2E9E7F0", Offset = "0x2E9CDF0", VA = "0x182E9E7F0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern char CallStaticCharMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x2E9EA10", Offset = "0x2E9D010", VA = "0x182E9EA10")]
	public static float CallStaticFloatMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x2E9E9B0", Offset = "0x2E9CFB0", VA = "0x182E9E9B0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern float CallStaticFloatMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x2E9E930", Offset = "0x2E9CF30", VA = "0x182E9E930")]
	public static double CallStaticDoubleMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x2E9E8D0", Offset = "0x2E9CED0", VA = "0x182E9E8D0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern double CallStaticDoubleMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x2E9EBD0", Offset = "0x2E9D1D0", VA = "0x182E9EBD0")]
	public static long CallStaticLongMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x2E9EB70", Offset = "0x2E9D170", VA = "0x182E9EB70")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern long CallStaticLongMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x2EA0F20", Offset = "0x2E9F520", VA = "0x182EA0F20")]
	public static string GetStaticStringField(IntPtr clazz, IntPtr fieldID)
	{
		return null;
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x2EA0EB0", Offset = "0x2E9F4B0", VA = "0x182EA0EB0")]
	[UnityEngine.Bindings.ThreadSafe]
	private static JStringBinding GetStaticStringFieldInternal(IntPtr clazz, IntPtr fieldID)
	{
		return default(JStringBinding);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x2EA0D60", Offset = "0x2E9F360", VA = "0x182EA0D60")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetStaticObjectField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x2EA0560", Offset = "0x2E9EB60", VA = "0x182EA0560")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool GetStaticBooleanField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x2EA0DB0", Offset = "0x2E9F3B0", VA = "0x182EA0DB0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern sbyte GetStaticSByteField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x2EA05B0", Offset = "0x2E9EBB0", VA = "0x182EA05B0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern char GetStaticCharField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x2EA0E00", Offset = "0x2E9F400", VA = "0x182EA0E00")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern short GetStaticShortField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x2EA09B0", Offset = "0x2E9EFB0", VA = "0x182EA09B0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int GetStaticIntField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x2EA0A00", Offset = "0x2E9F000", VA = "0x182EA0A00")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern long GetStaticLongField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x2EA0960", Offset = "0x2E9EF60", VA = "0x182EA0960")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern float GetStaticFloatField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x2EA0600", Offset = "0x2E9EC00", VA = "0x182EA0600")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern double GetStaticDoubleField(IntPtr clazz, IntPtr fieldID);

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x2E9F6B0", Offset = "0x2E9DCB0", VA = "0x182E9F6B0")]
	[UnityEngine.Bindings.ThreadSafe]
	private static IntPtr ConvertToBooleanArray(bool[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x2EA18C0", Offset = "0x2E9FEC0", VA = "0x182EA18C0")]
	public static IntPtr ToBooleanArray(bool[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x2EA19C0", Offset = "0x2E9FFC0", VA = "0x182EA19C0")]
	[Obsolete("AndroidJNI.ToByteArray is obsolete. Use AndroidJNI.ToSByteArray method instead")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr ToByteArray(byte[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x2EA1EC0", Offset = "0x2EA04C0", VA = "0x182EA1EC0")]
	public static IntPtr ToSByteArray(sbyte[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x2EA1F30", Offset = "0x2EA0530", VA = "0x182EA1F30")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToSByteArray(sbyte* array, int length);

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x2EA1AC0", Offset = "0x2EA00C0", VA = "0x182EA1AC0")]
	public static IntPtr ToCharArray(char[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x2EA1A80", Offset = "0x2EA0080", VA = "0x182EA1A80")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToCharArray(char* array, int length);

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x2EA1FB0", Offset = "0x2EA05B0", VA = "0x182EA1FB0")]
	public static IntPtr ToShortArray(short[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x2EA1F70", Offset = "0x2EA0570", VA = "0x182EA1F70")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToShortArray(short* array, int length);

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x2EA1CD0", Offset = "0x2EA02D0", VA = "0x182EA1CD0")]
	public static IntPtr ToIntArray(int[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x2EA1C90", Offset = "0x2EA0290", VA = "0x182EA1C90")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToIntArray(int* array, int length);

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x2EA1D40", Offset = "0x2EA0340", VA = "0x182EA1D40")]
	public static IntPtr ToLongArray(long[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x2EA1DB0", Offset = "0x2EA03B0", VA = "0x182EA1DB0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToLongArray(long* array, int length);

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x2EA1BE0", Offset = "0x2EA01E0", VA = "0x182EA1BE0")]
	public static IntPtr ToFloatArray(float[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x2EA1C50", Offset = "0x2EA0250", VA = "0x182EA1C50")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToFloatArray(float* array, int length);

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x2EA1B30", Offset = "0x2EA0130", VA = "0x182EA1B30")]
	public static IntPtr ToDoubleArray(double[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x2EA1BA0", Offset = "0x2EA01A0", VA = "0x182EA1BA0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToDoubleArray(double* array, int length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x2EA1E70", Offset = "0x2EA0470", VA = "0x182EA1E70")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToObjectArray(IntPtr* array, int length, IntPtr arrayClass);

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x2EA1DF0", Offset = "0x2EA03F0", VA = "0x182EA1DF0")]
	public static IntPtr ToObjectArray(IntPtr[] array, IntPtr arrayClass)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x2E9FAB0", Offset = "0x2E9E0B0", VA = "0x182E9FAB0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static bool[] FromBooleanArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x2E9FBC0", Offset = "0x2E9E1C0", VA = "0x182E9FBC0")]
	[UnityEngine.Bindings.ThreadSafe]
	[Obsolete("AndroidJNI.FromByteArray is obsolete. Use AndroidJNI.FromSByteArray method instead")]
	public static byte[] FromByteArray(IntPtr array)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x2E9FE00", Offset = "0x2E9E400", VA = "0x182E9FE00")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern sbyte[] FromSByteArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x2E9FC80", Offset = "0x2E9E280", VA = "0x182E9FC80")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern char[] FromCharArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x2E9FE40", Offset = "0x2E9E440", VA = "0x182E9FE40")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern short[] FromShortArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x2E9FD40", Offset = "0x2E9E340", VA = "0x182E9FD40")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int[] FromIntArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x2E9FD80", Offset = "0x2E9E380", VA = "0x182E9FD80")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern long[] FromLongArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x2E9FD00", Offset = "0x2E9E300", VA = "0x182E9FD00")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern float[] FromFloatArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x2E9FCC0", Offset = "0x2E9E2C0", VA = "0x182E9FCC0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern double[] FromDoubleArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x2E9FE80", Offset = "0x2E9E480", VA = "0x182E9FE80")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int GetArrayLength(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x2EA14D0", Offset = "0x2E9FAD0", VA = "0x182EA14D0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewShortArray(int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x2EA1400", Offset = "0x2E9FA00", VA = "0x182EA1400")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewObjectArray(int size, IntPtr clazz, IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x2EA04E0", Offset = "0x2E9EAE0", VA = "0x182EA04E0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetObjectArrayElement(IntPtr array, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x2EA1870", Offset = "0x2E9FE70", VA = "0x182EA1870")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void SetObjectArrayElement(IntPtr array, int index, IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x2EA17F0", Offset = "0x2E9FDF0", VA = "0x182EA17F0")]
	private static extern void ReleaseStringChars_Injected([In] ref JStringBinding str);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x2E9F890", Offset = "0x2E9DE90", VA = "0x182E9F890")]
	private static extern IntPtr FindClass_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x2EA01D0", Offset = "0x2E9E7D0", VA = "0x182EA01D0")]
	private static extern IntPtr GetMethodID_Injected(IntPtr clazz, ref UnityEngine.Bindings.ManagedSpanWrapper name, ref UnityEngine.Bindings.ManagedSpanWrapper sig);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x2E9FEC0", Offset = "0x2E9E4C0", VA = "0x182E9FEC0")]
	private static extern IntPtr GetFieldID_Injected(IntPtr clazz, ref UnityEngine.Bindings.ManagedSpanWrapper name, ref UnityEngine.Bindings.ManagedSpanWrapper sig);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x2EA0A50", Offset = "0x2E9F050", VA = "0x182EA0A50")]
	private static extern IntPtr GetStaticMethodID_Injected(IntPtr clazz, ref UnityEngine.Bindings.ManagedSpanWrapper name, ref UnityEngine.Bindings.ManagedSpanWrapper sig);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x2EA0650", Offset = "0x2E9EC50", VA = "0x182EA0650")]
	private static extern IntPtr GetStaticFieldID_Injected(IntPtr clazz, ref UnityEngine.Bindings.ManagedSpanWrapper name, ref UnityEngine.Bindings.ManagedSpanWrapper sig);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x2EA1510", Offset = "0x2E9FB10", VA = "0x182EA1510")]
	private static extern IntPtr NewStringFromStr_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper chars);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x2EA1090", Offset = "0x2E9F690", VA = "0x182EA1090")]
	private static extern void GetStringCharsInternal_Injected(IntPtr str, out JStringBinding ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x2E9F240", Offset = "0x2E9D840", VA = "0x182E9F240")]
	private unsafe static extern void CallStringMethodUnsafeInternal_Injected(IntPtr obj, IntPtr methodID, jvalue* args, out JStringBinding ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x2E9EEF0", Offset = "0x2E9D4F0", VA = "0x182E9EEF0")]
	private unsafe static extern void CallStaticStringMethodUnsafeInternal_Injected(IntPtr clazz, IntPtr methodID, jvalue* args, out JStringBinding ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x2EA0E50", Offset = "0x2E9F450", VA = "0x182EA0E50")]
	private static extern void GetStaticStringFieldInternal_Injected(IntPtr clazz, IntPtr fieldID, out JStringBinding ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x2E9F670", Offset = "0x2E9DC70", VA = "0x182E9F670")]
	private static extern IntPtr ConvertToBooleanArray_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x2EA1980", Offset = "0x2E9FF80", VA = "0x182EA1980")]
	private static extern IntPtr ToByteArray_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x2E9FA60", Offset = "0x2E9E060", VA = "0x182E9FA60")]
	private static extern void FromBooleanArray_Injected(IntPtr array, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x2E9FB70", Offset = "0x2E9E170", VA = "0x182E9FB70")]
	private static extern void FromByteArray_Injected(IntPtr array, out UnityEngine.Bindings.BlittableArrayWrapper ret);
}
