using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000023")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "Unity.UIElements" })]
internal class GUILayoutGroup : GUILayoutEntry
{
	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x48")]
	public List<GUILayoutEntry> entries;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x50")]
	public bool isVertical;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x51")]
	public bool resetCoords;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x54")]
	public float spacing;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x58")]
	public bool sameSize;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x59")]
	public bool isWindow;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x5C")]
	public int windowID;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x60")]
	private int m_Cursor;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x64")]
	protected int m_StretchableCountX;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x68")]
	protected int m_StretchableCountY;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x6C")]
	protected bool m_UserSpecifiedWidth;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x6D")]
	protected bool m_UserSpecifiedHeight;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x70")]
	protected float m_ChildMinWidth;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x74")]
	protected float m_ChildMaxWidth;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x78")]
	protected float m_ChildMinHeight;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x7C")]
	protected float m_ChildMaxHeight;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x80")]
	protected int m_MarginLeft;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x84")]
	protected int m_MarginRight;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x88")]
	protected int m_MarginTop;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x8C")]
	protected int m_MarginBottom;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x0")]
	private static readonly GUILayoutEntry none;

	[Token(Token = "0x17000088")]
	public override int marginLeft
	{
		[Token(Token = "0x6000225")]
		[Address(RVA = "0x4B36320", Offset = "0x4B36320", VA = "0x4B36320", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000089")]
	public override int marginRight
	{
		[Token(Token = "0x6000226")]
		[Address(RVA = "0x4B36330", Offset = "0x4B36330", VA = "0x4B36330", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008A")]
	public override int marginTop
	{
		[Token(Token = "0x6000227")]
		[Address(RVA = "0x4B36340", Offset = "0x4B36340", VA = "0x4B36340", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008B")]
	public override int marginBottom
	{
		[Token(Token = "0x6000228")]
		[Address(RVA = "0x4B36350", Offset = "0x4B36350", VA = "0x4B36350", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x4B36360", Offset = "0x4B36360", VA = "0x4B36360")]
	public GUILayoutGroup()
	{
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x4B36470", Offset = "0x4B36470", VA = "0x4B36470", Slot = "13")]
	public override void ApplyOptions(GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x4B36560", Offset = "0x4B36560", VA = "0x4B36560", Slot = "12")]
	protected override void ApplyStyleSettings(GUIStyle style)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x4B365E0", Offset = "0x4B365E0", VA = "0x4B365E0")]
	public void ResetCursor()
	{
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x4B365F0", Offset = "0x4B365F0", VA = "0x4B365F0")]
	public GUILayoutEntry GetNext()
	{
		return null;
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x4B36870", Offset = "0x4B36870", VA = "0x4B36870")]
	public void Add(GUILayoutEntry e)
	{
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x4B36910", Offset = "0x4B36910", VA = "0x4B36910", Slot = "8")]
	public override void CalcWidth()
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x4B37130", Offset = "0x4B37130", VA = "0x4B37130", Slot = "10")]
	public override void SetHorizontal(float x, float width)
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x4B37D40", Offset = "0x4B37D40", VA = "0x4B37D40", Slot = "9")]
	public override void CalcHeight()
	{
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x4B38490", Offset = "0x4B38490", VA = "0x4B38490", Slot = "11")]
	public override void SetVertical(float y, float height)
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x4B39090", Offset = "0x4B39090", VA = "0x4B39090", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
