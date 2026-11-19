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

[Token(Token = "0x2000105")]
public sealed class X509ChainElementEnumerator : IEnumerator
{
	[Token(Token = "0x40004ED")]
	[FieldOffset(Offset = "0x10")]
	private IEnumerator enumerator;

	[Token(Token = "0x1700014A")]
	public X509ChainElement Current
	{
		[Token(Token = "0x600062A")]
		[Address(RVA = "0x6217790", Offset = "0x6216790", VA = "0x6217790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014B")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x600062B")]
		[Address(RVA = "0x6217870", Offset = "0x6216870", VA = "0x6217870", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x6217450", Offset = "0x6216450", VA = "0x6217450")]
	internal X509ChainElementEnumerator(IEnumerable enumerable)
	{
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x6217910", Offset = "0x6216910", VA = "0x6217910", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x62179A0", Offset = "0x62169A0", VA = "0x62179A0", Slot = "6")]
	public void Reset()
	{
	}
}
