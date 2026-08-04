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
		[Address(RVA = "0x45427D0", Offset = "0x45427D0", VA = "0x45427D0", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x45427F0", Offset = "0x45427F0", VA = "0x45427F0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	internal override Type DataType
	{
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x4542840", Offset = "0x4542840", VA = "0x4542840", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003F")]
	internal override long Seed
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x4542880", Offset = "0x4542880", VA = "0x4542880", Slot = "6")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x4542890", Offset = "0x4542890", VA = "0x4542890", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	internal override long Step
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x45429D0", Offset = "0x45429D0", VA = "0x45429D0", Slot = "8")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x45429E0", Offset = "0x45429E0", VA = "0x45429E0", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x4542AD0", Offset = "0x4542AD0", VA = "0x4542AD0", Slot = "13")]
	internal override void MoveAfter()
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x4542AE0", Offset = "0x4542AE0", VA = "0x4542AE0", Slot = "11")]
	internal override void SetCurrent(object value, IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x4542B40", Offset = "0x4542B40", VA = "0x4542B40", Slot = "12")]
	internal override void SetCurrentAndIncrement(object value)
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x4542910", Offset = "0x4542910", VA = "0x4542910")]
	private bool BoundaryCheck(BigInteger value)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x453B0B0", Offset = "0x453B0B0", VA = "0x453B0B0")]
	public AutoIncrementInt64()
	{
	}
}
