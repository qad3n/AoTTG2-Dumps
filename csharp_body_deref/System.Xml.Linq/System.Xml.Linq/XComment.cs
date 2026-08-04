// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Linq.XComment
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x2000008")]
public class XComment : XNode
{
	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x28")]
	internal string value;

	[Token(Token = "0x17000006")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x468CCD0", Offset = "0x468CCD0", VA = "0x468CCD0", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000007")]
	public string Value
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x468CCE0", Offset = "0x468CCE0", VA = "0x468CCE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x468CCF0", Offset = "0x468CCF0", VA = "0x468CCF0")]
		set
		{
		}
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x468CBC0", Offset = "0x468CBC0", VA = "0x468CBC0")]
	public XComment(string value)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x468CC50", Offset = "0x468CC50", VA = "0x468CC50")]
	public XComment(XComment other)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x468CF20", Offset = "0x468CF20", VA = "0x468CF20", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x468CF90", Offset = "0x468CF90", VA = "0x468CF90", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}
}
