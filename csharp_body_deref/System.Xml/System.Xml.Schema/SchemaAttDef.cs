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
		[Address(RVA = "0x438B560", Offset = "0x438B560", VA = "0x438B560", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700050F")]
	private string System_002EXml_002EIDtdAttributeInfo_002ELocalName
	{
		[Token(Token = "0x60012D4")]
		[Address(RVA = "0x438B570", Offset = "0x438B570", VA = "0x438B570", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000510")]
	private int System_002EXml_002EIDtdAttributeInfo_002ELineNumber
	{
		[Token(Token = "0x60012D5")]
		[Address(RVA = "0x438B590", Offset = "0x438B590", VA = "0x438B590", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000511")]
	private int System_002EXml_002EIDtdAttributeInfo_002ELinePosition
	{
		[Token(Token = "0x60012D6")]
		[Address(RVA = "0x438B5A0", Offset = "0x438B5A0", VA = "0x438B5A0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000512")]
	private bool System_002EXml_002EIDtdAttributeInfo_002EIsNonCDataType
	{
		[Token(Token = "0x60012D7")]
		[Address(RVA = "0x438B5B0", Offset = "0x438B5B0", VA = "0x438B5B0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000513")]
	private bool System_002EXml_002EIDtdAttributeInfo_002EIsDeclaredInExternal
	{
		[Token(Token = "0x60012D8")]
		[Address(RVA = "0x438B610", Offset = "0x438B610", VA = "0x438B610", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000514")]
	private bool System_002EXml_002EIDtdAttributeInfo_002EIsXmlAttribute
	{
		[Token(Token = "0x60012D9")]
		[Address(RVA = "0x438B620", Offset = "0x438B620", VA = "0x438B620", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000515")]
	private string System_002EXml_002EIDtdDefaultAttributeInfo_002EDefaultValueExpanded
	{
		[Token(Token = "0x60012DA")]
		[Address(RVA = "0x438B630", Offset = "0x438B630", VA = "0x438B630", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000516")]
	private object System_002EXml_002EIDtdDefaultAttributeInfo_002EDefaultValueTyped
	{
		[Token(Token = "0x60012DB")]
		[Address(RVA = "0x438B690", Offset = "0x438B690", VA = "0x438B690", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000517")]
	private int System_002EXml_002EIDtdDefaultAttributeInfo_002EValueLineNumber
	{
		[Token(Token = "0x60012DC")]
		[Address(RVA = "0x438B6A0", Offset = "0x438B6A0", VA = "0x438B6A0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000518")]
	private int System_002EXml_002EIDtdDefaultAttributeInfo_002EValueLinePosition
	{
		[Token(Token = "0x60012DD")]
		[Address(RVA = "0x438B6B0", Offset = "0x438B6B0", VA = "0x438B6B0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000519")]
	internal int LinePosition
	{
		[Token(Token = "0x60012DE")]
		[Address(RVA = "0x438B6C0", Offset = "0x438B6C0", VA = "0x438B6C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012DF")]
		[Address(RVA = "0x438B6D0", Offset = "0x438B6D0", VA = "0x438B6D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700051A")]
	internal int LineNumber
	{
		[Token(Token = "0x60012E0")]
		[Address(RVA = "0x438B6E0", Offset = "0x438B6E0", VA = "0x438B6E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012E1")]
		[Address(RVA = "0x438B6F0", Offset = "0x438B6F0", VA = "0x438B6F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700051B")]
	internal int ValueLinePosition
	{
		[Token(Token = "0x60012E2")]
		[Address(RVA = "0x438B700", Offset = "0x438B700", VA = "0x438B700")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012E3")]
		[Address(RVA = "0x438B710", Offset = "0x438B710", VA = "0x438B710")]
		set
		{
		}
	}

	[Token(Token = "0x1700051C")]
	internal int ValueLineNumber
	{
		[Token(Token = "0x60012E4")]
		[Address(RVA = "0x438B720", Offset = "0x438B720", VA = "0x438B720")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012E5")]
		[Address(RVA = "0x438B730", Offset = "0x438B730", VA = "0x438B730")]
		set
		{
		}
	}

	[Token(Token = "0x1700051D")]
	internal string DefaultValueExpanded
	{
		[Token(Token = "0x60012E6")]
		[Address(RVA = "0x438B660", Offset = "0x438B660", VA = "0x438B660")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012E7")]
		[Address(RVA = "0x438B740", Offset = "0x438B740", VA = "0x438B740")]
		set
		{
		}
	}

	[Token(Token = "0x1700051E")]
	internal XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x60012E8")]
		[Address(RVA = "0x438B5E0", Offset = "0x438B5E0", VA = "0x438B5E0")]
		get
		{
			return default(XmlTokenizedType);
		}
		[Token(Token = "0x60012E9")]
		[Address(RVA = "0x438B750", Offset = "0x438B750", VA = "0x438B750")]
		set
		{
		}
	}

	[Token(Token = "0x1700051F")]
	internal Reserve Reserved
	{
		[Token(Token = "0x60012EA")]
		[Address(RVA = "0x438B780", Offset = "0x438B780", VA = "0x438B780")]
		get
		{
			return default(Reserve);
		}
		[Token(Token = "0x60012EB")]
		[Address(RVA = "0x438B790", Offset = "0x438B790", VA = "0x438B790")]
		set
		{
		}
	}

	[Token(Token = "0x17000520")]
	internal bool DefaultValueChecked
	{
		[Token(Token = "0x60012EC")]
		[Address(RVA = "0x438B7A0", Offset = "0x438B7A0", VA = "0x438B7A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000521")]
	internal XmlSchemaAttribute SchemaAttribute
	{
		[Token(Token = "0x60012ED")]
		[Address(RVA = "0x438B7B0", Offset = "0x438B7B0", VA = "0x438B7B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012EE")]
		[Address(RVA = "0x438B7C0", Offset = "0x438B7C0", VA = "0x438B7C0")]
		set
		{
		}
	}

	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x438B530", Offset = "0x438B530", VA = "0x438B530")]
	public SchemaAttDef(XmlQualifiedName name, string prefix)
	{
	}

	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x438B540", Offset = "0x438B540", VA = "0x438B540")]
	public SchemaAttDef(XmlQualifiedName name)
	{
	}

	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x438B550", Offset = "0x438B550", VA = "0x438B550")]
	private SchemaAttDef()
	{
	}

	[Token(Token = "0x60012EF")]
	[Address(RVA = "0x438B7D0", Offset = "0x438B7D0", VA = "0x438B7D0")]
	internal void CheckXmlSpace(IValidationEventHandling validationEventHandling)
	{
	}

	[Token(Token = "0x60012F0")]
	[Address(RVA = "0x438BA60", Offset = "0x438BA60", VA = "0x438BA60")]
	internal SchemaAttDef Clone()
	{
		return null;
	}
}
