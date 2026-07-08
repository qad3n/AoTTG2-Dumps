using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001EF")]
internal sealed class SchemaEntity : IDtdEntityInfo
{
	[Token(Token = "0x400091E")]
	[FieldOffset(Offset = "0x10")]
	private XmlQualifiedName qname;

	[Token(Token = "0x400091F")]
	[FieldOffset(Offset = "0x18")]
	private string url;

	[Token(Token = "0x4000920")]
	[FieldOffset(Offset = "0x20")]
	private string pubid;

	[Token(Token = "0x4000921")]
	[FieldOffset(Offset = "0x28")]
	private string text;

	[Token(Token = "0x4000922")]
	[FieldOffset(Offset = "0x30")]
	private XmlQualifiedName ndata;

	[Token(Token = "0x4000923")]
	[FieldOffset(Offset = "0x38")]
	private int lineNumber;

	[Token(Token = "0x4000924")]
	[FieldOffset(Offset = "0x3C")]
	private int linePosition;

	[Token(Token = "0x4000925")]
	[FieldOffset(Offset = "0x40")]
	private bool isParameter;

	[Token(Token = "0x4000926")]
	[FieldOffset(Offset = "0x41")]
	private bool isExternal;

	[Token(Token = "0x4000927")]
	[FieldOffset(Offset = "0x42")]
	private bool parsingInProgress;

	[Token(Token = "0x4000928")]
	[FieldOffset(Offset = "0x43")]
	private bool isDeclaredInExternal;

	[Token(Token = "0x4000929")]
	[FieldOffset(Offset = "0x48")]
	private string baseURI;

	[Token(Token = "0x400092A")]
	[FieldOffset(Offset = "0x50")]
	private string declaredURI;

