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
	[Address(RVA = "0x55BAE50", Offset = "0x55B9E50", VA = "0x55BAE50")]
	static ReflectionUtils()
	{
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x55BAEC0", Offset = "0x55B9EC0", VA = "0x55BAEC0")]
	public static bool IsVirtual(this PropertyInfo propertyInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x55BAFA0", Offset = "0x55B9FA0", VA = "0x55BAFA0")]
	public static MethodInfo GetBaseDefinition(this PropertyInfo propertyInfo)
	{
		return null;
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x55BB060", Offset = "0x55BA060", VA = "0x55BB060")]
	public static bool IsPublic(PropertyInfo property)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x55A8BA0", Offset = "0x55A7BA0", VA = "0x55A8BA0")]
	public static Type? GetObjectType(object? v)
	{
		return null;
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x55BB0E0", Offset = "0x55BA0E0", VA = "0x55BB0E0")]
	public static string GetTypeName(Type t, TypeNameAssemblyFormatHandling assemblyFormat, ISerializationBinder? binder)
	{
		return null;
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x55BB1B0", Offset = "0x55BA1B0", VA = "0x55BB1B0")]
	private static string GetFullyQualifiedTypeName(Type t, ISerializationBinder? binder)
	{
		return null;
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x55BB2F0", Offset = "0x55BA2F0", VA = "0x55BB2F0")]
	private static string RemoveAssemblyDetails(string fullyQualifiedTypeName)
	{
		return null;
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x55BA6C0", Offset = "0x55B96C0", VA = "0x55BA6C0")]
	public static bool HasDefaultConstructor(Type t, bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x55BB5A0", Offset = "0x55BA5A0", VA = "0x55BB5A0")]
	public static ConstructorInfo GetDefaultConstructor(Type t)
	{
		return null;
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x55BB460", Offset = "0x55BA460", VA = "0x55BB460")]
	public static ConstructorInfo GetDefaultConstructor(Type t, bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x55A86D0", Offset = "0x55A76D0", VA = "0x55A86D0")]
	public static bool IsNullable(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x55A6A60", Offset = "0x55A5A60", VA = "0x55A6A60")]
	public static bool IsNullableType(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x55BB610", Offset = "0x55BA610", VA = "0x55BB610")]
	public static Type EnsureNotNullableType(Type t)
	{
		return null;
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x55BB690", Offset = "0x55BA690", VA = "0x55BB690")]
	public static Type EnsureNotByRefType(Type t)
	{
		return null;
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x55BB6E0", Offset = "0x55BA6E0", VA = "0x55BB6E0")]
	public static bool IsGenericDefinition(Type type, Type genericInterfaceDefinition)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x55A5770", Offset = "0x55A4770", VA = "0x55A5770")]
	public static bool ImplementsGenericDefinition(Type type, Type genericInterfaceDefinition)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x55BB750", Offset = "0x55BA750", VA = "0x55BB750")]
	public static bool ImplementsGenericDefinition(Type type, Type genericInterfaceDefinition, [NotNullWhen(true)] out Type? implementingType)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x55BB9D0", Offset = "0x55BA9D0", VA = "0x55BB9D0")]
	public static bool InheritsGenericDefinition(Type type, Type genericClassDefinition)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x55BBA30", Offset = "0x55BAA30", VA = "0x55BBA30")]
	public static bool InheritsGenericDefinition(Type type, Type genericClassDefinition, out Type? implementingType)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x55BBB60", Offset = "0x55BAB60", VA = "0x55BBB60")]
	private static bool InheritsGenericDefinitionInternal(Type type, Type genericClassDefinition, out Type? implementingType)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x55BBC50", Offset = "0x55BAC50", VA = "0x55BBC50")]
	public static Type GetCollectionItemType(Type type)
	{
		return null;
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x55BBE70", Offset = "0x55BAE70", VA = "0x55BBE70")]
	public static void GetDictionaryKeyValueTypes(Type dictionaryType, out Type? keyType, out Type? valueType)
	{
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x55BAA60", Offset = "0x55B9A60", VA = "0x55BAA60")]
	public static Type GetMemberUnderlyingType(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x55BC0B0", Offset = "0x55BB0B0", VA = "0x55BC0B0")]
	public static bool IsByRefLikeType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x55BC590", Offset = "0x55BB590", VA = "0x55BC590")]
	public static bool IsIndexedProperty(PropertyInfo property)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x55BC5F0", Offset = "0x55BB5F0", VA = "0x55BC5F0")]
	public static object GetMemberValue(MemberInfo member, object target)
	{
		return null;
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x55BC8F0", Offset = "0x55BB8F0", VA = "0x55BC8F0")]
	public static void SetMemberValue(MemberInfo member, object target, object? value)
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x55BA790", Offset = "0x55B9790", VA = "0x55BA790")]
	public static bool CanReadMemberValue(MemberInfo member, bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x55BA8C0", Offset = "0x55B98C0", VA = "0x55BA8C0")]
	public static bool CanSetMemberValue(MemberInfo member, bool nonPublic, bool canSetReadOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x55BCAD0", Offset = "0x55BBAD0", VA = "0x55BCAD0")]
	public static List<MemberInfo> GetFieldsAndProperties(Type type, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x55BD9E0", Offset = "0x55BC9E0", VA = "0x55BD9E0")]
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
	[Address(RVA = "0x55BC1C0", Offset = "0x55BB1C0", VA = "0x55BC1C0")]
	public static Attribute[] GetAttributes(object attributeProvider, Type? attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x55BDBD0", Offset = "0x55BCBD0", VA = "0x55BDBD0")]
	public static StructMultiKey<string, string> SplitFullyQualifiedTypeName(string fullyQualifiedTypeName)
	{
		return default(StructMultiKey<string, string>);
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x55BDCB0", Offset = "0x55BCCB0", VA = "0x55BDCB0")]
	private static int? GetAssemblyDelimiterIndex(string fullyQualifiedTypeName)
	{
		return null;
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x55BDD70", Offset = "0x55BCD70", VA = "0x55BDD70")]
	public static MemberInfo GetMemberInfoFromType(Type targetType, MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x55BD5D0", Offset = "0x55BC5D0", VA = "0x55BD5D0")]
	public static IEnumerable<FieldInfo> GetFields(Type targetType, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x55BE000", Offset = "0x55BD000", VA = "0x55BE000")]
	private static void GetChildPrivateFields(IList<MemberInfo> initialFields, Type type, BindingFlags bindingAttr)
	{
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x55BD6D0", Offset = "0x55BC6D0", VA = "0x55BD6D0")]
	public static IEnumerable<PropertyInfo> GetProperties(Type targetType, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x55BE210", Offset = "0x55BD210", VA = "0x55BE210")]
	public static BindingFlags RemoveFlag(this BindingFlags bindingAttr, BindingFlags flag)
	{
		return default(BindingFlags);
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x55BE220", Offset = "0x55BD220", VA = "0x55BE220")]
	private static void GetChildPrivateProperties(IList<PropertyInfo> initialProperties, Type type, BindingFlags bindingAttr)
	{
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x55BEAD0", Offset = "0x55BDAD0", VA = "0x55BEAD0")]
	public static bool IsMethodOverridden(Type currentType, Type methodDeclaringType, string method)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x55BEBE0", Offset = "0x55BDBE0", VA = "0x55BEBE0")]
	public static object GetDefaultValue(Type type)
	{
		return null;
	}
}
