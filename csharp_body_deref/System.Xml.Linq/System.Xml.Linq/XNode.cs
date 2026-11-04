// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Linq.XNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x200001E")]
public abstract class XNode : XObject
{
	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x20")]
	internal XNode next;

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal XNode()
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x25EC540", Offset = "0x25EAB40", VA = "0x1825EC540")]
	public void Remove()
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x25EC5B0", Offset = "0x25EABB0", VA = "0x1825EC5B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000C1")]
	public abstract void WriteTo(XmlWriter writer);

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	internal virtual void AppendText(StringBuilder sb)
	{
	}

	[Token(Token = "0x60000C3")]
	internal abstract XNode CloneNode();

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x25EC260", Offset = "0x25EA860", VA = "0x1825EC260")]
	private string GetXmlString(SaveOptions o)
	{
		return null;
	}
}
