using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x2000008")]
public class XComment : XNode
{
	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x28")]
	internal string value;

	[Token(Token = "0x17000006")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x433C400", Offset = "0x433C400", VA = "0x433C400", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000007")]
	public string Value
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x433C410", Offset = "0x433C410", VA = "0x433C410")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x433C420", Offset = "0x433C420", VA = "0x433C420")]
		set
		{
		}
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x433C2F0", Offset = "0x433C2F0", VA = "0x433C2F0")]
	public XComment(string value)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x433C380", Offset = "0x433C380", VA = "0x433C380")]
	public XComment(XComment other)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x433C650", Offset = "0x433C650", VA = "0x433C650", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x433C6C0", Offset = "0x433C6C0", VA = "0x433C6C0", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}
}
