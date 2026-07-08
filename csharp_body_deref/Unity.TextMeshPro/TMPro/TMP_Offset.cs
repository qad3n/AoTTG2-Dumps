using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x200000F")]
public struct TMP_Offset
{
	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x0")]
	private float m_Left;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x4")]
	private float m_Right;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x8")]
	private float m_Top;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0xC")]
	private float m_Bottom;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TMP_Offset k_ZeroOffset;

	[Token(Token = "0x17000004")]
	public float left
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x48F7720", Offset = "0x48F7720", VA = "0x48F7720")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x48F7730", Offset = "0x48F7730", VA = "0x48F7730")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public float right
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x48F7740", Offset = "0x48F7740", VA = "0x48F7740")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x48F7750", Offset = "0x48F7750", VA = "0x48F7750")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public float top
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x48F7760", Offset = "0x48F7760", VA = "0x48F7760")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x48F7770", Offset = "0x48F7770", VA = "0x48F7770")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public float bottom
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x48F7780", Offset = "0x48F7780", VA = "0x48F7780")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x48F7790", Offset = "0x48F7790", VA = "0x48F7790")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public float horizontal
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x48F77A0", Offset = "0x48F77A0", VA = "0x48F77A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x48F77B0", Offset = "0x48F77B0", VA = "0x48F77B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public float vertical
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x48F77C0", Offset = "0x48F77C0", VA = "0x48F77C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x48F77D0", Offset = "0x48F77D0", VA = "0x48F77D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public static TMP_Offset zero
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x48F77E0", Offset = "0x48F77E0", VA = "0x48F77E0")]
		get
		{
			return default(TMP_Offset);
		}
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x48F7830", Offset = "0x48F7830", VA = "0x48F7830")]
	public TMP_Offset(float left, float right, float top, float bottom)
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x48F7850", Offset = "0x48F7850", VA = "0x48F7850")]
	public TMP_Offset(float horizontal, float vertical)
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x48F7870", Offset = "0x48F7870", VA = "0x48F7870")]
	public static bool operator ==(TMP_Offset lhs, TMP_Offset rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x48F78B0", Offset = "0x48F78B0", VA = "0x48F78B0")]
	public static bool operator !=(TMP_Offset lhs, TMP_Offset rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x48F79A0", Offset = "0x48F79A0", VA = "0x48F79A0")]
	public static TMP_Offset operator *(TMP_Offset a, float b)
	{
		return default(TMP_Offset);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x48F79B0", Offset = "0x48F79B0", VA = "0x48F79B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x48F7A00", Offset = "0x48F7A00", VA = "0x48F7A00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x48F7A60", Offset = "0x48F7A60", VA = "0x48F7A60")]
	public bool Equals(TMP_Offset other)
	{
		return default(bool);
	}
}
