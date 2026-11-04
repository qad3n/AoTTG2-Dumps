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
	[Address(RVA = "0x2CF4F10", Offset = "0x2CF3510", VA = "0x182CF4F10")]
	public KerningTable()
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x2CF4A30", Offset = "0x2CF3030", VA = "0x182CF4A30")]
	public void AddKerningPair()
	{
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x2CF48E0", Offset = "0x2CF2EE0", VA = "0x182CF48E0")]
	public int AddKerningPair(uint first, uint second, float offset)
	{
		return default(int);
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x2CF4780", Offset = "0x2CF2D80", VA = "0x182CF4780")]
	public int AddGlyphPairAdjustmentRecord(uint first, GlyphValueRecord_Legacy firstAdjustments, uint second, GlyphValueRecord_Legacy secondAdjustments)
	{
		return default(int);
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x2CF4B80", Offset = "0x2CF3180", VA = "0x182CF4B80")]
	public void RemoveKerningPair(int left, int right)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x2CF4C70", Offset = "0x2CF3270", VA = "0x182CF4C70")]
	public void RemoveKerningPair(int index)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x2CF4CD0", Offset = "0x2CF32D0", VA = "0x182CF4CD0")]
	public void SortKerningPairs()
	{
	}
}
