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

[Token(Token = "0x20002EF")]
internal class ArraySubsetEnumerator : IEnumerator
{
	[Token(Token = "0x4000E2A")]
	[FieldOffset(Offset = "0x10")]
	private Array array;

	[Token(Token = "0x4000E2B")]
	[FieldOffset(Offset = "0x18")]
	private int total;

	[Token(Token = "0x4000E2C")]
	[FieldOffset(Offset = "0x1C")]
	private int current;

	[Token(Token = "0x17000439")]
	public object Current
	{
		[Token(Token = "0x60012E7")]
		[Address(RVA = "0x48ACF00", Offset = "0x48ACF00", VA = "0x48ACF00", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012E4")]
	[Address(RVA = "0x48ACE90", Offset = "0x48ACE90", VA = "0x48ACE90")]
	public ArraySubsetEnumerator(Array array, int count)
	{
	}

	[Token(Token = "0x60012E5")]
	[Address(RVA = "0x48ACED0", Offset = "0x48ACED0", VA = "0x48ACED0", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60012E6")]
	[Address(RVA = "0x48ACEF0", Offset = "0x48ACEF0", VA = "0x48ACEF0", Slot = "6")]
	public void Reset()
	{
	}
}
