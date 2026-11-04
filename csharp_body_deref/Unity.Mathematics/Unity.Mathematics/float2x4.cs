// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float2x4
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
[Token(Token = "0x200002D")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float2x4 : IEquatable<float2x4>, IFormattable
{
	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x0")]
	public float2 c0;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x8")]
	public float2 c1;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x10")]
	public float2 c2;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x18")]
	public float2 c3;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float2x4 zero;

	[Token(Token = "0x170003FA")]
	public unsafe ref float2 this[int index]
	{
		[Token(Token = "0x60011AD")]
		[Address(RVA = "0x841B10", Offset = "0x840110", VA = "0x180841B10")]
		get
		{
			return ref *(float2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001174")]
	[Address(RVA = "0x2A79DB0", Offset = "0x2A783B0", VA = "0x182A79DB0")]
	public float2x4(float2 c0, float2 c1, float2 c2, float2 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001175")]
	[Address(RVA = "0x2A79CF0", Offset = "0x2A782F0", VA = "0x182A79CF0")]
	public float2x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001176")]
	[Address(RVA = "0x2A79DD0", Offset = "0x2A783D0", VA = "0x182A79DD0")]
	public float2x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001177")]
	[Address(RVA = "0x2A79F80", Offset = "0x2A78580", VA = "0x182A79F80")]
	public float2x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001178")]
	[Address(RVA = "0x29C77D0", Offset = "0x29C5DD0", VA = "0x1829C77D0")]
	public float2x4(bool2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001179")]
	[Address(RVA = "0x2A7A040", Offset = "0x2A78640", VA = "0x182A7A040")]
	public float2x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117A")]
	[Address(RVA = "0x2A79DE0", Offset = "0x2A783E0", VA = "0x182A79DE0")]
	public float2x4(int2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117B")]
	[Address(RVA = "0x2A79FA0", Offset = "0x2A785A0", VA = "0x182A79FA0")]
	public float2x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117C")]
	[Address(RVA = "0x2A79E60", Offset = "0x2A78460", VA = "0x182A79E60")]
	public float2x4(uint2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117D")]
	[Address(RVA = "0x2A79F20", Offset = "0x2A78520", VA = "0x182A79F20")]
	public float2x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117E")]
	[Address(RVA = "0x2A79D40", Offset = "0x2A78340", VA = "0x182A79D40")]
	public float2x4(double2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117F")]
	[Address(RVA = "0x29DFE30", Offset = "0x29DE430", VA = "0x1829DFE30")]
	public static implicit operator float2x4(float v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001180")]
	[Address(RVA = "0x29DFB70", Offset = "0x29DE170", VA = "0x1829DFB70")]
	public static explicit operator float2x4(bool v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001181")]
	[Address(RVA = "0x2A7A620", Offset = "0x2A78C20", VA = "0x182A7A620")]
	public static explicit operator float2x4(bool2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001182")]
	[Address(RVA = "0x29DFDE0", Offset = "0x29DE3E0", VA = "0x1829DFDE0")]
	public static implicit operator float2x4(int v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001183")]
	[Address(RVA = "0x29DFFA0", Offset = "0x29DE5A0", VA = "0x1829DFFA0")]
	public static implicit operator float2x4(int2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001184")]
	[Address(RVA = "0x29DFCF0", Offset = "0x29DE2F0", VA = "0x1829DFCF0")]
	public static implicit operator float2x4(uint v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001185")]
	[Address(RVA = "0x29DFEA0", Offset = "0x29DE4A0", VA = "0x1829DFEA0")]
	public static implicit operator float2x4(uint2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001186")]
	[Address(RVA = "0x29DFE40", Offset = "0x29DE440", VA = "0x1829DFE40")]
	public static explicit operator float2x4(double v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001187")]
	[Address(RVA = "0x29DFBB0", Offset = "0x29DE1B0", VA = "0x1829DFBB0")]
	public static explicit operator float2x4(double2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001188")]
	[Address(RVA = "0x2A7B3A0", Offset = "0x2A799A0", VA = "0x182A7B3A0")]
	public static float2x4 operator *(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001189")]
	[Address(RVA = "0x2A7B430", Offset = "0x2A79A30", VA = "0x182A7B430")]
	public static float2x4 operator *(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118A")]
	[Address(RVA = "0x2A7B350", Offset = "0x2A79950", VA = "0x182A7B350")]
	public static float2x4 operator *(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118B")]
	[Address(RVA = "0x2A7A090", Offset = "0x2A78690", VA = "0x182A7A090")]
	public static float2x4 operator +(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118C")]
	[Address(RVA = "0x2A7A120", Offset = "0x2A78720", VA = "0x182A7A120")]
	public static float2x4 operator +(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118D")]
	[Address(RVA = "0x2A7A140", Offset = "0x2A78740", VA = "0x182A7A140")]
	public static float2x4 operator +(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118E")]
	[Address(RVA = "0x2A7B470", Offset = "0x2A79A70", VA = "0x182A7B470")]
	public static float2x4 operator -(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118F")]
	[Address(RVA = "0x2A7B450", Offset = "0x2A79A50", VA = "0x182A7B450")]
	public static float2x4 operator -(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001190")]
	[Address(RVA = "0x2A7B500", Offset = "0x2A79B00", VA = "0x182A7B500")]
	public static float2x4 operator -(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001191")]
	[Address(RVA = "0x2A7A2B0", Offset = "0x2A788B0", VA = "0x182A7A2B0")]
	public static float2x4 operator /(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001192")]
	[Address(RVA = "0x2A7A340", Offset = "0x2A78940", VA = "0x182A7A340")]
	public static float2x4 operator /(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001193")]
	[Address(RVA = "0x2A7A240", Offset = "0x2A78840", VA = "0x182A7A240")]
	public static float2x4 operator /(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001194")]
	[Address(RVA = "0x2A7B1C0", Offset = "0x2A797C0", VA = "0x182A7B1C0")]
	public static float2x4 operator %(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001195")]
	[Address(RVA = "0x2A7B290", Offset = "0x2A79890", VA = "0x182A7B290")]
	public static float2x4 operator %(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001196")]
	[Address(RVA = "0x2A7B100", Offset = "0x2A79700", VA = "0x182A7B100")]
	public static float2x4 operator %(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001197")]
	[Address(RVA = "0x2A7A9F0", Offset = "0x2A78FF0", VA = "0x182A7A9F0")]
	public static float2x4 operator ++(float2x4 val)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001198")]
	[Address(RVA = "0x2A7A190", Offset = "0x2A78790", VA = "0x182A7A190")]
	public static float2x4 operator --(float2x4 val)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001199")]
	[Address(RVA = "0x2A7B050", Offset = "0x2A79650", VA = "0x182A7B050")]
	public static bool2x4 operator <(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600119A")]
	[Address(RVA = "0x2A7AFD0", Offset = "0x2A795D0", VA = "0x182A7AFD0")]
	public static bool2x4 operator <(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600119B")]
	[Address(RVA = "0x2A7AF30", Offset = "0x2A79530", VA = "0x182A7AF30")]
	public static bool2x4 operator <(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600119C")]
	[Address(RVA = "0x2A7AE80", Offset = "0x2A79480", VA = "0x182A7AE80")]
	public static bool2x4 operator <=(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600119D")]
	[Address(RVA = "0x2A7AD60", Offset = "0x2A79360", VA = "0x182A7AD60")]
	public static bool2x4 operator <=(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600119E")]
	[Address(RVA = "0x2A7ADE0", Offset = "0x2A793E0", VA = "0x182A7ADE0")]
	public static bool2x4 operator <=(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600119F")]
	[Address(RVA = "0x2A7A820", Offset = "0x2A78E20", VA = "0x182A7A820")]
	public static bool2x4 operator >(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x2A7A950", Offset = "0x2A78F50", VA = "0x182A7A950")]
	public static bool2x4 operator >(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x2A7A8D0", Offset = "0x2A78ED0", VA = "0x182A7A8D0")]
	public static bool2x4 operator >(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x2A7A770", Offset = "0x2A78D70", VA = "0x182A7A770")]
	public static bool2x4 operator >=(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x2A7A650", Offset = "0x2A78C50", VA = "0x182A7A650")]
	public static bool2x4 operator >=(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x2A7A6F0", Offset = "0x2A78CF0", VA = "0x182A7A6F0")]
	public static bool2x4 operator >=(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A5")]
	[Address(RVA = "0x2A7B570", Offset = "0x2A79B70", VA = "0x182A7B570")]
	public static float2x4 operator -(float2x4 val)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x2A7B590", Offset = "0x2A79B90", VA = "0x182A7B590")]
	public static float2x4 operator +(float2x4 val)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x2A7A360", Offset = "0x2A78960", VA = "0x182A7A360")]
	public static bool2x4 operator ==(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A8")]
	[Address(RVA = "0x2A7A460", Offset = "0x2A78A60", VA = "0x182A7A460")]
	public static bool2x4 operator ==(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A9")]
	[Address(RVA = "0x2A7A550", Offset = "0x2A78B50", VA = "0x182A7A550")]
	public static bool2x4 operator ==(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011AA")]
	[Address(RVA = "0x2A7AB90", Offset = "0x2A79190", VA = "0x182A7AB90")]
	public static bool2x4 operator !=(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011AB")]
	[Address(RVA = "0x2A7AAA0", Offset = "0x2A790A0", VA = "0x182A7AAA0")]
	public static bool2x4 operator !=(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x2A7AC90", Offset = "0x2A79290", VA = "0x182A7AC90")]
	public static bool2x4 operator !=(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011AE")]
	[Address(RVA = "0x2A793F0", Offset = "0x2A779F0", VA = "0x182A793F0", Slot = "4")]
	public bool Equals(float2x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AF")]
	[Address(RVA = "0x2A79460", Offset = "0x2A77A60", VA = "0x182A79460", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011B0")]
	[Address(RVA = "0x2A79550", Offset = "0x2A77B50", VA = "0x182A79550", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011B1")]
	[Address(RVA = "0x2A79940", Offset = "0x2A77F40", VA = "0x182A79940", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011B2")]
	[Address(RVA = "0x2A795E0", Offset = "0x2A77BE0", VA = "0x182A795E0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
