// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float2x2
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
[Token(Token = "0x200002A")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float2x2 : IEquatable<float2x2>, IFormattable
{
	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x0")]
	public float2 c0;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x8")]
	public float2 c1;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float2x2 identity;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x10")]
	public static readonly float2x2 zero;

	[Token(Token = "0x170003F8")]
	public unsafe ref float2 this[int index]
	{
		[Token(Token = "0x60010B7")]
		[Address(RVA = "0x4AB0FA0", Offset = "0x4AB0FA0", VA = "0x4AB0FA0")]
		get
		{
			return ref *(float2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107E")]
	[Address(RVA = "0x4AB04B0", Offset = "0x4AB04B0", VA = "0x4AB04B0")]
	public float2x2(float2 c0, float2 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107F")]
	[Address(RVA = "0x4AB04C0", Offset = "0x4AB04C0", VA = "0x4AB04C0")]
	public float2x2(float m00, float m01, float m10, float m11)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001080")]
	[Address(RVA = "0x4AB04E0", Offset = "0x4AB04E0", VA = "0x4AB04E0")]
	public float2x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001081")]
	[Address(RVA = "0x4AB04F0", Offset = "0x4AB04F0", VA = "0x4AB04F0")]
	public float2x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001082")]
	[Address(RVA = "0x4AB0510", Offset = "0x4AB0510", VA = "0x4AB0510")]
	public float2x2(bool2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001083")]
	[Address(RVA = "0x4AB0580", Offset = "0x4AB0580", VA = "0x4AB0580")]
	public float2x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001084")]
	[Address(RVA = "0x4AB0590", Offset = "0x4AB0590", VA = "0x4AB0590")]
	public float2x2(int2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001085")]
	[Address(RVA = "0x4AB05C0", Offset = "0x4AB05C0", VA = "0x4AB05C0")]
	public float2x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001086")]
	[Address(RVA = "0x4AB05E0", Offset = "0x4AB05E0", VA = "0x4AB05E0")]
	public float2x2(uint2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001087")]
	[Address(RVA = "0x4AB0620", Offset = "0x4AB0620", VA = "0x4AB0620")]
	public float2x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001088")]
	[Address(RVA = "0x4AB0630", Offset = "0x4AB0630", VA = "0x4AB0630")]
	public float2x2(double2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001089")]
	[Address(RVA = "0x4AB0650", Offset = "0x4AB0650", VA = "0x4AB0650")]
	public static implicit operator float2x2(float v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600108A")]
	[Address(RVA = "0x4AB0660", Offset = "0x4AB0660", VA = "0x4AB0660")]
	public static explicit operator float2x2(bool v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600108B")]
	[Address(RVA = "0x4AB0680", Offset = "0x4AB0680", VA = "0x4AB0680")]
	public static explicit operator float2x2(bool2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600108C")]
	[Address(RVA = "0x4AB06E0", Offset = "0x4AB06E0", VA = "0x4AB06E0")]
	public static implicit operator float2x2(int v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600108D")]
	[Address(RVA = "0x4AB06F0", Offset = "0x4AB06F0", VA = "0x4AB06F0")]
	public static implicit operator float2x2(int2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600108E")]
	[Address(RVA = "0x4AB0720", Offset = "0x4AB0720", VA = "0x4AB0720")]
	public static implicit operator float2x2(uint v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600108F")]
	[Address(RVA = "0x4AB0740", Offset = "0x4AB0740", VA = "0x4AB0740")]
	public static implicit operator float2x2(uint2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001090")]
	[Address(RVA = "0x4AB0780", Offset = "0x4AB0780", VA = "0x4AB0780")]
	public static explicit operator float2x2(double v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001091")]
	[Address(RVA = "0x4AB0790", Offset = "0x4AB0790", VA = "0x4AB0790")]
	public static explicit operator float2x2(double2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001092")]
	[Address(RVA = "0x4AB07A0", Offset = "0x4AB07A0", VA = "0x4AB07A0")]
	public static float2x2 operator *(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001093")]
	[Address(RVA = "0x4AB07B0", Offset = "0x4AB07B0", VA = "0x4AB07B0")]
	public static float2x2 operator *(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001094")]
	[Address(RVA = "0x4AB07C0", Offset = "0x4AB07C0", VA = "0x4AB07C0")]
	public static float2x2 operator *(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001095")]
	[Address(RVA = "0x4AB07E0", Offset = "0x4AB07E0", VA = "0x4AB07E0")]
	public static float2x2 operator +(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001096")]
	[Address(RVA = "0x4AB07F0", Offset = "0x4AB07F0", VA = "0x4AB07F0")]
	public static float2x2 operator +(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001097")]
	[Address(RVA = "0x4AB0800", Offset = "0x4AB0800", VA = "0x4AB0800")]
	public static float2x2 operator +(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001098")]
	[Address(RVA = "0x4AB0820", Offset = "0x4AB0820", VA = "0x4AB0820")]
	public static float2x2 operator -(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001099")]
	[Address(RVA = "0x4AB0830", Offset = "0x4AB0830", VA = "0x4AB0830")]
	public static float2x2 operator -(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600109A")]
	[Address(RVA = "0x4AB0840", Offset = "0x4AB0840", VA = "0x4AB0840")]
	public static float2x2 operator -(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600109B")]
	[Address(RVA = "0x4AB0860", Offset = "0x4AB0860", VA = "0x4AB0860")]
	public static float2x2 operator /(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600109C")]
	[Address(RVA = "0x4AB0870", Offset = "0x4AB0870", VA = "0x4AB0870")]
	public static float2x2 operator /(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600109D")]
	[Address(RVA = "0x4AB0880", Offset = "0x4AB0880", VA = "0x4AB0880")]
	public static float2x2 operator /(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600109E")]
	[Address(RVA = "0x4AB08A0", Offset = "0x4AB08A0", VA = "0x4AB08A0")]
	public static float2x2 operator %(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600109F")]
	[Address(RVA = "0x4AB0940", Offset = "0x4AB0940", VA = "0x4AB0940")]
	public static float2x2 operator %(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010A0")]
	[Address(RVA = "0x4AB09D0", Offset = "0x4AB09D0", VA = "0x4AB09D0")]
	public static float2x2 operator %(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010A1")]
	[Address(RVA = "0x4AB0A60", Offset = "0x4AB0A60", VA = "0x4AB0A60")]
	public static float2x2 operator ++(float2x2 val)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010A2")]
	[Address(RVA = "0x4AB0A70", Offset = "0x4AB0A70", VA = "0x4AB0A70")]
	public static float2x2 operator --(float2x2 val)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010A3")]
	[Address(RVA = "0x4AB0A80", Offset = "0x4AB0A80", VA = "0x4AB0A80")]
	public static bool2x2 operator <(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010A4")]
	[Address(RVA = "0x4AB0AC0", Offset = "0x4AB0AC0", VA = "0x4AB0AC0")]
	public static bool2x2 operator <(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010A5")]
	[Address(RVA = "0x4AB0B00", Offset = "0x4AB0B00", VA = "0x4AB0B00")]
	public static bool2x2 operator <(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010A6")]
	[Address(RVA = "0x4AB0B40", Offset = "0x4AB0B40", VA = "0x4AB0B40")]
	public static bool2x2 operator <=(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010A7")]
	[Address(RVA = "0x4AB0B80", Offset = "0x4AB0B80", VA = "0x4AB0B80")]
	public static bool2x2 operator <=(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010A8")]
	[Address(RVA = "0x4AB0BC0", Offset = "0x4AB0BC0", VA = "0x4AB0BC0")]
	public static bool2x2 operator <=(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010A9")]
	[Address(RVA = "0x4AB0C00", Offset = "0x4AB0C00", VA = "0x4AB0C00")]
	public static bool2x2 operator >(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010AA")]
	[Address(RVA = "0x4AB0C40", Offset = "0x4AB0C40", VA = "0x4AB0C40")]
	public static bool2x2 operator >(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010AB")]
	[Address(RVA = "0x4AB0C80", Offset = "0x4AB0C80", VA = "0x4AB0C80")]
	public static bool2x2 operator >(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010AC")]
	[Address(RVA = "0x4AB0CC0", Offset = "0x4AB0CC0", VA = "0x4AB0CC0")]
	public static bool2x2 operator >=(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010AD")]
	[Address(RVA = "0x4AB0D00", Offset = "0x4AB0D00", VA = "0x4AB0D00")]
	public static bool2x2 operator >=(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010AE")]
	[Address(RVA = "0x4AB0D40", Offset = "0x4AB0D40", VA = "0x4AB0D40")]
	public static bool2x2 operator >=(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010AF")]
	[Address(RVA = "0x4AB0D80", Offset = "0x4AB0D80", VA = "0x4AB0D80")]
	public static float2x2 operator -(float2x2 val)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010B0")]
	[Address(RVA = "0x4AB0D90", Offset = "0x4AB0D90", VA = "0x4AB0D90")]
	public static float2x2 operator +(float2x2 val)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010B1")]
	[Address(RVA = "0x4AB0DA0", Offset = "0x4AB0DA0", VA = "0x4AB0DA0")]
	public static bool2x2 operator ==(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010B2")]
	[Address(RVA = "0x4AB0E00", Offset = "0x4AB0E00", VA = "0x4AB0E00")]
	public static bool2x2 operator ==(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x4AB0E50", Offset = "0x4AB0E50", VA = "0x4AB0E50")]
	public static bool2x2 operator ==(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x4AB0EA0", Offset = "0x4AB0EA0", VA = "0x4AB0EA0")]
	public static bool2x2 operator !=(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x4AB0F00", Offset = "0x4AB0F00", VA = "0x4AB0F00")]
	public static bool2x2 operator !=(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x4AB0F50", Offset = "0x4AB0F50", VA = "0x4AB0F50")]
	public static bool2x2 operator !=(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x4AB0FB0", Offset = "0x4AB0FB0", VA = "0x4AB0FB0", Slot = "4")]
	public bool Equals(float2x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B9")]
	[Address(RVA = "0x4AB0FF0", Offset = "0x4AB0FF0", VA = "0x4AB0FF0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x4AB1090", Offset = "0x4AB1090", VA = "0x4AB1090", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010BB")]
	[Address(RVA = "0x4AB1110", Offset = "0x4AB1110", VA = "0x4AB1110", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010BC")]
	[Address(RVA = "0x4AB12E0", Offset = "0x4AB12E0", VA = "0x4AB12E0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010BD")]
	[Address(RVA = "0x4AB14B0", Offset = "0x4AB14B0", VA = "0x4AB14B0")]
	public static float2x2 Rotate(float angle)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x4AB15A0", Offset = "0x4AB15A0", VA = "0x4AB15A0")]
	public static float2x2 Scale(float s)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010BF")]
	[Address(RVA = "0x4AB15C0", Offset = "0x4AB15C0", VA = "0x4AB15C0")]
	public static float2x2 Scale(float x, float y)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x4AB15E0", Offset = "0x4AB15E0", VA = "0x4AB15E0")]
	public static float2x2 Scale(float2 v)
	{
		return default(float2x2);
	}
}
