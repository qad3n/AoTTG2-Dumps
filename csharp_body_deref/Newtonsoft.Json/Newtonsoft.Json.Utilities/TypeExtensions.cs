using System;
using System.Diagnostics.CodeAnalysis;
using System.Reflection;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000F5")]
internal static class TypeExtensions
{
	[Token(Token = "0x6000720")]
	[Address(RVA = "0x3AD2330", Offset = "0x3AD2330", VA = "0x3AD2330")]
	public static MethodInfo Method(this Delegate d)
	{
		return null;
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x3AD2350", Offset = "0x3AD2350", VA = "0x3AD2350")]
	public static MemberTypes MemberType(this MemberInfo memberInfo)
	{
		return default(MemberTypes);
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x3AD2370", Offset = "0x3AD2370", VA = "0x3AD2370")]
	public static bool ContainsGenericParameters(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x3AD2390", Offset = "0x3AD2390", VA = "0x3AD2390")]
	public static bool IsInterface(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x3AD23B0", Offset = "0x3AD23B0", VA = "0x3AD23B0")]
	public static bool IsGenericType(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x3AD23D0", Offset = "0x3AD23D0", VA = "0x3AD23D0")]
	public static bool IsGenericTypeDefinition(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x3AD23F0", Offset = "0x3AD23F0", VA = "0x3AD23F0")]
	public static Type BaseType(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000727")]
	[Address(RVA = "0x3AD2410", Offset = "0x3AD2410", VA = "0x3AD2410")]
	public static Assembly Assembly(this Type type)
	{
		return null;
	}

	[Token(Token = "0x6000728")]
	[Address(RVA = "0x3AD2430", Offset = "0x3AD2430", VA = "0x3AD2430")]
	public static bool IsEnum(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000729")]
	[Address(RVA = "0x3AD2450", Offset = "0x3AD2450", VA = "0x3AD2450")]
	public static bool IsClass(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600072A")]
	[Address(RVA = "0x3AD2470", Offset = "0x3AD2470", VA = "0x3AD2470")]
	public static bool IsSealed(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600072B")]
	[Address(RVA = "0x3AD2490", Offset = "0x3AD2490", VA = "0x3AD2490")]
	public static bool IsAbstract(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600072C")]
	[Address(RVA = "0x3AD24B0", Offset = "0x3AD24B0", VA = "0x3AD24B0")]
	public static bool IsVisible(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600072D")]
	[Address(RVA = "0x3AD24D0", Offset = "0x3AD24D0", VA = "0x3AD24D0")]
	public static bool IsValueType(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600072E")]
	[Address(RVA = "0x3AD24F0", Offset = "0x3AD24F0", VA = "0x3AD24F0")]
	public static bool IsPrimitive(this Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x3AD2510", Offset = "0x3AD2510", VA = "0x3AD2510")]
	public static bool AssignableToTypeName(this Type type, string fullTypeName, bool searchInterfaces, [NotNullWhen(true)] out Type? match)
	{
		return default(bool);
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x3AD2690", Offset = "0x3AD2690", VA = "0x3AD2690")]
	public static bool AssignableToTypeName(this Type type, string fullTypeName, bool searchInterfaces)
	{
		return default(bool);
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x3AD26B0", Offset = "0x3AD26B0", VA = "0x3AD26B0")]
	public static bool ImplementInterface(this Type type, Type interfaceType)
	{
		return default(bool);
	}
}
