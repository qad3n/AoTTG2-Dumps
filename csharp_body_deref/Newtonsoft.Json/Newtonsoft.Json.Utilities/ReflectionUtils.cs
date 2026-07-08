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
	[Address(RVA = "0x3ACC5A0", Offset = "0x3ACC5A0", VA = "0x3ACC5A0")]
	static ReflectionUtils()
	{
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x3ACC610", Offset = "0x3ACC610", VA = "0x3ACC610")]
	public static bool IsVirtual(this PropertyInfo propertyInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x3ACC6F0", Offset = "0x3ACC6F0", VA = "0x3ACC6F0")]
	public static MethodInfo GetBaseDefinition(this PropertyInfo propertyInfo)
	{
		return null;
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x3ACC7D0", Offset = "0x3ACC7D0", VA = "0x3ACC7D0")]
	public static bool IsPublic(PropertyInfo property)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x3AB99B0", Offset = "0x3AB99B0", VA = "0x3AB99B0")]
	public static Type? GetObjectType(object? v)
	{
		return null;
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x3ACC850", Offset = "0x3ACC850", VA = "0x3ACC850")]
	public static string GetTypeName(Type t, TypeNameAssemblyFormatHandling assemblyFormat, ISerializationBinder? binder)
	{
		return null;
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x3ACC920", Offset = "0x3ACC920", VA = "0x3ACC920")]
	private static string GetFullyQualifiedTypeName(Type t, ISerializationBinder? binder)
	{
		return null;
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x3ACCA60", Offset = "0x3ACCA60", VA = "0x3ACCA60")]
	private static string RemoveAssemblyDetails(string fullyQualifiedTypeName)
	{
		return null;
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x3ACBD70", Offset = "0x3ACBD70", VA = "0x3ACBD70")]
	public static bool HasDefaultConstructor(Type t, bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x3ACCD50", Offset = "0x3ACCD50", VA = "0x3ACCD50")]
	public static ConstructorInfo GetDefaultConstructor(Type t)
	{
		return null;
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x3ACCC10", Offset = "0x3ACCC10", VA = "0x3ACCC10")]
	public static ConstructorInfo GetDefaultConstructor(Type t, bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x3AB94E0", Offset = "0x3AB94E0", VA = "0x3AB94E0")]
	public static bool IsNullable(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x3AB7790", Offset = "0x3AB7790", VA = "0x3AB7790")]
	public static bool IsNullableType(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x3ACCDC0", Offset = "0x3ACCDC0", VA = "0x3ACCDC0")]
	public static Type EnsureNotNullableType(Type t)
	{
		return null;
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x3ACCE40", Offset = "0x3ACCE40", VA = "0x3ACCE40")]
	public static Type EnsureNotByRefType(Type t)
	{
		return null;
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x3ACCE90", Offset = "0x3ACCE90", VA = "0x3ACCE90")]
	public static bool IsGenericDefinition(Type type, Type genericInterfaceDefinition)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x3AB6560", Offset = "0x3AB6560", VA = "0x3AB6560")]
	public static bool ImplementsGenericDefinition(Type type, Type genericInterfaceDefinition)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x3ACCF00", Offset = "0x3ACCF00", VA = "0x3ACCF00")]
	public static bool ImplementsGenericDefinition(Type type, Type genericInterfaceDefinition, [NotNullWhen(true)] out Type? implementingType)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x3ACD180", Offset = "0x3ACD180", VA = "0x3ACD180")]
	public static bool InheritsGenericDefinition(Type type, Type genericClassDefinition)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x3ACD1E0", Offset = "0x3ACD1E0", VA = "0x3ACD1E0")]
	public static bool InheritsGenericDefinition(Type type, Type genericClassDefinition, out Type? implementingType)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x3ACD310", Offset = "0x3ACD310", VA = "0x3ACD310")]
	private static bool InheritsGenericDefinitionInternal(Type type, Type genericClassDefinition, out Type? implementingType)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x3ACD400", Offset = "0x3ACD400", VA = "0x3ACD400")]
	public static Type GetCollectionItemType(Type type)
	{
		return null;
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x3ACD610", Offset = "0x3ACD610", VA = "0x3ACD610")]
	public static void GetDictionaryKeyValueTypes(Type dictionaryType, out Type? keyType, out Type? valueType)
	{
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x3ACC110", Offset = "0x3ACC110", VA = "0x3ACC110")]
	public static Type GetMemberUnderlyingType(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x3ACD850", Offset = "0x3ACD850", VA = "0x3ACD850")]
	public static bool IsByRefLikeType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x3ACDE40", Offset = "0x3ACDE40", VA = "0x3ACDE40")]
	public static bool IsIndexedProperty(PropertyInfo property)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x3ACDEA0", Offset = "0x3ACDEA0", VA = "0x3ACDEA0")]
	public static object GetMemberValue(MemberInfo member, object target)
	{
		return null;
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x3ACE220", Offset = "0x3ACE220", VA = "0x3ACE220")]
	public static void SetMemberValue(MemberInfo member, object target, object? value)
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x3ACBE40", Offset = "0x3ACBE40", VA = "0x3ACBE40")]
	public static bool CanReadMemberValue(MemberInfo member, bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x3ACBF70", Offset = "0x3ACBF70", VA = "0x3ACBF70")]
	public static bool CanSetMemberValue(MemberInfo member, bool nonPublic, bool canSetReadOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x3ACE430", Offset = "0x3ACE430", VA = "0x3ACE430")]
	public static List<MemberInfo> GetFieldsAndProperties(Type type, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x3ACF4F0", Offset = "0x3ACF4F0", VA = "0x3ACF4F0")]
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
	[Address(RVA = "0x3ACD940", Offset = "0x3ACD940", VA = "0x3ACD940")]
	public static Attribute[] GetAttributes(object attributeProvider, Type? attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x3ACF6E0", Offset = "0x3ACF6E0", VA = "0x3ACF6E0")]
	public static StructMultiKey<string, string> SplitFullyQualifiedTypeName(string fullyQualifiedTypeName)
	{
		return default(StructMultiKey<string, string>);
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x3ACF8A0", Offset = "0x3ACF8A0", VA = "0x3ACF8A0")]
	private static int? GetAssemblyDelimiterIndex(string fullyQualifiedTypeName)
	{
		return null;
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x3ACF970", Offset = "0x3ACF970", VA = "0x3ACF970")]
	public static MemberInfo GetMemberInfoFromType(Type targetType, MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x3ACF0E0", Offset = "0x3ACF0E0", VA = "0x3ACF0E0")]
	public static IEnumerable<FieldInfo> GetFields(Type targetType, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x3ACFC10", Offset = "0x3ACFC10", VA = "0x3ACFC10")]
	private static void GetChildPrivateFields(IList<MemberInfo> initialFields, Type type, BindingFlags bindingAttr)
	{
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x3ACF1E0", Offset = "0x3ACF1E0", VA = "0x3ACF1E0")]
	public static IEnumerable<PropertyInfo> GetProperties(Type targetType, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x3ACFE10", Offset = "0x3ACFE10", VA = "0x3ACFE10")]
	public static BindingFlags RemoveFlag(this BindingFlags bindingAttr, BindingFlags flag)
	{
		return default(BindingFlags);
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x3ACFE20", Offset = "0x3ACFE20", VA = "0x3ACFE20")]
	private static void GetChildPrivateProperties(IList<PropertyInfo> initialProperties, Type type, BindingFlags bindingAttr)
	{
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x3AD0490", Offset = "0x3AD0490", VA = "0x3AD0490")]
	public static bool IsMethodOverridden(Type currentType, Type methodDeclaringType, string method)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x3AD05A0", Offset = "0x3AD05A0", VA = "0x3AD05A0")]
	public static object GetDefaultValue(Type type)
	{
		return null;
	}
}
