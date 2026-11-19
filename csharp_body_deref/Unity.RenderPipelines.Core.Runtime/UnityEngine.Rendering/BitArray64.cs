// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BitArray64
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001B3")]
[DebuggerDisplay("{this.GetType().Name} {humanizedData}")]
public struct BitArray64 : IBitArray
{
	[Token(Token = "0x4000867")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private ulong data;

	[Token(Token = "0x170001B1")]
	public uint capacity
	{
		[Token(Token = "0x6000D0F")]
		[Address(RVA = "0x65392C0", Offset = "0x65382C0", VA = "0x65392C0", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170001B2")]
	public bool allFalse
	{
		[Token(Token = "0x6000D10")]
		[Address(RVA = "0x65392D0", Offset = "0x65382D0", VA = "0x65392D0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B3")]
	public bool allTrue
	{
		[Token(Token = "0x6000D11")]
		[Address(RVA = "0x65392E0", Offset = "0x65382E0", VA = "0x65392E0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B4")]
	public string humanizedData
	{
		[Token(Token = "0x6000D12")]
		[Address(RVA = "0x65392F0", Offset = "0x65382F0", VA = "0x65392F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B5")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000D13")]
		[Address(RVA = "0x6539440", Offset = "0x6538440", VA = "0x6539440", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D14")]
		[Address(RVA = "0x6539460", Offset = "0x6538460", VA = "0x6539460", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x65394A0", Offset = "0x65384A0", VA = "0x65394A0")]
	public BitArray64(ulong initValue)
	{
	}

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x65394B0", Offset = "0x65384B0", VA = "0x65394B0")]
	public BitArray64(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x6539550", Offset = "0x6538550", VA = "0x6539550")]
	public static BitArray64 operator ~(BitArray64 a)
	{
		return default(BitArray64);
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x6539560", Offset = "0x6538560", VA = "0x6539560")]
	public static BitArray64 operator |(BitArray64 a, BitArray64 b)
	{
		return default(BitArray64);
	}

	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x6539570", Offset = "0x6538570", VA = "0x6539570")]
	public static BitArray64 operator &(BitArray64 a, BitArray64 b)
	{
		return default(BitArray64);
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x6539580", Offset = "0x6538580", VA = "0x6539580", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x6539600", Offset = "0x6538600", VA = "0x6539600", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x6539680", Offset = "0x6538680", VA = "0x6539680", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x65396D0", Offset = "0x65386D0", VA = "0x65396D0")]
	public static bool operator ==(BitArray64 a, BitArray64 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x65396E0", Offset = "0x65386E0", VA = "0x65396E0")]
	public static bool operator !=(BitArray64 a, BitArray64 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x65396F0", Offset = "0x65386F0", VA = "0x65396F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x6539750", Offset = "0x6538750", VA = "0x6539750", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
