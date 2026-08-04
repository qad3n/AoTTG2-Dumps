// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.SchemaInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x46EA420", Offset = "0x46EA420", VA = "0x46EA420")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013C4")]
		[Address(RVA = "0x46EA430", Offset = "0x46EA430", VA = "0x46EA430")]
		set
		{
		}
	}

	[Token(Token = "0x17000557")]
	internal string InternalDtdSubset
	{
		[Token(Token = "0x60013C5")]
		[Address(RVA = "0x46EA440", Offset = "0x46EA440", VA = "0x46EA440")]
		set
		{
		}
	}

	[Token(Token = "0x17000558")]
	internal Dictionary<XmlQualifiedName, SchemaElementDecl> ElementDecls
	{
		[Token(Token = "0x60013C6")]
		[Address(RVA = "0x46EA450", Offset = "0x46EA450", VA = "0x46EA450")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000559")]
	internal Dictionary<XmlQualifiedName, SchemaElementDecl> UndeclaredElementDecls
	{
		[Token(Token = "0x60013C7")]
		[Address(RVA = "0x46EA460", Offset = "0x46EA460", VA = "0x46EA460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055A")]
	internal Dictionary<XmlQualifiedName, SchemaEntity> GeneralEntities
	{
		[Token(Token = "0x60013C8")]
		[Address(RVA = "0x46EA470", Offset = "0x46EA470", VA = "0x46EA470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055B")]
	internal Dictionary<XmlQualifiedName, SchemaEntity> ParameterEntities
	{
		[Token(Token = "0x60013C9")]
		[Address(RVA = "0x46EA500", Offset = "0x46EA500", VA = "0x46EA500")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055C")]
	internal SchemaType SchemaType
	{
		[Token(Token = "0x60013CA")]
		[Address(RVA = "0x46EA590", Offset = "0x46EA590", VA = "0x46EA590")]
		get
		{
			return default(SchemaType);
		}
		[Token(Token = "0x60013CB")]
		[Address(RVA = "0x46EA5A0", Offset = "0x46EA5A0", VA = "0x46EA5A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700055D")]
	internal Dictionary<string, bool> TargetNamespaces
	{
		[Token(Token = "0x60013CC")]
		[Address(RVA = "0x46EA5B0", Offset = "0x46EA5B0", VA = "0x46EA5B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055E")]
	internal Dictionary<XmlQualifiedName, SchemaElementDecl> ElementDeclsByType
	{
		[Token(Token = "0x60013CD")]
		[Address(RVA = "0x46EA5C0", Offset = "0x46EA5C0", VA = "0x46EA5C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055F")]
	internal Dictionary<XmlQualifiedName, SchemaAttDef> AttributeDecls
	{
		[Token(Token = "0x60013CE")]
		[Address(RVA = "0x46EA5D0", Offset = "0x46EA5D0", VA = "0x46EA5D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000560")]
	internal Dictionary<string, SchemaNotation> Notations
	{
		[Token(Token = "0x60013CF")]
		[Address(RVA = "0x46EA5E0", Offset = "0x46EA5E0", VA = "0x46EA5E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000561")]
	internal int ErrorCount
	{
		[Token(Token = "0x60013D0")]
		[Address(RVA = "0x46EA670", Offset = "0x46EA670", VA = "0x46EA670")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60013D1")]
		[Address(RVA = "0x46EA680", Offset = "0x46EA680", VA = "0x46EA680")]
		set
		{
		}
	}

	[Token(Token = "0x17000562")]
	private bool System_002EXml_002EIDtdInfo_002EHasDefaultAttributes
	{
		[Token(Token = "0x60013DC")]
		[Address(RVA = "0x46EBCF0", Offset = "0x46EBCF0", VA = "0x46EBCF0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000563")]
	private bool System_002EXml_002EIDtdInfo_002EHasNonCDataAttributes
	{
		[Token(Token = "0x60013DD")]
		[Address(RVA = "0x46EBD00", Offset = "0x46EBD00", VA = "0x46EBD00", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000564")]
	private XmlQualifiedName System_002EXml_002EIDtdInfo_002EName
	{
		[Token(Token = "0x60013E0")]
		[Address(RVA = "0x46EBE80", Offset = "0x46EBE80", VA = "0x46EBE80", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000565")]
	private string System_002EXml_002EIDtdInfo_002EInternalDtdSubset
	{
		[Token(Token = "0x60013E1")]
		[Address(RVA = "0x46EBE90", Offset = "0x46EBE90", VA = "0x46EBE90", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013C2")]
	[Address(RVA = "0x46EA250", Offset = "0x46EA250", VA = "0x46EA250")]
	internal SchemaInfo()
	{
	}

	[Token(Token = "0x60013D2")]
	[Address(RVA = "0x46EA690", Offset = "0x46EA690", VA = "0x46EA690")]
	internal SchemaElementDecl GetElementDecl(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60013D3")]
	[Address(RVA = "0x46EA700", Offset = "0x46EA700", VA = "0x46EA700")]
	internal SchemaElementDecl GetTypeDecl(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60013D4")]
	[Address(RVA = "0x46EA770", Offset = "0x46EA770", VA = "0x46EA770")]
	internal XmlSchemaElement GetElement(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60013D5")]
	[Address(RVA = "0x46EA7F0", Offset = "0x46EA7F0", VA = "0x46EA7F0")]
	internal bool HasSchema(string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D6")]
	[Address(RVA = "0x46EA840", Offset = "0x46EA840", VA = "0x46EA840")]
	internal bool Contains(string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D7")]
	[Address(RVA = "0x46EA890", Offset = "0x46EA890", VA = "0x46EA890")]
	internal SchemaAttDef GetAttributeXdr(SchemaElementDecl ed, XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60013D8")]
	[Address(RVA = "0x46EAA30", Offset = "0x46EAA30", VA = "0x46EAA30")]
	internal SchemaAttDef GetAttributeXsd(SchemaElementDecl ed, XmlQualifiedName qname, XmlSchemaObject partialValidationType, out AttributeMatchState attributeMatchState)
	{
		return null;
	}

	[Token(Token = "0x60013D9")]
	[Address(RVA = "0x46EACE0", Offset = "0x46EACE0", VA = "0x46EACE0")]
	internal SchemaAttDef GetAttributeXsd(SchemaElementDecl ed, XmlQualifiedName qname, ref bool skip)
	{
		return null;
	}

	[Token(Token = "0x60013DA")]
	[Address(RVA = "0x46EADD0", Offset = "0x46EADD0", VA = "0x46EADD0")]
	internal void Add(SchemaInfo sinfo, ValidationEventHandler eventhandler)
	{
	}

	[Token(Token = "0x60013DB")]
	[Address(RVA = "0x46EBA60", Offset = "0x46EBA60", VA = "0x46EBA60")]
	internal void Finish()
	{
	}

	[Token(Token = "0x60013DE")]
	[Address(RVA = "0x46EBD10", Offset = "0x46EBD10", VA = "0x46EBD10", Slot = "8")]
	private IDtdAttributeListInfo System_002EXml_002EIDtdInfo_002ELookupAttributeList(string prefix, string localName)
	{
		return null;
	}

	[Token(Token = "0x60013DF")]
	[Address(RVA = "0x46EBDD0", Offset = "0x46EBDD0", VA = "0x46EBDD0", Slot = "9")]
	private IDtdEntityInfo System_002EXml_002EIDtdInfo_002ELookupEntity(string name)
	{
		return null;
	}
}
