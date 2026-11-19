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

[Token(Token = "0x20003E2")]
[ComVisible(true)]
public static class FormatterServices
{
	[Token(Token = "0x4000F46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static ConcurrentDictionary<System.Runtime.Serialization.MemberHolder, MemberInfo[]> m_MemberInfoTable;

	[Token(Token = "0x4000F47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static bool unsafeTypeForwardersIsEnabled;

	[Token(Token = "0x4000F48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x9")]
	private static bool unsafeTypeForwardersIsEnabledInitialized;

	[Token(Token = "0x4000F49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly Type[] advancedTypes;

	[Token(Token = "0x4000F4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Binder s_binder;

	[Token(Token = "0x6001FA8")]
	[Address(RVA = "0x539CB80", Offset = "0x539BB80", VA = "0x539CB80")]
	static FormatterServices()
	{
	}

	[Token(Token = "0x6001FA9")]
	[Address(RVA = "0x539CD20", Offset = "0x539BD20", VA = "0x539CD20")]
	private static MemberInfo[] GetSerializableMembers(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001FAA")]
	[Address(RVA = "0x539CF20", Offset = "0x539BF20", VA = "0x539CF20")]
	private static bool CheckSerializable(System.RuntimeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FAB")]
	[Address(RVA = "0x539CF40", Offset = "0x539BF40", VA = "0x539CF40")]
	private static MemberInfo[] InternalGetSerializableMembers(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001FAC")]
	[Address(RVA = "0x539D710", Offset = "0x539C710", VA = "0x539D710")]
	private static bool GetParentTypes(System.RuntimeType parentType, out System.RuntimeType[] parentTypes, out int parentTypeCount)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FAD")]
	[Address(RVA = "0x539DC30", Offset = "0x539CC30", VA = "0x539DC30")]
	public static MemberInfo[] GetSerializableMembers(Type type, StreamingContext context)
	{
		return null;
	}

	[Token(Token = "0x6001FAE")]
	[Address(RVA = "0x539DEE0", Offset = "0x539CEE0", VA = "0x539DEE0")]
	public static object GetUninitializedObject(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001FAF")]
	[Address(RVA = "0x539E0A0", Offset = "0x539D0A0", VA = "0x539E0A0")]
	public static object GetSafeUninitializedObject(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001FB0")]
	[Address(RVA = "0x539E090", Offset = "0x539D090", VA = "0x539E090")]
	private static object nativeGetUninitializedObject(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001FB1")]
	[Address(RVA = "0x539E380", Offset = "0x539D380", VA = "0x539E380")]
	private static object nativeGetSafeUninitializedObject(System.RuntimeType type)
	{
		return null;
	}

	[Token(Token = "0x6001FB2")]
	[Address(RVA = "0x539E390", Offset = "0x539D390", VA = "0x539E390")]
	private static bool GetEnableUnsafeTypeForwarders()
	{
		return default(bool);
	}

	[Token(Token = "0x6001FB3")]
	[Address(RVA = "0x539E3A0", Offset = "0x539D3A0", VA = "0x539E3A0")]
	internal static bool UnsafeTypeForwardersIsEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x6001FB4")]
	[Address(RVA = "0x539E450", Offset = "0x539D450", VA = "0x539E450")]
	internal static void SerializationSetValue(MemberInfo fi, object target, object value)
	{
	}

	[Token(Token = "0x6001FB5")]
	[Address(RVA = "0x539E780", Offset = "0x539D780", VA = "0x539E780")]
	public static object PopulateObjectMembers(object obj, MemberInfo[] members, object[] data)
	{
		return null;
	}

	[Token(Token = "0x6001FB6")]
	[Address(RVA = "0x539EA70", Offset = "0x539DA70", VA = "0x539EA70")]
	public static object[] GetObjectData(object obj, MemberInfo[] members)
	{
		return null;
	}

	[Token(Token = "0x6001FB7")]
	[Address(RVA = "0x539EEF0", Offset = "0x539DEF0", VA = "0x539EEF0")]
	public static Type GetTypeFromAssembly(Assembly assem, string name)
	{
		return null;
	}

	[Token(Token = "0x6001FB8")]
	[Address(RVA = "0x539EF80", Offset = "0x539DF80", VA = "0x539EF80")]
	internal static Assembly LoadAssemblyFromString(string assemblyName)
	{
		return null;
	}

	[Token(Token = "0x6001FB9")]
	[Address(RVA = "0x539EF90", Offset = "0x539DF90", VA = "0x539EF90")]
	internal static Assembly LoadAssemblyFromStringNoThrow(string assemblyName)
	{
		return null;
	}

	[Token(Token = "0x6001FBA")]
	[Address(RVA = "0x539F050", Offset = "0x539E050", VA = "0x539F050")]
	internal static string GetClrAssemblyName(Type type, out bool hasTypeForwardedFrom)
	{
		return null;
	}

	[Token(Token = "0x6001FBB")]
	[Address(RVA = "0x539F1C0", Offset = "0x539E1C0", VA = "0x539F1C0")]
	internal static string GetClrTypeFullName(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001FBC")]
	[Address(RVA = "0x539F240", Offset = "0x539E240", VA = "0x539F240")]
	private static string GetClrTypeFullNameForArray(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001FBD")]
	[Address(RVA = "0x539F440", Offset = "0x539E440", VA = "0x539F440")]
	private static string GetClrTypeFullNameForNonArrayTypes(Type type)
	{
		return null;
	}
}
