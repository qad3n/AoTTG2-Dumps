using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000B6")]
public class XmlNotation : XmlNode
{
	[Token(Token = "0x40004BD")]
	[FieldOffset(Offset = "0x18")]
	private string publicId;

	[Token(Token = "0x40004BE")]
	[FieldOffset(Offset = "0x20")]
	private string systemId;

	[Token(Token = "0x40004BF")]
	[FieldOffset(Offset = "0x28")]
	private string name;

	[Token(Token = "0x170002B8")]
	public override string Name
	{
		[Token(Token = "0x6000A1E")]
		[Address(RVA = "0x44A6BD0", Offset = "0x44A6BD0", VA = "0x44A6BD0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B9")]
	public override string LocalName
	{
		[Token(Token = "0x6000A1F")]
		[Address(RVA = "0x44A6BE0", Offset = "0x44A6BE0", VA = "0x44A6BE0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002BA")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000A20")]
		[Address(RVA = "0x44A6BF0", Offset = "0x44A6BF0", VA = "0x44A6BF0", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170002BB")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6000A22")]
		[Address(RVA = "0x44A6C60", Offset = "0x44A6C60", VA = "0x44A6C60", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002BC")]
	public override string InnerXml
	{
		[Token(Token = "0x6000A23")]
		[Address(RVA = "0x44A6C70", Offset = "0x44A6C70", VA = "0x44A6C70", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x449B950", Offset = "0x449B950", VA = "0x449B950")]
	internal XmlNotation(string name, string publicId, string systemId, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000A21")]
	[Address(RVA = "0x44A6C00", Offset = "0x44A6C00", VA = "0x44A6C00", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000A24")]
	[Address(RVA = "0x44A6CD0", Offset = "0x44A6CD0", VA = "0x44A6CD0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000A25")]
	[Address(RVA = "0x44A6CE0", Offset = "0x44A6CE0", VA = "0x44A6CE0", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
