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
		[Address(RVA = "0x46E95A0", Offset = "0x46E95A0", VA = "0x46E95A0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700052F")]
	internal bool IsIdDeclared
	{
		[Token(Token = "0x600137F")]
		[Address(RVA = "0x46E9660", Offset = "0x46E9660", VA = "0x46E9660")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001380")]
		[Address(RVA = "0x46E9670", Offset = "0x46E9670", VA = "0x46E9670")]
		set
		{
		}
	}

	[Token(Token = "0x17000530")]
	internal bool HasNonCDataAttribute
	{
		[Token(Token = "0x6001381")]
		[Address(RVA = "0x46E9680", Offset = "0x46E9680", VA = "0x46E9680")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001382")]
		[Address(RVA = "0x46E9690", Offset = "0x46E9690", VA = "0x46E9690")]
		set
		{
		}
	}

	[Token(Token = "0x17000531")]
	internal bool IsAbstract
	{
		[Token(Token = "0x6001384")]
		[Address(RVA = "0x46E96F0", Offset = "0x46E96F0", VA = "0x46E96F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001385")]
		[Address(RVA = "0x46E9700", Offset = "0x46E9700", VA = "0x46E9700")]
		set
		{
		}
	}

	[Token(Token = "0x17000532")]
	internal bool IsNillable
	{
		[Token(Token = "0x6001386")]
		[Address(RVA = "0x46E9710", Offset = "0x46E9710", VA = "0x46E9710")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001387")]
		[Address(RVA = "0x46E9720", Offset = "0x46E9720", VA = "0x46E9720")]
		set
		{
		}
	}

	[Token(Token = "0x17000533")]
	internal XmlSchemaDerivationMethod Block
	{
		[Token(Token = "0x6001388")]
		[Address(RVA = "0x46E9730", Offset = "0x46E9730", VA = "0x46E9730")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x6001389")]
		[Address(RVA = "0x46E9740", Offset = "0x46E9740", VA = "0x46E9740")]
		set
		{
		}
	}

	[Token(Token = "0x17000534")]
	internal bool IsNotationDeclared
	{
		[Token(Token = "0x600138A")]
		[Address(RVA = "0x46E9750", Offset = "0x46E9750", VA = "0x46E9750")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600138B")]
		[Address(RVA = "0x46E9760", Offset = "0x46E9760", VA = "0x46E9760")]
		set
		{
		}
	}

	[Token(Token = "0x17000535")]
	internal bool HasDefaultAttribute
	{
		[Token(Token = "0x600138C")]
		[Address(RVA = "0x46E9770", Offset = "0x46E9770", VA = "0x46E9770")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000536")]
	internal bool HasRequiredAttribute
	{
		[Token(Token = "0x600138D")]
		[Address(RVA = "0x46E9780", Offset = "0x46E9780", VA = "0x46E9780")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000537")]
	internal ContentValidator ContentValidator
	{
		[Token(Token = "0x600138E")]
		[Address(RVA = "0x46E9790", Offset = "0x46E9790", VA = "0x46E9790")]
		get
		{
			return null;
		}
		[Token(Token = "0x600138F")]
		[Address(RVA = "0x46E97A0", Offset = "0x46E97A0", VA = "0x46E97A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000538")]
	internal XmlSchemaAnyAttribute AnyAttribute
	{
		[Token(Token = "0x6001390")]
		[Address(RVA = "0x46E97B0", Offset = "0x46E97B0", VA = "0x46E97B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001391")]
		[Address(RVA = "0x46E97C0", Offset = "0x46E97C0", VA = "0x46E97C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000539")]
	internal CompiledIdentityConstraint[] Constraints
	{
		[Token(Token = "0x6001392")]
		[Address(RVA = "0x46E97E0", Offset = "0x46E97E0", VA = "0x46E97E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001393")]
		[Address(RVA = "0x46E97F0", Offset = "0x46E97F0", VA = "0x46E97F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700053A")]
	internal XmlSchemaElement SchemaElement
	{
		[Token(Token = "0x6001394")]
		[Address(RVA = "0x46E9810", Offset = "0x46E9810", VA = "0x46E9810")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001395")]
		[Address(RVA = "0x46E9820", Offset = "0x46E9820", VA = "0x46E9820")]
		set
		{
		}
	}

	[Token(Token = "0x1700053B")]
	internal IList<IDtdDefaultAttributeInfo> DefaultAttDefs
	{
		[Token(Token = "0x6001398")]
		[Address(RVA = "0x46E9A00", Offset = "0x46E9A00", VA = "0x46E9A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053C")]
	internal Dictionary<XmlQualifiedName, SchemaAttDef> AttDefs
	{
		[Token(Token = "0x6001399")]
		[Address(RVA = "0x46E9A10", Offset = "0x46E9A10", VA = "0x46E9A10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053D")]
	internal Dictionary<XmlQualifiedName, XmlQualifiedName> ProhibitedAttributes
	{
		[Token(Token = "0x600139A")]
		[Address(RVA = "0x46E9A20", Offset = "0x46E9A20", VA = "0x46E9A20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001378")]
	[Address(RVA = "0x46E9150", Offset = "0x46E9150", VA = "0x46E9150")]
	internal SchemaElementDecl()
	{
	}

	[Token(Token = "0x6001379")]
	[Address(RVA = "0x46E9260", Offset = "0x46E9260", VA = "0x46E9260")]
	internal SchemaElementDecl(XmlSchemaDatatype dtype)
	{
	}

	[Token(Token = "0x600137A")]
	[Address(RVA = "0x46E93D0", Offset = "0x46E93D0", VA = "0x46E93D0")]
	internal SchemaElementDecl(XmlQualifiedName name, string prefix)
	{
	}

	[Token(Token = "0x600137B")]
	[Address(RVA = "0x46E94B0", Offset = "0x46E94B0", VA = "0x46E94B0")]
	internal static SchemaElementDecl CreateAnyTypeElementDecl()
	{
		return null;
	}

	[Token(Token = "0x600137D")]
	[Address(RVA = "0x46E95B0", Offset = "0x46E95B0", VA = "0x46E95B0", Slot = "5")]
	private IDtdAttributeInfo System_002EXml_002EIDtdAttributeListInfo_002ELookupAttribute(string prefix, string localName)
	{
		return null;
	}

	[Token(Token = "0x600137E")]
	[Address(RVA = "0x46E9650", Offset = "0x46E9650", VA = "0x46E9650", Slot = "6")]
	private IEnumerable<IDtdDefaultAttributeInfo> System_002EXml_002EIDtdAttributeListInfo_002ELookupDefaultAttributes()
	{
		return null;
	}

	[Token(Token = "0x6001383")]
	[Address(RVA = "0x46E96A0", Offset = "0x46E96A0", VA = "0x46E96A0")]
	internal SchemaElementDecl Clone()
	{
		return null;
	}

	[Token(Token = "0x6001396")]
	[Address(RVA = "0x46E9840", Offset = "0x46E9840", VA = "0x46E9840")]
	internal void AddAttDef(SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x6001397")]
	[Address(RVA = "0x46E9990", Offset = "0x46E9990", VA = "0x46E9990")]
	internal SchemaAttDef GetAttDef(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x600139B")]
	[Address(RVA = "0x46E9A30", Offset = "0x46E9A30", VA = "0x46E9A30")]
	internal void CheckAttributes(Hashtable presence, bool standalone)
	{
	}
}
