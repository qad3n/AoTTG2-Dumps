// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.SchemaAttDef
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001E6")]
internal sealed class SchemaAttDef : SchemaDeclBase, IDtdDefaultAttributeInfo, IDtdAttributeInfo
{
	[Token(Token = "0x20001E7")]
	internal enum Reserve
	{
		[Token(Token = "0x40008E8")]
		None,
		[Token(Token = "0x40008E9")]
		XmlSpace,
		[Token(Token = "0x40008EA")]
		XmlLang
	}

	[Token(Token = "0x40008DE")]
	[FieldOffset(Offset = "0x60")]
	private string defExpanded;

	[Token(Token = "0x40008DF")]
	[FieldOffset(Offset = "0x68")]
	private int lineNum;

	[Token(Token = "0x40008E0")]
	[FieldOffset(Offset = "0x6C")]
	private int linePos;

	[Token(Token = "0x40008E1")]
	[FieldOffset(Offset = "0x70")]
	private int valueLineNum;

	[Token(Token = "0x40008E2")]
	[FieldOffset(Offset = "0x74")]
	private int valueLinePos;

	[Token(Token = "0x40008E3")]
	[FieldOffset(Offset = "0x78")]
	private Reserve reserved;

	[Token(Token = "0x40008E4")]
	[FieldOffset(Offset = "0x7C")]
	private bool defaultValueChecked;

	[Token(Token = "0x40008E5")]
	[FieldOffset(Offset = "0x80")]
	private XmlSchemaAttribute schemaAttribute;

