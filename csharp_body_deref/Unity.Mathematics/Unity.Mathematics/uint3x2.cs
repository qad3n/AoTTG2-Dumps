// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.uint3x2
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
[Token(Token = "0x2000059")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint3x2 : IEquatable<uint3x2>, IFormattable
{
	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x0")]
	public uint3 c0;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0xC")]
	public uint3 c1;

	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint3x2 zero;

	[Token(Token = "0x17000A33")]
	public unsafe ref uint3 this[int index]
	{
		[Token(Token = "0x6002150")]
		[Address(RVA = "0x841BD0", Offset = "0x8401D0", VA = "0x180841BD0")]
		get
		{
			return ref *(uint3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210B")]
	[Address(RVA = "0x565080", Offset = "0x563680", VA = "0x180565080")]
	public uint3x2(uint3 c0, uint3 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210C")]
	[Address(RVA = "0x2A2D3D0", Offset = "0x2A2B9D0", VA = "0x182A2D3D0")]
	public uint3x2(uint m00, uint m01, uint m10, uint m11, uint m20, uint m21)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210D")]
	[Address(RVA = "0x2A2D570", Offset = "0x2A2BB70", VA = "0x182A2D570")]
	public uint3x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210E")]
	[Address(RVA = "0x2A2D3F0", Offset = "0x2A2B9F0", VA = "0x182A2D3F0")]
	public uint3x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210F")]
	[Address(RVA = "0x2A2D430", Offset = "0x2A2BA30", VA = "0x182A2D430")]
	public uint3x2(bool3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002110")]
	[Address(RVA = "0x2A2D570", Offset = "0x2A2BB70", VA = "0x182A2D570")]
	public uint3x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002111")]
	[Address(RVA = "0x2A2D530", Offset = "0x2A2BB30", VA = "0x182A2D530")]
	public uint3x2(int3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002112")]
	[Address(RVA = "0x29CE110", Offset = "0x29CC710", VA = "0x1829CE110")]
	public uint3x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002113")]
	[Address(RVA = "0x2A2D480", Offset = "0x2A2BA80", VA = "0x182A2D480")]
	public uint3x2(float3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002114")]
	[Address(RVA = "0x29CE190", Offset = "0x29CC790", VA = "0x1829CE190")]
	public uint3x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002115")]
	[Address(RVA = "0x2A2D590", Offset = "0x2A2BB90", VA = "0x182A2D590")]
	public uint3x2(double3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002116")]
	[Address(RVA = "0x29EAFD0", Offset = "0x29E95D0", VA = "0x1829EAFD0")]
	public static implicit operator uint3x2(uint v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002117")]
	[Address(RVA = "0x29EAFF0", Offset = "0x29E95F0", VA = "0x1829EAFF0")]
	public static explicit operator uint3x2(bool v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002118")]
	[Address(RVA = "0x29EB030", Offset = "0x29E9630", VA = "0x1829EB030")]
	public static explicit operator uint3x2(bool3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002119")]
	[Address(RVA = "0x29EAFD0", Offset = "0x29E95D0", VA = "0x1829EAFD0")]
	public static explicit operator uint3x2(int v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211A")]
	[Address(RVA = "0x29EAED0", Offset = "0x29E94D0", VA = "0x1829EAED0")]
	public static explicit operator uint3x2(int3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211B")]
	[Address(RVA = "0x2A2DD10", Offset = "0x2A2C310", VA = "0x182A2DD10")]
	public static explicit operator uint3x2(float v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211C")]
	[Address(RVA = "0x2A0EE50", Offset = "0x2A0D450", VA = "0x182A0EE50")]
	public static explicit operator uint3x2(float3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211D")]
	[Address(RVA = "0x2A2DD40", Offset = "0x2A2C340", VA = "0x182A2DD40")]
	public static explicit operator uint3x2(double v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211E")]
	[Address(RVA = "0x2A0ED90", Offset = "0x2A0D390", VA = "0x182A0ED90")]
	public static explicit operator uint3x2(double3x2 v)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211F")]
	[Address(RVA = "0x2A2E480", Offset = "0x2A2CA80", VA = "0x182A2E480")]
	public static uint3x2 operator *(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002120")]
	[Address(RVA = "0x2A2E4E0", Offset = "0x2A2CAE0", VA = "0x182A2E4E0")]
	public static uint3x2 operator *(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002121")]
	[Address(RVA = "0x2A2E540", Offset = "0x2A2CB40", VA = "0x182A2E540")]
	public static uint3x2 operator *(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002122")]
	[Address(RVA = "0x2A2D6B0", Offset = "0x2A2BCB0", VA = "0x182A2D6B0")]
	public static uint3x2 operator +(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002123")]
	[Address(RVA = "0x2A2D710", Offset = "0x2A2BD10", VA = "0x182A2D710")]
	public static uint3x2 operator +(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002124")]
	[Address(RVA = "0x2A2D640", Offset = "0x2A2BC40", VA = "0x182A2D640")]
	public static uint3x2 operator +(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002125")]
	[Address(RVA = "0x2A2E700", Offset = "0x2A2CD00", VA = "0x182A2E700")]
	public static uint3x2 operator -(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002126")]
	[Address(RVA = "0x2A2E6A0", Offset = "0x2A2CCA0", VA = "0x182A2E6A0")]
	public static uint3x2 operator -(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002127")]
	[Address(RVA = "0x2A2E640", Offset = "0x2A2CC40", VA = "0x182A2E640")]
	public static uint3x2 operator -(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002128")]
	[Address(RVA = "0x2A2DAB0", Offset = "0x2A2C0B0", VA = "0x182A2DAB0")]
	public static uint3x2 operator /(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002129")]
	[Address(RVA = "0x2A2DA40", Offset = "0x2A2C040", VA = "0x182A2DA40")]
	public static uint3x2 operator /(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212A")]
	[Address(RVA = "0x2A2D9D0", Offset = "0x2A2BFD0", VA = "0x182A2D9D0")]
	public static uint3x2 operator /(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212B")]
	[Address(RVA = "0x2A2E330", Offset = "0x2A2C930", VA = "0x182A2E330")]
	public static uint3x2 operator %(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212C")]
	[Address(RVA = "0x2A2E3A0", Offset = "0x2A2C9A0", VA = "0x182A2E3A0")]
	public static uint3x2 operator %(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212D")]
	[Address(RVA = "0x2A2E410", Offset = "0x2A2CA10", VA = "0x182A2E410")]
	public static uint3x2 operator %(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212E")]
	[Address(RVA = "0x2A2DF70", Offset = "0x2A2C570", VA = "0x182A2DF70")]
	public static uint3x2 operator ++(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212F")]
	[Address(RVA = "0x2A2D960", Offset = "0x2A2BF60", VA = "0x182A2D960")]
	public static uint3x2 operator --(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002130")]
	[Address(RVA = "0x2A2E280", Offset = "0x2A2C880", VA = "0x182A2E280")]
	public static bool3x2 operator <(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002131")]
	[Address(RVA = "0x2A2E230", Offset = "0x2A2C830", VA = "0x182A2E230")]
	public static bool3x2 operator <(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002132")]
	[Address(RVA = "0x2A2E2E0", Offset = "0x2A2C8E0", VA = "0x182A2E2E0")]
	public static bool3x2 operator <(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002133")]
	[Address(RVA = "0x2A2E1D0", Offset = "0x2A2C7D0", VA = "0x182A2E1D0")]
	public static bool3x2 operator <=(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002134")]
	[Address(RVA = "0x2A2E180", Offset = "0x2A2C780", VA = "0x182A2E180")]
	public static bool3x2 operator <=(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002135")]
	[Address(RVA = "0x2A2E130", Offset = "0x2A2C730", VA = "0x182A2E130")]
	public static bool3x2 operator <=(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002136")]
	[Address(RVA = "0x2A2DE70", Offset = "0x2A2C470", VA = "0x182A2DE70")]
	public static bool3x2 operator >(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002137")]
	[Address(RVA = "0x2A2DED0", Offset = "0x2A2C4D0", VA = "0x182A2DED0")]
	public static bool3x2 operator >(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002138")]
	[Address(RVA = "0x2A2DF20", Offset = "0x2A2C520", VA = "0x182A2DF20")]
	public static bool3x2 operator >(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002139")]
	[Address(RVA = "0x2A2DDC0", Offset = "0x2A2C3C0", VA = "0x182A2DDC0")]
	public static bool3x2 operator >=(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213A")]
	[Address(RVA = "0x2A2DE20", Offset = "0x2A2C420", VA = "0x182A2DE20")]
	public static bool3x2 operator >=(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213B")]
	[Address(RVA = "0x2A2DD70", Offset = "0x2A2C370", VA = "0x182A2DD70")]
	public static bool3x2 operator >=(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213C")]
	[Address(RVA = "0x2A2E760", Offset = "0x2A2CD60", VA = "0x182A2E760")]
	public static uint3x2 operator -(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213D")]
	[Address(RVA = "0x2A2E7A0", Offset = "0x2A2CDA0", VA = "0x182A2E7A0")]
	public static uint3x2 operator +(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213E")]
	[Address(RVA = "0x2A2E0E0", Offset = "0x2A2C6E0", VA = "0x182A2E0E0")]
	public static uint3x2 operator <<(uint3x2 x, int n)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213F")]
	[Address(RVA = "0x2A2E5E0", Offset = "0x2A2CBE0", VA = "0x182A2E5E0")]
	public static uint3x2 operator >>(uint3x2 x, int n)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002140")]
	[Address(RVA = "0x2A2DB20", Offset = "0x2A2C120", VA = "0x182A2DB20")]
	public static bool3x2 operator ==(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002141")]
	[Address(RVA = "0x2A2DB80", Offset = "0x2A2C180", VA = "0x182A2DB80")]
	public static bool3x2 operator ==(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002142")]
	[Address(RVA = "0x2A2DBD0", Offset = "0x2A2C1D0", VA = "0x182A2DBD0")]
	public static bool3x2 operator ==(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002143")]
	[Address(RVA = "0x2A2E080", Offset = "0x2A2C680", VA = "0x182A2E080")]
	public static bool3x2 operator !=(uint3x2 lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002144")]
	[Address(RVA = "0x2A2E030", Offset = "0x2A2C630", VA = "0x182A2E030")]
	public static bool3x2 operator !=(uint3x2 lhs, uint rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002145")]
	[Address(RVA = "0x2A2DFE0", Offset = "0x2A2C5E0", VA = "0x182A2DFE0")]
	public static bool3x2 operator !=(uint lhs, uint3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002146")]
	[Address(RVA = "0x2A2E5A0", Offset = "0x2A2CBA0", VA = "0x182A2E5A0")]
	public static uint3x2 operator ~(uint3x2 val)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002147")]
	[Address(RVA = "0x2A2D820", Offset = "0x2A2BE20", VA = "0x182A2D820")]
	public static uint3x2 operator &(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002148")]
	[Address(RVA = "0x2A2D7D0", Offset = "0x2A2BDD0", VA = "0x182A2D7D0")]
	public static uint3x2 operator &(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002149")]
	[Address(RVA = "0x2A2D780", Offset = "0x2A2BD80", VA = "0x182A2D780")]
	public static uint3x2 operator &(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214A")]
	[Address(RVA = "0x2A2D910", Offset = "0x2A2BF10", VA = "0x182A2D910")]
	public static uint3x2 operator |(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214B")]
	[Address(RVA = "0x2A2D870", Offset = "0x2A2BE70", VA = "0x182A2D870")]
	public static uint3x2 operator |(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214C")]
	[Address(RVA = "0x2A2D8C0", Offset = "0x2A2BEC0", VA = "0x182A2D8C0")]
	public static uint3x2 operator |(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214D")]
	[Address(RVA = "0x2A2DC20", Offset = "0x2A2C220", VA = "0x182A2DC20")]
	public static uint3x2 operator ^(uint3x2 lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214E")]
	[Address(RVA = "0x2A2DC70", Offset = "0x2A2C270", VA = "0x182A2DC70")]
	public static uint3x2 operator ^(uint3x2 lhs, uint rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600214F")]
	[Address(RVA = "0x2A2DCC0", Offset = "0x2A2C2C0", VA = "0x182A2DCC0")]
	public static uint3x2 operator ^(uint lhs, uint3x2 rhs)
	{
		return default(uint3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002151")]
	[Address(RVA = "0x2A2CD80", Offset = "0x2A2B380", VA = "0x182A2CD80", Slot = "4")]
	public bool Equals(uint3x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002152")]
	[Address(RVA = "0x2A2CCA0", Offset = "0x2A2B2A0", VA = "0x182A2CCA0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002153")]
	[Address(RVA = "0x2A2CDD0", Offset = "0x2A2B3D0", VA = "0x182A2CDD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002154")]
	[Address(RVA = "0x2A2D100", Offset = "0x2A2B700", VA = "0x182A2D100", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002155")]
	[Address(RVA = "0x2A2CE50", Offset = "0x2A2B450", VA = "0x182A2CE50", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
