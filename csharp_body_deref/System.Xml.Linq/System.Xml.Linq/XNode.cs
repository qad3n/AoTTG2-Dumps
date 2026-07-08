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
	[Address(RVA = "0x433C370", Offset = "0x433C370", VA = "0x433C370")]
	internal XNode()
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x43451B0", Offset = "0x43451B0", VA = "0x43451B0")]
	public void Remove()
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x4345210", Offset = "0x4345210", VA = "0x4345210", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000C1")]
	public abstract void WriteTo(XmlWriter writer);

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x4345770", Offset = "0x4345770", VA = "0x4345770", Slot = "9")]
	internal virtual void AppendText(StringBuilder sb)
	{
	}

	[Token(Token = "0x60000C3")]
	internal abstract XNode CloneNode();

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x4345300", Offset = "0x4345300", VA = "0x4345300")]
	private string GetXmlString(SaveOptions o)
	{
		return null;
	}
}
