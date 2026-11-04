// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUILayoutGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000026")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEditor.CoreModule" })]
internal class GUILayoutGroup : GUILayoutEntry
{
	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x48")]
	public List<GUILayoutEntry> entries;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x50")]
	public bool isVertical;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x51")]
	public bool resetCoords;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x54")]
	public float spacing;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x58")]
	public bool sameSize;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x59")]
	public bool isWindow;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x5C")]
	public int windowID;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x60")]
	private int m_Cursor;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x64")]
	protected int m_StretchableCountX;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x68")]
	protected int m_StretchableCountY;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x6C")]
	protected bool m_UserSpecifiedWidth;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x6D")]
	protected bool m_UserSpecifiedHeight;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x70")]
	protected float m_ChildMinWidth;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x74")]
	protected float m_ChildMaxWidth;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x78")]
	protected float m_ChildMinHeight;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x7C")]
	protected float m_ChildMaxHeight;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x80")]
	protected int m_MarginLeft;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x84")]
	protected int m_MarginRight;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x88")]
	protected int m_MarginTop;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x8C")]
	protected int m_MarginBottom;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly GUILayoutEntry none;

	[Token(Token = "0x1700008C")]
	public override int marginLeft
	{
		[Token(Token = "0x6000279")]
		[Address(RVA = "0xB5B9B0", Offset = "0xB59FB0", VA = "0x180B5B9B0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008D")]
	public override int marginRight
	{
		[Token(Token = "0x600027A")]
		[Address(RVA = "0xA4D4C0", Offset = "0xA4BAC0", VA = "0x180A4D4C0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008E")]
	public override int marginTop
	{
		[Token(Token = "0x600027B")]
		[Address(RVA = "0xA4D4B0", Offset = "0xA4BAB0", VA = "0x180A4D4B0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008F")]
	public override int marginBottom
	{
		[Token(Token = "0x600027C")]
		[Address(RVA = "0xA4D580", Offset = "0xA4BB80", VA = "0x180A4D580", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x2FA8DA0", Offset = "0x2FA73A0", VA = "0x182FA8DA0")]
	public GUILayoutGroup()
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x2FA67B0", Offset = "0x2FA4DB0", VA = "0x182FA67B0", Slot = "13")]
	public override void ApplyOptions(GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x2FA68C0", Offset = "0x2FA4EC0", VA = "0x182FA68C0", Slot = "12")]
	protected override void ApplyStyleSettings(GUIStyle style)
	{
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x2FA7940", Offset = "0x2FA5F40", VA = "0x182FA7940")]
	public void ResetCursor()
	{
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x2FA7690", Offset = "0x2FA5C90", VA = "0x182FA7690")]
	public GUILayoutEntry GetNext()
	{
		return null;
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x2FA6700", Offset = "0x2FA4D00", VA = "0x182FA6700")]
	public void Add(GUILayoutEntry e)
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x2FA6FB0", Offset = "0x2FA55B0", VA = "0x182FA6FB0", Slot = "8")]
	public override void CalcWidth()
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x2FA7950", Offset = "0x2FA5F50", VA = "0x182FA7950", Slot = "10")]
	public override void SetHorizontal(float x, float width)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x2FA6940", Offset = "0x2FA4F40", VA = "0x182FA6940", Slot = "9")]
	public override void CalcHeight()
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x2FA8150", Offset = "0x2FA6750", VA = "0x182FA8150", Slot = "11")]
	public override void SetVertical(float y, float height)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x2FA8950", Offset = "0x2FA6F50", VA = "0x182FA8950", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
