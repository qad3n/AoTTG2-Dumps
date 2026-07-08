using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000A7")]
public class XmlImplementation
{
	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x10")]
	private XmlNameTable nameTable;

	[Token(Token = "0x17000258")]
	internal XmlNameTable NameTable
	{
		[Token(Token = "0x6000915")]
		[Address(RVA = "0x4497CB0", Offset = "0x4497CB0", VA = "0x4497CB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x4497B00", Offset = "0x4497B00", VA = "0x4497B00")]
	public XmlImplementation()
	{
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x4497C30", Offset = "0x4497C30", VA = "0x4497C30")]
	public XmlImplementation(XmlNameTable nt)
	{
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x4497C60", Offset = "0x4497C60", VA = "0x4497C60", Slot = "4")]
	public virtual XmlDocument CreateDocument()
	{
		return null;
	}
}
