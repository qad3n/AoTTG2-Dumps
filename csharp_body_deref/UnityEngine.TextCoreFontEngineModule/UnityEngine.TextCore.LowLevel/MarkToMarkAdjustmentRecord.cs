// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.MarkToMarkAdjustmentRecord
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
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public GlyphAnchorPoint baseMarkGlyphAnchorPoint
	{
		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x2FC65B0", Offset = "0x2FC4BB0", VA = "0x182FC65B0")]
		get
		{
			return default(GlyphAnchorPoint);
		}
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x1B943B0", Offset = "0x1B929B0", VA = "0x181B943B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public uint combiningMarkGlyphID
	{
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0xAC8B50", Offset = "0xAC7150", VA = "0x180AC8B50")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x57AF30", Offset = "0x579530", VA = "0x18057AF30")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public MarkPositionAdjustment combiningMarkPositionAdjustment
	{
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x2FDA480", Offset = "0x2FD8A80", VA = "0x182FDA480")]
		get
		{
			return default(MarkPositionAdjustment);
		}
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x560EC0", Offset = "0x55F4C0", VA = "0x180560EC0")]
		set
		{
		}
	}
}
