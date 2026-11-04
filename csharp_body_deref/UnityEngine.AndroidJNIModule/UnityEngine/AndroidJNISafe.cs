// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AndroidJNISafe
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200000F")]
internal class AndroidJNISafe
{
	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x2E9C720", Offset = "0x2E9AD20", VA = "0x182E9C720")]
	public static void CheckException()
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x2E9D790", Offset = "0x2E9BD90", VA = "0x182E9D790")]
	public static void QueueDeleteGlobalRef(IntPtr globalref)
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x2E9C990", Offset = "0x2E9AF90", VA = "0x182E9C990")]
	public static void DeleteWeakGlobalRef(IntPtr globalref)
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x2E9C950", Offset = "0x2E9AF50", VA = "0x182E9C950")]
	public static void DeleteLocalRef(IntPtr localref)
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x2E9D6F0", Offset = "0x2E9BCF0", VA = "0x182E9D6F0")]
	public static IntPtr NewString(string chars)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x2E9D5D0", Offset = "0x2E9BBD0", VA = "0x182E9D5D0")]
	public static string GetStringChars(IntPtr str)
	{
		return null;
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x2E9CFD0", Offset = "0x2E9B5D0", VA = "0x182E9CFD0")]
	public static IntPtr GetObjectClass(IntPtr ptr)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x2E9D3B0", Offset = "0x2E9B9B0", VA = "0x182E9D3B0")]
	public static IntPtr GetStaticMethodID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x2E9CF00", Offset = "0x2E9B500", VA = "0x182E9CF00")]
	public static IntPtr GetMethodID(IntPtr obj, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x2E9CEB0", Offset = "0x2E9B4B0", VA = "0x182E9CEB0")]
	public static IntPtr GetFieldID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x2E9D1D0", Offset = "0x2E9B7D0", VA = "0x182E9D1D0")]
	public static IntPtr GetStaticFieldID(IntPtr clazz, string name, string sig)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x2E9CCF0", Offset = "0x2E9B2F0", VA = "0x182E9CCF0")]
	public static IntPtr FromReflectedMethod(IntPtr refMethod)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x2E9C9D0", Offset = "0x2E9AFD0", VA = "0x182E9C9D0")]
	public static IntPtr FindClass(string name)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x2E9D740", Offset = "0x2E9BD40", VA = "0x182E9D740")]
	public static void PushLocalFrame(int capacity)
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x2E9D620", Offset = "0x2E9BC20", VA = "0x182E9D620")]
	public static IntPtr NewObject(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x2E9D400", Offset = "0x2E9BA00", VA = "0x182E9D400")]
	public static IntPtr GetStaticObjectField(IntPtr clazz, IntPtr fieldID)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x2E9D580", Offset = "0x2E9BB80", VA = "0x182E9D580")]
	public static string GetStaticStringField(IntPtr clazz, IntPtr fieldID)
	{
		return null;
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x2E9D0C0", Offset = "0x2E9B6C0", VA = "0x182E9D0C0")]
	public static char GetStaticCharField(IntPtr clazz, IntPtr fieldID)
	{
		return default(char);
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x2E9D140", Offset = "0x2E9B740", VA = "0x182E9D140")]
	public static double GetStaticDoubleField(IntPtr clazz, IntPtr fieldID)
	{
		return default(double);
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x2E9D220", Offset = "0x2E9B820", VA = "0x182E9D220")]
	public static float GetStaticFloatField(IntPtr clazz, IntPtr fieldID)
	{
		return default(float);
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x2E9D330", Offset = "0x2E9B930", VA = "0x182E9D330")]
	public static long GetStaticLongField(IntPtr clazz, IntPtr fieldID)
	{
		return default(long);
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x2E9D500", Offset = "0x2E9BB00", VA = "0x182E9D500")]
	public static short GetStaticShortField(IntPtr clazz, IntPtr fieldID)
	{
		return default(short);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x2E9D480", Offset = "0x2E9BA80", VA = "0x182E9D480")]
	public static sbyte GetStaticSByteField(IntPtr clazz, IntPtr fieldID)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x2E9D040", Offset = "0x2E9B640", VA = "0x182E9D040")]
	public static bool GetStaticBooleanField(IntPtr clazz, IntPtr fieldID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x2E9D2B0", Offset = "0x2E9B8B0", VA = "0x182E9D2B0")]
	public static int GetStaticIntField(IntPtr clazz, IntPtr fieldID)
	{
		return default(int);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x2E9C1C0", Offset = "0x2E9A7C0", VA = "0x182E9C1C0")]
	public static IntPtr CallStaticObjectMethod(IntPtr clazz, IntPtr methodID, jvalue[] args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x2E9C0F0", Offset = "0x2E9A6F0", VA = "0x182E9C0F0")]
	public static IntPtr CallStaticObjectMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x2E9C4E0", Offset = "0x2E9AAE0", VA = "0x182E9C4E0")]
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, jvalue[] args)
	{
		return null;
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x2E9C3F0", Offset = "0x2E9A9F0", VA = "0x182E9C3F0")]
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return null;
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x2E9BCD0", Offset = "0x2E9A2D0", VA = "0x182E9BCD0")]
	public static char CallStaticCharMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(char);
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x2E9BDA0", Offset = "0x2E9A3A0", VA = "0x182E9BDA0")]
	public static double CallStaticDoubleMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(double);
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x2E9BE80", Offset = "0x2E9A480", VA = "0x182E9BE80")]
	public static float CallStaticFloatMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(float);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x2E9C020", Offset = "0x2E9A620", VA = "0x182E9C020")]
	public static long CallStaticLongMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(long);
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x2E9C320", Offset = "0x2E9A920", VA = "0x182E9C320")]
	public static short CallStaticShortMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(short);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x2E9C250", Offset = "0x2E9A850", VA = "0x182E9C250")]
	public static sbyte CallStaticSByteMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x2E9BC00", Offset = "0x2E9A200", VA = "0x182E9BC00")]
	public static bool CallStaticBooleanMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(bool);
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x2E9BF60", Offset = "0x2E9A560", VA = "0x182E9BF60")]
	public static int CallStaticIntMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args)
	{
		return default(int);
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x2E9C660", Offset = "0x2E9AC60", VA = "0x182E9C660")]
	public static void CallVoidMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x2E9B9D0", Offset = "0x2E99FD0", VA = "0x182E9B9D0")]
	public static IntPtr CallObjectMethod(IntPtr obj, IntPtr methodID, jvalue[] args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x2E9B900", Offset = "0x2E99F00", VA = "0x182E9B900")]
	public static IntPtr CallObjectMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x2E9C570", Offset = "0x2E9AB70", VA = "0x182E9C570")]
	public static string CallStringMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return null;
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x2E9B4E0", Offset = "0x2E99AE0", VA = "0x182E9B4E0")]
	public static char CallCharMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(char);
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x2E9B5B0", Offset = "0x2E99BB0", VA = "0x182E9B5B0")]
	public static double CallDoubleMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(double);
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x2E9B690", Offset = "0x2E99C90", VA = "0x182E9B690")]
	public static float CallFloatMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(float);
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x2E9B830", Offset = "0x2E99E30", VA = "0x182E9B830")]
	public static long CallLongMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(long);
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x2E9BB30", Offset = "0x2E9A130", VA = "0x182E9BB30")]
	public static short CallShortMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(short);
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x2E9BA60", Offset = "0x2E9A060", VA = "0x182E9BA60")]
	public static sbyte CallSByteMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x2E9B410", Offset = "0x2E99A10", VA = "0x182E9B410")]
	public static bool CallBooleanMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(bool);
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x2E9B770", Offset = "0x2E99D70", VA = "0x182E9B770")]
	public static int CallIntMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args)
	{
		return default(int);
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x2E9CAC0", Offset = "0x2E9B0C0", VA = "0x182E9CAC0")]
	public static char[] FromCharArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x2E9CB30", Offset = "0x2E9B130", VA = "0x182E9CB30")]
	public static double[] FromDoubleArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x2E9CBA0", Offset = "0x2E9B1A0", VA = "0x182E9CBA0")]
	public static float[] FromFloatArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x2E9CC80", Offset = "0x2E9B280", VA = "0x182E9CC80")]
	public static long[] FromLongArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x2E9CDD0", Offset = "0x2E9B3D0", VA = "0x182E9CDD0")]
	public static short[] FromShortArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x2E9CA70", Offset = "0x2E9B070", VA = "0x182E9CA70")]
	public static byte[] FromByteArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x2E9CD60", Offset = "0x2E9B360", VA = "0x182E9CD60")]
	public static sbyte[] FromSByteArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x2E9CA20", Offset = "0x2E9B020", VA = "0x182E9CA20")]
	public static bool[] FromBooleanArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x2E9CC10", Offset = "0x2E9B210", VA = "0x182E9CC10")]
	public static int[] FromIntArray(IntPtr array)
	{
		return null;
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x2E9DCA0", Offset = "0x2E9C2A0", VA = "0x182E9DCA0")]
	public static IntPtr ToObjectArray(IntPtr[] array, IntPtr type)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x2E9D9D0", Offset = "0x2E9BFD0", VA = "0x182E9D9D0")]
	public static IntPtr ToCharArray(char[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x2E9DA60", Offset = "0x2E9C060", VA = "0x182E9DA60")]
	public static IntPtr ToDoubleArray(double[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x2E9DAF0", Offset = "0x2E9C0F0", VA = "0x182E9DAF0")]
	public static IntPtr ToFloatArray(float[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x2E9DC10", Offset = "0x2E9C210", VA = "0x182E9DC10")]
	public static IntPtr ToLongArray(long[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x2E9DDD0", Offset = "0x2E9C3D0", VA = "0x182E9DDD0")]
	public static IntPtr ToShortArray(short[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x2E9D8D0", Offset = "0x2E9BED0", VA = "0x182E9D8D0")]
	public static IntPtr ToByteArray(byte[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x2E9DD40", Offset = "0x2E9C340", VA = "0x182E9DD40")]
	public static IntPtr ToSByteArray(sbyte[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x2E9D7D0", Offset = "0x2E9BDD0", VA = "0x182E9D7D0")]
	public static IntPtr ToBooleanArray(bool[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x2E9DB80", Offset = "0x2E9C180", VA = "0x182E9DB80")]
	public static IntPtr ToIntArray(int[] array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x2E9CF50", Offset = "0x2E9B550", VA = "0x182E9CF50")]
	public static IntPtr GetObjectArrayElement(IntPtr array, int index)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x2E9CE40", Offset = "0x2E9B440", VA = "0x182E9CE40")]
	public static int GetArrayLength(IntPtr array)
	{
		return default(int);
	}
}
