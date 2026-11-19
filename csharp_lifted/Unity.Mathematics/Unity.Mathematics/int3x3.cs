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
		[Address(RVA = "0x647E570", Offset = "0x647D570", VA = "0x647E570")]
		get
		{
			return ref *(int3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B09")]
	[Address(RVA = "0x647C0A0", Offset = "0x647B0A0", VA = "0x647C0A0")]
	public int3x3(int3 c0, int3 c1, int3 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0A")]
	[Address(RVA = "0x647C0C0", Offset = "0x647B0C0", VA = "0x647C0C0")]
	public int3x3(int m00, int m01, int m02, int m10, int m11, int m12, int m20, int m21, int m22)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0B")]
	[Address(RVA = "0x647C100", Offset = "0x647B100", VA = "0x647C100")]
	public int3x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0C")]
	[Address(RVA = "0x647C130", Offset = "0x647B130", VA = "0x647C130")]
	public int3x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0D")]
	[Address(RVA = "0x647C160", Offset = "0x647B160", VA = "0x647C160")]
	public int3x3(bool3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0E")]
	[Address(RVA = "0x647C1F0", Offset = "0x647B1F0", VA = "0x647C1F0")]
	public int3x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0F")]
	[Address(RVA = "0x647C220", Offset = "0x647B220", VA = "0x647C220")]
	public int3x3(uint3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B10")]
	[Address(RVA = "0x647C250", Offset = "0x647B250", VA = "0x647C250")]
	public int3x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B11")]
	[Address(RVA = "0x647C280", Offset = "0x647B280", VA = "0x647C280")]
	public int3x3(float3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B12")]
	[Address(RVA = "0x647C300", Offset = "0x647B300", VA = "0x647C300")]
	public int3x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B13")]
	[Address(RVA = "0x647C330", Offset = "0x647B330", VA = "0x647C330")]
	public int3x3(double3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B14")]
	[Address(RVA = "0x647C390", Offset = "0x647B390", VA = "0x647C390")]
	public static implicit operator int3x3(int v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B15")]
	[Address(RVA = "0x647C3C0", Offset = "0x647B3C0", VA = "0x647C3C0")]
	public static explicit operator int3x3(bool v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B16")]
	[Address(RVA = "0x647C3F0", Offset = "0x647B3F0", VA = "0x647C3F0")]
	public static explicit operator int3x3(bool3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B17")]
	[Address(RVA = "0x647C480", Offset = "0x647B480", VA = "0x647C480")]
	public static explicit operator int3x3(uint v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B18")]
	[Address(RVA = "0x647C4B0", Offset = "0x647B4B0", VA = "0x647C4B0")]
	public static explicit operator int3x3(uint3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B19")]
	[Address(RVA = "0x647C4F0", Offset = "0x647B4F0", VA = "0x647C4F0")]
	public static explicit operator int3x3(float v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1A")]
	[Address(RVA = "0x647C520", Offset = "0x647B520", VA = "0x647C520")]
	public static explicit operator int3x3(float3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1B")]
	[Address(RVA = "0x647C5A0", Offset = "0x647B5A0", VA = "0x647C5A0")]
	public static explicit operator int3x3(double v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1C")]
	[Address(RVA = "0x647C5D0", Offset = "0x647B5D0", VA = "0x647C5D0")]
	public static explicit operator int3x3(double3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1D")]
	[Address(RVA = "0x647C640", Offset = "0x647B640", VA = "0x647C640")]
	public static int3x3 operator *(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1E")]
	[Address(RVA = "0x647C6F0", Offset = "0x647B6F0", VA = "0x647C6F0")]
	public static int3x3 operator *(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1F")]
	[Address(RVA = "0x647C770", Offset = "0x647B770", VA = "0x647C770")]
	public static int3x3 operator *(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B20")]
	[Address(RVA = "0x647C7F0", Offset = "0x647B7F0", VA = "0x647C7F0")]
	public static int3x3 operator +(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B21")]
	[Address(RVA = "0x647C890", Offset = "0x647B890", VA = "0x647C890")]
	public static int3x3 operator +(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B22")]
	[Address(RVA = "0x647C900", Offset = "0x647B900", VA = "0x647C900")]
	public static int3x3 operator +(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B23")]
	[Address(RVA = "0x647C970", Offset = "0x647B970", VA = "0x647C970")]
	public static int3x3 operator -(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B24")]
	[Address(RVA = "0x647CA10", Offset = "0x647BA10", VA = "0x647CA10")]
	public static int3x3 operator -(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B25")]
	[Address(RVA = "0x647CA90", Offset = "0x647BA90", VA = "0x647CA90")]
	public static int3x3 operator -(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B26")]
	[Address(RVA = "0x647CB10", Offset = "0x647BB10", VA = "0x647CB10")]
	public static int3x3 operator /(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B27")]
	[Address(RVA = "0x647CBE0", Offset = "0x647BBE0", VA = "0x647CBE0")]
	public static int3x3 operator /(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B28")]
	[Address(RVA = "0x647CC90", Offset = "0x647BC90", VA = "0x647CC90")]
	public static int3x3 operator /(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B29")]
	[Address(RVA = "0x647CD30", Offset = "0x647BD30", VA = "0x647CD30")]
	public static int3x3 operator %(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2A")]
	[Address(RVA = "0x647CE00", Offset = "0x647BE00", VA = "0x647CE00")]
	public static int3x3 operator %(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2B")]
	[Address(RVA = "0x647CEB0", Offset = "0x647BEB0", VA = "0x647CEB0")]
	public static int3x3 operator %(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2C")]
	[Address(RVA = "0x647CF50", Offset = "0x647BF50", VA = "0x647CF50")]
	public static int3x3 operator ++(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2D")]
	[Address(RVA = "0x647CFD0", Offset = "0x647BFD0", VA = "0x647CFD0")]
	public static int3x3 operator --(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2E")]
	[Address(RVA = "0x647D050", Offset = "0x647C050", VA = "0x647D050")]
	public static bool3x3 operator <(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2F")]
	[Address(RVA = "0x647D140", Offset = "0x647C140", VA = "0x647D140")]
	public static bool3x3 operator <(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B30")]
	[Address(RVA = "0x647D210", Offset = "0x647C210", VA = "0x647D210")]
	public static bool3x3 operator <(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B31")]
	[Address(RVA = "0x647D2E0", Offset = "0x647C2E0", VA = "0x647D2E0")]
	public static bool3x3 operator <=(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B32")]
	[Address(RVA = "0x647D3D0", Offset = "0x647C3D0", VA = "0x647D3D0")]
	public static bool3x3 operator <=(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B33")]
	[Address(RVA = "0x647D490", Offset = "0x647C490", VA = "0x647D490")]
	public static bool3x3 operator <=(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B34")]
	[Address(RVA = "0x647D550", Offset = "0x647C550", VA = "0x647D550")]
	public static bool3x3 operator >(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B35")]
	[Address(RVA = "0x647D640", Offset = "0x647C640", VA = "0x647D640")]
	public static bool3x3 operator >(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B36")]
	[Address(RVA = "0x647D710", Offset = "0x647C710", VA = "0x647D710")]
	public static bool3x3 operator >(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B37")]
	[Address(RVA = "0x647D7E0", Offset = "0x647C7E0", VA = "0x647D7E0")]
	public static bool3x3 operator >=(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B38")]
	[Address(RVA = "0x647D8D0", Offset = "0x647C8D0", VA = "0x647D8D0")]
	public static bool3x3 operator >=(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B39")]
	[Address(RVA = "0x647D990", Offset = "0x647C990", VA = "0x647D990")]
	public static bool3x3 operator >=(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B3A")]
	[Address(RVA = "0x647DA50", Offset = "0x647CA50", VA = "0x647DA50")]
	public static int3x3 operator -(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B3B")]
	[Address(RVA = "0x647DAC0", Offset = "0x647CAC0", VA = "0x647DAC0")]
	public static int3x3 operator +(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B3C")]
	[Address(RVA = "0x647DB00", Offset = "0x647CB00", VA = "0x647DB00")]
	public static int3x3 operator <<(int3x3 x, int n)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B3D")]
	[Address(RVA = "0x647DB80", Offset = "0x647CB80", VA = "0x647DB80")]
	public static int3x3 operator >>(int3x3 x, int n)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B3E")]
	[Address(RVA = "0x647DC00", Offset = "0x647CC00", VA = "0x647DC00")]
	public static bool3x3 operator ==(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B3F")]
	[Address(RVA = "0x647DCF0", Offset = "0x647CCF0", VA = "0x647DCF0")]
	public static bool3x3 operator ==(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B40")]
	[Address(RVA = "0x647DDC0", Offset = "0x647CDC0", VA = "0x647DDC0")]
	public static bool3x3 operator ==(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B41")]
	[Address(RVA = "0x647DE90", Offset = "0x647CE90", VA = "0x647DE90")]
	public static bool3x3 operator !=(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B42")]
	[Address(RVA = "0x647DF80", Offset = "0x647CF80", VA = "0x647DF80")]
	public static bool3x3 operator !=(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B43")]
	[Address(RVA = "0x647E040", Offset = "0x647D040", VA = "0x647E040")]
	public static bool3x3 operator !=(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B44")]
	[Address(RVA = "0x647E100", Offset = "0x647D100", VA = "0x647E100")]
	public static int3x3 operator ~(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B45")]
	[Address(RVA = "0x647E150", Offset = "0x647D150", VA = "0x647E150")]
	public static int3x3 operator &(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B46")]
	[Address(RVA = "0x647E1B0", Offset = "0x647D1B0", VA = "0x647E1B0")]
	public static int3x3 operator &(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B47")]
	[Address(RVA = "0x647E230", Offset = "0x647D230", VA = "0x647E230")]
	public static int3x3 operator &(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B48")]
	[Address(RVA = "0x647E2B0", Offset = "0x647D2B0", VA = "0x647E2B0")]
	public static int3x3 operator |(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B49")]
	[Address(RVA = "0x647E310", Offset = "0x647D310", VA = "0x647E310")]
	public static int3x3 operator |(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B4A")]
	[Address(RVA = "0x647E390", Offset = "0x647D390", VA = "0x647E390")]
	public static int3x3 operator |(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B4B")]
	[Address(RVA = "0x647E410", Offset = "0x647D410", VA = "0x647E410")]
	public static int3x3 operator ^(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B4C")]
	[Address(RVA = "0x647E470", Offset = "0x647D470", VA = "0x647E470")]
	public static int3x3 operator ^(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B4D")]
	[Address(RVA = "0x647E4F0", Offset = "0x647D4F0", VA = "0x647E4F0")]
	public static int3x3 operator ^(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B4F")]
	[Address(RVA = "0x647E580", Offset = "0x647D580", VA = "0x647E580", Slot = "4")]
	public bool Equals(int3x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B50")]
	[Address(RVA = "0x647E5E0", Offset = "0x647D5E0", VA = "0x647E5E0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B51")]
	[Address(RVA = "0x647E690", Offset = "0x647D690", VA = "0x647E690", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B52")]
	[Address(RVA = "0x647E720", Offset = "0x647D720", VA = "0x647E720", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B53")]
	[Address(RVA = "0x647EA90", Offset = "0x647DA90", VA = "0x647EA90", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
