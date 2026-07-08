using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x2000024")]
public class XText : XNode
{
	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x28")]
	internal string text;

	[Token(Token = "0x1700002D")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x4346060", Offset = "0x4346060", VA = "0x4346060", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x1700002E")]
	public string Value
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x4346070", Offset = "0x4346070", VA = "0x4346070")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x433E7C0", Offset = "0x433E7C0", VA = "0x433E7C0")]
		set
		{
		}
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x433C110", Offset = "0x433C110", VA = "0x433C110")]
	public XText(string value)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x433C1A0", Offset = "0x433C1A0", VA = "0x433C1A0")]
	public XText(XText other)
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x4346080", Offset = "0x4346080", VA = "0x4346080", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x4346160", Offset = "0x4346160", VA = "0x4346160", Slot = "9")]
	internal override void AppendText(StringBuilder sb)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x4346180", Offset = "0x4346180", VA = "0x4346180", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}
}
