using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000037")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float4x2 : IEquatable<float4x2>, IFormattable
{
	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x0")]
	public float4 c0;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x10")]
	public float4 c1;

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float4x2 zero;

	[Token(Token = "0x170005C5")]
	public unsafe ref float4 this[int index]
	{
		[Token(Token = "0x600151C")]
		[Address(RVA = "0x47C5630", Offset = "0x47C5630", VA = "0x47C5630")]
		get
		{
			return ref *(float4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014E3")]
	[Address(RVA = "0x47C3B70", Offset = "0x47C3B70", VA = "0x47C3B70")]
	public float4x2(float4 c0, float4 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014E4")]
	[Address(RVA = "0x47C3B80", Offset = "0x47C3B80", VA = "0x47C3B80")]
	public float4x2(float m00, float m01, float m10, float m11, float m20, float m21, float m30, float m31)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014E5")]
	[Address(RVA = "0x47C3BB0", Offset = "0x47C3BB0", VA = "0x47C3BB0")]
	public float4x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014E6")]
	[Address(RVA = "0x47C3BC0", Offset = "0x47C3BC0", VA = "0x47C3BC0")]
	public float4x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014E7")]
	[Address(RVA = "0x47C3BF0", Offset = "0x47C3BF0", VA = "0x47C3BF0")]
	public float4x2(bool4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014E8")]
	[Address(RVA = "0x47C3CC0", Offset = "0x47C3CC0", VA = "0x47C3CC0")]
	public float4x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014E9")]
	[Address(RVA = "0x47C3CD0", Offset = "0x47C3CD0", VA = "0x47C3CD0")]
	public float4x2(int4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014EA")]
	[Address(RVA = "0x47C3D40", Offset = "0x47C3D40", VA = "0x47C3D40")]
	public float4x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014EB")]
	[Address(RVA = "0x47C3D60", Offset = "0x47C3D60", VA = "0x47C3D60")]
	public float4x2(uint4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014EC")]
	[Address(RVA = "0x47C3E00", Offset = "0x47C3E00", VA = "0x47C3E00")]
	public float4x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014ED")]
	[Address(RVA = "0x47C3E10", Offset = "0x47C3E10", VA = "0x47C3E10")]
	public float4x2(double4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014EE")]
	[Address(RVA = "0x47C3E40", Offset = "0x47C3E40", VA = "0x47C3E40")]
	public static implicit operator float4x2(float v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014EF")]
	[Address(RVA = "0x47C3E50", Offset = "0x47C3E50", VA = "0x47C3E50")]
	public static explicit operator float4x2(bool v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F0")]
	[Address(RVA = "0x47C3E80", Offset = "0x47C3E80", VA = "0x47C3E80")]
	public static explicit operator float4x2(bool4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F1")]
	[Address(RVA = "0x47C3F60", Offset = "0x47C3F60", VA = "0x47C3F60")]
	public static implicit operator float4x2(int v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F2")]
	[Address(RVA = "0x47C3F80", Offset = "0x47C3F80", VA = "0x47C3F80")]
	public static implicit operator float4x2(int4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F3")]
	[Address(RVA = "0x47C3FF0", Offset = "0x47C3FF0", VA = "0x47C3FF0")]
	public static implicit operator float4x2(uint v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F4")]
	[Address(RVA = "0x47C4010", Offset = "0x47C4010", VA = "0x47C4010")]
	public static implicit operator float4x2(uint4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F5")]
	[Address(RVA = "0x47C40B0", Offset = "0x47C40B0", VA = "0x47C40B0")]
	public static explicit operator float4x2(double v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F6")]
	[Address(RVA = "0x47C40D0", Offset = "0x47C40D0", VA = "0x47C40D0")]
	public static explicit operator float4x2(double4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F7")]
	[Address(RVA = "0x47C4100", Offset = "0x47C4100", VA = "0x47C4100")]
	public static float4x2 operator *(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F8")]
	[Address(RVA = "0x47C4150", Offset = "0x47C4150", VA = "0x47C4150")]
	public static float4x2 operator *(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F9")]
	[Address(RVA = "0x47C4190", Offset = "0x47C4190", VA = "0x47C4190")]
	public static float4x2 operator *(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014FA")]
	[Address(RVA = "0x47C41D0", Offset = "0x47C41D0", VA = "0x47C41D0")]
	public static float4x2 operator +(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014FB")]
	[Address(RVA = "0x47C4220", Offset = "0x47C4220", VA = "0x47C4220")]
	public static float4x2 operator +(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014FC")]
	[Address(RVA = "0x47C4260", Offset = "0x47C4260", VA = "0x47C4260")]
	public static float4x2 operator +(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014FD")]
	[Address(RVA = "0x47C42A0", Offset = "0x47C42A0", VA = "0x47C42A0")]
	public static float4x2 operator -(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014FE")]
	[Address(RVA = "0x47C42F0", Offset = "0x47C42F0", VA = "0x47C42F0")]
	public static float4x2 operator -(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014FF")]
	[Address(RVA = "0x47C4330", Offset = "0x47C4330", VA = "0x47C4330")]
	public static float4x2 operator -(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001500")]
	[Address(RVA = "0x47C4380", Offset = "0x47C4380", VA = "0x47C4380")]
	public static float4x2 operator /(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001501")]
	[Address(RVA = "0x47C43D0", Offset = "0x47C43D0", VA = "0x47C43D0")]
	public static float4x2 operator /(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001502")]
	[Address(RVA = "0x47C4410", Offset = "0x47C4410", VA = "0x47C4410")]
	public static float4x2 operator /(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001503")]
	[Address(RVA = "0x47C4460", Offset = "0x47C4460", VA = "0x47C4460")]
	public static float4x2 operator %(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001504")]
	[Address(RVA = "0x47C45F0", Offset = "0x47C45F0", VA = "0x47C45F0")]
	public static float4x2 operator %(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001505")]
	[Address(RVA = "0x47C4730", Offset = "0x47C4730", VA = "0x47C4730")]
	public static float4x2 operator %(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001506")]
	[Address(RVA = "0x47C4870", Offset = "0x47C4870", VA = "0x47C4870")]
	public static float4x2 operator ++(float4x2 val)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001507")]
	[Address(RVA = "0x47C48C0", Offset = "0x47C48C0", VA = "0x47C48C0")]
	public static float4x2 operator --(float4x2 val)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001508")]
	[Address(RVA = "0x47C4910", Offset = "0x47C4910", VA = "0x47C4910")]
	public static bool4x2 operator <(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001509")]
	[Address(RVA = "0x47C49D0", Offset = "0x47C49D0", VA = "0x47C49D0")]
	public static bool4x2 operator <(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600150A")]
	[Address(RVA = "0x47C4A70", Offset = "0x47C4A70", VA = "0x47C4A70")]
	public static bool4x2 operator <(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600150B")]
	[Address(RVA = "0x47C4B20", Offset = "0x47C4B20", VA = "0x47C4B20")]
	public static bool4x2 operator <=(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600150C")]
	[Address(RVA = "0x47C4BE0", Offset = "0x47C4BE0", VA = "0x47C4BE0")]
	public static bool4x2 operator <=(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600150D")]
	[Address(RVA = "0x47C4C80", Offset = "0x47C4C80", VA = "0x47C4C80")]
	public static bool4x2 operator <=(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600150E")]
	[Address(RVA = "0x47C4D30", Offset = "0x47C4D30", VA = "0x47C4D30")]
	public static bool4x2 operator >(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600150F")]
	[Address(RVA = "0x47C4DF0", Offset = "0x47C4DF0", VA = "0x47C4DF0")]
	public static bool4x2 operator >(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001510")]
	[Address(RVA = "0x47C4EA0", Offset = "0x47C4EA0", VA = "0x47C4EA0")]
	public static bool4x2 operator >(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001511")]
	[Address(RVA = "0x47C4F40", Offset = "0x47C4F40", VA = "0x47C4F40")]
	public static bool4x2 operator >=(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001512")]
	[Address(RVA = "0x47C5000", Offset = "0x47C5000", VA = "0x47C5000")]
	public static bool4x2 operator >=(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001513")]
	[Address(RVA = "0x47C50B0", Offset = "0x47C50B0", VA = "0x47C50B0")]
	public static bool4x2 operator >=(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001514")]
	[Address(RVA = "0x47C5150", Offset = "0x47C5150", VA = "0x47C5150")]
	public static float4x2 operator -(float4x2 val)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001515")]
	[Address(RVA = "0x47C5190", Offset = "0x47C5190", VA = "0x47C5190")]
	public static float4x2 operator +(float4x2 val)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001516")]
	[Address(RVA = "0x47C51B0", Offset = "0x47C51B0", VA = "0x47C51B0")]
	public static bool4x2 operator ==(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001517")]
	[Address(RVA = "0x47C52B0", Offset = "0x47C52B0", VA = "0x47C52B0")]
	public static bool4x2 operator ==(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001518")]
	[Address(RVA = "0x47C5350", Offset = "0x47C5350", VA = "0x47C5350")]
	public static bool4x2 operator ==(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001519")]
	[Address(RVA = "0x47C53F0", Offset = "0x47C53F0", VA = "0x47C53F0")]
	public static bool4x2 operator !=(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600151A")]
	[Address(RVA = "0x47C54F0", Offset = "0x47C54F0", VA = "0x47C54F0")]
	public static bool4x2 operator !=(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600151B")]
	[Address(RVA = "0x47C5590", Offset = "0x47C5590", VA = "0x47C5590")]
	public static bool4x2 operator !=(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600151D")]
	[Address(RVA = "0x47C5640", Offset = "0x47C5640", VA = "0x47C5640", Slot = "4")]
	public bool Equals(float4x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600151E")]
	[Address(RVA = "0x47C56D0", Offset = "0x47C56D0", VA = "0x47C56D0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600151F")]
	[Address(RVA = "0x47C57C0", Offset = "0x47C57C0", VA = "0x47C57C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001520")]
	[Address(RVA = "0x47C58B0", Offset = "0x47C58B0", VA = "0x47C58B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001521")]
	[Address(RVA = "0x47C5BD0", Offset = "0x47C5BD0", VA = "0x47C5BD0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
