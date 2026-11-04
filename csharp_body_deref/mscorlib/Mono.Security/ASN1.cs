// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.ASN1
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Reflection;
using Il2CppDummyDll;

namespace Mono.Security;

[Token(Token = "0x200005E")]
[DefaultMember("Item")]
internal class ASN1
{
	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x10")]
	private byte m_nTag;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x18")]
	private byte[] m_aValue;

	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x20")]
	private ArrayList elist;

	[Token(Token = "0x17000017")]
	public int Count
	{
		[Token(Token = "0x600011F")]
		[Address(RVA = "0x1912730", Offset = "0x1910D30", VA = "0x181912730")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000018")]
	public byte[] Value
	{
		[Token(Token = "0x6000120")]
		[Address(RVA = "0x19401C0", Offset = "0x193E7C0", VA = "0x1819401C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x19126A0", Offset = "0x1910CA0", VA = "0x1819126A0")]
	public ASN1(byte tag)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x19126E0", Offset = "0x1910CE0", VA = "0x1819126E0")]
	public ASN1(byte tag, byte[] data)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x1940030", Offset = "0x193E630", VA = "0x181940030")]
	public ASN1(byte[] data)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x193F2F0", Offset = "0x193D8F0", VA = "0x18193F2F0")]
	public Mono.Security.ASN1 Add(Mono.Security.ASN1 asn1)
	{
		return null;
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x193F690", Offset = "0x193DC90", VA = "0x18193F690", Slot = "4")]
	public virtual byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x193F4B0", Offset = "0x193DAB0", VA = "0x18193F4B0")]
	protected void Decode(byte[] asn1, ref int anPos, int anLength)
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x193F390", Offset = "0x193D990", VA = "0x18193F390")]
	protected void DecodeTLV(byte[] asn1, ref int pos, out byte tag, out int length, out byte[] content)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x193FD20", Offset = "0x193E320", VA = "0x18193FD20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
