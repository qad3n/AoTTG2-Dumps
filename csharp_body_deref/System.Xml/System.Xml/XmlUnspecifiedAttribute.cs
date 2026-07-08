using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000BA")]
internal class XmlUnspecifiedAttribute : XmlAttribute
{
	[Token(Token = "0x40004C2")]
	[FieldOffset(Offset = "0x28")]
	private bool fSpecified;

	[Token(Token = "0x170002D5")]
	public override bool Specified
	{
		[Token(Token = "0x6000A50")]
		[Address(RVA = "0x44A75E0", Offset = "0x44A75E0", VA = "0x44A75E0", Slot = "62")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D6")]
	public override string InnerText
	{
		[Token(Token = "0x6000A52")]
		[Address(RVA = "0x44A7700", Offset = "0x44A7700", VA = "0x44A7700", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x449B540", Offset = "0x449B540", VA = "0x449B540")]
	protected internal XmlUnspecifiedAttribute(string prefix, string localName, string namespaceURI, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x44A75F0", Offset = "0x44A75F0", VA = "0x44A75F0", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x44A7720", Offset = "0x44A7720", VA = "0x44A7720", Slot = "23")]
	public override XmlNode InsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x44A7740", Offset = "0x44A7740", VA = "0x44A7740", Slot = "24")]
	public override XmlNode InsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x44A7760", Offset = "0x44A7760", VA = "0x44A7760", Slot = "25")]
	public override XmlNode ReplaceChild(XmlNode newChild, XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x44A7780", Offset = "0x44A7780", VA = "0x44A7780", Slot = "26")]
	public override XmlNode RemoveChild(XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x44A77A0", Offset = "0x44A77A0", VA = "0x44A77A0", Slot = "28")]
	public override XmlNode AppendChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x44A77C0", Offset = "0x44A77C0", VA = "0x44A77C0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x44A77D0", Offset = "0x44A77D0", VA = "0x44A77D0")]
	internal void SetSpecified(bool f)
	{
	}
}
