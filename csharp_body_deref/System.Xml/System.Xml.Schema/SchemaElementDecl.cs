using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001EE")]
internal sealed class SchemaElementDecl : SchemaDeclBase, IDtdAttributeListInfo
{
	[Token(Token = "0x400090F")]
	[FieldOffset(Offset = "0x60")]
	private Dictionary<XmlQualifiedName, SchemaAttDef> attdefs;

	[Token(Token = "0x4000910")]
	[FieldOffset(Offset = "0x68")]
	private List<IDtdDefaultAttributeInfo> defaultAttdefs;

	[Token(Token = "0x4000911")]
	[FieldOffset(Offset = "0x70")]
	private bool isIdDeclared;

	[Token(Token = "0x4000912")]
	[FieldOffset(Offset = "0x71")]
	private bool hasNonCDataAttribute;

	[Token(Token = "0x4000913")]
	[FieldOffset(Offset = "0x72")]
	private bool isAbstract;

	[Token(Token = "0x4000914")]
	[FieldOffset(Offset = "0x73")]
	private bool isNillable;

	[Token(Token = "0x4000915")]
	[FieldOffset(Offset = "0x74")]
	private bool hasRequiredAttribute;

	[Token(Token = "0x4000916")]
	[FieldOffset(Offset = "0x75")]
	private bool isNotationDeclared;

	[Token(Token = "0x4000917")]
	[FieldOffset(Offset = "0x78")]
	private Dictionary<XmlQualifiedName, XmlQualifiedName> prohibitedAttributes;

	[Token(Token = "0x4000918")]
	[FieldOffset(Offset = "0x80")]
	private ContentValidator contentValidator;

	[Token(Token = "0x4000919")]
	[FieldOffset(Offset = "0x88")]
	private XmlSchemaAnyAttribute anyAttribute;

	[Token(Token = "0x400091A")]
	[FieldOffset(Offset = "0x90")]
	private XmlSchemaDerivationMethod block;

	[Token(Token = "0x400091B")]
	[FieldOffset(Offset = "0x98")]
	private CompiledIdentityConstraint[] constraints;

	[Token(Token = "0x400091C")]
	[FieldOffset(Offset = "0xA0")]
	private XmlSchemaElement schemaElement;

