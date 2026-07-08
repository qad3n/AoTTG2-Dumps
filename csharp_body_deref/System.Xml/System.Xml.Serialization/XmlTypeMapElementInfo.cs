using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000147")]
internal class XmlTypeMapElementInfo
{
	[Token(Token = "0x40006CF")]
	[FieldOffset(Offset = "0x10")]
	private string _elementName;

	[Token(Token = "0x40006D0")]
	[FieldOffset(Offset = "0x18")]
	private string _namespace;

	[Token(Token = "0x40006D1")]
	[FieldOffset(Offset = "0x20")]
	private XmlSchemaForm _form;

	[Token(Token = "0x40006D2")]
	[FieldOffset(Offset = "0x28")]
	private XmlTypeMapMember _member;

	[Token(Token = "0x40006D3")]
	[FieldOffset(Offset = "0x30")]
	private object _choiceValue;

	[Token(Token = "0x40006D4")]
	[FieldOffset(Offset = "0x38")]
	private bool _isNullable;

	[Token(Token = "0x40006D5")]
	[FieldOffset(Offset = "0x3C")]
	private int _nestingLevel;

	[Token(Token = "0x40006D6")]
	[FieldOffset(Offset = "0x40")]
	private XmlTypeMapping _mappedType;

	[Token(Token = "0x40006D7")]
	[FieldOffset(Offset = "0x48")]
	private TypeData _type;

	[Token(Token = "0x40006D8")]
	[FieldOffset(Offset = "0x50")]
	private bool _wrappedElement;

	[Token(Token = "0x40006D9")]
	[FieldOffset(Offset = "0x54")]
	private int _explicitOrder;

	[Token(Token = "0x1700039D")]
	public TypeData TypeData
	{
		[Token(Token = "0x6000E80")]
		[Address(RVA = "0x44FA5D0", Offset = "0x44FA5D0", VA = "0x44FA5D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700039E")]
	public object ChoiceValue
	{
		[Token(Token = "0x6000E81")]
		[Address(RVA = "0x44FA5E0", Offset = "0x44FA5E0", VA = "0x44FA5E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E82")]
		[Address(RVA = "0x44FA5F0", Offset = "0x44FA5F0", VA = "0x44FA5F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700039F")]
	public string ElementName
	{
		[Token(Token = "0x6000E83")]
		[Address(RVA = "0x44FA600", Offset = "0x44FA600", VA = "0x44FA600")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E84")]
		[Address(RVA = "0x44FA610", Offset = "0x44FA610", VA = "0x44FA610")]
		set
		{
		}
	}

	[Token(Token = "0x170003A0")]
	public string Namespace
	{
		[Token(Token = "0x6000E85")]
		[Address(RVA = "0x44FA620", Offset = "0x44FA620", VA = "0x44FA620")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E86")]
		[Address(RVA = "0x44FA630", Offset = "0x44FA630", VA = "0x44FA630")]
		set
		{
		}
	}

	[Token(Token = "0x170003A1")]
	public string DataTypeNamespace
	{
		[Token(Token = "0x6000E87")]
		[Address(RVA = "0x44F72A0", Offset = "0x44F72A0", VA = "0x44F72A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A2")]
	public string DataTypeName
	{
		[Token(Token = "0x6000E88")]
		[Address(RVA = "0x44F7270", Offset = "0x44F7270", VA = "0x44F7270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A3")]
	public XmlSchemaForm Form
	{
		[Token(Token = "0x6000E89")]
		[Address(RVA = "0x44FA640", Offset = "0x44FA640", VA = "0x44FA640")]
		get
		{
			return default(XmlSchemaForm);
		}
		[Token(Token = "0x6000E8A")]
		[Address(RVA = "0x44FA650", Offset = "0x44FA650", VA = "0x44FA650")]
		set
		{
		}
	}

	[Token(Token = "0x170003A4")]
	public XmlTypeMapping MappedType
	{
		[Token(Token = "0x6000E8B")]
		[Address(RVA = "0x44FA660", Offset = "0x44FA660", VA = "0x44FA660")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E8C")]
		[Address(RVA = "0x44FA670", Offset = "0x44FA670", VA = "0x44FA670")]
		set
		{
		}
	}

	[Token(Token = "0x170003A5")]
	public bool IsNullable
	{
		[Token(Token = "0x6000E8D")]
		[Address(RVA = "0x44FA680", Offset = "0x44FA680", VA = "0x44FA680")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000E8E")]
		[Address(RVA = "0x44FA690", Offset = "0x44FA690", VA = "0x44FA690")]
		set
		{
		}
	}

	[Token(Token = "0x170003A6")]
	public XmlTypeMapMember Member
	{
		[Token(Token = "0x6000E8F")]
		[Address(RVA = "0x44FA6A0", Offset = "0x44FA6A0", VA = "0x44FA6A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A7")]
	public int NestingLevel
	{
		[Token(Token = "0x6000E90")]
		[Address(RVA = "0x44FA6B0", Offset = "0x44FA6B0", VA = "0x44FA6B0")]
		set
		{
		}
	}

	[Token(Token = "0x170003A8")]
	public bool MultiReferenceType
	{
		[Token(Token = "0x6000E91")]
		[Address(RVA = "0x44FA6C0", Offset = "0x44FA6C0", VA = "0x44FA6C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A9")]
	public bool WrappedElement
	{
		[Token(Token = "0x6000E92")]
		[Address(RVA = "0x44FA6E0", Offset = "0x44FA6E0", VA = "0x44FA6E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000E93")]
		[Address(RVA = "0x44FA6F0", Offset = "0x44FA6F0", VA = "0x44FA6F0")]
		set
		{
		}
	}

	[Token(Token = "0x170003AA")]
	public bool IsTextElement
	{
		[Token(Token = "0x6000E94")]
		[Address(RVA = "0x44FA700", Offset = "0x44FA700", VA = "0x44FA700")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000E95")]
		[Address(RVA = "0x44FA740", Offset = "0x44FA740", VA = "0x44FA740")]
		set
		{
		}
	}

	[Token(Token = "0x170003AB")]
	public bool IsUnnamedAnyElement
	{
		[Token(Token = "0x6000E96")]
		[Address(RVA = "0x44FA800", Offset = "0x44FA800", VA = "0x44FA800")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000E97")]
		[Address(RVA = "0x44FA830", Offset = "0x44FA830", VA = "0x44FA830")]
		set
		{
		}
	}

	[Token(Token = "0x170003AC")]
	public int ExplicitOrder
	{
		[Token(Token = "0x6000E98")]
		[Address(RVA = "0x44FA8D0", Offset = "0x44FA8D0", VA = "0x44FA8D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000E99")]
		[Address(RVA = "0x44FA8E0", Offset = "0x44FA8E0", VA = "0x44FA8E0")]
		set
		{
		}
	}

	[Token(Token = "0x6000E7F")]
	[Address(RVA = "0x44FA520", Offset = "0x44FA520", VA = "0x44FA520")]
	public XmlTypeMapElementInfo(XmlTypeMapMember member, TypeData type)
	{
	}

	[Token(Token = "0x6000E9A")]
	[Address(RVA = "0x44FA8F0", Offset = "0x44FA8F0", VA = "0x44FA8F0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E9B")]
	[Address(RVA = "0x44FAA20", Offset = "0x44FAA20", VA = "0x44FAA20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
