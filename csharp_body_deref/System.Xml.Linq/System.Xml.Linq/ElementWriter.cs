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
	[Address(RVA = "0x4692EB0", Offset = "0x4692EB0", VA = "0x4692EB0")]
	public ElementWriter(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x4692ED0", Offset = "0x4692ED0", VA = "0x4692ED0")]
	public void WriteElement(XElement e)
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x4694790", Offset = "0x4694790", VA = "0x4694790")]
	private string GetPrefixOfNamespace(XNamespace ns, bool allowDefaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x4694480", Offset = "0x4694480", VA = "0x4694480")]
	private void PushAncestors(XElement e)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x4694AE0", Offset = "0x4694AE0", VA = "0x4694AE0")]
	private void PushElement(XElement e)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4694730", Offset = "0x4694730", VA = "0x4694730")]
	private void WriteEndElement()
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x4694760", Offset = "0x4694760", VA = "0x4694760")]
	private void WriteFullEndElement()
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x46945C0", Offset = "0x46945C0", VA = "0x46945C0")]
	private void WriteStartElement(XElement e)
	{
	}
}
