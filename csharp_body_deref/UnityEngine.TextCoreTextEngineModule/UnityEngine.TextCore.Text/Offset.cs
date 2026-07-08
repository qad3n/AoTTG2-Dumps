using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200002F")]
internal struct Offset
{
	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x0")]
	private float m_Left;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x4")]
	private float m_Right;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x8")]
	private float m_Top;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0xC")]
	private float m_Bottom;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Offset k_ZeroOffset;

	[Token(Token = "0x17000035")]
	public float left
	{
		[Token(Token = "0x6000120")]
		[Address(RVA = "0x4BB4020", Offset = "0x4BB4020", VA = "0x4BB4020")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000036")]
	public float right
	{
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x4BB4030", Offset = "0x4BB4030", VA = "0x4BB4030")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000037")]
	public float top
	{
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x4BB4040", Offset = "0x4BB4040", VA = "0x4BB4040")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000038")]
	public float bottom
	{
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x4BB4050", Offset = "0x4BB4050", VA = "0x4BB4050")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000039")]
	public static Offset zero
	{
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x4BB4060", Offset = "0x4BB4060", VA = "0x4BB4060")]
		get
		{
			return default(Offset);
		}
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x4BB40B0", Offset = "0x4BB40B0", VA = "0x4BB40B0")]
	public Offset(float left, float right, float top, float bottom)
	{
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x4BB40D0", Offset = "0x4BB40D0", VA = "0x4BB40D0")]
	public static bool operator ==(Offset lhs, Offset rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x4BB4110", Offset = "0x4BB4110", VA = "0x4BB4110")]
	public static Offset operator *(Offset a, float b)
	{
		return default(Offset);
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x4BB4120", Offset = "0x4BB4120", VA = "0x4BB4120", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x4BB4170", Offset = "0x4BB4170", VA = "0x4BB4170", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}
}
