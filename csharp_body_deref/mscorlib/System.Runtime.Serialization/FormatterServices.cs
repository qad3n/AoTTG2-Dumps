using System.Collections.Concurrent;
using System.Reflection;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003DA")]
[ComVisible(true)]
public static class FormatterServices
{
	[Token(Token = "0x4000FE0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static ConcurrentDictionary<System.Runtime.Serialization.MemberHolder, MemberInfo[]> m_MemberInfoTable;

	[Token(Token = "0x4000FE1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static bool unsafeTypeForwardersIsEnabled;

	[Token(Token = "0x4000FE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x9")]
	private static bool unsafeTypeForwardersIsEnabledInitialized;

	[Token(Token = "0x4000FE3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly Type[] advancedTypes;

	[Token(Token = "0x4000FE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Binder s_binder;

	[Token(Token = "0x6001F63")]
	[Address(RVA = "0x4EAF720", Offset = "0x4EAF720", VA = "0x4EAF720")]
	static FormatterServices()
	{
	}

	[Token(Token = "0x6001F64")]
	[Address(RVA = "0x4EAF8C0", Offset = "0x4EAF8C0", VA = "0x4EAF8C0")]
	private static MemberInfo[] GetSerializableMembers(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001F65")]
	[Address(RVA = "0x4EAFAA0", Offset = "0x4EAFAA0", VA = "0x4EAFAA0")]
	private static bool CheckSerializable(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F66")]
	[Address(RVA = "0x4EAFAC0", Offset = "0x4EAFAC0", VA = "0x4EAFAC0")]
	private static MemberInfo[] InternalGetSerializableMembers(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001F67")]
	[Address(RVA = "0x4EB0340", Offset = "0x4EB0340", VA = "0x4EB0340")]
	private static bool GetParentTypes(System.RuntimeType parentType, out System.RuntimeType[] parentTypes, out int parentTypeCount)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F68")]
	[Address(RVA = "0x4EB0870", Offset = "0x4EB0870", VA = "0x4EB0870")]
	public static MemberInfo[] GetSerializableMembers(Type type, StreamingContext context)
	{
		return null;
	}

	[Token(Token = "0x6001F69")]
	[Address(RVA = "0x4EB0B20", Offset = "0x4EB0B20", VA = "0x4EB0B20")]
	public static object GetUninitializedObject(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001F6A")]
	[Address(RVA = "0x4EB0CE0", Offset = "0x4EB0CE0", VA = "0x4EB0CE0")]
	public static object GetSafeUninitializedObject(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001F6B")]
	[Address(RVA = "0x4EB0CD0", Offset = "0x4EB0CD0", VA = "0x4EB0CD0")]
	private static object nativeGetUninitializedObject(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001F6C")]
	[Address(RVA = "0x4EB0FD0", Offset = "0x4EB0FD0", VA = "0x4EB0FD0")]
	private static object nativeGetSafeUninitializedObject(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001F6D")]
	[Address(RVA = "0x4EB0FE0", Offset = "0x4EB0FE0", VA = "0x4EB0FE0")]
	private static bool GetEnableUnsafeTypeForwarders()
	{
		return default(bool);
	}

	[Token(Token = "0x6001F6E")]
	[Address(RVA = "0x4EB0FF0", Offset = "0x4EB0FF0", VA = "0x4EB0FF0")]
	internal static bool UnsafeTypeForwardersIsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6001F6F")]
	[Address(RVA = "0x4EB10A0", Offset = "0x4EB10A0", VA = "0x4EB10A0")]
	internal static void SerializationSetValue(MemberInfo fi, object target, object value)
	{
	}

	[Token(Token = "0x6001F70")]
	[Address(RVA = "0x4EB13B0", Offset = "0x4EB13B0", VA = "0x4EB13B0")]
	public static object PopulateObjectMembers(object obj, MemberInfo[] members, object[] data)
	{
		return null;
	}

	[Token(Token = "0x6001F71")]
	[Address(RVA = "0x4EB16B0", Offset = "0x4EB16B0", VA = "0x4EB16B0")]
	public static object[] GetObjectData(object obj, MemberInfo[] members)
	{
		return null;
	}

	[Token(Token = "0x6001F72")]
	[Address(RVA = "0x4EB1B30", Offset = "0x4EB1B30", VA = "0x4EB1B30")]
	public static Type GetTypeFromAssembly(Assembly assem, string name)
	{
		return null;
	}

	[Token(Token = "0x6001F73")]
	[Address(RVA = "0x4EB1BC0", Offset = "0x4EB1BC0", VA = "0x4EB1BC0")]
	internal static Assembly LoadAssemblyFromString(string assemblyName)
	{
		return null;
	}

	[Token(Token = "0x6001F74")]
	[Address(RVA = "0x4EB1BD0", Offset = "0x4EB1BD0", VA = "0x4EB1BD0")]
	internal static Assembly LoadAssemblyFromStringNoThrow(string assemblyName)
	{
		return null;
	}

	[Token(Token = "0x6001F75")]
	[Address(RVA = "0x4EB1CA0", Offset = "0x4EB1CA0", VA = "0x4EB1CA0")]
	internal static string GetClrAssemblyName(Type type, out bool hasTypeForwardedFrom)
	{
		return null;
	}

	[Token(Token = "0x6001F76")]
	[Address(RVA = "0x4EB1E10", Offset = "0x4EB1E10", VA = "0x4EB1E10")]
	internal static string GetClrTypeFullName(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001F77")]
	[Address(RVA = "0x4EB1E90", Offset = "0x4EB1E90", VA = "0x4EB1E90")]
	private static string GetClrTypeFullNameForArray(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001F78")]
	[Address(RVA = "0x4EB2160", Offset = "0x4EB2160", VA = "0x4EB2160")]
	private static string GetClrTypeFullNameForNonArrayTypes(Type type)
	{
		return null;
	}
}
