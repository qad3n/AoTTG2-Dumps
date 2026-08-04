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
		[Address(RVA = "0x4696610", Offset = "0x4696610", VA = "0x4696610")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x4696620", Offset = "0x4696620", VA = "0x4696620")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x4696850", Offset = "0x4696850", VA = "0x4696850", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x1700002C")]
	public string Target
	{
		[Token(Token = "0x60000DD")]
		[Address(RVA = "0x4696860", Offset = "0x4696860", VA = "0x4696860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x46917B0", Offset = "0x46917B0", VA = "0x46917B0")]
	public XProcessingInstruction(string target, string data)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x4696580", Offset = "0x4696580", VA = "0x4696580")]
	public XProcessingInstruction(XProcessingInstruction other)
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x4696870", Offset = "0x4696870", VA = "0x4696870", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x46968E0", Offset = "0x46968E0", VA = "0x46968E0", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x46964B0", Offset = "0x46964B0", VA = "0x46964B0")]
	private static void ValidateName(string name)
	{
	}
}