	[Token(Token = "0x400091D")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly SchemaElementDecl Empty;

	[Token(Token = "0x1700052E")]
	private bool System_002EXml_002EIDtdAttributeListInfo_002EHasNonCDataAttributes
	{
		[Token(Token = "0x600137C")]
		[Address(RVA = "0x43ABE40", Offset = "0x43ABE40", VA = "0x43ABE40", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700052F")]
	internal bool IsIdDeclared
	{
		[Token(Token = "0x600137F")]
		[Address(RVA = "0x43ABF00", Offset = "0x43ABF00", VA = "0x43ABF00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001380")]
		[Address(RVA = "0x43ABF10", Offset = "0x43ABF10", VA = "0x43ABF10")]
		set
		{
		}
	}

	[Token(Token = "0x17000530")]
	internal bool HasNonCDataAttribute
	{
		[Token(Token = "0x6001381")]
		[Address(RVA = "0x43ABF20", Offset = "0x43ABF20", VA = "0x43ABF20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001382")]
		[Address(RVA = "0x43ABF30", Offset = "0x43ABF30", VA = "0x43ABF30")]
		set
		{
		}
	}

	[Token(Token = "0x17000531")]
	internal bool IsAbstract
	{
		[Token(Token = "0x6001384")]
		[Address(RVA = "0x43ABF90", Offset = "0x43ABF90", VA = "0x43ABF90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001385")]
		[Address(RVA = "0x43ABFA0", Offset = "0x43ABFA0", VA = "0x43ABFA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000532")]
	internal bool IsNillable
	{
		[Token(Token = "0x6001386")]
		[Address(RVA = "0x43ABFB0", Offset = "0x43ABFB0", VA = "0x43ABFB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001387")]
		[Address(RVA = "0x43ABFC0", Offset = "0x43ABFC0", VA = "0x43ABFC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000533")]
	internal XmlSchemaDerivationMethod Block
	{
		[Token(Token = "0x6001388")]
		[Address(RVA = "0x43ABFD0", Offset = "0x43ABFD0", VA = "0x43ABFD0")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x6001389")]
		[Address(RVA = "0x43ABFE0", Offset = "0x43ABFE0", VA = "0x43ABFE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000534")]
	internal bool IsNotationDeclared
	{
		[Token(Token = "0x600138A")]
		[Address(RVA = "0x43ABFF0", Offset = "0x43ABFF0", VA = "0x43ABFF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600138B")]
		[Address(RVA = "0x43AC000", Offset = "0x43AC000", VA = "0x43AC000")]
		set
		{
		}
	}

	[Token(Token = "0x17000535")]
	internal bool HasDefaultAttribute
	{
		[Token(Token = "0x600138C")]
		[Address(RVA = "0x43AC010", Offset = "0x43AC010", VA = "0x43AC010")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000536")]
	internal bool HasRequiredAttribute
	{
		[Token(Token = "0x600138D")]
		[Address(RVA = "0x43AC020", Offset = "0x43AC020", VA = "0x43AC020")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000537")]
	internal ContentValidator ContentValidator
	{
		[Token(Token = "0x600138E")]
		[Address(RVA = "0x43AC030", Offset = "0x43AC030", VA = "0x43AC030")]
		get
		{
			return null;
		}
		[Token(Token = "0x600138F")]
		[Address(RVA = "0x43AC040", Offset = "0x43AC040", VA = "0x43AC040")]
		set
		{
		}
	}

	[Token(Token = "0x17000538")]
	internal XmlSchemaAnyAttribute AnyAttribute
	{
		[Token(Token = "0x6001390")]
		[Address(RVA = "0x43AC050", Offset = "0x43AC050", VA = "0x43AC050")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001391")]
		[Address(RVA = "0x43AC060", Offset = "0x43AC060", VA = "0x43AC060")]
		set
		{
		}
	}

	[Token(Token = "0x17000539")]
	internal CompiledIdentityConstraint[] Constraints
	{
		[Token(Token = "0x6001392")]
		[Address(RVA = "0x43AC080", Offset = "0x43AC080", VA = "0x43AC080")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001393")]
		[Address(RVA = "0x43AC090", Offset = "0x43AC090", VA = "0x43AC090")]
		set
		{
		}
	}

	[Token(Token = "0x1700053A")]
	internal XmlSchemaElement SchemaElement
	{
		[Token(Token = "0x6001394")]
		[Address(RVA = "0x43AC0B0", Offset = "0x43AC0B0", VA = "0x43AC0B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001395")]
		[Address(RVA = "0x43AC0C0", Offset = "0x43AC0C0", VA = "0x43AC0C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700053B")]
	internal IList<IDtdDefaultAttributeInfo> DefaultAttDefs
	{
		[Token(Token = "0x6001398")]
		[Address(RVA = "0x43AC2A0", Offset = "0x43AC2A0", VA = "0x43AC2A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053C")]
	internal Dictionary<XmlQualifiedName, SchemaAttDef> AttDefs
	{
		[Token(Token = "0x6001399")]
		[Address(RVA = "0x43AC2B0", Offset = "0x43AC2B0", VA = "0x43AC2B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053D")]
	internal Dictionary<XmlQualifiedName, XmlQualifiedName> ProhibitedAttributes
	{
		[Token(Token = "0x600139A")]
		[Address(RVA = "0x43AC2C0", Offset = "0x43AC2C0", VA = "0x43AC2C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001378")]
	[Address(RVA = "0x43AB9F0", Offset = "0x43AB9F0", VA = "0x43AB9F0")]
	internal SchemaElementDecl()
	{
	}

	[Token(Token = "0x6001379")]
	[Address(RVA = "0x43ABB00", Offset = "0x43ABB00", VA = "0x43ABB00")]
	internal SchemaElementDecl(XmlSchemaDatatype dtype)
	{
	}

	[Token(Token = "0x600137A")]
	[Address(RVA = "0x43ABC70", Offset = "0x43ABC70", VA = "0x43ABC70")]
	internal SchemaElementDecl(XmlQualifiedName name, string prefix)
	{
	}

	[Token(Token = "0x600137B")]
	[Address(RVA = "0x43ABD50", Offset = "0x43ABD50", VA = "0x43ABD50")]
	internal static SchemaElementDecl CreateAnyTypeElementDecl()
	{
		return null;
	}

	[Token(Token = "0x600137D")]
	[Address(RVA = "0x43ABE50", Offset = "0x43ABE50", VA = "0x43ABE50", Slot = "5")]
	private IDtdAttributeInfo System_002EXml_002EIDtdAttributeListInfo_002ELookupAttribute(string prefix, string localName)
	{
		return null;
	}

	[Token(Token = "0x600137E")]
	[Address(RVA = "0x43ABEF0", Offset = "0x43ABEF0", VA = "0x43ABEF0", Slot = "6")]
	private IEnumerable<IDtdDefaultAttributeInfo> System_002EXml_002EIDtdAttributeListInfo_002ELookupDefaultAttributes()
	{
		return null;
	}

	[Token(Token = "0x6001383")]
	[Address(RVA = "0x43ABF40", Offset = "0x43ABF40", VA = "0x43ABF40")]
	internal SchemaElementDecl Clone()
	{
		return null;
	}

	[Token(Token = "0x6001396")]
	[Address(RVA = "0x43AC0E0", Offset = "0x43AC0E0", VA = "0x43AC0E0")]
	internal void AddAttDef(SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x6001397")]
	[Address(RVA = "0x43AC230", Offset = "0x43AC230", VA = "0x43AC230")]
	internal SchemaAttDef GetAttDef(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x600139B")]
	[Address(RVA = "0x43AC2D0", Offset = "0x43AC2D0", VA = "0x43AC2D0")]
	internal void CheckAttributes(Hashtable presence, bool standalone)
	{
	}
}
