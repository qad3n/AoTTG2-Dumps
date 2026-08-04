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
		[Address(RVA = "0x4EF29E0", Offset = "0x4EF29E0", VA = "0x4EF29E0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x4EF29F0", Offset = "0x4EF29F0", VA = "0x4EF29F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public Color highlightedColor
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x4EF2A00", Offset = "0x4EF2A00", VA = "0x4EF2A00")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x4EF2A10", Offset = "0x4EF2A10", VA = "0x4EF2A10")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public Color pressedColor
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x4EF2A20", Offset = "0x4EF2A20", VA = "0x4EF2A20")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x4EF2A30", Offset = "0x4EF2A30", VA = "0x4EF2A30")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public Color selectedColor
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x4EF2A40", Offset = "0x4EF2A40", VA = "0x4EF2A40")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x4EF2A50", Offset = "0x4EF2A50", VA = "0x4EF2A50")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public Color disabledColor
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x4EF2A60", Offset = "0x4EF2A60", VA = "0x4EF2A60")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x4EF2A70", Offset = "0x4EF2A70", VA = "0x4EF2A70")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public float colorMultiplier
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x4EF2A80", Offset = "0x4EF2A80", VA = "0x4EF2A80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x4EF2A90", Offset = "0x4EF2A90", VA = "0x4EF2A90")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public float fadeDuration
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x4EF2AA0", Offset = "0x4EF2AA0", VA = "0x4EF2AA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x4EF2AB0", Offset = "0x4EF2AB0", VA = "0x4EF2AB0")]
		set
		{
		}
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4EF2AC0", Offset = "0x4EF2AC0", VA = "0x4EF2AC0")]
	static ColorBlock()
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4EF2B30", Offset = "0x4EF2B30", VA = "0x4EF2B30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4EF2C60", Offset = "0x4EF2C60", VA = "0x4EF2C60", Slot = "4")]
	public bool Equals(ColorBlock other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4EF2EB0", Offset = "0x4EF2EB0", VA = "0x4EF2EB0")]
	public static bool operator ==(ColorBlock point1, ColorBlock point2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4EF2FA0", Offset = "0x4EF2FA0", VA = "0x4EF2FA0")]
	public static bool operator !=(ColorBlock point1, ColorBlock point2)
	{
		return default(bool);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4EF3090", Offset = "0x4EF3090", VA = "0x4EF3090", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
