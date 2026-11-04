// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float3x2
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
[Token(Token = "0x2000030")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float3x2 : IEquatable<float3x2>, IFormattable
{
	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x0")]
	public float3 c0;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0xC")]
	public float3 c1;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float3x2 zero;

	[Token(Token = "0x17000471")]
	public unsafe ref float3 this[int index]
	{
		[Token(Token = "0x60012B6")]
		[Address(RVA = "0x841BD0", Offset = "0x8401D0", VA = "0x180841BD0")]
		get
		{
			return ref *(float3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600127D")]
	[Address(RVA = "0x565080", Offset = "0x563680", VA = "0x180565080")]
	public float3x2(float3 c0, float3 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600127E")]
	[Address(RVA = "0x2A7CB30", Offset = "0x2A7B130", VA = "0x182A7CB30")]
	public float3x2(float m00, float m01, float m10, float m11, float m20, float m21)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600127F")]
	[Address(RVA = "0x2A781E0", Offset = "0x2A767E0", VA = "0x182A781E0")]
	public float3x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001280")]
	[Address(RVA = "0x2A7CBE0", Offset = "0x2A7B1E0", VA = "0x182A7CBE0")]
	public float3x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001281")]
	[Address(RVA = "0x2A7CC70", Offset = "0x2A7B270", VA = "0x182A7CC70")]
	public float3x2(bool3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001282")]
	[Address(RVA = "0x2A7CAF0", Offset = "0x2A7B0F0", VA = "0x182A7CAF0")]
	public float3x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001283")]
	[Address(RVA = "0x2A7CD80", Offset = "0x2A7B380", VA = "0x182A7CD80")]
	public float3x2(int3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001284")]
	[Address(RVA = "0x2A7CB60", Offset = "0x2A7B160", VA = "0x182A7CB60")]
	public float3x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001285")]
	[Address(RVA = "0x2A7CCF0", Offset = "0x2A7B2F0", VA = "0x182A7CCF0")]
	public float3x2(uint3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001286")]
	[Address(RVA = "0x2A7CC20", Offset = "0x2A7B220", VA = "0x182A7CC20")]
	public float3x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001287")]
	[Address(RVA = "0x2A78010", Offset = "0x2A76610", VA = "0x182A78010")]
	public float3x2(double3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001288")]
	[Address(RVA = "0x29DF700", Offset = "0x29DDD00", VA = "0x1829DF700")]
	public static implicit operator float3x2(float v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001289")]
	[Address(RVA = "0x29E0480", Offset = "0x29DEA80", VA = "0x1829E0480")]
	public static explicit operator float3x2(bool v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128A")]
	[Address(RVA = "0x29E06E0", Offset = "0x29DECE0", VA = "0x1829E06E0")]
	public static explicit operator float3x2(bool3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128B")]
	[Address(RVA = "0x29E04C0", Offset = "0x29DEAC0", VA = "0x1829E04C0")]
	public static implicit operator float3x2(int v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128C")]
	[Address(RVA = "0x29E0550", Offset = "0x29DEB50", VA = "0x1829E0550")]
	public static implicit operator float3x2(int3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128D")]
	[Address(RVA = "0x29E0660", Offset = "0x29DEC60", VA = "0x1829E0660")]
	public static implicit operator float3x2(uint v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128E")]
	[Address(RVA = "0x29E03C0", Offset = "0x29DE9C0", VA = "0x1829E03C0")]
	public static implicit operator float3x2(uint3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128F")]
	[Address(RVA = "0x29E0500", Offset = "0x29DEB00", VA = "0x1829E0500")]
	public static explicit operator float3x2(double v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001290")]
	[Address(RVA = "0x29E0350", Offset = "0x29DE950", VA = "0x1829E0350")]
	public static explicit operator float3x2(double3x2 v)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001291")]
	[Address(RVA = "0x2A7DBF0", Offset = "0x2A7C1F0", VA = "0x182A7DBF0")]
	public static float3x2 operator *(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001292")]
	[Address(RVA = "0x2A7DCB0", Offset = "0x2A7C2B0", VA = "0x182A7DCB0")]
	public static float3x2 operator *(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001293")]
	[Address(RVA = "0x2A7DC50", Offset = "0x2A7C250", VA = "0x182A7DC50")]
	public static float3x2 operator *(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001294")]
	[Address(RVA = "0x2A7CE50", Offset = "0x2A7B450", VA = "0x182A7CE50")]
	public static float3x2 operator +(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001295")]
	[Address(RVA = "0x2A7CEB0", Offset = "0x2A7B4B0", VA = "0x182A7CEB0")]
	public static float3x2 operator +(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001296")]
	[Address(RVA = "0x2A7CDF0", Offset = "0x2A7B3F0", VA = "0x182A7CDF0")]
	public static float3x2 operator +(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001297")]
	[Address(RVA = "0x2A7DD00", Offset = "0x2A7C300", VA = "0x182A7DD00")]
	public static float3x2 operator -(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001298")]
	[Address(RVA = "0x2A7DD60", Offset = "0x2A7C360", VA = "0x182A7DD60")]
	public static float3x2 operator -(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001299")]
	[Address(RVA = "0x2A7DDC0", Offset = "0x2A7C3C0", VA = "0x182A7DDC0")]
	public static float3x2 operator -(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129A")]
	[Address(RVA = "0x2A7CFE0", Offset = "0x2A7B5E0", VA = "0x182A7CFE0")]
	public static float3x2 operator /(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129B")]
	[Address(RVA = "0x2A7CF80", Offset = "0x2A7B580", VA = "0x182A7CF80")]
	public static float3x2 operator /(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129C")]
	[Address(RVA = "0x2A7D040", Offset = "0x2A7B640", VA = "0x182A7D040")]
	public static float3x2 operator /(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129D")]
	[Address(RVA = "0x2A7D980", Offset = "0x2A7BF80", VA = "0x182A7D980")]
	public static float3x2 operator %(float3x2 lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129E")]
	[Address(RVA = "0x2A7DB20", Offset = "0x2A7C120", VA = "0x182A7DB20")]
	public static float3x2 operator %(float3x2 lhs, float rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129F")]
	[Address(RVA = "0x2A7DA50", Offset = "0x2A7C050", VA = "0x182A7DA50")]
	public static float3x2 operator %(float lhs, float3x2 rhs)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x2A7D4C0", Offset = "0x2A7BAC0", VA = "0x182A7D4C0")]
	public static float3x2 operator ++(float3x2 val)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x2A7CF00", Offset = "0x2A7B500", VA = "0x182A7CF00")]
	public static float3x2 operator --(float3x2 val)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x2A7D8C0", Offset = "0x2A7BEC0", VA = "0x182A7D8C0")]
	public static bool3x2 operator <(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x2A7D930", Offset = "0x2A7BF30", VA = "0x182A7D930")]
	public static bool3x2 operator <(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A4")]
	[Address(RVA = "0x2A7D850", Offset = "0x2A7BE50", VA = "0x182A7D850")]
	public static bool3x2 operator <(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A5")]
	[Address(RVA = "0x2A7D7E0", Offset = "0x2A7BDE0", VA = "0x182A7D7E0")]
	public static bool3x2 operator <=(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x2A7D790", Offset = "0x2A7BD90", VA = "0x182A7D790")]
	public static bool3x2 operator <=(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x2A7D720", Offset = "0x2A7BD20", VA = "0x182A7D720")]
	public static bool3x2 operator <=(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x2A7D400", Offset = "0x2A7BA00", VA = "0x182A7D400")]
	public static bool3x2 operator >(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x2A7D3A0", Offset = "0x2A7B9A0", VA = "0x182A7D3A0")]
	public static bool3x2 operator >(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x2A7D470", Offset = "0x2A7BA70", VA = "0x182A7D470")]
	public static bool3x2 operator >(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x2A7D330", Offset = "0x2A7B930", VA = "0x182A7D330")]
	public static bool3x2 operator >=(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x2A7D280", Offset = "0x2A7B880", VA = "0x182A7D280")]
	public static bool3x2 operator >=(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x2A7D2E0", Offset = "0x2A7B8E0", VA = "0x182A7D2E0")]
	public static bool3x2 operator >=(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x2A7DE20", Offset = "0x2A7C420", VA = "0x182A7DE20")]
	public static float3x2 operator -(float3x2 val)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x2A7DE80", Offset = "0x2A7C480", VA = "0x182A7DE80")]
	public static float3x2 operator +(float3x2 val)
	{
		return default(float3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B0")]
	[Address(RVA = "0x2A7D1D0", Offset = "0x2A7B7D0", VA = "0x182A7D1D0")]
	public static bool3x2 operator ==(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B1")]
	[Address(RVA = "0x2A7D0A0", Offset = "0x2A7B6A0", VA = "0x182A7D0A0")]
	public static bool3x2 operator ==(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B2")]
	[Address(RVA = "0x2A7D140", Offset = "0x2A7B740", VA = "0x182A7D140")]
	public static bool3x2 operator ==(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B3")]
	[Address(RVA = "0x2A7D670", Offset = "0x2A7BC70", VA = "0x182A7D670")]
	public static bool3x2 operator !=(float3x2 lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x2A7D540", Offset = "0x2A7BB40", VA = "0x182A7D540")]
	public static bool3x2 operator !=(float3x2 lhs, float rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B5")]
	[Address(RVA = "0x2A7D5E0", Offset = "0x2A7BBE0", VA = "0x182A7D5E0")]
	public static bool3x2 operator !=(float lhs, float3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B7")]
	[Address(RVA = "0x2A3A030", Offset = "0x2A38630", VA = "0x182A3A030", Slot = "4")]
	public bool Equals(float3x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60012B8")]
	[Address(RVA = "0x2A7C3E0", Offset = "0x2A7A9E0", VA = "0x182A7C3E0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x2A7C4D0", Offset = "0x2A7AAD0", VA = "0x182A7C4D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x2A7C810", Offset = "0x2A7AE10", VA = "0x182A7C810", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x2A7C560", Offset = "0x2A7AB60", VA = "0x182A7C560", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
