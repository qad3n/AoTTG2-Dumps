using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x2000016")]
internal struct ElementWriter
{
	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x0")]
	private XmlWriter _writer;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x8")]
	private NamespaceResolver _resolver;

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x43425E0", Offset = "0x43425E0", VA = "0x43425E0")]
	public ElementWriter(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x4342600", Offset = "0x4342600", VA = "0x4342600")]
	public void WriteElement(XElement e)
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x4343EC0", Offset = "0x4343EC0", VA = "0x4343EC0")]
	private string GetPrefixOfNamespace(XNamespace ns, bool allowDefaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x4343BB0", Offset = "0x4343BB0", VA = "0x4343BB0")]
	private void PushAncestors(XElement e)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x4344210", Offset = "0x4344210", VA = "0x4344210")]
	private void PushElement(XElement e)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4343E60", Offset = "0x4343E60", VA = "0x4343E60")]
	private void WriteEndElement()
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x4343E90", Offset = "0x4343E90", VA = "0x4343E90")]
	private void WriteFullEndElement()
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x4343CF0", Offset = "0x4343CF0", VA = "0x4343CF0")]
	private void WriteStartElement(XElement e)
	{
	}
}
