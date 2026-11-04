// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.bool4x2
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
[Token(Token = "0x2000017")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct bool4x2 : IEquatable<bool4x2>
{
	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x0")]
	public bool4 c0;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x4")]
	public bool4 c1;

	[Token(Token = "0x170001EB")]
	public unsafe ref bool4 this[int index]
	{
		[Token(Token = "0x6000B19")]
		[Address(RVA = "0x841B90", Offset = "0x840190", VA = "0x180841B90")]
		get
		{
			return ref *(bool4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B05")]
	[Address(RVA = "0xACCA30", Offset = "0xACB030", VA = "0x180ACCA30")]
	public bool4x2(bool4 c0, bool4 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x2A4DDD0", Offset = "0x2A4C3D0", VA = "0x182A4DDD0")]
	public bool4x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21, bool m30, bool m31)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x2A4DDA0", Offset = "0x2A4C3A0", VA = "0x182A4DDA0")]
	public bool4x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x29D3690", Offset = "0x29D1C90", VA = "0x1829D3690")]
	public static implicit operator bool4x2(bool v)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x2A4E1D0", Offset = "0x2A4C7D0", VA = "0x182A4E1D0")]
	public static bool4x2 operator ==(bool4x2 lhs, bool4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x2A4E160", Offset = "0x2A4C760", VA = "0x182A4E160")]
	public static bool4x2 operator ==(bool4x2 lhs, bool rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0B")]
	[Address(RVA = "0x2A4E270", Offset = "0x2A4C870", VA = "0x182A4E270")]
	public static bool4x2 operator ==(bool lhs, bool4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x2A4E4A0", Offset = "0x2A4CAA0", VA = "0x182A4E4A0")]
	public static bool4x2 operator !=(bool4x2 lhs, bool4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x2A4E540", Offset = "0x2A4CB40", VA = "0x182A4E540")]
	public static bool4x2 operator !=(bool4x2 lhs, bool rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x2A4E5B0", Offset = "0x2A4CBB0", VA = "0x182A4E5B0")]
	public static bool4x2 operator !=(bool lhs, bool4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x2A4E620", Offset = "0x2A4CC20", VA = "0x182A4E620")]
	public static bool4x2 operator !(bool4x2 val)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x2A4DE90", Offset = "0x2A4C490", VA = "0x182A4DE90")]
	public static bool4x2 operator &(bool4x2 lhs, bool4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x2A4DF30", Offset = "0x2A4C530", VA = "0x182A4DF30")]
	public static bool4x2 operator &(bool4x2 lhs, bool rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x2A4DE20", Offset = "0x2A4C420", VA = "0x182A4DE20")]
	public static bool4x2 operator &(bool lhs, bool4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x2A4DFA0", Offset = "0x2A4C5A0", VA = "0x182A4DFA0")]
	public static bool4x2 operator |(bool4x2 lhs, bool4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x2A4E060", Offset = "0x2A4C660", VA = "0x182A4E060")]
	public static bool4x2 operator |(bool4x2 lhs, bool rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x2A4E0E0", Offset = "0x2A4C6E0", VA = "0x182A4E0E0")]
	public static bool4x2 operator |(bool lhs, bool4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x2A4E2E0", Offset = "0x2A4C8E0", VA = "0x182A4E2E0")]
	public static bool4x2 operator ^(bool4x2 lhs, bool4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x2A4E420", Offset = "0x2A4CA20", VA = "0x182A4E420")]
	public static bool4x2 operator ^(bool4x2 lhs, bool rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x2A4E3A0", Offset = "0x2A4C9A0", VA = "0x182A4E3A0")]
	public static bool4x2 operator ^(bool lhs, bool4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x2A4D8E0", Offset = "0x2A4BEE0", VA = "0x182A4D8E0", Slot = "4")]
	public bool Equals(bool4x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x2A4D930", Offset = "0x2A4BF30", VA = "0x182A4D930", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x2A4DA00", Offset = "0x2A4C000", VA = "0x182A4DA00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x2A4DA10", Offset = "0x2A4C010", VA = "0x182A4DA10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
