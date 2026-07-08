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
	[Address(RVA = "0x41EDC80", Offset = "0x41EDC80", VA = "0x41EDC80")]
	public static MethodInfo GetAnyStaticMethodValidated(this Type type, string name, Type[] types)
	{
		return null;
	}

	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x41EDD20", Offset = "0x41EDD20", VA = "0x41EDD20")]
	private static bool MatchesArgumentTypes(this MethodInfo mi, Type[] argTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x41EDE50", Offset = "0x41EDE50", VA = "0x41EDE50")]
	public static Type GetReturnType(this MethodBase mi)
	{
		return null;
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x41EDEF0", Offset = "0x41EDEF0", VA = "0x41EDEF0")]
	public static TypeCode GetTypeCode(this Type type)
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x41ED090", Offset = "0x41ED090", VA = "0x41ED090")]
	internal static ParameterInfo[] GetParametersCached(this MethodBase method)
	{
		return null;
	}
}
