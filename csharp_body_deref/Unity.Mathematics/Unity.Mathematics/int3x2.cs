using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000048")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int3x2 : IEquatable<int3x2>, IFormattable
{
	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x0")]
	public int3 c0;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0xC")]
	public int3 c1;

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int3x2 zero;

	[Token(Token = "0x17000846")]
	public unsafe ref int3 this[int index]
	{
		[Token(Token = "0x6001AB8")]
		[Address(RVA = "0x47E4550", Offset = "0x47E4550", VA = "0x47E4550")]
		get
		{
			return ref *(int3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A73")]
	[Address(RVA = "0x47E2DD0", Offset = "0x47E2DD0", VA = "0x47E2DD0")]
	public int3x2(int3 c0, int3 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A74")]
	[Address(RVA = "0x47E2DE0", Offset = "0x47E2DE0", VA = "0x47E2DE0")]
	public int3x2(int m00, int m01, int m10, int m11, int m20, int m21)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A75")]
	[Address(RVA = "0x47E2E00", Offset = "0x47E2E00", VA = "0x47E2E00")]
	public int3x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A76")]
	[Address(RVA = "0x47E2E20", Offset = "0x47E2E20", VA = "0x47E2E20")]
	public int3x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A77")]
	[Address(RVA = "0x47E2E40", Offset = "0x47E2E40", VA = "0x47E2E40")]
	public int3x2(bool3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A78")]
	[Address(RVA = "0x47E2EA0", Offset = "0x47E2EA0", VA = "0x47E2EA0")]
	public int3x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A79")]
	[Address(RVA = "0x47E2EC0", Offset = "0x47E2EC0", VA = "0x47E2EC0")]
	public int3x2(uint3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A7A")]
	[Address(RVA = "0x47E2EE0", Offset = "0x47E2EE0", VA = "0x47E2EE0")]
	public int3x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A7B")]
	[Address(RVA = "0x47E2F00", Offset = "0x47E2F00", VA = "0x47E2F00")]
	public int3x2(float3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A7C")]
	[Address(RVA = "0x47E2F50", Offset = "0x47E2F50", VA = "0x47E2F50")]
	public int3x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A7D")]
	[Address(RVA = "0x47E2F70", Offset = "0x47E2F70", VA = "0x47E2F70")]
	public int3x2(double3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A7E")]
	[Address(RVA = "0x47E2FB0", Offset = "0x47E2FB0", VA = "0x47E2FB0")]
	public static implicit operator int3x2(int v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A7F")]
	[Address(RVA = "0x47E2FD0", Offset = "0x47E2FD0", VA = "0x47E2FD0")]
	public static explicit operator int3x2(bool v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A80")]
	[Address(RVA = "0x47E3000", Offset = "0x47E3000", VA = "0x47E3000")]
	public static explicit operator int3x2(bool3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A81")]
	[Address(RVA = "0x47E3060", Offset = "0x47E3060", VA = "0x47E3060")]
	public static explicit operator int3x2(uint v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A82")]
	[Address(RVA = "0x47E3080", Offset = "0x47E3080", VA = "0x47E3080")]
	public static explicit operator int3x2(uint3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A83")]
	[Address(RVA = "0x47E30B0", Offset = "0x47E30B0", VA = "0x47E30B0")]
	public static explicit operator int3x2(float v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A84")]
	[Address(RVA = "0x47E30D0", Offset = "0x47E30D0", VA = "0x47E30D0")]
	public static explicit operator int3x2(float3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A85")]
	[Address(RVA = "0x47E3120", Offset = "0x47E3120", VA = "0x47E3120")]
	public static explicit operator int3x2(double v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A86")]
	[Address(RVA = "0x47E3140", Offset = "0x47E3140", VA = "0x47E3140")]
	public static explicit operator int3x2(double3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A87")]
	[Address(RVA = "0x47E3190", Offset = "0x47E3190", VA = "0x47E3190")]
	public static int3x2 operator *(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A88")]
	[Address(RVA = "0x47E3200", Offset = "0x47E3200", VA = "0x47E3200")]
	public static int3x2 operator *(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A89")]
	[Address(RVA = "0x47E3260", Offset = "0x47E3260", VA = "0x47E3260")]
	public static int3x2 operator *(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A8A")]
	[Address(RVA = "0x47E32C0", Offset = "0x47E32C0", VA = "0x47E32C0")]
	public static int3x2 operator +(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A8B")]
	[Address(RVA = "0x47E3330", Offset = "0x47E3330", VA = "0x47E3330")]
	public static int3x2 operator +(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A8C")]
	[Address(RVA = "0x47E3380", Offset = "0x47E3380", VA = "0x47E3380")]
	public static int3x2 operator +(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A8D")]
	[Address(RVA = "0x47E33D0", Offset = "0x47E33D0", VA = "0x47E33D0")]
	public static int3x2 operator -(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A8E")]
	[Address(RVA = "0x47E3440", Offset = "0x47E3440", VA = "0x47E3440")]
	public static int3x2 operator -(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A8F")]
	[Address(RVA = "0x47E34A0", Offset = "0x47E34A0", VA = "0x47E34A0")]
	public static int3x2 operator -(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A90")]
	[Address(RVA = "0x47E34F0", Offset = "0x47E34F0", VA = "0x47E34F0")]
	public static int3x2 operator /(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A91")]
	[Address(RVA = "0x47E3580", Offset = "0x47E3580", VA = "0x47E3580")]
	public static int3x2 operator /(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A92")]
	[Address(RVA = "0x47E35F0", Offset = "0x47E35F0", VA = "0x47E35F0")]
	public static int3x2 operator /(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A93")]
	[Address(RVA = "0x47E3660", Offset = "0x47E3660", VA = "0x47E3660")]
	public static int3x2 operator %(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A94")]
	[Address(RVA = "0x47E36F0", Offset = "0x47E36F0", VA = "0x47E36F0")]
	public static int3x2 operator %(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A95")]
	[Address(RVA = "0x47E3760", Offset = "0x47E3760", VA = "0x47E3760")]
	public static int3x2 operator %(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A96")]
	[Address(RVA = "0x47E37D0", Offset = "0x47E37D0", VA = "0x47E37D0")]
	public static int3x2 operator ++(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A97")]
	[Address(RVA = "0x47E3840", Offset = "0x47E3840", VA = "0x47E3840")]
	public static int3x2 operator --(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A98")]
	[Address(RVA = "0x47E38A0", Offset = "0x47E38A0", VA = "0x47E38A0")]
	public static bool3x2 operator <(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A99")]
	[Address(RVA = "0x47E3930", Offset = "0x47E3930", VA = "0x47E3930")]
	public static bool3x2 operator <(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A9A")]
	[Address(RVA = "0x47E39A0", Offset = "0x47E39A0", VA = "0x47E39A0")]
	public static bool3x2 operator <(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A9B")]
	[Address(RVA = "0x47E3A10", Offset = "0x47E3A10", VA = "0x47E3A10")]
	public static bool3x2 operator <=(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A9C")]
	[Address(RVA = "0x47E3AA0", Offset = "0x47E3AA0", VA = "0x47E3AA0")]
	public static bool3x2 operator <=(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A9D")]
	[Address(RVA = "0x47E3B10", Offset = "0x47E3B10", VA = "0x47E3B10")]
	public static bool3x2 operator <=(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A9E")]
	[Address(RVA = "0x47E3B80", Offset = "0x47E3B80", VA = "0x47E3B80")]
	public static bool3x2 operator >(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A9F")]
	[Address(RVA = "0x47E3C10", Offset = "0x47E3C10", VA = "0x47E3C10")]
	public static bool3x2 operator >(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA0")]
	[Address(RVA = "0x47E3C80", Offset = "0x47E3C80", VA = "0x47E3C80")]
	public static bool3x2 operator >(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA1")]
	[Address(RVA = "0x47E3CF0", Offset = "0x47E3CF0", VA = "0x47E3CF0")]
	public static bool3x2 operator >=(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA2")]
	[Address(RVA = "0x47E3D80", Offset = "0x47E3D80", VA = "0x47E3D80")]
	public static bool3x2 operator >=(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA3")]
	[Address(RVA = "0x47E3DF0", Offset = "0x47E3DF0", VA = "0x47E3DF0")]
	public static bool3x2 operator >=(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA4")]
	[Address(RVA = "0x47E3E60", Offset = "0x47E3E60", VA = "0x47E3E60")]
	public static int3x2 operator -(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA5")]
	[Address(RVA = "0x47E3EB0", Offset = "0x47E3EB0", VA = "0x47E3EB0")]
	public static int3x2 operator +(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA6")]
	[Address(RVA = "0x47E3EE0", Offset = "0x47E3EE0", VA = "0x47E3EE0")]
	public static int3x2 operator <<(int3x2 x, int n)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA7")]
	[Address(RVA = "0x47E3F40", Offset = "0x47E3F40", VA = "0x47E3F40")]
	public static int3x2 operator >>(int3x2 x, int n)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA8")]
	[Address(RVA = "0x47E3FA0", Offset = "0x47E3FA0", VA = "0x47E3FA0")]
	public static bool3x2 operator ==(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA9")]
	[Address(RVA = "0x47E4030", Offset = "0x47E4030", VA = "0x47E4030")]
	public static bool3x2 operator ==(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AAA")]
	[Address(RVA = "0x47E40A0", Offset = "0x47E40A0", VA = "0x47E40A0")]
	public static bool3x2 operator ==(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AAB")]
	[Address(RVA = "0x47E4110", Offset = "0x47E4110", VA = "0x47E4110")]
	public static bool3x2 operator !=(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AAC")]
	[Address(RVA = "0x47E41A0", Offset = "0x47E41A0", VA = "0x47E41A0")]
	public static bool3x2 operator !=(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AAD")]
	[Address(RVA = "0x47E4210", Offset = "0x47E4210", VA = "0x47E4210")]
	public static bool3x2 operator !=(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AAE")]
	[Address(RVA = "0x47E4280", Offset = "0x47E4280", VA = "0x47E4280")]
	public static int3x2 operator ~(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AAF")]
	[Address(RVA = "0x47E42B0", Offset = "0x47E42B0", VA = "0x47E42B0")]
	public static int3x2 operator &(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB0")]
	[Address(RVA = "0x47E42F0", Offset = "0x47E42F0", VA = "0x47E42F0")]
	public static int3x2 operator &(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB1")]
	[Address(RVA = "0x47E4340", Offset = "0x47E4340", VA = "0x47E4340")]
	public static int3x2 operator &(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB2")]
	[Address(RVA = "0x47E4390", Offset = "0x47E4390", VA = "0x47E4390")]
	public static int3x2 operator |(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB3")]
	[Address(RVA = "0x47E43D0", Offset = "0x47E43D0", VA = "0x47E43D0")]
	public static int3x2 operator |(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB4")]
	[Address(RVA = "0x47E4420", Offset = "0x47E4420", VA = "0x47E4420")]
	public static int3x2 operator |(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB5")]
	[Address(RVA = "0x47E4470", Offset = "0x47E4470", VA = "0x47E4470")]
	public static int3x2 operator ^(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB6")]
	[Address(RVA = "0x47E44B0", Offset = "0x47E44B0", VA = "0x47E44B0")]
	public static int3x2 operator ^(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB7")]
	[Address(RVA = "0x47E4500", Offset = "0x47E4500", VA = "0x47E4500")]
	public static int3x2 operator ^(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB9")]
	[Address(RVA = "0x47E4560", Offset = "0x47E4560", VA = "0x47E4560", Slot = "4")]
	public bool Equals(int3x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001ABA")]
	[Address(RVA = "0x47E45A0", Offset = "0x47E45A0", VA = "0x47E45A0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ABB")]
	[Address(RVA = "0x47E4630", Offset = "0x47E4630", VA = "0x47E4630", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ABC")]
	[Address(RVA = "0x47E46A0", Offset = "0x47E46A0", VA = "0x47E46A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ABD")]
	[Address(RVA = "0x47E4910", Offset = "0x47E4910", VA = "0x47E4910", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
