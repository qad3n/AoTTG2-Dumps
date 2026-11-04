// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.TypeData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000112")]
internal class TypeData
{
	[Token(Token = "0x4000615")]
	[FieldOffset(Offset = "0x10")]
	private Type type;

	[Token(Token = "0x4000616")]
	[FieldOffset(Offset = "0x18")]
	private string elementName;

	[Token(Token = "0x4000617")]
	[FieldOffset(Offset = "0x20")]
	private SchemaTypes sType;

	[Token(Token = "0x4000618")]
	[FieldOffset(Offset = "0x28")]
	private Type listItemType;

	[Token(Token = "0x4000619")]
	[FieldOffset(Offset = "0x30")]
	private string typeName;

	[Token(Token = "0x400061A")]
	[FieldOffset(Offset = "0x38")]
	private string fullTypeName;

	[Token(Token = "0x400061B")]
	[FieldOffset(Offset = "0x40")]
	private TypeData listItemTypeData;

	[Token(Token = "0x400061C")]
	[FieldOffset(Offset = "0x48")]
	private TypeData mappedType;

	[Token(Token = "0x400061D")]
	[FieldOffset(Offset = "0x50")]
	private XmlSchemaPatternFacet facet;

	[Token(Token = "0x400061E")]
	[FieldOffset(Offset = "0x58")]
	private MethodInfo typeConvertor;

	[Token(Token = "0x400061F")]
	[FieldOffset(Offset = "0x60")]
	private bool hasPublicConstructor;

	[Token(Token = "0x4000620")]
	[FieldOffset(Offset = "0x61")]
	private bool nullableOverride;

	[Token(Token = "0x4000621")]
	[FieldOffset(Offset = "0x0")]
	private static string[] keywords;

	[Token(Token = "0x17000335")]
	public string TypeName
	{
		[Token(Token = "0x6000CE0")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000336")]
	public string XmlType
	{
		[Token(Token = "0x6000CE1")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000337")]
	public Type Type
	{
		[Token(Token = "0x6000CE2")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000338")]
	public string FullTypeName
	{
		[Token(Token = "0x6000CE3")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000339")]
	public SchemaTypes SchemaType
	{
		[Token(Token = "0x6000CE4")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(SchemaTypes);
		}
	}

	[Token(Token = "0x1700033A")]
	public bool IsListType
	{
		[Token(Token = "0x6000CE5")]
		[Address(RVA = "0x273F970", Offset = "0x273DF70", VA = "0x18273F970")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700033B")]
	public bool IsComplexType
	{
		[Token(Token = "0x6000CE6")]
		[Address(RVA = "0x273F940", Offset = "0x273DF40", VA = "0x18273F940")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700033C")]
	public bool IsValueType
	{
		[Token(Token = "0x6000CE7")]
		[Address(RVA = "0x273FAE0", Offset = "0x273E0E0", VA = "0x18273FAE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700033D")]
	public bool IsNullable
	{
		[Token(Token = "0x6000CE8")]
		[Address(RVA = "0x273F980", Offset = "0x273DF80", VA = "0x18273F980")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000CE9")]
		[Address(RVA = "0x1ADFEC0", Offset = "0x1ADE4C0", VA = "0x181ADFEC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700033E")]
	public TypeData ListItemTypeData
	{
		[Token(Token = "0x6000CEA")]
		[Address(RVA = "0x273FB70", Offset = "0x273E170", VA = "0x18273FB70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700033F")]
	public Type ListItemType
	{
		[Token(Token = "0x6000CEB")]
		[Address(RVA = "0x273FC60", Offset = "0x273E260", VA = "0x18273FC60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000340")]
	public bool IsXsdType
	{
		[Token(Token = "0x6000CEC")]
		[Address(RVA = "0x273FB60", Offset = "0x273E160", VA = "0x18273FB60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000341")]
	public bool HasPublicConstructor
	{
		[Token(Token = "0x6000CED")]
		[Address(RVA = "0x198C740", Offset = "0x198AD40", VA = "0x18198C740")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x273F920", Offset = "0x273DF20", VA = "0x18273F920")]
	public TypeData(Type type, string elementName, bool isPrimitive)
	{
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x273F400", Offset = "0x273DA00", VA = "0x18273F400")]
	public TypeData(Type type, string elementName, bool isPrimitive, TypeData mappedType, XmlSchemaPatternFacet facet)
	{
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x273E410", Offset = "0x273CA10", VA = "0x18273E410")]
	private void LookupTypeConvertor()
	{
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x273DF30", Offset = "0x273C530", VA = "0x18273DF30")]
	internal void ConvertForAssignment(ref object value)
	{
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x273E300", Offset = "0x273C900", VA = "0x18273E300")]
	public static PropertyInfo GetIndexerProperty(Type collectionType)
	{
		return null;
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x273E020", Offset = "0x273C620", VA = "0x18273E020")]
	private static InvalidOperationException CreateMissingAddMethodException(Type type, string inheritFrom, Type argumentType)
	{
		return null;
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x273E110", Offset = "0x273C710", VA = "0x18273E110")]
	internal static Type GetGenericListItemType(Type type)
	{
		return null;
	}
}
