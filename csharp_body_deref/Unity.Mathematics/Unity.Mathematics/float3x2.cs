// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float3x2
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
[Token(Token = "0x200002F")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float3x2 : IEquatable<float3x2>, IFormattable
{
	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x0")]
	public float3 c0;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0xC")]
	public float3 c1;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float3x2 zero;

	[Token(Token = "0x17000471")]
	public unsafe ref float3 this[int index]
	{
		[Token(Token = "0x6001243")]
		[Address(RVA = "0x4AB87C0", Offset = "0x4AB87C0", VA = "0x4AB87C0")]
		get
		{
			return ref *(float3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600120A")]
	[Address(RVA = "0x4AB7150", Offset = "0x4AB7150", VA = "0x4AB7150")]
	public float3x2(float3 c0, float3 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600120B")]
	[Address(RVA = "0x4AB7170", Offset = "0x4AB7170", VA = "0x4AB7170")]
	public float3x2(float m00, float m01, float m10, float m11, float m20, float m21)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600120C")]
	[Address(RVA = "0x4AB7190", Offset = "0x4AB7190", VA = "0x4AB7190")]
	public float3x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600120D")]
	[Address(RVA = "0x4AB71B0", Offset = "0x4AB71B0", VA = "0x4AB71B0")]
	public float3x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600120E")]
	[Address(RVA = "0x4AB71F0", Offset = "0x4AB71F0", VA = "0x4AB71F0")]
	public float3x2(bool3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600120F")]
	[Address(RVA = "0x4AB72A0", Offset = "0x4AB72A0", VA = "0x4AB72A0")]
	public float3x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001210")]
	[Address(RVA = "0x4AB72C0", Offset = "0x4AB72C0", VA = "0x4AB72C0")]
	public float3x2(int3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001211")]
	[Address(RVA = "0x4AB7310", Offset = "0x4AB7310", VA = "0x4AB7310")]
	public float3x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001212")]
	[Address(RVA = "0x4AB7340", Offset = "0x4AB7340", VA = "0x4AB7340")]
	public float3x2(uint3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001213")]
	[Address(RVA = "0x4AB73C0", Offset = "0x4AB73C0", VA = "0x4AB73C0")]
	public float3x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001214")]
	[Address(RVA = "0x4AB73E0", Offset = "0x4AB73E0", VA = "0x4AB73E0")]
	public float3x2(double3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001215")]
	[Address(RVA = "0x4AB7420", Offset = "0x4AB7420", VA = "0x4AB7420")]
	public static implicit operator float3x2(float v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001216")]
	[Address(RVA = "0x4AB7440", Offset = "0x4AB7440", VA = "0x4AB7440")]
	public static explicit operator float3x2(bool v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001217")]
	[Address(RVA = "0x4AB7480", Offset = "0x4AB7480", VA = "0x4AB7480")]
	public static explicit operator float3x2(bool3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001218")]
	[Address(RVA = "0x4AB7530", Offset = "0x4AB7530", VA = "0x4AB7530")]
	public static implicit operator float3x2(int v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001219")]
	[Address(RVA = "0x4AB7550", Offset = "0x4AB7550", VA = "0x4AB7550")]
	public static implicit operator float3x2(int3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600121A")]
	[Address(RVA = "0x4AB75A0", Offset = "0x4AB75A0", VA = "0x4AB75A0")]
	public static implicit operator float3x2(uint v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600121B")]
	[Address(RVA = "0x4AB75D0", Offset = "0x4AB75D0", VA = "0x4AB75D0")]
	public static implicit operator float3x2(uint3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600121C")]
	[Address(RVA = "0x4AB7650", Offset = "0x4AB7650", VA = "0x4AB7650")]
	public static explicit operator float3x2(double v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600121D")]
	[Address(RVA = "0x4AB7670", Offset = "0x4AB7670", VA = "0x4AB7670")]
	public static explicit operator float3x2(double3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600121E")]
	[Address(RVA = "0x4AB76B0", Offset = "0x4AB76B0", VA = "0x4AB76B0")]
	public static float3x2 operator *(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600121F")]
	[Address(RVA = "0x4AB7700", Offset = "0x4AB7700", VA = "0x4AB7700")]
	public static float3x2 operator *(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001220")]
	[Address(RVA = "0x4AB7740", Offset = "0x4AB7740", VA = "0x4AB7740")]
	public static float3x2 operator *(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001221")]
	[Address(RVA = "0x4AB7780", Offset = "0x4AB7780", VA = "0x4AB7780")]
	public static float3x2 operator +(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001222")]
	[Address(RVA = "0x4AB77D0", Offset = "0x4AB77D0", VA = "0x4AB77D0")]
	public static float3x2 operator +(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001223")]
	[Address(RVA = "0x4AB7810", Offset = "0x4AB7810", VA = "0x4AB7810")]
	public static float3x2 operator +(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001224")]
	[Address(RVA = "0x4AB7850", Offset = "0x4AB7850", VA = "0x4AB7850")]
	public static float3x2 operator -(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001225")]
	[Address(RVA = "0x4AB78A0", Offset = "0x4AB78A0", VA = "0x4AB78A0")]
	public static float3x2 operator -(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001226")]
	[Address(RVA = "0x4AB78E0", Offset = "0x4AB78E0", VA = "0x4AB78E0")]
	public static float3x2 operator -(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001227")]
	[Address(RVA = "0x4AB7920", Offset = "0x4AB7920", VA = "0x4AB7920")]
	public static float3x2 operator /(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001228")]
	[Address(RVA = "0x4AB7970", Offset = "0x4AB7970", VA = "0x4AB7970")]
	public static float3x2 operator /(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001229")]
	[Address(RVA = "0x4AB79B0", Offset = "0x4AB79B0", VA = "0x4AB79B0")]
	public static float3x2 operator /(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600122A")]
	[Address(RVA = "0x4AB79F0", Offset = "0x4AB79F0", VA = "0x4AB79F0")]
	public static float3x2 operator %(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600122B")]
	[Address(RVA = "0x4AB7B30", Offset = "0x4AB7B30", VA = "0x4AB7B30")]
	public static float3x2 operator %(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600122C")]
	[Address(RVA = "0x4AB7C30", Offset = "0x4AB7C30", VA = "0x4AB7C30")]
	public static float3x2 operator %(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600122D")]
	[Address(RVA = "0x4AB7D30", Offset = "0x4AB7D30", VA = "0x4AB7D30")]
	public static float3x2 operator ++(float3x2 val)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600122E")]
	[Address(RVA = "0x4AB7D90", Offset = "0x4AB7D90", VA = "0x4AB7D90")]
	public static float3x2 operator --(float3x2 val)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600122F")]
	[Address(RVA = "0x4AB7DF0", Offset = "0x4AB7DF0", VA = "0x4AB7DF0")]
	public static bool3x2 operator <(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001230")]
	[Address(RVA = "0x4AB7E80", Offset = "0x4AB7E80", VA = "0x4AB7E80")]
	public static bool3x2 operator <(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001231")]
	[Address(RVA = "0x4AB7EF0", Offset = "0x4AB7EF0", VA = "0x4AB7EF0")]
	public static bool3x2 operator <(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001232")]
	[Address(RVA = "0x4AB7F60", Offset = "0x4AB7F60", VA = "0x4AB7F60")]
	public static bool3x2 operator <=(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001233")]
	[Address(RVA = "0x4AB7FF0", Offset = "0x4AB7FF0", VA = "0x4AB7FF0")]
	public static bool3x2 operator <=(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001234")]
	[Address(RVA = "0x4AB8060", Offset = "0x4AB8060", VA = "0x4AB8060")]
	public static bool3x2 operator <=(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001235")]
	[Address(RVA = "0x4AB80D0", Offset = "0x4AB80D0", VA = "0x4AB80D0")]
	public static bool3x2 operator >(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001236")]
	[Address(RVA = "0x4AB8160", Offset = "0x4AB8160", VA = "0x4AB8160")]
	public static bool3x2 operator >(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001237")]
	[Address(RVA = "0x4AB81D0", Offset = "0x4AB81D0", VA = "0x4AB81D0")]
	public static bool3x2 operator >(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001238")]
	[Address(RVA = "0x4AB8240", Offset = "0x4AB8240", VA = "0x4AB8240")]
	public static bool3x2 operator >=(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001239")]
	[Address(RVA = "0x4AB82D0", Offset = "0x4AB82D0", VA = "0x4AB82D0")]
	public static bool3x2 operator >=(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600123A")]
	[Address(RVA = "0x4AB8340", Offset = "0x4AB8340", VA = "0x4AB8340")]
	public static bool3x2 operator >=(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600123B")]
	[Address(RVA = "0x4AB83B0", Offset = "0x4AB83B0", VA = "0x4AB83B0")]
	public static float3x2 operator -(float3x2 val)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600123C")]
	[Address(RVA = "0x4AB83F0", Offset = "0x4AB83F0", VA = "0x4AB83F0")]
	public static float3x2 operator +(float3x2 val)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600123D")]
	[Address(RVA = "0x4AB8420", Offset = "0x4AB8420", VA = "0x4AB8420")]
	public static bool3x2 operator ==(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600123E")]
	[Address(RVA = "0x4AB84D0", Offset = "0x4AB84D0", VA = "0x4AB84D0")]
	public static bool3x2 operator ==(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600123F")]
	[Address(RVA = "0x4AB8560", Offset = "0x4AB8560", VA = "0x4AB8560")]
	public static bool3x2 operator ==(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001240")]
	[Address(RVA = "0x4AB85F0", Offset = "0x4AB85F0", VA = "0x4AB85F0")]
	public static bool3x2 operator !=(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001241")]
	[Address(RVA = "0x4AB86A0", Offset = "0x4AB86A0", VA = "0x4AB86A0")]
	public static bool3x2 operator !=(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001242")]
	[Address(RVA = "0x4AB8730", Offset = "0x4AB8730", VA = "0x4AB8730")]
	public static bool3x2 operator !=(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001244")]
	[Address(RVA = "0x4AB87D0", Offset = "0x4AB87D0", VA = "0x4AB87D0", Slot = "4")]
	public bool Equals(float3x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001245")]
	[Address(RVA = "0x4AB8840", Offset = "0x4AB8840", VA = "0x4AB8840", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001246")]
	[Address(RVA = "0x4AB8900", Offset = "0x4AB8900", VA = "0x4AB8900", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001247")]
	[Address(RVA = "0x4AB8990", Offset = "0x4AB8990", VA = "0x4AB8990", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001248")]
	[Address(RVA = "0x4AB8C00", Offset = "0x4AB8C00", VA = "0x4AB8C00", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
