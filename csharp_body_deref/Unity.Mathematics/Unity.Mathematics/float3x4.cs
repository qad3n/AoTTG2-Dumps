// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float3x4
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
[Token(Token = "0x2000031")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float3x4 : IEquatable<float3x4>, IFormattable
{
	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x0")]
	public float3 c0;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0xC")]
	public float3 c1;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x18")]
	public float3 c2;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x24")]
	public float3 c3;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float3x4 zero;

	[Token(Token = "0x17000473")]
	public unsafe ref float3 this[int index]
	{
		[Token(Token = "0x60012DC")]
		[Address(RVA = "0x4AC0690", Offset = "0x4AC0690", VA = "0x4AC0690")]
		get
		{
			return ref *(float3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x4ABDA00", Offset = "0x4ABDA00", VA = "0x4ABDA00")]
	public float3x4(float3 c0, float3 c1, float3 c2, float3 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A4")]
	[Address(RVA = "0x4ABDA30", Offset = "0x4ABDA30", VA = "0x4ABDA30")]
	public float3x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A5")]
	[Address(RVA = "0x4ABDA90", Offset = "0x4ABDA90", VA = "0x4ABDA90")]
	public float3x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x4ABDAC0", Offset = "0x4ABDAC0", VA = "0x4ABDAC0")]
	public float3x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x4ABDB10", Offset = "0x4ABDB10", VA = "0x4ABDB10")]
	public float3x4(bool3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x4ABDCC0", Offset = "0x4ABDCC0", VA = "0x4ABDCC0")]
	public float3x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x4ABDCF0", Offset = "0x4ABDCF0", VA = "0x4ABDCF0")]
	public float3x4(int3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x4ABDDA0", Offset = "0x4ABDDA0", VA = "0x4ABDDA0")]
	public float3x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x4ABDDE0", Offset = "0x4ABDDE0", VA = "0x4ABDDE0")]
	public float3x4(uint3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x4ABDEE0", Offset = "0x4ABDEE0", VA = "0x4ABDEE0")]
	public float3x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x4ABDF10", Offset = "0x4ABDF10", VA = "0x4ABDF10")]
	public float3x4(double3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x4ABDF80", Offset = "0x4ABDF80", VA = "0x4ABDF80")]
	public static implicit operator float3x4(float v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x4ABDFB0", Offset = "0x4ABDFB0", VA = "0x4ABDFB0")]
	public static explicit operator float3x4(bool v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B0")]
	[Address(RVA = "0x4ABE000", Offset = "0x4ABE000", VA = "0x4ABE000")]
	public static explicit operator float3x4(bool3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B1")]
	[Address(RVA = "0x4ABE1C0", Offset = "0x4ABE1C0", VA = "0x4ABE1C0")]
	public static implicit operator float3x4(int v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B2")]
	[Address(RVA = "0x4ABE200", Offset = "0x4ABE200", VA = "0x4ABE200")]
	public static implicit operator float3x4(int3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B3")]
	[Address(RVA = "0x4ABE2B0", Offset = "0x4ABE2B0", VA = "0x4ABE2B0")]
	public static implicit operator float3x4(uint v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x4ABE2F0", Offset = "0x4ABE2F0", VA = "0x4ABE2F0")]
	public static implicit operator float3x4(uint3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B5")]
	[Address(RVA = "0x4ABE3F0", Offset = "0x4ABE3F0", VA = "0x4ABE3F0")]
	public static explicit operator float3x4(double v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B6")]
	[Address(RVA = "0x4ABE430", Offset = "0x4ABE430", VA = "0x4ABE430")]
	public static explicit operator float3x4(double3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B7")]
	[Address(RVA = "0x4ABE4B0", Offset = "0x4ABE4B0", VA = "0x4ABE4B0")]
	public static float3x4 operator *(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B8")]
	[Address(RVA = "0x4ABE550", Offset = "0x4ABE550", VA = "0x4ABE550")]
	public static float3x4 operator *(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x4ABE5D0", Offset = "0x4ABE5D0", VA = "0x4ABE5D0")]
	public static float3x4 operator *(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x4ABE650", Offset = "0x4ABE650", VA = "0x4ABE650")]
	public static float3x4 operator +(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x4ABE6F0", Offset = "0x4ABE6F0", VA = "0x4ABE6F0")]
	public static float3x4 operator +(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x4ABE770", Offset = "0x4ABE770", VA = "0x4ABE770")]
	public static float3x4 operator +(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x4ABE7F0", Offset = "0x4ABE7F0", VA = "0x4ABE7F0")]
	public static float3x4 operator -(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x4ABE890", Offset = "0x4ABE890", VA = "0x4ABE890")]
	public static float3x4 operator -(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x4ABE910", Offset = "0x4ABE910", VA = "0x4ABE910")]
	public static float3x4 operator -(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x4ABE990", Offset = "0x4ABE990", VA = "0x4ABE990")]
	public static float3x4 operator /(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x4ABEA30", Offset = "0x4ABEA30", VA = "0x4ABEA30")]
	public static float3x4 operator /(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x4ABEAB0", Offset = "0x4ABEAB0", VA = "0x4ABEAB0")]
	public static float3x4 operator /(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x4ABEB30", Offset = "0x4ABEB30", VA = "0x4ABEB30")]
	public static float3x4 operator %(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x4ABEDD0", Offset = "0x4ABEDD0", VA = "0x4ABEDD0")]
	public static float3x4 operator %(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x4ABF000", Offset = "0x4ABF000", VA = "0x4ABF000")]
	public static float3x4 operator %(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x4ABF220", Offset = "0x4ABF220", VA = "0x4ABF220")]
	public static float3x4 operator ++(float3x4 val)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C7")]
	[Address(RVA = "0x4ABF2D0", Offset = "0x4ABF2D0", VA = "0x4ABF2D0")]
	public static float3x4 operator --(float3x4 val)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C8")]
	[Address(RVA = "0x4ABF380", Offset = "0x4ABF380", VA = "0x4ABF380")]
	public static bool3x4 operator <(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C9")]
	[Address(RVA = "0x4ABF490", Offset = "0x4ABF490", VA = "0x4ABF490")]
	public static bool3x4 operator <(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CA")]
	[Address(RVA = "0x4ABF560", Offset = "0x4ABF560", VA = "0x4ABF560")]
	public static bool3x4 operator <(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CB")]
	[Address(RVA = "0x4ABF640", Offset = "0x4ABF640", VA = "0x4ABF640")]
	public static bool3x4 operator <=(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CC")]
	[Address(RVA = "0x4ABF750", Offset = "0x4ABF750", VA = "0x4ABF750")]
	public static bool3x4 operator <=(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x4ABF820", Offset = "0x4ABF820", VA = "0x4ABF820")]
	public static bool3x4 operator <=(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x4ABF900", Offset = "0x4ABF900", VA = "0x4ABF900")]
	public static bool3x4 operator >(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x4ABFA10", Offset = "0x4ABFA10", VA = "0x4ABFA10")]
	public static bool3x4 operator >(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x4ABFAF0", Offset = "0x4ABFAF0", VA = "0x4ABFAF0")]
	public static bool3x4 operator >(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x4ABFBC0", Offset = "0x4ABFBC0", VA = "0x4ABFBC0")]
	public static bool3x4 operator >=(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x4ABFCD0", Offset = "0x4ABFCD0", VA = "0x4ABFCD0")]
	public static bool3x4 operator >=(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x4ABFDB0", Offset = "0x4ABFDB0", VA = "0x4ABFDB0")]
	public static bool3x4 operator >=(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D4")]
	[Address(RVA = "0x4ABFE80", Offset = "0x4ABFE80", VA = "0x4ABFE80")]
	public static float3x4 operator -(float3x4 val)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D5")]
	[Address(RVA = "0x4ABFF00", Offset = "0x4ABFF00", VA = "0x4ABFF00")]
	public static float3x4 operator +(float3x4 val)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D6")]
	[Address(RVA = "0x4ABFF50", Offset = "0x4ABFF50", VA = "0x4ABFF50")]
	public static bool3x4 operator ==(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D7")]
	[Address(RVA = "0x4AC00B0", Offset = "0x4AC00B0", VA = "0x4AC00B0")]
	public static bool3x4 operator ==(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D8")]
	[Address(RVA = "0x4AC01D0", Offset = "0x4AC01D0", VA = "0x4AC01D0")]
	public static bool3x4 operator ==(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D9")]
	[Address(RVA = "0x4AC02F0", Offset = "0x4AC02F0", VA = "0x4AC02F0")]
	public static bool3x4 operator !=(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DA")]
	[Address(RVA = "0x4AC0450", Offset = "0x4AC0450", VA = "0x4AC0450")]
	public static bool3x4 operator !=(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DB")]
	[Address(RVA = "0x4AC0570", Offset = "0x4AC0570", VA = "0x4AC0570")]
	public static bool3x4 operator !=(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DD")]
	[Address(RVA = "0x4AC06A0", Offset = "0x4AC06A0", VA = "0x4AC06A0", Slot = "4")]
	public bool Equals(float3x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60012DE")]
	[Address(RVA = "0x4AC0790", Offset = "0x4AC0790", VA = "0x4AC0790", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DF")]
	[Address(RVA = "0x4AC08E0", Offset = "0x4AC08E0", VA = "0x4AC08E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E0")]
	[Address(RVA = "0x4AC0A10", Offset = "0x4AC0A10", VA = "0x4AC0A10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E1")]
	[Address(RVA = "0x4AC0E70", Offset = "0x4AC0E70", VA = "0x4AC0E70", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
