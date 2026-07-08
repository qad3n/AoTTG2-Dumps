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
		[Address(RVA = "0x3B68F00", Offset = "0x3B68F00", VA = "0x3B68F00", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	public DictionaryEntry Current
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x3B68F90", Offset = "0x3B68F90", VA = "0x3B68F90", Slot = "4")]
		get
		{
			return default(DictionaryEntry);
		}
	}

	[Token(Token = "0x17000015")]
	public object Key
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x3B69000", Offset = "0x3B69000", VA = "0x3B69000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000016")]
	public object Value
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x3B69040", Offset = "0x3B69040", VA = "0x3B69040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x3B685B0", Offset = "0x3B685B0", VA = "0x3B685B0")]
	public DictionaryEntryEnumerator(Dictionary<object, object>.Enumerator original)
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x3B69080", Offset = "0x3B69080", VA = "0x3B69080", Slot = "6")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x3B690C0", Offset = "0x3B690C0", VA = "0x3B690C0", Slot = "8")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x3B69160", Offset = "0x3B69160", VA = "0x3B69160", Slot = "5")]
	public void Dispose()
	{
	}
}
