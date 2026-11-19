// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.Editor.CustomLogicReflectionUtils
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/Editor/CustomLogicReflectionUtils.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace CustomLogic.Editor;

[Token(Token = "0x200065D")]
public static class CustomLogicReflectionUtils
{
	[Token(Token = "0x6003D1F")]
	[Address(RVA = "0x5A91D30", Offset = "0x5A90D30", VA = "0x5A91D30")]
	public static bool IsCustomLogicType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6003D20")]
	[Address(RVA = "0x5A91DB0", Offset = "0x5A90DB0", VA = "0x5A91DB0")]
	public static bool IsCustomLogicProperty(MemberInfo member)
	{
		return default(bool);
	}

	[Token(Token = "0x6003D21")]
	[Address(RVA = "0x5A91DF0", Offset = "0x5A90DF0", VA = "0x5A91DF0")]
	public static bool IsCustomLogicMethod(MethodInfo methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6003D22")]
	[Address(RVA = "0x5A91E30", Offset = "0x5A90E30", VA = "0x5A91E30")]
	public static bool IsObsolete(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6003D23")]
	[Address(RVA = "0x5A91E70", Offset = "0x5A90E70", VA = "0x5A91E70")]
	public static bool IsObsolete(MemberInfo member)
	{
		return default(bool);
	}

	[Token(Token = "0x6003D24")]
	[Address(RVA = "0x5A91EB0", Offset = "0x5A90EB0", VA = "0x5A91EB0")]
	public static string GetObsoleteMessage(Type type)
	{
		return null;
	}

	[Token(Token = "0x6003D25")]
	[Address(RVA = "0x5A91F70", Offset = "0x5A90F70", VA = "0x5A91F70")]
	public static string GetObsoleteMessage(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6003D26")]
	public static bool HasAttribute<T>(Type type, bool inherit = false) where T : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x6003D27")]
	public static T GetAttribute<T>(Type type, bool inherit = false) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x6003D28")]
	public static bool HasAttribute<T>(MemberInfo member, bool inherit = false) where T : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x6003D29")]
	public static T GetAttribute<T>(MemberInfo member, bool inherit = false) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x6003D2A")]
	[Address(RVA = "0x5A92030", Offset = "0x5A91030", VA = "0x5A92030")]
	public static bool IsPropertyStatic(PropertyInfo propertyInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6003D2B")]
	[Address(RVA = "0x5A920A0", Offset = "0x5A910A0", VA = "0x5A920A0")]
	public static string GetDefaultValueAsString(ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x6003D2C")]
	[Address(RVA = "0x5A921B0", Offset = "0x5A911B0", VA = "0x5A921B0")]
	public static bool IsVariadicParameter(ParameterInfo parameterInfo)
	{
		return default(bool);
	}
}
