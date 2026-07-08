using System.Collections;
using System.Reflection;
using Il2CppDummyDll;

namespace Mono.Security;

[Token(Token = "0x2000040")]
[DefaultMember("Item")]
internal class ASN1
{
	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0x10")]
	private byte m_nTag;

	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x18")]
	private byte[] m_aValue;

	[Token(Token = "0x400013D")]
	[FieldOffset(Offset = "0x20")]
	private ArrayList elist;

	[Token(Token = "0x17000017")]
	public int Count
	{
		[Token(Token = "0x6000107")]
		[Address(RVA = "0x4DF6D90", Offset = "0x4DF6D90", VA = "0x4DF6D90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000018")]
	public byte[] Value
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x4DF6DB0", Offset = "0x4DF6DB0", VA = "0x4DF6DB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x4DF69E0", Offset = "0x4DF69E0", VA = "0x4DF69E0")]
	public ASN1(byte tag)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x4DF6A10", Offset = "0x4DF6A10", VA = "0x4DF6A10")]
	public ASN1(byte tag, byte[] data)
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x4DF6A40", Offset = "0x4DF6A40", VA = "0x4DF6A40")]
	public ASN1(byte[] data)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x4DF6E50", Offset = "0x4DF6E50", VA = "0x4DF6E50")]
	public Mono.Security.ASN1 Add(Mono.Security.ASN1 asn1)
	{
		return null;
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x4DF6EE0", Offset = "0x4DF6EE0", VA = "0x4DF6EE0", Slot = "4")]
	public virtual byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x4DF6BC0", Offset = "0x4DF6BC0", VA = "0x4DF6BC0")]
	protected void Decode(byte[] asn1, ref int anPos, int anLength)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x4DF76D0", Offset = "0x4DF76D0", VA = "0x4DF76D0")]
	protected void DecodeTLV(byte[] asn1, ref int pos, out byte tag, out int length, out byte[] content)
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x4DF77D0", Offset = "0x4DF77D0", VA = "0x4DF77D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
