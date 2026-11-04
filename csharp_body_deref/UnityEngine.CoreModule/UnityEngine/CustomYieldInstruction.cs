// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CustomYieldInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000197")]
public abstract class CustomYieldInstruction : IEnumerator
{
	[Token(Token = "0x17000231")]
	public abstract bool keepWaiting
	{
		[Token(Token = "0x6000D66")]
		get;
	}

	[Token(Token = "0x17000232")]
	public object Current
	{
		[Token(Token = "0x6000D67")]
		[Address(RVA = "0xB62B40", Offset = "0xB61140", VA = "0x180B62B40", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x1A96900", Offset = "0x1A94F00", VA = "0x181A96900", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected CustomYieldInstruction()
	{
	}
}
