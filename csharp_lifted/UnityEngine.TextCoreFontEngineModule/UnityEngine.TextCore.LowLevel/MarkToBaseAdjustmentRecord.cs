// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.MarkToBaseAdjustmentRecord
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
		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x69FD4D0", Offset = "0x69FC4D0", VA = "0x69FD4D0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x69FD4E0", Offset = "0x69FC4E0", VA = "0x69FD4E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public GlyphAnchorPoint baseGlyphAnchorPoint
	{
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x69FD4F0", Offset = "0x69FC4F0", VA = "0x69FD4F0")]
		get
		{
			return default(GlyphAnchorPoint);
		}
		[Token(Token = "0x60000B9")]
		[Address(RVA = "0x69FD500", Offset = "0x69FC500", VA = "0x69FD500")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public uint markGlyphID
	{
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x69FD510", Offset = "0x69FC510", VA = "0x69FD510")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x69FD520", Offset = "0x69FC520", VA = "0x69FD520")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public MarkPositionAdjustment markPositionAdjustment
	{
		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x69FD530", Offset = "0x69FC530", VA = "0x69FD530")]
		get
		{
			return default(MarkPositionAdjustment);
		}
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x69FD540", Offset = "0x69FC540", VA = "0x69FD540")]
		set
		{
		}
	}
}
