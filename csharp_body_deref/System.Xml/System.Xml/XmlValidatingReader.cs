// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlValidatingReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200006F")]
[Obsolete("Use XmlReader created by XmlReader.Create() method using appropriate XmlReaderSettings instead. https://go.microsoft.com/fwlink/?linkid=14202")]
public class XmlValidatingReader : XmlReader
{
	[Token(Token = "0x400030A")]
	[FieldOffset(Offset = "0x10")]
	private XmlValidatingReaderImpl impl;

	[Token(Token = "0x17000137")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60005D0")]
		[Address(RVA = "0x2547600", Offset = "0x2545C00", VA = "0x182547600", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000138")]
	public override string LocalName
	{
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x25475D0", Offset = "0x2545BD0", VA = "0x1825475D0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000139")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x1A1F330", Offset = "0x1A1D930", VA = "0x181A1F330", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013A")]
	public override string Prefix
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x1A1F420", Offset = "0x1A1DA20", VA = "0x181A1F420", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013B")]
	public override string Value
	{
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x1A1F3F0", Offset = "0x1A1D9F0", VA = "0x181A1F3F0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013C")]
	public override int Depth
	{
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x2547540", Offset = "0x2545B40", VA = "0x182547540", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013D")]
	public override string BaseURI
	{
		[Token(Token = "0x60005D6")]
		[Address(RVA = "0x25474E0", Offset = "0x2545AE0", VA = "0x1825474E0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013E")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x25475A0", Offset = "0x2545BA0", VA = "0x1825475A0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013F")]
	public override int AttributeCount
	{
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x25474B0", Offset = "0x2545AB0", VA = "0x1825474B0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000140")]
	public override bool EOF
	{
		[Token(Token = "0x60005E2")]
		[Address(RVA = "0x2547570", Offset = "0x2545B70", VA = "0x182547570", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000141")]
	public override ReadState ReadState
	{
		[Token(Token = "0x60005E3")]
		[Address(RVA = "0x2547630", Offset = "0x2545C30", VA = "0x182547630", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x17000142")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x60005E4")]
		[Address(RVA = "0x1CBA960", Offset = "0x1CB8F60", VA = "0x181CBA960", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000143")]
	public bool Namespaces
	{
		[Token(Token = "0x60005E7")]
		[Address(RVA = "0x26FDEC0", Offset = "0x26FC4C0", VA = "0x1826FDEC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x24447C0", Offset = "0x2442DC0", VA = "0x1824447C0", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x25472F0", Offset = "0x25458F0", VA = "0x1825472F0", Slot = "23")]
	public override string GetAttribute(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x2547320", Offset = "0x2545920", VA = "0x182547320", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x2547350", Offset = "0x2545950", VA = "0x182547350", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x2547380", Offset = "0x2545980", VA = "0x182547380", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x1AC1C00", Offset = "0x1AC0200", VA = "0x181AC1C00", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x197BE90", Offset = "0x197A490", VA = "0x18197BE90", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x25473B0", Offset = "0x25459B0", VA = "0x1825473B0", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x2547410", Offset = "0x2545A10", VA = "0x182547410", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x26F1D20", Offset = "0x26F0320", VA = "0x1826F1D20", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x1CBA930", Offset = "0x1CB8F30", VA = "0x181CBA930", Slot = "39")]
	public override void ResolveEntity()
	{
	}
}
