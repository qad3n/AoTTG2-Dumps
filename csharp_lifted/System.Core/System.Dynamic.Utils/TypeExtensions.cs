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

[Token(Token = "0x2000285")]
internal static class TypeExtensions
{
	[Token(Token = "0x40004A8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly CacheDict<MethodBase, ParameterInfo[]> s_paramInfoCache;

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x5E27940", Offset = "0x5E26940", VA = "0x5E27940")]
	public static MethodInfo GetAnyStaticMethodValidated(this Type type, string name, Type[] types)
	{
		return null;
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x5E279E0", Offset = "0x5E269E0", VA = "0x5E279E0")]
	private static bool MatchesArgumentTypes(this MethodInfo mi, Type[] argTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x5E27B10", Offset = "0x5E26B10", VA = "0x5E27B10")]
	public static Type GetReturnType(this MethodBase mi)
	{
		return null;
	}

	[Token(Token = "0x6000CB4")]
	[Address(RVA = "0x5E27BB0", Offset = "0x5E26BB0", VA = "0x5E27BB0")]
	public static TypeCode GetTypeCode(this Type type)
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x5E26D40", Offset = "0x5E25D40", VA = "0x5E26D40")]
	internal static ParameterInfo[] GetParametersCached(this MethodBase method)
	{
		return null;
	}
}
