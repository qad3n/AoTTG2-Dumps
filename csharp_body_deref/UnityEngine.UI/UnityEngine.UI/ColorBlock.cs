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
		[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0xBDB210", Offset = "0xBD9810", VA = "0x180BDB210")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public Color highlightedColor
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x561300", Offset = "0x55F900", VA = "0x180561300")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x561310", Offset = "0x55F910", VA = "0x180561310")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public Color pressedColor
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0xC84140", Offset = "0xC82740", VA = "0x180C84140")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x19377C0", Offset = "0x1935DC0", VA = "0x1819377C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public Color selectedColor
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x1D94540", Offset = "0x1D92B40", VA = "0x181D94540")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x2B09750", Offset = "0x2B07D50", VA = "0x182B09750")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public Color disabledColor
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0xE8F6D0", Offset = "0xE8DCD0", VA = "0x180E8F6D0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0xE8F720", Offset = "0xE8DD20", VA = "0x180E8F720")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public float colorMultiplier
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0xDA5AC0", Offset = "0xDA40C0", VA = "0x180DA5AC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x2E909C0", Offset = "0x2E8EFC0", VA = "0x182E909C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public float fadeDuration
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x2D45BF0", Offset = "0x2D441F0", VA = "0x182D45BF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x2D45F10", Offset = "0x2D44510", VA = "0x182D45F10")]
		set
		{
		}
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x30642F0", Offset = "0x30628F0", VA = "0x1830642F0")]
	static ColorBlock()
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x3063EE0", Offset = "0x30624E0", VA = "0x183063EE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x3063FD0", Offset = "0x30625D0", VA = "0x183063FD0", Slot = "4")]
	public bool Equals(ColorBlock other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x3064370", Offset = "0x3062970", VA = "0x183064370")]
	public static bool operator ==(ColorBlock point1, ColorBlock point2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x3064410", Offset = "0x3062A10", VA = "0x183064410")]
	public static bool operator !=(ColorBlock point1, ColorBlock point2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x3064260", Offset = "0x3062860", VA = "0x183064260", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
