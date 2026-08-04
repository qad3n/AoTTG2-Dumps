// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int2x3
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
[Token(Token = "0x2000041")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int2x3 : IEquatable<int2x3>, IFormattable
{
	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x0")]
	public int2 c0;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x8")]
	public int2 c1;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x10")]
	public int2 c2;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int2x3 zero;

	[Token(Token = "0x170007CE")]
	public unsafe ref int2 this[int index]
	{
		[Token(Token = "0x600192A")]
		[Address(RVA = "0x4AE1460", Offset = "0x4AE1460", VA = "0x4AE1460")]
		get
		{
			return ref *(int2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018E5")]
	[Address(RVA = "0x4ADFB50", Offset = "0x4ADFB50", VA = "0x4ADFB50")]
	public int2x3(int2 c0, int2 c1, int2 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018E6")]
	[Address(RVA = "0x4ADFB60", Offset = "0x4ADFB60", VA = "0x4ADFB60")]
	public int2x3(int m00, int m01, int m02, int m10, int m11, int m12)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018E7")]
	[Address(RVA = "0x4ADFB90", Offset = "0x4ADFB90", VA = "0x4ADFB90")]
	public int2x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018E8")]
	[Address(RVA = "0x4ADFBB0", Offset = "0x4ADFBB0", VA = "0x4ADFBB0")]
	public int2x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018E9")]
	[Address(RVA = "0x4ADFBD0", Offset = "0x4ADFBD0", VA = "0x4ADFBD0")]
	public int2x3(bool2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018EA")]
	[Address(RVA = "0x4ADFC50", Offset = "0x4ADFC50", VA = "0x4ADFC50")]
	public int2x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018EB")]
	[Address(RVA = "0x4ADFC70", Offset = "0x4ADFC70", VA = "0x4ADFC70")]
	public int2x3(uint2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018EC")]
	[Address(RVA = "0x4ADFC90", Offset = "0x4ADFC90", VA = "0x4ADFC90")]
	public int2x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018ED")]
	[Address(RVA = "0x4ADFCB0", Offset = "0x4ADFCB0", VA = "0x4ADFCB0")]
	public int2x3(float2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018EE")]
	[Address(RVA = "0x4ADFD10", Offset = "0x4ADFD10", VA = "0x4ADFD10")]
	public int2x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018EF")]
	[Address(RVA = "0x4ADFD30", Offset = "0x4ADFD30", VA = "0x4ADFD30")]
	public int2x3(double2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F0")]
	[Address(RVA = "0x4ADFD80", Offset = "0x4ADFD80", VA = "0x4ADFD80")]
	public static implicit operator int2x3(int v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F1")]
	[Address(RVA = "0x4ADFDA0", Offset = "0x4ADFDA0", VA = "0x4ADFDA0")]
	public static explicit operator int2x3(bool v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F2")]
	[Address(RVA = "0x4ADFDD0", Offset = "0x4ADFDD0", VA = "0x4ADFDD0")]
	public static explicit operator int2x3(bool2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F3")]
	[Address(RVA = "0x4ADFE50", Offset = "0x4ADFE50", VA = "0x4ADFE50")]
	public static explicit operator int2x3(uint v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F4")]
	[Address(RVA = "0x4ADFE70", Offset = "0x4ADFE70", VA = "0x4ADFE70")]
	public static explicit operator int2x3(uint2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F5")]
	[Address(RVA = "0x4ADFE90", Offset = "0x4ADFE90", VA = "0x4ADFE90")]
	public static explicit operator int2x3(float v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F6")]
	[Address(RVA = "0x4ADFEB0", Offset = "0x4ADFEB0", VA = "0x4ADFEB0")]
	public static explicit operator int2x3(float2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F7")]
	[Address(RVA = "0x4ADFF10", Offset = "0x4ADFF10", VA = "0x4ADFF10")]
	public static explicit operator int2x3(double v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F8")]
	[Address(RVA = "0x4ADFF30", Offset = "0x4ADFF30", VA = "0x4ADFF30")]
	public static explicit operator int2x3(double2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018F9")]
	[Address(RVA = "0x4ADFF80", Offset = "0x4ADFF80", VA = "0x4ADFF80")]
	public static int2x3 operator *(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018FA")]
	[Address(RVA = "0x4AE0000", Offset = "0x4AE0000", VA = "0x4AE0000")]
	public static int2x3 operator *(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018FB")]
	[Address(RVA = "0x4AE0060", Offset = "0x4AE0060", VA = "0x4AE0060")]
	public static int2x3 operator *(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018FC")]
	[Address(RVA = "0x4AE00C0", Offset = "0x4AE00C0", VA = "0x4AE00C0")]
	public static int2x3 operator +(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018FD")]
	[Address(RVA = "0x4AE0120", Offset = "0x4AE0120", VA = "0x4AE0120")]
	public static int2x3 operator +(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018FE")]
	[Address(RVA = "0x4AE0180", Offset = "0x4AE0180", VA = "0x4AE0180")]
	public static int2x3 operator +(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018FF")]
	[Address(RVA = "0x4AE01E0", Offset = "0x4AE01E0", VA = "0x4AE01E0")]
	public static int2x3 operator -(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001900")]
	[Address(RVA = "0x4AE0250", Offset = "0x4AE0250", VA = "0x4AE0250")]
	public static int2x3 operator -(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001901")]
	[Address(RVA = "0x4AE02B0", Offset = "0x4AE02B0", VA = "0x4AE02B0")]
	public static int2x3 operator -(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001902")]
	[Address(RVA = "0x4AE0310", Offset = "0x4AE0310", VA = "0x4AE0310")]
	public static int2x3 operator /(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001903")]
	[Address(RVA = "0x4AE03A0", Offset = "0x4AE03A0", VA = "0x4AE03A0")]
	public static int2x3 operator /(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001904")]
	[Address(RVA = "0x4AE0410", Offset = "0x4AE0410", VA = "0x4AE0410")]
	public static int2x3 operator /(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001905")]
	[Address(RVA = "0x4AE0480", Offset = "0x4AE0480", VA = "0x4AE0480")]
	public static int2x3 operator %(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001906")]
	[Address(RVA = "0x4AE0510", Offset = "0x4AE0510", VA = "0x4AE0510")]
	public static int2x3 operator %(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001907")]
	[Address(RVA = "0x4AE0580", Offset = "0x4AE0580", VA = "0x4AE0580")]
	public static int2x3 operator %(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001908")]
	[Address(RVA = "0x4AE05F0", Offset = "0x4AE05F0", VA = "0x4AE05F0")]
	public static int2x3 operator ++(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001909")]
	[Address(RVA = "0x4AE0650", Offset = "0x4AE0650", VA = "0x4AE0650")]
	public static int2x3 operator --(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190A")]
	[Address(RVA = "0x4AE06B0", Offset = "0x4AE06B0", VA = "0x4AE06B0")]
	public static bool2x3 operator <(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190B")]
	[Address(RVA = "0x4AE0750", Offset = "0x4AE0750", VA = "0x4AE0750")]
	public static bool2x3 operator <(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190C")]
	[Address(RVA = "0x4AE07D0", Offset = "0x4AE07D0", VA = "0x4AE07D0")]
	public static bool2x3 operator <(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190D")]
	[Address(RVA = "0x4AE0850", Offset = "0x4AE0850", VA = "0x4AE0850")]
	public static bool2x3 operator <=(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190E")]
	[Address(RVA = "0x4AE08F0", Offset = "0x4AE08F0", VA = "0x4AE08F0")]
	public static bool2x3 operator <=(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190F")]
	[Address(RVA = "0x4AE0970", Offset = "0x4AE0970", VA = "0x4AE0970")]
	public static bool2x3 operator <=(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001910")]
	[Address(RVA = "0x4AE09F0", Offset = "0x4AE09F0", VA = "0x4AE09F0")]
	public static bool2x3 operator >(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001911")]
	[Address(RVA = "0x4AE0A90", Offset = "0x4AE0A90", VA = "0x4AE0A90")]
	public static bool2x3 operator >(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001912")]
	[Address(RVA = "0x4AE0B10", Offset = "0x4AE0B10", VA = "0x4AE0B10")]
	public static bool2x3 operator >(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001913")]
	[Address(RVA = "0x4AE0B90", Offset = "0x4AE0B90", VA = "0x4AE0B90")]
	public static bool2x3 operator >=(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001914")]
	[Address(RVA = "0x4AE0C30", Offset = "0x4AE0C30", VA = "0x4AE0C30")]
	public static bool2x3 operator >=(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001915")]
	[Address(RVA = "0x4AE0CB0", Offset = "0x4AE0CB0", VA = "0x4AE0CB0")]
	public static bool2x3 operator >=(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001916")]
	[Address(RVA = "0x4AE0D30", Offset = "0x4AE0D30", VA = "0x4AE0D30")]
	public static int2x3 operator -(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001917")]
	[Address(RVA = "0x4AE0D80", Offset = "0x4AE0D80", VA = "0x4AE0D80")]
	public static int2x3 operator +(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001918")]
	[Address(RVA = "0x4AE0DA0", Offset = "0x4AE0DA0", VA = "0x4AE0DA0")]
	public static int2x3 operator <<(int2x3 x, int n)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001919")]
	[Address(RVA = "0x4AE0E00", Offset = "0x4AE0E00", VA = "0x4AE0E00")]
	public static int2x3 operator >>(int2x3 x, int n)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191A")]
	[Address(RVA = "0x4AE0E60", Offset = "0x4AE0E60", VA = "0x4AE0E60")]
	public static bool2x3 operator ==(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191B")]
	[Address(RVA = "0x4AE0F00", Offset = "0x4AE0F00", VA = "0x4AE0F00")]
	public static bool2x3 operator ==(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191C")]
	[Address(RVA = "0x4AE0F80", Offset = "0x4AE0F80", VA = "0x4AE0F80")]
	public static bool2x3 operator ==(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191D")]
	[Address(RVA = "0x4AE1000", Offset = "0x4AE1000", VA = "0x4AE1000")]
	public static bool2x3 operator !=(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191E")]
	[Address(RVA = "0x4AE10A0", Offset = "0x4AE10A0", VA = "0x4AE10A0")]
	public static bool2x3 operator !=(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191F")]
	[Address(RVA = "0x4AE1120", Offset = "0x4AE1120", VA = "0x4AE1120")]
	public static bool2x3 operator !=(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001920")]
	[Address(RVA = "0x4AE11A0", Offset = "0x4AE11A0", VA = "0x4AE11A0")]
	public static int2x3 operator ~(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001921")]
	[Address(RVA = "0x4AE11C0", Offset = "0x4AE11C0", VA = "0x4AE11C0")]
	public static int2x3 operator &(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001922")]
	[Address(RVA = "0x4AE11E0", Offset = "0x4AE11E0", VA = "0x4AE11E0")]
	public static int2x3 operator &(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001923")]
	[Address(RVA = "0x4AE1240", Offset = "0x4AE1240", VA = "0x4AE1240")]
	public static int2x3 operator &(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001924")]
	[Address(RVA = "0x4AE12A0", Offset = "0x4AE12A0", VA = "0x4AE12A0")]
	public static int2x3 operator |(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001925")]
	[Address(RVA = "0x4AE12C0", Offset = "0x4AE12C0", VA = "0x4AE12C0")]
	public static int2x3 operator |(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001926")]
	[Address(RVA = "0x4AE1320", Offset = "0x4AE1320", VA = "0x4AE1320")]
	public static int2x3 operator |(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001927")]
	[Address(RVA = "0x4AE1380", Offset = "0x4AE1380", VA = "0x4AE1380")]
	public static int2x3 operator ^(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001928")]
	[Address(RVA = "0x4AE13A0", Offset = "0x4AE13A0", VA = "0x4AE13A0")]
	public static int2x3 operator ^(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001929")]
	[Address(RVA = "0x4AE1400", Offset = "0x4AE1400", VA = "0x4AE1400")]
	public static int2x3 operator ^(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192B")]
	[Address(RVA = "0x4AE1470", Offset = "0x4AE1470", VA = "0x4AE1470", Slot = "4")]
	public bool Equals(int2x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600192C")]
	[Address(RVA = "0x4AE14B0", Offset = "0x4AE14B0", VA = "0x4AE14B0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192D")]
	[Address(RVA = "0x4AE1540", Offset = "0x4AE1540", VA = "0x4AE1540", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192E")]
	[Address(RVA = "0x4AE15C0", Offset = "0x4AE15C0", VA = "0x4AE15C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192F")]
	[Address(RVA = "0x4AE1830", Offset = "0x4AE1830", VA = "0x4AE1830", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
