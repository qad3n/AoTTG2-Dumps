using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000038")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float4x3 : IEquatable<float4x3>, IFormattable
{
	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x0")]
	public float4 c0;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x10")]
	public float4 c1;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x20")]
	public float4 c2;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float4x3 zero;

	[Token(Token = "0x170005C6")]
	public unsafe ref float4 this[int index]
	{
		[Token(Token = "0x600155B")]
		[Address(RVA = "0x47C8670", Offset = "0x47C8670", VA = "0x47C8670")]
		get
		{
			return ref *(float4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001522")]
	[Address(RVA = "0x47C5EC0", Offset = "0x47C5EC0", VA = "0x47C5EC0")]
	public float4x3(float4 c0, float4 c1, float4 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001523")]
	[Address(RVA = "0x47C5EE0", Offset = "0x47C5EE0", VA = "0x47C5EE0")]
	public float4x3(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22, float m30, float m31, float m32)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001524")]
	[Address(RVA = "0x47C5F40", Offset = "0x47C5F40", VA = "0x47C5F40")]
	public float4x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001525")]
	[Address(RVA = "0x47C5F50", Offset = "0x47C5F50", VA = "0x47C5F50")]
	public float4x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001526")]
	[Address(RVA = "0x47C5F70", Offset = "0x47C5F70", VA = "0x47C5F70")]
	public float4x3(bool4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001527")]
	[Address(RVA = "0x47C60F0", Offset = "0x47C60F0", VA = "0x47C60F0")]
	public float4x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001528")]
	[Address(RVA = "0x47C6110", Offset = "0x47C6110", VA = "0x47C6110")]
	public float4x3(int4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001529")]
	[Address(RVA = "0x47C61C0", Offset = "0x47C61C0", VA = "0x47C61C0")]
	public float4x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600152A")]
	[Address(RVA = "0x47C61E0", Offset = "0x47C61E0", VA = "0x47C61E0")]
	public float4x3(uint4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600152B")]
	[Address(RVA = "0x47C62D0", Offset = "0x47C62D0", VA = "0x47C62D0")]
	public float4x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600152C")]
	[Address(RVA = "0x47C62F0", Offset = "0x47C62F0", VA = "0x47C62F0")]
	public float4x3(double4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600152D")]
	[Address(RVA = "0x47C6330", Offset = "0x47C6330", VA = "0x47C6330")]
	public static implicit operator float4x3(float v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600152E")]
	[Address(RVA = "0x47C6350", Offset = "0x47C6350", VA = "0x47C6350")]
	public static explicit operator float4x3(bool v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600152F")]
	[Address(RVA = "0x47C6380", Offset = "0x47C6380", VA = "0x47C6380")]
	public static explicit operator float4x3(bool4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001530")]
	[Address(RVA = "0x47C6500", Offset = "0x47C6500", VA = "0x47C6500")]
	public static implicit operator float4x3(int v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001531")]
	[Address(RVA = "0x47C6520", Offset = "0x47C6520", VA = "0x47C6520")]
	public static implicit operator float4x3(int4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001532")]
	[Address(RVA = "0x47C65D0", Offset = "0x47C65D0", VA = "0x47C65D0")]
	public static implicit operator float4x3(uint v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001533")]
	[Address(RVA = "0x47C65F0", Offset = "0x47C65F0", VA = "0x47C65F0")]
	public static implicit operator float4x3(uint4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001534")]
	[Address(RVA = "0x47C66F0", Offset = "0x47C66F0", VA = "0x47C66F0")]
	public static explicit operator float4x3(double v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001535")]
	[Address(RVA = "0x47C6710", Offset = "0x47C6710", VA = "0x47C6710")]
	public static explicit operator float4x3(double4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001536")]
	[Address(RVA = "0x47C6760", Offset = "0x47C6760", VA = "0x47C6760")]
	public static float4x3 operator *(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001537")]
	[Address(RVA = "0x47C67E0", Offset = "0x47C67E0", VA = "0x47C67E0")]
	public static float4x3 operator *(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001538")]
	[Address(RVA = "0x47C6840", Offset = "0x47C6840", VA = "0x47C6840")]
	public static float4x3 operator *(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001539")]
	[Address(RVA = "0x47C68A0", Offset = "0x47C68A0", VA = "0x47C68A0")]
	public static float4x3 operator +(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153A")]
	[Address(RVA = "0x47C6920", Offset = "0x47C6920", VA = "0x47C6920")]
	public static float4x3 operator +(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153B")]
	[Address(RVA = "0x47C6980", Offset = "0x47C6980", VA = "0x47C6980")]
	public static float4x3 operator +(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153C")]
	[Address(RVA = "0x47C69E0", Offset = "0x47C69E0", VA = "0x47C69E0")]
	public static float4x3 operator -(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153D")]
	[Address(RVA = "0x47C6A60", Offset = "0x47C6A60", VA = "0x47C6A60")]
	public static float4x3 operator -(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153E")]
	[Address(RVA = "0x47C6AC0", Offset = "0x47C6AC0", VA = "0x47C6AC0")]
	public static float4x3 operator -(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153F")]
	[Address(RVA = "0x47C6B30", Offset = "0x47C6B30", VA = "0x47C6B30")]
	public static float4x3 operator /(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001540")]
	[Address(RVA = "0x47C6BB0", Offset = "0x47C6BB0", VA = "0x47C6BB0")]
	public static float4x3 operator /(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001541")]
	[Address(RVA = "0x47C6C10", Offset = "0x47C6C10", VA = "0x47C6C10")]
	public static float4x3 operator /(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001542")]
	[Address(RVA = "0x47C6C80", Offset = "0x47C6C80", VA = "0x47C6C80")]
	public static float4x3 operator %(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001543")]
	[Address(RVA = "0x47C6ED0", Offset = "0x47C6ED0", VA = "0x47C6ED0")]
	public static float4x3 operator %(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001544")]
	[Address(RVA = "0x47C70B0", Offset = "0x47C70B0", VA = "0x47C70B0")]
	public static float4x3 operator %(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001545")]
	[Address(RVA = "0x47C7290", Offset = "0x47C7290", VA = "0x47C7290")]
	public static float4x3 operator ++(float4x3 val)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001546")]
	[Address(RVA = "0x47C72F0", Offset = "0x47C72F0", VA = "0x47C72F0")]
	public static float4x3 operator --(float4x3 val)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001547")]
	[Address(RVA = "0x47C7350", Offset = "0x47C7350", VA = "0x47C7350")]
	public static bool4x3 operator <(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001548")]
	[Address(RVA = "0x47C7470", Offset = "0x47C7470", VA = "0x47C7470")]
	public static bool4x3 operator <(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001549")]
	[Address(RVA = "0x47C7550", Offset = "0x47C7550", VA = "0x47C7550")]
	public static bool4x3 operator <(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154A")]
	[Address(RVA = "0x47C7640", Offset = "0x47C7640", VA = "0x47C7640")]
	public static bool4x3 operator <=(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154B")]
	[Address(RVA = "0x47C7760", Offset = "0x47C7760", VA = "0x47C7760")]
	public static bool4x3 operator <=(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154C")]
	[Address(RVA = "0x47C7840", Offset = "0x47C7840", VA = "0x47C7840")]
	public static bool4x3 operator <=(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154D")]
	[Address(RVA = "0x47C7930", Offset = "0x47C7930", VA = "0x47C7930")]
	public static bool4x3 operator >(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154E")]
	[Address(RVA = "0x47C7A50", Offset = "0x47C7A50", VA = "0x47C7A50")]
	public static bool4x3 operator >(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154F")]
	[Address(RVA = "0x47C7B40", Offset = "0x47C7B40", VA = "0x47C7B40")]
	public static bool4x3 operator >(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001550")]
	[Address(RVA = "0x47C7C20", Offset = "0x47C7C20", VA = "0x47C7C20")]
	public static bool4x3 operator >=(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001551")]
	[Address(RVA = "0x47C7D40", Offset = "0x47C7D40", VA = "0x47C7D40")]
	public static bool4x3 operator >=(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001552")]
	[Address(RVA = "0x47C7E30", Offset = "0x47C7E30", VA = "0x47C7E30")]
	public static bool4x3 operator >=(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001553")]
	[Address(RVA = "0x47C7F10", Offset = "0x47C7F10", VA = "0x47C7F10")]
	public static float4x3 operator -(float4x3 val)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001554")]
	[Address(RVA = "0x47C7F70", Offset = "0x47C7F70", VA = "0x47C7F70")]
	public static float4x3 operator +(float4x3 val)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001555")]
	[Address(RVA = "0x47C7F90", Offset = "0x47C7F90", VA = "0x47C7F90")]
	public static bool4x3 operator ==(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001556")]
	[Address(RVA = "0x47C8100", Offset = "0x47C8100", VA = "0x47C8100")]
	public static bool4x3 operator ==(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001557")]
	[Address(RVA = "0x47C8200", Offset = "0x47C8200", VA = "0x47C8200")]
	public static bool4x3 operator ==(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001558")]
	[Address(RVA = "0x47C8300", Offset = "0x47C8300", VA = "0x47C8300")]
	public static bool4x3 operator !=(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001559")]
	[Address(RVA = "0x47C8470", Offset = "0x47C8470", VA = "0x47C8470")]
	public static bool4x3 operator !=(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155A")]
	[Address(RVA = "0x47C8570", Offset = "0x47C8570", VA = "0x47C8570")]
	public static bool4x3 operator !=(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155C")]
	[Address(RVA = "0x47C8680", Offset = "0x47C8680", VA = "0x47C8680", Slot = "4")]
	public bool Equals(float4x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600155D")]
	[Address(RVA = "0x47C8780", Offset = "0x47C8780", VA = "0x47C8780", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155E")]
	[Address(RVA = "0x47C88D0", Offset = "0x47C88D0", VA = "0x47C88D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155F")]
	[Address(RVA = "0x47C8A50", Offset = "0x47C8A50", VA = "0x47C8A50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001560")]
	[Address(RVA = "0x47C8EB0", Offset = "0x47C8EB0", VA = "0x47C8EB0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
