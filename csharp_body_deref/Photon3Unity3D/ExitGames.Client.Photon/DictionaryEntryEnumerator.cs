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
		[Address(RVA = "0x564F6F0", Offset = "0x564E6F0", VA = "0x564F6F0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	public DictionaryEntry Current
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x564F780", Offset = "0x564E780", VA = "0x564F780", Slot = "4")]
		get
		{
			return default(DictionaryEntry);
		}
	}

	[Token(Token = "0x17000015")]
	public object Key
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x564F7F0", Offset = "0x564E7F0", VA = "0x564F7F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000016")]
	public object Value
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x564F830", Offset = "0x564E830", VA = "0x564F830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x564EF50", Offset = "0x564DF50", VA = "0x564EF50")]
	public DictionaryEntryEnumerator(Dictionary<object, object>.Enumerator original)
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x564F870", Offset = "0x564E870", VA = "0x564F870", Slot = "6")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x564F8B0", Offset = "0x564E8B0", VA = "0x564F8B0", Slot = "8")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x564F950", Offset = "0x564E950", VA = "0x564F950", Slot = "5")]
	public void Dispose()
	{
	}
}
