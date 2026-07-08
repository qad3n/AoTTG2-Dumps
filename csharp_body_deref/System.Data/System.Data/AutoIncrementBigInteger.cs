using System.Numerics;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000012")]
internal sealed class AutoIncrementBigInteger : AutoIncrementValue
{
	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x18")]
	private BigInteger _current;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x28")]
	private long _seed;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x30")]
	private BigInteger _step;

	[Token(Token = "0x17000041")]
	internal override object Current
	{
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x4205500", Offset = "0x4205500", VA = "0x4205500", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x4205550", Offset = "0x4205550", VA = "0x4205550", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000042")]
	internal override Type DataType
	{
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x42055D0", Offset = "0x42055D0", VA = "0x42055D0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000043")]
	internal override long Seed
	{
		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x4205630", Offset = "0x4205630", VA = "0x4205630", Slot = "6")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x4205640", Offset = "0x4205640", VA = "0x4205640", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	internal override long Step
	{
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x4205850", Offset = "0x4205850", VA = "0x4205850", Slot = "8")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x42058B0", Offset = "0x42058B0", VA = "0x42058B0", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x4205A60", Offset = "0x4205A60", VA = "0x4205A60", Slot = "13")]
	internal override void MoveAfter()
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x4205AF0", Offset = "0x4205AF0", VA = "0x4205AF0", Slot = "11")]
	internal override void SetCurrent(object value, IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x4205B20", Offset = "0x4205B20", VA = "0x4205B20", Slot = "12")]
	internal override void SetCurrentAndIncrement(object value)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x4205720", Offset = "0x4205720", VA = "0x4205720")]
	private bool BoundaryCheck(BigInteger value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x41FD960", Offset = "0x41FD960", VA = "0x41FD960")]
	public AutoIncrementBigInteger()
	{
	}
}
