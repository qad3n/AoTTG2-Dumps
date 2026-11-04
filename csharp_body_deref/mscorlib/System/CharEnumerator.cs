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
[Token(Token = "0x20000C6")]
public sealed class CharEnumerator : IEnumerator, IEnumerator<char>, IDisposable, ICloneable
{
	[Token(Token = "0x40002B0")]
	[FieldOffset(Offset = "0x10")]
	private string _str;

	[Token(Token = "0x40002B1")]
	[FieldOffset(Offset = "0x18")]
	private int _index;

	[Token(Token = "0x40002B2")]
	[FieldOffset(Offset = "0x1C")]
	private char _currentElement;

	[Token(Token = "0x17000065")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x60004FD")]
		[Address(RVA = "0x1A7BD20", Offset = "0x1A7A320", VA = "0x181A7BD20", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000066")]
	public char Current
	{
		[Token(Token = "0x60004FE")]
		[Address(RVA = "0x1A7BE70", Offset = "0x1A7A470", VA = "0x181A7BE70", Slot = "7")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x1A7BE00", Offset = "0x1A7A400", VA = "0x181A7BE00")]
	internal CharEnumerator(string str)
	{
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x1A7BC80", Offset = "0x1A7A280", VA = "0x181A7BC80", Slot = "9")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x1A7BCC0", Offset = "0x1A7A2C0", VA = "0x181A7BCC0", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x1A7BC90", Offset = "0x1A7A290", VA = "0x181A7BC90", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x1A7BD10", Offset = "0x1A7A310", VA = "0x181A7BD10", Slot = "6")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x1A7BE40", Offset = "0x1A7A440", VA = "0x181A7BE40")]
	internal CharEnumerator()
	{
	}
}
