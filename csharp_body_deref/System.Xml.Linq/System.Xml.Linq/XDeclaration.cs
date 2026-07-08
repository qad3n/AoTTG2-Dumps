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
		[Address(RVA = "0x4341510", Offset = "0x4341510", VA = "0x4341510")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x4341520", Offset = "0x4341520", VA = "0x4341520")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public string Standalone
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x4341530", Offset = "0x4341530", VA = "0x4341530")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x4341540", Offset = "0x4341540", VA = "0x4341540")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public string Version
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x4341550", Offset = "0x4341550", VA = "0x4341550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4341410", Offset = "0x4341410", VA = "0x4341410")]
	public XDeclaration(string version, string encoding, string standalone)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4341470", Offset = "0x4341470", VA = "0x4341470")]
	public XDeclaration(XDeclaration other)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4341560", Offset = "0x4341560", VA = "0x4341560", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
