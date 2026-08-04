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
		[Address(RVA = "0x3E5E850", Offset = "0x3E5E850", VA = "0x3E5E850", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	public DictionaryEntry Current
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x3E5E8E0", Offset = "0x3E5E8E0", VA = "0x3E5E8E0", Slot = "4")]
		get
		{
			return default(DictionaryEntry);
		}
	}

	[Token(Token = "0x17000015")]
	public object Key
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x3E5E950", Offset = "0x3E5E950", VA = "0x3E5E950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000016")]
	public object Value
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x3E5E990", Offset = "0x3E5E990", VA = "0x3E5E990")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x3E5DF00", Offset = "0x3E5DF00", VA = "0x3E5DF00")]
	public DictionaryEntryEnumerator(Dictionary<object, object>.Enumerator original)
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x3E5E9D0", Offset = "0x3E5E9D0", VA = "0x3E5E9D0", Slot = "6")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x3E5EA10", Offset = "0x3E5EA10", VA = "0x3E5EA10", Slot = "8")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x3E5EAB0", Offset = "0x3E5EAB0", VA = "0x3E5EAB0", Slot = "5")]
	public void Dispose()
	{
	}
}
