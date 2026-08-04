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

[Token(Token = "0x20004A9")]
public static class CustomLogicReflectionUtils
{
	[Token(Token = "0x600311E")]
	[Address(RVA = "0x4180CD0", Offset = "0x4180CD0", VA = "0x4180CD0")]
	public static bool IsCustomLogicType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600311F")]
	[Address(RVA = "0x4180D50", Offset = "0x4180D50", VA = "0x4180D50")]
	public static bool IsCustomLogicProperty(MemberInfo member)
	{
		return default(bool);
	}

	[Token(Token = "0x6003120")]
	[Address(RVA = "0x4180D90", Offset = "0x4180D90", VA = "0x4180D90")]
	public static bool IsCustomLogicMethod(MethodInfo methodInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6003121")]
	[Address(RVA = "0x4180DD0", Offset = "0x4180DD0", VA = "0x4180DD0")]
	public static bool IsObsolete(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6003122")]
	[Address(RVA = "0x4180E10", Offset = "0x4180E10", VA = "0x4180E10")]
	public static bool IsObsolete(MemberInfo member)
	{
		return default(bool);
	}

	[Token(Token = "0x6003123")]
	[Address(RVA = "0x4180E50", Offset = "0x4180E50", VA = "0x4180E50")]
	public static string GetObsoleteMessage(Type type)
	{
		return null;
	}

	[Token(Token = "0x6003124")]
	[Address(RVA = "0x4180F10", Offset = "0x4180F10", VA = "0x4180F10")]
	public static string GetObsoleteMessage(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6003125")]
	public static bool HasAttribute<T>(Type type, bool inherit = false) where T : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x6003126")]
	public static T GetAttribute<T>(Type type, bool inherit = false) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x6003127")]
	public static bool HasAttribute<T>(MemberInfo member, bool inherit = false) where T : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x6003128")]
	public static T GetAttribute<T>(MemberInfo member, bool inherit = false) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x6003129")]
	[Address(RVA = "0x4180FD0", Offset = "0x4180FD0", VA = "0x4180FD0")]
	public static bool IsPropertyStatic(PropertyInfo propertyInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600312A")]
	[Address(RVA = "0x4181040", Offset = "0x4181040", VA = "0x4181040")]
	public static string GetDefaultValueAsString(ParameterInfo parameterInfo)
	{
		return null;
	}

	[Token(Token = "0x600312B")]
	[Address(RVA = "0x4181150", Offset = "0x4181150", VA = "0x4181150")]
	public static bool IsVariadicParameter(ParameterInfo parameterInfo)
	{
		return default(bool);
	}
}
