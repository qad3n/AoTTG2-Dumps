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
	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x10")]
	private string _str;

	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x18")]
	private int _index;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x1C")]
	private char _currentElement;

	[Token(Token = "0x17000065")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x60004D2")]
		[Address(RVA = "0x54204F0", Offset = "0x541F4F0", VA = "0x54204F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000066")]
	public char Current
	{
		[Token(Token = "0x60004D3")]
		[Address(RVA = "0x5420520", Offset = "0x541F520", VA = "0x5420520", Slot = "7")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x5420430", Offset = "0x541F430", VA = "0x5420430")]
	internal CharEnumerator(string str)
	{
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x5420460", Offset = "0x541F460", VA = "0x5420460", Slot = "9")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x5420470", Offset = "0x541F470", VA = "0x5420470", Slot = "4")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x54204C0", Offset = "0x541F4C0", VA = "0x54204C0", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x54205B0", Offset = "0x541F5B0", VA = "0x54205B0", Slot = "6")]
	public void Reset()
	{
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x54205C0", Offset = "0x541F5C0", VA = "0x54205C0")]
	internal CharEnumerator()
	{
	}
}
