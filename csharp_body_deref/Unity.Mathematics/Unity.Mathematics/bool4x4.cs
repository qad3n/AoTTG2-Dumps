// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.bool4x4
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
[Token(Token = "0x2000018")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct bool4x4 : IEquatable<bool4x4>
{
	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x0")]
	public bool4 c0;

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x4")]
	public bool4 c1;

	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x8")]
	public bool4 c2;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0xC")]
	public bool4 c3;

	[Token(Token = "0x170001ED")]
	public unsafe ref bool4 this[int index]
	{
		[Token(Token = "0x6000AD8")]
		[Address(RVA = "0x4A8ACE0", Offset = "0x4A8ACE0", VA = "0x4A8ACE0")]
		get
		{
			return ref *(bool4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x4A8A330", Offset = "0x4A8A330", VA = "0x4A8A330")]
	public bool4x4(bool4 c0, bool4 c1, bool4 c2, bool4 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x4A8A340", Offset = "0x4A8A340", VA = "0x4A8A340")]
	public bool4x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23, bool m30, bool m31, bool m32, bool m33)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x4A8A410", Offset = "0x4A8A410", VA = "0x4A8A410")]
	public bool4x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC7")]
	[Address(RVA = "0x4A8A430", Offset = "0x4A8A430", VA = "0x4A8A430")]
	public static implicit operator bool4x4(bool v)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x4A8A450", Offset = "0x4A8A450", VA = "0x4A8A450")]
	public static bool4x4 operator ==(bool4x4 lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x4A8A470", Offset = "0x4A8A470", VA = "0x4A8A470")]
	public static bool4x4 operator ==(bool4x4 lhs, bool rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x4A8A580", Offset = "0x4A8A580", VA = "0x4A8A580")]
	public static bool4x4 operator ==(bool lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x4A8A690", Offset = "0x4A8A690", VA = "0x4A8A690")]
	public static bool4x4 operator !=(bool4x4 lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x4A8A6B0", Offset = "0x4A8A6B0", VA = "0x4A8A6B0")]
	public static bool4x4 operator !=(bool4x4 lhs, bool rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x4A8A7B0", Offset = "0x4A8A7B0", VA = "0x4A8A7B0")]
	public static bool4x4 operator !=(bool lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ACE")]
	[Address(RVA = "0x4A8A8B0", Offset = "0x4A8A8B0", VA = "0x4A8A8B0")]
	public static bool4x4 operator !(bool4x4 val)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x4A8A8D0", Offset = "0x4A8A8D0", VA = "0x4A8A8D0")]
	public static bool4x4 operator &(bool4x4 lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD0")]
	[Address(RVA = "0x4A8A8F0", Offset = "0x4A8A8F0", VA = "0x4A8A8F0")]
	public static bool4x4 operator &(bool4x4 lhs, bool rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD1")]
	[Address(RVA = "0x4A8A930", Offset = "0x4A8A930", VA = "0x4A8A930")]
	public static bool4x4 operator &(bool lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x4A8A970", Offset = "0x4A8A970", VA = "0x4A8A970")]
	public static bool4x4 operator |(bool4x4 lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x4A8A990", Offset = "0x4A8A990", VA = "0x4A8A990")]
	public static bool4x4 operator |(bool4x4 lhs, bool rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x4A8A9F0", Offset = "0x4A8A9F0", VA = "0x4A8A9F0")]
	public static bool4x4 operator |(bool lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x4A8AAC0", Offset = "0x4A8AAC0", VA = "0x4A8AAC0")]
	public static bool4x4 operator ^(bool4x4 lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x4A8AAE0", Offset = "0x4A8AAE0", VA = "0x4A8AAE0")]
	public static bool4x4 operator ^(bool4x4 lhs, bool rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x4A8ABE0", Offset = "0x4A8ABE0", VA = "0x4A8ABE0")]
	public static bool4x4 operator ^(bool lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x4A8ACF0", Offset = "0x4A8ACF0", VA = "0x4A8ACF0", Slot = "4")]
	public bool Equals(bool4x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x4A8AE20", Offset = "0x4A8AE20", VA = "0x4A8AE20", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x4A8AE90", Offset = "0x4A8AE90", VA = "0x4A8AE90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x4A8B0C0", Offset = "0x4A8B0C0", VA = "0x4A8B0C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
