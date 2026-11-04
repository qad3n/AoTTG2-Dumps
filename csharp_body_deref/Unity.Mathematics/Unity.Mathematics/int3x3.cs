// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int3x3
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
[Token(Token = "0x2000047")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int3x3 : IEquatable<int3x3>, IFormattable
{
	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x0")]
	public int3 c0;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0xC")]
	public int3 c1;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x18")]
	public int3 c2;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int3x3 identity;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x24")]
	public static readonly int3x3 zero;

	[Token(Token = "0x17000847")]
	public unsafe ref int3 this[int index]
	{
		[Token(Token = "0x6001B4E")]
		[Address(RVA = "0x841BD0", Offset = "0x8401D0", VA = "0x180841BD0")]
		get
		{
			return ref *(int3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B09")]
	[Address(RVA = "0x2A2F3B0", Offset = "0x2A2D9B0", VA = "0x182A2F3B0")]
	public int3x3(int3 c0, int3 c1, int3 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0A")]
	[Address(RVA = "0x2A2F230", Offset = "0x2A2D830", VA = "0x182A2F230")]
	public int3x3(int m00, int m01, int m02, int m10, int m11, int m12, int m20, int m21, int m22)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0B")]
	[Address(RVA = "0x2A2F2D0", Offset = "0x2A2D8D0", VA = "0x182A2F2D0")]
	public int3x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0C")]
	[Address(RVA = "0x2A2F2F0", Offset = "0x2A2D8F0", VA = "0x182A2F2F0")]
	public int3x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0D")]
	[Address(RVA = "0x2A2F340", Offset = "0x2A2D940", VA = "0x182A2F340")]
	public int3x3(bool3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0E")]
	[Address(RVA = "0x2A2F2D0", Offset = "0x2A2D8D0", VA = "0x182A2F2D0")]
	public int3x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0F")]
	[Address(RVA = "0x2A2F270", Offset = "0x2A2D870", VA = "0x182A2F270")]
	public int3x3(uint3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B10")]
	[Address(RVA = "0x2AA33F0", Offset = "0x2AA19F0", VA = "0x182AA33F0")]
	public int3x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B11")]
	[Address(RVA = "0x2AA3300", Offset = "0x2AA1900", VA = "0x182AA3300")]
	public int3x3(float3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B12")]
	[Address(RVA = "0x2AA3350", Offset = "0x2AA1950", VA = "0x182AA3350")]
	public int3x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B13")]
	[Address(RVA = "0x2AA33A0", Offset = "0x2AA19A0", VA = "0x182AA33A0")]
	public int3x3(double3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B14")]
	[Address(RVA = "0x29EB110", Offset = "0x29E9710", VA = "0x1829EB110")]
	public static implicit operator int3x3(int v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B15")]
	[Address(RVA = "0x29EB450", Offset = "0x29E9A50", VA = "0x1829EB450")]
	public static explicit operator int3x3(bool v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B16")]
	[Address(RVA = "0x29EB390", Offset = "0x29E9990", VA = "0x1829EB390")]
	public static explicit operator int3x3(bool3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B17")]
	[Address(RVA = "0x29EB110", Offset = "0x29E9710", VA = "0x1829EB110")]
	public static explicit operator int3x3(uint v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B18")]
	[Address(RVA = "0x29EB180", Offset = "0x29E9780", VA = "0x1829EB180")]
	public static explicit operator int3x3(uint3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B19")]
	[Address(RVA = "0x29EB130", Offset = "0x29E9730", VA = "0x1829EB130")]
	public static explicit operator int3x3(float v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1A")]
	[Address(RVA = "0x29EB280", Offset = "0x29E9880", VA = "0x1829EB280")]
	public static explicit operator int3x3(float3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1B")]
	[Address(RVA = "0x29EB340", Offset = "0x29E9940", VA = "0x1829EB340")]
	public static explicit operator int3x3(double v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1C")]
	[Address(RVA = "0x29EB210", Offset = "0x29E9810", VA = "0x1829EB210")]
	public static explicit operator int3x3(double3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1D")]
	[Address(RVA = "0x2A30AF0", Offset = "0x2A2F0F0", VA = "0x182A30AF0")]
	public static int3x3 operator *(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1E")]
	[Address(RVA = "0x2A30B80", Offset = "0x2A2F180", VA = "0x182A30B80")]
	public static int3x3 operator *(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1F")]
	[Address(RVA = "0x2A30A60", Offset = "0x2A2F060", VA = "0x182A30A60")]
	public static int3x3 operator *(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B20")]
	[Address(RVA = "0x2AA3440", Offset = "0x2AA1A40", VA = "0x182AA3440")]
	public static int3x3 operator +(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B21")]
	[Address(RVA = "0x2AA34B0", Offset = "0x2AA1AB0", VA = "0x182AA34B0")]
	public static int3x3 operator +(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B22")]
	[Address(RVA = "0x2AA3530", Offset = "0x2AA1B30", VA = "0x182AA3530")]
	public static int3x3 operator +(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B23")]
	[Address(RVA = "0x2AA4130", Offset = "0x2AA2730", VA = "0x182AA4130")]
	public static int3x3 operator -(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B24")]
	[Address(RVA = "0x2AA4030", Offset = "0x2AA2630", VA = "0x182AA4030")]
	public static int3x3 operator -(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B25")]
	[Address(RVA = "0x2AA40B0", Offset = "0x2AA26B0", VA = "0x182AA40B0")]
	public static int3x3 operator -(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B26")]
	[Address(RVA = "0x2AA35B0", Offset = "0x2AA1BB0", VA = "0x182AA35B0")]
	public static int3x3 operator /(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B27")]
	[Address(RVA = "0x2AA36F0", Offset = "0x2AA1CF0", VA = "0x182AA36F0")]
	public static int3x3 operator /(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B28")]
	[Address(RVA = "0x2AA3650", Offset = "0x2AA1C50", VA = "0x182AA3650")]
	public static int3x3 operator /(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B29")]
	[Address(RVA = "0x2AA3DD0", Offset = "0x2AA23D0", VA = "0x182AA3DD0")]
	public static int3x3 operator %(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2A")]
	[Address(RVA = "0x2AA3F10", Offset = "0x2AA2510", VA = "0x182AA3F10")]
	public static int3x3 operator %(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2B")]
	[Address(RVA = "0x2AA3E70", Offset = "0x2AA2470", VA = "0x182AA3E70")]
	public static int3x3 operator %(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2C")]
	[Address(RVA = "0x2A30290", Offset = "0x2A2E890", VA = "0x182A30290")]
	public static int3x3 operator ++(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2D")]
	[Address(RVA = "0x2A2F8C0", Offset = "0x2A2DEC0", VA = "0x182A2F8C0")]
	public static int3x3 operator --(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2E")]
	[Address(RVA = "0x2AA3C40", Offset = "0x2AA2240", VA = "0x182AA3C40")]
	public static bool3x3 operator <(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2F")]
	[Address(RVA = "0x2AA3D50", Offset = "0x2AA2350", VA = "0x182AA3D50")]
	public static bool3x3 operator <(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B30")]
	[Address(RVA = "0x2AA3CD0", Offset = "0x2AA22D0", VA = "0x182AA3CD0")]
	public static bool3x3 operator <(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B31")]
	[Address(RVA = "0x2AA3AB0", Offset = "0x2AA20B0", VA = "0x182AA3AB0")]
	public static bool3x3 operator <=(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B32")]
	[Address(RVA = "0x2AA3B40", Offset = "0x2AA2140", VA = "0x182AA3B40")]
	public static bool3x3 operator <=(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B33")]
	[Address(RVA = "0x2AA3BC0", Offset = "0x2AA21C0", VA = "0x182AA3BC0")]
	public static bool3x3 operator <=(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B34")]
	[Address(RVA = "0x2AA3A20", Offset = "0x2AA2020", VA = "0x182AA3A20")]
	public static bool3x3 operator >(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B35")]
	[Address(RVA = "0x2AA39A0", Offset = "0x2AA1FA0", VA = "0x182AA39A0")]
	public static bool3x3 operator >(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B36")]
	[Address(RVA = "0x2AA3920", Offset = "0x2AA1F20", VA = "0x182AA3920")]
	public static bool3x3 operator >(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B37")]
	[Address(RVA = "0x2AA3810", Offset = "0x2AA1E10", VA = "0x182AA3810")]
	public static bool3x3 operator >=(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B38")]
	[Address(RVA = "0x2AA3790", Offset = "0x2AA1D90", VA = "0x182AA3790")]
	public static bool3x3 operator >=(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B39")]
	[Address(RVA = "0x2AA38A0", Offset = "0x2AA1EA0", VA = "0x182AA38A0")]
	public static bool3x3 operator >=(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B3A")]
	[Address(RVA = "0x2A30ED0", Offset = "0x2A2F4D0", VA = "0x182A30ED0")]
	public static int3x3 operator -(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B3B")]
	[Address(RVA = "0x2A30F30", Offset = "0x2A2F530", VA = "0x182A30F30")]
	public static int3x3 operator +(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B3C")]
	[Address(RVA = "0x2A304D0", Offset = "0x2A2EAD0", VA = "0x182A304D0")]
	public static int3x3 operator <<(int3x3 x, int n)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B3D")]
	[Address(RVA = "0x2AA3FB0", Offset = "0x2AA25B0", VA = "0x182AA3FB0")]
	public static int3x3 operator >>(int3x3 x, int n)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B3E")]
	[Address(RVA = "0x2A2FC60", Offset = "0x2A2E260", VA = "0x182A2FC60")]
	public static bool3x3 operator ==(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B3F")]
	[Address(RVA = "0x2A2FB60", Offset = "0x2A2E160", VA = "0x182A2FB60")]
	public static bool3x3 operator ==(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B40")]
	[Address(RVA = "0x2A2FBE0", Offset = "0x2A2E1E0", VA = "0x182A2FBE0")]
	public static bool3x3 operator ==(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B41")]
	[Address(RVA = "0x2A30340", Offset = "0x2A2E940", VA = "0x182A30340")]
	public static bool3x3 operator !=(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B42")]
	[Address(RVA = "0x2A303D0", Offset = "0x2A2E9D0", VA = "0x182A303D0")]
	public static bool3x3 operator !=(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B43")]
	[Address(RVA = "0x2A30450", Offset = "0x2A2EA50", VA = "0x182A30450")]
	public static bool3x3 operator !=(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B44")]
	[Address(RVA = "0x2A30C10", Offset = "0x2A2F210", VA = "0x182A30C10")]
	public static int3x3 operator ~(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B45")]
	[Address(RVA = "0x2A2F660", Offset = "0x2A2DC60", VA = "0x182A2F660")]
	public static int3x3 operator &(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B46")]
	[Address(RVA = "0x2A2F6D0", Offset = "0x2A2DCD0", VA = "0x182A2F6D0")]
	public static int3x3 operator &(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B47")]
	[Address(RVA = "0x2A2F5E0", Offset = "0x2A2DBE0", VA = "0x182A2F5E0")]
	public static int3x3 operator &(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B48")]
	[Address(RVA = "0x2A2F750", Offset = "0x2A2DD50", VA = "0x182A2F750")]
	public static int3x3 operator |(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B49")]
	[Address(RVA = "0x2A2F840", Offset = "0x2A2DE40", VA = "0x182A2F840")]
	public static int3x3 operator |(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B4A")]
	[Address(RVA = "0x2A2F7C0", Offset = "0x2A2DDC0", VA = "0x182A2F7C0")]
	public static int3x3 operator |(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B4B")]
	[Address(RVA = "0x2A2FDF0", Offset = "0x2A2E3F0", VA = "0x182A2FDF0")]
	public static int3x3 operator ^(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B4C")]
	[Address(RVA = "0x2A2FD70", Offset = "0x2A2E370", VA = "0x182A2FD70")]
	public static int3x3 operator ^(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B4D")]
	[Address(RVA = "0x2A2FCF0", Offset = "0x2A2E2F0", VA = "0x182A2FCF0")]
	public static int3x3 operator ^(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B4F")]
	[Address(RVA = "0x2A2E8E0", Offset = "0x2A2CEE0", VA = "0x182A2E8E0", Slot = "4")]
	public bool Equals(int3x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B50")]
	[Address(RVA = "0x2AA2940", Offset = "0x2AA0F40", VA = "0x182AA2940", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B51")]
	[Address(RVA = "0x2AA2A40", Offset = "0x2AA1040", VA = "0x182AA2A40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B52")]
	[Address(RVA = "0x2AA2EC0", Offset = "0x2AA14C0", VA = "0x182AA2EC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B53")]
	[Address(RVA = "0x2AA2B00", Offset = "0x2AA1100", VA = "0x182AA2B00", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
