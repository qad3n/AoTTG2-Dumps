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
	[Address(RVA = "0x5F9EC50", Offset = "0x5F9DC50", VA = "0x5F9EC50")]
	internal XNode()
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x5FA7820", Offset = "0x5FA6820", VA = "0x5FA7820")]
	public void Remove()
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x5FA7880", Offset = "0x5FA6880", VA = "0x5FA7880", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000C1")]
	public abstract void WriteTo(XmlWriter writer);

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x5FA7D30", Offset = "0x5FA6D30", VA = "0x5FA7D30", Slot = "9")]
	internal virtual void AppendText(StringBuilder sb)
	{
	}

	[Token(Token = "0x60000C3")]
	internal abstract XNode CloneNode();

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x5FA7970", Offset = "0x5FA6970", VA = "0x5FA7970")]
	private string GetXmlString(SaveOptions o)
	{
		return null;
	}
}
