using System.Collections;
using Il2CppDummyDll;

namespace Mono.Security.X509;

[Token(Token = "0x2000017")]
public sealed class X509ExtensionCollection : CollectionBase, IEnumerable
{
	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x18")]
	private bool readOnly;

	[Token(Token = "0x17000041")]
	public X509Extension this[string oid]
	{
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x3A47C40", Offset = "0x3A47C40", VA = "0x3A47C40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x3A48C60", Offset = "0x3A48C60", VA = "0x3A48C60")]
	public X509ExtensionCollection()
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x3A42D20", Offset = "0x3A42D20", VA = "0x3A42D20")]
	public X509ExtensionCollection(ASN1 asn1)
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x3A48C70", Offset = "0x3A48C70", VA = "0x3A48C70")]
	public int IndexOf(string oid)
	{
		return default(int);
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x3A48DA0", Offset = "0x3A48DA0", VA = "0x3A48DA0", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
