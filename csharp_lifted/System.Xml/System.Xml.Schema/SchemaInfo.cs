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
		[Address(RVA = "0x5FF6880", Offset = "0x5FF5880", VA = "0x5FF6880")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013C4")]
		[Address(RVA = "0x5FF6890", Offset = "0x5FF5890", VA = "0x5FF6890")]
		set
		{
		}
	}

	[Token(Token = "0x17000557")]
	internal string InternalDtdSubset
	{
		[Token(Token = "0x60013C5")]
		[Address(RVA = "0x5FF68A0", Offset = "0x5FF58A0", VA = "0x5FF68A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000558")]
	internal Dictionary<XmlQualifiedName, SchemaElementDecl> ElementDecls
	{
		[Token(Token = "0x60013C6")]
		[Address(RVA = "0x5FF68B0", Offset = "0x5FF58B0", VA = "0x5FF68B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000559")]
	internal Dictionary<XmlQualifiedName, SchemaElementDecl> UndeclaredElementDecls
	{
		[Token(Token = "0x60013C7")]
		[Address(RVA = "0x5FF68C0", Offset = "0x5FF58C0", VA = "0x5FF68C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055A")]
	internal Dictionary<XmlQualifiedName, SchemaEntity> GeneralEntities
	{
		[Token(Token = "0x60013C8")]
		[Address(RVA = "0x5FF68D0", Offset = "0x5FF58D0", VA = "0x5FF68D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055B")]
	internal Dictionary<XmlQualifiedName, SchemaEntity> ParameterEntities
	{
		[Token(Token = "0x60013C9")]
		[Address(RVA = "0x5FF6960", Offset = "0x5FF5960", VA = "0x5FF6960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055C")]
	internal SchemaType SchemaType
	{
		[Token(Token = "0x60013CA")]
		[Address(RVA = "0x5FF69F0", Offset = "0x5FF59F0", VA = "0x5FF69F0")]
		get
		{
			return default(SchemaType);
		}
		[Token(Token = "0x60013CB")]
		[Address(RVA = "0x5FF6A00", Offset = "0x5FF5A00", VA = "0x5FF6A00")]
		set
		{
		}
	}

	[Token(Token = "0x1700055D")]
	internal Dictionary<string, bool> TargetNamespaces
	{
		[Token(Token = "0x60013CC")]
		[Address(RVA = "0x5FF6A10", Offset = "0x5FF5A10", VA = "0x5FF6A10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055E")]
	internal Dictionary<XmlQualifiedName, SchemaElementDecl> ElementDeclsByType
	{
		[Token(Token = "0x60013CD")]
		[Address(RVA = "0x5FF6A20", Offset = "0x5FF5A20", VA = "0x5FF6A20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055F")]
	internal Dictionary<XmlQualifiedName, SchemaAttDef> AttributeDecls
	{
		[Token(Token = "0x60013CE")]
		[Address(RVA = "0x5FF6A30", Offset = "0x5FF5A30", VA = "0x5FF6A30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000560")]
	internal Dictionary<string, SchemaNotation> Notations
	{
		[Token(Token = "0x60013CF")]
		[Address(RVA = "0x5FF6A40", Offset = "0x5FF5A40", VA = "0x5FF6A40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000561")]
	internal int ErrorCount
	{
		[Token(Token = "0x60013D0")]
		[Address(RVA = "0x5FF6AD0", Offset = "0x5FF5AD0", VA = "0x5FF6AD0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60013D1")]
		[Address(RVA = "0x5FF6AE0", Offset = "0x5FF5AE0", VA = "0x5FF6AE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000562")]
	private bool System_002EXml_002EIDtdInfo_002EHasDefaultAttributes
	{
		[Token(Token = "0x60013DC")]
		[Address(RVA = "0x5FF7F50", Offset = "0x5FF6F50", VA = "0x5FF7F50", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000563")]
	private bool System_002EXml_002EIDtdInfo_002EHasNonCDataAttributes
	{
		[Token(Token = "0x60013DD")]
		[Address(RVA = "0x5FF7F60", Offset = "0x5FF6F60", VA = "0x5FF7F60", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000564")]
	private XmlQualifiedName System_002EXml_002EIDtdInfo_002EName
	{
		[Token(Token = "0x60013E0")]
		[Address(RVA = "0x5FF80E0", Offset = "0x5FF70E0", VA = "0x5FF80E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000565")]
	private string System_002EXml_002EIDtdInfo_002EInternalDtdSubset
	{
		[Token(Token = "0x60013E1")]
		[Address(RVA = "0x5FF80F0", Offset = "0x5FF70F0", VA = "0x5FF80F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013C2")]
	[Address(RVA = "0x5FF66B0", Offset = "0x5FF56B0", VA = "0x5FF66B0")]
	internal SchemaInfo()
	{
	}

	[Token(Token = "0x60013D2")]
	[Address(RVA = "0x5FF6AF0", Offset = "0x5FF5AF0", VA = "0x5FF6AF0")]
	internal SchemaElementDecl GetElementDecl(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60013D3")]
	[Address(RVA = "0x5FF6B60", Offset = "0x5FF5B60", VA = "0x5FF6B60")]
	internal SchemaElementDecl GetTypeDecl(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60013D4")]
	[Address(RVA = "0x5FF6BD0", Offset = "0x5FF5BD0", VA = "0x5FF6BD0")]
	internal XmlSchemaElement GetElement(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60013D5")]
	[Address(RVA = "0x5FF6C50", Offset = "0x5FF5C50", VA = "0x5FF6C50")]
	internal bool HasSchema(string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D6")]
	[Address(RVA = "0x5FF6CA0", Offset = "0x5FF5CA0", VA = "0x5FF6CA0")]
	internal bool Contains(string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D7")]
	[Address(RVA = "0x5FF6CF0", Offset = "0x5FF5CF0", VA = "0x5FF6CF0")]
	internal SchemaAttDef GetAttributeXdr(SchemaElementDecl ed, XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60013D8")]
	[Address(RVA = "0x5FF6E90", Offset = "0x5FF5E90", VA = "0x5FF6E90")]
	internal SchemaAttDef GetAttributeXsd(SchemaElementDecl ed, XmlQualifiedName qname, XmlSchemaObject partialValidationType, out AttributeMatchState attributeMatchState)
	{
		return null;
	}

	[Token(Token = "0x60013D9")]
	[Address(RVA = "0x5FF7120", Offset = "0x5FF6120", VA = "0x5FF7120")]
	internal SchemaAttDef GetAttributeXsd(SchemaElementDecl ed, XmlQualifiedName qname, ref bool skip)
	{
		return null;
	}

	[Token(Token = "0x60013DA")]
	[Address(RVA = "0x5FF7210", Offset = "0x5FF6210", VA = "0x5FF7210")]
	internal void Add(SchemaInfo sinfo, ValidationEventHandler eventhandler)
	{
	}

	[Token(Token = "0x60013DB")]
	[Address(RVA = "0x5FF7CD0", Offset = "0x5FF6CD0", VA = "0x5FF7CD0")]
	internal void Finish()
	{
	}

	[Token(Token = "0x60013DE")]
	[Address(RVA = "0x5FF7F70", Offset = "0x5FF6F70", VA = "0x5FF7F70", Slot = "8")]
	private IDtdAttributeListInfo System_002EXml_002EIDtdInfo_002ELookupAttributeList(string prefix, string localName)
	{
		return null;
	}

	[Token(Token = "0x60013DF")]
	[Address(RVA = "0x5FF8030", Offset = "0x5FF7030", VA = "0x5FF8030", Slot = "9")]
	private IDtdEntityInfo System_002EXml_002EIDtdInfo_002ELookupEntity(string name)
	{
		return null;
	}
}
