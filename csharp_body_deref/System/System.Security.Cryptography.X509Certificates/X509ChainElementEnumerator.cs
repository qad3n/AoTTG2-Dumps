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

[Token(Token = "0x2000104")]
public sealed class X509ChainElementEnumerator : IEnumerator
{
	[Token(Token = "0x40004EA")]
	[FieldOffset(Offset = "0x10")]
	private IEnumerator enumerator;

	[Token(Token = "0x17000140")]
	public X509ChainElement Current
	{
		[Token(Token = "0x6000600")]
		[Address(RVA = "0x493CA10", Offset = "0x493CA10", VA = "0x493CA10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000141")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x6000601")]
		[Address(RVA = "0x493CAF0", Offset = "0x493CAF0", VA = "0x493CAF0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x493C6B0", Offset = "0x493C6B0", VA = "0x493C6B0")]
	internal X509ChainElementEnumerator(IEnumerable enumerable)
	{
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x493CB90", Offset = "0x493CB90", VA = "0x493CB90", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x493CC20", Offset = "0x493CC20", VA = "0x493CC20", Slot = "6")]
	public void Reset()
	{
	}
}
