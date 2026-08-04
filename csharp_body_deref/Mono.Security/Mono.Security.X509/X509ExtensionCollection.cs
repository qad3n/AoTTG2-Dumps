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
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x3AB4900", Offset = "0x3AB4900", VA = "0x3AB4900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x3AB5920", Offset = "0x3AB5920", VA = "0x3AB5920")]
	public X509ExtensionCollection()
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x3AAF9E0", Offset = "0x3AAF9E0", VA = "0x3AAF9E0")]
	public X509ExtensionCollection(ASN1 asn1)
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x3AB5930", Offset = "0x3AB5930", VA = "0x3AB5930")]
	public int IndexOf(string oid)
	{
		return default(int);
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x3AB5A60", Offset = "0x3AB5A60", VA = "0x3AB5A60", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
