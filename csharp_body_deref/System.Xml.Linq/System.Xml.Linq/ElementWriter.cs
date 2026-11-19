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
	[Address(RVA = "0x5FA4910", Offset = "0x5FA3910", VA = "0x5FA4910")]
	public ElementWriter(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x5FA4930", Offset = "0x5FA3930", VA = "0x5FA4930")]
	public void WriteElement(XElement e)
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x5FA6630", Offset = "0x5FA5630", VA = "0x5FA6630")]
	private string GetPrefixOfNamespace(XNamespace ns, bool allowDefaultNamespace)
	{
		return null;
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x5FA6040", Offset = "0x5FA5040", VA = "0x5FA6040")]
	private void PushAncestors(XElement e)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x5FA6980", Offset = "0x5FA5980", VA = "0x5FA6980")]
	private void PushElement(XElement e)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x5FA64B0", Offset = "0x5FA54B0", VA = "0x5FA64B0")]
	private void WriteEndElement()
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x5FA6570", Offset = "0x5FA5570", VA = "0x5FA6570")]
	private void WriteFullEndElement()
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x5FA6340", Offset = "0x5FA5340", VA = "0x5FA6340")]
	private void WriteStartElement(XElement e)
	{
	}
}
