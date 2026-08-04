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

[Token(Token = "0x2000024")]
internal sealed class GUIScrollGroup : GUILayoutGroup
{
	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x90")]
	public float calcMinWidth;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x94")]
	public float calcMaxWidth;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x98")]
	public float calcMinHeight;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x9C")]
	public float calcMaxHeight;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0xA0")]
	public float clientWidth;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0xA4")]
	public float clientHeight;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0xA8")]
	public bool allowHorizontalScroll;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0xA9")]
	public bool allowVerticalScroll;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0xAA")]
	public bool needsHorizontalScrollbar;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0xAB")]
	public bool needsVerticalScrollbar;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0xB0")]
	public GUIStyle horizontalScrollbar;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0xB8")]
	public GUIStyle verticalScrollbar;

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x4E610D0", Offset = "0x4E610D0", VA = "0x4E610D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public GUIScrollGroup()
	{
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x4E61130", Offset = "0x4E61130", VA = "0x4E61130", Slot = "8")]
	public override void CalcWidth()
	{
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x4E611E0", Offset = "0x4E611E0", VA = "0x4E611E0", Slot = "10")]
	public override void SetHorizontal(float x, float width)
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x4E61310", Offset = "0x4E61310", VA = "0x4E61310", Slot = "9")]
	public override void CalcHeight()
	{
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x4E61460", Offset = "0x4E61460", VA = "0x4E61460", Slot = "11")]
	public override void SetVertical(float y, float height)
	{
	}
}
