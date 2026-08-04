// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_GlyphAdjustmentRecord
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.TextCore.LowLevel;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000050")]
public struct TMP_GlyphAdjustmentRecord
{
	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal uint m_GlyphIndex;

	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	internal TMP_GlyphValueRecord m_GlyphValueRecord;

	[Token(Token = "0x1700006F")]
	public uint glyphIndex
	{
		[Token(Token = "0x6000274")]
		[Address(RVA = "0x4C586B0", Offset = "0x4C586B0", VA = "0x4C586B0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000275")]
		[Address(RVA = "0x4C586C0", Offset = "0x4C586C0", VA = "0x4C586C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public TMP_GlyphValueRecord glyphValueRecord
	{
		[Token(Token = "0x6000276")]
		[Address(RVA = "0x4C586D0", Offset = "0x4C586D0", VA = "0x4C586D0")]
		get
		{
			return default(TMP_GlyphValueRecord);
		}
		[Token(Token = "0x6000277")]
		[Address(RVA = "0x4C586E0", Offset = "0x4C586E0", VA = "0x4C586E0")]
		set
		{
		}
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x4C55A20", Offset = "0x4C55A20", VA = "0x4C55A20")]
	public TMP_GlyphAdjustmentRecord(uint glyphIndex, TMP_GlyphValueRecord glyphValueRecord)
	{
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x4C586F0", Offset = "0x4C586F0", VA = "0x4C586F0")]
	internal TMP_GlyphAdjustmentRecord(GlyphAdjustmentRecord adjustmentRecord)
	{
	}
}
