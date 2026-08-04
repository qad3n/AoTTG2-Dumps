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
		[Address(RVA = "0x47D4360", Offset = "0x47D4360", VA = "0x47D4360", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000250")]
	public override string LocalName
	{
		[Token(Token = "0x6000901")]
		[Address(RVA = "0x47D4370", Offset = "0x47D4370", VA = "0x47D4370", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000251")]
	public override string Value
	{
		[Token(Token = "0x6000902")]
		[Address(RVA = "0x47D4380", Offset = "0x47D4380", VA = "0x47D4380", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000903")]
		[Address(RVA = "0x47D4390", Offset = "0x47D4390", VA = "0x47D4390", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000252")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000904")]
		[Address(RVA = "0x47D43F0", Offset = "0x47D43F0", VA = "0x47D43F0", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000253")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6000906")]
		[Address(RVA = "0x47D4440", Offset = "0x47D4440", VA = "0x47D4440", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000254")]
	internal override bool IsContainer
	{
		[Token(Token = "0x6000907")]
		[Address(RVA = "0x47D4450", Offset = "0x47D4450", VA = "0x47D4450", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000255")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x600090A")]
		[Address(RVA = "0x47D4CD0", Offset = "0x47D4CD0", VA = "0x47D4CD0", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x600090B")]
		[Address(RVA = "0x47D4CE0", Offset = "0x47D4CE0", VA = "0x47D4CE0", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x17000256")]
	public override string BaseURI
	{
		[Token(Token = "0x600090F")]
		[Address(RVA = "0x47D50D0", Offset = "0x47D50D0", VA = "0x47D50D0", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000257")]
	internal string ChildBaseURI
	{
		[Token(Token = "0x6000911")]
		[Address(RVA = "0x47D51C0", Offset = "0x47D51C0", VA = "0x47D51C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x47D4260", Offset = "0x47D4260", VA = "0x47D4260")]
	protected internal XmlEntityReference(string name, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x47D4400", Offset = "0x47D4400", VA = "0x47D4400", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x47D4460", Offset = "0x47D4460", VA = "0x47D4460", Slot = "50")]
	internal override void SetParent(XmlNode node)
	{
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x47D4CB0", Offset = "0x47D4CB0", VA = "0x47D4CB0", Slot = "51")]
	internal override void SetParentForLoad(XmlNode node)
	{
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x47D4CF0", Offset = "0x47D4CF0", VA = "0x47D4CF0", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x47D4D10", Offset = "0x47D4D10", VA = "0x47D4D10", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x47D4D40", Offset = "0x47D4D40", VA = "0x47D4D40", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x47D5110", Offset = "0x47D5110", VA = "0x47D5110")]
	private string ConstructBaseURI(string baseURI, string systemId)
	{
		return null;
	}
}
