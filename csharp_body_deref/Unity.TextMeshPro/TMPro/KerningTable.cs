// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.KerningTable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000047")]
public class KerningTable
{
	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x10")]
	public List<KerningPair> kerningPairs;

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x4C55EF0", Offset = "0x4C55EF0", VA = "0x4C55EF0")]
	public KerningTable()
	{
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x4C566E0", Offset = "0x4C566E0", VA = "0x4C566E0")]
	public void AddKerningPair()
	{
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x4C568C0", Offset = "0x4C568C0", VA = "0x4C568C0")]
	public int AddKerningPair(uint first, uint second, float offset)
	{
		return default(int);
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x4C56A70", Offset = "0x4C56A70", VA = "0x4C56A70")]
	public int AddGlyphPairAdjustmentRecord(uint first, GlyphValueRecord_Legacy firstAdjustments, uint second, GlyphValueRecord_Legacy secondAdjustments)
	{
		return default(int);
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x4C56C40", Offset = "0x4C56C40", VA = "0x4C56C40")]
	public void RemoveKerningPair(int left, int right)
	{
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x4C56D60", Offset = "0x4C56D60", VA = "0x4C56D60")]
	public void RemoveKerningPair(int index)
	{
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x4C56DB0", Offset = "0x4C56DB0", VA = "0x4C56DB0")]
	public void SortKerningPairs()
	{
	}
}
