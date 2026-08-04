// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.FormatterServices
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3B95240", Offset = "0x3B95240", VA = "0x3B95240")]
	static FormatterServices()
	{
	}

	[Token(Token = "0x6001F64")]
	[Address(RVA = "0x3B953E0", Offset = "0x3B953E0", VA = "0x3B953E0")]
	private static MemberInfo[] GetSerializableMembers(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001F65")]
	[Address(RVA = "0x3B955C0", Offset = "0x3B955C0", VA = "0x3B955C0")]
	private static bool CheckSerializable(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F66")]
	[Address(RVA = "0x3B955E0", Offset = "0x3B955E0", VA = "0x3B955E0")]
	private static MemberInfo[] InternalGetSerializableMembers(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001F67")]
	[Address(RVA = "0x3B95E60", Offset = "0x3B95E60", VA = "0x3B95E60")]
	private static bool GetParentTypes(System.RuntimeType parentType, out System.RuntimeType[] parentTypes, out int parentTypeCount)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F68")]
	[Address(RVA = "0x3B96390", Offset = "0x3B96390", VA = "0x3B96390")]
	public static MemberInfo[] GetSerializableMembers(Type type, StreamingContext context)
	{
		return null;
	}

	[Token(Token = "0x6001F69")]
	[Address(RVA = "0x3B96640", Offset = "0x3B96640", VA = "0x3B96640")]
	public static object GetUninitializedObject(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001F6A")]
	[Address(RVA = "0x3B96800", Offset = "0x3B96800", VA = "0x3B96800")]
	public static object GetSafeUninitializedObject(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001F6B")]
	[Address(RVA = "0x3B967F0", Offset = "0x3B967F0", VA = "0x3B967F0")]
	private static object nativeGetUninitializedObject(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001F6C")]
	[Address(RVA = "0x3B96AF0", Offset = "0x3B96AF0", VA = "0x3B96AF0")]
	private static object nativeGetSafeUninitializedObject(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001F6D")]
	[Address(RVA = "0x3B96B00", Offset = "0x3B96B00", VA = "0x3B96B00")]
	private static bool GetEnableUnsafeTypeForwarders()
	{
		return default(bool);
	}

	[Token(Token = "0x6001F6E")]
	[Address(RVA = "0x3B96B10", Offset = "0x3B96B10", VA = "0x3B96B10")]
	internal static bool UnsafeTypeForwardersIsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6001F6F")]
	[Address(RVA = "0x3B96BC0", Offset = "0x3B96BC0", VA = "0x3B96BC0")]
	internal static void SerializationSetValue(MemberInfo fi, object target, object value)
	{
	}

	[Token(Token = "0x6001F70")]
	[Address(RVA = "0x3B96ED0", Offset = "0x3B96ED0", VA = "0x3B96ED0")]
	public static object PopulateObjectMembers(object obj, MemberInfo[] members, object[] data)
	{
		return null;
	}

	[Token(Token = "0x6001F71")]
	[Address(RVA = "0x3B971D0", Offset = "0x3B971D0", VA = "0x3B971D0")]
	public static object[] GetObjectData(object obj, MemberInfo[] members)
	{
		return null;
	}

	[Token(Token = "0x6001F72")]
	[Address(RVA = "0x3B97650", Offset = "0x3B97650", VA = "0x3B97650")]
	public static Type GetTypeFromAssembly(Assembly assem, string name)
	{
		return null;
	}

	[Token(Token = "0x6001F73")]
	[Address(RVA = "0x3B976E0", Offset = "0x3B976E0", VA = "0x3B976E0")]
	internal static Assembly LoadAssemblyFromString(string assemblyName)
	{
		return null;
	}

	[Token(Token = "0x6001F74")]
	[Address(RVA = "0x3B976F0", Offset = "0x3B976F0", VA = "0x3B976F0")]
	internal static Assembly LoadAssemblyFromStringNoThrow(string assemblyName)
	{
		return null;
	}

	[Token(Token = "0x6001F75")]
	[Address(RVA = "0x3B977C0", Offset = "0x3B977C0", VA = "0x3B977C0")]
	internal static string GetClrAssemblyName(Type type, out bool hasTypeForwardedFrom)
	{
		return null;
	}

	[Token(Token = "0x6001F76")]
	[Address(RVA = "0x3B97930", Offset = "0x3B97930", VA = "0x3B97930")]
	internal static string GetClrTypeFullName(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001F77")]
	[Address(RVA = "0x3B979B0", Offset = "0x3B979B0", VA = "0x3B979B0")]
	private static string GetClrTypeFullNameForArray(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001F78")]
	[Address(RVA = "0x3B97C80", Offset = "0x3B97C80", VA = "0x3B97C80")]
	private static string GetClrTypeFullNameForNonArrayTypes(Type type)
	{
		return null;
	}
}
