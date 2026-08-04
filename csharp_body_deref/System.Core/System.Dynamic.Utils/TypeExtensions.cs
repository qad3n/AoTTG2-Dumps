// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.Utils.TypeExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Dynamic.Utils;

[Token(Token = "0x2000284")]
internal static class TypeExtensions
{
	[Token(Token = "0x400049F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly CacheDict<MethodBase, ParameterInfo[]> s_paramInfoCache;

	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x4512D80", Offset = "0x4512D80", VA = "0x4512D80")]
	public static MethodInfo GetAnyStaticMethodValidated(this Type type, string name, Type[] types)
	{
		return null;
	}

	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x4512E20", Offset = "0x4512E20", VA = "0x4512E20")]
	private static bool MatchesArgumentTypes(this MethodInfo mi, Type[] argTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x4512F50", Offset = "0x4512F50", VA = "0x4512F50")]
	public static Type GetReturnType(this MethodBase mi)
	{
		return null;
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x4512FF0", Offset = "0x4512FF0", VA = "0x4512FF0")]
	public static TypeCode GetTypeCode(this Type type)
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x4512190", Offset = "0x4512190", VA = "0x4512190")]
	internal static ParameterInfo[] GetParametersCached(this MethodBase method)
	{
		return null;
	}
}
