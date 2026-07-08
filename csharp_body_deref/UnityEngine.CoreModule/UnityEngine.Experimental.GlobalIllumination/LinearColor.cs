using Il2CppDummyDll;

namespace UnityEngine.Experimental.GlobalIllumination;

[Token(Token = "0x2000339")]
public struct LinearColor
{
	[Token(Token = "0x4000A54")]
	[FieldOffset(Offset = "0x0")]
	private float m_red;

	[Token(Token = "0x4000A55")]
	[FieldOffset(Offset = "0x4")]
	private float m_green;

	[Token(Token = "0x4000A56")]
	[FieldOffset(Offset = "0x8")]
	private float m_blue;

	[Token(Token = "0x4000A57")]
	[FieldOffset(Offset = "0xC")]
	private float m_intensity;

	[Token(Token = "0x170002C5")]
	public float red
	{
		[Token(Token = "0x6001172")]
		[Address(RVA = "0x4B10DA0", Offset = "0x4B10DA0", VA = "0x4B10DA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001173")]
		[Address(RVA = "0x4B10DB0", Offset = "0x4B10DB0", VA = "0x4B10DB0")]
		set
		{
		}
	}

	[Token(Token = "0x170002C6")]
	public float green
	{
		[Token(Token = "0x6001174")]
		[Address(RVA = "0x4B10E50", Offset = "0x4B10E50", VA = "0x4B10E50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001175")]
		[Address(RVA = "0x4B10E60", Offset = "0x4B10E60", VA = "0x4B10E60")]
		set
		{
		}
	}

	[Token(Token = "0x170002C7")]
	public float blue
	{
		[Token(Token = "0x6001176")]
		[Address(RVA = "0x4B10F00", Offset = "0x4B10F00", VA = "0x4B10F00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001177")]
		[Address(RVA = "0x4B10F10", Offset = "0x4B10F10", VA = "0x4B10F10")]
		set
		{
		}
	}

	[Token(Token = "0x6001178")]
	[Address(RVA = "0x4B10FB0", Offset = "0x4B10FB0", VA = "0x4B10FB0")]
	public static LinearColor Convert(Color color, float intensity)
	{
		return default(LinearColor);
	}

	[Token(Token = "0x6001179")]
	[Address(RVA = "0x4B11280", Offset = "0x4B11280", VA = "0x4B11280")]
	public static LinearColor Black()
	{
		return default(LinearColor);
	}
}
