// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.half
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000038")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct half : IEquatable<half>, IFormattable
{
	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x0")]
	public ushort value;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x0")]
	public static readonly half zero;

	[Token(Token = "0x170005C8")]
	public static float MaxValue
	{
		[Token(Token = "0x600160D")]
		[Address(RVA = "0x2A99760", Offset = "0x2A97D60", VA = "0x182A99760")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170005C9")]
	public static float MinValue
	{
		[Token(Token = "0x600160E")]
		[Address(RVA = "0x2A997E0", Offset = "0x2A97DE0", VA = "0x182A997E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170005CA")]
	public static half MaxValueAsHalf
	{
		[Token(Token = "0x600160F")]
		[Address(RVA = "0x2A996F0", Offset = "0x2A97CF0", VA = "0x182A996F0")]
		get
		{
			return default(half);
		}
	}

	[Token(Token = "0x170005CB")]
	public static half MinValueAsHalf
	{
		[Token(Token = "0x6001610")]
		[Address(RVA = "0x2A99770", Offset = "0x2A97D70", VA = "0x182A99770")]
		get
		{
			return default(half);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001611")]
	[Address(RVA = "0x17073B0", Offset = "0x17059B0", VA = "0x1817073B0")]
	public half(half x)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001612")]
	[Address(RVA = "0x29C8D60", Offset = "0x29C7360", VA = "0x1829C8D60")]
	public half(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001613")]
	[Address(RVA = "0x29C8CE0", Offset = "0x29C72E0", VA = "0x1829C8CE0")]
	public half(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001614")]
	[Address(RVA = "0x29E4930", Offset = "0x29E2F30", VA = "0x1829E4930")]
	public static explicit operator half(float v)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001615")]
	[Address(RVA = "0x29C8DE0", Offset = "0x29C73E0", VA = "0x1829C8DE0")]
	public static explicit operator half(double v)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001616")]
	[Address(RVA = "0x29C8E80", Offset = "0x29C7480", VA = "0x1829C8E80")]
	public static implicit operator float(half d)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001617")]
	[Address(RVA = "0x29C8E60", Offset = "0x29C7460", VA = "0x1829C8E60")]
	public static implicit operator double(half d)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001618")]
	[Address(RVA = "0x29940F0", Offset = "0x29926F0", VA = "0x1829940F0")]
	public static bool operator ==(half lhs, half rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001619")]
	[Address(RVA = "0x2994140", Offset = "0x2992740", VA = "0x182994140")]
	public static bool operator !=(half lhs, half rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600161A")]
	[Address(RVA = "0x1A7C310", Offset = "0x1A7A910", VA = "0x181A7C310", Slot = "4")]
	public bool Equals(half rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600161B")]
	[Address(RVA = "0x2A995F0", Offset = "0x2A97BF0", VA = "0x182A995F0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600161C")]
	[Address(RVA = "0x846ED0", Offset = "0x8454D0", VA = "0x180846ED0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600161D")]
	[Address(RVA = "0x2A99680", Offset = "0x2A97C80", VA = "0x182A99680", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600161E")]
	[Address(RVA = "0x2A996B0", Offset = "0x2A97CB0", VA = "0x182A996B0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
