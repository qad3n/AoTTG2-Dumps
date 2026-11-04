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

	[Token(Token = "0x6000CA6")]
	[Address(RVA = "0x2489530", Offset = "0x2487B30", VA = "0x182489530")]
	public static MethodInfo GetAnyStaticMethodValidated(this Type type, string name, Type[] types)
	{
		return null;
	}

	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x24897E0", Offset = "0x2487DE0", VA = "0x1824897E0")]
	private static bool MatchesArgumentTypes(this MethodInfo mi, Type[] argTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x2489700", Offset = "0x2487D00", VA = "0x182489700")]
	public static Type GetReturnType(this MethodBase mi)
	{
		return null;
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x24897B0", Offset = "0x2487DB0", VA = "0x1824897B0")]
	public static TypeCode GetTypeCode(this Type type)
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x24895E0", Offset = "0x2487BE0", VA = "0x1824895E0")]
	internal static ParameterInfo[] GetParametersCached(this MethodBase method)
	{
		return null;
	}
}
