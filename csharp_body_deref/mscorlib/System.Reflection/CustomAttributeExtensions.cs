using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000505")]
public static class CustomAttributeExtensions
{
	[Token(Token = "0x60025A2")]
	[Address(RVA = "0x4EF43E0", Offset = "0x4EF43E0", VA = "0x4EF43E0")]
	public static Attribute GetCustomAttribute(this Assembly element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x60025A3")]
	[Address(RVA = "0x4EF43F0", Offset = "0x4EF43F0", VA = "0x4EF43F0")]
	public static Attribute GetCustomAttribute(this MemberInfo element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x60025A4")]
	public static T GetCustomAttribute<T>(this Assembly element) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x60025A5")]
	public static T GetCustomAttribute<T>(this MemberInfo element) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x60025A6")]
	[Address(RVA = "0x4EF4400", Offset = "0x4EF4400", VA = "0x4EF4400")]
	public static Attribute GetCustomAttribute(this MemberInfo element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60025A7")]
	public static T GetCustomAttribute<T>(this MemberInfo element, bool inherit) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x60025A8")]
	[Address(RVA = "0x4EF4410", Offset = "0x4EF4410", VA = "0x4EF4410")]
	public static IEnumerable<Attribute> GetCustomAttributes(this MemberInfo element)
	{
		return null;
	}

	[Token(Token = "0x60025A9")]
	[Address(RVA = "0x4EF4420", Offset = "0x4EF4420", VA = "0x4EF4420")]
	public static IEnumerable<Attribute> GetCustomAttributes(this Assembly element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x60025AA")]
	[Address(RVA = "0x4EF4430", Offset = "0x4EF4430", VA = "0x4EF4430")]
	public static IEnumerable<Attribute> GetCustomAttributes(this MemberInfo element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x60025AB")]
	public static IEnumerable<T> GetCustomAttributes<T>(this MemberInfo element) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x60025AC")]
	[Address(RVA = "0x4EF4440", Offset = "0x4EF4440", VA = "0x4EF4440")]
	public static IEnumerable<Attribute> GetCustomAttributes(this MemberInfo element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60025AD")]
	public static IEnumerable<T> GetCustomAttributes<T>(this MemberInfo element, bool inherit) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x60025AE")]
	[Address(RVA = "0x4EF4450", Offset = "0x4EF4450", VA = "0x4EF4450")]
	public static bool IsDefined(this MemberInfo element, Type attributeType)
	{
		return default(bool);
	}
}
