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
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013C4")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x17000557")]
	internal string InternalDtdSubset
	{
		[Token(Token = "0x60013C5")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000558")]
	internal Dictionary<XmlQualifiedName, SchemaElementDecl> ElementDecls
	{
		[Token(Token = "0x60013C6")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000559")]
	internal Dictionary<XmlQualifiedName, SchemaElementDecl> UndeclaredElementDecls
	{
		[Token(Token = "0x60013C7")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055A")]
	internal Dictionary<XmlQualifiedName, SchemaEntity> GeneralEntities
	{
		[Token(Token = "0x60013C8")]
		[Address(RVA = "0x264ECA0", Offset = "0x264D2A0", VA = "0x18264ECA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055B")]
	internal Dictionary<XmlQualifiedName, SchemaEntity> ParameterEntities
	{
		[Token(Token = "0x60013C9")]
		[Address(RVA = "0x264EDA0", Offset = "0x264D3A0", VA = "0x18264EDA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055C")]
	internal SchemaType SchemaType
	{
		[Token(Token = "0x60013CA")]
		[Address(RVA = "0x1A4F710", Offset = "0x1A4DD10", VA = "0x181A4F710")]
		get
		{
			return default(SchemaType);
		}
		[Token(Token = "0x60013CB")]
		[Address(RVA = "0x1CFDDD0", Offset = "0x1CFC3D0", VA = "0x181CFDDD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700055D")]
	internal Dictionary<string, bool> TargetNamespaces
	{
		[Token(Token = "0x60013CC")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055E")]
	internal Dictionary<XmlQualifiedName, SchemaElementDecl> ElementDeclsByType
	{
		[Token(Token = "0x60013CD")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055F")]
	internal Dictionary<XmlQualifiedName, SchemaAttDef> AttributeDecls
	{
		[Token(Token = "0x60013CE")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000560")]
	internal Dictionary<string, SchemaNotation> Notations
	{
		[Token(Token = "0x60013CF")]
		[Address(RVA = "0x264ED20", Offset = "0x264D320", VA = "0x18264ED20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000561")]
	internal int ErrorCount
	{
		[Token(Token = "0x60013D0")]
		[Address(RVA = "0x1BD3CB0", Offset = "0x1BD22B0", VA = "0x181BD3CB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60013D1")]
		[Address(RVA = "0x1ADFEB0", Offset = "0x1ADE4B0", VA = "0x181ADFEB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000562")]
	private bool System_002EXml_002EIDtdInfo_002EHasDefaultAttributes
	{
		[Token(Token = "0x60013DC")]
		[Address(RVA = "0x1AD8270", Offset = "0x1AD6870", VA = "0x181AD8270", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000563")]
	private bool System_002EXml_002EIDtdInfo_002EHasNonCDataAttributes
	{
		[Token(Token = "0x60013DD")]
		[Address(RVA = "0xA374E0", Offset = "0xA35AE0", VA = "0x180A374E0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000564")]
	private XmlQualifiedName System_002EXml_002EIDtdInfo_002EName
	{
		[Token(Token = "0x60013E0")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000565")]
	private string System_002EXml_002EIDtdInfo_002EInternalDtdSubset
	{
		[Token(Token = "0x60013E1")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013C2")]
	[Address(RVA = "0x264EAD0", Offset = "0x264D0D0", VA = "0x18264EAD0")]
	internal SchemaInfo()
	{
	}

	[Token(Token = "0x60013D2")]
	[Address(RVA = "0x264E760", Offset = "0x264CD60", VA = "0x18264E760")]
	internal SchemaElementDecl GetElementDecl(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60013D3")]
	[Address(RVA = "0x264E870", Offset = "0x264CE70", VA = "0x18264E870")]
	internal SchemaElementDecl GetTypeDecl(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60013D4")]
	[Address(RVA = "0x264E7E0", Offset = "0x264CDE0", VA = "0x18264E7E0")]
	internal XmlSchemaElement GetElement(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60013D5")]
	[Address(RVA = "0x264E8F0", Offset = "0x264CEF0", VA = "0x18264E8F0")]
	internal bool HasSchema(string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D6")]
	[Address(RVA = "0x264DFE0", Offset = "0x264C5E0", VA = "0x18264DFE0")]
	internal bool Contains(string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D7")]
	[Address(RVA = "0x264E1D0", Offset = "0x264C7D0", VA = "0x18264E1D0")]
	internal SchemaAttDef GetAttributeXdr(SchemaElementDecl ed, XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60013D8")]
	[Address(RVA = "0x264E4E0", Offset = "0x264CAE0", VA = "0x18264E4E0")]
	internal SchemaAttDef GetAttributeXsd(SchemaElementDecl ed, XmlQualifiedName qname, XmlSchemaObject partialValidationType, out AttributeMatchState attributeMatchState)
	{
		return null;
	}

	[Token(Token = "0x60013D9")]
	[Address(RVA = "0x264E390", Offset = "0x264C990", VA = "0x18264E390")]
	internal SchemaAttDef GetAttributeXsd(SchemaElementDecl ed, XmlQualifiedName qname, ref bool skip)
	{
		return null;
	}

	[Token(Token = "0x60013DA")]
	[Address(RVA = "0x264D6C0", Offset = "0x264BCC0", VA = "0x18264D6C0")]
	internal void Add(SchemaInfo sinfo, ValidationEventHandler eventhandler)
	{
	}

	[Token(Token = "0x60013DB")]
	[Address(RVA = "0x264E040", Offset = "0x264C640", VA = "0x18264E040")]
	internal void Finish()
	{
	}

	[Token(Token = "0x60013DE")]
	[Address(RVA = "0x264E950", Offset = "0x264CF50", VA = "0x18264E950", Slot = "8")]
	private IDtdAttributeListInfo System_002EXml_002EIDtdInfo_002ELookupAttributeList(string prefix, string localName)
	{
		return null;
	}

	[Token(Token = "0x60013DF")]
	[Address(RVA = "0x264EA10", Offset = "0x264D010", VA = "0x18264EA10", Slot = "9")]
	private IDtdEntityInfo System_002EXml_002EIDtdInfo_002ELookupEntity(string name)
	{
		return null;
	}
}
