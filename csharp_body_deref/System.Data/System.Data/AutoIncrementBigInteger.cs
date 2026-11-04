// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.AutoIncrementBigInteger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Numerics;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200000C")]
internal sealed class AutoIncrementBigInteger : AutoIncrementValue
{
	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x18")]
	private BigInteger _current;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x28")]
	private long _seed;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x30")]
	private BigInteger _step;

	[Token(Token = "0x17000034")]
	internal override object Current
	{
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x24C1370", Offset = "0x24BF970", VA = "0x1824C1370", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x24C1470", Offset = "0x24BFA70", VA = "0x1824C1470", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	internal override Type DataType
	{
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x24C13C0", Offset = "0x24BF9C0", VA = "0x1824C13C0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000036")]
	internal override long Seed
	{
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "6")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x24C14F0", Offset = "0x24BFAF0", VA = "0x1824C14F0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	internal override long Step
	{
		[Token(Token = "0x600009D")]
		[Address(RVA = "0x24C1410", Offset = "0x24BFA10", VA = "0x1824C1410", Slot = "8")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600009E")]
		[Address(RVA = "0x24C15F0", Offset = "0x24BFBF0", VA = "0x1824C15F0", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x24C1150", Offset = "0x24BF750", VA = "0x1824C1150", Slot = "13")]
	internal override void MoveAfter()
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x24C12D0", Offset = "0x24BF8D0", VA = "0x1824C12D0", Slot = "11")]
	internal override void SetCurrent(object value, IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x24C11E0", Offset = "0x24BF7E0", VA = "0x1824C11E0", Slot = "12")]
	internal override void SetCurrentAndIncrement(object value)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x24C1010", Offset = "0x24BF610", VA = "0x1824C1010")]
	private bool BoundaryCheck(BigInteger value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x24C1300", Offset = "0x24BF900", VA = "0x1824C1300")]
	public AutoIncrementBigInteger()
	{
	}
}
