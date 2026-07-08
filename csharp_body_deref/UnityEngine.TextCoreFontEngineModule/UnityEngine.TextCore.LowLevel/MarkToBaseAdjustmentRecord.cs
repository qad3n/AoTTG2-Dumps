using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Serializable]
[Token(Token = "0x2000015")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct MarkToBaseAdjustmentRecord
{
	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("baseGlyphID")]
	[SerializeField]
	private uint m_BaseGlyphID;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x4")]
	[UnityEngine.Bindings.NativeName("baseAnchor")]
	[SerializeField]
	private GlyphAnchorPoint m_BaseGlyphAnchorPoint;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("markGlyphID")]
	[SerializeField]
	private uint m_MarkGlyphID;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("markPositionAdjustment")]
	private MarkPositionAdjustment m_MarkPositionAdjustment;

	[Token(Token = "0x17000031")]
	public uint baseGlyphID
	{
		[Token(Token = "0x6000088")]
		[Address(RVA = "0x4B7EF50", Offset = "0x4B7EF50", VA = "0x4B7EF50")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000032")]
	public GlyphAnchorPoint baseGlyphAnchorPoint
	{
		[Token(Token = "0x6000089")]
		[Address(RVA = "0x4B7EF60", Offset = "0x4B7EF60", VA = "0x4B7EF60")]
		get
		{
			return default(GlyphAnchorPoint);
		}
	}

	[Token(Token = "0x17000033")]
	public uint markGlyphID
	{
		[Token(Token = "0x600008A")]
		[Address(RVA = "0x4B7EF70", Offset = "0x4B7EF70", VA = "0x4B7EF70")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000034")]
	public MarkPositionAdjustment markPositionAdjustment
	{
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x4B7EF80", Offset = "0x4B7EF80", VA = "0x4B7EF80")]
		get
		{
			return default(MarkPositionAdjustment);
		}
	}
}
