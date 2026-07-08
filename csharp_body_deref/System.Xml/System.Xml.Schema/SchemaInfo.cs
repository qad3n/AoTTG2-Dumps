using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001F1")]
internal class SchemaInfo : IDtdInfo
{
	[Token(Token = "0x4000936")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<XmlQualifiedName, SchemaElementDecl> elementDecls;

	[Token(Token = "0x4000937")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<XmlQualifiedName, SchemaElementDecl> undeclaredElementDecls;

	[Token(Token = "0x4000938")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<XmlQualifiedName, SchemaEntity> generalEntities;

	[Token(Token = "0x4000939")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<XmlQualifiedName, SchemaEntity> parameterEntities;

	[Token(Token = "0x400093A")]
	[FieldOffset(Offset = "0x30")]
	private XmlQualifiedName docTypeName;

	[Token(Token = "0x400093B")]
	[FieldOffset(Offset = "0x38")]
	private string internalDtdSubset;

	[Token(Token = "0x400093C")]
	[FieldOffset(Offset = "0x40")]
	private bool hasNonCDataAttributes;

	[Token(Token = "0x400093D")]
	[FieldOffset(Offset = "0x41")]
	private bool hasDefaultAttributes;

	[Token(Token = "0x400093E")]
	[FieldOffset(Offset = "0x48")]
	private Dictionary<string, bool> targetNamespaces;

	[Token(Token = "0x400093F")]
	[FieldOffset(Offset = "0x50")]
	private Dictionary<XmlQualifiedName, SchemaAttDef> attributeDecls;

	[Token(Token = "0x4000940")]
	[FieldOffset(Offset = "0x58")]
	private int errorCount;

	[Token(Token = "0x4000941")]
	[FieldOffset(Offset = "0x5C")]
	private SchemaType schemaType;

	[Token(Token = "0x4000942")]
	[FieldOffset(Offset = "0x60")]
	private Dictionary<XmlQualifiedName, SchemaElementDecl> elementDeclsByType;

	[Token(Token = "0x4000943")]
	[FieldOffset(Offset = "0x68")]
	private Dictionary<string, SchemaNotation> notations;

	[Token(Token = "0x17000556")]
	public XmlQualifiedName DocTypeName
	{
		[Token(Token = "0x60013C3")]
		[Address(RVA = "0x43ACCC0", Offset = "0x43ACCC0", VA = "0x43ACCC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013C4")]
		[Address(RVA = "0x43ACCD0", Offset = "0x43ACCD0", VA = "0x43ACCD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000557")]
	internal string InternalDtdSubset
	{
		[Token(Token = "0x60013C5")]
		[Address(RVA = "0x43ACCE0", Offset = "0x43ACCE0", VA = "0x43ACCE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000558")]
	internal Dictionary<XmlQualifiedName, SchemaElementDecl> ElementDecls
	{
		[Token(Token = "0x60013C6")]
		[Address(RVA = "0x43ACCF0", Offset = "0x43ACCF0", VA = "0x43ACCF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000559")]
	internal Dictionary<XmlQualifiedName, SchemaElementDecl> UndeclaredElementDecls
	{
		[Token(Token = "0x60013C7")]
		[Address(RVA = "0x43ACD00", Offset = "0x43ACD00", VA = "0x43ACD00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055A")]
	internal Dictionary<XmlQualifiedName, SchemaEntity> GeneralEntities
	{
		[Token(Token = "0x60013C8")]
		[Address(RVA = "0x43ACD10", Offset = "0x43ACD10", VA = "0x43ACD10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055B")]
	internal Dictionary<XmlQualifiedName, SchemaEntity> ParameterEntities
	{
		[Token(Token = "0x60013C9")]
		[Address(RVA = "0x43ACDA0", Offset = "0x43ACDA0", VA = "0x43ACDA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055C")]
	internal SchemaType SchemaType
	{
		[Token(Token = "0x60013CA")]
		[Address(RVA = "0x43ACE30", Offset = "0x43ACE30", VA = "0x43ACE30")]
		get
		{
			return default(SchemaType);
		}
		[Token(Token = "0x60013CB")]
		[Address(RVA = "0x43ACE40", Offset = "0x43ACE40", VA = "0x43ACE40")]
		set
		{
		}
	}

	[Token(Token = "0x1700055D")]
	internal Dictionary<string, bool> TargetNamespaces
	{
		[Token(Token = "0x60013CC")]
		[Address(RVA = "0x43ACE50", Offset = "0x43ACE50", VA = "0x43ACE50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055E")]
	internal Dictionary<XmlQualifiedName, SchemaElementDecl> ElementDeclsByType
	{
		[Token(Token = "0x60013CD")]
		[Address(RVA = "0x43ACE60", Offset = "0x43ACE60", VA = "0x43ACE60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055F")]
	internal Dictionary<XmlQualifiedName, SchemaAttDef> AttributeDecls
	{
		[Token(Token = "0x60013CE")]
		[Address(RVA = "0x43ACE70", Offset = "0x43ACE70", VA = "0x43ACE70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000560")]
	internal Dictionary<string, SchemaNotation> Notations
	{
		[Token(Token = "0x60013CF")]
		[Address(RVA = "0x43ACE80", Offset = "0x43ACE80", VA = "0x43ACE80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000561")]
	internal int ErrorCount
	{
		[Token(Token = "0x60013D0")]
		[Address(RVA = "0x43ACF10", Offset = "0x43ACF10", VA = "0x43ACF10")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60013D1")]
		[Address(RVA = "0x43ACF20", Offset = "0x43ACF20", VA = "0x43ACF20")]
		set
		{
		}
	}

	[Token(Token = "0x17000562")]
	private bool System_002EXml_002EIDtdInfo_002EHasDefaultAttributes
	{
		[Token(Token = "0x60013DC")]
		[Address(RVA = "0x43AE590", Offset = "0x43AE590", VA = "0x43AE590", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000563")]
	private bool System_002EXml_002EIDtdInfo_002EHasNonCDataAttributes
	{
		[Token(Token = "0x60013DD")]
		[Address(RVA = "0x43AE5A0", Offset = "0x43AE5A0", VA = "0x43AE5A0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000564")]
	private XmlQualifiedName System_002EXml_002EIDtdInfo_002EName
	{
		[Token(Token = "0x60013E0")]
		[Address(RVA = "0x43AE720", Offset = "0x43AE720", VA = "0x43AE720", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000565")]
	private string System_002EXml_002EIDtdInfo_002EInternalDtdSubset
	{
		[Token(Token = "0x60013E1")]
		[Address(RVA = "0x43AE730", Offset = "0x43AE730", VA = "0x43AE730", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013C2")]
	[Address(RVA = "0x43ACAF0", Offset = "0x43ACAF0", VA = "0x43ACAF0")]
	internal SchemaInfo()
	{
	}

	[Token(Token = "0x60013D2")]
	[Address(RVA = "0x43ACF30", Offset = "0x43ACF30", VA = "0x43ACF30")]
	internal SchemaElementDecl GetElementDecl(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60013D3")]
	[Address(RVA = "0x43ACFA0", Offset = "0x43ACFA0", VA = "0x43ACFA0")]
	internal SchemaElementDecl GetTypeDecl(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60013D4")]
	[Address(RVA = "0x43AD010", Offset = "0x43AD010", VA = "0x43AD010")]
	internal XmlSchemaElement GetElement(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60013D5")]
	[Address(RVA = "0x43AD090", Offset = "0x43AD090", VA = "0x43AD090")]
	internal bool HasSchema(string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D6")]
	[Address(RVA = "0x43AD0E0", Offset = "0x43AD0E0", VA = "0x43AD0E0")]
	internal bool Contains(string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D7")]
	[Address(RVA = "0x43AD130", Offset = "0x43AD130", VA = "0x43AD130")]
	internal SchemaAttDef GetAttributeXdr(SchemaElementDecl ed, XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60013D8")]
	[Address(RVA = "0x43AD2D0", Offset = "0x43AD2D0", VA = "0x43AD2D0")]
	internal SchemaAttDef GetAttributeXsd(SchemaElementDecl ed, XmlQualifiedName qname, XmlSchemaObject partialValidationType, out AttributeMatchState attributeMatchState)
	{
		return null;
	}

	[Token(Token = "0x60013D9")]
	[Address(RVA = "0x43AD580", Offset = "0x43AD580", VA = "0x43AD580")]
	internal SchemaAttDef GetAttributeXsd(SchemaElementDecl ed, XmlQualifiedName qname, ref bool skip)
	{
		return null;
	}

	[Token(Token = "0x60013DA")]
	[Address(RVA = "0x43AD670", Offset = "0x43AD670", VA = "0x43AD670")]
	internal void Add(SchemaInfo sinfo, ValidationEventHandler eventhandler)
	{
	}

	[Token(Token = "0x60013DB")]
	[Address(RVA = "0x43AE300", Offset = "0x43AE300", VA = "0x43AE300")]
	internal void Finish()
	{
	}

	[Token(Token = "0x60013DE")]
	[Address(RVA = "0x43AE5B0", Offset = "0x43AE5B0", VA = "0x43AE5B0", Slot = "8")]
	private IDtdAttributeListInfo System_002EXml_002EIDtdInfo_002ELookupAttributeList(string prefix, string localName)
	{
		return null;
	}

	[Token(Token = "0x60013DF")]
	[Address(RVA = "0x43AE670", Offset = "0x43AE670", VA = "0x43AE670", Slot = "9")]
	private IDtdEntityInfo System_002EXml_002EIDtdInfo_002ELookupEntity(string name)
	{
		return null;
	}
}
