// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.MarkToMarkAdjustmentRecord
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x66DACC0", Offset = "0x66D9CC0", VA = "0x66DACC0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x66DACD0", Offset = "0x66D9CD0", VA = "0x66DACD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public GlyphAnchorPoint baseMarkGlyphAnchorPoint
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x66DACE0", Offset = "0x66D9CE0", VA = "0x66DACE0")]
		get
		{
			return default(GlyphAnchorPoint);
		}
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x66DACF0", Offset = "0x66D9CF0", VA = "0x66DACF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public uint combiningMarkGlyphID
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x66DAD00", Offset = "0x66D9D00", VA = "0x66DAD00")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x66DAD10", Offset = "0x66D9D10", VA = "0x66DAD10")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public MarkPositionAdjustment combiningMarkPositionAdjustment
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x66DAD20", Offset = "0x66D9D20", VA = "0x66DAD20")]
		get
		{
			return default(MarkPositionAdjustment);
		}
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x66DAD30", Offset = "0x66D9D30", VA = "0x66DAD30")]
		set
		{
		}
	}
}
