using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[Token(Token = "0x2000016")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct MarkToMarkAdjustmentRecord
{
	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("baseMarkGlyphID")]
	private uint m_BaseMarkGlyphID;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("baseMarkAnchor")]
	private GlyphAnchorPoint m_BaseMarkGlyphAnchorPoint;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("combiningMarkGlyphID")]
	[SerializeField]
	private uint m_CombiningMarkGlyphID;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("combiningMarkPositionAdjustment")]
	[SerializeField]
	private MarkPositionAdjustment m_CombiningMarkPositionAdjustment;

	[Token(Token = "0x17000035")]
	public uint baseMarkGlyphID
	{
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x4B7EF90", Offset = "0x4B7EF90", VA = "0x4B7EF90")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000036")]
	public GlyphAnchorPoint baseMarkGlyphAnchorPoint
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x4B7EFA0", Offset = "0x4B7EFA0", VA = "0x4B7EFA0")]
		get
		{
			return default(GlyphAnchorPoint);
		}
	}

	[Token(Token = "0x17000037")]
	public uint combiningMarkGlyphID
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x4B7EFB0", Offset = "0x4B7EFB0", VA = "0x4B7EFB0")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000038")]
	public MarkPositionAdjustment combiningMarkPositionAdjustment
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x4B7EFC0", Offset = "0x4B7EFC0", VA = "0x4B7EFC0")]
		get
		{
			return default(MarkPositionAdjustment);
		}
	}
}
