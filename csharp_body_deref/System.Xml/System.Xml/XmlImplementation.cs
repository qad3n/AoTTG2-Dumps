// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlImplementation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x60D8490", Offset = "0x60D7490", VA = "0x60D8490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x60D82E0", Offset = "0x60D72E0", VA = "0x60D82E0")]
	public XmlImplementation()
	{
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x60D8410", Offset = "0x60D7410", VA = "0x60D8410")]
	public XmlImplementation(XmlNameTable nt)
	{
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x60D8440", Offset = "0x60D7440", VA = "0x60D8440", Slot = "4")]
	public virtual XmlDocument CreateDocument()
	{
		return null;
	}
}
