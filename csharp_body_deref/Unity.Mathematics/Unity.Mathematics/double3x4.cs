using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000025")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double3x4 : IEquatable<double3x4>, IFormattable
{
	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x0")]
	public double3 c0;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x18")]
	public double3 c1;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x30")]
	public double3 c2;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x48")]
	public double3 c3;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double3x4 zero;

	[Token(Token = "0x17000286")]
	public unsafe ref double3 this[int index]
	{
		[Token(Token = "0x6000DA6")]
		[Address(RVA = "0x47981B0", Offset = "0x47981B0", VA = "0x47981B0")]
		get
		{
			return ref *(double3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x4795650", Offset = "0x4795650", VA = "0x4795650")]
	public double3x4(double3 c0, double3 c1, double3 c2, double3 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x47956A0", Offset = "0x47956A0", VA = "0x47956A0")]
	public double3x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x4795700", Offset = "0x4795700", VA = "0x4795700")]
	public double3x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x4795740", Offset = "0x4795740", VA = "0x4795740")]
	public double3x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D71")]
	[Address(RVA = "0x4795790", Offset = "0x4795790", VA = "0x4795790")]
	public double3x4(bool3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D72")]
	[Address(RVA = "0x4795930", Offset = "0x4795930", VA = "0x4795930")]
	public double3x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D73")]
	[Address(RVA = "0x4795970", Offset = "0x4795970", VA = "0x4795970")]
	public double3x4(int3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D74")]
	[Address(RVA = "0x4795A30", Offset = "0x4795A30", VA = "0x4795A30")]
	public double3x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D75")]
	[Address(RVA = "0x4795A80", Offset = "0x4795A80", VA = "0x4795A80")]
	public double3x4(uint3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D76")]
	[Address(RVA = "0x4795B50", Offset = "0x4795B50", VA = "0x4795B50")]
	public double3x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D77")]
	[Address(RVA = "0x4795B90", Offset = "0x4795B90", VA = "0x4795B90")]
	public double3x4(float3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D78")]
	[Address(RVA = "0x4795C00", Offset = "0x4795C00", VA = "0x4795C00")]
	public static implicit operator double3x4(double v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x4795C40", Offset = "0x4795C40", VA = "0x4795C40")]
	public static explicit operator double3x4(bool v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x4795C90", Offset = "0x4795C90", VA = "0x4795C90")]
	public static explicit operator double3x4(bool3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x4795E40", Offset = "0x4795E40", VA = "0x4795E40")]
	public static implicit operator double3x4(int v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x4795E90", Offset = "0x4795E90", VA = "0x4795E90")]
	public static implicit operator double3x4(int3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x4795F40", Offset = "0x4795F40", VA = "0x4795F40")]
	public static implicit operator double3x4(uint v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x4795F90", Offset = "0x4795F90", VA = "0x4795F90")]
	public static implicit operator double3x4(uint3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x4796070", Offset = "0x4796070", VA = "0x4796070")]
	public static implicit operator double3x4(float v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x47960C0", Offset = "0x47960C0", VA = "0x47960C0")]
	public static implicit operator double3x4(float3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x4796130", Offset = "0x4796130", VA = "0x4796130")]
	public static double3x4 operator *(double3x4 lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x47961B0", Offset = "0x47961B0", VA = "0x47961B0")]
	public static double3x4 operator *(double3x4 lhs, double rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x4796210", Offset = "0x4796210", VA = "0x4796210")]
	public static double3x4 operator *(double lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D84")]
	[Address(RVA = "0x4796270", Offset = "0x4796270", VA = "0x4796270")]
	public static double3x4 operator +(double3x4 lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D85")]
	[Address(RVA = "0x47962F0", Offset = "0x47962F0", VA = "0x47962F0")]
	public static double3x4 operator +(double3x4 lhs, double rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D86")]
	[Address(RVA = "0x4796350", Offset = "0x4796350", VA = "0x4796350")]
	public static double3x4 operator +(double lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x47963B0", Offset = "0x47963B0", VA = "0x47963B0")]
	public static double3x4 operator -(double3x4 lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D88")]
	[Address(RVA = "0x4796430", Offset = "0x4796430", VA = "0x4796430")]
	public static double3x4 operator -(double3x4 lhs, double rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D89")]
	[Address(RVA = "0x47964A0", Offset = "0x47964A0", VA = "0x47964A0")]
	public static double3x4 operator -(double lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x4796500", Offset = "0x4796500", VA = "0x4796500")]
	public static double3x4 operator /(double3x4 lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x4796580", Offset = "0x4796580", VA = "0x4796580")]
	public static double3x4 operator /(double3x4 lhs, double rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x47965F0", Offset = "0x47965F0", VA = "0x47965F0")]
	public static double3x4 operator /(double lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8D")]
	[Address(RVA = "0x4796650", Offset = "0x4796650", VA = "0x4796650")]
	public static double3x4 operator %(double3x4 lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8E")]
	[Address(RVA = "0x47968F0", Offset = "0x47968F0", VA = "0x47968F0")]
	public static double3x4 operator %(double3x4 lhs, double rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8F")]
	[Address(RVA = "0x4796B20", Offset = "0x4796B20", VA = "0x4796B20")]
	public static double3x4 operator %(double lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x4796D40", Offset = "0x4796D40", VA = "0x4796D40")]
	public static double3x4 operator ++(double3x4 val)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x4796DC0", Offset = "0x4796DC0", VA = "0x4796DC0")]
	public static double3x4 operator --(double3x4 val)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x4796E40", Offset = "0x4796E40", VA = "0x4796E40")]
	public static bool3x4 operator <(double3x4 lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x4796F70", Offset = "0x4796F70", VA = "0x4796F70")]
	public static bool3x4 operator <(double3x4 lhs, double rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x4797030", Offset = "0x4797030", VA = "0x4797030")]
	public static bool3x4 operator <(double lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x4797120", Offset = "0x4797120", VA = "0x4797120")]
	public static bool3x4 operator <=(double3x4 lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x4797250", Offset = "0x4797250", VA = "0x4797250")]
	public static bool3x4 operator <=(double3x4 lhs, double rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x4797310", Offset = "0x4797310", VA = "0x4797310")]
	public static bool3x4 operator <=(double lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x4797400", Offset = "0x4797400", VA = "0x4797400")]
	public static bool3x4 operator >(double3x4 lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x4797530", Offset = "0x4797530", VA = "0x4797530")]
	public static bool3x4 operator >(double3x4 lhs, double rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x4797620", Offset = "0x4797620", VA = "0x4797620")]
	public static bool3x4 operator >(double lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x47976E0", Offset = "0x47976E0", VA = "0x47976E0")]
	public static bool3x4 operator >=(double3x4 lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x4797810", Offset = "0x4797810", VA = "0x4797810")]
	public static bool3x4 operator >=(double3x4 lhs, double rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x4797900", Offset = "0x4797900", VA = "0x4797900")]
	public static bool3x4 operator >=(double lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x47979C0", Offset = "0x47979C0", VA = "0x47979C0")]
	public static double3x4 operator -(double3x4 val)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x4797A10", Offset = "0x4797A10", VA = "0x4797A10")]
	public static double3x4 operator +(double3x4 val)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x4797A50", Offset = "0x4797A50", VA = "0x4797A50")]
	public static bool3x4 operator ==(double3x4 lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x4797BC0", Offset = "0x4797BC0", VA = "0x4797BC0")]
	public static bool3x4 operator ==(double3x4 lhs, double rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x4797CE0", Offset = "0x4797CE0", VA = "0x4797CE0")]
	public static bool3x4 operator ==(double lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x4797E00", Offset = "0x4797E00", VA = "0x4797E00")]
	public static bool3x4 operator !=(double3x4 lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x4797F70", Offset = "0x4797F70", VA = "0x4797F70")]
	public static bool3x4 operator !=(double3x4 lhs, double rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x4798090", Offset = "0x4798090", VA = "0x4798090")]
	public static bool3x4 operator !=(double lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x47981C0", Offset = "0x47981C0", VA = "0x47981C0", Slot = "4")]
	public bool Equals(double3x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x4798290", Offset = "0x4798290", VA = "0x4798290", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x47983C0", Offset = "0x47983C0", VA = "0x47983C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x4798550", Offset = "0x4798550", VA = "0x4798550", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x47989E0", Offset = "0x47989E0", VA = "0x47989E0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
