using System;
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x200019E")]
[DebuggerDisplay("{this.GetType().Name} {humanizedData}")]
public struct BitArray256 : IBitArray
{
	[Token(Token = "0x4000722")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private ulong data1;

	[Token(Token = "0x4000723")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private ulong data2;

	[Token(Token = "0x4000724")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private ulong data3;

	[Token(Token = "0x4000725")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private ulong data4;

	[Token(Token = "0x17000170")]
	public uint capacity
	{
		[Token(Token = "0x6000C1A")]
		[Address(RVA = "0x48CCEF0", Offset = "0x48CCEF0", VA = "0x48CCEF0", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000171")]
	public bool allFalse
	{
		[Token(Token = "0x6000C1B")]
		[Address(RVA = "0x48CCF00", Offset = "0x48CCF00", VA = "0x48CCF00", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000172")]
	public bool allTrue
	{
		[Token(Token = "0x6000C1C")]
		[Address(RVA = "0x48CCF30", Offset = "0x48CCF30", VA = "0x48CCF30", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000173")]
	public string humanizedData
	{
		[Token(Token = "0x6000C1D")]
		[Address(RVA = "0x48CCF60", Offset = "0x48CCF60", VA = "0x48CCF60", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000174")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000C1E")]
		[Address(RVA = "0x48CD240", Offset = "0x48CD240", VA = "0x48CD240", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C1F")]
		[Address(RVA = "0x48CD2F0", Offset = "0x48CD2F0", VA = "0x48CD2F0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x48CD3C0", Offset = "0x48CD3C0", VA = "0x48CD3C0")]
	public BitArray256(ulong initValue1, ulong initValue2, ulong initValue3, ulong initValue4)
	{
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x48CD3D0", Offset = "0x48CD3D0", VA = "0x48CD3D0")]
	public BitArray256(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x48CD4C0", Offset = "0x48CD4C0", VA = "0x48CD4C0")]
	public static BitArray256 operator ~(BitArray256 a)
	{
		return default(BitArray256);
	}

	[Token(Token = "0x6000C23")]
	[Address(RVA = "0x48CD4F0", Offset = "0x48CD4F0", VA = "0x48CD4F0")]
	public static BitArray256 operator |(BitArray256 a, BitArray256 b)
	{
		return default(BitArray256);
	}

	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x48CD510", Offset = "0x48CD510", VA = "0x48CD510")]
	public static BitArray256 operator &(BitArray256 a, BitArray256 b)
	{
		return default(BitArray256);
	}

	[Token(Token = "0x6000C25")]
	[Address(RVA = "0x48CD530", Offset = "0x48CD530", VA = "0x48CD530", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x48CD5D0", Offset = "0x48CD5D0", VA = "0x48CD5D0", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x48CD670", Offset = "0x48CD670", VA = "0x48CD670", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x48CD6D0", Offset = "0x48CD6D0", VA = "0x48CD6D0")]
	public static bool operator ==(BitArray256 a, BitArray256 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x48CD710", Offset = "0x48CD710", VA = "0x48CD710")]
	public static bool operator !=(BitArray256 a, BitArray256 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x48CD750", Offset = "0x48CD750", VA = "0x48CD750", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x48CD870", Offset = "0x48CD870", VA = "0x48CD870", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
