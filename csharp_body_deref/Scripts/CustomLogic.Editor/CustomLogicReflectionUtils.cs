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

[Token(Token = "0x20005FE")]
public static class CustomLogicReflectionUtils
{
	[Token(Token = "0x6003A91")]
	[Address(RVA = "0x20FB530", Offset = "0x20F9B30", VA = "0x1820FB530")]
	public static bool IsCustomLogicType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6003A92")]
	[Address(RVA = "0x20FB4F0", Offset = "0x20F9AF0", VA = "0x1820FB4F0")]
	public static bool IsCustomLogicProperty(MemberInfo member)
	{
		return default(bool);
	}

	[Token(Token = "0x6003A93")]
	[Address(RVA = "0x20FB4B0", Offset = "0x20F9AB0", VA = "0x1820FB4B0")]
	public static bool IsCustomLogicMethod(MethodInfo methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6003A94")]
	[Address(RVA = "0x20FB600", Offset = "0x20F9C00", VA = "0x1820FB600")]
	public static bool IsObsolete(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6003A95")]
	[Address(RVA = "0x20FB5C0", Offset = "0x20F9BC0", VA = "0x1820FB5C0")]
	public static bool IsObsolete(MemberInfo member)
	{
		return default(bool);
	}

	[Token(Token = "0x6003A96")]
	[Address(RVA = "0x20FB3F0", Offset = "0x20F99F0", VA = "0x1820FB3F0")]
	public static string GetObsoleteMessage(Type type)
	{
		return null;
	}

	[Token(Token = "0x6003A97")]
	[Address(RVA = "0x20FB330", Offset = "0x20F9930", VA = "0x1820FB330")]
	public static string GetObsoleteMessage(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6003A98")]
	public static bool HasAttribute<T>(Type type, bool inherit = false) where T : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x6003A99")]
	public static T GetAttribute<T>(Type type, bool inherit = false) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x6003A9A")]
	public static bool HasAttribute<T>(MemberInfo member, bool inherit = false) where T : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x6003A9B")]
	public static T GetAttribute<T>(MemberInfo member, bool inherit = false) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x6003A9C")]
	[Address(RVA = "0x20FB640", Offset = "0x20F9C40", VA = "0x1820FB640")]
	public static bool IsPropertyStatic(PropertyInfo propertyInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6003A9D")]
	[Address(RVA = "0x20FB220", Offset = "0x20F9820", VA = "0x1820FB220")]
	public static string GetDefaultValueAsString(ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x6003A9E")]
	[Address(RVA = "0x20FB6B0", Offset = "0x20F9CB0", VA = "0x1820FB6B0")]
	public static bool IsVariadicParameter(ParameterInfo parameterInfo)
	{
		return default(bool);
	}
}
