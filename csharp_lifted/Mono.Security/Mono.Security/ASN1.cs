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
		[Address(RVA = "0x52AB960", Offset = "0x52AA960", VA = "0x52AB960")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000002")]
	public byte Tag
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x52AB980", Offset = "0x52AA980", VA = "0x52AB980")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000003")]
	public int Length
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x52AB990", Offset = "0x52AA990", VA = "0x52AB990")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000004")]
	public byte[] Value
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x52AB9A0", Offset = "0x52AA9A0", VA = "0x52AB9A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x52ABA30", Offset = "0x52AAA30", VA = "0x52ABA30")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public ASN1 this[int index]
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x52AC470", Offset = "0x52AB470", VA = "0x52AC470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x52AB5D0", Offset = "0x52AA5D0", VA = "0x52AB5D0")]
	public ASN1(byte tag)
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x52AB600", Offset = "0x52AA600", VA = "0x52AB600")]
	public ASN1(byte tag, byte[] data)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x52AB630", Offset = "0x52AA630", VA = "0x52AB630")]
	public ASN1(byte[] data)
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x52ABAF0", Offset = "0x52AAAF0", VA = "0x52ABAF0")]
	private bool CompareArray(byte[] array1, byte[] array2)
	{
		return default(bool);
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x52ABB50", Offset = "0x52AAB50", VA = "0x52ABB50")]
	public bool CompareValue(byte[] value)
	{
		return default(bool);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x52ABBA0", Offset = "0x52AABA0", VA = "0x52ABBA0")]
	public ASN1 Add(ASN1 asn1)
	{
		return null;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x52ABC30", Offset = "0x52AAC30", VA = "0x52ABC30", Slot = "4")]
	public virtual byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x52AB7B0", Offset = "0x52AA7B0", VA = "0x52AB7B0")]
	protected void Decode(byte[] asn1, ref int anPos, int anLength)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x52AC370", Offset = "0x52AB370", VA = "0x52AC370")]
	protected void DecodeTLV(byte[] asn1, ref int pos, out byte tag, out int length, out byte[] content)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x52AC5A0", Offset = "0x52AB5A0", VA = "0x52AC5A0")]
	public ASN1 Element(int index, byte anTag)
	{
		return null;
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x52AC6E0", Offset = "0x52AB6E0", VA = "0x52AC6E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
