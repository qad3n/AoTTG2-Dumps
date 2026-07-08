using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.UI;

[Serializable]
[Token(Token = "0x200000B")]
public struct ColorBlock : IEquatable<ColorBlock>
{
	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x0")]
	[FormerlySerializedAs("normalColor")]
	[SerializeField]
	private Color m_NormalColor;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x10")]
	[FormerlySerializedAs("highlightedColor")]
	[SerializeField]
	private Color m_HighlightedColor;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x20")]
	[FormerlySerializedAs("pressedColor")]
	[SerializeField]
	private Color m_PressedColor;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x30")]
	[FormerlySerializedAs("m_HighlightedColor")]
	[SerializeField]
	private Color m_SelectedColor;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x40")]
	[FormerlySerializedAs("disabledColor")]
	[SerializeField]
	private Color m_DisabledColor;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x50")]
	[Range(1f, 5f)]
	[SerializeField]
	private float m_ColorMultiplier;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x54")]
	[FormerlySerializedAs("fadeDuration")]
	[SerializeField]
	private float m_FadeDuration;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x0")]
	public static ColorBlock defaultColorBlock;

	[Token(Token = "0x1700000B")]
	public Color normalColor
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x4BCB0B0", Offset = "0x4BCB0B0", VA = "0x4BCB0B0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x4BCB0C0", Offset = "0x4BCB0C0", VA = "0x4BCB0C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public Color highlightedColor
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x4BCB0D0", Offset = "0x4BCB0D0", VA = "0x4BCB0D0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x4BCB0E0", Offset = "0x4BCB0E0", VA = "0x4BCB0E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public Color pressedColor
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x4BCB0F0", Offset = "0x4BCB0F0", VA = "0x4BCB0F0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x4BCB100", Offset = "0x4BCB100", VA = "0x4BCB100")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public Color selectedColor
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x4BCB110", Offset = "0x4BCB110", VA = "0x4BCB110")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x4BCB120", Offset = "0x4BCB120", VA = "0x4BCB120")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public Color disabledColor
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x4BCB130", Offset = "0x4BCB130", VA = "0x4BCB130")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x4BCB140", Offset = "0x4BCB140", VA = "0x4BCB140")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public float colorMultiplier
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x4BCB150", Offset = "0x4BCB150", VA = "0x4BCB150")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x4BCB160", Offset = "0x4BCB160", VA = "0x4BCB160")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public float fadeDuration
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x4BCB170", Offset = "0x4BCB170", VA = "0x4BCB170")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x4BCB180", Offset = "0x4BCB180", VA = "0x4BCB180")]
		set
		{
		}
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4BCB190", Offset = "0x4BCB190", VA = "0x4BCB190")]
	static ColorBlock()
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4BCB200", Offset = "0x4BCB200", VA = "0x4BCB200", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4BCB330", Offset = "0x4BCB330", VA = "0x4BCB330", Slot = "4")]
	public bool Equals(ColorBlock other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4BCB580", Offset = "0x4BCB580", VA = "0x4BCB580")]
	public static bool operator ==(ColorBlock point1, ColorBlock point2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4BCB670", Offset = "0x4BCB670", VA = "0x4BCB670")]
	public static bool operator !=(ColorBlock point1, ColorBlock point2)
	{
		return default(bool);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4BCB760", Offset = "0x4BCB760", VA = "0x4BCB760", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
