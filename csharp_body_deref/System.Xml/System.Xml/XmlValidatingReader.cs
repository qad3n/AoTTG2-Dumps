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
		[Address(RVA = "0x4471EC0", Offset = "0x4471EC0", VA = "0x4471EC0", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000138")]
	public override string LocalName
	{
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x4471EF0", Offset = "0x4471EF0", VA = "0x4471EF0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000139")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x4471F20", Offset = "0x4471F20", VA = "0x4471F20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013A")]
	public override string Prefix
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x4471F50", Offset = "0x4471F50", VA = "0x4471F50", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013B")]
	public override string Value
	{
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x4471F80", Offset = "0x4471F80", VA = "0x4471F80", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013C")]
	public override int Depth
	{
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x4471FB0", Offset = "0x4471FB0", VA = "0x4471FB0", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013D")]
	public override string BaseURI
	{
		[Token(Token = "0x60005D6")]
		[Address(RVA = "0x4471FE0", Offset = "0x4471FE0", VA = "0x4471FE0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013E")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x4472010", Offset = "0x4472010", VA = "0x4472010", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013F")]
	public override int AttributeCount
	{
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x4472040", Offset = "0x4472040", VA = "0x4472040", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000140")]
	public override bool EOF
	{
		[Token(Token = "0x60005E2")]
		[Address(RVA = "0x4472220", Offset = "0x4472220", VA = "0x4472220", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000141")]
	public override ReadState ReadState
	{
		[Token(Token = "0x60005E3")]
		[Address(RVA = "0x4472250", Offset = "0x4472250", VA = "0x4472250", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x17000142")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x60005E4")]
		[Address(RVA = "0x4472280", Offset = "0x4472280", VA = "0x4472280", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000143")]
	public bool Namespaces
	{
		[Token(Token = "0x60005E7")]
		[Address(RVA = "0x4472320", Offset = "0x4472320", VA = "0x4472320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x4472070", Offset = "0x4472070", VA = "0x4472070", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x44720A0", Offset = "0x44720A0", VA = "0x44720A0", Slot = "23")]
	public override string GetAttribute(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x44720D0", Offset = "0x44720D0", VA = "0x44720D0", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x4472100", Offset = "0x4472100", VA = "0x4472100", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x4472130", Offset = "0x4472130", VA = "0x4472130", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x4472160", Offset = "0x4472160", VA = "0x4472160", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x4472190", Offset = "0x4472190", VA = "0x4472190", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x44721C0", Offset = "0x44721C0", VA = "0x44721C0", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x44721F0", Offset = "0x44721F0", VA = "0x44721F0", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x44722B0", Offset = "0x44722B0", VA = "0x44722B0", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x44722F0", Offset = "0x44722F0", VA = "0x44722F0", Slot = "39")]
	public override void ResolveEntity()
	{
	}
}
