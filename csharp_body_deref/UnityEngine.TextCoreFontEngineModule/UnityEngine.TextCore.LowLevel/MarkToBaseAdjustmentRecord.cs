// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.MarkToBaseAdjustmentRecord
// Update status: CHANGED in this game update
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
[Token(Token = "0x2000017")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
internal struct MarkToBaseAdjustmentRecord
{
	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("baseGlyphID")]
	[SerializeField]
	private uint m_BaseGlyphID;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("baseAnchor")]
	private GlyphAnchorPoint m_BaseGlyphAnchorPoint;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("markGlyphID")]
	[SerializeField]
	private uint m_MarkGlyphID;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("markPositionAdjustment")]
	[SerializeField]
	private MarkPositionAdjustment m_MarkPositionAdjustment;

	[Token(Token = "0x17000031")]
	public uint baseGlyphID
	{
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public GlyphAnchorPoint baseGlyphAnchorPoint
	{
		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x2FC65B0", Offset = "0x2FC4BB0", VA = "0x182FC65B0")]
		get
		{
			return default(GlyphAnchorPoint);
		}
		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x1B943B0", Offset = "0x1B929B0", VA = "0x181B943B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public uint markGlyphID
	{
		[Token(Token = "0x60000B6")]
		[Address(RVA = "0xAC8B50", Offset = "0xAC7150", VA = "0x180AC8B50")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x57AF30", Offset = "0x579530", VA = "0x18057AF30")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public MarkPositionAdjustment markPositionAdjustment
	{
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x2FDA480", Offset = "0x2FD8A80", VA = "0x182FDA480")]
		get
		{
			return default(MarkPositionAdjustment);
		}
		[Token(Token = "0x60000B9")]
		[Address(RVA = "0x560EC0", Offset = "0x55F4C0", VA = "0x180560EC0")]
		set
		{
		}
	}
}
