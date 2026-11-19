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
		[Address(RVA = "0x60E7790", Offset = "0x60E6790", VA = "0x60E7790", Slot = "62")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D6")]
	public override string InnerText
	{
		[Token(Token = "0x6000A52")]
		[Address(RVA = "0x60E78B0", Offset = "0x60E68B0", VA = "0x60E78B0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x60DBC00", Offset = "0x60DAC00", VA = "0x60DBC00")]
	protected internal XmlUnspecifiedAttribute(string prefix, string localName, string namespaceURI, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x60E77A0", Offset = "0x60E67A0", VA = "0x60E77A0", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x60E78D0", Offset = "0x60E68D0", VA = "0x60E78D0", Slot = "23")]
	public override XmlNode InsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x60E78F0", Offset = "0x60E68F0", VA = "0x60E78F0", Slot = "24")]
	public override XmlNode InsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x60E7910", Offset = "0x60E6910", VA = "0x60E7910", Slot = "25")]
	public override XmlNode ReplaceChild(XmlNode newChild, XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x60E7930", Offset = "0x60E6930", VA = "0x60E7930", Slot = "26")]
	public override XmlNode RemoveChild(XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x60E7950", Offset = "0x60E6950", VA = "0x60E7950", Slot = "28")]
	public override XmlNode AppendChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x60E7970", Offset = "0x60E6970", VA = "0x60E7970", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x60E7980", Offset = "0x60E6980", VA = "0x60E7980")]
	internal void SetSpecified(bool f)
	{
	}
}
