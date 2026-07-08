using System;
using System.Reflection;
using Il2CppDummyDll;

namespace CustomLogic.Editor;

[Token(Token = "0x2000464")]
public static class CustomLogicReflectionUtils
{
	[Token(Token = "0x6002F11")]
	[Address(RVA = "0x3E747F0", Offset = "0x3E747F0", VA = "0x3E747F0")]
	public static bool IsCustomLogicType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F12")]
	[Address(RVA = "0x3E74870", Offset = "0x3E74870", VA = "0x3E74870")]
	public static bool IsCustomLogicProperty(MemberInfo member)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F13")]
	[Address(RVA = "0x3E748B0", Offset = "0x3E748B0", VA = "0x3E748B0")]
	public static bool IsCustomLogicMethod(MethodInfo methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F14")]
	[Address(RVA = "0x3E748F0", Offset = "0x3E748F0", VA = "0x3E748F0")]
	public static bool IsObsolete(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F15")]
	[Address(RVA = "0x3E74930", Offset = "0x3E74930", VA = "0x3E74930")]
	public static bool IsObsolete(MemberInfo member)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F16")]
	[Address(RVA = "0x3E74970", Offset = "0x3E74970", VA = "0x3E74970")]
	public static string GetObsoleteMessage(Type type)
	{
		return null;
	}

	[Token(Token = "0x6002F17")]
	[Address(RVA = "0x3E74A30", Offset = "0x3E74A30", VA = "0x3E74A30")]
	public static string GetObsoleteMessage(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6002F18")]
	public static bool HasAttribute<T>(Type type, bool inherit = false) where T : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x6002F19")]
	public static T GetAttribute<T>(Type type, bool inherit = false) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x6002F1A")]
	public static bool HasAttribute<T>(MemberInfo member, bool inherit = false) where T : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x6002F1B")]
	public static T GetAttribute<T>(MemberInfo member, bool inherit = false) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x6002F1C")]
	[Address(RVA = "0x3E74AF0", Offset = "0x3E74AF0", VA = "0x3E74AF0")]
	public static bool IsPropertyStatic(PropertyInfo propertyInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F1D")]
	[Address(RVA = "0x3E74B60", Offset = "0x3E74B60", VA = "0x3E74B60")]
	public static string GetDefaultValueAsString(ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x6002F1E")]
	[Address(RVA = "0x3E74C70", Offset = "0x3E74C70", VA = "0x3E74C70")]
	public static bool IsVariadicParameter(ParameterInfo parameterInfo)
	{
		return default(bool);
	}
}
