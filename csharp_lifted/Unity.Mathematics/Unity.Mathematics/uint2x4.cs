// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.uint2x4
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
[Token(Token = "0x2000056")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint2x4 : IEquatable<uint2x4>, IFormattable
{
	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0x0")]
	public uint2 c0;

	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x8")]
	public uint2 c1;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x10")]
	public uint2 c2;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x18")]
	public uint2 c3;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint2x4 zero;

	[Token(Token = "0x170009BC")]
	public unsafe ref uint2 this[int index]
	{
		[Token(Token = "0x6002035")]
		[Address(RVA = "0x63F3C30", Offset = "0x63F2C30", VA = "0x63F3C30")]
		get
		{
			return ref *(uint2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF0")]
	[Address(RVA = "0x63F1C60", Offset = "0x63F0C60", VA = "0x63F1C60")]
	public uint2x4(uint2 c0, uint2 c1, uint2 c2, uint2 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF1")]
	[Address(RVA = "0x63F1C70", Offset = "0x63F0C70", VA = "0x63F1C70")]
	public uint2x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF2")]
	[Address(RVA = "0x63F1CC0", Offset = "0x63F0CC0", VA = "0x63F1CC0")]
	public uint2x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF3")]
	[Address(RVA = "0x63F1CE0", Offset = "0x63F0CE0", VA = "0x63F1CE0")]
	public uint2x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF4")]
	[Address(RVA = "0x63F1D10", Offset = "0x63F0D10", VA = "0x63F1D10")]
	public uint2x4(bool2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF5")]
	[Address(RVA = "0x63F1D80", Offset = "0x63F0D80", VA = "0x63F1D80")]
	public uint2x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF6")]
	[Address(RVA = "0x63F1DA0", Offset = "0x63F0DA0", VA = "0x63F1DA0")]
	public uint2x4(int2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF7")]
	[Address(RVA = "0x63F1DC0", Offset = "0x63F0DC0", VA = "0x63F1DC0")]
	public uint2x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF8")]
	[Address(RVA = "0x63F1DF0", Offset = "0x63F0DF0", VA = "0x63F1DF0")]
	public uint2x4(float2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF9")]
	[Address(RVA = "0x63F1F00", Offset = "0x63F0F00", VA = "0x63F1F00")]
	public uint2x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FFA")]
	[Address(RVA = "0x63F1F30", Offset = "0x63F0F30", VA = "0x63F1F30")]
	public uint2x4(double2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FFB")]
	[Address(RVA = "0x63F2070", Offset = "0x63F1070", VA = "0x63F2070")]
	public static implicit operator uint2x4(uint v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FFC")]
	[Address(RVA = "0x63F2090", Offset = "0x63F1090", VA = "0x63F2090")]
	public static explicit operator uint2x4(bool v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FFD")]
	[Address(RVA = "0x63F20C0", Offset = "0x63F10C0", VA = "0x63F20C0")]
	public static explicit operator uint2x4(bool2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FFE")]
	[Address(RVA = "0x63F2140", Offset = "0x63F1140", VA = "0x63F2140")]
	public static explicit operator uint2x4(int v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FFF")]
	[Address(RVA = "0x63F2160", Offset = "0x63F1160", VA = "0x63F2160")]
	public static explicit operator uint2x4(int2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002000")]
	[Address(RVA = "0x63F2180", Offset = "0x63F1180", VA = "0x63F2180")]
	public static explicit operator uint2x4(float v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002001")]
	[Address(RVA = "0x63F21B0", Offset = "0x63F11B0", VA = "0x63F21B0")]
	public static explicit operator uint2x4(float2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002002")]
	[Address(RVA = "0x63F22D0", Offset = "0x63F12D0", VA = "0x63F22D0")]
	public static explicit operator uint2x4(double v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002003")]
	[Address(RVA = "0x63F2310", Offset = "0x63F1310", VA = "0x63F2310")]
	public static explicit operator uint2x4(double2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002004")]
	[Address(RVA = "0x63F2450", Offset = "0x63F1450", VA = "0x63F2450")]
	public static uint2x4 operator *(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002005")]
	[Address(RVA = "0x63F24F0", Offset = "0x63F14F0", VA = "0x63F24F0")]
	public static uint2x4 operator *(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002006")]
	[Address(RVA = "0x63F2570", Offset = "0x63F1570", VA = "0x63F2570")]
	public static uint2x4 operator *(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002007")]
	[Address(RVA = "0x63F25F0", Offset = "0x63F15F0", VA = "0x63F25F0")]
	public static uint2x4 operator +(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002008")]
	[Address(RVA = "0x63F2690", Offset = "0x63F1690", VA = "0x63F2690")]
	public static uint2x4 operator +(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002009")]
	[Address(RVA = "0x63F26C0", Offset = "0x63F16C0", VA = "0x63F26C0")]
	public static uint2x4 operator +(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600200A")]
	[Address(RVA = "0x63F26F0", Offset = "0x63F16F0", VA = "0x63F26F0")]
	public static uint2x4 operator -(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600200B")]
	[Address(RVA = "0x63F27A0", Offset = "0x63F17A0", VA = "0x63F27A0")]
	public static uint2x4 operator -(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600200C")]
	[Address(RVA = "0x63F27D0", Offset = "0x63F17D0", VA = "0x63F27D0")]
	public static uint2x4 operator -(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600200D")]
	[Address(RVA = "0x63F2800", Offset = "0x63F1800", VA = "0x63F2800")]
	public static uint2x4 operator /(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600200E")]
	[Address(RVA = "0x63F28C0", Offset = "0x63F18C0", VA = "0x63F28C0")]
	public static uint2x4 operator /(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600200F")]
	[Address(RVA = "0x63F2960", Offset = "0x63F1960", VA = "0x63F2960")]
	public static uint2x4 operator /(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002010")]
	[Address(RVA = "0x63F2A00", Offset = "0x63F1A00", VA = "0x63F2A00")]
	public static uint2x4 operator %(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002011")]
	[Address(RVA = "0x63F2AC0", Offset = "0x63F1AC0", VA = "0x63F2AC0")]
	public static uint2x4 operator %(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002012")]
	[Address(RVA = "0x63F2B60", Offset = "0x63F1B60", VA = "0x63F2B60")]
	public static uint2x4 operator %(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002013")]
	[Address(RVA = "0x63F2C00", Offset = "0x63F1C00", VA = "0x63F2C00")]
	public static uint2x4 operator ++(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002014")]
	[Address(RVA = "0x63F2C50", Offset = "0x63F1C50", VA = "0x63F2C50")]
	public static uint2x4 operator --(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002015")]
	[Address(RVA = "0x63F2CA0", Offset = "0x63F1CA0", VA = "0x63F2CA0")]
	public static bool2x4 operator <(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002016")]
	[Address(RVA = "0x63F2D70", Offset = "0x63F1D70", VA = "0x63F2D70")]
	public static bool2x4 operator <(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002017")]
	[Address(RVA = "0x63F2E10", Offset = "0x63F1E10", VA = "0x63F2E10")]
	public static bool2x4 operator <(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002018")]
	[Address(RVA = "0x63F2EB0", Offset = "0x63F1EB0", VA = "0x63F2EB0")]
	public static bool2x4 operator <=(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002019")]
	[Address(RVA = "0x63F2F80", Offset = "0x63F1F80", VA = "0x63F2F80")]
	public static bool2x4 operator <=(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600201A")]
	[Address(RVA = "0x63F3020", Offset = "0x63F2020", VA = "0x63F3020")]
	public static bool2x4 operator <=(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600201B")]
	[Address(RVA = "0x63F30C0", Offset = "0x63F20C0", VA = "0x63F30C0")]
	public static bool2x4 operator >(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600201C")]
	[Address(RVA = "0x63F3190", Offset = "0x63F2190", VA = "0x63F3190")]
	public static bool2x4 operator >(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600201D")]
	[Address(RVA = "0x63F3230", Offset = "0x63F2230", VA = "0x63F3230")]
	public static bool2x4 operator >(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600201E")]
	[Address(RVA = "0x63F32D0", Offset = "0x63F22D0", VA = "0x63F32D0")]
	public static bool2x4 operator >=(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600201F")]
	[Address(RVA = "0x63F33A0", Offset = "0x63F23A0", VA = "0x63F33A0")]
	public static bool2x4 operator >=(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002020")]
	[Address(RVA = "0x63F3440", Offset = "0x63F2440", VA = "0x63F3440")]
	public static bool2x4 operator >=(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002021")]
	[Address(RVA = "0x63F34E0", Offset = "0x63F24E0", VA = "0x63F34E0")]
	public static uint2x4 operator -(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002022")]
	[Address(RVA = "0x63F3540", Offset = "0x63F2540", VA = "0x63F3540")]
	public static uint2x4 operator +(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002023")]
	[Address(RVA = "0x63F3560", Offset = "0x63F2560", VA = "0x63F3560")]
	public static uint2x4 operator <<(uint2x4 x, int n)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002024")]
	[Address(RVA = "0x63F35E0", Offset = "0x63F25E0", VA = "0x63F35E0")]
	public static uint2x4 operator >>(uint2x4 x, int n)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002025")]
	[Address(RVA = "0x63F3660", Offset = "0x63F2660", VA = "0x63F3660")]
	public static bool2x4 operator ==(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002026")]
	[Address(RVA = "0x63F3730", Offset = "0x63F2730", VA = "0x63F3730")]
	public static bool2x4 operator ==(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002027")]
	[Address(RVA = "0x63F37D0", Offset = "0x63F27D0", VA = "0x63F37D0")]
	public static bool2x4 operator ==(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002028")]
	[Address(RVA = "0x63F3870", Offset = "0x63F2870", VA = "0x63F3870")]
	public static bool2x4 operator !=(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002029")]
	[Address(RVA = "0x63F3940", Offset = "0x63F2940", VA = "0x63F3940")]
	public static bool2x4 operator !=(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600202A")]
	[Address(RVA = "0x63F39E0", Offset = "0x63F29E0", VA = "0x63F39E0")]
	public static bool2x4 operator !=(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600202B")]
	[Address(RVA = "0x63F3A80", Offset = "0x63F2A80", VA = "0x63F3A80")]
	public static uint2x4 operator ~(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600202C")]
	[Address(RVA = "0x63F3AB0", Offset = "0x63F2AB0", VA = "0x63F3AB0")]
	public static uint2x4 operator &(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600202D")]
	[Address(RVA = "0x63F3AD0", Offset = "0x63F2AD0", VA = "0x63F3AD0")]
	public static uint2x4 operator &(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600202E")]
	[Address(RVA = "0x63F3B00", Offset = "0x63F2B00", VA = "0x63F3B00")]
	public static uint2x4 operator &(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600202F")]
	[Address(RVA = "0x63F3B30", Offset = "0x63F2B30", VA = "0x63F3B30")]
	public static uint2x4 operator |(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002030")]
	[Address(RVA = "0x63F3B50", Offset = "0x63F2B50", VA = "0x63F3B50")]
	public static uint2x4 operator |(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002031")]
	[Address(RVA = "0x63F3B80", Offset = "0x63F2B80", VA = "0x63F3B80")]
	public static uint2x4 operator |(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002032")]
	[Address(RVA = "0x63F3BB0", Offset = "0x63F2BB0", VA = "0x63F3BB0")]
	public static uint2x4 operator ^(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002033")]
	[Address(RVA = "0x63F3BD0", Offset = "0x63F2BD0", VA = "0x63F3BD0")]
	public static uint2x4 operator ^(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002034")]
	[Address(RVA = "0x63F3C00", Offset = "0x63F2C00", VA = "0x63F3C00")]
	public static uint2x4 operator ^(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002036")]
	[Address(RVA = "0x63F3C40", Offset = "0x63F2C40", VA = "0x63F3C40", Slot = "4")]
	public bool Equals(uint2x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002037")]
	[Address(RVA = "0x63F3CA0", Offset = "0x63F2CA0", VA = "0x63F3CA0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002038")]
	[Address(RVA = "0x63F3D40", Offset = "0x63F2D40", VA = "0x63F3D40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002039")]
	[Address(RVA = "0x63F3DC0", Offset = "0x63F2DC0", VA = "0x63F3DC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600203A")]
	[Address(RVA = "0x63F40E0", Offset = "0x63F30E0", VA = "0x63F40E0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
