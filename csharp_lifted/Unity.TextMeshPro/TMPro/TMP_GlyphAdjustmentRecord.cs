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
[Token(Token = "0x2000046")]
public struct TMP_GlyphAdjustmentRecord
{
	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal uint m_GlyphIndex;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	internal TMP_GlyphValueRecord m_GlyphValueRecord;

	[Token(Token = "0x1700006B")]
	public uint glyphIndex
	{
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x66F68D0", Offset = "0x66F58D0", VA = "0x66F68D0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x66F68E0", Offset = "0x66F58E0", VA = "0x66F68E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public TMP_GlyphValueRecord glyphValueRecord
	{
		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x66F68F0", Offset = "0x66F58F0", VA = "0x66F68F0")]
		get
		{
			return default(TMP_GlyphValueRecord);
		}
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x66F6900", Offset = "0x66F5900", VA = "0x66F6900")]
		set
		{
		}
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x66F6910", Offset = "0x66F5910", VA = "0x66F6910")]
	public TMP_GlyphAdjustmentRecord(uint glyphIndex, TMP_GlyphValueRecord glyphValueRecord)
	{
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x66F6920", Offset = "0x66F5920", VA = "0x66F6920")]
	internal TMP_GlyphAdjustmentRecord(GlyphAdjustmentRecord adjustmentRecord)
	{
	}
}
