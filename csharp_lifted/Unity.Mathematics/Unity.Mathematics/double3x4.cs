// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.double3x4
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
[Token(Token = "0x2000023")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double3x4 : IEquatable<double3x4>, IFormattable
{
	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x0")]
	public double3 c0;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x18")]
	public double3 c1;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x30")]
	public double3 c2;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x48")]
	public double3 c3;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double3x4 zero;

	[Token(Token = "0x17000286")]
	public unsafe ref double3 this[int index]
	{
		[Token(Token = "0x6000DF1")]
		[Address(RVA = "0x64305F0", Offset = "0x642F5F0", VA = "0x64305F0")]
		get
		{
			return ref *(double3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x642D940", Offset = "0x642C940", VA = "0x642D940")]
	public double3x4(double3 c0, double3 c1, double3 c2, double3 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x642D990", Offset = "0x642C990", VA = "0x642D990")]
	public double3x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x642D9F0", Offset = "0x642C9F0", VA = "0x642D9F0")]
	public double3x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x642DA30", Offset = "0x642CA30", VA = "0x642DA30")]
	public double3x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x642DB40", Offset = "0x642CB40", VA = "0x642DB40")]
	public double3x4(bool3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x642DD00", Offset = "0x642CD00", VA = "0x642DD00")]
	public double3x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x642DD40", Offset = "0x642CD40", VA = "0x642DD40")]
	public double3x4(int3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x642DE00", Offset = "0x642CE00", VA = "0x642DE00")]
	public double3x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x642DE50", Offset = "0x642CE50", VA = "0x642DE50")]
	public double3x4(uint3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x642DF20", Offset = "0x642CF20", VA = "0x642DF20")]
	public double3x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x642DF60", Offset = "0x642CF60", VA = "0x642DF60")]
	public double3x4(float3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x642DFD0", Offset = "0x642CFD0", VA = "0x642DFD0")]
	public static implicit operator double3x4(double v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x642E010", Offset = "0x642D010", VA = "0x642E010")]
	public static explicit operator double3x4(bool v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x642E0F0", Offset = "0x642D0F0", VA = "0x642E0F0")]
	public static explicit operator double3x4(bool3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x642E2C0", Offset = "0x642D2C0", VA = "0x642E2C0")]
	public static implicit operator double3x4(int v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x642E310", Offset = "0x642D310", VA = "0x642E310")]
	public static implicit operator double3x4(int3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x642E3C0", Offset = "0x642D3C0", VA = "0x642E3C0")]
	public static implicit operator double3x4(uint v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x642E410", Offset = "0x642D410", VA = "0x642E410")]
	public static implicit operator double3x4(uint3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x642E4F0", Offset = "0x642D4F0", VA = "0x642E4F0")]
	public static implicit operator double3x4(float v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x642E540", Offset = "0x642D540", VA = "0x642E540")]
	public static implicit operator double3x4(float3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x642E5B0", Offset = "0x642D5B0", VA = "0x642E5B0")]
	public static double3x4 operator *(double3x4 lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x642E630", Offset = "0x642D630", VA = "0x642E630")]
	public static double3x4 operator *(double3x4 lhs, double rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x642E690", Offset = "0x642D690", VA = "0x642E690")]
	public static double3x4 operator *(double lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x642E6F0", Offset = "0x642D6F0", VA = "0x642E6F0")]
	public static double3x4 operator +(double3x4 lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x642E770", Offset = "0x642D770", VA = "0x642E770")]
	public static double3x4 operator +(double3x4 lhs, double rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x642E7D0", Offset = "0x642D7D0", VA = "0x642E7D0")]
	public static double3x4 operator +(double lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x642E830", Offset = "0x642D830", VA = "0x642E830")]
	public static double3x4 operator -(double3x4 lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x642E8B0", Offset = "0x642D8B0", VA = "0x642E8B0")]
	public static double3x4 operator -(double3x4 lhs, double rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x642E920", Offset = "0x642D920", VA = "0x642E920")]
	public static double3x4 operator -(double lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x642E980", Offset = "0x642D980", VA = "0x642E980")]
	public static double3x4 operator /(double3x4 lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x642EA00", Offset = "0x642DA00", VA = "0x642EA00")]
	public static double3x4 operator /(double3x4 lhs, double rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x642EA70", Offset = "0x642DA70", VA = "0x642EA70")]
	public static double3x4 operator /(double lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x642EAD0", Offset = "0x642DAD0", VA = "0x642EAD0")]
	public static double3x4 operator %(double3x4 lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x642ED70", Offset = "0x642DD70", VA = "0x642ED70")]
	public static double3x4 operator %(double3x4 lhs, double rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x642EFA0", Offset = "0x642DFA0", VA = "0x642EFA0")]
	public static double3x4 operator %(double lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x642F1C0", Offset = "0x642E1C0", VA = "0x642F1C0")]
	public static double3x4 operator ++(double3x4 val)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x642F230", Offset = "0x642E230", VA = "0x642F230")]
	public static double3x4 operator --(double3x4 val)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x642F2A0", Offset = "0x642E2A0", VA = "0x642F2A0")]
	public static bool3x4 operator <(double3x4 lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x642F3D0", Offset = "0x642E3D0", VA = "0x642F3D0")]
	public static bool3x4 operator <(double3x4 lhs, double rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x642F490", Offset = "0x642E490", VA = "0x642F490")]
	public static bool3x4 operator <(double lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x642F580", Offset = "0x642E580", VA = "0x642F580")]
	public static bool3x4 operator <=(double3x4 lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x642F6B0", Offset = "0x642E6B0", VA = "0x642F6B0")]
	public static bool3x4 operator <=(double3x4 lhs, double rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x642F770", Offset = "0x642E770", VA = "0x642F770")]
	public static bool3x4 operator <=(double lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x642F860", Offset = "0x642E860", VA = "0x642F860")]
	public static bool3x4 operator >(double3x4 lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x642F990", Offset = "0x642E990", VA = "0x642F990")]
	public static bool3x4 operator >(double3x4 lhs, double rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x642FA80", Offset = "0x642EA80", VA = "0x642FA80")]
	public static bool3x4 operator >(double lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x642FB40", Offset = "0x642EB40", VA = "0x642FB40")]
	public static bool3x4 operator >=(double3x4 lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x642FC70", Offset = "0x642EC70", VA = "0x642FC70")]
	public static bool3x4 operator >=(double3x4 lhs, double rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x642FD60", Offset = "0x642ED60", VA = "0x642FD60")]
	public static bool3x4 operator >=(double lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x642FE20", Offset = "0x642EE20", VA = "0x642FE20")]
	public static double3x4 operator -(double3x4 val)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x642FE70", Offset = "0x642EE70", VA = "0x642FE70")]
	public static double3x4 operator +(double3x4 val)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x642FEB0", Offset = "0x642EEB0", VA = "0x642FEB0")]
	public static bool3x4 operator ==(double3x4 lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x6430010", Offset = "0x642F010", VA = "0x6430010")]
	public static bool3x4 operator ==(double3x4 lhs, double rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x6430130", Offset = "0x642F130", VA = "0x6430130")]
	public static bool3x4 operator ==(double lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x6430250", Offset = "0x642F250", VA = "0x6430250")]
	public static bool3x4 operator !=(double3x4 lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x64303B0", Offset = "0x642F3B0", VA = "0x64303B0")]
	public static bool3x4 operator !=(double3x4 lhs, double rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x64304D0", Offset = "0x642F4D0", VA = "0x64304D0")]
	public static bool3x4 operator !=(double lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x6430600", Offset = "0x642F600", VA = "0x6430600", Slot = "4")]
	public bool Equals(double3x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x64306D0", Offset = "0x642F6D0", VA = "0x64306D0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x6430800", Offset = "0x642F800", VA = "0x6430800", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x6430950", Offset = "0x642F950", VA = "0x6430950", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x6430E10", Offset = "0x642FE10", VA = "0x6430E10", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
