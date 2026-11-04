// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUIScrollGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000027")]
internal sealed class GUIScrollGroup : GUILayoutGroup
{
	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x90")]
	public float calcMinWidth;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x94")]
	public float calcMaxWidth;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x98")]
	public float calcMinHeight;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x9C")]
	public float calcMaxHeight;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0xA0")]
	public float clientWidth;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0xA4")]
	public float clientHeight;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0xA8")]
	public bool allowHorizontalScroll;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0xA9")]
	public bool allowVerticalScroll;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0xAA")]
	public bool needsHorizontalScrollbar;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0xAB")]
	public bool needsVerticalScrollbar;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0xB0")]
	public GUIStyle horizontalScrollbar;

	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0xB8")]
	public GUIStyle verticalScrollbar;

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x2FA94B0", Offset = "0x2FA7AB0", VA = "0x182FA94B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public GUIScrollGroup()
	{
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x2FA8FE0", Offset = "0x2FA75E0", VA = "0x182FA8FE0", Slot = "8")]
	public override void CalcWidth()
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x2FA9080", Offset = "0x2FA7680", VA = "0x182FA9080", Slot = "10")]
	public override void SetHorizontal(float x, float width)
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x2FA8ED0", Offset = "0x2FA74D0", VA = "0x182FA8ED0", Slot = "9")]
	public override void CalcHeight()
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x2FA9210", Offset = "0x2FA7810", VA = "0x182FA9210", Slot = "11")]
	public override void SetVertical(float y, float height)
	{
	}
}
