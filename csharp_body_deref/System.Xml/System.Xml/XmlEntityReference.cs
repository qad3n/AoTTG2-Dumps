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
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000250")]
	public override string LocalName
	{
		[Token(Token = "0x6000901")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000251")]
	public override string Value
	{
		[Token(Token = "0x6000902")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000903")]
		[Address(RVA = "0x272C5A0", Offset = "0x272ABA0", VA = "0x18272C5A0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000252")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000904")]
		[Address(RVA = "0x8680A0", Offset = "0x8666A0", VA = "0x1808680A0", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000253")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6000906")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000254")]
	internal override bool IsContainer
	{
		[Token(Token = "0x6000907")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000255")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x600090A")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x600090B")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x17000256")]
	public override string BaseURI
	{
		[Token(Token = "0x600090F")]
		[Address(RVA = "0x272C400", Offset = "0x272AA00", VA = "0x18272C400", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000257")]
	internal string ChildBaseURI
	{
		[Token(Token = "0x6000911")]
		[Address(RVA = "0x272C440", Offset = "0x272AA40", VA = "0x18272C440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x272C280", Offset = "0x272A880", VA = "0x18272C280")]
	protected internal XmlEntityReference(string name, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x272BE10", Offset = "0x272A410", VA = "0x18272BE10", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x272BF40", Offset = "0x272A540", VA = "0x18272BF40", Slot = "50")]
	internal override void SetParent(XmlNode node)
	{
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x272BF20", Offset = "0x272A520", VA = "0x18272BF20", Slot = "51")]
	internal override void SetParentForLoad(XmlNode node)
	{
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x272AD40", Offset = "0x2729340", VA = "0x18272AD40", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x272C250", Offset = "0x272A850", VA = "0x18272C250", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x272C020", Offset = "0x272A620", VA = "0x18272C020", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x272BE60", Offset = "0x272A460", VA = "0x18272BE60")]
	private string ConstructBaseURI(string baseURI, string systemId)
	{
		return null;
	}
}
