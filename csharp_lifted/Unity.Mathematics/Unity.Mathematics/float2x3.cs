// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float2x3
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
public struct float2x3 : IEquatable<float2x3>, IFormattable
{
	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x0")]
	public float2 c0;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x8")]
	public float2 c1;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x10")]
	public float2 c2;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float2x3 zero;

	[Token(Token = "0x170003F9")]
	public unsafe ref float2 this[int index]
	{
		[Token(Token = "0x600116E")]
		[Address(RVA = "0x64479A0", Offset = "0x64469A0", VA = "0x64479A0")]
		get
		{
			return ref *(float2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001135")]
	[Address(RVA = "0x6446620", Offset = "0x6445620", VA = "0x6446620")]
	public float2x3(float2 c0, float2 c1, float2 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001136")]
	[Address(RVA = "0x6446630", Offset = "0x6445630", VA = "0x6446630")]
	public float2x3(float m00, float m01, float m02, float m10, float m11, float m12)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001137")]
	[Address(RVA = "0x6446650", Offset = "0x6445650", VA = "0x6446650")]
	public float2x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001138")]
	[Address(RVA = "0x6446660", Offset = "0x6445660", VA = "0x6446660")]
	public float2x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001139")]
	[Address(RVA = "0x6446680", Offset = "0x6445680", VA = "0x6446680")]
	public float2x3(bool2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113A")]
	[Address(RVA = "0x6446700", Offset = "0x6445700", VA = "0x6446700")]
	public float2x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113B")]
	[Address(RVA = "0x6446710", Offset = "0x6445710", VA = "0x6446710")]
	public float2x3(int2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113C")]
	[Address(RVA = "0x6446770", Offset = "0x6445770", VA = "0x6446770")]
	public float2x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113D")]
	[Address(RVA = "0x6446790", Offset = "0x6445790", VA = "0x6446790")]
	public float2x3(uint2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113E")]
	[Address(RVA = "0x64467F0", Offset = "0x64457F0", VA = "0x64467F0")]
	public float2x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113F")]
	[Address(RVA = "0x6446800", Offset = "0x6445800", VA = "0x6446800")]
	public float2x3(double2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001140")]
	[Address(RVA = "0x6446830", Offset = "0x6445830", VA = "0x6446830")]
	public static implicit operator float2x3(float v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001141")]
	[Address(RVA = "0x6446840", Offset = "0x6445840", VA = "0x6446840")]
	public static explicit operator float2x3(bool v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001142")]
	[Address(RVA = "0x6446870", Offset = "0x6445870", VA = "0x6446870")]
	public static explicit operator float2x3(bool2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001143")]
	[Address(RVA = "0x64468F0", Offset = "0x64458F0", VA = "0x64468F0")]
	public static implicit operator float2x3(int v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001144")]
	[Address(RVA = "0x6446910", Offset = "0x6445910", VA = "0x6446910")]
	public static implicit operator float2x3(int2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001145")]
	[Address(RVA = "0x6446960", Offset = "0x6445960", VA = "0x6446960")]
	public static implicit operator float2x3(uint v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001146")]
	[Address(RVA = "0x6446980", Offset = "0x6445980", VA = "0x6446980")]
	public static implicit operator float2x3(uint2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001147")]
	[Address(RVA = "0x64469E0", Offset = "0x64459E0", VA = "0x64469E0")]
	public static explicit operator float2x3(double v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001148")]
	[Address(RVA = "0x6446A00", Offset = "0x6445A00", VA = "0x6446A00")]
	public static explicit operator float2x3(double2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001149")]
	[Address(RVA = "0x6446A30", Offset = "0x6445A30", VA = "0x6446A30")]
	public static float2x3 operator *(float2x3 lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600114A")]
	[Address(RVA = "0x6446A70", Offset = "0x6445A70", VA = "0x6446A70")]
	public static float2x3 operator *(float2x3 lhs, float rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600114B")]
	[Address(RVA = "0x6446AA0", Offset = "0x6445AA0", VA = "0x6446AA0")]
	public static float2x3 operator *(float lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600114C")]
	[Address(RVA = "0x6446AD0", Offset = "0x6445AD0", VA = "0x6446AD0")]
	public static float2x3 operator +(float2x3 lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600114D")]
	[Address(RVA = "0x6446B10", Offset = "0x6445B10", VA = "0x6446B10")]
	public static float2x3 operator +(float2x3 lhs, float rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600114E")]
	[Address(RVA = "0x6446B40", Offset = "0x6445B40", VA = "0x6446B40")]
	public static float2x3 operator +(float lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600114F")]
	[Address(RVA = "0x6446B70", Offset = "0x6445B70", VA = "0x6446B70")]
	public static float2x3 operator -(float2x3 lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001150")]
	[Address(RVA = "0x6446BB0", Offset = "0x6445BB0", VA = "0x6446BB0")]
	public static float2x3 operator -(float2x3 lhs, float rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001151")]
	[Address(RVA = "0x6446BE0", Offset = "0x6445BE0", VA = "0x6446BE0")]
	public static float2x3 operator -(float lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001152")]
	[Address(RVA = "0x6446C20", Offset = "0x6445C20", VA = "0x6446C20")]
	public static float2x3 operator /(float2x3 lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001153")]
	[Address(RVA = "0x6446C60", Offset = "0x6445C60", VA = "0x6446C60")]
	public static float2x3 operator /(float2x3 lhs, float rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001154")]
	[Address(RVA = "0x6446C90", Offset = "0x6445C90", VA = "0x6446C90")]
	public static float2x3 operator /(float lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001155")]
	[Address(RVA = "0x6446CD0", Offset = "0x6445CD0", VA = "0x6446CD0")]
	public static float2x3 operator %(float2x3 lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001156")]
	[Address(RVA = "0x6446DD0", Offset = "0x6445DD0", VA = "0x6446DD0")]
	public static float2x3 operator %(float2x3 lhs, float rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001157")]
	[Address(RVA = "0x6446EB0", Offset = "0x6445EB0", VA = "0x6446EB0")]
	public static float2x3 operator %(float lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001158")]
	[Address(RVA = "0x6446F90", Offset = "0x6445F90", VA = "0x6446F90")]
	public static float2x3 operator ++(float2x3 val)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001159")]
	[Address(RVA = "0x6446FC0", Offset = "0x6445FC0", VA = "0x6446FC0")]
	public static float2x3 operator --(float2x3 val)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600115A")]
	[Address(RVA = "0x6446FF0", Offset = "0x6445FF0", VA = "0x6446FF0")]
	public static bool2x3 operator <(float2x3 lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600115B")]
	[Address(RVA = "0x6447070", Offset = "0x6446070", VA = "0x6447070")]
	public static bool2x3 operator <(float2x3 lhs, float rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600115C")]
	[Address(RVA = "0x64470F0", Offset = "0x64460F0", VA = "0x64470F0")]
	public static bool2x3 operator <(float lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600115D")]
	[Address(RVA = "0x6447170", Offset = "0x6446170", VA = "0x6447170")]
	public static bool2x3 operator <=(float2x3 lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600115E")]
	[Address(RVA = "0x64471F0", Offset = "0x64461F0", VA = "0x64471F0")]
	public static bool2x3 operator <=(float2x3 lhs, float rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600115F")]
	[Address(RVA = "0x6447270", Offset = "0x6446270", VA = "0x6447270")]
	public static bool2x3 operator <=(float lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001160")]
	[Address(RVA = "0x64472F0", Offset = "0x64462F0", VA = "0x64472F0")]
	public static bool2x3 operator >(float2x3 lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001161")]
	[Address(RVA = "0x6447370", Offset = "0x6446370", VA = "0x6447370")]
	public static bool2x3 operator >(float2x3 lhs, float rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001162")]
	[Address(RVA = "0x64473F0", Offset = "0x64463F0", VA = "0x64473F0")]
	public static bool2x3 operator >(float lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001163")]
	[Address(RVA = "0x6447470", Offset = "0x6446470", VA = "0x6447470")]
	public static bool2x3 operator >=(float2x3 lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001164")]
	[Address(RVA = "0x64474F0", Offset = "0x64464F0", VA = "0x64474F0")]
	public static bool2x3 operator >=(float2x3 lhs, float rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001165")]
	[Address(RVA = "0x6447570", Offset = "0x6446570", VA = "0x6447570")]
	public static bool2x3 operator >=(float lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001166")]
	[Address(RVA = "0x64475F0", Offset = "0x64465F0", VA = "0x64475F0")]
	public static float2x3 operator -(float2x3 val)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001167")]
	[Address(RVA = "0x6447620", Offset = "0x6446620", VA = "0x6447620")]
	public static float2x3 operator +(float2x3 val)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001168")]
	[Address(RVA = "0x6447640", Offset = "0x6446640", VA = "0x6447640")]
	public static bool2x3 operator ==(float2x3 lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001169")]
	[Address(RVA = "0x64476D0", Offset = "0x64466D0", VA = "0x64476D0")]
	public static bool2x3 operator ==(float2x3 lhs, float rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600116A")]
	[Address(RVA = "0x6447760", Offset = "0x6446760", VA = "0x6447760")]
	public static bool2x3 operator ==(float lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600116B")]
	[Address(RVA = "0x64477F0", Offset = "0x64467F0", VA = "0x64477F0")]
	public static bool2x3 operator !=(float2x3 lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600116C")]
	[Address(RVA = "0x6447880", Offset = "0x6446880", VA = "0x6447880")]
	public static bool2x3 operator !=(float2x3 lhs, float rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600116D")]
	[Address(RVA = "0x6447910", Offset = "0x6446910", VA = "0x6447910")]
	public static bool2x3 operator !=(float lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600116F")]
	[Address(RVA = "0x64479B0", Offset = "0x64469B0", VA = "0x64479B0", Slot = "4")]
	public bool Equals(float2x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001170")]
	[Address(RVA = "0x6447A20", Offset = "0x6446A20", VA = "0x6447A20", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001171")]
	[Address(RVA = "0x6447AE0", Offset = "0x6446AE0", VA = "0x6447AE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001172")]
	[Address(RVA = "0x6447B60", Offset = "0x6446B60", VA = "0x6447B60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001173")]
	[Address(RVA = "0x6447DF0", Offset = "0x6446DF0", VA = "0x6447DF0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
