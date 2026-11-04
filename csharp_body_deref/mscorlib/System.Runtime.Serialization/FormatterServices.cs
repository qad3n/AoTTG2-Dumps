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

[Token(Token = "0x2000409")]
[ComVisible(true)]
public static class FormatterServices
{
	[Token(Token = "0x4000FE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static ConcurrentDictionary<System.Runtime.Serialization.MemberHolder, MemberInfo[]> m_MemberInfoTable;

	[Token(Token = "0x4000FE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static bool unsafeTypeForwardersIsEnabled;

	[Token(Token = "0x4000FE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x9")]
	private static bool unsafeTypeForwardersIsEnabledInitialized;

	[Token(Token = "0x4000FE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly Type[] advancedTypes;

	[Token(Token = "0x4000FEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Binder s_binder;

	[Token(Token = "0x6001FD2")]
	[Address(RVA = "0x1A14620", Offset = "0x1A12C20", VA = "0x181A14620")]
	static FormatterServices()
	{
	}

	[Token(Token = "0x6001FD3")]
	[Address(RVA = "0x1A130A0", Offset = "0x1A116A0", VA = "0x181A130A0")]
	private static MemberInfo[] GetSerializableMembers(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001FD4")]
	[Address(RVA = "0x1A11EE0", Offset = "0x1A104E0", VA = "0x181A11EE0")]
	private static bool CheckSerializable(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FD5")]
	[Address(RVA = "0x1A13760", Offset = "0x1A11D60", VA = "0x181A13760")]
	private static MemberInfo[] InternalGetSerializableMembers(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001FD6")]
	[Address(RVA = "0x1A129D0", Offset = "0x1A10FD0", VA = "0x181A129D0")]
	private static bool GetParentTypes(System.RuntimeType parentType, out System.RuntimeType[] parentTypes, out int parentTypeCount)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FD7")]
	[Address(RVA = "0x1A13240", Offset = "0x1A11840", VA = "0x181A13240")]
	public static MemberInfo[] GetSerializableMembers(Type type, StreamingContext context)
	{
		return null;
	}

	[Token(Token = "0x6001FD8")]
	[Address(RVA = "0x1A13590", Offset = "0x1A11B90", VA = "0x181A13590")]
	public static object GetUninitializedObject(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001FD9")]
	[Address(RVA = "0x1A12DF0", Offset = "0x1A113F0", VA = "0x181A12DF0")]
	public static object GetSafeUninitializedObject(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001FDA")]
	[Address(RVA = "0x1A147F0", Offset = "0x1A12DF0", VA = "0x181A147F0")]
	private static object nativeGetUninitializedObject(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001FDB")]
	[Address(RVA = "0x1A147F0", Offset = "0x1A12DF0", VA = "0x181A147F0")]
	private static object nativeGetSafeUninitializedObject(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001FDC")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	private static bool GetEnableUnsafeTypeForwarders()
	{
		return default(bool);
	}

	[Token(Token = "0x6001FDD")]
	[Address(RVA = "0x1A14550", Offset = "0x1A12B50", VA = "0x181A14550")]
	internal static bool UnsafeTypeForwardersIsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6001FDE")]
	[Address(RVA = "0x1A142C0", Offset = "0x1A128C0", VA = "0x181A142C0")]
	internal static void SerializationSetValue(MemberInfo fi, object target, object value)
	{
	}

	[Token(Token = "0x6001FDF")]
	[Address(RVA = "0x1A13F30", Offset = "0x1A12530", VA = "0x181A13F30")]
	public static object PopulateObjectMembers(object obj, MemberInfo[] members, object[] data)
	{
		return null;
	}

	[Token(Token = "0x6001FE0")]
	[Address(RVA = "0x1A125C0", Offset = "0x1A10BC0", VA = "0x181A125C0")]
	public static object[] GetObjectData(object obj, MemberInfo[] members)
	{
		return null;
	}

	[Token(Token = "0x6001FE1")]
	[Address(RVA = "0x1A134F0", Offset = "0x1A11AF0", VA = "0x181A134F0")]
	public static Type GetTypeFromAssembly(Assembly assem, string name)
	{
		return null;
	}

	[Token(Token = "0x6001FE2")]
	[Address(RVA = "0x1A13F20", Offset = "0x1A12520", VA = "0x181A13F20")]
	internal static Assembly LoadAssemblyFromString(string assemblyName)
	{
		return null;
	}

	[Token(Token = "0x6001FE3")]
	[Address(RVA = "0x1A13EC0", Offset = "0x1A124C0", VA = "0x181A13EC0")]
	internal static Assembly LoadAssemblyFromStringNoThrow(string assemblyName)
	{
		return null;
	}

	[Token(Token = "0x6001FE4")]
	[Address(RVA = "0x1A11F10", Offset = "0x1A10510", VA = "0x181A11F10")]
	internal static string GetClrAssemblyName(Type type, out bool hasTypeForwardedFrom)
	{
		return null;
	}

	[Token(Token = "0x6001FE5")]
	[Address(RVA = "0x1A12540", Offset = "0x1A10B40", VA = "0x181A12540")]
	internal static string GetClrTypeFullName(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001FE6")]
	[Address(RVA = "0x1A12090", Offset = "0x1A10690", VA = "0x181A12090")]
	private static string GetClrTypeFullNameForArray(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001FE7")]
	[Address(RVA = "0x1A122B0", Offset = "0x1A108B0", VA = "0x181A122B0")]
	private static string GetClrTypeFullNameForNonArrayTypes(Type type)
	{
		return null;
	}
}
