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

[Token(Token = "0x20001BB")]
internal class ArraySubsetEnumerator : IEnumerator
{
	[Token(Token = "0x4000692")]
	[FieldOffset(Offset = "0x10")]
	private Array array;

	[Token(Token = "0x4000693")]
	[FieldOffset(Offset = "0x18")]
	private int total;

	[Token(Token = "0x4000694")]
	[FieldOffset(Offset = "0x1C")]
	private int current;

	[Token(Token = "0x17000279")]
	public object Current
	{
		[Token(Token = "0x6000B6F")]
		[Address(RVA = "0x624C310", Offset = "0x624B310", VA = "0x624C310", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x624C2A0", Offset = "0x624B2A0", VA = "0x624C2A0")]
	public ArraySubsetEnumerator(Array array, int count)
	{
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x624C2E0", Offset = "0x624B2E0", VA = "0x624C2E0", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x624C300", Offset = "0x624B300", VA = "0x624C300", Slot = "6")]
	public void Reset()
	{
	}
}
