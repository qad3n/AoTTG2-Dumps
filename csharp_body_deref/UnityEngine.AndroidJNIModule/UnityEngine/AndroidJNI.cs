// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AndroidJNI
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4D93E00", Offset = "0x4D93E00", VA = "0x4D93E00")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr FindClass(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4D93E30", Offset = "0x4D93E30", VA = "0x4D93E30")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr FromReflectedMethod(IntPtr refMethod);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4D93E60", Offset = "0x4D93E60", VA = "0x4D93E60")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr ExceptionOccurred();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4D93E90", Offset = "0x4D93E90", VA = "0x4D93E90")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void ExceptionClear();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4D93EC0", Offset = "0x4D93EC0", VA = "0x4D93EC0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int PushLocalFrame(int capacity);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4D93EF0", Offset = "0x4D93EF0", VA = "0x4D93EF0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr PopLocalFrame(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4D93F20", Offset = "0x4D93F20", VA = "0x4D93F20")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewGlobalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4D93F50", Offset = "0x4D93F50", VA = "0x4D93F50")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void DeleteGlobalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4D93F80", Offset = "0x4D93F80", VA = "0x4D93F80")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewWeakGlobalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4D93FB0", Offset = "0x4D93FB0", VA = "0x4D93FB0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void DeleteWeakGlobalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4D93FE0", Offset = "0x4D93FE0", VA = "0x4D93FE0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewLocalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4D94010", Offset = "0x4D94010", VA = "0x4D94010")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void DeleteLocalRef(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4D94040", Offset = "0x4D94040", VA = "0x4D94040")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool IsSameObject(IntPtr obj1, IntPtr obj2);

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4D94080", Offset = "0x4D94080", VA = "0x4D94080")]
	public static IntPtr NewObject(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4D94100", Offset = "0x4D94100", VA = "0x4D94100")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr NewObjectA(IntPtr clazz, IntPtr methodID, jvalue* args);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4D94140", Offset = "0x4D94140", VA = "0x4D94140")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetObjectClass(IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4D94170", Offset = "0x4D94170", VA = "0x4D94170")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetMethodID(IntPtr clazz, string name, string sig);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4D941B0", Offset = "0x4D941B0", VA = "0x4D941B0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetFieldID(IntPtr clazz, string name, string sig);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4D941F0", Offset = "0x4D941F0", VA = "0x4D941F0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetStaticMethodID(IntPtr clazz, string name, string sig);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4D94230", Offset = "0x4D94230", VA = "0x4D94230")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetStaticFieldID(IntPtr clazz, string name, string sig);

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4D94270", Offset = "0x4D94270", VA = "0x4D94270")]
	public static IntPtr NewString(string chars)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4D942A0", Offset = "0x4D942A0", VA = "0x4D942A0")]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern IntPtr NewStringFromStr(string chars);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4D942D0", Offset = "0x4D942D0", VA = "0x4D942D0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern string GetStringChars(IntPtr str);

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4D94300", Offset = "0x4D94300", VA = "0x4D94300")]
	public static string CallStringMethod(IntPtr obj, IntPtr methodID, jvalue[] args)
	{
		return null;
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4D943D0", Offset = "0x4D943D0", VA = "0x4D943D0")]
	public static string CallStringMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4D94450", Offset = "0x4D94450", VA = "0x4D94450")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern string CallStringMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4D94490", Offset = "0x4D94490", VA = "0x4D94490")]
	public static IntPtr CallObjectMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4D94510", Offset = "0x4D94510", VA = "0x4D94510")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr CallObjectMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4D94550", Offset = "0x4D94550", VA = "0x4D94550")]
	public static int CallIntMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4D945D0", Offset = "0x4D945D0", VA = "0x4D945D0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern int CallIntMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4D94610", Offset = "0x4D94610", VA = "0x4D94610")]
	public static bool CallBooleanMethod(IntPtr obj, IntPtr methodID, jvalue[] args)
	{
		return default(bool);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4D946E0", Offset = "0x4D946E0", VA = "0x4D946E0")]
	public static bool CallBooleanMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4D94760", Offset = "0x4D94760", VA = "0x4D94760")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern bool CallBooleanMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4D947A0", Offset = "0x4D947A0", VA = "0x4D947A0")]
	public static short CallShortMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(short);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4D94820", Offset = "0x4D94820", VA = "0x4D94820")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern short CallShortMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4D94860", Offset = "0x4D94860", VA = "0x4D94860")]
	public static sbyte CallSByteMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(sbyte);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4D948E0", Offset = "0x4D948E0", VA = "0x4D948E0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern sbyte CallSByteMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4D94920", Offset = "0x4D94920", VA = "0x4D94920")]
	public static char CallCharMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(char);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4D949A0", Offset = "0x4D949A0", VA = "0x4D949A0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern char CallCharMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4D949E0", Offset = "0x4D949E0", VA = "0x4D949E0")]
	public static float CallFloatMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4D94A60", Offset = "0x4D94A60", VA = "0x4D94A60")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern float CallFloatMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4D94AA0", Offset = "0x4D94AA0", VA = "0x4D94AA0")]
	public static double CallDoubleMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4D94B20", Offset = "0x4D94B20", VA = "0x4D94B20")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern double CallDoubleMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4D94B60", Offset = "0x4D94B60", VA = "0x4D94B60")]
	public static long CallLongMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4D94BE0", Offset = "0x4D94BE0", VA = "0x4D94BE0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern long CallLongMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4D94C20", Offset = "0x4D94C20", VA = "0x4D94C20")]
	public static void CallVoidMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4D94CA0", Offset = "0x4D94CA0", VA = "0x4D94CA0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void CallVoidMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4D94CE0", Offset = "0x4D94CE0", VA = "0x4D94CE0")]
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, jvalue[] args)
	{
		return null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4D94DB0", Offset = "0x4D94DB0", VA = "0x4D94DB0")]
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4D94E30", Offset = "0x4D94E30", VA = "0x4D94E30")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern string CallStaticStringMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4D94E70", Offset = "0x4D94E70", VA = "0x4D94E70")]
	public static IntPtr CallStaticObjectMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4D94EF0", Offset = "0x4D94EF0", VA = "0x4D94EF0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr CallStaticObjectMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4D94F30", Offset = "0x4D94F30", VA = "0x4D94F30")]
	public static int CallStaticIntMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4D94FB0", Offset = "0x4D94FB0", VA = "0x4D94FB0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern int CallStaticIntMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4D94FF0", Offset = "0x4D94FF0", VA = "0x4D94FF0")]
	public static bool CallStaticBooleanMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4D95070", Offset = "0x4D95070", VA = "0x4D95070")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern bool CallStaticBooleanMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4D950B0", Offset = "0x4D950B0", VA = "0x4D950B0")]
	public static short CallStaticShortMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(short);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4D95130", Offset = "0x4D95130", VA = "0x4D95130")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern short CallStaticShortMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4D95170", Offset = "0x4D95170", VA = "0x4D95170")]
	public static sbyte CallStaticSByteMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(sbyte);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4D951F0", Offset = "0x4D951F0", VA = "0x4D951F0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern sbyte CallStaticSByteMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4D95230", Offset = "0x4D95230", VA = "0x4D95230")]
	public static char CallStaticCharMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(char);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4D952B0", Offset = "0x4D952B0", VA = "0x4D952B0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern char CallStaticCharMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4D952F0", Offset = "0x4D952F0", VA = "0x4D952F0")]
	public static float CallStaticFloatMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4D95370", Offset = "0x4D95370", VA = "0x4D95370")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern float CallStaticFloatMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4D953B0", Offset = "0x4D953B0", VA = "0x4D953B0")]
	public static double CallStaticDoubleMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4D95430", Offset = "0x4D95430", VA = "0x4D95430")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern double CallStaticDoubleMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4D95470", Offset = "0x4D95470", VA = "0x4D95470")]
	public static long CallStaticLongMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4D954F0", Offset = "0x4D954F0", VA = "0x4D954F0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern long CallStaticLongMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4D95530", Offset = "0x4D95530", VA = "0x4D95530")]
	public static void CallStaticVoidMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4D955B0", Offset = "0x4D955B0", VA = "0x4D955B0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void CallStaticVoidMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4D955F0", Offset = "0x4D955F0", VA = "0x4D955F0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern string GetStaticStringField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4D95630", Offset = "0x4D95630", VA = "0x4D95630")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetStaticObjectField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4D95670", Offset = "0x4D95670", VA = "0x4D95670")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool GetStaticBooleanField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4D956B0", Offset = "0x4D956B0", VA = "0x4D956B0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern sbyte GetStaticSByteField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4D956F0", Offset = "0x4D956F0", VA = "0x4D956F0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern char GetStaticCharField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005B")]
	[Address(RVA = "0x4D95730", Offset = "0x4D95730", VA = "0x4D95730")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern short GetStaticShortField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4D95770", Offset = "0x4D95770", VA = "0x4D95770")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int GetStaticIntField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x4D957B0", Offset = "0x4D957B0", VA = "0x4D957B0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern long GetStaticLongField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4D957F0", Offset = "0x4D957F0", VA = "0x4D957F0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern float GetStaticFloatField(IntPtr clazz, IntPtr fieldID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4D95830", Offset = "0x4D95830", VA = "0x4D95830")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern double GetStaticDoubleField(IntPtr clazz, IntPtr fieldID);

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4D95870", Offset = "0x4D95870", VA = "0x4D95870")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr ToBooleanArray(bool[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4D95960", Offset = "0x4D95960", VA = "0x4D95960")]
	[UnityEngine.Bindings.ThreadSafe]
	[Obsolete("AndroidJNI.ToByteArray is obsolete. Use AndroidJNI.ToSByteArray method instead")]
	public static IntPtr ToByteArray(byte[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4D95A50", Offset = "0x4D95A50", VA = "0x4D95A50")]
	public static IntPtr ToSByteArray(sbyte[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4D95AA0", Offset = "0x4D95AA0", VA = "0x4D95AA0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToSByteArray(sbyte* array, int length);

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4D95AE0", Offset = "0x4D95AE0", VA = "0x4D95AE0")]
	public static IntPtr ToCharArray(char[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4D95B30", Offset = "0x4D95B30", VA = "0x4D95B30")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToCharArray(char* array, int length);

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4D95B70", Offset = "0x4D95B70", VA = "0x4D95B70")]
	public static IntPtr ToShortArray(short[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4D95BC0", Offset = "0x4D95BC0", VA = "0x4D95BC0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToShortArray(short* array, int length);

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4D95C00", Offset = "0x4D95C00", VA = "0x4D95C00")]
	public static IntPtr ToIntArray(int[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4D95C50", Offset = "0x4D95C50", VA = "0x4D95C50")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToIntArray(int* array, int length);

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4D95C90", Offset = "0x4D95C90", VA = "0x4D95C90")]
	public static IntPtr ToLongArray(long[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4D95CE0", Offset = "0x4D95CE0", VA = "0x4D95CE0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToLongArray(long* array, int length);

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4D95D20", Offset = "0x4D95D20", VA = "0x4D95D20")]
	public static IntPtr ToFloatArray(float[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4D95D70", Offset = "0x4D95D70", VA = "0x4D95D70")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToFloatArray(float* array, int length);

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4D95DB0", Offset = "0x4D95DB0", VA = "0x4D95DB0")]
	public static IntPtr ToDoubleArray(double[] array)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4D95E00", Offset = "0x4D95E00", VA = "0x4D95E00")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToDoubleArray(double* array, int length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000070")]
	[Address(RVA = "0x4D95E40", Offset = "0x4D95E40", VA = "0x4D95E40")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern IntPtr ToObjectArray(IntPtr* array, int length, IntPtr arrayClass);

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4D95E80", Offset = "0x4D95E80", VA = "0x4D95E80")]
	public static IntPtr ToObjectArray(IntPtr[] array, IntPtr arrayClass)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4D95ED0", Offset = "0x4D95ED0", VA = "0x4D95ED0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern bool[] FromBooleanArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4D95F00", Offset = "0x4D95F00", VA = "0x4D95F00")]
	[UnityEngine.Bindings.ThreadSafe]
	[Obsolete("AndroidJNI.FromByteArray is obsolete. Use AndroidJNI.FromSByteArray method instead")]
	public static extern byte[] FromByteArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4D95F30", Offset = "0x4D95F30", VA = "0x4D95F30")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern sbyte[] FromSByteArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000075")]
	[Address(RVA = "0x4D95F60", Offset = "0x4D95F60", VA = "0x4D95F60")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern char[] FromCharArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4D95F90", Offset = "0x4D95F90", VA = "0x4D95F90")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern short[] FromShortArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4D95FC0", Offset = "0x4D95FC0", VA = "0x4D95FC0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int[] FromIntArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4D95FF0", Offset = "0x4D95FF0", VA = "0x4D95FF0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern long[] FromLongArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4D96020", Offset = "0x4D96020", VA = "0x4D96020")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern float[] FromFloatArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4D96050", Offset = "0x4D96050", VA = "0x4D96050")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern double[] FromDoubleArray(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4D96080", Offset = "0x4D96080", VA = "0x4D96080")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern int GetArrayLength(IntPtr array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4D960B0", Offset = "0x4D960B0", VA = "0x4D960B0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewShortArray(int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007D")]
	[Address(RVA = "0x4D960E0", Offset = "0x4D960E0", VA = "0x4D960E0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr NewObjectArray(int size, IntPtr clazz, IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007E")]
	[Address(RVA = "0x4D96120", Offset = "0x4D96120", VA = "0x4D96120")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr GetObjectArrayElement(IntPtr array, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007F")]
	[Address(RVA = "0x4D96160", Offset = "0x4D96160", VA = "0x4D96160")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void SetObjectArrayElement(IntPtr array, int index, IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000080")]
	[Address(RVA = "0x4D95930", Offset = "0x4D95930", VA = "0x4D95930")]
	private static extern IntPtr ToBooleanArray_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000081")]
	[Address(RVA = "0x4D95A20", Offset = "0x4D95A20", VA = "0x4D95A20")]
	private static extern IntPtr ToByteArray_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper array);
}
