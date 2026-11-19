// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.uint4x3
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
[Token(Token = "0x200005F")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint4x3 : IEquatable<uint4x3>, IFormattable
{
	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x0")]
	public uint4 c0;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x10")]
	public uint4 c1;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x20")]
	public uint4 c2;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint4x3 zero;

	[Token(Token = "0x17000B88")]
	public unsafe ref uint4 this[int index]
	{
		[Token(Token = "0x600245C")]
		[Address(RVA = "0x6409D00", Offset = "0x6408D00", VA = "0x6409D00")]
		get
		{
			return ref *(uint4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002417")]
	[Address(RVA = "0x6406F20", Offset = "0x6405F20", VA = "0x6406F20")]
	public uint4x3(uint4 c0, uint4 c1, uint4 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002418")]
	[Address(RVA = "0x6406F40", Offset = "0x6405F40", VA = "0x6406F40")]
	public uint4x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12, uint m20, uint m21, uint m22, uint m30, uint m31, uint m32)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002419")]
	[Address(RVA = "0x6406FA0", Offset = "0x6405FA0", VA = "0x6406FA0")]
	public uint4x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241A")]
	[Address(RVA = "0x6406FD0", Offset = "0x6405FD0", VA = "0x6406FD0")]
	public uint4x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241B")]
	[Address(RVA = "0x6407000", Offset = "0x6406000", VA = "0x6407000")]
	public uint4x3(bool4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241C")]
	[Address(RVA = "0x64070B0", Offset = "0x64060B0", VA = "0x64070B0")]
	public uint4x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241D")]
	[Address(RVA = "0x64070E0", Offset = "0x64060E0", VA = "0x64070E0")]
	public uint4x3(int4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241E")]
	[Address(RVA = "0x6407100", Offset = "0x6406100", VA = "0x6407100")]
	public uint4x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241F")]
	[Address(RVA = "0x6407140", Offset = "0x6406140", VA = "0x6407140")]
	public uint4x3(float4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002420")]
	[Address(RVA = "0x64072D0", Offset = "0x64062D0", VA = "0x64072D0")]
	public uint4x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002421")]
	[Address(RVA = "0x6407310", Offset = "0x6406310", VA = "0x6407310")]
	public uint4x3(double4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002422")]
	[Address(RVA = "0x64074F0", Offset = "0x64064F0", VA = "0x64074F0")]
	public static implicit operator uint4x3(uint v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002423")]
	[Address(RVA = "0x6407520", Offset = "0x6406520", VA = "0x6407520")]
	public static explicit operator uint4x3(bool v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002424")]
	[Address(RVA = "0x6407550", Offset = "0x6406550", VA = "0x6407550")]
	public static explicit operator uint4x3(bool4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002425")]
	[Address(RVA = "0x6407600", Offset = "0x6406600", VA = "0x6407600")]
	public static explicit operator uint4x3(int v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002426")]
	[Address(RVA = "0x6407630", Offset = "0x6406630", VA = "0x6407630")]
	public static explicit operator uint4x3(int4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002427")]
	[Address(RVA = "0x6407650", Offset = "0x6406650", VA = "0x6407650")]
	public static explicit operator uint4x3(float v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002428")]
	[Address(RVA = "0x6407690", Offset = "0x6406690", VA = "0x6407690")]
	public static explicit operator uint4x3(float4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002429")]
	[Address(RVA = "0x6407840", Offset = "0x6406840", VA = "0x6407840")]
	public static explicit operator uint4x3(double v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242A")]
	[Address(RVA = "0x6407880", Offset = "0x6406880", VA = "0x6407880")]
	public static explicit operator uint4x3(double4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242B")]
	[Address(RVA = "0x6407A60", Offset = "0x6406A60", VA = "0x6407A60")]
	public static uint4x3 operator *(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242C")]
	[Address(RVA = "0x6407B50", Offset = "0x6406B50", VA = "0x6407B50")]
	public static uint4x3 operator *(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242D")]
	[Address(RVA = "0x6407C10", Offset = "0x6406C10", VA = "0x6407C10")]
	public static uint4x3 operator *(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242E")]
	[Address(RVA = "0x6407CD0", Offset = "0x6406CD0", VA = "0x6407CD0")]
	public static uint4x3 operator +(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242F")]
	[Address(RVA = "0x6407DB0", Offset = "0x6406DB0", VA = "0x6407DB0")]
	public static uint4x3 operator +(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002430")]
	[Address(RVA = "0x6407DF0", Offset = "0x6406DF0", VA = "0x6407DF0")]
	public static uint4x3 operator +(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002431")]
	[Address(RVA = "0x6407E30", Offset = "0x6406E30", VA = "0x6407E30")]
	public static uint4x3 operator -(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002432")]
	[Address(RVA = "0x6407F20", Offset = "0x6406F20", VA = "0x6407F20")]
	public static uint4x3 operator -(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002433")]
	[Address(RVA = "0x6407F60", Offset = "0x6406F60", VA = "0x6407F60")]
	public static uint4x3 operator -(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002434")]
	[Address(RVA = "0x6407FA0", Offset = "0x6406FA0", VA = "0x6407FA0")]
	public static uint4x3 operator /(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002435")]
	[Address(RVA = "0x64080E0", Offset = "0x64070E0", VA = "0x64080E0")]
	public static uint4x3 operator /(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002436")]
	[Address(RVA = "0x64081E0", Offset = "0x64071E0", VA = "0x64081E0")]
	public static uint4x3 operator /(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002437")]
	[Address(RVA = "0x64082D0", Offset = "0x64072D0", VA = "0x64082D0")]
	public static uint4x3 operator %(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002438")]
	[Address(RVA = "0x6408410", Offset = "0x6407410", VA = "0x6408410")]
	public static uint4x3 operator %(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002439")]
	[Address(RVA = "0x6408510", Offset = "0x6407510", VA = "0x6408510")]
	public static uint4x3 operator %(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243A")]
	[Address(RVA = "0x6408600", Offset = "0x6407600", VA = "0x6408600")]
	public static uint4x3 operator ++(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243B")]
	[Address(RVA = "0x6408670", Offset = "0x6407670", VA = "0x6408670")]
	public static uint4x3 operator --(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243C")]
	[Address(RVA = "0x64086E0", Offset = "0x64076E0", VA = "0x64086E0")]
	public static bool4x3 operator <(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243D")]
	[Address(RVA = "0x6408810", Offset = "0x6407810", VA = "0x6408810")]
	public static bool4x3 operator <(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243E")]
	[Address(RVA = "0x6408900", Offset = "0x6407900", VA = "0x6408900")]
	public static bool4x3 operator <(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243F")]
	[Address(RVA = "0x64089F0", Offset = "0x64079F0", VA = "0x64089F0")]
	public static bool4x3 operator <=(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002440")]
	[Address(RVA = "0x6408B10", Offset = "0x6407B10", VA = "0x6408B10")]
	public static bool4x3 operator <=(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002441")]
	[Address(RVA = "0x6408BF0", Offset = "0x6407BF0", VA = "0x6408BF0")]
	public static bool4x3 operator <=(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002442")]
	[Address(RVA = "0x6408CD0", Offset = "0x6407CD0", VA = "0x6408CD0")]
	public static bool4x3 operator >(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002443")]
	[Address(RVA = "0x6408E00", Offset = "0x6407E00", VA = "0x6408E00")]
	public static bool4x3 operator >(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002444")]
	[Address(RVA = "0x6408EF0", Offset = "0x6407EF0", VA = "0x6408EF0")]
	public static bool4x3 operator >(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002445")]
	[Address(RVA = "0x6408FE0", Offset = "0x6407FE0", VA = "0x6408FE0")]
	public static bool4x3 operator >=(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002446")]
	[Address(RVA = "0x6409100", Offset = "0x6408100", VA = "0x6409100")]
	public static bool4x3 operator >=(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002447")]
	[Address(RVA = "0x64091E0", Offset = "0x64081E0", VA = "0x64091E0")]
	public static bool4x3 operator >=(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002448")]
	[Address(RVA = "0x64092C0", Offset = "0x64082C0", VA = "0x64092C0")]
	public static uint4x3 operator -(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002449")]
	[Address(RVA = "0x6409330", Offset = "0x6408330", VA = "0x6409330")]
	public static uint4x3 operator +(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244A")]
	[Address(RVA = "0x6409350", Offset = "0x6408350", VA = "0x6409350")]
	public static uint4x3 operator <<(uint4x3 x, int n)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244B")]
	[Address(RVA = "0x6409410", Offset = "0x6408410", VA = "0x6409410")]
	public static uint4x3 operator >>(uint4x3 x, int n)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244C")]
	[Address(RVA = "0x64094D0", Offset = "0x64084D0", VA = "0x64094D0")]
	public static bool4x3 operator ==(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244D")]
	[Address(RVA = "0x6409600", Offset = "0x6408600", VA = "0x6409600")]
	public static bool4x3 operator ==(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244E")]
	[Address(RVA = "0x64096F0", Offset = "0x64086F0", VA = "0x64096F0")]
	public static bool4x3 operator ==(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244F")]
	[Address(RVA = "0x64097E0", Offset = "0x64087E0", VA = "0x64097E0")]
	public static bool4x3 operator !=(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002450")]
	[Address(RVA = "0x6409900", Offset = "0x6408900", VA = "0x6409900")]
	public static bool4x3 operator !=(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002451")]
	[Address(RVA = "0x64099E0", Offset = "0x64089E0", VA = "0x64099E0")]
	public static bool4x3 operator !=(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002452")]
	[Address(RVA = "0x6409AC0", Offset = "0x6408AC0", VA = "0x6409AC0")]
	public static uint4x3 operator ~(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002453")]
	[Address(RVA = "0x6409AF0", Offset = "0x6408AF0", VA = "0x6409AF0")]
	public static uint4x3 operator &(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002454")]
	[Address(RVA = "0x6409B20", Offset = "0x6408B20", VA = "0x6409B20")]
	public static uint4x3 operator &(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002455")]
	[Address(RVA = "0x6409B60", Offset = "0x6408B60", VA = "0x6409B60")]
	public static uint4x3 operator &(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002456")]
	[Address(RVA = "0x6409BA0", Offset = "0x6408BA0", VA = "0x6409BA0")]
	public static uint4x3 operator |(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002457")]
	[Address(RVA = "0x6409BD0", Offset = "0x6408BD0", VA = "0x6409BD0")]
	public static uint4x3 operator |(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002458")]
	[Address(RVA = "0x6409C10", Offset = "0x6408C10", VA = "0x6409C10")]
	public static uint4x3 operator |(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002459")]
	[Address(RVA = "0x6409C50", Offset = "0x6408C50", VA = "0x6409C50")]
	public static uint4x3 operator ^(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600245A")]
	[Address(RVA = "0x6409C80", Offset = "0x6408C80", VA = "0x6409C80")]
	public static uint4x3 operator ^(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600245B")]
	[Address(RVA = "0x6409CC0", Offset = "0x6408CC0", VA = "0x6409CC0")]
	public static uint4x3 operator ^(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600245D")]
	[Address(RVA = "0x6409D10", Offset = "0x6408D10", VA = "0x6409D10", Slot = "4")]
	public bool Equals(uint4x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600245E")]
	[Address(RVA = "0x6409D90", Offset = "0x6408D90", VA = "0x6409D90", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600245F")]
	[Address(RVA = "0x6409E60", Offset = "0x6408E60", VA = "0x6409E60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002460")]
	[Address(RVA = "0x6409F30", Offset = "0x6408F30", VA = "0x6409F30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002461")]
	[Address(RVA = "0x640A3A0", Offset = "0x64093A0", VA = "0x640A3A0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
