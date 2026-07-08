using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000528")]
internal struct LayoutValue
{
	[Token(Token = "0x4001165")]
	[FieldOffset(Offset = "0x0")]
	private float value;

	[Token(Token = "0x4001166")]
	[FieldOffset(Offset = "0x4")]
	private LayoutUnit unit;

	[Token(Token = "0x170007F9")]
	public LayoutUnit Unit
	{
		[Token(Token = "0x6001F5D")]
		[Address(RVA = "0x4C94AE0", Offset = "0x4C94AE0", VA = "0x4C94AE0")]
		get
		{
			return default(LayoutUnit);
		}
	}

	[Token(Token = "0x170007FA")]
	public float Value
	{
		[Token(Token = "0x6001F5E")]
		[Address(RVA = "0x4C94AF0", Offset = "0x4C94AF0", VA = "0x4C94AF0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6001F5F")]
	[Address(RVA = "0x4C92120", Offset = "0x4C92120", VA = "0x4C92120")]
	public static LayoutValue Point(float value)
	{
		return default(LayoutValue);
	}

	[Token(Token = "0x6001F60")]
	[Address(RVA = "0x4C94B00", Offset = "0x4C94B00", VA = "0x4C94B00")]
	public bool Equals(LayoutValue other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F61")]
	[Address(RVA = "0x4C94B50", Offset = "0x4C94B50", VA = "0x4C94B50", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F62")]
	[Address(RVA = "0x4C94BF0", Offset = "0x4C94BF0", VA = "0x4C94BF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001F63")]
	[Address(RVA = "0x4C92250", Offset = "0x4C92250", VA = "0x4C92250")]
	public static LayoutValue Undefined()
	{
		return default(LayoutValue);
	}

	[Token(Token = "0x6001F64")]
	[Address(RVA = "0x4C92110", Offset = "0x4C92110", VA = "0x4C92110")]
	public static LayoutValue Auto()
	{
		return default(LayoutValue);
	}

	[Token(Token = "0x6001F65")]
	[Address(RVA = "0x4C92220", Offset = "0x4C92220", VA = "0x4C92220")]
	public static LayoutValue Percent(float value)
	{
		return default(LayoutValue);
	}

	[Token(Token = "0x6001F66")]
	[Address(RVA = "0x4C94C20", Offset = "0x4C94C20", VA = "0x4C94C20")]
	public static implicit operator LayoutValue(float value)
	{
		return default(LayoutValue);
	}
}
