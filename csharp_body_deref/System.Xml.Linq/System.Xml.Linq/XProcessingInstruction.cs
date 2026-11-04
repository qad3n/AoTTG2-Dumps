// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Linq.XProcessingInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x2000022")]
public class XProcessingInstruction : XNode
{
	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x28")]
	internal string target;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x30")]
	internal string data;

	[Token(Token = "0x1700002A")]
	public string Data
	{
		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x25ED6F0", Offset = "0x25EBCF0", VA = "0x1825ED6F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x106DD80", Offset = "0x106C380", VA = "0x18106DD80", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x1700002C")]
	public string Target
	{
		[Token(Token = "0x60000DD")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x25ED4F0", Offset = "0x25EBAF0", VA = "0x1825ED4F0")]
	public XProcessingInstruction(string target, string data)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x25ED650", Offset = "0x25EBC50", VA = "0x1825ED650")]
	public XProcessingInstruction(XProcessingInstruction other)
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x25ED470", Offset = "0x25EBA70", VA = "0x1825ED470", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x25ED2D0", Offset = "0x25EB8D0", VA = "0x1825ED2D0", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x25ED390", Offset = "0x25EB990", VA = "0x1825ED390")]
	private static void ValidateName(string name)
	{
	}
}
