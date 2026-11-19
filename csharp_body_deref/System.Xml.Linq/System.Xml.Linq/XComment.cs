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
		[Address(RVA = "0x5F9ECE0", Offset = "0x5F9DCE0", VA = "0x5F9ECE0", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000007")]
	public string Value
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x5F9ECF0", Offset = "0x5F9DCF0", VA = "0x5F9ECF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x5F9ED00", Offset = "0x5F9DD00", VA = "0x5F9ED00")]
		set
		{
		}
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x5F9EBD0", Offset = "0x5F9DBD0", VA = "0x5F9EBD0")]
	public XComment(string value)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x5F9EC60", Offset = "0x5F9DC60", VA = "0x5F9EC60")]
	public XComment(XComment other)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x5F9EF00", Offset = "0x5F9DF00", VA = "0x5F9EF00", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x5F9EF70", Offset = "0x5F9DF70", VA = "0x5F9EF70", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}
}
