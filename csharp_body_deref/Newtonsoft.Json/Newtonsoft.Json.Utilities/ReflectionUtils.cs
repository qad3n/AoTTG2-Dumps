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
	[Address(RVA = "0x3DC1EF0", Offset = "0x3DC1EF0", VA = "0x3DC1EF0")]
	static ReflectionUtils()
	{
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x3DC1F60", Offset = "0x3DC1F60", VA = "0x3DC1F60")]
	public static bool IsVirtual(this PropertyInfo propertyInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x3DC2040", Offset = "0x3DC2040", VA = "0x3DC2040")]
	public static MethodInfo GetBaseDefinition(this PropertyInfo propertyInfo)
	{
		return null;
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x3DC2120", Offset = "0x3DC2120", VA = "0x3DC2120")]
	public static bool IsPublic(PropertyInfo property)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x3DAF300", Offset = "0x3DAF300", VA = "0x3DAF300")]
	public static Type? GetObjectType(object? v)
	{
		return null;
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x3DC21A0", Offset = "0x3DC21A0", VA = "0x3DC21A0")]
	public static string GetTypeName(Type t, TypeNameAssemblyFormatHandling assemblyFormat, ISerializationBinder? binder)
	{
		return null;
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x3DC2270", Offset = "0x3DC2270", VA = "0x3DC2270")]
	private static string GetFullyQualifiedTypeName(Type t, ISerializationBinder? binder)
	{
		return null;
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x3DC23B0", Offset = "0x3DC23B0", VA = "0x3DC23B0")]
	private static string RemoveAssemblyDetails(string fullyQualifiedTypeName)
	{
		return null;
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x3DC16C0", Offset = "0x3DC16C0", VA = "0x3DC16C0")]
	public static bool HasDefaultConstructor(Type t, bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x3DC26A0", Offset = "0x3DC26A0", VA = "0x3DC26A0")]
	public static ConstructorInfo GetDefaultConstructor(Type t)
	{
		return null;
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x3DC2560", Offset = "0x3DC2560", VA = "0x3DC2560")]
	public static ConstructorInfo GetDefaultConstructor(Type t, bool nonPublic)
	{
		return null;
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x3DAEE30", Offset = "0x3DAEE30", VA = "0x3DAEE30")]
	public static bool IsNullable(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x3DAD0E0", Offset = "0x3DAD0E0", VA = "0x3DAD0E0")]
	public static bool IsNullableType(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x3DC2710", Offset = "0x3DC2710", VA = "0x3DC2710")]
	public static Type EnsureNotNullableType(Type t)
	{
		return null;
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x3DC2790", Offset = "0x3DC2790", VA = "0x3DC2790")]
	public static Type EnsureNotByRefType(Type t)
	{
		return null;
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x3DC27E0", Offset = "0x3DC27E0", VA = "0x3DC27E0")]
	public static bool IsGenericDefinition(Type type, Type genericInterfaceDefinition)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x3DABEB0", Offset = "0x3DABEB0", VA = "0x3DABEB0")]
	public static bool ImplementsGenericDefinition(Type type, Type genericInterfaceDefinition)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x3DC2850", Offset = "0x3DC2850", VA = "0x3DC2850")]
	public static bool ImplementsGenericDefinition(Type type, Type genericInterfaceDefinition, [NotNullWhen(true)] out Type? implementingType)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x3DC2AD0", Offset = "0x3DC2AD0", VA = "0x3DC2AD0")]
	public static bool InheritsGenericDefinition(Type type, Type genericClassDefinition)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x3DC2B30", Offset = "0x3DC2B30", VA = "0x3DC2B30")]
	public static bool InheritsGenericDefinition(Type type, Type genericClassDefinition, out Type? implementingType)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x3DC2C60", Offset = "0x3DC2C60", VA = "0x3DC2C60")]
	private static bool InheritsGenericDefinitionInternal(Type type, Type genericClassDefinition, out Type? implementingType)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x3DC2D50", Offset = "0x3DC2D50", VA = "0x3DC2D50")]
	public static Type GetCollectionItemType(Type type)
	{
		return null;
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x3DC2F60", Offset = "0x3DC2F60", VA = "0x3DC2F60")]
	public static void GetDictionaryKeyValueTypes(Type dictionaryType, out Type? keyType, out Type? valueType)
	{
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x3DC1A60", Offset = "0x3DC1A60", VA = "0x3DC1A60")]
	public static Type GetMemberUnderlyingType(MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x3DC31A0", Offset = "0x3DC31A0", VA = "0x3DC31A0")]
	public static bool IsByRefLikeType(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x3DC3790", Offset = "0x3DC3790", VA = "0x3DC3790")]
	public static bool IsIndexedProperty(PropertyInfo property)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x3DC37F0", Offset = "0x3DC37F0", VA = "0x3DC37F0")]
	public static object GetMemberValue(MemberInfo member, object target)
	{
		return null;
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x3DC3B70", Offset = "0x3DC3B70", VA = "0x3DC3B70")]
	public static void SetMemberValue(MemberInfo member, object target, object? value)
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x3DC1790", Offset = "0x3DC1790", VA = "0x3DC1790")]
	public static bool CanReadMemberValue(MemberInfo member, bool nonPublic)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x3DC18C0", Offset = "0x3DC18C0", VA = "0x3DC18C0")]
	public static bool CanSetMemberValue(MemberInfo member, bool nonPublic, bool canSetReadOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x3DC3D80", Offset = "0x3DC3D80", VA = "0x3DC3D80")]
	public static List<MemberInfo> GetFieldsAndProperties(Type type, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x3DC4E40", Offset = "0x3DC4E40", VA = "0x3DC4E40")]
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
	[Address(RVA = "0x3DC3290", Offset = "0x3DC3290", VA = "0x3DC3290")]
	public static Attribute[] GetAttributes(object attributeProvider, Type? attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x3DC5030", Offset = "0x3DC5030", VA = "0x3DC5030")]
	public static StructMultiKey<string, string> SplitFullyQualifiedTypeName(string fullyQualifiedTypeName)
	{
		return default(StructMultiKey<string, string>);
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x3DC51F0", Offset = "0x3DC51F0", VA = "0x3DC51F0")]
	private static int? GetAssemblyDelimiterIndex(string fullyQualifiedTypeName)
	{
		return null;
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x3DC52C0", Offset = "0x3DC52C0", VA = "0x3DC52C0")]
	public static MemberInfo GetMemberInfoFromType(Type targetType, MemberInfo memberInfo)
	{
		return null;
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x3DC4A30", Offset = "0x3DC4A30", VA = "0x3DC4A30")]
	public static IEnumerable<FieldInfo> GetFields(Type targetType, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x3DC5560", Offset = "0x3DC5560", VA = "0x3DC5560")]
	private static void GetChildPrivateFields(IList<MemberInfo> initialFields, Type type, BindingFlags bindingAttr)
	{
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x3DC4B30", Offset = "0x3DC4B30", VA = "0x3DC4B30")]
	public static IEnumerable<PropertyInfo> GetProperties(Type targetType, BindingFlags bindingAttr)
	{
		return null;
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x3DC5760", Offset = "0x3DC5760", VA = "0x3DC5760")]
	public static BindingFlags RemoveFlag(this BindingFlags bindingAttr, BindingFlags flag)
	{
		return default(BindingFlags);
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x3DC5770", Offset = "0x3DC5770", VA = "0x3DC5770")]
	private static void GetChildPrivateProperties(IList<PropertyInfo> initialProperties, Type type, BindingFlags bindingAttr)
	{
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x3DC5DE0", Offset = "0x3DC5DE0", VA = "0x3DC5DE0")]
	public static bool IsMethodOverridden(Type currentType, Type methodDeclaringType, string method)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x3DC5EF0", Offset = "0x3DC5EF0", VA = "0x3DC5EF0")]
	public static object GetDefaultValue(Type type)
	{
		return null;
	}
}
