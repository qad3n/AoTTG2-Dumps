// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.ColorBlock
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.UI;

[Serializable]
[Token(Token = "0x2000009")]
public struct ColorBlock : IEquatable<ColorBlock>
{
	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x0")]
	[FormerlySerializedAs("normalColor")]
	[SerializeField]
	private Color m_NormalColor;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x10")]
	[FormerlySerializedAs("highlightedColor")]
	[SerializeField]
	private Color m_HighlightedColor;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x20")]
	[FormerlySerializedAs("pressedColor")]
	[SerializeField]
	private Color m_PressedColor;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x30")]
	[FormerlySerializedAs("m_HighlightedColor")]
	[SerializeField]
	private Color m_SelectedColor;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x40")]
	[FormerlySerializedAs("disabledColor")]
	[SerializeField]
	private Color m_DisabledColor;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x50")]
	[Range(1f, 5f)]
	[SerializeField]
	private float m_ColorMultiplier;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x54")]
	[FormerlySerializedAs("fadeDuration")]
	[SerializeField]
	private float m_FadeDuration;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x0")]
	public static ColorBlock defaultColorBlock;

	[Token(Token = "0x1700000B")]
	public Color normalColor
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x6A5FBE0", Offset = "0x6A5EBE0", VA = "0x6A5FBE0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x6A5FBF0", Offset = "0x6A5EBF0", VA = "0x6A5FBF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public Color highlightedColor
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x6A5FC00", Offset = "0x6A5EC00", VA = "0x6A5FC00")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x6A5FC10", Offset = "0x6A5EC10", VA = "0x6A5FC10")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public Color pressedColor
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x6A5FC20", Offset = "0x6A5EC20", VA = "0x6A5FC20")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x6A5FC30", Offset = "0x6A5EC30", VA = "0x6A5FC30")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public Color selectedColor
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x6A5FC40", Offset = "0x6A5EC40", VA = "0x6A5FC40")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x6A5FC50", Offset = "0x6A5EC50", VA = "0x6A5FC50")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public Color disabledColor
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x6A5FC60", Offset = "0x6A5EC60", VA = "0x6A5FC60")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x6A5FC70", Offset = "0x6A5EC70", VA = "0x6A5FC70")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public float colorMultiplier
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x6A5FC80", Offset = "0x6A5EC80", VA = "0x6A5FC80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x6A5FC90", Offset = "0x6A5EC90", VA = "0x6A5FC90")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public float fadeDuration
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x6A5FCA0", Offset = "0x6A5ECA0", VA = "0x6A5FCA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x6A5FCB0", Offset = "0x6A5ECB0", VA = "0x6A5FCB0")]
		set
		{
		}
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x6A5FCC0", Offset = "0x6A5ECC0", VA = "0x6A5FCC0")]
	static ColorBlock()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x6A5FD30", Offset = "0x6A5ED30", VA = "0x6A5FD30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x6A5FE60", Offset = "0x6A5EE60", VA = "0x6A5FE60", Slot = "4")]
	public bool Equals(ColorBlock other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x6A600A0", Offset = "0x6A5F0A0", VA = "0x6A600A0")]
	public static bool operator ==(ColorBlock point1, ColorBlock point2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x6A60130", Offset = "0x6A5F130", VA = "0x6A60130")]
	public static bool operator !=(ColorBlock point1, ColorBlock point2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x6A601C0", Offset = "0x6A5F1C0", VA = "0x6A601C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
