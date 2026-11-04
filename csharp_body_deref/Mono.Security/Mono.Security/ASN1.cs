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
		[Address(RVA = "0x1912730", Offset = "0x1910D30", VA = "0x181912730")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000002")]
	public byte Tag
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000003")]
	public int Length
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x1912810", Offset = "0x1910E10", VA = "0x181912810")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000004")]
	public byte[] Value
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x1912830", Offset = "0x1910E30", VA = "0x181912830")]
		get
		{
			return null;
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x19128D0", Offset = "0x1910ED0", VA = "0x1819128D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public ASN1 this[int index]
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x1912750", Offset = "0x1910D50", VA = "0x181912750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x19126A0", Offset = "0x1910CA0", VA = "0x1819126A0")]
	public ASN1(byte tag)
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x19126E0", Offset = "0x1910CE0", VA = "0x1819126E0")]
	public ASN1(byte tag, byte[] data)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x1912510", Offset = "0x1910B10", VA = "0x181912510")]
	public ASN1(byte[] data)
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x1911700", Offset = "0x190FD00", VA = "0x181911700")]
	private bool CompareArray(byte[] array1, byte[] array2)
	{
		return default(bool);
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x1911780", Offset = "0x190FD80", VA = "0x181911780")]
	public bool CompareValue(byte[] value)
	{
		return default(bool);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x1911660", Offset = "0x190FC60", VA = "0x181911660")]
	public ASN1 Add(ASN1 asn1)
	{
		return null;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x1911BE0", Offset = "0x19101E0", VA = "0x181911BE0", Slot = "4")]
	public virtual byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x1911920", Offset = "0x190FF20", VA = "0x181911920")]
	protected void Decode(byte[] asn1, ref int anPos, int anLength)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x1911800", Offset = "0x190FE00", VA = "0x181911800")]
	protected void DecodeTLV(byte[] asn1, ref int pos, out byte tag, out int length, out byte[] content)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x1911B00", Offset = "0x1910100", VA = "0x181911B00")]
	public ASN1 Element(int index, byte anTag)
	{
		return null;
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x1912200", Offset = "0x1910800", VA = "0x181912200", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
