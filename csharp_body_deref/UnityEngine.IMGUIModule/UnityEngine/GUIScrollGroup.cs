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
	[Address(RVA = "0x4B39510", Offset = "0x4B39510", VA = "0x4B39510")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public GUIScrollGroup()
	{
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x4B39570", Offset = "0x4B39570", VA = "0x4B39570", Slot = "8")]
	public override void CalcWidth()
	{
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x4B39620", Offset = "0x4B39620", VA = "0x4B39620", Slot = "10")]
	public override void SetHorizontal(float x, float width)
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x4B39750", Offset = "0x4B39750", VA = "0x4B39750", Slot = "9")]
	public override void CalcHeight()
	{
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x4B398A0", Offset = "0x4B398A0", VA = "0x4B398A0", Slot = "11")]
	public override void SetVertical(float y, float height)
	{
	}
}
