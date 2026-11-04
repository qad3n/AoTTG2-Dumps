// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.DictionaryEntryEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200000A")]
public struct DictionaryEntryEnumerator : IEnumerator<DictionaryEntry>, IEnumerator, IDisposable
{
	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x0")]
	private Dictionary<object, object>.Enumerator enumerator;

	[Token(Token = "0x17000013")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x1CBB9F0", Offset = "0x1CB9FF0", VA = "0x181CBB9F0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	public DictionaryEntry Current
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x1CBBA80", Offset = "0x1CBA080", VA = "0x181CBBA80", Slot = "4")]
		get
		{
			return default(DictionaryEntry);
		}
	}

	[Token(Token = "0x17000015")]
	public object Key
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x1CBBB00", Offset = "0x1CBA100", VA = "0x181CBBB00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000016")]
	public object Value
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x1CBBB50", Offset = "0x1CBA150", VA = "0x181CBBB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0xF43010", Offset = "0xF41610", VA = "0x180F43010")]
	public DictionaryEntryEnumerator(Dictionary<object, object>.Enumerator original)
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x1CBB900", Offset = "0x1CB9F00", VA = "0x181CBB900", Slot = "6")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x1CBB940", Offset = "0x1CB9F40", VA = "0x181CBB940", Slot = "8")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public void Dispose()
	{
	}
}
