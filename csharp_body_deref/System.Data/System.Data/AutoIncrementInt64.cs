// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.AutoIncrementInt64
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Numerics;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200000B")]
internal sealed class AutoIncrementInt64 : AutoIncrementValue
{
	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x18")]
	private long _current;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x20")]
	private long _seed;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x28")]
	private long _step;

	[Token(Token = "0x17000030")]
	internal override object Current
	{
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x24C1A50", Offset = "0x24C0050", VA = "0x1824C1A50", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x24C1AC0", Offset = "0x24C00C0", VA = "0x1824C1AC0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	internal override Type DataType
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x24C1A80", Offset = "0x24C0080", VA = "0x1824C1A80", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000032")]
	internal override long Seed
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "6")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x24C1B10", Offset = "0x24C0110", VA = "0x1824C1B10", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	internal override long Step
	{
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "8")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x24C1BA0", Offset = "0x24C01A0", VA = "0x1824C1BA0", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x24C1890", Offset = "0x24BFE90", VA = "0x1824C1890", Slot = "13")]
	internal override void MoveAfter()
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x24C19D0", Offset = "0x24BFFD0", VA = "0x1824C19D0", Slot = "11")]
	internal override void SetCurrent(object value, IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x24C18A0", Offset = "0x24BFEA0", VA = "0x1824C18A0", Slot = "12")]
	internal override void SetCurrentAndIncrement(object value)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x24C17C0", Offset = "0x24BFDC0", VA = "0x1824C17C0")]
	private bool BoundaryCheck(BigInteger value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x24C1A40", Offset = "0x24C0040", VA = "0x1824C1A40")]
	public AutoIncrementInt64()
	{
	}
}
