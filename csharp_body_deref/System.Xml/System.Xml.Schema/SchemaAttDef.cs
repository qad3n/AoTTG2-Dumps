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
		[Address(RVA = "0x46C8CC0", Offset = "0x46C8CC0", VA = "0x46C8CC0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700050F")]
	private string System_002EXml_002EIDtdAttributeInfo_002ELocalName
	{
		[Token(Token = "0x60012D4")]
		[Address(RVA = "0x46C8CD0", Offset = "0x46C8CD0", VA = "0x46C8CD0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000510")]
	private int System_002EXml_002EIDtdAttributeInfo_002ELineNumber
	{
		[Token(Token = "0x60012D5")]
		[Address(RVA = "0x46C8CF0", Offset = "0x46C8CF0", VA = "0x46C8CF0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000511")]
	private int System_002EXml_002EIDtdAttributeInfo_002ELinePosition
	{
		[Token(Token = "0x60012D6")]
		[Address(RVA = "0x46C8D00", Offset = "0x46C8D00", VA = "0x46C8D00", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000512")]
	private bool System_002EXml_002EIDtdAttributeInfo_002EIsNonCDataType
	{
		[Token(Token = "0x60012D7")]
		[Address(RVA = "0x46C8D10", Offset = "0x46C8D10", VA = "0x46C8D10", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000513")]
	private bool System_002EXml_002EIDtdAttributeInfo_002EIsDeclaredInExternal
	{
		[Token(Token = "0x60012D8")]
		[Address(RVA = "0x46C8D70", Offset = "0x46C8D70", VA = "0x46C8D70", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000514")]
	private bool System_002EXml_002EIDtdAttributeInfo_002EIsXmlAttribute
	{
		[Token(Token = "0x60012D9")]
		[Address(RVA = "0x46C8D80", Offset = "0x46C8D80", VA = "0x46C8D80", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000515")]
	private string System_002EXml_002EIDtdDefaultAttributeInfo_002EDefaultValueExpanded
	{
		[Token(Token = "0x60012DA")]
		[Address(RVA = "0x46C8D90", Offset = "0x46C8D90", VA = "0x46C8D90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000516")]
	private object System_002EXml_002EIDtdDefaultAttributeInfo_002EDefaultValueTyped
	{
		[Token(Token = "0x60012DB")]
		[Address(RVA = "0x46C8DF0", Offset = "0x46C8DF0", VA = "0x46C8DF0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000517")]
	private int System_002EXml_002EIDtdDefaultAttributeInfo_002EValueLineNumber
	{
		[Token(Token = "0x60012DC")]
		[Address(RVA = "0x46C8E00", Offset = "0x46C8E00", VA = "0x46C8E00", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000518")]
	private int System_002EXml_002EIDtdDefaultAttributeInfo_002EValueLinePosition
	{
		[Token(Token = "0x60012DD")]
		[Address(RVA = "0x46C8E10", Offset = "0x46C8E10", VA = "0x46C8E10", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000519")]
	internal int LinePosition
	{
		[Token(Token = "0x60012DE")]
		[Address(RVA = "0x46C8E20", Offset = "0x46C8E20", VA = "0x46C8E20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012DF")]
		[Address(RVA = "0x46C8E30", Offset = "0x46C8E30", VA = "0x46C8E30")]
		set
		{
		}
	}

	[Token(Token = "0x1700051A")]
	internal int LineNumber
	{
		[Token(Token = "0x60012E0")]
		[Address(RVA = "0x46C8E40", Offset = "0x46C8E40", VA = "0x46C8E40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012E1")]
		[Address(RVA = "0x46C8E50", Offset = "0x46C8E50", VA = "0x46C8E50")]
		set
		{
		}
	}

	[Token(Token = "0x1700051B")]
	internal int ValueLinePosition
	{
		[Token(Token = "0x60012E2")]
		[Address(RVA = "0x46C8E60", Offset = "0x46C8E60", VA = "0x46C8E60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012E3")]
		[Address(RVA = "0x46C8E70", Offset = "0x46C8E70", VA = "0x46C8E70")]
		set
		{
		}
	}

	[Token(Token = "0x1700051C")]
	internal int ValueLineNumber
	{
		[Token(Token = "0x60012E4")]
		[Address(RVA = "0x46C8E80", Offset = "0x46C8E80", VA = "0x46C8E80")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012E5")]
		[Address(RVA = "0x46C8E90", Offset = "0x46C8E90", VA = "0x46C8E90")]
		set
		{
		}
	}

	[Token(Token = "0x1700051D")]
	internal string DefaultValueExpanded
	{
		[Token(Token = "0x60012E6")]
		[Address(RVA = "0x46C8DC0", Offset = "0x46C8DC0", VA = "0x46C8DC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012E7")]
		[Address(RVA = "0x46C8EA0", Offset = "0x46C8EA0", VA = "0x46C8EA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700051E")]
	internal XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x60012E8")]
		[Address(RVA = "0x46C8D40", Offset = "0x46C8D40", VA = "0x46C8D40")]
		get
		{
			return default(XmlTokenizedType);
		}
		[Token(Token = "0x60012E9")]
		[Address(RVA = "0x46C8EB0", Offset = "0x46C8EB0", VA = "0x46C8EB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700051F")]
	internal Reserve Reserved
	{
		[Token(Token = "0x60012EA")]
		[Address(RVA = "0x46C8EE0", Offset = "0x46C8EE0", VA = "0x46C8EE0")]
		get
		{
			return default(Reserve);
		}
		[Token(Token = "0x60012EB")]
		[Address(RVA = "0x46C8EF0", Offset = "0x46C8EF0", VA = "0x46C8EF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000520")]
	internal bool DefaultValueChecked
	{
		[Token(Token = "0x60012EC")]
		[Address(RVA = "0x46C8F00", Offset = "0x46C8F00", VA = "0x46C8F00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000521")]
	internal XmlSchemaAttribute SchemaAttribute
	{
		[Token(Token = "0x60012ED")]
		[Address(RVA = "0x46C8F10", Offset = "0x46C8F10", VA = "0x46C8F10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012EE")]
		[Address(RVA = "0x46C8F20", Offset = "0x46C8F20", VA = "0x46C8F20")]
		set
		{
		}
	}

	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x46C8C90", Offset = "0x46C8C90", VA = "0x46C8C90")]
	public SchemaAttDef(XmlQualifiedName name, string prefix)
	{
	}

	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x46C8CA0", Offset = "0x46C8CA0", VA = "0x46C8CA0")]
	public SchemaAttDef(XmlQualifiedName name)
	{
	}

	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x46C8CB0", Offset = "0x46C8CB0", VA = "0x46C8CB0")]
	private SchemaAttDef()
	{
	}

	[Token(Token = "0x60012EF")]
	[Address(RVA = "0x46C8F30", Offset = "0x46C8F30", VA = "0x46C8F30")]
	internal void CheckXmlSpace(IValidationEventHandling validationEventHandling)
	{
	}

	[Token(Token = "0x60012F0")]
	[Address(RVA = "0x46C91C0", Offset = "0x46C91C0", VA = "0x46C91C0")]
	internal SchemaAttDef Clone()
	{
		return null;
	}
}
