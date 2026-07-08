using System.Numerics;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000011")]
internal sealed class AutoIncrementInt64 : AutoIncrementValue
{
	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x18")]
	private long _current;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x20")]
	private long _seed;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x28")]
	private long _step;

	[Token(Token = "0x1700003D")]
	internal override object Current
	{
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x4205070", Offset = "0x4205070", VA = "0x4205070", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x4205090", Offset = "0x4205090", VA = "0x4205090", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	internal override Type DataType
	{
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x42050E0", Offset = "0x42050E0", VA = "0x42050E0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003F")]
	internal override long Seed
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x4205120", Offset = "0x4205120", VA = "0x4205120", Slot = "6")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x4205130", Offset = "0x4205130", VA = "0x4205130", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	internal override long Step
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x4205270", Offset = "0x4205270", VA = "0x4205270", Slot = "8")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x4205280", Offset = "0x4205280", VA = "0x4205280", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x4205370", Offset = "0x4205370", VA = "0x4205370", Slot = "13")]
	internal override void MoveAfter()
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x4205380", Offset = "0x4205380", VA = "0x4205380", Slot = "11")]
	internal override void SetCurrent(object value, IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x42053E0", Offset = "0x42053E0", VA = "0x42053E0", Slot = "12")]
	internal override void SetCurrentAndIncrement(object value)
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x42051B0", Offset = "0x42051B0", VA = "0x42051B0")]
	private bool BoundaryCheck(BigInteger value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x41FD950", Offset = "0x41FD950", VA = "0x41FD950")]
	public AutoIncrementInt64()
	{
	}
}
