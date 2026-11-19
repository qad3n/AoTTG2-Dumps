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
[Token(Token = "0x2000018")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct MarkToMarkAdjustmentRecord
{
	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("baseMarkGlyphID")]
	[SerializeField]
	private uint m_BaseMarkGlyphID;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("baseMarkAnchor")]
	private GlyphAnchorPoint m_BaseMarkGlyphAnchorPoint;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0xC")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("combiningMarkGlyphID")]
	private uint m_CombiningMarkGlyphID;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("combiningMarkPositionAdjustment")]
	[SerializeField]
	private MarkPositionAdjustment m_CombiningMarkPositionAdjustment;

	[Token(Token = "0x17000035")]
	public uint baseMarkGlyphID
	{
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x69FD550", Offset = "0x69FC550", VA = "0x69FD550")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x69FD560", Offset = "0x69FC560", VA = "0x69FD560")]
		set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public GlyphAnchorPoint baseMarkGlyphAnchorPoint
	{
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x69FD570", Offset = "0x69FC570", VA = "0x69FD570")]
		get
		{
			return default(GlyphAnchorPoint);
		}
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x69FD580", Offset = "0x69FC580", VA = "0x69FD580")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public uint combiningMarkGlyphID
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x69FD590", Offset = "0x69FC590", VA = "0x69FD590")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x69FD5A0", Offset = "0x69FC5A0", VA = "0x69FD5A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public MarkPositionAdjustment combiningMarkPositionAdjustment
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x69FD5B0", Offset = "0x69FC5B0", VA = "0x69FD5B0")]
		get
		{
			return default(MarkPositionAdjustment);
		}
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x69FD5C0", Offset = "0x69FC5C0", VA = "0x69FD5C0")]
		set
		{
		}
	}
}
