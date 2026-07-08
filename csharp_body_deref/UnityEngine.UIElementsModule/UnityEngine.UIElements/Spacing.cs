using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000264")]
internal struct Spacing
{
	[Token(Token = "0x40008E0")]
	[FieldOffset(Offset = "0x0")]
	public float left;

	[Token(Token = "0x40008E1")]
	[FieldOffset(Offset = "0x4")]
	public float top;

	[Token(Token = "0x40008E2")]
	[FieldOffset(Offset = "0x8")]
	public float right;

	[Token(Token = "0x40008E3")]
	[FieldOffset(Offset = "0xC")]
	public float bottom;

	[Token(Token = "0x1700030C")]
	public float horizontal
	{
		[Token(Token = "0x6000FCA")]
		[Address(RVA = "0x4D50920", Offset = "0x4D50920", VA = "0x4D50920")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700030D")]
	public float vertical
	{
		[Token(Token = "0x6000FCB")]
		[Address(RVA = "0x4D50930", Offset = "0x4D50930", VA = "0x4D50930")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x4D50940", Offset = "0x4D50940", VA = "0x4D50940")]
	public Spacing(float left, float top, float right, float bottom)
	{
	}

	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x4D50960", Offset = "0x4D50960", VA = "0x4D50960")]
	public static Rect operator -(Rect r, Spacing a)
	{
		return default(Rect);
	}
}
