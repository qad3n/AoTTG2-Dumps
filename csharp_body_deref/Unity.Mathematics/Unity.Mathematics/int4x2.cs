// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int4x2
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
[Token(Token = "0x200004A")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int4x2 : IEquatable<int4x2>, IFormattable
{
	[Token(Token = "0x400011C")]
	[FieldOffset(Offset = "0x0")]
	public int4 c0;

	[Token(Token = "0x400011D")]
	[FieldOffset(Offset = "0x10")]
	public int4 c1;

	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int4x2 zero;

	[Token(Token = "0x1700099A")]
	public unsafe ref int4 this[int index]
	{
		[Token(Token = "0x6001D51")]
		[Address(RVA = "0x4AF6A60", Offset = "0x4AF6A60", VA = "0x4AF6A60")]
		get
		{
			return ref *(int4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D0C")]
	[Address(RVA = "0x4AF4B30", Offset = "0x4AF4B30", VA = "0x4AF4B30")]
	public int4x2(int4 c0, int4 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D0D")]
	[Address(RVA = "0x4AF4B40", Offset = "0x4AF4B40", VA = "0x4AF4B40")]
	public int4x2(int m00, int m01, int m10, int m11, int m20, int m21, int m30, int m31)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D0E")]
	[Address(RVA = "0x4AF4B70", Offset = "0x4AF4B70", VA = "0x4AF4B70")]
	public int4x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D0F")]
	[Address(RVA = "0x4AF4B90", Offset = "0x4AF4B90", VA = "0x4AF4B90")]
	public int4x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D10")]
	[Address(RVA = "0x4AF4BC0", Offset = "0x4AF4BC0", VA = "0x4AF4BC0")]
	public int4x2(bool4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D11")]
	[Address(RVA = "0x4AF4C30", Offset = "0x4AF4C30", VA = "0x4AF4C30")]
	public int4x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D12")]
	[Address(RVA = "0x4AF4C50", Offset = "0x4AF4C50", VA = "0x4AF4C50")]
	public int4x2(uint4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D13")]
	[Address(RVA = "0x4AF4C70", Offset = "0x4AF4C70", VA = "0x4AF4C70")]
	public int4x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D14")]
	[Address(RVA = "0x4AF4C90", Offset = "0x4AF4C90", VA = "0x4AF4C90")]
	public int4x2(float4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D15")]
	[Address(RVA = "0x4AF4D10", Offset = "0x4AF4D10", VA = "0x4AF4D10")]
	public int4x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D16")]
	[Address(RVA = "0x4AF4D30", Offset = "0x4AF4D30", VA = "0x4AF4D30")]
	public int4x2(double4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D17")]
	[Address(RVA = "0x4AF4D90", Offset = "0x4AF4D90", VA = "0x4AF4D90")]
	public static implicit operator int4x2(int v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D18")]
	[Address(RVA = "0x4AF4DB0", Offset = "0x4AF4DB0", VA = "0x4AF4DB0")]
	public static explicit operator int4x2(bool v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D19")]
	[Address(RVA = "0x4AF4DE0", Offset = "0x4AF4DE0", VA = "0x4AF4DE0")]
	public static explicit operator int4x2(bool4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D1A")]
	[Address(RVA = "0x4AF4E60", Offset = "0x4AF4E60", VA = "0x4AF4E60")]
	public static explicit operator int4x2(uint v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D1B")]
	[Address(RVA = "0x4AF4E80", Offset = "0x4AF4E80", VA = "0x4AF4E80")]
	public static explicit operator int4x2(uint4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D1C")]
	[Address(RVA = "0x4AF4EA0", Offset = "0x4AF4EA0", VA = "0x4AF4EA0")]
	public static explicit operator int4x2(float v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D1D")]
	[Address(RVA = "0x4AF4ED0", Offset = "0x4AF4ED0", VA = "0x4AF4ED0")]
	public static explicit operator int4x2(float4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D1E")]
	[Address(RVA = "0x4AF4F50", Offset = "0x4AF4F50", VA = "0x4AF4F50")]
	public static explicit operator int4x2(double v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D1F")]
	[Address(RVA = "0x4AF4F80", Offset = "0x4AF4F80", VA = "0x4AF4F80")]
	public static explicit operator int4x2(double4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D20")]
	[Address(RVA = "0x4AF4FF0", Offset = "0x4AF4FF0", VA = "0x4AF4FF0")]
	public static int4x2 operator *(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D21")]
	[Address(RVA = "0x4AF5090", Offset = "0x4AF5090", VA = "0x4AF5090")]
	public static int4x2 operator *(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D22")]
	[Address(RVA = "0x4AF5110", Offset = "0x4AF5110", VA = "0x4AF5110")]
	public static int4x2 operator *(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D23")]
	[Address(RVA = "0x4AF5190", Offset = "0x4AF5190", VA = "0x4AF5190")]
	public static int4x2 operator +(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D24")]
	[Address(RVA = "0x4AF5200", Offset = "0x4AF5200", VA = "0x4AF5200")]
	public static int4x2 operator +(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D25")]
	[Address(RVA = "0x4AF5270", Offset = "0x4AF5270", VA = "0x4AF5270")]
	public static int4x2 operator +(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D26")]
	[Address(RVA = "0x4AF52E0", Offset = "0x4AF52E0", VA = "0x4AF52E0")]
	public static int4x2 operator -(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D27")]
	[Address(RVA = "0x4AF5350", Offset = "0x4AF5350", VA = "0x4AF5350")]
	public static int4x2 operator -(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D28")]
	[Address(RVA = "0x4AF53C0", Offset = "0x4AF53C0", VA = "0x4AF53C0")]
	public static int4x2 operator -(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D29")]
	[Address(RVA = "0x4AF5430", Offset = "0x4AF5430", VA = "0x4AF5430")]
	public static int4x2 operator /(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D2A")]
	[Address(RVA = "0x4AF5500", Offset = "0x4AF5500", VA = "0x4AF5500")]
	public static int4x2 operator /(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D2B")]
	[Address(RVA = "0x4AF55A0", Offset = "0x4AF55A0", VA = "0x4AF55A0")]
	public static int4x2 operator /(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D2C")]
	[Address(RVA = "0x4AF5640", Offset = "0x4AF5640", VA = "0x4AF5640")]
	public static int4x2 operator %(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D2D")]
	[Address(RVA = "0x4AF5710", Offset = "0x4AF5710", VA = "0x4AF5710")]
	public static int4x2 operator %(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D2E")]
	[Address(RVA = "0x4AF57B0", Offset = "0x4AF57B0", VA = "0x4AF57B0")]
	public static int4x2 operator %(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D2F")]
	[Address(RVA = "0x4AF5850", Offset = "0x4AF5850", VA = "0x4AF5850")]
	public static int4x2 operator ++(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D30")]
	[Address(RVA = "0x4AF58A0", Offset = "0x4AF58A0", VA = "0x4AF58A0")]
	public static int4x2 operator --(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D31")]
	[Address(RVA = "0x4AF58F0", Offset = "0x4AF58F0", VA = "0x4AF58F0")]
	public static bool4x2 operator <(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D32")]
	[Address(RVA = "0x4AF59D0", Offset = "0x4AF59D0", VA = "0x4AF59D0")]
	public static bool4x2 operator <(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D33")]
	[Address(RVA = "0x4AF5A70", Offset = "0x4AF5A70", VA = "0x4AF5A70")]
	public static bool4x2 operator <(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D34")]
	[Address(RVA = "0x4AF5B10", Offset = "0x4AF5B10", VA = "0x4AF5B10")]
	public static bool4x2 operator <=(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D35")]
	[Address(RVA = "0x4AF5BF0", Offset = "0x4AF5BF0", VA = "0x4AF5BF0")]
	public static bool4x2 operator <=(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D36")]
	[Address(RVA = "0x4AF5C90", Offset = "0x4AF5C90", VA = "0x4AF5C90")]
	public static bool4x2 operator <=(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D37")]
	[Address(RVA = "0x4AF5D30", Offset = "0x4AF5D30", VA = "0x4AF5D30")]
	public static bool4x2 operator >(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D38")]
	[Address(RVA = "0x4AF5E10", Offset = "0x4AF5E10", VA = "0x4AF5E10")]
	public static bool4x2 operator >(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D39")]
	[Address(RVA = "0x4AF5EB0", Offset = "0x4AF5EB0", VA = "0x4AF5EB0")]
	public static bool4x2 operator >(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D3A")]
	[Address(RVA = "0x4AF5F50", Offset = "0x4AF5F50", VA = "0x4AF5F50")]
	public static bool4x2 operator >=(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D3B")]
	[Address(RVA = "0x4AF6030", Offset = "0x4AF6030", VA = "0x4AF6030")]
	public static bool4x2 operator >=(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D3C")]
	[Address(RVA = "0x4AF60D0", Offset = "0x4AF60D0", VA = "0x4AF60D0")]
	public static bool4x2 operator >=(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D3D")]
	[Address(RVA = "0x4AF6170", Offset = "0x4AF6170", VA = "0x4AF6170")]
	public static int4x2 operator -(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D3E")]
	[Address(RVA = "0x4AF61D0", Offset = "0x4AF61D0", VA = "0x4AF61D0")]
	public static int4x2 operator +(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D3F")]
	[Address(RVA = "0x4AF61F0", Offset = "0x4AF61F0", VA = "0x4AF61F0")]
	public static int4x2 operator <<(int4x2 x, int n)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D40")]
	[Address(RVA = "0x4AF6270", Offset = "0x4AF6270", VA = "0x4AF6270")]
	public static int4x2 operator >>(int4x2 x, int n)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D41")]
	[Address(RVA = "0x4AF62F0", Offset = "0x4AF62F0", VA = "0x4AF62F0")]
	public static bool4x2 operator ==(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D42")]
	[Address(RVA = "0x4AF63D0", Offset = "0x4AF63D0", VA = "0x4AF63D0")]
	public static bool4x2 operator ==(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D43")]
	[Address(RVA = "0x4AF6470", Offset = "0x4AF6470", VA = "0x4AF6470")]
	public static bool4x2 operator ==(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D44")]
	[Address(RVA = "0x4AF6510", Offset = "0x4AF6510", VA = "0x4AF6510")]
	public static bool4x2 operator !=(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D45")]
	[Address(RVA = "0x4AF65F0", Offset = "0x4AF65F0", VA = "0x4AF65F0")]
	public static bool4x2 operator !=(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D46")]
	[Address(RVA = "0x4AF6690", Offset = "0x4AF6690", VA = "0x4AF6690")]
	public static bool4x2 operator !=(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D47")]
	[Address(RVA = "0x4AF6730", Offset = "0x4AF6730", VA = "0x4AF6730")]
	public static int4x2 operator ~(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D48")]
	[Address(RVA = "0x4AF6760", Offset = "0x4AF6760", VA = "0x4AF6760")]
	public static int4x2 operator &(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D49")]
	[Address(RVA = "0x4AF6780", Offset = "0x4AF6780", VA = "0x4AF6780")]
	public static int4x2 operator &(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D4A")]
	[Address(RVA = "0x4AF67F0", Offset = "0x4AF67F0", VA = "0x4AF67F0")]
	public static int4x2 operator &(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D4B")]
	[Address(RVA = "0x4AF6860", Offset = "0x4AF6860", VA = "0x4AF6860")]
	public static int4x2 operator |(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D4C")]
	[Address(RVA = "0x4AF6880", Offset = "0x4AF6880", VA = "0x4AF6880")]
	public static int4x2 operator |(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D4D")]
	[Address(RVA = "0x4AF68F0", Offset = "0x4AF68F0", VA = "0x4AF68F0")]
	public static int4x2 operator |(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D4E")]
	[Address(RVA = "0x4AF6960", Offset = "0x4AF6960", VA = "0x4AF6960")]
	public static int4x2 operator ^(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D4F")]
	[Address(RVA = "0x4AF6980", Offset = "0x4AF6980", VA = "0x4AF6980")]
	public static int4x2 operator ^(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D50")]
	[Address(RVA = "0x4AF69F0", Offset = "0x4AF69F0", VA = "0x4AF69F0")]
	public static int4x2 operator ^(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D52")]
	[Address(RVA = "0x4AF6A70", Offset = "0x4AF6A70", VA = "0x4AF6A70", Slot = "4")]
	public bool Equals(int4x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D53")]
	[Address(RVA = "0x4AF6AD0", Offset = "0x4AF6AD0", VA = "0x4AF6AD0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D54")]
	[Address(RVA = "0x4AF6B80", Offset = "0x4AF6B80", VA = "0x4AF6B80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D55")]
	[Address(RVA = "0x4AF6C30", Offset = "0x4AF6C30", VA = "0x4AF6C30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D56")]
	[Address(RVA = "0x4AF6F50", Offset = "0x4AF6F50", VA = "0x4AF6F50", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
