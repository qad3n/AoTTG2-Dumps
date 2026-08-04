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
		[Address(RVA = "0x4691DE0", Offset = "0x4691DE0", VA = "0x4691DE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x4691DF0", Offset = "0x4691DF0", VA = "0x4691DF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public string Standalone
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x4691E00", Offset = "0x4691E00", VA = "0x4691E00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x4691E10", Offset = "0x4691E10", VA = "0x4691E10")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public string Version
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x4691E20", Offset = "0x4691E20", VA = "0x4691E20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4691CE0", Offset = "0x4691CE0", VA = "0x4691CE0")]
	public XDeclaration(string version, string encoding, string standalone)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4691D40", Offset = "0x4691D40", VA = "0x4691D40")]
	public XDeclaration(XDeclaration other)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4691E30", Offset = "0x4691E30", VA = "0x4691E30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
