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
[Token(Token = "0x2000032")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float3x4 : IEquatable<float3x4>, IFormattable
{
	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x0")]
	public float3 c0;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0xC")]
	public float3 c1;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x18")]
	public float3 c2;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x24")]
	public float3 c3;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float3x4 zero;

	[Token(Token = "0x17000473")]
	public unsafe ref float3 this[int index]
	{
		[Token(Token = "0x600134F")]
		[Address(RVA = "0x6455310", Offset = "0x6454310", VA = "0x6455310")]
		get
		{
			return ref *(float3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001316")]
	[Address(RVA = "0x6452590", Offset = "0x6451590", VA = "0x6452590")]
	public float3x4(float3 c0, float3 c1, float3 c2, float3 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001317")]
	[Address(RVA = "0x64525C0", Offset = "0x64515C0", VA = "0x64525C0")]
	public float3x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001318")]
	[Address(RVA = "0x6452620", Offset = "0x6451620", VA = "0x6452620")]
	public float3x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001319")]
	[Address(RVA = "0x6452650", Offset = "0x6451650", VA = "0x6452650")]
	public float3x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600131A")]
	[Address(RVA = "0x64526A0", Offset = "0x64516A0", VA = "0x64526A0")]
	public float3x4(bool3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600131B")]
	[Address(RVA = "0x6452850", Offset = "0x6451850", VA = "0x6452850")]
	public float3x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600131C")]
	[Address(RVA = "0x6452880", Offset = "0x6451880", VA = "0x6452880")]
	public float3x4(int3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600131D")]
	[Address(RVA = "0x6452930", Offset = "0x6451930", VA = "0x6452930")]
	public float3x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600131E")]
	[Address(RVA = "0x6452970", Offset = "0x6451970", VA = "0x6452970")]
	public float3x4(uint3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600131F")]
	[Address(RVA = "0x6452A40", Offset = "0x6451A40", VA = "0x6452A40")]
	public float3x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001320")]
	[Address(RVA = "0x6452A70", Offset = "0x6451A70", VA = "0x6452A70")]
	public float3x4(double3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001321")]
	[Address(RVA = "0x6452AE0", Offset = "0x6451AE0", VA = "0x6452AE0")]
	public static implicit operator float3x4(float v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001322")]
	[Address(RVA = "0x6452B10", Offset = "0x6451B10", VA = "0x6452B10")]
	public static explicit operator float3x4(bool v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001323")]
	[Address(RVA = "0x6452B60", Offset = "0x6451B60", VA = "0x6452B60")]
	public static explicit operator float3x4(bool3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001324")]
	[Address(RVA = "0x6452D20", Offset = "0x6451D20", VA = "0x6452D20")]
	public static implicit operator float3x4(int v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001325")]
	[Address(RVA = "0x6452D60", Offset = "0x6451D60", VA = "0x6452D60")]
	public static implicit operator float3x4(int3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001326")]
	[Address(RVA = "0x6452E10", Offset = "0x6451E10", VA = "0x6452E10")]
	public static implicit operator float3x4(uint v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001327")]
	[Address(RVA = "0x6452E50", Offset = "0x6451E50", VA = "0x6452E50")]
	public static implicit operator float3x4(uint3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001328")]
	[Address(RVA = "0x6452F20", Offset = "0x6451F20", VA = "0x6452F20")]
	public static explicit operator float3x4(double v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001329")]
	[Address(RVA = "0x6452F60", Offset = "0x6451F60", VA = "0x6452F60")]
	public static explicit operator float3x4(double3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600132A")]
	[Address(RVA = "0x6452FE0", Offset = "0x6451FE0", VA = "0x6452FE0")]
	public static float3x4 operator *(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600132B")]
	[Address(RVA = "0x6453080", Offset = "0x6452080", VA = "0x6453080")]
	public static float3x4 operator *(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600132C")]
	[Address(RVA = "0x6453100", Offset = "0x6452100", VA = "0x6453100")]
	public static float3x4 operator *(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600132D")]
	[Address(RVA = "0x6453180", Offset = "0x6452180", VA = "0x6453180")]
	public static float3x4 operator +(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600132E")]
	[Address(RVA = "0x6453220", Offset = "0x6452220", VA = "0x6453220")]
	public static float3x4 operator +(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600132F")]
	[Address(RVA = "0x64532A0", Offset = "0x64522A0", VA = "0x64532A0")]
	public static float3x4 operator +(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001330")]
	[Address(RVA = "0x6453320", Offset = "0x6452320", VA = "0x6453320")]
	public static float3x4 operator -(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001331")]
	[Address(RVA = "0x64533C0", Offset = "0x64523C0", VA = "0x64533C0")]
	public static float3x4 operator -(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001332")]
	[Address(RVA = "0x6453440", Offset = "0x6452440", VA = "0x6453440")]
	public static float3x4 operator -(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001333")]
	[Address(RVA = "0x64534C0", Offset = "0x64524C0", VA = "0x64534C0")]
	public static float3x4 operator /(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001334")]
	[Address(RVA = "0x6453560", Offset = "0x6452560", VA = "0x6453560")]
	public static float3x4 operator /(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001335")]
	[Address(RVA = "0x64535E0", Offset = "0x64525E0", VA = "0x64535E0")]
	public static float3x4 operator /(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001336")]
	[Address(RVA = "0x6453660", Offset = "0x6452660", VA = "0x6453660")]
	public static float3x4 operator %(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001337")]
	[Address(RVA = "0x6453900", Offset = "0x6452900", VA = "0x6453900")]
	public static float3x4 operator %(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001338")]
	[Address(RVA = "0x6453B30", Offset = "0x6452B30", VA = "0x6453B30")]
	public static float3x4 operator %(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001339")]
	[Address(RVA = "0x6453D50", Offset = "0x6452D50", VA = "0x6453D50")]
	public static float3x4 operator ++(float3x4 val)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600133A")]
	[Address(RVA = "0x6453DE0", Offset = "0x6452DE0", VA = "0x6453DE0")]
	public static float3x4 operator --(float3x4 val)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600133B")]
	[Address(RVA = "0x6453E70", Offset = "0x6452E70", VA = "0x6453E70")]
	public static bool3x4 operator <(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600133C")]
	[Address(RVA = "0x6453FA0", Offset = "0x6452FA0", VA = "0x6453FA0")]
	public static bool3x4 operator <(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600133D")]
	[Address(RVA = "0x64540A0", Offset = "0x64530A0", VA = "0x64540A0")]
	public static bool3x4 operator <(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600133E")]
	[Address(RVA = "0x64541B0", Offset = "0x64531B0", VA = "0x64541B0")]
	public static bool3x4 operator <=(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600133F")]
	[Address(RVA = "0x64542E0", Offset = "0x64532E0", VA = "0x64542E0")]
	public static bool3x4 operator <=(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001340")]
	[Address(RVA = "0x64543E0", Offset = "0x64533E0", VA = "0x64543E0")]
	public static bool3x4 operator <=(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001341")]
	[Address(RVA = "0x64544F0", Offset = "0x64534F0", VA = "0x64544F0")]
	public static bool3x4 operator >(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001342")]
	[Address(RVA = "0x6454620", Offset = "0x6453620", VA = "0x6454620")]
	public static bool3x4 operator >(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001343")]
	[Address(RVA = "0x6454730", Offset = "0x6453730", VA = "0x6454730")]
	public static bool3x4 operator >(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001344")]
	[Address(RVA = "0x6454830", Offset = "0x6453830", VA = "0x6454830")]
	public static bool3x4 operator >=(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001345")]
	[Address(RVA = "0x6454960", Offset = "0x6453960", VA = "0x6454960")]
	public static bool3x4 operator >=(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001346")]
	[Address(RVA = "0x6454A70", Offset = "0x6453A70", VA = "0x6454A70")]
	public static bool3x4 operator >=(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001347")]
	[Address(RVA = "0x6454B70", Offset = "0x6453B70", VA = "0x6454B70")]
	public static float3x4 operator -(float3x4 val)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001348")]
	[Address(RVA = "0x6454BF0", Offset = "0x6453BF0", VA = "0x6454BF0")]
	public static float3x4 operator +(float3x4 val)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001349")]
	[Address(RVA = "0x6454C50", Offset = "0x6453C50", VA = "0x6454C50")]
	public static bool3x4 operator ==(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600134A")]
	[Address(RVA = "0x6454D90", Offset = "0x6453D90", VA = "0x6454D90")]
	public static bool3x4 operator ==(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600134B")]
	[Address(RVA = "0x6454EA0", Offset = "0x6453EA0", VA = "0x6454EA0")]
	public static bool3x4 operator ==(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600134C")]
	[Address(RVA = "0x6454FB0", Offset = "0x6453FB0", VA = "0x6454FB0")]
	public static bool3x4 operator !=(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600134D")]
	[Address(RVA = "0x64550F0", Offset = "0x64540F0", VA = "0x64550F0")]
	public static bool3x4 operator !=(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600134E")]
	[Address(RVA = "0x6455200", Offset = "0x6454200", VA = "0x6455200")]
	public static bool3x4 operator !=(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001350")]
	[Address(RVA = "0x6455320", Offset = "0x6454320", VA = "0x6455320", Slot = "4")]
	public bool Equals(float3x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001351")]
	[Address(RVA = "0x6455410", Offset = "0x6454410", VA = "0x6455410", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001352")]
	[Address(RVA = "0x6455560", Offset = "0x6454560", VA = "0x6455560", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001353")]
	[Address(RVA = "0x6455620", Offset = "0x6454620", VA = "0x6455620", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001354")]
	[Address(RVA = "0x6455AC0", Offset = "0x6454AC0", VA = "0x6455AC0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
