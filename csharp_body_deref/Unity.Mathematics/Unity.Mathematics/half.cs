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
		[Address(RVA = "0x6469F00", Offset = "0x6468F00", VA = "0x6469F00")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170005C9")]
	public static float MinValue
	{
		[Token(Token = "0x600160E")]
		[Address(RVA = "0x6469F10", Offset = "0x6468F10", VA = "0x6469F10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170005CA")]
	public static half MaxValueAsHalf
	{
		[Token(Token = "0x600160F")]
		[Address(RVA = "0x6469F20", Offset = "0x6468F20", VA = "0x6469F20")]
		get
		{
			return default(half);
		}
	}

	[Token(Token = "0x170005CB")]
	public static half MinValueAsHalf
	{
		[Token(Token = "0x6001610")]
		[Address(RVA = "0x6469F30", Offset = "0x6468F30", VA = "0x6469F30")]
		get
		{
			return default(half);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001611")]
	[Address(RVA = "0x6469F40", Offset = "0x6468F40", VA = "0x6469F40")]
	public half(half x)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001612")]
	[Address(RVA = "0x6469F50", Offset = "0x6468F50", VA = "0x6469F50")]
	public half(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001613")]
	[Address(RVA = "0x6469FB0", Offset = "0x6468FB0", VA = "0x6469FB0")]
	public half(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001614")]
	[Address(RVA = "0x646A010", Offset = "0x6469010", VA = "0x646A010")]
	public static explicit operator half(float v)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001615")]
	[Address(RVA = "0x646A070", Offset = "0x6469070", VA = "0x646A070")]
	public static explicit operator half(double v)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001616")]
	[Address(RVA = "0x646A0D0", Offset = "0x64690D0", VA = "0x646A0D0")]
	public static implicit operator float(half d)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001617")]
	[Address(RVA = "0x646A130", Offset = "0x6469130", VA = "0x646A130")]
	public static implicit operator double(half d)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001618")]
	[Address(RVA = "0x646A190", Offset = "0x6469190", VA = "0x646A190")]
	public static bool operator ==(half lhs, half rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001619")]
	[Address(RVA = "0x646A1A0", Offset = "0x64691A0", VA = "0x646A1A0")]
	public static bool operator !=(half lhs, half rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600161A")]
	[Address(RVA = "0x646A1B0", Offset = "0x64691B0", VA = "0x646A1B0", Slot = "4")]
	public bool Equals(half rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600161B")]
	[Address(RVA = "0x646A1C0", Offset = "0x64691C0", VA = "0x646A1C0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600161C")]
	[Address(RVA = "0x646A220", Offset = "0x6469220", VA = "0x646A220", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600161D")]
	[Address(RVA = "0x646A230", Offset = "0x6469230", VA = "0x646A230", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600161E")]
	[Address(RVA = "0x646A2A0", Offset = "0x64692A0", VA = "0x646A2A0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
