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
		[Address(RVA = "0x4542C60", Offset = "0x4542C60", VA = "0x4542C60", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x4542CB0", Offset = "0x4542CB0", VA = "0x4542CB0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000042")]
	internal override Type DataType
	{
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x4542D30", Offset = "0x4542D30", VA = "0x4542D30", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000043")]
	internal override long Seed
	{
		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x4542D90", Offset = "0x4542D90", VA = "0x4542D90", Slot = "6")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x4542DA0", Offset = "0x4542DA0", VA = "0x4542DA0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	internal override long Step
	{
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x4542FB0", Offset = "0x4542FB0", VA = "0x4542FB0", Slot = "8")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x4543010", Offset = "0x4543010", VA = "0x4543010", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x45431C0", Offset = "0x45431C0", VA = "0x45431C0", Slot = "13")]
	internal override void MoveAfter()
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x4543250", Offset = "0x4543250", VA = "0x4543250", Slot = "11")]
	internal override void SetCurrent(object value, IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x4543280", Offset = "0x4543280", VA = "0x4543280", Slot = "12")]
	internal override void SetCurrentAndIncrement(object value)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x4542E80", Offset = "0x4542E80", VA = "0x4542E80")]
	private bool BoundaryCheck(BigInteger value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x453B0C0", Offset = "0x453B0C0", VA = "0x453B0C0")]
	public AutoIncrementBigInteger()
	{
	}
}
