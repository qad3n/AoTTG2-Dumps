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
		[Address(RVA = "0x841BD0", Offset = "0x8401D0", VA = "0x180841BD0")]
		get
		{
			return ref *(float3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001316")]
	[Address(RVA = "0x2A31E20", Offset = "0x2A30420", VA = "0x182A31E20")]
	public float3x4(float3 c0, float3 c1, float3 c2, float3 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001317")]
	[Address(RVA = "0x2A82B40", Offset = "0x2A81140", VA = "0x182A82B40")]
	public float3x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001318")]
	[Address(RVA = "0x2A82840", Offset = "0x2A80E40", VA = "0x182A82840")]
	public float3x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001319")]
	[Address(RVA = "0x2A82930", Offset = "0x2A80F30", VA = "0x182A82930")]
	public float3x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600131A")]
	[Address(RVA = "0x29C7C00", Offset = "0x29C6200", VA = "0x1829C7C00")]
	public float3x4(bool3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600131B")]
	[Address(RVA = "0x2A82AC0", Offset = "0x2A810C0", VA = "0x182A82AC0")]
	public float3x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600131C")]
	[Address(RVA = "0x2A82850", Offset = "0x2A80E50", VA = "0x182A82850")]
	public float3x4(int3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600131D")]
	[Address(RVA = "0x29C7B10", Offset = "0x29C6110", VA = "0x1829C7B10")]
	public float3x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600131E")]
	[Address(RVA = "0x29C79F0", Offset = "0x29C5FF0", VA = "0x1829C79F0")]
	public float3x4(uint3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600131F")]
	[Address(RVA = "0x2A82A20", Offset = "0x2A81020", VA = "0x182A82A20")]
	public float3x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001320")]
	[Address(RVA = "0x2A82970", Offset = "0x2A80F70", VA = "0x182A82970")]
	public float3x4(double3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001321")]
	[Address(RVA = "0x29E1260", Offset = "0x29DF860", VA = "0x1829E1260")]
	public static implicit operator float3x4(float v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001322")]
	[Address(RVA = "0x29E1000", Offset = "0x29DF600", VA = "0x1829E1000")]
	public static explicit operator float3x4(bool v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001323")]
	[Address(RVA = "0x2A83730", Offset = "0x2A81D30", VA = "0x182A83730")]
	public static explicit operator float3x4(bool3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001324")]
	[Address(RVA = "0x29E10C0", Offset = "0x29DF6C0", VA = "0x1829E10C0")]
	public static implicit operator float3x4(int v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001325")]
	[Address(RVA = "0x29E1140", Offset = "0x29DF740", VA = "0x1829E1140")]
	public static implicit operator float3x4(int3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001326")]
	[Address(RVA = "0x2A83CE0", Offset = "0x2A822E0", VA = "0x182A83CE0")]
	public static implicit operator float3x4(uint v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001327")]
	[Address(RVA = "0x2A83C90", Offset = "0x2A82290", VA = "0x182A83C90")]
	public static implicit operator float3x4(uint3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001328")]
	[Address(RVA = "0x29E0E20", Offset = "0x29DF420", VA = "0x1829E0E20")]
	public static explicit operator float3x4(double v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001329")]
	[Address(RVA = "0x29E1280", Offset = "0x29DF880", VA = "0x1829E1280")]
	public static explicit operator float3x4(double3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600132A")]
	[Address(RVA = "0x2A84DB0", Offset = "0x2A833B0", VA = "0x182A84DB0")]
	public static float3x4 operator *(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600132B")]
	[Address(RVA = "0x2A84CC0", Offset = "0x2A832C0", VA = "0x182A84CC0")]
	public static float3x4 operator *(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600132C")]
	[Address(RVA = "0x2A84EB0", Offset = "0x2A834B0", VA = "0x182A84EB0")]
	public static float3x4 operator *(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600132D")]
	[Address(RVA = "0x2A82BC0", Offset = "0x2A811C0", VA = "0x182A82BC0")]
	public static float3x4 operator +(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600132E")]
	[Address(RVA = "0x2A82CC0", Offset = "0x2A812C0", VA = "0x182A82CC0")]
	public static float3x4 operator +(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600132F")]
	[Address(RVA = "0x2A82DB0", Offset = "0x2A813B0", VA = "0x182A82DB0")]
	public static float3x4 operator +(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001330")]
	[Address(RVA = "0x2A851B0", Offset = "0x2A837B0", VA = "0x182A851B0")]
	public static float3x4 operator -(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001331")]
	[Address(RVA = "0x2A850B0", Offset = "0x2A836B0", VA = "0x182A850B0")]
	public static float3x4 operator -(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001332")]
	[Address(RVA = "0x2A84FB0", Offset = "0x2A835B0", VA = "0x182A84FB0")]
	public static float3x4 operator -(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001333")]
	[Address(RVA = "0x2A830F0", Offset = "0x2A816F0", VA = "0x182A830F0")]
	public static float3x4 operator /(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001334")]
	[Address(RVA = "0x2A831F0", Offset = "0x2A817F0", VA = "0x182A831F0")]
	public static float3x4 operator /(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001335")]
	[Address(RVA = "0x2A82FF0", Offset = "0x2A815F0", VA = "0x182A82FF0")]
	public static float3x4 operator /(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001336")]
	[Address(RVA = "0x2A847D0", Offset = "0x2A82DD0", VA = "0x182A847D0")]
	public static float3x4 operator %(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001337")]
	[Address(RVA = "0x2A84980", Offset = "0x2A82F80", VA = "0x182A84980")]
	public static float3x4 operator %(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001338")]
	[Address(RVA = "0x2A84B20", Offset = "0x2A83120", VA = "0x182A84B20")]
	public static float3x4 operator %(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001339")]
	[Address(RVA = "0x2A83D10", Offset = "0x2A82310", VA = "0x182A83D10")]
	public static float3x4 operator ++(float3x4 val)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600133A")]
	[Address(RVA = "0x2A82EB0", Offset = "0x2A814B0", VA = "0x182A82EB0")]
	public static float3x4 operator --(float3x4 val)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600133B")]
	[Address(RVA = "0x2A846D0", Offset = "0x2A82CD0", VA = "0x182A846D0")]
	public static bool3x4 operator <(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600133C")]
	[Address(RVA = "0x2A84530", Offset = "0x2A82B30", VA = "0x182A84530")]
	public static bool3x4 operator <(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600133D")]
	[Address(RVA = "0x2A845E0", Offset = "0x2A82BE0", VA = "0x182A845E0")]
	public static bool3x4 operator <(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600133E")]
	[Address(RVA = "0x2A84340", Offset = "0x2A82940", VA = "0x182A84340")]
	public static bool3x4 operator <=(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600133F")]
	[Address(RVA = "0x2A84290", Offset = "0x2A82890", VA = "0x182A84290")]
	public static bool3x4 operator <=(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001340")]
	[Address(RVA = "0x2A84440", Offset = "0x2A82A40", VA = "0x182A84440")]
	public static bool3x4 operator <=(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001341")]
	[Address(RVA = "0x2A83A00", Offset = "0x2A82000", VA = "0x182A83A00")]
	public static bool3x4 operator >(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001342")]
	[Address(RVA = "0x2A83B00", Offset = "0x2A82100", VA = "0x182A83B00")]
	public static bool3x4 operator >(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001343")]
	[Address(RVA = "0x2A83BE0", Offset = "0x2A821E0", VA = "0x182A83BE0")]
	public static bool3x4 operator >(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001344")]
	[Address(RVA = "0x2A83900", Offset = "0x2A81F00", VA = "0x182A83900")]
	public static bool3x4 operator >=(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001345")]
	[Address(RVA = "0x2A83770", Offset = "0x2A81D70", VA = "0x182A83770")]
	public static bool3x4 operator >=(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001346")]
	[Address(RVA = "0x2A83850", Offset = "0x2A81E50", VA = "0x182A83850")]
	public static bool3x4 operator >=(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001347")]
	[Address(RVA = "0x2A852B0", Offset = "0x2A838B0", VA = "0x182A852B0")]
	public static float3x4 operator -(float3x4 val)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001348")]
	[Address(RVA = "0x2A853B0", Offset = "0x2A839B0", VA = "0x182A853B0")]
	public static float3x4 operator +(float3x4 val)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001349")]
	[Address(RVA = "0x2A832F0", Offset = "0x2A818F0", VA = "0x182A832F0")]
	public static bool3x4 operator ==(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600134A")]
	[Address(RVA = "0x2A835D0", Offset = "0x2A81BD0", VA = "0x182A835D0")]
	public static bool3x4 operator ==(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600134B")]
	[Address(RVA = "0x2A83480", Offset = "0x2A81A80", VA = "0x182A83480")]
	public static bool3x4 operator ==(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600134C")]
	[Address(RVA = "0x2A84100", Offset = "0x2A82700", VA = "0x182A84100")]
	public static bool3x4 operator !=(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600134D")]
	[Address(RVA = "0x2A83E50", Offset = "0x2A82450", VA = "0x182A83E50")]
	public static bool3x4 operator !=(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600134E")]
	[Address(RVA = "0x2A83FB0", Offset = "0x2A825B0", VA = "0x182A83FB0")]
	public static bool3x4 operator !=(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001350")]
	[Address(RVA = "0x2A75B20", Offset = "0x2A74120", VA = "0x182A75B20", Slot = "4")]
	public bool Equals(float3x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001351")]
	[Address(RVA = "0x2A81C80", Offset = "0x2A80280", VA = "0x182A81C80", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001352")]
	[Address(RVA = "0x2A81D30", Offset = "0x2A80330", VA = "0x182A81D30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001353")]
	[Address(RVA = "0x2A82300", Offset = "0x2A80900", VA = "0x182A82300", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001354")]
	[Address(RVA = "0x2A81E30", Offset = "0x2A80430", VA = "0x182A81E30", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
