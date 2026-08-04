// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.double3x3
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
[Token(Token = "0x2000021")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double3x3 : IEquatable<double3x3>, IFormattable
{
	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x0")]
	public double3 c0;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x18")]
	public double3 c1;

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x30")]
	public double3 c2;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double3x3 identity;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x48")]
	public static readonly double3x3 zero;

	[Token(Token = "0x17000285")]
	public unsafe ref double3 this[int index]
	{
		[Token(Token = "0x6000D3E")]
		[Address(RVA = "0x4A97AC0", Offset = "0x4A97AC0", VA = "0x4A97AC0")]
		get
		{
			return ref *(double3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x4A95970", Offset = "0x4A95970", VA = "0x4A95970")]
	public double3x3(double3 c0, double3 c1, double3 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x4A959B0", Offset = "0x4A959B0", VA = "0x4A959B0")]
	public double3x3(double m00, double m01, double m02, double m10, double m11, double m12, double m20, double m21, double m22)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x4A959F0", Offset = "0x4A959F0", VA = "0x4A959F0")]
	public double3x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x4A95A20", Offset = "0x4A95A20", VA = "0x4A95A20")]
	public double3x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x4A95A60", Offset = "0x4A95A60", VA = "0x4A95A60")]
	public double3x3(bool3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D0A")]
	[Address(RVA = "0x4A95BA0", Offset = "0x4A95BA0", VA = "0x4A95BA0")]
	public double3x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x4A95BE0", Offset = "0x4A95BE0", VA = "0x4A95BE0")]
	public double3x3(int3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x4A95C70", Offset = "0x4A95C70", VA = "0x4A95C70")]
	public double3x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x4A95CB0", Offset = "0x4A95CB0", VA = "0x4A95CB0")]
	public double3x3(uint3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x4A95D50", Offset = "0x4A95D50", VA = "0x4A95D50")]
	public double3x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x4A95D90", Offset = "0x4A95D90", VA = "0x4A95D90")]
	public double3x3(float3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x4A95DE0", Offset = "0x4A95DE0", VA = "0x4A95DE0")]
	public static implicit operator double3x3(double v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x4A95E10", Offset = "0x4A95E10", VA = "0x4A95E10")]
	public static explicit operator double3x3(bool v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x4A95E60", Offset = "0x4A95E60", VA = "0x4A95E60")]
	public static explicit operator double3x3(bool3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D13")]
	[Address(RVA = "0x4A95FB0", Offset = "0x4A95FB0", VA = "0x4A95FB0")]
	public static implicit operator double3x3(int v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x4A95FF0", Offset = "0x4A95FF0", VA = "0x4A95FF0")]
	public static implicit operator double3x3(int3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x4A96080", Offset = "0x4A96080", VA = "0x4A96080")]
	public static implicit operator double3x3(uint v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x4A960C0", Offset = "0x4A960C0", VA = "0x4A960C0")]
	public static implicit operator double3x3(uint3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x4A96160", Offset = "0x4A96160", VA = "0x4A96160")]
	public static implicit operator double3x3(float v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x4A961A0", Offset = "0x4A961A0", VA = "0x4A961A0")]
	public static implicit operator double3x3(float3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x4A96200", Offset = "0x4A96200", VA = "0x4A96200")]
	public static double3x3 operator *(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x4A96260", Offset = "0x4A96260", VA = "0x4A96260")]
	public static double3x3 operator *(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x4A962B0", Offset = "0x4A962B0", VA = "0x4A962B0")]
	public static double3x3 operator *(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x4A96300", Offset = "0x4A96300", VA = "0x4A96300")]
	public static double3x3 operator +(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x4A96360", Offset = "0x4A96360", VA = "0x4A96360")]
	public static double3x3 operator +(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x4A963B0", Offset = "0x4A963B0", VA = "0x4A963B0")]
	public static double3x3 operator +(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x4A96400", Offset = "0x4A96400", VA = "0x4A96400")]
	public static double3x3 operator -(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x4A96470", Offset = "0x4A96470", VA = "0x4A96470")]
	public static double3x3 operator -(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x4A964D0", Offset = "0x4A964D0", VA = "0x4A964D0")]
	public static double3x3 operator -(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x4A96520", Offset = "0x4A96520", VA = "0x4A96520")]
	public static double3x3 operator /(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x4A96590", Offset = "0x4A96590", VA = "0x4A96590")]
	public static double3x3 operator /(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x4A965F0", Offset = "0x4A965F0", VA = "0x4A965F0")]
	public static double3x3 operator /(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x4A96640", Offset = "0x4A96640", VA = "0x4A96640")]
	public static double3x3 operator %(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x4A96840", Offset = "0x4A96840", VA = "0x4A96840")]
	public static double3x3 operator %(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x4A969D0", Offset = "0x4A969D0", VA = "0x4A969D0")]
	public static double3x3 operator %(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x4A96B60", Offset = "0x4A96B60", VA = "0x4A96B60")]
	public static double3x3 operator ++(double3x3 val)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x4A96BD0", Offset = "0x4A96BD0", VA = "0x4A96BD0")]
	public static double3x3 operator --(double3x3 val)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x4A96C40", Offset = "0x4A96C40", VA = "0x4A96C40")]
	public static bool3x3 operator <(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x4A96D20", Offset = "0x4A96D20", VA = "0x4A96D20")]
	public static bool3x3 operator <(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x4A96DB0", Offset = "0x4A96DB0", VA = "0x4A96DB0")]
	public static bool3x3 operator <(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x4A96E60", Offset = "0x4A96E60", VA = "0x4A96E60")]
	public static bool3x3 operator <=(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x4A96F40", Offset = "0x4A96F40", VA = "0x4A96F40")]
	public static bool3x3 operator <=(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x4A96FD0", Offset = "0x4A96FD0", VA = "0x4A96FD0")]
	public static bool3x3 operator <=(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x4A97080", Offset = "0x4A97080", VA = "0x4A97080")]
	public static bool3x3 operator >(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x4A97160", Offset = "0x4A97160", VA = "0x4A97160")]
	public static bool3x3 operator >(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x4A97210", Offset = "0x4A97210", VA = "0x4A97210")]
	public static bool3x3 operator >(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x4A972A0", Offset = "0x4A972A0", VA = "0x4A972A0")]
	public static bool3x3 operator >=(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D34")]
	[Address(RVA = "0x4A97380", Offset = "0x4A97380", VA = "0x4A97380")]
	public static bool3x3 operator >=(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x4A97430", Offset = "0x4A97430", VA = "0x4A97430")]
	public static bool3x3 operator >=(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x4A974C0", Offset = "0x4A974C0", VA = "0x4A974C0")]
	public static double3x3 operator -(double3x3 val)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D37")]
	[Address(RVA = "0x4A97510", Offset = "0x4A97510", VA = "0x4A97510")]
	public static double3x3 operator +(double3x3 val)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D38")]
	[Address(RVA = "0x4A97540", Offset = "0x4A97540", VA = "0x4A97540")]
	public static bool3x3 operator ==(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x4A97640", Offset = "0x4A97640", VA = "0x4A97640")]
	public static bool3x3 operator ==(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x4A97720", Offset = "0x4A97720", VA = "0x4A97720")]
	public static bool3x3 operator ==(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x4A97800", Offset = "0x4A97800", VA = "0x4A97800")]
	public static bool3x3 operator !=(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x4A97900", Offset = "0x4A97900", VA = "0x4A97900")]
	public static bool3x3 operator !=(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x4A979E0", Offset = "0x4A979E0", VA = "0x4A979E0")]
	public static bool3x3 operator !=(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x4A97AD0", Offset = "0x4A97AD0", VA = "0x4A97AD0", Slot = "4")]
	public bool Equals(double3x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x4A97B60", Offset = "0x4A97B60", VA = "0x4A97B60", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x4A97C50", Offset = "0x4A97C50", VA = "0x4A97C50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D42")]
	[Address(RVA = "0x4A97D70", Offset = "0x4A97D70", VA = "0x4A97D70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x4A98100", Offset = "0x4A98100", VA = "0x4A98100", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
