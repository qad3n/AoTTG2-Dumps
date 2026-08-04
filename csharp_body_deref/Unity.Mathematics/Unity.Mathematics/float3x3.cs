// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float3x3
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
public struct float3x3 : IEquatable<float3x3>, IFormattable
{
	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x0")]
	public float3 c0;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0xC")]
	public float3 c1;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x18")]
	public float3 c2;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float3x3 identity;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x24")]
	public static readonly float3x3 zero;

	[Token(Token = "0x17000472")]
	public unsafe ref float3 this[int index]
	{
		[Token(Token = "0x6001282")]
		[Address(RVA = "0x4ABAF50", Offset = "0x4ABAF50", VA = "0x4ABAF50")]
		get
		{
			return ref *(float3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001249")]
	[Address(RVA = "0x4AB8E50", Offset = "0x4AB8E50", VA = "0x4AB8E50")]
	public float3x3(float3 c0, float3 c1, float3 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600124A")]
	[Address(RVA = "0x4AB8E70", Offset = "0x4AB8E70", VA = "0x4AB8E70")]
	public float3x3(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600124B")]
	[Address(RVA = "0x4AB8EB0", Offset = "0x4AB8EB0", VA = "0x4AB8EB0")]
	public float3x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600124C")]
	[Address(RVA = "0x4AB8EE0", Offset = "0x4AB8EE0", VA = "0x4AB8EE0")]
	public float3x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600124D")]
	[Address(RVA = "0x4AB8F20", Offset = "0x4AB8F20", VA = "0x4AB8F20")]
	public float3x3(bool3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600124E")]
	[Address(RVA = "0x4AB9050", Offset = "0x4AB9050", VA = "0x4AB9050")]
	public float3x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600124F")]
	[Address(RVA = "0x4AB9080", Offset = "0x4AB9080", VA = "0x4AB9080")]
	public float3x3(int3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001250")]
	[Address(RVA = "0x4AB9100", Offset = "0x4AB9100", VA = "0x4AB9100")]
	public float3x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001251")]
	[Address(RVA = "0x4AB9130", Offset = "0x4AB9130", VA = "0x4AB9130")]
	public float3x3(uint3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001252")]
	[Address(RVA = "0x4AB91F0", Offset = "0x4AB91F0", VA = "0x4AB91F0")]
	public float3x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001253")]
	[Address(RVA = "0x4AB9220", Offset = "0x4AB9220", VA = "0x4AB9220")]
	public float3x3(double3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001254")]
	[Address(RVA = "0x4AB9280", Offset = "0x4AB9280", VA = "0x4AB9280")]
	public static implicit operator float3x3(float v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001255")]
	[Address(RVA = "0x4AB92B0", Offset = "0x4AB92B0", VA = "0x4AB92B0")]
	public static explicit operator float3x3(bool v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001256")]
	[Address(RVA = "0x4AB92F0", Offset = "0x4AB92F0", VA = "0x4AB92F0")]
	public static explicit operator float3x3(bool3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001257")]
	[Address(RVA = "0x4AB9430", Offset = "0x4AB9430", VA = "0x4AB9430")]
	public static implicit operator float3x3(int v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001258")]
	[Address(RVA = "0x4AB9460", Offset = "0x4AB9460", VA = "0x4AB9460")]
	public static implicit operator float3x3(int3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001259")]
	[Address(RVA = "0x4AB94E0", Offset = "0x4AB94E0", VA = "0x4AB94E0")]
	public static implicit operator float3x3(uint v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600125A")]
	[Address(RVA = "0x4AB9510", Offset = "0x4AB9510", VA = "0x4AB9510")]
	public static implicit operator float3x3(uint3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600125B")]
	[Address(RVA = "0x4AB95D0", Offset = "0x4AB95D0", VA = "0x4AB95D0")]
	public static explicit operator float3x3(double v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600125C")]
	[Address(RVA = "0x4AB9600", Offset = "0x4AB9600", VA = "0x4AB9600")]
	public static explicit operator float3x3(double3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600125D")]
	[Address(RVA = "0x4AB9660", Offset = "0x4AB9660", VA = "0x4AB9660")]
	public static float3x3 operator *(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600125E")]
	[Address(RVA = "0x4AB96D0", Offset = "0x4AB96D0", VA = "0x4AB96D0")]
	public static float3x3 operator *(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600125F")]
	[Address(RVA = "0x4AB9730", Offset = "0x4AB9730", VA = "0x4AB9730")]
	public static float3x3 operator *(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001260")]
	[Address(RVA = "0x4AB9790", Offset = "0x4AB9790", VA = "0x4AB9790")]
	public static float3x3 operator +(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001261")]
	[Address(RVA = "0x4AB9800", Offset = "0x4AB9800", VA = "0x4AB9800")]
	public static float3x3 operator +(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001262")]
	[Address(RVA = "0x4AB9860", Offset = "0x4AB9860", VA = "0x4AB9860")]
	public static float3x3 operator +(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001263")]
	[Address(RVA = "0x4AB98C0", Offset = "0x4AB98C0", VA = "0x4AB98C0")]
	public static float3x3 operator -(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001264")]
	[Address(RVA = "0x4AB9930", Offset = "0x4AB9930", VA = "0x4AB9930")]
	public static float3x3 operator -(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001265")]
	[Address(RVA = "0x4AB9990", Offset = "0x4AB9990", VA = "0x4AB9990")]
	public static float3x3 operator -(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001266")]
	[Address(RVA = "0x4AB99F0", Offset = "0x4AB99F0", VA = "0x4AB99F0")]
	public static float3x3 operator /(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001267")]
	[Address(RVA = "0x4AB9A60", Offset = "0x4AB9A60", VA = "0x4AB9A60")]
	public static float3x3 operator /(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001268")]
	[Address(RVA = "0x4AB9AC0", Offset = "0x4AB9AC0", VA = "0x4AB9AC0")]
	public static float3x3 operator /(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001269")]
	[Address(RVA = "0x4AB9B20", Offset = "0x4AB9B20", VA = "0x4AB9B20")]
	public static float3x3 operator %(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600126A")]
	[Address(RVA = "0x4AB9D10", Offset = "0x4AB9D10", VA = "0x4AB9D10")]
	public static float3x3 operator %(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600126B")]
	[Address(RVA = "0x4AB9EA0", Offset = "0x4AB9EA0", VA = "0x4AB9EA0")]
	public static float3x3 operator %(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600126C")]
	[Address(RVA = "0x4ABA030", Offset = "0x4ABA030", VA = "0x4ABA030")]
	public static float3x3 operator ++(float3x3 val)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600126D")]
	[Address(RVA = "0x4ABA0B0", Offset = "0x4ABA0B0", VA = "0x4ABA0B0")]
	public static float3x3 operator --(float3x3 val)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600126E")]
	[Address(RVA = "0x4ABA130", Offset = "0x4ABA130", VA = "0x4ABA130")]
	public static bool3x3 operator <(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600126F")]
	[Address(RVA = "0x4ABA200", Offset = "0x4ABA200", VA = "0x4ABA200")]
	public static bool3x3 operator <(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001270")]
	[Address(RVA = "0x4ABA2A0", Offset = "0x4ABA2A0", VA = "0x4ABA2A0")]
	public static bool3x3 operator <(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001271")]
	[Address(RVA = "0x4ABA340", Offset = "0x4ABA340", VA = "0x4ABA340")]
	public static bool3x3 operator <=(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001272")]
	[Address(RVA = "0x4ABA410", Offset = "0x4ABA410", VA = "0x4ABA410")]
	public static bool3x3 operator <=(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001273")]
	[Address(RVA = "0x4ABA4B0", Offset = "0x4ABA4B0", VA = "0x4ABA4B0")]
	public static bool3x3 operator <=(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001274")]
	[Address(RVA = "0x4ABA550", Offset = "0x4ABA550", VA = "0x4ABA550")]
	public static bool3x3 operator >(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001275")]
	[Address(RVA = "0x4ABA620", Offset = "0x4ABA620", VA = "0x4ABA620")]
	public static bool3x3 operator >(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001276")]
	[Address(RVA = "0x4ABA6C0", Offset = "0x4ABA6C0", VA = "0x4ABA6C0")]
	public static bool3x3 operator >(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001277")]
	[Address(RVA = "0x4ABA760", Offset = "0x4ABA760", VA = "0x4ABA760")]
	public static bool3x3 operator >=(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001278")]
	[Address(RVA = "0x4ABA830", Offset = "0x4ABA830", VA = "0x4ABA830")]
	public static bool3x3 operator >=(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001279")]
	[Address(RVA = "0x4ABA8D0", Offset = "0x4ABA8D0", VA = "0x4ABA8D0")]
	public static bool3x3 operator >=(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600127A")]
	[Address(RVA = "0x4ABA970", Offset = "0x4ABA970", VA = "0x4ABA970")]
	public static float3x3 operator -(float3x3 val)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600127B")]
	[Address(RVA = "0x4ABA9D0", Offset = "0x4ABA9D0", VA = "0x4ABA9D0")]
	public static float3x3 operator +(float3x3 val)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600127C")]
	[Address(RVA = "0x4ABAA10", Offset = "0x4ABAA10", VA = "0x4ABAA10")]
	public static bool3x3 operator ==(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600127D")]
	[Address(RVA = "0x4ABAB10", Offset = "0x4ABAB10", VA = "0x4ABAB10")]
	public static bool3x3 operator ==(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600127E")]
	[Address(RVA = "0x4ABABE0", Offset = "0x4ABABE0", VA = "0x4ABABE0")]
	public static bool3x3 operator ==(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600127F")]
	[Address(RVA = "0x4ABACB0", Offset = "0x4ABACB0", VA = "0x4ABACB0")]
	public static bool3x3 operator !=(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001280")]
	[Address(RVA = "0x4ABADB0", Offset = "0x4ABADB0", VA = "0x4ABADB0")]
	public static bool3x3 operator !=(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001281")]
	[Address(RVA = "0x4ABAE80", Offset = "0x4ABAE80", VA = "0x4ABAE80")]
	public static bool3x3 operator !=(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001283")]
	[Address(RVA = "0x4ABAF60", Offset = "0x4ABAF60", VA = "0x4ABAF60", Slot = "4")]
	public bool Equals(float3x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001284")]
	[Address(RVA = "0x4ABB010", Offset = "0x4ABB010", VA = "0x4ABB010", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001285")]
	[Address(RVA = "0x4ABB110", Offset = "0x4ABB110", VA = "0x4ABB110", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001286")]
	[Address(RVA = "0x4ABB1F0", Offset = "0x4ABB1F0", VA = "0x4ABB1F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001287")]
	[Address(RVA = "0x4ABB560", Offset = "0x4ABB560", VA = "0x4ABB560", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x4ABB8A0", Offset = "0x4ABB8A0", VA = "0x4ABB8A0")]
	public float3x3(float4x4 f4x4)
	{
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x4ABB8D0", Offset = "0x4ABB8D0", VA = "0x4ABB8D0")]
	public float3x3(quaternion q)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128A")]
	[Address(RVA = "0x4ABBA20", Offset = "0x4ABBA20", VA = "0x4ABBA20")]
	public static float3x3 AxisAngle(float3 axis, float angle)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128B")]
	[Address(RVA = "0x4ABBC00", Offset = "0x4ABBC00", VA = "0x4ABBC00")]
	public static float3x3 EulerXYZ(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128C")]
	[Address(RVA = "0x4ABBD10", Offset = "0x4ABBD10", VA = "0x4ABBD10")]
	public static float3x3 EulerXZY(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128D")]
	[Address(RVA = "0x4ABBE10", Offset = "0x4ABBE10", VA = "0x4ABBE10")]
	public static float3x3 EulerYXZ(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128E")]
	[Address(RVA = "0x4ABBF20", Offset = "0x4ABBF20", VA = "0x4ABBF20")]
	public static float3x3 EulerYZX(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600128F")]
	[Address(RVA = "0x4ABC020", Offset = "0x4ABC020", VA = "0x4ABC020")]
	public static float3x3 EulerZXY(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001290")]
	[Address(RVA = "0x4ABC130", Offset = "0x4ABC130", VA = "0x4ABC130")]
	public static float3x3 EulerZYX(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001291")]
	[Address(RVA = "0x4ABC240", Offset = "0x4ABC240", VA = "0x4ABC240")]
	public static float3x3 EulerXYZ(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001292")]
	[Address(RVA = "0x4ABC350", Offset = "0x4ABC350", VA = "0x4ABC350")]
	public static float3x3 EulerXZY(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001293")]
	[Address(RVA = "0x4ABC450", Offset = "0x4ABC450", VA = "0x4ABC450")]
	public static float3x3 EulerYXZ(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001294")]
	[Address(RVA = "0x4ABC560", Offset = "0x4ABC560", VA = "0x4ABC560")]
	public static float3x3 EulerYZX(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001295")]
	[Address(RVA = "0x4ABC660", Offset = "0x4ABC660", VA = "0x4ABC660")]
	public static float3x3 EulerZXY(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001296")]
	[Address(RVA = "0x4ABC770", Offset = "0x4ABC770", VA = "0x4ABC770")]
	public static float3x3 EulerZYX(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001297")]
	[Address(RVA = "0x4ABC880", Offset = "0x4ABC880", VA = "0x4ABC880")]
	public static float3x3 Euler(float3 xyz, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001298")]
	[Address(RVA = "0x4ABCEB0", Offset = "0x4ABCEB0", VA = "0x4ABCEB0")]
	public static float3x3 Euler(float x, float y, float z, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001299")]
	[Address(RVA = "0x4ABCEF0", Offset = "0x4ABCEF0", VA = "0x4ABCEF0")]
	public static float3x3 RotateX(float angle)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129A")]
	[Address(RVA = "0x4ABD010", Offset = "0x4ABD010", VA = "0x4ABD010")]
	public static float3x3 RotateY(float angle)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129B")]
	[Address(RVA = "0x4ABD140", Offset = "0x4ABD140", VA = "0x4ABD140")]
	public static float3x3 RotateZ(float angle)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129C")]
	[Address(RVA = "0x4ABD260", Offset = "0x4ABD260", VA = "0x4ABD260")]
	public static float3x3 Scale(float s)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129D")]
	[Address(RVA = "0x4ABD290", Offset = "0x4ABD290", VA = "0x4ABD290")]
	public static float3x3 Scale(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129E")]
	[Address(RVA = "0x4ABD2C0", Offset = "0x4ABD2C0", VA = "0x4ABD2C0")]
	public static float3x3 Scale(float3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600129F")]
	[Address(RVA = "0x4ABD300", Offset = "0x4ABD300", VA = "0x4ABD300")]
	public static float3x3 LookRotation(float3 forward, float3 up)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x4ABD4A0", Offset = "0x4ABD4A0", VA = "0x4ABD4A0")]
	public static float3x3 LookRotationSafe(float3 forward, float3 up)
	{
		return default(float3x3);
	}

	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x4ABD970", Offset = "0x4ABD970", VA = "0x4ABD970")]
	public static explicit operator float3x3(float4x4 f4x4)
	{
		return default(float3x3);
	}
}
