// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Linq.ElementWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x25E44B0", Offset = "0x25E2AB0", VA = "0x1825E44B0")]
	public ElementWriter(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x25E3F20", Offset = "0x25E2520", VA = "0x1825E3F20")]
	public void WriteElement(XElement e)
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x25E3AA0", Offset = "0x25E20A0", VA = "0x1825E3AA0")]
	private string GetPrefixOfNamespace(XNamespace ns, bool allowDefaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x25E3B80", Offset = "0x25E2180", VA = "0x1825E3B80")]
	private void PushAncestors(XElement e)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x25E3DA0", Offset = "0x25E23A0", VA = "0x1825E3DA0")]
	private void PushElement(XElement e)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x25E4110", Offset = "0x25E2710", VA = "0x1825E4110")]
	private void WriteEndElement()
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x25E4150", Offset = "0x25E2750", VA = "0x1825E4150")]
	private void WriteFullEndElement()
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x25E4190", Offset = "0x25E2790", VA = "0x1825E4190")]
	private void WriteStartElement(XElement e)
	{
	}
}
