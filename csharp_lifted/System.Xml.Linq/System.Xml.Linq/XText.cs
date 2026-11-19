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
		[Address(RVA = "0x5FA85F0", Offset = "0x5FA75F0", VA = "0x5FA85F0", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x1700002E")]
	public string Value
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x5FA8600", Offset = "0x5FA7600", VA = "0x5FA8600")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x5FA0C30", Offset = "0x5F9FC30", VA = "0x5FA0C30")]
		set
		{
		}
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x5F9E9F0", Offset = "0x5F9D9F0", VA = "0x5F9E9F0")]
	public XText(string value)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x5F9EA80", Offset = "0x5F9DA80", VA = "0x5F9EA80")]
	public XText(XText other)
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x5FA8610", Offset = "0x5FA7610", VA = "0x5FA8610", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x5FA86F0", Offset = "0x5FA76F0", VA = "0x5FA86F0", Slot = "9")]
	internal override void AppendText(StringBuilder sb)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x5FA8710", Offset = "0x5FA7710", VA = "0x5FA8710", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}
}
