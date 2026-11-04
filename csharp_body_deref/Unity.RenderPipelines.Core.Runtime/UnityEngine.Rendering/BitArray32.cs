// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BitArray32
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
[Token(Token = "0x20001B2")]
[DebuggerDisplay("{this.GetType().Name} {humanizedData}")]
public struct BitArray32 : IBitArray
{
	[Token(Token = "0x4000866")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private uint data;

	[Token(Token = "0x170001AB")]
	public uint capacity
	{
		[Token(Token = "0x6000CFC")]
		[Address(RVA = "0x846F70", Offset = "0x845570", VA = "0x180846F70", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170001AC")]
	public bool allFalse
	{
		[Token(Token = "0x6000CFD")]
		[Address(RVA = "0x2372150", Offset = "0x2370750", VA = "0x182372150", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AD")]
	public bool allTrue
	{
		[Token(Token = "0x6000CFE")]
		[Address(RVA = "0x2B37550", Offset = "0x2B35B50", VA = "0x182B37550", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AE")]
	private string humanizedVersion
	{
		[Token(Token = "0x6000CFF")]
		[Address(RVA = "0x2B376A0", Offset = "0x2B35CA0", VA = "0x182B376A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AF")]
	public string humanizedData
	{
		[Token(Token = "0x6000D00")]
		[Address(RVA = "0x2B37560", Offset = "0x2B35B60", VA = "0x182B37560", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B0")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000D01")]
		[Address(RVA = "0x2B37530", Offset = "0x2B35B30", VA = "0x182B37530", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D02")]
		[Address(RVA = "0x2B37720", Offset = "0x2B35D20", VA = "0x182B37720", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
	public BitArray32(uint initValue)
	{
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x2B37490", Offset = "0x2B35A90", VA = "0x182B37490")]
	public BitArray32(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x2B37290", Offset = "0x2B35890", VA = "0x182B37290", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x2B37370", Offset = "0x2B35970", VA = "0x182B37370", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x2B37320", Offset = "0x2B35920", VA = "0x182B37320", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x2B37710", Offset = "0x2B35D10", VA = "0x182B37710")]
	public static BitArray32 operator ~(BitArray32 a)
	{
		return default(BitArray32);
	}

	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x2B37700", Offset = "0x2B35D00", VA = "0x182B37700")]
	public static BitArray32 operator |(BitArray32 a, BitArray32 b)
	{
		return default(BitArray32);
	}

	[Token(Token = "0x6000D0A")]
	[Address(RVA = "0x1BA1930", Offset = "0x1B9FF30", VA = "0x181BA1930")]
	public static BitArray32 operator &(BitArray32 a, BitArray32 b)
	{
		return default(BitArray32);
	}

	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x866D40", Offset = "0x865340", VA = "0x180866D40")]
	public static bool operator ==(BitArray32 a, BitArray32 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x29B9EE0", Offset = "0x29B84E0", VA = "0x1829B9EE0")]
	public static bool operator !=(BitArray32 a, BitArray32 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x2B373F0", Offset = "0x2B359F0", VA = "0x182B373F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x2B37470", Offset = "0x2B35A70", VA = "0x182B37470", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
