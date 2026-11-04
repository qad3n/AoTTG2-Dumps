// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ArraySubsetEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001FA")]
internal class ArraySubsetEnumerator : IEnumerator
{
	[Token(Token = "0x4000761")]
	[FieldOffset(Offset = "0x10")]
	private Array array;

	[Token(Token = "0x4000762")]
	[FieldOffset(Offset = "0x18")]
	private int total;

	[Token(Token = "0x4000763")]
	[FieldOffset(Offset = "0x1C")]
	private int current;

	[Token(Token = "0x170002A8")]
	public object Current
	{
		[Token(Token = "0x6000D2F")]
		[Address(RVA = "0x28AD980", Offset = "0x28ABF80", VA = "0x1828AD980", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x2892520", Offset = "0x2890B20", VA = "0x182892520")]
	public ArraySubsetEnumerator(Array array, int count)
	{
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x2892500", Offset = "0x2890B00", VA = "0x182892500", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x27C0AE0", Offset = "0x27BF0E0", VA = "0x1827C0AE0", Slot = "6")]
	public void Reset()
	{
	}
}
