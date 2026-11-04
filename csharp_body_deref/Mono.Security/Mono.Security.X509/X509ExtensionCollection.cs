// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.X509ExtensionCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x1928F70", Offset = "0x1927570", VA = "0x181928F70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x1924500", Offset = "0x1922B00", VA = "0x181924500")]
	public X509ExtensionCollection()
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x1928E30", Offset = "0x1927430", VA = "0x181928E30")]
	public X509ExtensionCollection(ASN1 asn1)
	{
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x1928CC0", Offset = "0x19272C0", VA = "0x181928CC0")]
	public int IndexOf(string oid)
	{
		return default(int);
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x19244D0", Offset = "0x1922AD0", VA = "0x1819244D0", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
