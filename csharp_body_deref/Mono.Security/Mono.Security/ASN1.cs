using System.Collections;
using Il2CppDummyDll;

namespace Mono.Security;

[Token(Token = "0x2000003")]
public class ASN1
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x10")]
	private byte m_nTag;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x18")]
	private byte[] m_aValue;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x20")]
	private ArrayList elist;

	[Token(Token = "0x17000001")]
	public int Count
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x3A9D760", Offset = "0x3A9D760", VA = "0x3A9D760")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000002")]
	public byte Tag
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x3A9D780", Offset = "0x3A9D780", VA = "0x3A9D780")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000003")]
	public int Length
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x3A9D790", Offset = "0x3A9D790", VA = "0x3A9D790")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000004")]
	public byte[] Value
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x3A9D7A0", Offset = "0x3A9D7A0", VA = "0x3A9D7A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x3A9D840", Offset = "0x3A9D840", VA = "0x3A9D840")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public ASN1 this[int index]
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x3A9E330", Offset = "0x3A9E330", VA = "0x3A9E330")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x3A9D3B0", Offset = "0x3A9D3B0", VA = "0x3A9D3B0")]
	public ASN1(byte tag)
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x3A9D3E0", Offset = "0x3A9D3E0", VA = "0x3A9D3E0")]
	public ASN1(byte tag, byte[] data)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x3A9D410", Offset = "0x3A9D410", VA = "0x3A9D410")]
	public ASN1(byte[] data)
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x3A9D900", Offset = "0x3A9D900", VA = "0x3A9D900")]
	private bool CompareArray(byte[] array1, byte[] array2)
	{
		return default(bool);
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x3A9D950", Offset = "0x3A9D950", VA = "0x3A9D950")]
	public bool CompareValue(byte[] value)
	{
		return default(bool);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x3A9D9B0", Offset = "0x3A9D9B0", VA = "0x3A9D9B0")]
	public ASN1 Add(ASN1 asn1)
	{
		return null;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x3A9DA40", Offset = "0x3A9DA40", VA = "0x3A9DA40", Slot = "4")]
	public virtual byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x3A9D590", Offset = "0x3A9D590", VA = "0x3A9D590")]
	protected void Decode(byte[] asn1, ref int anPos, int anLength)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x3A9E230", Offset = "0x3A9E230", VA = "0x3A9E230")]
	protected void DecodeTLV(byte[] asn1, ref int pos, out byte tag, out int length, out byte[] content)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x3A9E470", Offset = "0x3A9E470", VA = "0x3A9E470")]
	public ASN1 Element(int index, byte anTag)
	{
		return null;
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x3A9E5C0", Offset = "0x3A9E5C0", VA = "0x3A9E5C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
