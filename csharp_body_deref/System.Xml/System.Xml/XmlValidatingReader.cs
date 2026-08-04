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
		[Address(RVA = "0x47AF620", Offset = "0x47AF620", VA = "0x47AF620", Slot = "6")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000138")]
	public override string LocalName
	{
		[Token(Token = "0x60005D1")]
		[Address(RVA = "0x47AF650", Offset = "0x47AF650", VA = "0x47AF650", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000139")]
	public override string NamespaceURI
	{
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x47AF680", Offset = "0x47AF680", VA = "0x47AF680", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013A")]
	public override string Prefix
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x47AF6B0", Offset = "0x47AF6B0", VA = "0x47AF6B0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013B")]
	public override string Value
	{
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x47AF6E0", Offset = "0x47AF6E0", VA = "0x47AF6E0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013C")]
	public override int Depth
	{
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x47AF710", Offset = "0x47AF710", VA = "0x47AF710", Slot = "12")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013D")]
	public override string BaseURI
	{
		[Token(Token = "0x60005D6")]
		[Address(RVA = "0x47AF740", Offset = "0x47AF740", VA = "0x47AF740", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013E")]
	public override bool IsEmptyElement
	{
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x47AF770", Offset = "0x47AF770", VA = "0x47AF770", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013F")]
	public override int AttributeCount
	{
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x47AF7A0", Offset = "0x47AF7A0", VA = "0x47AF7A0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000140")]
	public override bool EOF
	{
		[Token(Token = "0x60005E2")]
		[Address(RVA = "0x47AF980", Offset = "0x47AF980", VA = "0x47AF980", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000141")]
	public override ReadState ReadState
	{
		[Token(Token = "0x60005E3")]
		[Address(RVA = "0x47AF9B0", Offset = "0x47AF9B0", VA = "0x47AF9B0", Slot = "34")]
		get
		{
			return default(ReadState);
		}
	}

	[Token(Token = "0x17000142")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x60005E4")]
		[Address(RVA = "0x47AF9E0", Offset = "0x47AF9E0", VA = "0x47AF9E0", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000143")]
	public bool Namespaces
	{
		[Token(Token = "0x60005E7")]
		[Address(RVA = "0x47AFA80", Offset = "0x47AFA80", VA = "0x47AFA80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x47AF7D0", Offset = "0x47AF7D0", VA = "0x47AF7D0", Slot = "22")]
	public override string GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x47AF800", Offset = "0x47AF800", VA = "0x47AF800", Slot = "23")]
	public override string GetAttribute(string localName, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x47AF830", Offset = "0x47AF830", VA = "0x47AF830", Slot = "24")]
	public override string GetAttribute(int i)
	{
		return null;
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x47AF860", Offset = "0x47AF860", VA = "0x47AF860", Slot = "25")]
	public override bool MoveToAttribute(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x47AF890", Offset = "0x47AF890", VA = "0x47AF890", Slot = "27")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x47AF8C0", Offset = "0x47AF8C0", VA = "0x47AF8C0", Slot = "28")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x47AF8F0", Offset = "0x47AF8F0", VA = "0x47AF8F0", Slot = "29")]
	public override bool MoveToElement()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x47AF920", Offset = "0x47AF920", VA = "0x47AF920", Slot = "30")]
	public override bool ReadAttributeValue()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x47AF950", Offset = "0x47AF950", VA = "0x47AF950", Slot = "31")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x47AFA10", Offset = "0x47AFA10", VA = "0x47AFA10", Slot = "37")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x47AFA50", Offset = "0x47AFA50", VA = "0x47AFA50", Slot = "39")]
	public override void ResolveEntity()
	{
	}
}
