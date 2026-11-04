// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Linq.XDeclaration
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x200000C")]
public class XDeclaration
{
	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x10")]
	private string _version;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x18")]
	private string _encoding;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x20")]
	private string _standalone;

	[Token(Token = "0x1700000B")]
	public string Encoding
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public string Standalone
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000046")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public string Version
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0xE56DE0", Offset = "0xE553E0", VA = "0x180E56DE0")]
	public XDeclaration(string version, string encoding, string standalone)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x25E89B0", Offset = "0x25E6FB0", VA = "0x1825E89B0")]
	public XDeclaration(XDeclaration other)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x25E87F0", Offset = "0x25E6DF0", VA = "0x1825E87F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
