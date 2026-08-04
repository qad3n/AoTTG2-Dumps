// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.CustomAttributeExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000505")]
public static class CustomAttributeExtensions
{
	[Token(Token = "0x60025A2")]
	[Address(RVA = "0x3BD9F00", Offset = "0x3BD9F00", VA = "0x3BD9F00")]
	public static Attribute GetCustomAttribute(this Assembly element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x60025A3")]
	[Address(RVA = "0x3BD9F10", Offset = "0x3BD9F10", VA = "0x3BD9F10")]
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
	[Address(RVA = "0x3BD9F20", Offset = "0x3BD9F20", VA = "0x3BD9F20")]
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
	[Address(RVA = "0x3BD9F30", Offset = "0x3BD9F30", VA = "0x3BD9F30")]
	public static IEnumerable<Attribute> GetCustomAttributes(this MemberInfo element)
	{
		return null;
	}

	[Token(Token = "0x60025A9")]
	[Address(RVA = "0x3BD9F40", Offset = "0x3BD9F40", VA = "0x3BD9F40")]
	public static IEnumerable<Attribute> GetCustomAttributes(this Assembly element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x60025AA")]
	[Address(RVA = "0x3BD9F50", Offset = "0x3BD9F50", VA = "0x3BD9F50")]
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
	[Address(RVA = "0x3BD9F60", Offset = "0x3BD9F60", VA = "0x3BD9F60")]
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
	[Address(RVA = "0x3BD9F70", Offset = "0x3BD9F70", VA = "0x3BD9F70")]
	public static bool IsDefined(this MemberInfo element, Type attributeType)
	{
		return default(bool);
	}
}
