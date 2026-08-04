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
		[Address(RVA = "0x480B050", Offset = "0x480B050", VA = "0x480B050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000336")]
	public string XmlType
	{
		[Token(Token = "0x6000CE1")]
		[Address(RVA = "0x480B060", Offset = "0x480B060", VA = "0x480B060")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000337")]
	public Type Type
	{
		[Token(Token = "0x6000CE2")]
		[Address(RVA = "0x480B070", Offset = "0x480B070", VA = "0x480B070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000338")]
	public string FullTypeName
	{
		[Token(Token = "0x6000CE3")]
		[Address(RVA = "0x480B080", Offset = "0x480B080", VA = "0x480B080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000339")]
	public SchemaTypes SchemaType
	{
		[Token(Token = "0x6000CE4")]
		[Address(RVA = "0x480B090", Offset = "0x480B090", VA = "0x480B090")]
		get
		{
			return default(SchemaTypes);
		}
	}

	[Token(Token = "0x1700033A")]
	public bool IsListType
	{
		[Token(Token = "0x6000CE5")]
		[Address(RVA = "0x480A3D0", Offset = "0x480A3D0", VA = "0x480A3D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700033B")]
	public bool IsComplexType
	{
		[Token(Token = "0x6000CE6")]
		[Address(RVA = "0x480B0A0", Offset = "0x480B0A0", VA = "0x480B0A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700033C")]
	public bool IsValueType
	{
		[Token(Token = "0x6000CE7")]
		[Address(RVA = "0x480B0D0", Offset = "0x480B0D0", VA = "0x480B0D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700033D")]
	public bool IsNullable
	{
		[Token(Token = "0x6000CE8")]
		[Address(RVA = "0x480B140", Offset = "0x480B140", VA = "0x480B140")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000CE9")]
		[Address(RVA = "0x480B2A0", Offset = "0x480B2A0", VA = "0x480B2A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700033E")]
	public TypeData ListItemTypeData
	{
		[Token(Token = "0x6000CEA")]
		[Address(RVA = "0x480ACD0", Offset = "0x480ACD0", VA = "0x480ACD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700033F")]
	public Type ListItemType
	{
		[Token(Token = "0x6000CEB")]
		[Address(RVA = "0x480B2B0", Offset = "0x480B2B0", VA = "0x480B2B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000340")]
	public bool IsXsdType
	{
		[Token(Token = "0x6000CEC")]
		[Address(RVA = "0x480B0C0", Offset = "0x480B0C0", VA = "0x480B0C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000341")]
	public bool HasPublicConstructor
	{
		[Token(Token = "0x6000CED")]
		[Address(RVA = "0x480BE40", Offset = "0x480BE40", VA = "0x480BE40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x480A8A0", Offset = "0x480A8A0", VA = "0x480A8A0")]
	public TypeData(Type type, string elementName, bool isPrimitive)
	{
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x480A8B0", Offset = "0x480A8B0", VA = "0x480A8B0")]
	public TypeData(Type type, string elementName, bool isPrimitive, TypeData mappedType, XmlSchemaPatternFacet facet)
	{
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x480AEB0", Offset = "0x480AEB0", VA = "0x480AEB0")]
	private void LookupTypeConvertor()
	{
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x480AF60", Offset = "0x480AF60", VA = "0x480AF60")]
	internal void ConvertForAssignment(ref object value)
	{
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x480BC00", Offset = "0x480BC00", VA = "0x480BC00")]
	public static PropertyInfo GetIndexerProperty(Type collectionType)
	{
		return null;
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x480BD20", Offset = "0x480BD20", VA = "0x480BD20")]
	private static InvalidOperationException CreateMissingAddMethodException(Type type, string inheritFrom, Type argumentType)
	{
		return null;
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x480BA10", Offset = "0x480BA10", VA = "0x480BA10")]
	internal static Type GetGenericListItemType(Type type)
	{
		return null;
	}
}
