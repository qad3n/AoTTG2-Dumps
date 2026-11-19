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

[Token(Token = "0x200050E")]
public static class CustomAttributeExtensions
{
	[Token(Token = "0x60025F2")]
	[Address(RVA = "0x53E0B70", Offset = "0x53DFB70", VA = "0x53E0B70")]
	public static Attribute GetCustomAttribute(this Assembly element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x60025F3")]
	[Address(RVA = "0x53E0B80", Offset = "0x53DFB80", VA = "0x53E0B80")]
	public static Attribute GetCustomAttribute(this MemberInfo element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x60025F4")]
	public static T GetCustomAttribute<T>(this Assembly element) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x60025F5")]
	public static T GetCustomAttribute<T>(this MemberInfo element) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x60025F6")]
	[Address(RVA = "0x53E0B90", Offset = "0x53DFB90", VA = "0x53E0B90")]
	public static Attribute GetCustomAttribute(this MemberInfo element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60025F7")]
	public static T GetCustomAttribute<T>(this MemberInfo element, bool inherit) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x60025F8")]
	[Address(RVA = "0x53E0BA0", Offset = "0x53DFBA0", VA = "0x53E0BA0")]
	public static IEnumerable<Attribute> GetCustomAttributes(this Assembly element)
	{
		return null;
	}

	[Token(Token = "0x60025F9")]
	[Address(RVA = "0x53E0BB0", Offset = "0x53DFBB0", VA = "0x53E0BB0")]
	public static IEnumerable<Attribute> GetCustomAttributes(this MemberInfo element)
	{
		return null;
	}

	[Token(Token = "0x60025FA")]
	[Address(RVA = "0x53E0BC0", Offset = "0x53DFBC0", VA = "0x53E0BC0")]
	public static IEnumerable<Attribute> GetCustomAttributes(this Assembly element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x60025FB")]
	[Address(RVA = "0x53E0BD0", Offset = "0x53DFBD0", VA = "0x53E0BD0")]
	public static IEnumerable<Attribute> GetCustomAttributes(this MemberInfo element, Type attributeType)
	{
		return null;
	}

	[Token(Token = "0x60025FC")]
	public static IEnumerable<T> GetCustomAttributes<T>(this MemberInfo element) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x60025FD")]
	[Address(RVA = "0x53E0BE0", Offset = "0x53DFBE0", VA = "0x53E0BE0")]
	public static IEnumerable<Attribute> GetCustomAttributes(this MemberInfo element, Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60025FE")]
	public static IEnumerable<T> GetCustomAttributes<T>(this MemberInfo element, bool inherit) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x60025FF")]
	[Address(RVA = "0x53E0BF0", Offset = "0x53DFBF0", VA = "0x53E0BF0")]
	public static bool IsDefined(this MemberInfo element, Type attributeType)
	{
		return default(bool);
	}
}
