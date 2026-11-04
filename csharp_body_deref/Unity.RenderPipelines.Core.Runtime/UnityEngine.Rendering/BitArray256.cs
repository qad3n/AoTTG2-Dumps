// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BitArray256
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
[Token(Token = "0x20001B5")]
[DebuggerDisplay("{this.GetType().Name} {humanizedData}")]
public struct BitArray256 : IBitArray
{
	[Token(Token = "0x400086A")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private ulong data1;

	[Token(Token = "0x400086B")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private ulong data2;

	[Token(Token = "0x400086C")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private ulong data3;

	[Token(Token = "0x400086D")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private ulong data4;

	[Token(Token = "0x170001BB")]
	public uint capacity
	{
		[Token(Token = "0x6000D33")]
		[Address(RVA = "0x868110", Offset = "0x866710", VA = "0x180868110", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170001BC")]
	public bool allFalse
	{
		[Token(Token = "0x6000D34")]
		[Address(RVA = "0x2B36DC0", Offset = "0x2B353C0", VA = "0x182B36DC0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BD")]
	public bool allTrue
	{
		[Token(Token = "0x6000D35")]
		[Address(RVA = "0x2B36DE0", Offset = "0x2B353E0", VA = "0x182B36DE0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BE")]
	public string humanizedData
	{
		[Token(Token = "0x6000D36")]
		[Address(RVA = "0x2B36E00", Offset = "0x2B35400", VA = "0x182B36E00", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BF")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000D37")]
		[Address(RVA = "0x2B36D70", Offset = "0x2B35370", VA = "0x182B36D70", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D38")]
		[Address(RVA = "0x2B37200", Offset = "0x2B35800", VA = "0x182B37200", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x298BD00", Offset = "0x298A300", VA = "0x18298BD00")]
	public BitArray256(ulong initValue1, ulong initValue2, ulong initValue3, ulong initValue4)
	{
	}

	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x2B36C70", Offset = "0x2B35270", VA = "0x182B36C70")]
	public BitArray256(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x2B371D0", Offset = "0x2B357D0", VA = "0x182B371D0")]
	public static BitArray256 operator ~(BitArray256 a)
	{
		return default(BitArray256);
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x2B37140", Offset = "0x2B35740", VA = "0x182B37140")]
	public static BitArray256 operator |(BitArray256 a, BitArray256 b)
	{
		return default(BitArray256);
	}

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x2B37110", Offset = "0x2B35710", VA = "0x182B37110")]
	public static BitArray256 operator &(BitArray256 a, BitArray256 b)
	{
		return default(BitArray256);
	}

	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x2B36900", Offset = "0x2B34F00", VA = "0x182B36900", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x2B36A50", Offset = "0x2B35050", VA = "0x182B36A50", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x2B369E0", Offset = "0x2B34FE0", VA = "0x182B369E0", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x2B37170", Offset = "0x2B35770", VA = "0x182B37170")]
	public static bool operator ==(BitArray256 a, BitArray256 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D42")]
	[Address(RVA = "0x2B371A0", Offset = "0x2B357A0", VA = "0x182B371A0")]
	public static bool operator !=(BitArray256 a, BitArray256 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x2B36B30", Offset = "0x2B35130", VA = "0x182B36B30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D44")]
	[Address(RVA = "0x2B36C10", Offset = "0x2B35210", VA = "0x182B36C10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
