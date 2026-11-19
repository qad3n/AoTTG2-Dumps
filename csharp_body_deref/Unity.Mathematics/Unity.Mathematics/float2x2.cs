// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float2x2
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
[Token(Token = "0x200002B")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float2x2 : IEquatable<float2x2>, IFormattable
{
	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x0")]
	public float2 c0;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x8")]
	public float2 c1;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float2x2 identity;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x10")]
	public static readonly float2x2 zero;

	[Token(Token = "0x170003F8")]
	public unsafe ref float2 this[int index]
	{
		[Token(Token = "0x600112A")]
		[Address(RVA = "0x6445F60", Offset = "0x6444F60", VA = "0x6445F60")]
		get
		{
			return ref *(float2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F1")]
	[Address(RVA = "0x6445480", Offset = "0x6444480", VA = "0x6445480")]
	public float2x2(float2 c0, float2 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F2")]
	[Address(RVA = "0x6445490", Offset = "0x6444490", VA = "0x6445490")]
	public float2x2(float m00, float m01, float m10, float m11)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F3")]
	[Address(RVA = "0x64454B0", Offset = "0x64444B0", VA = "0x64454B0")]
	public float2x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F4")]
	[Address(RVA = "0x64454C0", Offset = "0x64444C0", VA = "0x64454C0")]
	public float2x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F5")]
	[Address(RVA = "0x64454E0", Offset = "0x64444E0", VA = "0x64454E0")]
	public float2x2(bool2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F6")]
	[Address(RVA = "0x6445540", Offset = "0x6444540", VA = "0x6445540")]
	public float2x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F7")]
	[Address(RVA = "0x6445550", Offset = "0x6444550", VA = "0x6445550")]
	public float2x2(int2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F8")]
	[Address(RVA = "0x6445580", Offset = "0x6444580", VA = "0x6445580")]
	public float2x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F9")]
	[Address(RVA = "0x6445590", Offset = "0x6444590", VA = "0x6445590")]
	public float2x2(uint2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010FA")]
	[Address(RVA = "0x64455C0", Offset = "0x64445C0", VA = "0x64455C0")]
	public float2x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010FB")]
	[Address(RVA = "0x64455D0", Offset = "0x64445D0", VA = "0x64455D0")]
	public float2x2(double2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010FC")]
	[Address(RVA = "0x64455F0", Offset = "0x64445F0", VA = "0x64455F0")]
	public static implicit operator float2x2(float v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010FD")]
	[Address(RVA = "0x6445600", Offset = "0x6444600", VA = "0x6445600")]
	public static explicit operator float2x2(bool v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010FE")]
	[Address(RVA = "0x6445620", Offset = "0x6444620", VA = "0x6445620")]
	public static explicit operator float2x2(bool2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010FF")]
	[Address(RVA = "0x6445660", Offset = "0x6444660", VA = "0x6445660")]
	public static implicit operator float2x2(int v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001100")]
	[Address(RVA = "0x6445670", Offset = "0x6444670", VA = "0x6445670")]
	public static implicit operator float2x2(int2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001101")]
	[Address(RVA = "0x64456A0", Offset = "0x64446A0", VA = "0x64456A0")]
	public static implicit operator float2x2(uint v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001102")]
	[Address(RVA = "0x64456B0", Offset = "0x64446B0", VA = "0x64456B0")]
	public static implicit operator float2x2(uint2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001103")]
	[Address(RVA = "0x64456E0", Offset = "0x64446E0", VA = "0x64456E0")]
	public static explicit operator float2x2(double v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001104")]
	[Address(RVA = "0x64456F0", Offset = "0x64446F0", VA = "0x64456F0")]
	public static explicit operator float2x2(double2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001105")]
	[Address(RVA = "0x6445710", Offset = "0x6444710", VA = "0x6445710")]
	public static float2x2 operator *(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001106")]
	[Address(RVA = "0x6445720", Offset = "0x6444720", VA = "0x6445720")]
	public static float2x2 operator *(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001107")]
	[Address(RVA = "0x6445740", Offset = "0x6444740", VA = "0x6445740")]
	public static float2x2 operator *(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001108")]
	[Address(RVA = "0x6445760", Offset = "0x6444760", VA = "0x6445760")]
	public static float2x2 operator +(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001109")]
	[Address(RVA = "0x6445770", Offset = "0x6444770", VA = "0x6445770")]
	public static float2x2 operator +(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110A")]
	[Address(RVA = "0x6445790", Offset = "0x6444790", VA = "0x6445790")]
	public static float2x2 operator +(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110B")]
	[Address(RVA = "0x64457B0", Offset = "0x64447B0", VA = "0x64457B0")]
	public static float2x2 operator -(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110C")]
	[Address(RVA = "0x64457C0", Offset = "0x64447C0", VA = "0x64457C0")]
	public static float2x2 operator -(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110D")]
	[Address(RVA = "0x64457E0", Offset = "0x64447E0", VA = "0x64457E0")]
	public static float2x2 operator -(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110E")]
	[Address(RVA = "0x6445800", Offset = "0x6444800", VA = "0x6445800")]
	public static float2x2 operator /(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110F")]
	[Address(RVA = "0x6445810", Offset = "0x6444810", VA = "0x6445810")]
	public static float2x2 operator /(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001110")]
	[Address(RVA = "0x6445830", Offset = "0x6444830", VA = "0x6445830")]
	public static float2x2 operator /(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001111")]
	[Address(RVA = "0x6445850", Offset = "0x6444850", VA = "0x6445850")]
	public static float2x2 operator %(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001112")]
	[Address(RVA = "0x64458F0", Offset = "0x64448F0", VA = "0x64458F0")]
	public static float2x2 operator %(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001113")]
	[Address(RVA = "0x6445980", Offset = "0x6444980", VA = "0x6445980")]
	public static float2x2 operator %(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001114")]
	[Address(RVA = "0x6445A10", Offset = "0x6444A10", VA = "0x6445A10")]
	public static float2x2 operator ++(float2x2 val)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001115")]
	[Address(RVA = "0x6445A30", Offset = "0x6444A30", VA = "0x6445A30")]
	public static float2x2 operator --(float2x2 val)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001116")]
	[Address(RVA = "0x6445A50", Offset = "0x6444A50", VA = "0x6445A50")]
	public static bool2x2 operator <(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001117")]
	[Address(RVA = "0x6445A90", Offset = "0x6444A90", VA = "0x6445A90")]
	public static bool2x2 operator <(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001118")]
	[Address(RVA = "0x6445AD0", Offset = "0x6444AD0", VA = "0x6445AD0")]
	public static bool2x2 operator <(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001119")]
	[Address(RVA = "0x6445B10", Offset = "0x6444B10", VA = "0x6445B10")]
	public static bool2x2 operator <=(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111A")]
	[Address(RVA = "0x6445B50", Offset = "0x6444B50", VA = "0x6445B50")]
	public static bool2x2 operator <=(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111B")]
	[Address(RVA = "0x6445B90", Offset = "0x6444B90", VA = "0x6445B90")]
	public static bool2x2 operator <=(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111C")]
	[Address(RVA = "0x6445BD0", Offset = "0x6444BD0", VA = "0x6445BD0")]
	public static bool2x2 operator >(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111D")]
	[Address(RVA = "0x6445C10", Offset = "0x6444C10", VA = "0x6445C10")]
	public static bool2x2 operator >(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111E")]
	[Address(RVA = "0x6445C50", Offset = "0x6444C50", VA = "0x6445C50")]
	public static bool2x2 operator >(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111F")]
	[Address(RVA = "0x6445C90", Offset = "0x6444C90", VA = "0x6445C90")]
	public static bool2x2 operator >=(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001120")]
	[Address(RVA = "0x6445CD0", Offset = "0x6444CD0", VA = "0x6445CD0")]
	public static bool2x2 operator >=(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001121")]
	[Address(RVA = "0x6445D10", Offset = "0x6444D10", VA = "0x6445D10")]
	public static bool2x2 operator >=(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001122")]
	[Address(RVA = "0x6445D50", Offset = "0x6444D50", VA = "0x6445D50")]
	public static float2x2 operator -(float2x2 val)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001123")]
	[Address(RVA = "0x6445D70", Offset = "0x6444D70", VA = "0x6445D70")]
	public static float2x2 operator +(float2x2 val)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001124")]
	[Address(RVA = "0x6445D80", Offset = "0x6444D80", VA = "0x6445D80")]
	public static bool2x2 operator ==(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001125")]
	[Address(RVA = "0x6445DD0", Offset = "0x6444DD0", VA = "0x6445DD0")]
	public static bool2x2 operator ==(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001126")]
	[Address(RVA = "0x6445E20", Offset = "0x6444E20", VA = "0x6445E20")]
	public static bool2x2 operator ==(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001127")]
	[Address(RVA = "0x6445E70", Offset = "0x6444E70", VA = "0x6445E70")]
	public static bool2x2 operator !=(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001128")]
	[Address(RVA = "0x6445EC0", Offset = "0x6444EC0", VA = "0x6445EC0")]
	public static bool2x2 operator !=(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001129")]
	[Address(RVA = "0x6445F10", Offset = "0x6444F10", VA = "0x6445F10")]
	public static bool2x2 operator !=(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112B")]
	[Address(RVA = "0x6445F70", Offset = "0x6444F70", VA = "0x6445F70", Slot = "4")]
	public bool Equals(float2x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600112C")]
	[Address(RVA = "0x6445FB0", Offset = "0x6444FB0", VA = "0x6445FB0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112D")]
	[Address(RVA = "0x6446050", Offset = "0x6445050", VA = "0x6446050", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112E")]
	[Address(RVA = "0x64460A0", Offset = "0x64450A0", VA = "0x64460A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112F")]
	[Address(RVA = "0x6446290", Offset = "0x6445290", VA = "0x6446290", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001130")]
	[Address(RVA = "0x6446460", Offset = "0x6445460", VA = "0x6446460")]
	public static float2x2 Rotate(float angle)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001131")]
	[Address(RVA = "0x6446580", Offset = "0x6445580", VA = "0x6446580")]
	public static float2x2 Scale(float s)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001132")]
	[Address(RVA = "0x64465A0", Offset = "0x64455A0", VA = "0x64465A0")]
	public static float2x2 Scale(float x, float y)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001133")]
	[Address(RVA = "0x64465C0", Offset = "0x64455C0", VA = "0x64465C0")]
	public static float2x2 Scale(float2 v)
	{
		return default(float2x2);
	}
}
