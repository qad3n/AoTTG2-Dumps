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
		[Address(RVA = "0x3ADC8B0", Offset = "0x3ADC8B0", VA = "0x3ADC8B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000018")]
	public byte[] Value
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x3ADC8D0", Offset = "0x3ADC8D0", VA = "0x3ADC8D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x3ADC500", Offset = "0x3ADC500", VA = "0x3ADC500")]
	public ASN1(byte tag)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x3ADC530", Offset = "0x3ADC530", VA = "0x3ADC530")]
	public ASN1(byte tag, byte[] data)
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x3ADC560", Offset = "0x3ADC560", VA = "0x3ADC560")]
	public ASN1(byte[] data)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x3ADC970", Offset = "0x3ADC970", VA = "0x3ADC970")]
	public Mono.Security.ASN1 Add(Mono.Security.ASN1 asn1)
	{
		return null;
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x3ADCA00", Offset = "0x3ADCA00", VA = "0x3ADCA00", Slot = "4")]
	public virtual byte[] GetBytes()
	{
		return null;
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x3ADC6E0", Offset = "0x3ADC6E0", VA = "0x3ADC6E0")]
	protected void Decode(byte[] asn1, ref int anPos, int anLength)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x3ADD1F0", Offset = "0x3ADD1F0", VA = "0x3ADD1F0")]
	protected void DecodeTLV(byte[] asn1, ref int pos, out byte tag, out int length, out byte[] content)
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x3ADD2F0", Offset = "0x3ADD2F0", VA = "0x3ADD2F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
