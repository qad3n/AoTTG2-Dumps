// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Linq.XText
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4696930", Offset = "0x4696930", VA = "0x4696930", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x1700002E")]
	public string Value
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x4696940", Offset = "0x4696940", VA = "0x4696940")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x468F090", Offset = "0x468F090", VA = "0x468F090")]
		set
		{
		}
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x468C9E0", Offset = "0x468C9E0", VA = "0x468C9E0")]
	public XText(string value)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x468CA70", Offset = "0x468CA70", VA = "0x468CA70")]
	public XText(XText other)
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x4696950", Offset = "0x4696950", VA = "0x4696950", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x4696A30", Offset = "0x4696A30", VA = "0x4696A30", Slot = "9")]
	internal override void AppendText(StringBuilder sb)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x4696A50", Offset = "0x4696A50", VA = "0x4696A50", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}
}
