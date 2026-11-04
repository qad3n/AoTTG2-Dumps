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
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x1700002E")]
	public string Value
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x25EDA00", Offset = "0x25EC000", VA = "0x1825EDA00")]
		set
		{
		}
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x25E5DC0", Offset = "0x25E43C0", VA = "0x1825E5DC0")]
	public XText(string value)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x25E5E40", Offset = "0x25E4440", VA = "0x1825E5E40")]
	public XText(XText other)
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x25ED8F0", Offset = "0x25EBEF0", VA = "0x1825ED8F0", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x25ED810", Offset = "0x25EBE10", VA = "0x1825ED810", Slot = "9")]
	internal override void AppendText(StringBuilder sb)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x25ED840", Offset = "0x25EBE40", VA = "0x1825ED840", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}
}
