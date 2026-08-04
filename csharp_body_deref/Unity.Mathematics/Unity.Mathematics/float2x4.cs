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
[Token(Token = "0x200002C")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float2x4 : IEquatable<float2x4>, IFormattable
{
	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x0")]
	public float2 c0;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x8")]
	public float2 c1;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x10")]
	public float2 c2;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x18")]
	public float2 c3;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float2x4 zero;

	[Token(Token = "0x170003FA")]
	public unsafe ref float2 this[int index]
	{
		[Token(Token = "0x600113A")]
		[Address(RVA = "0x4AB4D20", Offset = "0x4AB4D20", VA = "0x4AB4D20")]
		get
		{
			return ref *(float2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001101")]
	[Address(RVA = "0x4AB3210", Offset = "0x4AB3210", VA = "0x4AB3210")]
	public float2x4(float2 c0, float2 c1, float2 c2, float2 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001102")]
	[Address(RVA = "0x4AB3220", Offset = "0x4AB3220", VA = "0x4AB3220")]
	public float2x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001103")]
	[Address(RVA = "0x4AB3250", Offset = "0x4AB3250", VA = "0x4AB3250")]
	public float2x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001104")]
	[Address(RVA = "0x4AB3260", Offset = "0x4AB3260", VA = "0x4AB3260")]
	public float2x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001105")]
	[Address(RVA = "0x4AB3290", Offset = "0x4AB3290", VA = "0x4AB3290")]
	public float2x4(bool2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001106")]
	[Address(RVA = "0x4AB3350", Offset = "0x4AB3350", VA = "0x4AB3350")]
	public float2x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001107")]
	[Address(RVA = "0x4AB3360", Offset = "0x4AB3360", VA = "0x4AB3360")]
	public float2x4(int2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001108")]
	[Address(RVA = "0x4AB33E0", Offset = "0x4AB33E0", VA = "0x4AB33E0")]
	public float2x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001109")]
	[Address(RVA = "0x4AB3400", Offset = "0x4AB3400", VA = "0x4AB3400")]
	public float2x4(uint2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110A")]
	[Address(RVA = "0x4AB34B0", Offset = "0x4AB34B0", VA = "0x4AB34B0")]
	public float2x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110B")]
	[Address(RVA = "0x4AB34C0", Offset = "0x4AB34C0", VA = "0x4AB34C0")]
	public float2x4(double2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110C")]
	[Address(RVA = "0x4AB34F0", Offset = "0x4AB34F0", VA = "0x4AB34F0")]
	public static implicit operator float2x4(float v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110D")]
	[Address(RVA = "0x4AB3500", Offset = "0x4AB3500", VA = "0x4AB3500")]
	public static explicit operator float2x4(bool v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110E")]
	[Address(RVA = "0x4AB3530", Offset = "0x4AB3530", VA = "0x4AB3530")]
	public static explicit operator float2x4(bool2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110F")]
	[Address(RVA = "0x4AB3600", Offset = "0x4AB3600", VA = "0x4AB3600")]
	public static implicit operator float2x4(int v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001110")]
	[Address(RVA = "0x4AB3620", Offset = "0x4AB3620", VA = "0x4AB3620")]
	public static implicit operator float2x4(int2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001111")]
	[Address(RVA = "0x4AB3690", Offset = "0x4AB3690", VA = "0x4AB3690")]
	public static implicit operator float2x4(uint v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001112")]
	[Address(RVA = "0x4AB36B0", Offset = "0x4AB36B0", VA = "0x4AB36B0")]
	public static implicit operator float2x4(uint2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001113")]
	[Address(RVA = "0x4AB3750", Offset = "0x4AB3750", VA = "0x4AB3750")]
	public static explicit operator float2x4(double v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001114")]
	[Address(RVA = "0x4AB3770", Offset = "0x4AB3770", VA = "0x4AB3770")]
	public static explicit operator float2x4(double2x4 v)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001115")]
	[Address(RVA = "0x4AB37A0", Offset = "0x4AB37A0", VA = "0x4AB37A0")]
	public static float2x4 operator *(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001116")]
	[Address(RVA = "0x4AB37F0", Offset = "0x4AB37F0", VA = "0x4AB37F0")]
	public static float2x4 operator *(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001117")]
	[Address(RVA = "0x4AB3830", Offset = "0x4AB3830", VA = "0x4AB3830")]
	public static float2x4 operator *(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001118")]
	[Address(RVA = "0x4AB3870", Offset = "0x4AB3870", VA = "0x4AB3870")]
	public static float2x4 operator +(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001119")]
	[Address(RVA = "0x4AB38C0", Offset = "0x4AB38C0", VA = "0x4AB38C0")]
	public static float2x4 operator +(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111A")]
	[Address(RVA = "0x4AB3900", Offset = "0x4AB3900", VA = "0x4AB3900")]
	public static float2x4 operator +(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111B")]
	[Address(RVA = "0x4AB3940", Offset = "0x4AB3940", VA = "0x4AB3940")]
	public static float2x4 operator -(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111C")]
	[Address(RVA = "0x4AB3990", Offset = "0x4AB3990", VA = "0x4AB3990")]
	public static float2x4 operator -(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111D")]
	[Address(RVA = "0x4AB39D0", Offset = "0x4AB39D0", VA = "0x4AB39D0")]
	public static float2x4 operator -(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111E")]
	[Address(RVA = "0x4AB3A20", Offset = "0x4AB3A20", VA = "0x4AB3A20")]
	public static float2x4 operator /(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111F")]
	[Address(RVA = "0x4AB3A70", Offset = "0x4AB3A70", VA = "0x4AB3A70")]
	public static float2x4 operator /(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001120")]
	[Address(RVA = "0x4AB3AB0", Offset = "0x4AB3AB0", VA = "0x4AB3AB0")]
	public static float2x4 operator /(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001121")]
	[Address(RVA = "0x4AB3B00", Offset = "0x4AB3B00", VA = "0x4AB3B00")]
	public static float2x4 operator %(float2x4 lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001122")]
	[Address(RVA = "0x4AB3C60", Offset = "0x4AB3C60", VA = "0x4AB3C60")]
	public static float2x4 operator %(float2x4 lhs, float rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001123")]
	[Address(RVA = "0x4AB3D90", Offset = "0x4AB3D90", VA = "0x4AB3D90")]
	public static float2x4 operator %(float lhs, float2x4 rhs)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001124")]
	[Address(RVA = "0x4AB3EC0", Offset = "0x4AB3EC0", VA = "0x4AB3EC0")]
	public static float2x4 operator ++(float2x4 val)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001125")]
	[Address(RVA = "0x4AB3F10", Offset = "0x4AB3F10", VA = "0x4AB3F10")]
	public static float2x4 operator --(float2x4 val)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001126")]
	[Address(RVA = "0x4AB3F60", Offset = "0x4AB3F60", VA = "0x4AB3F60")]
	public static bool2x4 operator <(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001127")]
	[Address(RVA = "0x4AB4030", Offset = "0x4AB4030", VA = "0x4AB4030")]
	public static bool2x4 operator <(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001128")]
	[Address(RVA = "0x4AB40D0", Offset = "0x4AB40D0", VA = "0x4AB40D0")]
	public static bool2x4 operator <(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001129")]
	[Address(RVA = "0x4AB4170", Offset = "0x4AB4170", VA = "0x4AB4170")]
	public static bool2x4 operator <=(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112A")]
	[Address(RVA = "0x4AB4240", Offset = "0x4AB4240", VA = "0x4AB4240")]
	public static bool2x4 operator <=(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112B")]
	[Address(RVA = "0x4AB42E0", Offset = "0x4AB42E0", VA = "0x4AB42E0")]
	public static bool2x4 operator <=(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112C")]
	[Address(RVA = "0x4AB4380", Offset = "0x4AB4380", VA = "0x4AB4380")]
	public static bool2x4 operator >(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112D")]
	[Address(RVA = "0x4AB4450", Offset = "0x4AB4450", VA = "0x4AB4450")]
	public static bool2x4 operator >(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112E")]
	[Address(RVA = "0x4AB44F0", Offset = "0x4AB44F0", VA = "0x4AB44F0")]
	public static bool2x4 operator >(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600112F")]
	[Address(RVA = "0x4AB4590", Offset = "0x4AB4590", VA = "0x4AB4590")]
	public static bool2x4 operator >=(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001130")]
	[Address(RVA = "0x4AB4660", Offset = "0x4AB4660", VA = "0x4AB4660")]
	public static bool2x4 operator >=(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001131")]
	[Address(RVA = "0x4AB4700", Offset = "0x4AB4700", VA = "0x4AB4700")]
	public static bool2x4 operator >=(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001132")]
	[Address(RVA = "0x4AB47A0", Offset = "0x4AB47A0", VA = "0x4AB47A0")]
	public static float2x4 operator -(float2x4 val)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001133")]
	[Address(RVA = "0x4AB47E0", Offset = "0x4AB47E0", VA = "0x4AB47E0")]
	public static float2x4 operator +(float2x4 val)
	{
		return default(float2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001134")]
	[Address(RVA = "0x4AB4800", Offset = "0x4AB4800", VA = "0x4AB4800")]
	public static bool2x4 operator ==(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001135")]
	[Address(RVA = "0x4AB48F0", Offset = "0x4AB48F0", VA = "0x4AB48F0")]
	public static bool2x4 operator ==(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001136")]
	[Address(RVA = "0x4AB49C0", Offset = "0x4AB49C0", VA = "0x4AB49C0")]
	public static bool2x4 operator ==(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001137")]
	[Address(RVA = "0x4AB4A90", Offset = "0x4AB4A90", VA = "0x4AB4A90")]
	public static bool2x4 operator !=(float2x4 lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001138")]
	[Address(RVA = "0x4AB4B80", Offset = "0x4AB4B80", VA = "0x4AB4B80")]
	public static bool2x4 operator !=(float2x4 lhs, float rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001139")]
	[Address(RVA = "0x4AB4C50", Offset = "0x4AB4C50", VA = "0x4AB4C50")]
	public static bool2x4 operator !=(float lhs, float2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113B")]
	[Address(RVA = "0x4AB4D30", Offset = "0x4AB4D30", VA = "0x4AB4D30", Slot = "4")]
	public bool Equals(float2x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600113C")]
	[Address(RVA = "0x4AB4DC0", Offset = "0x4AB4DC0", VA = "0x4AB4DC0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113D")]
	[Address(RVA = "0x4AB4EB0", Offset = "0x4AB4EB0", VA = "0x4AB4EB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113E")]
	[Address(RVA = "0x4AB4FC0", Offset = "0x4AB4FC0", VA = "0x4AB4FC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113F")]
	[Address(RVA = "0x4AB52E0", Offset = "0x4AB52E0", VA = "0x4AB52E0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
