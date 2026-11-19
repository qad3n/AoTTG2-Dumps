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
		[Address(RVA = "0x5FD8800", Offset = "0x5FD7800", VA = "0x5FD8800", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700050F")]
	private string System_002EXml_002EIDtdAttributeInfo_002ELocalName
	{
		[Token(Token = "0x60012D4")]
		[Address(RVA = "0x5FD8810", Offset = "0x5FD7810", VA = "0x5FD8810", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000510")]
	private int System_002EXml_002EIDtdAttributeInfo_002ELineNumber
	{
		[Token(Token = "0x60012D5")]
		[Address(RVA = "0x5FD8830", Offset = "0x5FD7830", VA = "0x5FD8830", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000511")]
	private int System_002EXml_002EIDtdAttributeInfo_002ELinePosition
	{
		[Token(Token = "0x60012D6")]
		[Address(RVA = "0x5FD8840", Offset = "0x5FD7840", VA = "0x5FD8840", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000512")]
	private bool System_002EXml_002EIDtdAttributeInfo_002EIsNonCDataType
	{
		[Token(Token = "0x60012D7")]
		[Address(RVA = "0x5FD8850", Offset = "0x5FD7850", VA = "0x5FD8850", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000513")]
	private bool System_002EXml_002EIDtdAttributeInfo_002EIsDeclaredInExternal
	{
		[Token(Token = "0x60012D8")]
		[Address(RVA = "0x5FD88B0", Offset = "0x5FD78B0", VA = "0x5FD88B0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000514")]
	private bool System_002EXml_002EIDtdAttributeInfo_002EIsXmlAttribute
	{
		[Token(Token = "0x60012D9")]
		[Address(RVA = "0x5FD88C0", Offset = "0x5FD78C0", VA = "0x5FD88C0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000515")]
	private string System_002EXml_002EIDtdDefaultAttributeInfo_002EDefaultValueExpanded
	{
		[Token(Token = "0x60012DA")]
		[Address(RVA = "0x5FD88D0", Offset = "0x5FD78D0", VA = "0x5FD88D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000516")]
	private object System_002EXml_002EIDtdDefaultAttributeInfo_002EDefaultValueTyped
	{
		[Token(Token = "0x60012DB")]
		[Address(RVA = "0x5FD8930", Offset = "0x5FD7930", VA = "0x5FD8930", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000517")]
	private int System_002EXml_002EIDtdDefaultAttributeInfo_002EValueLineNumber
	{
		[Token(Token = "0x60012DC")]
		[Address(RVA = "0x5FD8940", Offset = "0x5FD7940", VA = "0x5FD8940", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000518")]
	private int System_002EXml_002EIDtdDefaultAttributeInfo_002EValueLinePosition
	{
		[Token(Token = "0x60012DD")]
		[Address(RVA = "0x5FD8950", Offset = "0x5FD7950", VA = "0x5FD8950", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000519")]
	internal int LinePosition
	{
		[Token(Token = "0x60012DE")]
		[Address(RVA = "0x5FD8960", Offset = "0x5FD7960", VA = "0x5FD8960")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012DF")]
		[Address(RVA = "0x5FD8970", Offset = "0x5FD7970", VA = "0x5FD8970")]
		set
		{
		}
	}

	[Token(Token = "0x1700051A")]
	internal int LineNumber
	{
		[Token(Token = "0x60012E0")]
		[Address(RVA = "0x5FD8980", Offset = "0x5FD7980", VA = "0x5FD8980")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012E1")]
		[Address(RVA = "0x5FD8990", Offset = "0x5FD7990", VA = "0x5FD8990")]
		set
		{
		}
	}

	[Token(Token = "0x1700051B")]
	internal int ValueLinePosition
	{
		[Token(Token = "0x60012E2")]
		[Address(RVA = "0x5FD89A0", Offset = "0x5FD79A0", VA = "0x5FD89A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012E3")]
		[Address(RVA = "0x5FD89B0", Offset = "0x5FD79B0", VA = "0x5FD89B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700051C")]
	internal int ValueLineNumber
	{
		[Token(Token = "0x60012E4")]
		[Address(RVA = "0x5FD89C0", Offset = "0x5FD79C0", VA = "0x5FD89C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012E5")]
		[Address(RVA = "0x5FD89D0", Offset = "0x5FD79D0", VA = "0x5FD89D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700051D")]
	internal string DefaultValueExpanded
	{
		[Token(Token = "0x60012E6")]
		[Address(RVA = "0x5FD8900", Offset = "0x5FD7900", VA = "0x5FD8900")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012E7")]
		[Address(RVA = "0x5FD89E0", Offset = "0x5FD79E0", VA = "0x5FD89E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700051E")]
	internal XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x60012E8")]
		[Address(RVA = "0x5FD8880", Offset = "0x5FD7880", VA = "0x5FD8880")]
		get
		{
			return default(XmlTokenizedType);
		}
		[Token(Token = "0x60012E9")]
		[Address(RVA = "0x5FD89F0", Offset = "0x5FD79F0", VA = "0x5FD89F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700051F")]
	internal Reserve Reserved
	{
		[Token(Token = "0x60012EA")]
		[Address(RVA = "0x5FD8A20", Offset = "0x5FD7A20", VA = "0x5FD8A20")]
		get
		{
			return default(Reserve);
		}
		[Token(Token = "0x60012EB")]
		[Address(RVA = "0x5FD8A30", Offset = "0x5FD7A30", VA = "0x5FD8A30")]
		set
		{
		}
	}

	[Token(Token = "0x17000520")]
	internal bool DefaultValueChecked
	{
		[Token(Token = "0x60012EC")]
		[Address(RVA = "0x5FD8A40", Offset = "0x5FD7A40", VA = "0x5FD8A40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000521")]
	internal XmlSchemaAttribute SchemaAttribute
	{
		[Token(Token = "0x60012ED")]
		[Address(RVA = "0x5FD8A50", Offset = "0x5FD7A50", VA = "0x5FD8A50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012EE")]
		[Address(RVA = "0x5FD8A60", Offset = "0x5FD7A60", VA = "0x5FD8A60")]
		set
		{
		}
	}

	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x5FD87D0", Offset = "0x5FD77D0", VA = "0x5FD87D0")]
	public SchemaAttDef(XmlQualifiedName name, string prefix)
	{
	}

	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x5FD87E0", Offset = "0x5FD77E0", VA = "0x5FD87E0")]
	public SchemaAttDef(XmlQualifiedName name)
	{
	}

	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x5FD87F0", Offset = "0x5FD77F0", VA = "0x5FD87F0")]
	private SchemaAttDef()
	{
	}

	[Token(Token = "0x60012EF")]
	[Address(RVA = "0x5FD8A70", Offset = "0x5FD7A70", VA = "0x5FD8A70")]
	internal void CheckXmlSpace(IValidationEventHandling validationEventHandling)
	{
	}

	[Token(Token = "0x60012F0")]
	[Address(RVA = "0x5FD8CF0", Offset = "0x5FD7CF0", VA = "0x5FD8CF0")]
	internal SchemaAttDef Clone()
	{
		return null;
	}
}
