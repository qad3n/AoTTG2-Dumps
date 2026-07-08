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
		[Address(RVA = "0x4496C00", Offset = "0x4496C00", VA = "0x4496C00", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000250")]
	public override string LocalName
	{
		[Token(Token = "0x6000901")]
		[Address(RVA = "0x4496C10", Offset = "0x4496C10", VA = "0x4496C10", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000251")]
	public override string Value
	{
		[Token(Token = "0x6000902")]
		[Address(RVA = "0x4496C20", Offset = "0x4496C20", VA = "0x4496C20", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000903")]
		[Address(RVA = "0x4496C30", Offset = "0x4496C30", VA = "0x4496C30", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000252")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000904")]
		[Address(RVA = "0x4496C90", Offset = "0x4496C90", VA = "0x4496C90", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000253")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6000906")]
		[Address(RVA = "0x4496CE0", Offset = "0x4496CE0", VA = "0x4496CE0", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000254")]
	internal override bool IsContainer
	{
		[Token(Token = "0x6000907")]
		[Address(RVA = "0x4496CF0", Offset = "0x4496CF0", VA = "0x4496CF0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000255")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x600090A")]
		[Address(RVA = "0x4497570", Offset = "0x4497570", VA = "0x4497570", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x600090B")]
		[Address(RVA = "0x4497580", Offset = "0x4497580", VA = "0x4497580", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x17000256")]
	public override string BaseURI
	{
		[Token(Token = "0x600090F")]
		[Address(RVA = "0x4497970", Offset = "0x4497970", VA = "0x4497970", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000257")]
	internal string ChildBaseURI
	{
		[Token(Token = "0x6000911")]
		[Address(RVA = "0x4497A60", Offset = "0x4497A60", VA = "0x4497A60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x4496B00", Offset = "0x4496B00", VA = "0x4496B00")]
	protected internal XmlEntityReference(string name, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x4496CA0", Offset = "0x4496CA0", VA = "0x4496CA0", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x4496D00", Offset = "0x4496D00", VA = "0x4496D00", Slot = "50")]
	internal override void SetParent(XmlNode node)
	{
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x4497550", Offset = "0x4497550", VA = "0x4497550", Slot = "51")]
	internal override void SetParentForLoad(XmlNode node)
	{
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x4497590", Offset = "0x4497590", VA = "0x4497590", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x44975B0", Offset = "0x44975B0", VA = "0x44975B0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x44975E0", Offset = "0x44975E0", VA = "0x44975E0", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x44979B0", Offset = "0x44979B0", VA = "0x44979B0")]
	private string ConstructBaseURI(string baseURI, string systemId)
	{
		return null;
	}
}
