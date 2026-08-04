// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.MarkToMarkAdjustmentRecord
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4EA68C0", Offset = "0x4EA68C0", VA = "0x4EA68C0")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000036")]
	public GlyphAnchorPoint baseMarkGlyphAnchorPoint
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x4EA68D0", Offset = "0x4EA68D0", VA = "0x4EA68D0")]
		get
		{
			return default(GlyphAnchorPoint);
		}
	}

	[Token(Token = "0x17000037")]
	public uint combiningMarkGlyphID
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x4EA68E0", Offset = "0x4EA68E0", VA = "0x4EA68E0")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000038")]
	public MarkPositionAdjustment combiningMarkPositionAdjustment
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x4EA68F0", Offset = "0x4EA68F0", VA = "0x4EA68F0")]
		get
		{
			return default(MarkPositionAdjustment);
		}
	}
}
