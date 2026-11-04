// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.ReflectionUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Reflection;
using Il2CppDummyDll;
using Newtonsoft.Json.Serialization;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000E7")]
internal static class ReflectionUtils
{
	[Token(Token = "0x40004B9")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Type[] EmptyTypes;

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x1C30850", Offset = "0x1C2EE50", VA = "0x181C30850")]
	static ReflectionUtils()
	{
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x1C30290", Offset = "0x1C2E890", VA = "0x181C30290")]
	public static bool IsVirtual(this PropertyInfo propertyInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x1C2CBF0", Offset = "0x1C2B1F0", VA = "0x181C2CBF0")]
	public static MethodInfo GetBaseDefinition(this PropertyInfo propertyInfo)
	{
		return null;
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x1C301F0", Offset = "0x1C2E7F0", VA = "0x181C301F0")]
	public static bool IsPublic(PropertyInfo property)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x1C2EEB0", Offset = "0x1C2D4B0", VA = "0x181C2EEB0")]
	public static Type? GetObjectType(object? v)
	{
		return null;
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x1C2F190", Offset = "0x1C2D790", VA = "0x181C2F190")]
	public static string GetTypeName(Type t, TypeNameAssemblyFormatHandling assemblyFormat, ISerializationBinder? binder)
	{
		return null;
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x1C2E580", Offset = "0x1C2CB80", VA = "0x181C2E580")]
	private static string GetFullyQualifiedTypeName(Type t, ISerializationBinder? binder)
	{
		return null;
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x1C30370", Offset = "0x1C2E970", VA = "0x181C30370")]
	private static string RemoveAssemblyDetails(string fullyQualifiedTypeName)
	{
		return null;
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x1C2F4C0", Offset = "0x1C2DAC0", VA = "0x181C2F4C0")]
	public static bool HasDefaultConstructor(Type t, bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x1C2D680", Offset = "0x1C2BC80", VA = "0x181C2D680")]
	public static ConstructorInfo GetDefaultConstructor(Type t)
	{
		return null;
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x1C2D530", Offset = "0x1C2BB30", VA = "0x181C2D530")]
	public static ConstructorInfo GetDefaultConstructor(Type t, bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x1C2FF80", Offset = "0x1C2E580", VA = "0x181C2FF80")]
	public static bool IsNullable(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x1C2FEC0", Offset = "0x1C2E4C0", VA = "0x181C2FEC0")]
	public static bool IsNullableType(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x1C2C600", Offset = "0x1C2AC00", VA = "0x181C2C600")]
	public static Type EnsureNotNullableType(Type t)
	{
		return null;
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x1C2C5B0", Offset = "0x1C2ABB0", VA = "0x181C2C5B0")]
	public static Type EnsureNotByRefType(Type t)
	{
		return null;
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x1C2FCD0", Offset = "0x1C2E2D0", VA = "0x181C2FCD0")]
	public static bool IsGenericDefinition(Type type, Type genericInterfaceDefinition)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x1C2F800", Offset = "0x1C2DE00", VA = "0x181C2F800")]
	public static bool ImplementsGenericDefinition(Type type, Type genericInterfaceDefinition)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x1C2F590", Offset = "0x1C2DB90", VA = "0x181C2F590")]
	public static bool ImplementsGenericDefinition(Type type, Type genericInterfaceDefinition, [NotNullWhen(true)] out Type? implementingType)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x1C2FB60", Offset = "0x1C2E160", VA = "0x181C2FB60")]
	public static bool InheritsGenericDefinition(Type type, Type genericClassDefinition)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x1C2F960", Offset = "0x1C2DF60", VA = "0x181C2F960")]
	public static bool InheritsGenericDefinition(Type type, Type genericClassDefinition, out Type? implementingType)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x1C2F870", Offset = "0x1C2DE70", VA = "0x181C2F870")]
	private static bool InheritsGenericDefinitionInternal(Type type, Type genericClassDefinition, out Type? implementingType)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x1C2D290", Offset = "0x1C2B890", VA = "0x181C2D290")]
	public static Type GetCollectionItemType(Type type)
	{
		return null;
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x1C2D9C0", Offset = "0x1C2BFC0", VA = "0x181C2D9C0")]
	public static void GetDictionaryKeyValueTypes(Type dictionaryType, out Type? keyType, out Type? valueType)
	{
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x1C2E970", Offset = "0x1C2CF70", VA = "0x181C2E970")]
	public static Type GetMemberUnderlyingType(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x1C2FBD0", Offset = "0x1C2E1D0", VA = "0x181C2FBD0")]
	public static bool IsByRefLikeType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x1C2FD50", Offset = "0x1C2E350", VA = "0x181C2FD50")]
	public static bool IsIndexedProperty(PropertyInfo property)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x1C2EBE0", Offset = "0x1C2D1E0", VA = "0x181C2EBE0")]
	public static object GetMemberValue(MemberInfo member, object target)
	{
		return null;
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x1C304D0", Offset = "0x1C2EAD0", VA = "0x181C304D0")]
	public static void SetMemberValue(MemberInfo member, object target, object? value)
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x1C2C2C0", Offset = "0x1C2A8C0", VA = "0x181C2C2C0")]
	public static bool CanReadMemberValue(MemberInfo member, bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x1C2C420", Offset = "0x1C2AA20", VA = "0x181C2C420")]
	public static bool CanSetMemberValue(MemberInfo member, bool nonPublic, bool canSetReadOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x1C2DC70", Offset = "0x1C2C270", VA = "0x181C2DC70")]
	public static List<MemberInfo> GetFieldsAndProperties(Type type, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x1C30000", Offset = "0x1C2E600", VA = "0x181C30000")]
	private static bool IsOverridenGenericMember(MemberInfo memberInfo, BindingFlags bindingAttr)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CF")]
	public static T GetAttribute<T>(object attributeProvider) where T : notnull, Attribute
	{
		return null;
	}

	[Token(Token = "0x60006D0")]
	public static T GetAttribute<T>(object attributeProvider, bool inherit) where T : notnull, Attribute
	{
		return null;
	}

	[Token(Token = "0x60006D1")]
	public static T[] GetAttributes<T>(object attributeProvider, bool inherit) where T : notnull, Attribute
	{
		return null;
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x1C2C730", Offset = "0x1C2AD30", VA = "0x181C2C730")]
	public static Attribute[] GetAttributes(object attributeProvider, Type? attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x1C306F0", Offset = "0x1C2ECF0", VA = "0x181C306F0")]
	public static StructMultiKey<string, string> SplitFullyQualifiedTypeName(string fullyQualifiedTypeName)
	{
		return default(StructMultiKey<string, string>);
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x1C2C660", Offset = "0x1C2AC60", VA = "0x181C2C660")]
	private static int? GetAssemblyDelimiterIndex(string fullyQualifiedTypeName)
	{
		return null;
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x1C2E6D0", Offset = "0x1C2CCD0", VA = "0x181C2E6D0")]
	public static MemberInfo GetMemberInfoFromType(Type targetType, MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x1C2E2D0", Offset = "0x1C2C8D0", VA = "0x181C2E2D0")]
	public static IEnumerable<FieldInfo> GetFields(Type targetType, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x1C2CCD0", Offset = "0x1C2B2D0", VA = "0x181C2CCD0")]
	private static void GetChildPrivateFields(IList<MemberInfo> initialFields, Type type, BindingFlags bindingAttr)
	{
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x1C2EEC0", Offset = "0x1C2D4C0", VA = "0x181C2EEC0")]
	public static IEnumerable<PropertyInfo> GetProperties(Type targetType, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x1C304B0", Offset = "0x1C2EAB0", VA = "0x181C304B0")]
	public static BindingFlags RemoveFlag(this BindingFlags bindingAttr, BindingFlags flag)
	{
		return default(BindingFlags);
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x1C2CEB0", Offset = "0x1C2B4B0", VA = "0x181C2CEB0")]
	private static void GetChildPrivateProperties(IList<PropertyInfo> initialProperties, Type type, BindingFlags bindingAttr)
	{
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x1C2FDC0", Offset = "0x1C2E3C0", VA = "0x181C2FDC0")]
	public static bool IsMethodOverridden(Type currentType, Type methodDeclaringType, string method)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x1C2D6D0", Offset = "0x1C2BCD0", VA = "0x181C2D6D0")]
	public static object GetDefaultValue(Type type)
	{
		return null;
	}
}
