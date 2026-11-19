// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlEntityReference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000A5")]
public class XmlEntityReference : XmlLinkedNode
{
	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x20")]
	private string name;

	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x28")]
	private XmlLinkedNode lastChild;

	[Token(Token = "0x1700024F")]
	public override string Name
	{
		[Token(Token = "0x6000900")]
		[Address(RVA = "0x60D7580", Offset = "0x60D6580", VA = "0x60D7580", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000250")]
	public override string LocalName
	{
		[Token(Token = "0x6000901")]
		[Address(RVA = "0x60D7590", Offset = "0x60D6590", VA = "0x60D7590", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000251")]
	public override string Value
	{
		[Token(Token = "0x6000902")]
		[Address(RVA = "0x60D75A0", Offset = "0x60D65A0", VA = "0x60D75A0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000903")]
		[Address(RVA = "0x60D75B0", Offset = "0x60D65B0", VA = "0x60D75B0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000252")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000904")]
		[Address(RVA = "0x60D7610", Offset = "0x60D6610", VA = "0x60D7610", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000253")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6000906")]
		[Address(RVA = "0x60D7660", Offset = "0x60D6660", VA = "0x60D7660", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000254")]
	internal override bool IsContainer
	{
		[Token(Token = "0x6000907")]
		[Address(RVA = "0x60D7670", Offset = "0x60D6670", VA = "0x60D7670", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000255")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x600090A")]
		[Address(RVA = "0x60D7DE0", Offset = "0x60D6DE0", VA = "0x60D7DE0", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x600090B")]
		[Address(RVA = "0x60D7DF0", Offset = "0x60D6DF0", VA = "0x60D7DF0", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x17000256")]
	public override string BaseURI
	{
		[Token(Token = "0x600090F")]
		[Address(RVA = "0x60D8150", Offset = "0x60D7150", VA = "0x60D8150", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000257")]
	internal string ChildBaseURI
	{
		[Token(Token = "0x6000911")]
		[Address(RVA = "0x60D8240", Offset = "0x60D7240", VA = "0x60D8240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x60D7480", Offset = "0x60D6480", VA = "0x60D7480")]
	protected internal XmlEntityReference(string name, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x60D7620", Offset = "0x60D6620", VA = "0x60D7620", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x60D7680", Offset = "0x60D6680", VA = "0x60D7680", Slot = "50")]
	internal override void SetParent(XmlNode node)
	{
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x60D7DC0", Offset = "0x60D6DC0", VA = "0x60D7DC0", Slot = "51")]
	internal override void SetParentForLoad(XmlNode node)
	{
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x60D7E00", Offset = "0x60D6E00", VA = "0x60D7E00", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x60D7E20", Offset = "0x60D6E20", VA = "0x60D7E20", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x60D7E50", Offset = "0x60D6E50", VA = "0x60D7E50", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x60D8190", Offset = "0x60D7190", VA = "0x60D8190")]
	private string ConstructBaseURI(string baseURI, string systemId)
	{
		return null;
	}
}
