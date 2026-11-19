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
		[Address(RVA = "0x5E6B390", Offset = "0x5E6A390", VA = "0x5E6B390", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x5E6B3E0", Offset = "0x5E6A3E0", VA = "0x5E6B3E0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	internal override Type DataType
	{
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x5E6B460", Offset = "0x5E6A460", VA = "0x5E6B460", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000036")]
	internal override long Seed
	{
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x5E6B4C0", Offset = "0x5E6A4C0", VA = "0x5E6B4C0", Slot = "6")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x5E6B4D0", Offset = "0x5E6A4D0", VA = "0x5E6B4D0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	internal override long Step
	{
		[Token(Token = "0x600009D")]
		[Address(RVA = "0x5E6B6E0", Offset = "0x5E6A6E0", VA = "0x5E6B6E0", Slot = "8")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600009E")]
		[Address(RVA = "0x5E6B740", Offset = "0x5E6A740", VA = "0x5E6B740", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x5E6B8F0", Offset = "0x5E6A8F0", VA = "0x5E6B8F0", Slot = "13")]
	internal override void MoveAfter()
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x5E6B980", Offset = "0x5E6A980", VA = "0x5E6B980", Slot = "11")]
	internal override void SetCurrent(object value, IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x5E6B9B0", Offset = "0x5E6A9B0", VA = "0x5E6B9B0", Slot = "12")]
	internal override void SetCurrentAndIncrement(object value)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x5E6B5B0", Offset = "0x5E6A5B0", VA = "0x5E6B5B0")]
	private bool BoundaryCheck(BigInteger value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x5E64320", Offset = "0x5E63320", VA = "0x5E64320")]
	public AutoIncrementBigInteger()
	{
	}
}
