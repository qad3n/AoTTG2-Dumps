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
		[Address(RVA = "0x841B10", Offset = "0x840110", VA = "0x180841B10")]
		get
		{
			return ref *(uint2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF0")]
	[Address(RVA = "0x298BD00", Offset = "0x298A300", VA = "0x18298BD00")]
	public uint2x4(uint2 c0, uint2 c1, uint2 c2, uint2 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF1")]
	[Address(RVA = "0x2A290F0", Offset = "0x2A276F0", VA = "0x182A290F0")]
	public uint2x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF2")]
	[Address(RVA = "0x2A28F80", Offset = "0x2A27580", VA = "0x182A28F80")]
	public uint2x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF3")]
	[Address(RVA = "0x29C8F10", Offset = "0x29C7510", VA = "0x1829C8F10")]
	public uint2x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF4")]
	[Address(RVA = "0x2A29040", Offset = "0x2A27640", VA = "0x182A29040")]
	public uint2x4(bool2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF5")]
	[Address(RVA = "0x2A28F80", Offset = "0x2A27580", VA = "0x182A28F80")]
	public uint2x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF6")]
	[Address(RVA = "0x2A28FD0", Offset = "0x2A275D0", VA = "0x182A28FD0")]
	public uint2x4(int2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF7")]
	[Address(RVA = "0x29CDF50", Offset = "0x29CC550", VA = "0x1829CDF50")]
	public uint2x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF8")]
	[Address(RVA = "0x29CE010", Offset = "0x29CC610", VA = "0x1829CE010")]
	public uint2x4(float2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FF9")]
	[Address(RVA = "0x29CDE90", Offset = "0x29CC490", VA = "0x1829CDE90")]
	public uint2x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FFA")]
	[Address(RVA = "0x29CDD80", Offset = "0x29CC380", VA = "0x1829CDD80")]
	public uint2x4(double2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FFB")]
	[Address(RVA = "0x29EA970", Offset = "0x29E8F70", VA = "0x1829EA970")]
	public static implicit operator uint2x4(uint v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FFC")]
	[Address(RVA = "0x2A29EC0", Offset = "0x2A284C0", VA = "0x182A29EC0")]
	public static explicit operator uint2x4(bool v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FFD")]
	[Address(RVA = "0x29EA8C0", Offset = "0x29E8EC0", VA = "0x1829EA8C0")]
	public static explicit operator uint2x4(bool2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FFE")]
	[Address(RVA = "0x29EA970", Offset = "0x29E8F70", VA = "0x1829EA970")]
	public static explicit operator uint2x4(int v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FFF")]
	[Address(RVA = "0x29EA9C0", Offset = "0x29E8FC0", VA = "0x1829EA9C0")]
	public static explicit operator uint2x4(int2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002000")]
	[Address(RVA = "0x2A29E20", Offset = "0x2A28420", VA = "0x182A29E20")]
	public static explicit operator uint2x4(float v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002001")]
	[Address(RVA = "0x2A29E80", Offset = "0x2A28480", VA = "0x182A29E80")]
	public static explicit operator uint2x4(float2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002002")]
	[Address(RVA = "0x2A29E50", Offset = "0x2A28450", VA = "0x182A29E50")]
	public static explicit operator uint2x4(double v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002003")]
	[Address(RVA = "0x2A29DD0", Offset = "0x2A283D0", VA = "0x182A29DD0")]
	public static explicit operator uint2x4(double2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002004")]
	[Address(RVA = "0x2A2AC90", Offset = "0x2A29290", VA = "0x182A2AC90")]
	public static uint2x4 operator *(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002005")]
	[Address(RVA = "0x2A2AD50", Offset = "0x2A29350", VA = "0x182A2AD50")]
	public static uint2x4 operator *(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002006")]
	[Address(RVA = "0x2A2ABF0", Offset = "0x2A291F0", VA = "0x182A2ABF0")]
	public static uint2x4 operator *(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002007")]
	[Address(RVA = "0x2A291E0", Offset = "0x2A277E0", VA = "0x182A291E0")]
	public static uint2x4 operator +(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002008")]
	[Address(RVA = "0x2A29150", Offset = "0x2A27750", VA = "0x182A29150")]
	public static uint2x4 operator +(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002009")]
	[Address(RVA = "0x2A29290", Offset = "0x2A27890", VA = "0x182A29290")]
	public static uint2x4 operator +(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600200A")]
	[Address(RVA = "0x2A2B060", Offset = "0x2A29660", VA = "0x182A2B060")]
	public static uint2x4 operator -(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600200B")]
	[Address(RVA = "0x2A2AF20", Offset = "0x2A29520", VA = "0x182A2AF20")]
	public static uint2x4 operator -(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600200C")]
	[Address(RVA = "0x2A2AFC0", Offset = "0x2A295C0", VA = "0x182A2AFC0")]
	public static uint2x4 operator -(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600200D")]
	[Address(RVA = "0x2A297A0", Offset = "0x2A27DA0", VA = "0x182A297A0")]
	public static uint2x4 operator /(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600200E")]
	[Address(RVA = "0x2A29940", Offset = "0x2A27F40", VA = "0x182A29940")]
	public static uint2x4 operator /(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600200F")]
	[Address(RVA = "0x2A29880", Offset = "0x2A27E80", VA = "0x182A29880")]
	public static uint2x4 operator /(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002010")]
	[Address(RVA = "0x2A2AB10", Offset = "0x2A29110", VA = "0x182A2AB10")]
	public static uint2x4 operator %(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002011")]
	[Address(RVA = "0x2A2A990", Offset = "0x2A28F90", VA = "0x182A2A990")]
	public static uint2x4 operator %(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002012")]
	[Address(RVA = "0x2A2AA50", Offset = "0x2A29050", VA = "0x182A2AA50")]
	public static uint2x4 operator %(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002013")]
	[Address(RVA = "0x2A2A2B0", Offset = "0x2A288B0", VA = "0x182A2A2B0")]
	public static uint2x4 operator ++(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002014")]
	[Address(RVA = "0x2A29700", Offset = "0x2A27D00", VA = "0x182A29700")]
	public static uint2x4 operator --(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002015")]
	[Address(RVA = "0x2A2A8D0", Offset = "0x2A28ED0", VA = "0x182A2A8D0")]
	public static bool2x4 operator <(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002016")]
	[Address(RVA = "0x2A2A7B0", Offset = "0x2A28DB0", VA = "0x182A2A7B0")]
	public static bool2x4 operator <(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002017")]
	[Address(RVA = "0x2A2A840", Offset = "0x2A28E40", VA = "0x182A2A840")]
	public static bool2x4 operator <(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002018")]
	[Address(RVA = "0x2A2A660", Offset = "0x2A28C60", VA = "0x182A2A660")]
	public static bool2x4 operator <=(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002019")]
	[Address(RVA = "0x2A2A5D0", Offset = "0x2A28BD0", VA = "0x182A2A5D0")]
	public static bool2x4 operator <=(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600201A")]
	[Address(RVA = "0x2A2A720", Offset = "0x2A28D20", VA = "0x182A2A720")]
	public static bool2x4 operator <=(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600201B")]
	[Address(RVA = "0x2A2A0D0", Offset = "0x2A286D0", VA = "0x182A2A0D0")]
	public static bool2x4 operator >(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600201C")]
	[Address(RVA = "0x2A2A190", Offset = "0x2A28790", VA = "0x182A2A190")]
	public static bool2x4 operator >(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600201D")]
	[Address(RVA = "0x2A2A220", Offset = "0x2A28820", VA = "0x182A2A220")]
	public static bool2x4 operator >(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600201E")]
	[Address(RVA = "0x2A29F80", Offset = "0x2A28580", VA = "0x182A29F80")]
	public static bool2x4 operator >=(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600201F")]
	[Address(RVA = "0x2A29EF0", Offset = "0x2A284F0", VA = "0x182A29EF0")]
	public static bool2x4 operator >=(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002020")]
	[Address(RVA = "0x2A2A040", Offset = "0x2A28640", VA = "0x182A2A040")]
	public static bool2x4 operator >=(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002021")]
	[Address(RVA = "0x2A2B120", Offset = "0x2A29720", VA = "0x182A2B120")]
	public static uint2x4 operator -(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002022")]
	[Address(RVA = "0x2A2B1B0", Offset = "0x2A297B0", VA = "0x182A2B1B0")]
	public static uint2x4 operator +(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002023")]
	[Address(RVA = "0x2A2A530", Offset = "0x2A28B30", VA = "0x182A2A530")]
	public static uint2x4 operator <<(uint2x4 x, int n)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002024")]
	[Address(RVA = "0x2A2AE80", Offset = "0x2A29480", VA = "0x182A2AE80")]
	public static uint2x4 operator >>(uint2x4 x, int n)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002025")]
	[Address(RVA = "0x2A29B20", Offset = "0x2A28120", VA = "0x182A29B20")]
	public static bool2x4 operator ==(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002026")]
	[Address(RVA = "0x2A29A90", Offset = "0x2A28090", VA = "0x182A29A90")]
	public static bool2x4 operator ==(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002027")]
	[Address(RVA = "0x2A29A00", Offset = "0x2A28000", VA = "0x182A29A00")]
	public static bool2x4 operator ==(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002028")]
	[Address(RVA = "0x2A2A470", Offset = "0x2A28A70", VA = "0x182A2A470")]
	public static bool2x4 operator !=(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002029")]
	[Address(RVA = "0x2A2A3E0", Offset = "0x2A289E0", VA = "0x182A2A3E0")]
	public static bool2x4 operator !=(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600202A")]
	[Address(RVA = "0x2A2A350", Offset = "0x2A28950", VA = "0x182A2A350")]
	public static bool2x4 operator !=(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600202B")]
	[Address(RVA = "0x2A2ADF0", Offset = "0x2A293F0", VA = "0x182A2ADF0")]
	public static uint2x4 operator ~(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600202C")]
	[Address(RVA = "0x2A29450", Offset = "0x2A27A50", VA = "0x182A29450")]
	public static uint2x4 operator &(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600202D")]
	[Address(RVA = "0x2A29320", Offset = "0x2A27920", VA = "0x182A29320")]
	public static uint2x4 operator &(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600202E")]
	[Address(RVA = "0x2A293C0", Offset = "0x2A279C0", VA = "0x182A293C0")]
	public static uint2x4 operator &(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600202F")]
	[Address(RVA = "0x2A29640", Offset = "0x2A27C40", VA = "0x182A29640")]
	public static uint2x4 operator |(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002030")]
	[Address(RVA = "0x2A295A0", Offset = "0x2A27BA0", VA = "0x182A295A0")]
	public static uint2x4 operator |(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002031")]
	[Address(RVA = "0x2A29510", Offset = "0x2A27B10", VA = "0x182A29510")]
	public static uint2x4 operator |(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002032")]
	[Address(RVA = "0x2A29C70", Offset = "0x2A28270", VA = "0x182A29C70")]
	public static uint2x4 operator ^(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002033")]
	[Address(RVA = "0x2A29D30", Offset = "0x2A28330", VA = "0x182A29D30")]
	public static uint2x4 operator ^(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002034")]
	[Address(RVA = "0x2A29BE0", Offset = "0x2A281E0", VA = "0x182A29BE0")]
	public static uint2x4 operator ^(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002036")]
	[Address(RVA = "0x2A28770", Offset = "0x2A26D70", VA = "0x182A28770", Slot = "4")]
	public bool Equals(uint2x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002037")]
	[Address(RVA = "0x2A28670", Offset = "0x2A26C70", VA = "0x182A28670", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002038")]
	[Address(RVA = "0x2A287F0", Offset = "0x2A26DF0", VA = "0x182A287F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002039")]
	[Address(RVA = "0x2A28890", Offset = "0x2A26E90", VA = "0x182A28890", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600203A")]
	[Address(RVA = "0x2A28C20", Offset = "0x2A27220", VA = "0x182A28C20", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