	[Token(Token = "0x1700053E")]
	private string System_002EXml_002EIDtdEntityInfo_002EName
	{
		[Token(Token = "0x600139E")]
		[Address(RVA = "0x43AC730", Offset = "0x43AC730", VA = "0x43AC730", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053F")]
	private bool System_002EXml_002EIDtdEntityInfo_002EIsExternal
	{
		[Token(Token = "0x600139F")]
		[Address(RVA = "0x43AC750", Offset = "0x43AC750", VA = "0x43AC750", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000540")]
	private bool System_002EXml_002EIDtdEntityInfo_002EIsDeclaredInExternal
	{
		[Token(Token = "0x60013A0")]
		[Address(RVA = "0x43AC760", Offset = "0x43AC760", VA = "0x43AC760", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000541")]
	private bool System_002EXml_002EIDtdEntityInfo_002EIsUnparsedEntity
	{
		[Token(Token = "0x60013A1")]
		[Address(RVA = "0x43AC770", Offset = "0x43AC770", VA = "0x43AC770", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000542")]
	private bool System_002EXml_002EIDtdEntityInfo_002EIsParameterEntity
	{
		[Token(Token = "0x60013A2")]
		[Address(RVA = "0x43AC790", Offset = "0x43AC790", VA = "0x43AC790", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000543")]
	private string System_002EXml_002EIDtdEntityInfo_002EBaseUriString
	{
		[Token(Token = "0x60013A3")]
		[Address(RVA = "0x43AC7A0", Offset = "0x43AC7A0", VA = "0x43AC7A0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000544")]
	private string System_002EXml_002EIDtdEntityInfo_002EDeclaredUriString
	{
		[Token(Token = "0x60013A4")]
		[Address(RVA = "0x43AC800", Offset = "0x43AC800", VA = "0x43AC800", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000545")]
	private string System_002EXml_002EIDtdEntityInfo_002ESystemId
	{
		[Token(Token = "0x60013A5")]
		[Address(RVA = "0x43AC860", Offset = "0x43AC860", VA = "0x43AC860", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000546")]
	private string System_002EXml_002EIDtdEntityInfo_002EPublicId
	{
		[Token(Token = "0x60013A6")]
		[Address(RVA = "0x43AC870", Offset = "0x43AC870", VA = "0x43AC870", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000547")]
	private string System_002EXml_002EIDtdEntityInfo_002EText
	{
		[Token(Token = "0x60013A7")]
		[Address(RVA = "0x43AC880", Offset = "0x43AC880", VA = "0x43AC880", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000548")]
	private int System_002EXml_002EIDtdEntityInfo_002ELineNumber
	{
		[Token(Token = "0x60013A8")]
		[Address(RVA = "0x43AC890", Offset = "0x43AC890", VA = "0x43AC890", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000549")]
	private int System_002EXml_002EIDtdEntityInfo_002ELinePosition
	{
		[Token(Token = "0x60013A9")]
		[Address(RVA = "0x43AC8A0", Offset = "0x43AC8A0", VA = "0x43AC8A0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700054A")]
	internal XmlQualifiedName Name
	{
		[Token(Token = "0x60013AB")]
		[Address(RVA = "0x43AC980", Offset = "0x43AC980", VA = "0x43AC980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700054B")]
	internal string Url
	{
		[Token(Token = "0x60013AC")]
		[Address(RVA = "0x43AC990", Offset = "0x43AC990", VA = "0x43AC990")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013AD")]
		[Address(RVA = "0x43AC9A0", Offset = "0x43AC9A0", VA = "0x43AC9A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700054C")]
	internal string Pubid
	{
		[Token(Token = "0x60013AE")]
		[Address(RVA = "0x43AC9C0", Offset = "0x43AC9C0", VA = "0x43AC9C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013AF")]
		[Address(RVA = "0x43AC9D0", Offset = "0x43AC9D0", VA = "0x43AC9D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700054D")]
	internal bool IsExternal
	{
		[Token(Token = "0x60013B0")]
		[Address(RVA = "0x43AC9E0", Offset = "0x43AC9E0", VA = "0x43AC9E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60013B1")]
		[Address(RVA = "0x43AC9F0", Offset = "0x43AC9F0", VA = "0x43AC9F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700054E")]
	internal bool DeclaredInExternal
	{
		[Token(Token = "0x60013B2")]
		[Address(RVA = "0x43ACA00", Offset = "0x43ACA00", VA = "0x43ACA00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60013B3")]
		[Address(RVA = "0x43ACA10", Offset = "0x43ACA10", VA = "0x43ACA10")]
		set
		{
		}
	}

	[Token(Token = "0x1700054F")]
	internal XmlQualifiedName NData
	{
		[Token(Token = "0x60013B4")]
		[Address(RVA = "0x43ACA20", Offset = "0x43ACA20", VA = "0x43ACA20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013B5")]
		[Address(RVA = "0x43ACA30", Offset = "0x43ACA30", VA = "0x43ACA30")]
		set
		{
		}
	}

	[Token(Token = "0x17000550")]
	internal string Text
	{
		[Token(Token = "0x60013B6")]
		[Address(RVA = "0x43ACA40", Offset = "0x43ACA40", VA = "0x43ACA40")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013B7")]
		[Address(RVA = "0x43ACA50", Offset = "0x43ACA50", VA = "0x43ACA50")]
		set
		{
		}
	}

	[Token(Token = "0x17000551")]
	internal int Line
	{
		[Token(Token = "0x60013B8")]
		[Address(RVA = "0x43ACA70", Offset = "0x43ACA70", VA = "0x43ACA70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60013B9")]
		[Address(RVA = "0x43ACA80", Offset = "0x43ACA80", VA = "0x43ACA80")]
		set
		{
		}
	}

	[Token(Token = "0x17000552")]
	internal int Pos
	{
		[Token(Token = "0x60013BA")]
		[Address(RVA = "0x43ACA90", Offset = "0x43ACA90", VA = "0x43ACA90")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60013BB")]
		[Address(RVA = "0x43ACAA0", Offset = "0x43ACAA0", VA = "0x43ACAA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000553")]
	internal string BaseURI
	{
		[Token(Token = "0x60013BC")]
		[Address(RVA = "0x43AC7D0", Offset = "0x43AC7D0", VA = "0x43AC7D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013BD")]
		[Address(RVA = "0x43ACAB0", Offset = "0x43ACAB0", VA = "0x43ACAB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000554")]
	internal bool ParsingInProgress
	{
		[Token(Token = "0x60013BE")]
		[Address(RVA = "0x43ACAC0", Offset = "0x43ACAC0", VA = "0x43ACAC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60013BF")]
		[Address(RVA = "0x43ACAD0", Offset = "0x43ACAD0", VA = "0x43ACAD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000555")]
	internal string DeclaredURI
	{
		[Token(Token = "0x60013C0")]
		[Address(RVA = "0x43AC830", Offset = "0x43AC830", VA = "0x43AC830")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013C1")]
		[Address(RVA = "0x43ACAE0", Offset = "0x43ACAE0", VA = "0x43ACAE0")]
		set
		{
		}
	}

	[Token(Token = "0x600139D")]
	[Address(RVA = "0x43AC6A0", Offset = "0x43AC6A0", VA = "0x43AC6A0")]
	internal SchemaEntity(XmlQualifiedName qname, bool isParameter)
	{
	}

	[Token(Token = "0x60013AA")]
	[Address(RVA = "0x43AC8B0", Offset = "0x43AC8B0", VA = "0x43AC8B0")]
	internal static bool IsPredefinedEntity(string n)
	{
		return default(bool);
	}
}
