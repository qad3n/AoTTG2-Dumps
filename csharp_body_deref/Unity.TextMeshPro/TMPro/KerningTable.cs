using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000031")]
public class KerningTable
{
	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x10")]
	public List<KerningPair> kerningPairs;

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x4908970", Offset = "0x4908970", VA = "0x4908970")]
	public KerningTable()
	{
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x4909160", Offset = "0x4909160", VA = "0x4909160")]
	public void AddKerningPair()
	{
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x4909340", Offset = "0x4909340", VA = "0x4909340")]
	public int AddKerningPair(uint first, uint second, float offset)
	{
		return default(int);
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x49094F0", Offset = "0x49094F0", VA = "0x49094F0")]
	public int AddGlyphPairAdjustmentRecord(uint first, GlyphValueRecord_Legacy firstAdjustments, uint second, GlyphValueRecord_Legacy secondAdjustments)
	{
		return default(int);
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x49096C0", Offset = "0x49096C0", VA = "0x49096C0")]
	public void RemoveKerningPair(int left, int right)
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x49097E0", Offset = "0x49097E0", VA = "0x49097E0")]
	public void RemoveKerningPair(int index)
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x4909830", Offset = "0x4909830", VA = "0x4909830")]
	public void SortKerningPairs()
	{
	}
}
