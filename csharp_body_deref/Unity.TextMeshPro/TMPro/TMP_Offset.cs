// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_Offset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000016")]
public struct TMP_Offset
{
	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x0")]
	private float m_Left;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x4")]
	private float m_Right;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x8")]
	private float m_Top;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0xC")]
	private float m_Bottom;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TMP_Offset k_ZeroOffset;

	[Token(Token = "0x17000019")]
	public float left
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x2CDDC80", Offset = "0x2CDC280", VA = "0x182CDDC80")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public float right
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x562BB0", Offset = "0x5611B0", VA = "0x180562BB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x2CDDC90", Offset = "0x2CDC290", VA = "0x182CDDC90")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public float top
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x562B90", Offset = "0x561190", VA = "0x180562B90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x2CDDA10", Offset = "0x2CDC010", VA = "0x182CDDA10")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public float bottom
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x562B80", Offset = "0x561180", VA = "0x180562B80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x2A3A8E0", Offset = "0x2A38EE0", VA = "0x182A3A8E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public float horizontal
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x2A727B0", Offset = "0x2A70DB0", VA = "0x182A727B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public float vertical
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x562B90", Offset = "0x561190", VA = "0x180562B90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x2CF4200", Offset = "0x2CF2800", VA = "0x182CF4200")]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public static TMP_Offset zero
	{
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x2CF4100", Offset = "0x2CF2700", VA = "0x182CF4100")]
		get
		{
			return default(TMP_Offset);
		}
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x298BAD0", Offset = "0x298A0D0", VA = "0x18298BAD0")]
	public TMP_Offset(float left, float right, float top, float bottom)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x2CF40E0", Offset = "0x2CF26E0", VA = "0x182CF40E0")]
	public TMP_Offset(float horizontal, float vertical)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x25B49C0", Offset = "0x25B2FC0", VA = "0x1825B49C0")]
	public static bool operator ==(TMP_Offset lhs, TMP_Offset rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x2CF4160", Offset = "0x2CF2760", VA = "0x182CF4160")]
	public static bool operator !=(TMP_Offset lhs, TMP_Offset rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x29C7CF0", Offset = "0x29C62F0", VA = "0x1829C7CF0")]
	public static TMP_Offset operator *(TMP_Offset a, float b)
	{
		return default(TMP_Offset);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x2CF4050", Offset = "0x2CF2650", VA = "0x182CF4050", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x2CF3FF0", Offset = "0x2CF25F0", VA = "0x182CF3FF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x2CF3F70", Offset = "0x2CF2570", VA = "0x182CF3F70")]
	public bool Equals(TMP_Offset other)
	{
		return default(bool);
	}
}
