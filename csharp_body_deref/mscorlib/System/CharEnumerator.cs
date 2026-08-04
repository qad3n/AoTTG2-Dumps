// ==================== AoTTG2 cross-reference ====================
// Type: System.CharEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200009D")]
public sealed class CharEnumerator : IEnumerator, IEnumerator<char>, IDisposable, ICloneable
{
	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x10")]
	private string _str;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x18")]
	private int _index;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x1C")]
	private char _currentElement;

	[Token(Token = "0x17000065")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x60004C9")]
		[Address(RVA = "0x3C1A400", Offset = "0x3C1A400", VA = "0x3C1A400", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000066")]
	public char Current
	{
		[Token(Token = "0x60004CA")]
		[Address(RVA = "0x3C1A430", Offset = "0x3C1A430", VA = "0x3C1A430", Slot = "7")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x3C1A350", Offset = "0x3C1A350", VA = "0x3C1A350")]
	internal CharEnumerator(string str)
	{
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x3C1A380", Offset = "0x3C1A380", VA = "0x3C1A380", Slot = "9")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x3C1A390", Offset = "0x3C1A390", VA = "0x3C1A390", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x3C1A3D0", Offset = "0x3C1A3D0", VA = "0x3C1A3D0", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x3C1A4C0", Offset = "0x3C1A4C0", VA = "0x3C1A4C0", Slot = "6")]
	public void Reset()
	{
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x3C1A4D0", Offset = "0x3C1A4D0", VA = "0x3C1A4D0")]
	internal CharEnumerator()
	{
	}
}
