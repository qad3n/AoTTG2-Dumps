// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.CustomAttributeExtensions
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000535")]
public static class CustomAttributeExtensions
{
	[Token(Token = "0x6002624")]
	[Address(RVA = "0x1A42B50", Offset = "0x1A41150", VA = "0x181A42B50")]
	public static Attribute GetCustomAttribute(this Assembly element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6002625")]
	[Address(RVA = "0x1A42B60", Offset = "0x1A41160", VA = "0x181A42B60")]
	public static Attribute GetCustomAttribute(this MemberInfo element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x6002626")]
	public static T GetCustomAttribute<T>(this Assembly element) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x6002627")]
	public static T GetCustomAttribute<T>(this MemberInfo element) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x6002628")]
	[Address(RVA = "0x1A42B70", Offset = "0x1A41170", VA = "0x181A42B70")]
	public static Attribute GetCustomAttribute(this MemberInfo element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002629")]
	public static T GetCustomAttribute<T>(this MemberInfo element, bool inherit) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x600262A")]
	[Address(RVA = "0x1A42BA0", Offset = "0x1A411A0", VA = "0x181A42BA0")]
	public static IEnumerable<Attribute> GetCustomAttributes(this Assembly element)
	{
		return null;
	}

	[Token(Token = "0x600262B")]
	[Address(RVA = "0x1A42B90", Offset = "0x1A41190", VA = "0x181A42B90")]
	public static IEnumerable<Attribute> GetCustomAttributes(this MemberInfo element)
	{
		return null;
	}

	[Token(Token = "0x600262C")]
	[Address(RVA = "0x1A42BC0", Offset = "0x1A411C0", VA = "0x181A42BC0")]
	public static IEnumerable<Attribute> GetCustomAttributes(this Assembly element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x600262D")]
	[Address(RVA = "0x1A42BB0", Offset = "0x1A411B0", VA = "0x181A42BB0")]
	public static IEnumerable<Attribute> GetCustomAttributes(this MemberInfo element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x600262E")]
	public static IEnumerable<T> GetCustomAttributes<T>(this MemberInfo element) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x600262F")]
	[Address(RVA = "0x1A42B80", Offset = "0x1A41180", VA = "0x181A42B80")]
	public static IEnumerable<Attribute> GetCustomAttributes(this MemberInfo element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002630")]
	public static IEnumerable<T> GetCustomAttributes<T>(this MemberInfo element, bool inherit) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x6002631")]
	[Address(RVA = "0x1A42BD0", Offset = "0x1A411D0", VA = "0x181A42BD0")]
	public static bool IsDefined(this MemberInfo element, Type attributeType)
	{
		return default(bool);
	}
}
