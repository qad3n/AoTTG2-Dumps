// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000144")]
public sealed class X509ChainElementEnumerator : IEnumerator
{
	[Token(Token = "0x40005BC")]
	[FieldOffset(Offset = "0x10")]
	private IEnumerator enumerator;

	[Token(Token = "0x17000179")]
	public X509ChainElement Current
	{
		[Token(Token = "0x60007E9")]
		[Address(RVA = "0x2888540", Offset = "0x2886B40", VA = "0x182888540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017A")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x60007EA")]
		[Address(RVA = "0x2888480", Offset = "0x2886A80", VA = "0x182888480", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x28884D0", Offset = "0x2886AD0", VA = "0x1828884D0")]
	internal X509ChainElementEnumerator(IEnumerable enumerable)
	{
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x28883E0", Offset = "0x28869E0", VA = "0x1828883E0", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x2888430", Offset = "0x2886A30", VA = "0x182888430", Slot = "6")]
	public void Reset()
	{
	}
}
