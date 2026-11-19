// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AndroidJNI
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000004")]
[UnityEngine.Bindings.NativeHeader("Modules/AndroidJNI/Public/AndroidJNIBindingsHelpers.h")]
[UnityEngine.Bindings.StaticAccessor("AndroidJNIBindingsHelpers", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeConditional("PLATFORM_ANDROID")]
public static class AndroidJNI
{
	[Token(Token = "0x2000005")]
	private struct JStringBinding : IDisposable
	{
		[Token(Token = "0x400000A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IntPtr javaString;

		[Token(Token = "0x400000B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private IntPtr chars;

		[Token(Token = "0x400000C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int length;

		[Token(Token = "0x400000D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		private bool ownsRef;

		[Token(Token = "0x6000095")]
		[Address(RVA = "0x6899180", Offset = "0x6898180", VA = "0x6899180", Slot = "3")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x6000096")]
		[Address(RVA = "0x689B760", Offset = "0x689A760", VA = "0x689B760", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x6897E30", Offset = "0x6896E30", VA = "0x6897E30")]
	[UnityEngine.Bindings.ThreadSafe]
	private static void ReleaseStringChars(JStringBinding str)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x6897EA0", Offset = "0x6896EA0", VA = "0x6897EA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeAction(Action action)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x6897EC0", Offset = "0x6896EC0", VA = "0x6897EC0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr FindClass(string name)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000013")]
	[Address(RVA = "0x6898060", Offset = "0x6897060", VA = "0x6898060")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr FromReflectedMethod(IntPtr refMethod);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000014")]
	[Address(RVA = "0x6898090", Offset = "0x6897090", VA = "0x6898090")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr ExceptionOccurred();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000015")]
	[Address(RVA = "0x68980C0", Offset = "0x68970C0", VA = "0x68980C0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void ExceptionClear();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000016")]
	[Address(RVA = "0x68980F0", Offset = "0x68970F0", VA = "0x68980F0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int PushLocalFrame(int capacity);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000017")]
	[Address(RVA = "0x6898120", Offset = "0x6897120", VA = "0x6898120")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr PopLocalFrame(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000018")]
	[Address(RVA = "0x6898150", Offset = "0x6897150", VA = "0x6898150")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewGlobalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000019")]
	[Address(RVA = "0x6898180", Offset = "0x6897180", VA = "0x6898180")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void DeleteGlobalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x68981B0", Offset = "0x68971B0", VA = "0x68981B0")]
	[UnityEngine.Bindings.ThreadSafe]
	internal static extern void QueueDeleteGlobalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x68981E0", Offset = "0x68971E0", VA = "0x68981E0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewWeakGlobalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001C")]
	[Address(RVA = "0x6898210", Offset = "0x6897210", VA = "0x6898210")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void DeleteWeakGlobalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001D")]
	[Address(RVA = "0x6898240", Offset = "0x6897240", VA = "0x6898240")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewLocalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x6898270", Offset = "0x6897270", VA = "0x6898270")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void DeleteLocalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x68982A0", Offset = "0x68972A0", VA = "0x68982A0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool IsSameObject(IntPtr obj1, IntPtr obj2);

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x68982E0", Offset = "0x68972E0", VA = "0x68982E0")]
	public static IntPtr NewObject(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x6898360", Offset = "0x6897360", VA = "0x6898360")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr NewObjectA(IntPtr clazz, IntPtr methodID, jvalue* args);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x68983A0", Offset = "0x68973A0", VA = "0x68983A0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetObjectClass(IntPtr obj);

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x68983D0", Offset = "0x68973D0", VA = "0x68983D0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr GetMethodID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x6898660", Offset = "0x6897660", VA = "0x6898660")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr GetFieldID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x68988F0", Offset = "0x68978F0", VA = "0x68988F0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr GetStaticMethodID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x6898B80", Offset = "0x6897B80", VA = "0x6898B80")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr GetStaticFieldID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x6898E10", Offset = "0x6897E10", VA = "0x6898E10")]
	public static IntPtr NewString(string chars)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x6898E20", Offset = "0x6897E20", VA = "0x6898E20")]
	[UnityEngine.Bindings.ThreadSafe]
	private static IntPtr NewStringFromStr(string chars)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x6898FC0", Offset = "0x6897FC0", VA = "0x6898FC0")]
	public static string GetStringChars(IntPtr str)
	{
		return null;
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x6899120", Offset = "0x6898120", VA = "0x6899120")]
	[UnityEngine.Bindings.ThreadSafe]
	private static JStringBinding GetStringCharsInternal(IntPtr str)
	{
		return default(JStringBinding);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x6899210", Offset = "0x6898210", VA = "0x6899210")]
	public static string CallStringMethod(IntPtr obj, IntPtr methodID, jvalue[] args)
	{
		return null;
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x68992B0", Offset = "0x68982B0", VA = "0x68992B0")]
	public static string CallStringMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return null;
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x6899310", Offset = "0x6898310", VA = "0x6899310")]
	public unsafe static string CallStringMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args)
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x6899480", Offset = "0x6898480", VA = "0x6899480")]
	[UnityEngine.Bindings.ThreadSafe]
	private unsafe static JStringBinding CallStringMethodUnsafeInternal(IntPtr obj, IntPtr methodID, jvalue* args)
	{
		return default(JStringBinding);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x6899550", Offset = "0x6898550", VA = "0x6899550")]
	public static IntPtr CallObjectMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x68995D0", Offset = "0x68985D0", VA = "0x68995D0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr CallObjectMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x6899610", Offset = "0x6898610", VA = "0x6899610")]
	public static int CallIntMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x6899690", Offset = "0x6898690", VA = "0x6899690")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern int CallIntMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x68996D0", Offset = "0x68986D0", VA = "0x68996D0")]
	public static bool CallBooleanMethod(IntPtr obj, IntPtr methodID, jvalue[] args)
	{
		return default(bool);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x68997A0", Offset = "0x68987A0", VA = "0x68997A0")]
	public static bool CallBooleanMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000035")]
	[Address(RVA = "0x6899820", Offset = "0x6898820", VA = "0x6899820")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern bool CallBooleanMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x6899860", Offset = "0x6898860", VA = "0x6899860")]
	public static short CallShortMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(short);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x68998E0", Offset = "0x68988E0", VA = "0x68998E0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern short CallShortMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x6899920", Offset = "0x6898920", VA = "0x6899920")]
	public static sbyte CallSByteMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(sbyte);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x68999A0", Offset = "0x68989A0", VA = "0x68999A0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern sbyte CallSByteMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x68999E0", Offset = "0x68989E0", VA = "0x68999E0")]
	public static char CallCharMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(char);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x6899A60", Offset = "0x6898A60", VA = "0x6899A60")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern char CallCharMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x6899AA0", Offset = "0x6898AA0", VA = "0x6899AA0")]
	public static float CallFloatMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x6899B20", Offset = "0x6898B20", VA = "0x6899B20")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern float CallFloatMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x6899B60", Offset = "0x6898B60", VA = "0x6899B60")]
	public static double CallDoubleMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x6899BE0", Offset = "0x6898BE0", VA = "0x6899BE0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern double CallDoubleMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x6899C20", Offset = "0x6898C20", VA = "0x6899C20")]
	public static long CallLongMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x6899CA0", Offset = "0x6898CA0", VA = "0x6899CA0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern long CallLongMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x6899CE0", Offset = "0x6898CE0", VA = "0x6899CE0")]
	public static void CallVoidMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x6899D60", Offset = "0x6898D60", VA = "0x6899D60")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void CallVoidMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x6899DA0", Offset = "0x6898DA0", VA = "0x6899DA0")]
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, jvalue[] args)
	{
		return null;
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x6899E40", Offset = "0x6898E40", VA = "0x6899E40")]
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return null;
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x6899EA0", Offset = "0x6898EA0", VA = "0x6899EA0")]
	public unsafe static string CallStaticStringMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args)
	{
		return null;
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x689A010", Offset = "0x6899010", VA = "0x689A010")]
	[UnityEngine.Bindings.ThreadSafe]
	private unsafe static JStringBinding CallStaticStringMethodUnsafeInternal(IntPtr clazz, IntPtr methodID, jvalue* args)
	{
		return default(JStringBinding);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x689A0E0", Offset = "0x68990E0", VA = "0x689A0E0")]
	public static IntPtr CallStaticObjectMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x689A160", Offset = "0x6899160", VA = "0x689A160")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr CallStaticObjectMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x689A1A0", Offset = "0x68991A0", VA = "0x689A1A0")]
	public static int CallStaticIntMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x689A220", Offset = "0x6899220", VA = "0x689A220")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern int CallStaticIntMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x689A260", Offset = "0x6899260", VA = "0x689A260")]
	public static bool CallStaticBooleanMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x689A2E0", Offset = "0x68992E0", VA = "0x689A2E0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern bool CallStaticBooleanMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x689A320", Offset = "0x6899320", VA = "0x689A320")]
	public static short CallStaticShortMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(short);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x689A3A0", Offset = "0x68993A0", VA = "0x689A3A0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern short CallStaticShortMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x689A3E0", Offset = "0x68993E0", VA = "0x689A3E0")]
	public static sbyte CallStaticSByteMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(sbyte);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x689A460", Offset = "0x6899460", VA = "0x689A460")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern sbyte CallStaticSByteMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x689A4A0", Offset = "0x68994A0", VA = "0x689A4A0")]
	public static char CallStaticCharMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(char);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x689A520", Offset = "0x6899520", VA = "0x689A520")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern char CallStaticCharMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x689A560", Offset = "0x6899560", VA = "0x689A560")]
	public static float CallStaticFloatMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x689A5E0", Offset = "0x68995E0", VA = "0x689A5E0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern float CallStaticFloatMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x689A620", Offset = "0x6899620", VA = "0x689A620")]
	public static double CallStaticDoubleMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x689A6A0", Offset = "0x68996A0", VA = "0x689A6A0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern double CallStaticDoubleMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x689A6E0", Offset = "0x68996E0", VA = "0x689A6E0")]
	public static long CallStaticLongMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x689A760", Offset = "0x6899760", VA = "0x689A760")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern long CallStaticLongMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x689A7A0", Offset = "0x68997A0", VA = "0x689A7A0")]
	public static string GetStaticStringField(IntPtr clazz, IntPtr fieldID)
	{
		return null;
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x689A910", Offset = "0x6899910", VA = "0x689A910")]
	[UnityEngine.Bindings.ThreadSafe]
	private static JStringBinding GetStaticStringFieldInternal(IntPtr clazz, IntPtr fieldID)
	{
		return default(JStringBinding);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005C")]
	[Address(RVA = "0x689A9C0", Offset = "0x68999C0", VA = "0x689A9C0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetStaticObjectField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x689AA00", Offset = "0x6899A00", VA = "0x689AA00")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool GetStaticBooleanField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x689AA40", Offset = "0x6899A40", VA = "0x689AA40")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern sbyte GetStaticSByteField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x689AA80", Offset = "0x6899A80", VA = "0x689AA80")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern char GetStaticCharField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000060")]
	[Address(RVA = "0x689AAC0", Offset = "0x6899AC0", VA = "0x689AAC0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern short GetStaticShortField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000061")]
	[Address(RVA = "0x689AB00", Offset = "0x6899B00", VA = "0x689AB00")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int GetStaticIntField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x689AB40", Offset = "0x6899B40", VA = "0x689AB40")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern long GetStaticLongField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000063")]
	[Address(RVA = "0x689AB80", Offset = "0x6899B80", VA = "0x689AB80")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern float GetStaticFloatField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000064")]
	[Address(RVA = "0x689ABC0", Offset = "0x6899BC0", VA = "0x689ABC0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern double GetStaticDoubleField(IntPtr clazz, IntPtr fieldID);

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x689AC00", Offset = "0x6899C00", VA = "0x689AC00")]
	[UnityEngine.Bindings.ThreadSafe]
	private static IntPtr ConvertToBooleanArray(bool[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x689ACF0", Offset = "0x6899CF0", VA = "0x689ACF0")]
	public static IntPtr ToBooleanArray(bool[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x689AD00", Offset = "0x6899D00", VA = "0x689AD00")]
	[UnityEngine.Bindings.ThreadSafe]
	[Obsolete("AndroidJNI.ToByteArray is obsolete. Use AndroidJNI.ToSByteArray method instead")]
	public static IntPtr ToByteArray(byte[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x689ADF0", Offset = "0x6899DF0", VA = "0x689ADF0")]
	public static IntPtr ToSByteArray(sbyte[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000069")]
	[Address(RVA = "0x689AE40", Offset = "0x6899E40", VA = "0x689AE40")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToSByteArray(sbyte* array, int length);

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x689AE80", Offset = "0x6899E80", VA = "0x689AE80")]
	public static IntPtr ToCharArray(char[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006B")]
	[Address(RVA = "0x689AED0", Offset = "0x6899ED0", VA = "0x689AED0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToCharArray(char* array, int length);

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x689AF10", Offset = "0x6899F10", VA = "0x689AF10")]
	public static IntPtr ToShortArray(short[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006D")]
	[Address(RVA = "0x689AF60", Offset = "0x6899F60", VA = "0x689AF60")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToShortArray(short* array, int length);

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x689AFA0", Offset = "0x6899FA0", VA = "0x689AFA0")]
	public static IntPtr ToIntArray(int[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006F")]
	[Address(RVA = "0x689AFF0", Offset = "0x6899FF0", VA = "0x689AFF0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToIntArray(int* array, int length);

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x689B030", Offset = "0x689A030", VA = "0x689B030")]
	public static IntPtr ToLongArray(long[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000071")]
	[Address(RVA = "0x689B080", Offset = "0x689A080", VA = "0x689B080")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToLongArray(long* array, int length);

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x689B0C0", Offset = "0x689A0C0", VA = "0x689B0C0")]
	public static IntPtr ToFloatArray(float[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000073")]
	[Address(RVA = "0x689B110", Offset = "0x689A110", VA = "0x689B110")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToFloatArray(float* array, int length);

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x689B150", Offset = "0x689A150", VA = "0x689B150")]
	public static IntPtr ToDoubleArray(double[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000075")]
	[Address(RVA = "0x689B1A0", Offset = "0x689A1A0", VA = "0x689B1A0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToDoubleArray(double* array, int length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000076")]
	[Address(RVA = "0x689B1E0", Offset = "0x689A1E0", VA = "0x689B1E0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToObjectArray(IntPtr* array, int length, IntPtr arrayClass);

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x689B220", Offset = "0x689A220", VA = "0x689B220")]
	public static IntPtr ToObjectArray(IntPtr[] array, IntPtr arrayClass)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x689B270", Offset = "0x689A270", VA = "0x689B270")]
	[UnityEngine.Bindings.ThreadSafe]
	public static bool[] FromBooleanArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x689B3B0", Offset = "0x689A3B0", VA = "0x689B3B0")]
	[UnityEngine.Bindings.ThreadSafe]
	[Obsolete("AndroidJNI.FromByteArray is obsolete. Use AndroidJNI.FromSByteArray method instead")]
	public static byte[] FromByteArray(IntPtr array)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x689B4F0", Offset = "0x689A4F0", VA = "0x689B4F0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern sbyte[] FromSByteArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x689B520", Offset = "0x689A520", VA = "0x689B520")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern char[] FromCharArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007C")]
	[Address(RVA = "0x689B550", Offset = "0x689A550", VA = "0x689B550")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern short[] FromShortArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007D")]
	[Address(RVA = "0x689B580", Offset = "0x689A580", VA = "0x689B580")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int[] FromIntArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007E")]
	[Address(RVA = "0x689B5B0", Offset = "0x689A5B0", VA = "0x689B5B0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern long[] FromLongArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007F")]
	[Address(RVA = "0x689B5E0", Offset = "0x689A5E0", VA = "0x689B5E0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern float[] FromFloatArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000080")]
	[Address(RVA = "0x689B610", Offset = "0x689A610", VA = "0x689B610")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern double[] FromDoubleArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000081")]
	[Address(RVA = "0x689B640", Offset = "0x689A640", VA = "0x689B640")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int GetArrayLength(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000082")]
	[Address(RVA = "0x689B670", Offset = "0x689A670", VA = "0x689B670")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewShortArray(int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000083")]
	[Address(RVA = "0x689B6A0", Offset = "0x689A6A0", VA = "0x689B6A0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewObjectArray(int size, IntPtr clazz, IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000084")]
	[Address(RVA = "0x689B6E0", Offset = "0x689A6E0", VA = "0x689B6E0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetObjectArrayElement(IntPtr array, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000085")]
	[Address(RVA = "0x689B720", Offset = "0x689A720", VA = "0x689B720")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void SetObjectArrayElement(IntPtr array, int index, IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000086")]
	[Address(RVA = "0x6897E70", Offset = "0x6896E70", VA = "0x6897E70")]
	private static extern void ReleaseStringChars_Injected([In] ref JStringBinding str);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000087")]
	[Address(RVA = "0x6898030", Offset = "0x6897030", VA = "0x6898030")]
	private static extern IntPtr FindClass_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000088")]
	[Address(RVA = "0x6898620", Offset = "0x6897620", VA = "0x6898620")]
	private static extern IntPtr GetMethodID_Injected(IntPtr clazz, ref UnityEngine.Bindings.ManagedSpanWrapper name, ref UnityEngine.Bindings.ManagedSpanWrapper sig);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000089")]
	[Address(RVA = "0x68988B0", Offset = "0x68978B0", VA = "0x68988B0")]
	private static extern IntPtr GetFieldID_Injected(IntPtr clazz, ref UnityEngine.Bindings.ManagedSpanWrapper name, ref UnityEngine.Bindings.ManagedSpanWrapper sig);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008A")]
	[Address(RVA = "0x6898B40", Offset = "0x6897B40", VA = "0x6898B40")]
	private static extern IntPtr GetStaticMethodID_Injected(IntPtr clazz, ref UnityEngine.Bindings.ManagedSpanWrapper name, ref UnityEngine.Bindings.ManagedSpanWrapper sig);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x6898DD0", Offset = "0x6897DD0", VA = "0x6898DD0")]
	private static extern IntPtr GetStaticFieldID_Injected(IntPtr clazz, ref UnityEngine.Bindings.ManagedSpanWrapper name, ref UnityEngine.Bindings.ManagedSpanWrapper sig);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008C")]
	[Address(RVA = "0x6898F90", Offset = "0x6897F90", VA = "0x6898F90")]
	private static extern IntPtr NewStringFromStr_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper chars);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x68991D0", Offset = "0x68981D0", VA = "0x68991D0")]
	private static extern void GetStringCharsInternal_Injected(IntPtr str, out JStringBinding ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x6899500", Offset = "0x6898500", VA = "0x6899500")]
	private unsafe static extern void CallStringMethodUnsafeInternal_Injected(IntPtr obj, IntPtr methodID, jvalue* args, out JStringBinding ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008F")]
	[Address(RVA = "0x689A090", Offset = "0x6899090", VA = "0x689A090")]
	private unsafe static extern void CallStaticStringMethodUnsafeInternal_Injected(IntPtr clazz, IntPtr methodID, jvalue* args, out JStringBinding ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000090")]
	[Address(RVA = "0x689A980", Offset = "0x6899980", VA = "0x689A980")]
	private static extern void GetStaticStringFieldInternal_Injected(IntPtr clazz, IntPtr fieldID, out JStringBinding ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000091")]
	[Address(RVA = "0x689ACC0", Offset = "0x6899CC0", VA = "0x689ACC0")]
	private static extern IntPtr ConvertToBooleanArray_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000092")]
	[Address(RVA = "0x689ADC0", Offset = "0x6899DC0", VA = "0x689ADC0")]
	private static extern IntPtr ToByteArray_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x689B370", Offset = "0x689A370", VA = "0x689B370")]
	private static extern void FromBooleanArray_Injected(IntPtr array, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000094")]
	[Address(RVA = "0x689B4B0", Offset = "0x689A4B0", VA = "0x689B4B0")]
	private static extern void FromByteArray_Injected(IntPtr array, out UnityEngine.Bindings.BlittableArrayWrapper ret);
}