	[Token(Token = "0x40008E6")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SchemaAttDef Empty;

	[Token(Token = "0x1700050E")]
	private string System_002EXml_002EIDtdAttributeInfo_002EPrefix
	{
		[Token(Token = "0x60012D3")]
		[Address(RVA = "0x261C930", Offset = "0x261AF30", VA = "0x18261C930", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700050F")]
	private string System_002EXml_002EIDtdAttributeInfo_002ELocalName
	{
		[Token(Token = "0x60012D4")]
		[Address(RVA = "0x11282C0", Offset = "0x11268C0", VA = "0x1811282C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000510")]
	private int System_002EXml_002EIDtdAttributeInfo_002ELineNumber
	{
		[Token(Token = "0x60012D5")]
		[Address(RVA = "0xA4D530", Offset = "0xA4BB30", VA = "0x180A4D530", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000511")]
	private int System_002EXml_002EIDtdAttributeInfo_002ELinePosition
	{
		[Token(Token = "0x60012D6")]
		[Address(RVA = "0xACB500", Offset = "0xAC9B00", VA = "0x180ACB500", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000512")]
	private bool System_002EXml_002EIDtdAttributeInfo_002EIsNonCDataType
	{
		[Token(Token = "0x60012D7")]
		[Address(RVA = "0x261C8F0", Offset = "0x261AEF0", VA = "0x18261C8F0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000513")]
	private bool System_002EXml_002EIDtdAttributeInfo_002EIsDeclaredInExternal
	{
		[Token(Token = "0x60012D8")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000514")]
	private bool System_002EXml_002EIDtdAttributeInfo_002EIsXmlAttribute
	{
		[Token(Token = "0x60012D9")]
		[Address(RVA = "0x261C920", Offset = "0x261AF20", VA = "0x18261C920", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000515")]
	private string System_002EXml_002EIDtdDefaultAttributeInfo_002EDefaultValueExpanded
	{
		[Token(Token = "0x60012DA")]
		[Address(RVA = "0x261C940", Offset = "0x261AF40", VA = "0x18261C940", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000516")]
	private object System_002EXml_002EIDtdDefaultAttributeInfo_002EDefaultValueTyped
	{
		[Token(Token = "0x60012DB")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000517")]
	private int System_002EXml_002EIDtdDefaultAttributeInfo_002EValueLineNumber
	{
		[Token(Token = "0x60012DC")]
		[Address(RVA = "0x58A560", Offset = "0x588B60", VA = "0x18058A560", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000518")]
	private int System_002EXml_002EIDtdDefaultAttributeInfo_002EValueLinePosition
	{
		[Token(Token = "0x60012DD")]
		[Address(RVA = "0x187BA40", Offset = "0x187A040", VA = "0x18187BA40", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000519")]
	internal int LinePosition
	{
		[Token(Token = "0x60012DE")]
		[Address(RVA = "0xACB500", Offset = "0xAC9B00", VA = "0x180ACB500")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012DF")]
		[Address(RVA = "0xACB520", Offset = "0xAC9B20", VA = "0x180ACB520")]
		set
		{
		}
	}

	[Token(Token = "0x1700051A")]
	internal int LineNumber
	{
		[Token(Token = "0x60012E0")]
		[Address(RVA = "0xA4D530", Offset = "0xA4BB30", VA = "0x180A4D530")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012E1")]
		[Address(RVA = "0xA4D6E0", Offset = "0xA4BCE0", VA = "0x180A4D6E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700051B")]
	internal int ValueLinePosition
	{
		[Token(Token = "0x60012E2")]
		[Address(RVA = "0x187BA40", Offset = "0x187A040", VA = "0x18187BA40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012E3")]
		[Address(RVA = "0x261CA60", Offset = "0x261B060", VA = "0x18261CA60")]
		set
		{
		}
	}

	[Token(Token = "0x1700051C")]
	internal int ValueLineNumber
	{
		[Token(Token = "0x60012E4")]
		[Address(RVA = "0x58A560", Offset = "0x588B60", VA = "0x18058A560")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012E5")]
		[Address(RVA = "0x58A8F0", Offset = "0x588EF0", VA = "0x18058A8F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700051D")]
	internal string DefaultValueExpanded
	{
		[Token(Token = "0x60012E6")]
		[Address(RVA = "0x261C940", Offset = "0x261AF40", VA = "0x18261C940")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012E7")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700051E")]
	internal XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x60012E8")]
		[Address(RVA = "0x261CA00", Offset = "0x261B000", VA = "0x18261CA00")]
		get
		{
			return default(XmlTokenizedType);
		}
		[Token(Token = "0x60012E9")]
		[Address(RVA = "0x261CA30", Offset = "0x261B030", VA = "0x18261CA30")]
		set
		{
		}
	}

	[Token(Token = "0x1700051F")]
	internal Reserve Reserved
	{
		[Token(Token = "0x60012EA")]
		[Address(RVA = "0x58A600", Offset = "0x588C00", VA = "0x18058A600")]
		get
		{
			return default(Reserve);
		}
		[Token(Token = "0x60012EB")]
		[Address(RVA = "0x58A990", Offset = "0x588F90", VA = "0x18058A990")]
		set
		{
		}
	}

	[Token(Token = "0x17000520")]
	internal bool DefaultValueChecked
	{
		[Token(Token = "0x60012EC")]
		[Address(RVA = "0x1D2B370", Offset = "0x1D29970", VA = "0x181D2B370")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000521")]
	internal XmlSchemaAttribute SchemaAttribute
	{
		[Token(Token = "0x60012ED")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012EE")]
		[Address(RVA = "0x58A960", Offset = "0x588F60", VA = "0x18058A960")]
		set
		{
		}
	}

	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x261C9E0", Offset = "0x261AFE0", VA = "0x18261C9E0")]
	public SchemaAttDef(XmlQualifiedName name, string prefix)
	{
	}

	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x261C9D0", Offset = "0x261AFD0", VA = "0x18261C9D0")]
	public SchemaAttDef(XmlQualifiedName name)
	{
	}

	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x261C9F0", Offset = "0x261AFF0", VA = "0x18261C9F0")]
	private SchemaAttDef()
	{
	}

	[Token(Token = "0x60012EF")]
	[Address(RVA = "0x261C5E0", Offset = "0x261ABE0", VA = "0x18261C5E0")]
	internal void CheckXmlSpace(IValidationEventHandling validationEventHandling)
	{
	}

	[Token(Token = "0x60012F0")]
	[Address(RVA = "0x261C890", Offset = "0x261AE90", VA = "0x18261C890")]
	internal SchemaAttDef Clone()
	{
		return null;
	}
}
