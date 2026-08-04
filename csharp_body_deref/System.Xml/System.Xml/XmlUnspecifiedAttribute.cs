// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlUnspecifiedAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x47E4D40", Offset = "0x47E4D40", VA = "0x47E4D40", Slot = "62")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D6")]
	public override string InnerText
	{
		[Token(Token = "0x6000A52")]
		[Address(RVA = "0x47E4E60", Offset = "0x47E4E60", VA = "0x47E4E60", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x47D8CA0", Offset = "0x47D8CA0", VA = "0x47D8CA0")]
	protected internal XmlUnspecifiedAttribute(string prefix, string localName, string namespaceURI, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x47E4D50", Offset = "0x47E4D50", VA = "0x47E4D50", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x47E4E80", Offset = "0x47E4E80", VA = "0x47E4E80", Slot = "23")]
	public override XmlNode InsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x47E4EA0", Offset = "0x47E4EA0", VA = "0x47E4EA0", Slot = "24")]
	public override XmlNode InsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x47E4EC0", Offset = "0x47E4EC0", VA = "0x47E4EC0", Slot = "25")]
	public override XmlNode ReplaceChild(XmlNode newChild, XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x47E4EE0", Offset = "0x47E4EE0", VA = "0x47E4EE0", Slot = "26")]
	public override XmlNode RemoveChild(XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x47E4F00", Offset = "0x47E4F00", VA = "0x47E4F00", Slot = "28")]
	public override XmlNode AppendChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x47E4F20", Offset = "0x47E4F20", VA = "0x47E4F20", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x47E4F30", Offset = "0x47E4F30", VA = "0x47E4F30")]
	internal void SetSpecified(bool f)
	{
	}
}
