using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200010A")]
public class X509Extension : AsnEncodedData
{
	[Token(Token = "0x4000508")]
	[FieldOffset(Offset = "0x20")]
	private bool _critical;

	[Token(Token = "0x17000156")]
	public bool Critical
	{
		[Token(Token = "0x600064B")]
		[Address(RVA = "0x461CFA0", Offset = "0x461CFA0", VA = "0x461CFA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600064C")]
		[Address(RVA = "0x461CFB0", Offset = "0x461CFB0", VA = "0x461CFB0")]
		set
		{
		}
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x461CF70", Offset = "0x461CF70", VA = "0x461CF70")]
	protected X509Extension()
	{
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x461CF80", Offset = "0x461CF80", VA = "0x461CF80")]
	public X509Extension(string oid, byte[] rawData, bool critical)
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x461CFC0", Offset = "0x461CFC0", VA = "0x461CFC0", Slot = "4")]
	public override void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x461D0C0", Offset = "0x461D0C0", VA = "0x461D0C0")]
	internal string FormatUnkownData(byte[] data)
	{
		return null;
	}
}
