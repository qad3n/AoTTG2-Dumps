// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.SchemaElementDecl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x1BD3E60", Offset = "0x1BD2460", VA = "0x181BD3E60", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700052F")]
	internal bool IsIdDeclared
	{
		[Token(Token = "0x600137F")]
		[Address(RVA = "0xABD390", Offset = "0xABB990", VA = "0x180ABD390")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001380")]
		[Address(RVA = "0xABD3A0", Offset = "0xABB9A0", VA = "0x180ABD3A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000530")]
	internal bool HasNonCDataAttribute
	{
		[Token(Token = "0x6001381")]
		[Address(RVA = "0x1BD3E60", Offset = "0x1BD2460", VA = "0x181BD3E60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001382")]
		[Address(RVA = "0x1BD40B0", Offset = "0x1BD26B0", VA = "0x181BD40B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000531")]
	internal bool IsAbstract
	{
		[Token(Token = "0x6001384")]
		[Address(RVA = "0x264D440", Offset = "0x264BA40", VA = "0x18264D440")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001385")]
		[Address(RVA = "0x264D470", Offset = "0x264BA70", VA = "0x18264D470")]
		set
		{
		}
	}

	[Token(Token = "0x17000532")]
	internal bool IsNillable
	{
		[Token(Token = "0x6001386")]
		[Address(RVA = "0x264D450", Offset = "0x264BA50", VA = "0x18264D450")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001387")]
		[Address(RVA = "0x264D480", Offset = "0x264BA80", VA = "0x18264D480")]
		set
		{
		}
	}

	[Token(Token = "0x17000533")]
	internal XmlSchemaDerivationMethod Block
	{
		[Token(Token = "0x6001388")]
		[Address(RVA = "0xE925C0", Offset = "0xE90BC0", VA = "0x180E925C0")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x6001389")]
		[Address(RVA = "0xE92690", Offset = "0xE90C90", VA = "0x180E92690")]
		set
		{
		}
	}

	[Token(Token = "0x17000534")]
	internal bool IsNotationDeclared
	{
		[Token(Token = "0x600138A")]
		[Address(RVA = "0x264D460", Offset = "0x264BA60", VA = "0x18264D460")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600138B")]
		[Address(RVA = "0x264D490", Offset = "0x264BA90", VA = "0x18264D490")]
		set
		{
		}
	}

	[Token(Token = "0x17000535")]
	internal bool HasDefaultAttribute
	{
		[Token(Token = "0x600138C")]
		[Address(RVA = "0x264D420", Offset = "0x264BA20", VA = "0x18264D420")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000536")]
	internal bool HasRequiredAttribute
	{
		[Token(Token = "0x600138D")]
		[Address(RVA = "0x264D430", Offset = "0x264BA30", VA = "0x18264D430")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000537")]
	internal ContentValidator ContentValidator
	{
		[Token(Token = "0x600138E")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600138F")]
		[Address(RVA = "0x58A960", Offset = "0x588F60", VA = "0x18058A960")]
		set
		{
		}
	}

	[Token(Token = "0x17000538")]
	internal XmlSchemaAnyAttribute AnyAttribute
	{
		[Token(Token = "0x6001390")]
		[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001391")]
		[Address(RVA = "0xB5BE30", Offset = "0xB5A430", VA = "0x180B5BE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000539")]
	internal CompiledIdentityConstraint[] Constraints
	{
		[Token(Token = "0x6001392")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001393")]
		[Address(RVA = "0x58A900", Offset = "0x588F00", VA = "0x18058A900")]
		set
		{
		}
	}

	[Token(Token = "0x1700053A")]
	internal XmlSchemaElement SchemaElement
	{
		[Token(Token = "0x6001394")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001395")]
		[Address(RVA = "0x189BA60", Offset = "0x189A060", VA = "0x18189BA60")]
		set
		{
		}
	}

	[Token(Token = "0x1700053B")]
	internal IList<IDtdDefaultAttributeInfo> DefaultAttDefs
	{
		[Token(Token = "0x6001398")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053C")]
	internal Dictionary<XmlQualifiedName, SchemaAttDef> AttDefs
	{
		[Token(Token = "0x6001399")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053D")]
	internal Dictionary<XmlQualifiedName, XmlQualifiedName> ProhibitedAttributes
	{
		[Token(Token = "0x600139A")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001378")]
	[Address(RVA = "0x264D310", Offset = "0x264B910", VA = "0x18264D310")]
	internal SchemaElementDecl()
	{
	}

	[Token(Token = "0x6001379")]
	[Address(RVA = "0x264D040", Offset = "0x264B640", VA = "0x18264D040")]
	internal SchemaElementDecl(XmlSchemaDatatype dtype)
	{
	}

	[Token(Token = "0x600137A")]
	[Address(RVA = "0x264D1C0", Offset = "0x264B7C0", VA = "0x18264D1C0")]
	internal SchemaElementDecl(XmlQualifiedName name, string prefix)
	{
	}

	[Token(Token = "0x600137B")]
	[Address(RVA = "0x264CDE0", Offset = "0x264B3E0", VA = "0x18264CDE0")]
	internal static SchemaElementDecl CreateAnyTypeElementDecl()
	{
		return null;
	}

	[Token(Token = "0x600137D")]
	[Address(RVA = "0x264CF30", Offset = "0x264B530", VA = "0x18264CF30", Slot = "5")]
	private IDtdAttributeInfo System_002EXml_002EIDtdAttributeListInfo_002ELookupAttribute(string prefix, string localName)
	{
		return null;
	}

	[Token(Token = "0x600137E")]
	[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0", Slot = "6")]
	private IEnumerable<IDtdDefaultAttributeInfo> System_002EXml_002EIDtdAttributeListInfo_002ELookupDefaultAttributes()
	{
		return null;
	}

	[Token(Token = "0x6001383")]
	[Address(RVA = "0x264CD80", Offset = "0x264B380", VA = "0x18264CD80")]
	internal SchemaElementDecl Clone()
	{
		return null;
	}

	[Token(Token = "0x6001396")]
	[Address(RVA = "0x264C9C0", Offset = "0x264AFC0", VA = "0x18264C9C0")]
	internal void AddAttDef(SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x6001397")]
	[Address(RVA = "0x264CEB0", Offset = "0x264B4B0", VA = "0x18264CEB0")]
	internal SchemaAttDef GetAttDef(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x600139B")]
	[Address(RVA = "0x264CB20", Offset = "0x264B120", VA = "0x18264CB20")]
	internal void CheckAttributes(Hashtable presence, bool standalone)
	{
	}
}
