// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.MarkToMarkAdjustmentRecord
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x200000A")]
public struct MarkToMarkAdjustmentRecord
{
	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private uint m_BaseMarkGlyphID;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private GlyphAnchorPoint m_BaseMarkGlyphAnchorPoint;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0xC")]
	[SerializeField]
	private uint m_CombiningMarkGlyphID;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private MarkPositionAdjustment m_CombiningMarkPositionAdjustment;

	[Token(Token = "0x17000009")]
	public uint baseMarkGlyphID
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public GlyphAnchorPoint baseMarkGlyphAnchorPoint
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0xADC3B0", Offset = "0xADA9B0", VA = "0x180ADC3B0")]
		get
		{
			return default(GlyphAnchorPoint);
		}
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x1B943B0", Offset = "0x1B929B0", VA = "0x181B943B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public uint combiningMarkGlyphID
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x57AEF0", Offset = "0x5794F0", VA = "0x18057AEF0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x57AF30", Offset = "0x579530", VA = "0x18057AF30")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public MarkPositionAdjustment combiningMarkPositionAdjustment
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x560EA0", Offset = "0x55F4A0", VA = "0x180560EA0")]
		get
		{
			return default(MarkPositionAdjustment);
		}
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x560EC0", Offset = "0x55F4C0", VA = "0x180560EC0")]
		set
		{
		}
	}
}
