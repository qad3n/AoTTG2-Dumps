using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000032")]
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
		[Token(Token = "0x600126B")]
		[Address(RVA = "0x47B4B10", Offset = "0x47B4B10", VA = "0x47B4B10")]
		get
		{
			return ref *(float3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001232")]
	[Address(RVA = "0x47B34A0", Offset = "0x47B34A0", VA = "0x47B34A0")]
	public float3x2(float3 c0, float3 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001233")]
	[Address(RVA = "0x47B34C0", Offset = "0x47B34C0", VA = "0x47B34C0")]
	public float3x2(float m00, float m01, float m10, float m11, float m20, float m21)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001234")]
	[Address(RVA = "0x47B34E0", Offset = "0x47B34E0", VA = "0x47B34E0")]
	public float3x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001235")]
	[Address(RVA = "0x47B3500", Offset = "0x47B3500", VA = "0x47B3500")]
	public float3x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001236")]
	[Address(RVA = "0x47B3540", Offset = "0x47B3540", VA = "0x47B3540")]
	public float3x2(bool3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001237")]
	[Address(RVA = "0x47B35F0", Offset = "0x47B35F0", VA = "0x47B35F0")]
	public float3x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001238")]
	[Address(RVA = "0x47B3610", Offset = "0x47B3610", VA = "0x47B3610")]
	public float3x2(int3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001239")]
	[Address(RVA = "0x47B3660", Offset = "0x47B3660", VA = "0x47B3660")]
	public float3x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600123A")]
	[Address(RVA = "0x47B3690", Offset = "0x47B3690", VA = "0x47B3690")]
	public float3x2(uint3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600123B")]
	[Address(RVA = "0x47B3710", Offset = "0x47B3710", VA = "0x47B3710")]
	public float3x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600123C")]
	[Address(RVA = "0x47B3730", Offset = "0x47B3730", VA = "0x47B3730")]
	public float3x2(double3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600123D")]
	[Address(RVA = "0x47B3770", Offset = "0x47B3770", VA = "0x47B3770")]
	public static implicit operator float3x2(float v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600123E")]
	[Address(RVA = "0x47B3790", Offset = "0x47B3790", VA = "0x47B3790")]
	public static explicit operator float3x2(bool v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600123F")]
	[Address(RVA = "0x47B37D0", Offset = "0x47B37D0", VA = "0x47B37D0")]
	public static explicit operator float3x2(bool3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001240")]
	[Address(RVA = "0x47B3880", Offset = "0x47B3880", VA = "0x47B3880")]
	public static implicit operator float3x2(int v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001241")]
	[Address(RVA = "0x47B38A0", Offset = "0x47B38A0", VA = "0x47B38A0")]
	public static implicit operator float3x2(int3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001242")]
	[Address(RVA = "0x47B38F0", Offset = "0x47B38F0", VA = "0x47B38F0")]
	public static implicit operator float3x2(uint v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001243")]
	[Address(RVA = "0x47B3920", Offset = "0x47B3920", VA = "0x47B3920")]
	public static implicit operator float3x2(uint3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001244")]
	[Address(RVA = "0x47B39A0", Offset = "0x47B39A0", VA = "0x47B39A0")]
	public static explicit operator float3x2(double v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001245")]
	[Address(RVA = "0x47B39C0", Offset = "0x47B39C0", VA = "0x47B39C0")]
	public static explicit operator float3x2(double3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001246")]
	[Address(RVA = "0x47B3A00", Offset = "0x47B3A00", VA = "0x47B3A00")]
	public static float3x2 operator *(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001247")]
	[Address(RVA = "0x47B3A50", Offset = "0x47B3A50", VA = "0x47B3A50")]
	public static float3x2 operator *(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001248")]
	[Address(RVA = "0x47B3A90", Offset = "0x47B3A90", VA = "0x47B3A90")]
	public static float3x2 operator *(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001249")]
	[Address(RVA = "0x47B3AD0", Offset = "0x47B3AD0", VA = "0x47B3AD0")]
	public static float3x2 operator +(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600124A")]
	[Address(RVA = "0x47B3B20", Offset = "0x47B3B20", VA = "0x47B3B20")]
	public static float3x2 operator +(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600124B")]
	[Address(RVA = "0x47B3B60", Offset = "0x47B3B60", VA = "0x47B3B60")]
	public static float3x2 operator +(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600124C")]
	[Address(RVA = "0x47B3BA0", Offset = "0x47B3BA0", VA = "0x47B3BA0")]
	public static float3x2 operator -(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600124D")]
	[Address(RVA = "0x47B3BF0", Offset = "0x47B3BF0", VA = "0x47B3BF0")]
	public static float3x2 operator -(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600124E")]
	[Address(RVA = "0x47B3C30", Offset = "0x47B3C30", VA = "0x47B3C30")]
	public static float3x2 operator -(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600124F")]
	[Address(RVA = "0x47B3C70", Offset = "0x47B3C70", VA = "0x47B3C70")]
	public static float3x2 operator /(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001250")]
	[Address(RVA = "0x47B3CC0", Offset = "0x47B3CC0", VA = "0x47B3CC0")]
	public static float3x2 operator /(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001251")]
	[Address(RVA = "0x47B3D00", Offset = "0x47B3D00", VA = "0x47B3D00")]
	public static float3x2 operator /(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001252")]
	[Address(RVA = "0x47B3D40", Offset = "0x47B3D40", VA = "0x47B3D40")]
	public static float3x2 operator %(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001253")]
	[Address(RVA = "0x47B3E80", Offset = "0x47B3E80", VA = "0x47B3E80")]
	public static float3x2 operator %(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001254")]
	[Address(RVA = "0x47B3F80", Offset = "0x47B3F80", VA = "0x47B3F80")]
	public static float3x2 operator %(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001255")]
	[Address(RVA = "0x47B4080", Offset = "0x47B4080", VA = "0x47B4080")]
	public static float3x2 operator ++(float3x2 val)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001256")]
	[Address(RVA = "0x47B40E0", Offset = "0x47B40E0", VA = "0x47B40E0")]
	public static float3x2 operator --(float3x2 val)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001257")]
	[Address(RVA = "0x47B4140", Offset = "0x47B4140", VA = "0x47B4140")]
	public static bool3x2 operator <(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001258")]
	[Address(RVA = "0x47B41D0", Offset = "0x47B41D0", VA = "0x47B41D0")]
	public static bool3x2 operator <(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001259")]
	[Address(RVA = "0x47B4240", Offset = "0x47B4240", VA = "0x47B4240")]
	public static bool3x2 operator <(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600125A")]
	[Address(RVA = "0x47B42B0", Offset = "0x47B42B0", VA = "0x47B42B0")]
	public static bool3x2 operator <=(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600125B")]
	[Address(RVA = "0x47B4340", Offset = "0x47B4340", VA = "0x47B4340")]
	public static bool3x2 operator <=(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600125C")]
	[Address(RVA = "0x47B43B0", Offset = "0x47B43B0", VA = "0x47B43B0")]
	public static bool3x2 operator <=(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600125D")]
	[Address(RVA = "0x47B4420", Offset = "0x47B4420", VA = "0x47B4420")]
	public static bool3x2 operator >(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600125E")]
	[Address(RVA = "0x47B44B0", Offset = "0x47B44B0", VA = "0x47B44B0")]
	public static bool3x2 operator >(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600125F")]
	[Address(RVA = "0x47B4520", Offset = "0x47B4520", VA = "0x47B4520")]
	public static bool3x2 operator >(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001260")]
	[Address(RVA = "0x47B4590", Offset = "0x47B4590", VA = "0x47B4590")]
	public static bool3x2 operator >=(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001261")]
	[Address(RVA = "0x47B4620", Offset = "0x47B4620", VA = "0x47B4620")]
	public static bool3x2 operator >=(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001262")]
	[Address(RVA = "0x47B4690", Offset = "0x47B4690", VA = "0x47B4690")]
	public static bool3x2 operator >=(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001263")]
	[Address(RVA = "0x47B4700", Offset = "0x47B4700", VA = "0x47B4700")]
	public static float3x2 operator -(float3x2 val)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001264")]
	[Address(RVA = "0x47B4740", Offset = "0x47B4740", VA = "0x47B4740")]
	public static float3x2 operator +(float3x2 val)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001265")]
	[Address(RVA = "0x47B4770", Offset = "0x47B4770", VA = "0x47B4770")]
	public static bool3x2 operator ==(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001266")]
	[Address(RVA = "0x47B4820", Offset = "0x47B4820", VA = "0x47B4820")]
	public static bool3x2 operator ==(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001267")]
	[Address(RVA = "0x47B48B0", Offset = "0x47B48B0", VA = "0x47B48B0")]
	public static bool3x2 operator ==(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001268")]
	[Address(RVA = "0x47B4940", Offset = "0x47B4940", VA = "0x47B4940")]
	public static bool3x2 operator !=(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001269")]
	[Address(RVA = "0x47B49F0", Offset = "0x47B49F0", VA = "0x47B49F0")]
	public static bool3x2 operator !=(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600126A")]
	[Address(RVA = "0x47B4A80", Offset = "0x47B4A80", VA = "0x47B4A80")]
	public static bool3x2 operator !=(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600126C")]
	[Address(RVA = "0x47B4B20", Offset = "0x47B4B20", VA = "0x47B4B20", Slot = "4")]
	public bool Equals(float3x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x47B4B90", Offset = "0x47B4B90", VA = "0x47B4B90", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600126E")]
	[Address(RVA = "0x47B4C50", Offset = "0x47B4C50", VA = "0x47B4C50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600126F")]
	[Address(RVA = "0x47B4CE0", Offset = "0x47B4CE0", VA = "0x47B4CE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001270")]
	[Address(RVA = "0x47B4F50", Offset = "0x47B4F50", VA = "0x47B4F50", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
