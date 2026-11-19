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
		[Address(RVA = "0x5E6AF10", Offset = "0x5E69F10", VA = "0x5E6AF10", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x5E6AF30", Offset = "0x5E69F30", VA = "0x5E6AF30", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	internal override Type DataType
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x5E6AF80", Offset = "0x5E69F80", VA = "0x5E6AF80", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000032")]
	internal override long Seed
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x5E6AFB0", Offset = "0x5E69FB0", VA = "0x5E6AFB0", Slot = "6")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x5E6AFC0", Offset = "0x5E69FC0", VA = "0x5E6AFC0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	internal override long Step
	{
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x5E6B100", Offset = "0x5E6A100", VA = "0x5E6B100", Slot = "8")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x5E6B110", Offset = "0x5E6A110", VA = "0x5E6B110", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x5E6B200", Offset = "0x5E6A200", VA = "0x5E6B200", Slot = "13")]
	internal override void MoveAfter()
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x5E6B210", Offset = "0x5E6A210", VA = "0x5E6B210", Slot = "11")]
	internal override void SetCurrent(object value, IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x5E6B270", Offset = "0x5E6A270", VA = "0x5E6B270", Slot = "12")]
	internal override void SetCurrentAndIncrement(object value)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x5E6B040", Offset = "0x5E6A040", VA = "0x5E6B040")]
	private bool BoundaryCheck(BigInteger value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x5E64310", Offset = "0x5E63310", VA = "0x5E64310")]
	public AutoIncrementInt64()
	{
	}
}
