using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200001B")]
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
		[Token(Token = "0x6000B00")]
		[Address(RVA = "0x4786110", Offset = "0x4786110", VA = "0x4786110")]
		get
		{
			return ref *(bool4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x4785760", Offset = "0x4785760", VA = "0x4785760")]
	public bool4x4(bool4 c0, bool4 c1, bool4 c2, bool4 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x4785770", Offset = "0x4785770", VA = "0x4785770")]
	public bool4x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23, bool m30, bool m31, bool m32, bool m33)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x4785840", Offset = "0x4785840", VA = "0x4785840")]
	public bool4x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x4785860", Offset = "0x4785860", VA = "0x4785860")]
	public static implicit operator bool4x4(bool v)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x4785880", Offset = "0x4785880", VA = "0x4785880")]
	public static bool4x4 operator ==(bool4x4 lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x47858A0", Offset = "0x47858A0", VA = "0x47858A0")]
	public static bool4x4 operator ==(bool4x4 lhs, bool rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x47859B0", Offset = "0x47859B0", VA = "0x47859B0")]
	public static bool4x4 operator ==(bool lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x4785AC0", Offset = "0x4785AC0", VA = "0x4785AC0")]
	public static bool4x4 operator !=(bool4x4 lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x4785AE0", Offset = "0x4785AE0", VA = "0x4785AE0")]
	public static bool4x4 operator !=(bool4x4 lhs, bool rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF5")]
	[Address(RVA = "0x4785BE0", Offset = "0x4785BE0", VA = "0x4785BE0")]
	public static bool4x4 operator !=(bool lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF6")]
	[Address(RVA = "0x4785CE0", Offset = "0x4785CE0", VA = "0x4785CE0")]
	public static bool4x4 operator !(bool4x4 val)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF7")]
	[Address(RVA = "0x4785D00", Offset = "0x4785D00", VA = "0x4785D00")]
	public static bool4x4 operator &(bool4x4 lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x4785D20", Offset = "0x4785D20", VA = "0x4785D20")]
	public static bool4x4 operator &(bool4x4 lhs, bool rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x4785D60", Offset = "0x4785D60", VA = "0x4785D60")]
	public static bool4x4 operator &(bool lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AFA")]
	[Address(RVA = "0x4785DA0", Offset = "0x4785DA0", VA = "0x4785DA0")]
	public static bool4x4 operator |(bool4x4 lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AFB")]
	[Address(RVA = "0x4785DC0", Offset = "0x4785DC0", VA = "0x4785DC0")]
	public static bool4x4 operator |(bool4x4 lhs, bool rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AFC")]
	[Address(RVA = "0x4785E20", Offset = "0x4785E20", VA = "0x4785E20")]
	public static bool4x4 operator |(bool lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AFD")]
	[Address(RVA = "0x4785EF0", Offset = "0x4785EF0", VA = "0x4785EF0")]
	public static bool4x4 operator ^(bool4x4 lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x4785F10", Offset = "0x4785F10", VA = "0x4785F10")]
	public static bool4x4 operator ^(bool4x4 lhs, bool rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AFF")]
	[Address(RVA = "0x4786010", Offset = "0x4786010", VA = "0x4786010")]
	public static bool4x4 operator ^(bool lhs, bool4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x4786120", Offset = "0x4786120", VA = "0x4786120", Slot = "4")]
	public bool Equals(bool4x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x4786250", Offset = "0x4786250", VA = "0x4786250", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x47862C0", Offset = "0x47862C0", VA = "0x47862C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x47864F0", Offset = "0x47864F0", VA = "0x47864F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
