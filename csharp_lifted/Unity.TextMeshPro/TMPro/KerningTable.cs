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
[Token(Token = "0x200003B")]
public class KerningTable
{
	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x10")]
	public List<KerningPair> kerningPairs;

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x66F3660", Offset = "0x66F2660", VA = "0x66F3660")]
	public KerningTable()
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x66F36E0", Offset = "0x66F26E0", VA = "0x66F36E0")]
	public void AddKerningPair()
	{
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x66F38E0", Offset = "0x66F28E0", VA = "0x66F38E0")]
	public int AddKerningPair(uint first, uint second, float offset)
	{
		return default(int);
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x66F3A90", Offset = "0x66F2A90", VA = "0x66F3A90")]
	public int AddGlyphPairAdjustmentRecord(uint first, GlyphValueRecord_Legacy firstAdjustments, uint second, GlyphValueRecord_Legacy secondAdjustments)
	{
		return default(int);
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x66F3C60", Offset = "0x66F2C60", VA = "0x66F3C60")]
	public void RemoveKerningPair(int left, int right)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x66F3D80", Offset = "0x66F2D80", VA = "0x66F3D80")]
	public void RemoveKerningPair(int index)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x66F3DD0", Offset = "0x66F2DD0", VA = "0x66F3DD0")]
	public void SortKerningPairs()
	{
	}
}
