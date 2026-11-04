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
		[Address(RVA = "0x846F50", Offset = "0x845550", VA = "0x180846F50", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000007")]
	public string Value
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x25E60F0", Offset = "0x25E46F0", VA = "0x1825E60F0")]
		set
		{
		}
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x25E6070", Offset = "0x25E4670", VA = "0x1825E6070")]
	public XComment(string value)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x25E5FF0", Offset = "0x25E45F0", VA = "0x1825E5FF0")]
	public XComment(XComment other)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x25E5F70", Offset = "0x25E4570", VA = "0x1825E5F70", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x25E5EC0", Offset = "0x25E44C0", VA = "0x1825E5EC0", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}
}
