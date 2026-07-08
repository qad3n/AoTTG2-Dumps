using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200004F")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int4x4 : IEquatable<int4x4>, IFormattable
{
	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0x0")]
	public int4 c0;

	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x10")]
	public int4 c1;

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0x20")]
	public int4 c2;

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x30")]
	public int4 c3;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int4x4 identity;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x40")]
	public static readonly int4x4 zero;

	[Token(Token = "0x1700099C")]
	public unsafe ref int4 this[int index]
	{
		[Token(Token = "0x6001E0F")]
		[Address(RVA = "0x47FA8D0", Offset = "0x47FA8D0", VA = "0x47FA8D0")]
		get
		{
			return ref *(int4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCA")]
	[Address(RVA = "0x47F6D50", Offset = "0x47F6D50", VA = "0x47F6D50")]
	public int4x4(int4 c0, int4 c1, int4 c2, int4 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCB")]
	[Address(RVA = "0x47F6D80", Offset = "0x47F6D80", VA = "0x47F6D80")]
	public int4x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13, int m20, int m21, int m22, int m23, int m30, int m31, int m32, int m33)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCC")]
	[Address(RVA = "0x47F6DE0", Offset = "0x47F6DE0", VA = "0x47F6DE0")]
	public int4x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCD")]
	[Address(RVA = "0x47F6E10", Offset = "0x47F6E10", VA = "0x47F6E10")]
	public int4x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCE")]
	[Address(RVA = "0x47F6E50", Offset = "0x47F6E50", VA = "0x47F6E50")]
	public int4x4(bool4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCF")]
	[Address(RVA = "0x47F6F30", Offset = "0x47F6F30", VA = "0x47F6F30")]
	public int4x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD0")]
	[Address(RVA = "0x47F6F60", Offset = "0x47F6F60", VA = "0x47F6F60")]
	public int4x4(uint4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD1")]
	[Address(RVA = "0x47F6F90", Offset = "0x47F6F90", VA = "0x47F6F90")]
	public int4x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD2")]
	[Address(RVA = "0x47F6FC0", Offset = "0x47F6FC0", VA = "0x47F6FC0")]
	public int4x4(float4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD3")]
	[Address(RVA = "0x47F70B0", Offset = "0x47F70B0", VA = "0x47F70B0")]
	public int4x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD4")]
	[Address(RVA = "0x47F70E0", Offset = "0x47F70E0", VA = "0x47F70E0")]
	public int4x4(double4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD5")]
	[Address(RVA = "0x47F71A0", Offset = "0x47F71A0", VA = "0x47F71A0")]
	public static implicit operator int4x4(int v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD6")]
	[Address(RVA = "0x47F71D0", Offset = "0x47F71D0", VA = "0x47F71D0")]
	public static explicit operator int4x4(bool v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD7")]
	[Address(RVA = "0x47F7210", Offset = "0x47F7210", VA = "0x47F7210")]
	public static explicit operator int4x4(bool4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD8")]
	[Address(RVA = "0x47F72F0", Offset = "0x47F72F0", VA = "0x47F72F0")]
	public static explicit operator int4x4(uint v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD9")]
	[Address(RVA = "0x47F7320", Offset = "0x47F7320", VA = "0x47F7320")]
	public static explicit operator int4x4(uint4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDA")]
	[Address(RVA = "0x47F7350", Offset = "0x47F7350", VA = "0x47F7350")]
	public static explicit operator int4x4(float v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDB")]
	[Address(RVA = "0x47F7390", Offset = "0x47F7390", VA = "0x47F7390")]
	public static explicit operator int4x4(float4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDC")]
	[Address(RVA = "0x47F7480", Offset = "0x47F7480", VA = "0x47F7480")]
	public static explicit operator int4x4(double v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDD")]
	[Address(RVA = "0x47F74C0", Offset = "0x47F74C0", VA = "0x47F74C0")]
	public static explicit operator int4x4(double4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDE")]
	[Address(RVA = "0x47F75B0", Offset = "0x47F75B0", VA = "0x47F75B0")]
	public static int4x4 operator *(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDF")]
	[Address(RVA = "0x47F7700", Offset = "0x47F7700", VA = "0x47F7700")]
	public static int4x4 operator *(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE0")]
	[Address(RVA = "0x47F7800", Offset = "0x47F7800", VA = "0x47F7800")]
	public static int4x4 operator *(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE1")]
	[Address(RVA = "0x47F7900", Offset = "0x47F7900", VA = "0x47F7900")]
	public static int4x4 operator +(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE2")]
	[Address(RVA = "0x47F79D0", Offset = "0x47F79D0", VA = "0x47F79D0")]
	public static int4x4 operator +(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE3")]
	[Address(RVA = "0x47F7A90", Offset = "0x47F7A90", VA = "0x47F7A90")]
	public static int4x4 operator +(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE4")]
	[Address(RVA = "0x47F7B50", Offset = "0x47F7B50", VA = "0x47F7B50")]
	public static int4x4 operator -(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE5")]
	[Address(RVA = "0x47F7C20", Offset = "0x47F7C20", VA = "0x47F7C20")]
	public static int4x4 operator -(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE6")]
	[Address(RVA = "0x47F7CE0", Offset = "0x47F7CE0", VA = "0x47F7CE0")]
	public static int4x4 operator -(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE7")]
	[Address(RVA = "0x47F7DB0", Offset = "0x47F7DB0", VA = "0x47F7DB0")]
	public static int4x4 operator /(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE8")]
	[Address(RVA = "0x47F7F60", Offset = "0x47F7F60", VA = "0x47F7F60")]
	public static int4x4 operator /(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE9")]
	[Address(RVA = "0x47F80A0", Offset = "0x47F80A0", VA = "0x47F80A0")]
	public static int4x4 operator /(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DEA")]
	[Address(RVA = "0x47F81D0", Offset = "0x47F81D0", VA = "0x47F81D0")]
	public static int4x4 operator %(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DEB")]
	[Address(RVA = "0x47F8380", Offset = "0x47F8380", VA = "0x47F8380")]
	public static int4x4 operator %(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DEC")]
	[Address(RVA = "0x47F84C0", Offset = "0x47F84C0", VA = "0x47F84C0")]
	public static int4x4 operator %(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DED")]
	[Address(RVA = "0x47F85F0", Offset = "0x47F85F0", VA = "0x47F85F0")]
	public static int4x4 operator ++(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DEE")]
	[Address(RVA = "0x47F8690", Offset = "0x47F8690", VA = "0x47F8690")]
	public static int4x4 operator --(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DEF")]
	[Address(RVA = "0x47F8730", Offset = "0x47F8730", VA = "0x47F8730")]
	public static bool4x4 operator <(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF0")]
	[Address(RVA = "0x47F88F0", Offset = "0x47F88F0", VA = "0x47F88F0")]
	public static bool4x4 operator <(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF1")]
	[Address(RVA = "0x47F8A30", Offset = "0x47F8A30", VA = "0x47F8A30")]
	public static bool4x4 operator <(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF2")]
	[Address(RVA = "0x47F8B70", Offset = "0x47F8B70", VA = "0x47F8B70")]
	public static bool4x4 operator <=(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF3")]
	[Address(RVA = "0x47F8D30", Offset = "0x47F8D30", VA = "0x47F8D30")]
	public static bool4x4 operator <=(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF4")]
	[Address(RVA = "0x47F8E70", Offset = "0x47F8E70", VA = "0x47F8E70")]
	public static bool4x4 operator <=(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF5")]
	[Address(RVA = "0x47F8FB0", Offset = "0x47F8FB0", VA = "0x47F8FB0")]
	public static bool4x4 operator >(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF6")]
	[Address(RVA = "0x47F9170", Offset = "0x47F9170", VA = "0x47F9170")]
	public static bool4x4 operator >(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF7")]
	[Address(RVA = "0x47F92B0", Offset = "0x47F92B0", VA = "0x47F92B0")]
	public static bool4x4 operator >(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF8")]
	[Address(RVA = "0x47F93F0", Offset = "0x47F93F0", VA = "0x47F93F0")]
	public static bool4x4 operator >=(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF9")]
	[Address(RVA = "0x47F95B0", Offset = "0x47F95B0", VA = "0x47F95B0")]
	public static bool4x4 operator >=(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFA")]
	[Address(RVA = "0x47F96F0", Offset = "0x47F96F0", VA = "0x47F96F0")]
	public static bool4x4 operator >=(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFB")]
	[Address(RVA = "0x47F9830", Offset = "0x47F9830", VA = "0x47F9830")]
	public static int4x4 operator -(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFC")]
	[Address(RVA = "0x47F98C0", Offset = "0x47F98C0", VA = "0x47F98C0")]
	public static int4x4 operator +(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFD")]
	[Address(RVA = "0x47F98F0", Offset = "0x47F98F0", VA = "0x47F98F0")]
	public static int4x4 operator <<(int4x4 x, int n)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFE")]
	[Address(RVA = "0x47F99E0", Offset = "0x47F99E0", VA = "0x47F99E0")]
	public static int4x4 operator >>(int4x4 x, int n)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFF")]
	[Address(RVA = "0x47F9AD0", Offset = "0x47F9AD0", VA = "0x47F9AD0")]
	public static bool4x4 operator ==(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E00")]
	[Address(RVA = "0x47F9C90", Offset = "0x47F9C90", VA = "0x47F9C90")]
	public static bool4x4 operator ==(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E01")]
	[Address(RVA = "0x47F9DD0", Offset = "0x47F9DD0", VA = "0x47F9DD0")]
	public static bool4x4 operator ==(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E02")]
	[Address(RVA = "0x47F9F10", Offset = "0x47F9F10", VA = "0x47F9F10")]
	public static bool4x4 operator !=(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E03")]
	[Address(RVA = "0x47FA0D0", Offset = "0x47FA0D0", VA = "0x47FA0D0")]
	public static bool4x4 operator !=(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E04")]
	[Address(RVA = "0x47FA210", Offset = "0x47FA210", VA = "0x47FA210")]
	public static bool4x4 operator !=(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E05")]
	[Address(RVA = "0x47FA350", Offset = "0x47FA350", VA = "0x47FA350")]
	public static int4x4 operator ~(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E06")]
	[Address(RVA = "0x47FA390", Offset = "0x47FA390", VA = "0x47FA390")]
	public static int4x4 operator &(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E07")]
	[Address(RVA = "0x47FA3D0", Offset = "0x47FA3D0", VA = "0x47FA3D0")]
	public static int4x4 operator &(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E08")]
	[Address(RVA = "0x47FA490", Offset = "0x47FA490", VA = "0x47FA490")]
	public static int4x4 operator &(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E09")]
	[Address(RVA = "0x47FA550", Offset = "0x47FA550", VA = "0x47FA550")]
	public static int4x4 operator |(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0A")]
	[Address(RVA = "0x47FA590", Offset = "0x47FA590", VA = "0x47FA590")]
	public static int4x4 operator |(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0B")]
	[Address(RVA = "0x47FA650", Offset = "0x47FA650", VA = "0x47FA650")]
	public static int4x4 operator |(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0C")]
	[Address(RVA = "0x47FA710", Offset = "0x47FA710", VA = "0x47FA710")]
	public static int4x4 operator ^(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0D")]
	[Address(RVA = "0x47FA750", Offset = "0x47FA750", VA = "0x47FA750")]
	public static int4x4 operator ^(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0E")]
	[Address(RVA = "0x47FA810", Offset = "0x47FA810", VA = "0x47FA810")]
	public static int4x4 operator ^(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E10")]
	[Address(RVA = "0x47FA8E0", Offset = "0x47FA8E0", VA = "0x47FA8E0", Slot = "4")]
	public bool Equals(int4x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E11")]
	[Address(RVA = "0x47FA990", Offset = "0x47FA990", VA = "0x47FA990", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E12")]
	[Address(RVA = "0x47FAAA0", Offset = "0x47FAAA0", VA = "0x47FAAA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E13")]
	[Address(RVA = "0x47FAC10", Offset = "0x47FAC10", VA = "0x47FAC10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E14")]
	[Address(RVA = "0x47FB1D0", Offset = "0x47FB1D0", VA = "0x47FB1D0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
