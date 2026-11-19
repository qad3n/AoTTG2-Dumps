// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200010D")]
public sealed class X509ExtensionEnumerator : IEnumerator
{
	[Token(Token = "0x400050E")]
	[FieldOffset(Offset = "0x10")]
	private IEnumerator enumerator;

	[Token(Token = "0x17000165")]
	public X509Extension Current
	{
		[Token(Token = "0x6000684")]
		[Address(RVA = "0x621D340", Offset = "0x621C340", VA = "0x621D340")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000166")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x6000685")]
		[Address(RVA = "0x621D420", Offset = "0x621C420", VA = "0x621D420", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x621D200", Offset = "0x621C200", VA = "0x621D200")]
	internal X509ExtensionEnumerator(ArrayList list)
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x621D4C0", Offset = "0x621C4C0", VA = "0x621D4C0", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x621D550", Offset = "0x621C550", VA = "0x621D550", Slot = "6")]
	public void Reset()
	{
	}
}
