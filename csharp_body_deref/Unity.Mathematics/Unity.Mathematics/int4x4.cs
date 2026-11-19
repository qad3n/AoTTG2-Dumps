// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int4x4
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
[Token(Token = "0x200004D")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int4x4 : IEquatable<int4x4>, IFormattable
{
	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x0")]
	public int4 c0;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x10")]
	public int4 c1;

	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0x20")]
	public int4 c2;

	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x30")]
	public int4 c3;

	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int4x4 identity;

	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x40")]
	public static readonly int4x4 zero;

	[Token(Token = "0x1700099C")]
	public unsafe ref int4 this[int index]
	{
		[Token(Token = "0x6001E5A")]
		[Address(RVA = "0x6491150", Offset = "0x6490150", VA = "0x6491150")]
		get
		{
			return ref *(int4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E15")]
	[Address(RVA = "0x648DA70", Offset = "0x648CA70", VA = "0x648DA70")]
	public int4x4(int4 c0, int4 c1, int4 c2, int4 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E16")]
	[Address(RVA = "0x648DAA0", Offset = "0x648CAA0", VA = "0x648DAA0")]
	public int4x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13, int m20, int m21, int m22, int m23, int m30, int m31, int m32, int m33)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E17")]
	[Address(RVA = "0x648DB00", Offset = "0x648CB00", VA = "0x648DB00")]
	public int4x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E18")]
	[Address(RVA = "0x648DB30", Offset = "0x648CB30", VA = "0x648DB30")]
	public int4x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E19")]
	[Address(RVA = "0x648DB70", Offset = "0x648CB70", VA = "0x648DB70")]
	public int4x4(bool4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E1A")]
	[Address(RVA = "0x648DC50", Offset = "0x648CC50", VA = "0x648DC50")]
	public int4x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E1B")]
	[Address(RVA = "0x648DC80", Offset = "0x648CC80", VA = "0x648DC80")]
	public int4x4(uint4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E1C")]
	[Address(RVA = "0x648DCB0", Offset = "0x648CCB0", VA = "0x648DCB0")]
	public int4x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E1D")]
	[Address(RVA = "0x648DCE0", Offset = "0x648CCE0", VA = "0x648DCE0")]
	public int4x4(float4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E1E")]
	[Address(RVA = "0x648DD90", Offset = "0x648CD90", VA = "0x648DD90")]
	public int4x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E1F")]
	[Address(RVA = "0x648DDC0", Offset = "0x648CDC0", VA = "0x648DDC0")]
	public int4x4(double4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E20")]
	[Address(RVA = "0x648DE70", Offset = "0x648CE70", VA = "0x648DE70")]
	public static implicit operator int4x4(int v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E21")]
	[Address(RVA = "0x648DEA0", Offset = "0x648CEA0", VA = "0x648DEA0")]
	public static explicit operator int4x4(bool v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E22")]
	[Address(RVA = "0x648DEE0", Offset = "0x648CEE0", VA = "0x648DEE0")]
	public static explicit operator int4x4(bool4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E23")]
	[Address(RVA = "0x648DFC0", Offset = "0x648CFC0", VA = "0x648DFC0")]
	public static explicit operator int4x4(uint v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E24")]
	[Address(RVA = "0x648DFF0", Offset = "0x648CFF0", VA = "0x648DFF0")]
	public static explicit operator int4x4(uint4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E25")]
	[Address(RVA = "0x648E020", Offset = "0x648D020", VA = "0x648E020")]
	public static explicit operator int4x4(float v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E26")]
	[Address(RVA = "0x648E060", Offset = "0x648D060", VA = "0x648E060")]
	public static explicit operator int4x4(float4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E27")]
	[Address(RVA = "0x648E110", Offset = "0x648D110", VA = "0x648E110")]
	public static explicit operator int4x4(double v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E28")]
	[Address(RVA = "0x648E150", Offset = "0x648D150", VA = "0x648E150")]
	public static explicit operator int4x4(double4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E29")]
	[Address(RVA = "0x648E200", Offset = "0x648D200", VA = "0x648E200")]
	public static int4x4 operator *(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E2A")]
	[Address(RVA = "0x648E350", Offset = "0x648D350", VA = "0x648E350")]
	public static int4x4 operator *(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E2B")]
	[Address(RVA = "0x648E450", Offset = "0x648D450", VA = "0x648E450")]
	public static int4x4 operator *(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E2C")]
	[Address(RVA = "0x648E550", Offset = "0x648D550", VA = "0x648E550")]
	public static int4x4 operator +(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E2D")]
	[Address(RVA = "0x648E690", Offset = "0x648D690", VA = "0x648E690")]
	public static int4x4 operator +(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E2E")]
	[Address(RVA = "0x648E6E0", Offset = "0x648D6E0", VA = "0x648E6E0")]
	public static int4x4 operator +(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E2F")]
	[Address(RVA = "0x648E730", Offset = "0x648D730", VA = "0x648E730")]
	public static int4x4 operator -(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E30")]
	[Address(RVA = "0x648E880", Offset = "0x648D880", VA = "0x648E880")]
	public static int4x4 operator -(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E31")]
	[Address(RVA = "0x648E8D0", Offset = "0x648D8D0", VA = "0x648E8D0")]
	public static int4x4 operator -(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E32")]
	[Address(RVA = "0x648E920", Offset = "0x648D920", VA = "0x648E920")]
	public static int4x4 operator /(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E33")]
	[Address(RVA = "0x648EAD0", Offset = "0x648DAD0", VA = "0x648EAD0")]
	public static int4x4 operator /(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E34")]
	[Address(RVA = "0x648EC10", Offset = "0x648DC10", VA = "0x648EC10")]
	public static int4x4 operator /(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E35")]
	[Address(RVA = "0x648ED40", Offset = "0x648DD40", VA = "0x648ED40")]
	public static int4x4 operator %(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E36")]
	[Address(RVA = "0x648EEF0", Offset = "0x648DEF0", VA = "0x648EEF0")]
	public static int4x4 operator %(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E37")]
	[Address(RVA = "0x648F030", Offset = "0x648E030", VA = "0x648F030")]
	public static int4x4 operator %(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E38")]
	[Address(RVA = "0x648F160", Offset = "0x648E160", VA = "0x648F160")]
	public static int4x4 operator ++(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E39")]
	[Address(RVA = "0x648F1F0", Offset = "0x648E1F0", VA = "0x648F1F0")]
	public static int4x4 operator --(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3A")]
	[Address(RVA = "0x648F280", Offset = "0x648E280", VA = "0x648F280")]
	public static bool4x4 operator <(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3B")]
	[Address(RVA = "0x648F440", Offset = "0x648E440", VA = "0x648F440")]
	public static bool4x4 operator <(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3C")]
	[Address(RVA = "0x648F5A0", Offset = "0x648E5A0", VA = "0x648F5A0")]
	public static bool4x4 operator <(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3D")]
	[Address(RVA = "0x648F6E0", Offset = "0x648E6E0", VA = "0x648F6E0")]
	public static bool4x4 operator <=(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3E")]
	[Address(RVA = "0x648F870", Offset = "0x648E870", VA = "0x648F870")]
	public static bool4x4 operator <=(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E3F")]
	[Address(RVA = "0x648F9C0", Offset = "0x648E9C0", VA = "0x648F9C0")]
	public static bool4x4 operator <=(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E40")]
	[Address(RVA = "0x648FAF0", Offset = "0x648EAF0", VA = "0x648FAF0")]
	public static bool4x4 operator >(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E41")]
	[Address(RVA = "0x648FCB0", Offset = "0x648ECB0", VA = "0x648FCB0")]
	public static bool4x4 operator >(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E42")]
	[Address(RVA = "0x648FE10", Offset = "0x648EE10", VA = "0x648FE10")]
	public static bool4x4 operator >(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E43")]
	[Address(RVA = "0x648FF50", Offset = "0x648EF50", VA = "0x648FF50")]
	public static bool4x4 operator >=(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E44")]
	[Address(RVA = "0x64900E0", Offset = "0x648F0E0", VA = "0x64900E0")]
	public static bool4x4 operator >=(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E45")]
	[Address(RVA = "0x6490230", Offset = "0x648F230", VA = "0x6490230")]
	public static bool4x4 operator >=(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E46")]
	[Address(RVA = "0x6490360", Offset = "0x648F360", VA = "0x6490360")]
	public static int4x4 operator -(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E47")]
	[Address(RVA = "0x64903F0", Offset = "0x648F3F0", VA = "0x64903F0")]
	public static int4x4 operator +(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E48")]
	[Address(RVA = "0x6490420", Offset = "0x648F420", VA = "0x6490420")]
	public static int4x4 operator <<(int4x4 x, int n)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E49")]
	[Address(RVA = "0x6490510", Offset = "0x648F510", VA = "0x6490510")]
	public static int4x4 operator >>(int4x4 x, int n)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4A")]
	[Address(RVA = "0x6490600", Offset = "0x648F600", VA = "0x6490600")]
	public static bool4x4 operator ==(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4B")]
	[Address(RVA = "0x64907C0", Offset = "0x648F7C0", VA = "0x64907C0")]
	public static bool4x4 operator ==(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4C")]
	[Address(RVA = "0x6490920", Offset = "0x648F920", VA = "0x6490920")]
	public static bool4x4 operator ==(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4D")]
	[Address(RVA = "0x6490A60", Offset = "0x648FA60", VA = "0x6490A60")]
	public static bool4x4 operator !=(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4E")]
	[Address(RVA = "0x6490BF0", Offset = "0x648FBF0", VA = "0x6490BF0")]
	public static bool4x4 operator !=(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E4F")]
	[Address(RVA = "0x6490D40", Offset = "0x648FD40", VA = "0x6490D40")]
	public static bool4x4 operator !=(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E50")]
	[Address(RVA = "0x6490E70", Offset = "0x648FE70", VA = "0x6490E70")]
	public static int4x4 operator ~(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E51")]
	[Address(RVA = "0x6490EB0", Offset = "0x648FEB0", VA = "0x6490EB0")]
	public static int4x4 operator &(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E52")]
	[Address(RVA = "0x6490EF0", Offset = "0x648FEF0", VA = "0x6490EF0")]
	public static int4x4 operator &(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E53")]
	[Address(RVA = "0x6490F40", Offset = "0x648FF40", VA = "0x6490F40")]
	public static int4x4 operator &(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E54")]
	[Address(RVA = "0x6490F90", Offset = "0x648FF90", VA = "0x6490F90")]
	public static int4x4 operator |(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E55")]
	[Address(RVA = "0x6490FD0", Offset = "0x648FFD0", VA = "0x6490FD0")]
	public static int4x4 operator |(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E56")]
	[Address(RVA = "0x6491020", Offset = "0x6490020", VA = "0x6491020")]
	public static int4x4 operator |(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E57")]
	[Address(RVA = "0x6491070", Offset = "0x6490070", VA = "0x6491070")]
	public static int4x4 operator ^(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E58")]
	[Address(RVA = "0x64910B0", Offset = "0x64900B0", VA = "0x64910B0")]
	public static int4x4 operator ^(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E59")]
	[Address(RVA = "0x6491100", Offset = "0x6490100", VA = "0x6491100")]
	public static int4x4 operator ^(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5B")]
	[Address(RVA = "0x6491160", Offset = "0x6490160", VA = "0x6491160", Slot = "4")]
	public bool Equals(int4x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E5C")]
	[Address(RVA = "0x6491210", Offset = "0x6490210", VA = "0x6491210", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5D")]
	[Address(RVA = "0x6491320", Offset = "0x6490320", VA = "0x6491320", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5E")]
	[Address(RVA = "0x6491430", Offset = "0x6490430", VA = "0x6491430", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E5F")]
	[Address(RVA = "0x6491A00", Offset = "0x6490A00", VA = "0x6491A00", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
