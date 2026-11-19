// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.MarkToBaseAdjustmentRecord
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
[Token(Token = "0x2000009")]
public struct MarkToBaseAdjustmentRecord
{
	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private uint m_BaseGlyphID;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	private GlyphAnchorPoint m_BaseGlyphAnchorPoint;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0xC")]
	[SerializeField]
	private uint m_MarkGlyphID;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private MarkPositionAdjustment m_MarkPositionAdjustment;

	[Token(Token = "0x17000005")]
	public uint baseGlyphID
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x66DAC40", Offset = "0x66D9C40", VA = "0x66DAC40")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x66DAC50", Offset = "0x66D9C50", VA = "0x66DAC50")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public GlyphAnchorPoint baseGlyphAnchorPoint
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x66DAC60", Offset = "0x66D9C60", VA = "0x66DAC60")]
		get
		{
			return default(GlyphAnchorPoint);
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x66DAC70", Offset = "0x66D9C70", VA = "0x66DAC70")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public uint markGlyphID
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x66DAC80", Offset = "0x66D9C80", VA = "0x66DAC80")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x66DAC90", Offset = "0x66D9C90", VA = "0x66DAC90")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public MarkPositionAdjustment markPositionAdjustment
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x66DACA0", Offset = "0x66D9CA0", VA = "0x66DACA0")]
		get
		{
			return default(MarkPositionAdjustment);
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x66DACB0", Offset = "0x66D9CB0", VA = "0x66DACB0")]
		set
		{
		}
	}
}
