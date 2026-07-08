using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000053")]
[DebuggerTypeProxy(typeof(DebuggerProxy))]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint2 : IEquatable<uint2>, IFormattable
{
	[Token(Token = "0x2000054")]
	internal sealed class DebuggerProxy
	{
		[Token(Token = "0x4000132")]
		[FieldOffset(Offset = "0x10")]
		public uint x;

		[Token(Token = "0x4000133")]
		[FieldOffset(Offset = "0x14")]
		public uint y;

		[Token(Token = "0x6001F01")]
		[Address(RVA = "0x48032A0", Offset = "0x48032A0", VA = "0x48032A0")]
		public DebuggerProxy(uint2 v)
		{
		}
	}

	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x0")]
	public uint x;

	[Token(Token = "0x4000130")]
	[FieldOffset(Offset = "0x4")]
	public uint y;

	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint2 zero;

	[Token(Token = "0x1700099D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint4 xxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EDC")]
		[Address(RVA = "0x4802E10", Offset = "0x4802E10", VA = "0x4802E10")]
		get
		{
			return default(uint4);
		}
	}

	[Token(Token = "0x1700099E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint4 xxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EDD")]
		[Address(RVA = "0x4802E20", Offset = "0x4802E20", VA = "0x4802E20")]
		get
		{
			return default(uint4);
		}
	}

	[Token(Token = "0x1700099F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint4 xxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EDE")]
		[Address(RVA = "0x4802E40", Offset = "0x4802E40", VA = "0x4802E40")]
		get
		{
			return default(uint4);
		}
	}

	[Token(Token = "0x170009A0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint4 xxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EDF")]
		[Address(RVA = "0x4802E60", Offset = "0x4802E60", VA = "0x4802E60")]
		get
		{
			return default(uint4);
		}
	}

	[Token(Token = "0x170009A1")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint4 xyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EE0")]
		[Address(RVA = "0x4802E80", Offset = "0x4802E80", VA = "0x4802E80")]
		get
		{
			return default(uint4);
		}
	}

	[Token(Token = "0x170009A2")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint4 xyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EE1")]
		[Address(RVA = "0x4802EA0", Offset = "0x4802EA0", VA = "0x4802EA0")]
		get
		{
			return default(uint4);
		}
	}

	[Token(Token = "0x170009A3")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint4 xyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EE2")]
		[Address(RVA = "0x4802EB0", Offset = "0x4802EB0", VA = "0x4802EB0")]
		get
		{
			return default(uint4);
		}
	}

	[Token(Token = "0x170009A4")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint4 xyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EE3")]
		[Address(RVA = "0x4802ED0", Offset = "0x4802ED0", VA = "0x4802ED0")]
		get
		{
			return default(uint4);
		}
	}

	[Token(Token = "0x170009A5")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint4 yxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EE4")]
		[Address(RVA = "0x4802EF0", Offset = "0x4802EF0", VA = "0x4802EF0")]
		get
		{
			return default(uint4);
		}
	}

	[Token(Token = "0x170009A6")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint4 yxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EE5")]
		[Address(RVA = "0x4802F10", Offset = "0x4802F10", VA = "0x4802F10")]
		get
		{
			return default(uint4);
		}
	}

	[Token(Token = "0x170009A7")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint4 yxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EE6")]
		[Address(RVA = "0x4802F30", Offset = "0x4802F30", VA = "0x4802F30")]
		get
		{
			return default(uint4);
		}
	}

	[Token(Token = "0x170009A8")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint4 yxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EE7")]
		[Address(RVA = "0x4802F40", Offset = "0x4802F40", VA = "0x4802F40")]
		get
		{
			return default(uint4);
		}
	}

	[Token(Token = "0x170009A9")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint4 yyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EE8")]
		[Address(RVA = "0x4802F60", Offset = "0x4802F60", VA = "0x4802F60")]
		get
		{
			return default(uint4);
		}
	}

	[Token(Token = "0x170009AA")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint4 yyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EE9")]
		[Address(RVA = "0x4802F80", Offset = "0x4802F80", VA = "0x4802F80")]
		get
		{
			return default(uint4);
		}
	}

	[Token(Token = "0x170009AB")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint4 yyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EEA")]
		[Address(RVA = "0x4802FA0", Offset = "0x4802FA0", VA = "0x4802FA0")]
		get
		{
			return default(uint4);
		}
	}

	[Token(Token = "0x170009AC")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint4 yyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EEB")]
		[Address(RVA = "0x4802FC0", Offset = "0x4802FC0", VA = "0x4802FC0")]
		get
		{
			return default(uint4);
		}
	}

	[Token(Token = "0x170009AD")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint3 xxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EEC")]
		[Address(RVA = "0x4802FE0", Offset = "0x4802FE0", VA = "0x4802FE0")]
		get
		{
			return default(uint3);
		}
	}

	[Token(Token = "0x170009AE")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint3 xxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EED")]
		[Address(RVA = "0x4802FF0", Offset = "0x4802FF0", VA = "0x4802FF0")]
		get
		{
			return default(uint3);
		}
	}

	[Token(Token = "0x170009AF")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint3 xyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EEE")]
		[Address(RVA = "0x4803000", Offset = "0x4803000", VA = "0x4803000")]
		get
		{
			return default(uint3);
		}
	}

	[Token(Token = "0x170009B0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint3 xyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EEF")]
		[Address(RVA = "0x4803010", Offset = "0x4803010", VA = "0x4803010")]
		get
		{
			return default(uint3);
		}
	}

	[Token(Token = "0x170009B1")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint3 yxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EF0")]
		[Address(RVA = "0x4803020", Offset = "0x4803020", VA = "0x4803020")]
		get
		{
			return default(uint3);
		}
	}

	[Token(Token = "0x170009B2")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint3 yxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EF1")]
		[Address(RVA = "0x4803030", Offset = "0x4803030", VA = "0x4803030")]
		get
		{
			return default(uint3);
		}
	}

	[Token(Token = "0x170009B3")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint3 yyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EF2")]
		[Address(RVA = "0x4803040", Offset = "0x4803040", VA = "0x4803040")]
		get
		{
			return default(uint3);
		}
	}

	[Token(Token = "0x170009B4")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint3 yyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EF3")]
		[Address(RVA = "0x4803050", Offset = "0x4803050", VA = "0x4803050")]
		get
		{
			return default(uint3);
		}
	}

	[Token(Token = "0x170009B5")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint2 xx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EF4")]
		[Address(RVA = "0x4803060", Offset = "0x4803060", VA = "0x4803060")]
		get
		{
			return default(uint2);
		}
	}

	[Token(Token = "0x170009B6")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint2 xy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EF5")]
		[Address(RVA = "0x4803070", Offset = "0x4803070", VA = "0x4803070")]
		get
		{
			return default(uint2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EF6")]
		[Address(RVA = "0x4803080", Offset = "0x4803080", VA = "0x4803080")]
		set
		{
		}
	}

	[Token(Token = "0x170009B7")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint2 yx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EF7")]
		[Address(RVA = "0x4803090", Offset = "0x4803090", VA = "0x4803090")]
		get
		{
			return default(uint2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EF8")]
		[Address(RVA = "0x48030A0", Offset = "0x48030A0", VA = "0x48030A0")]
		set
		{
		}
	}

	[Token(Token = "0x170009B8")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public uint2 yy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001EF9")]
		[Address(RVA = "0x48030B0", Offset = "0x48030B0", VA = "0x48030B0")]
		get
		{
			return default(uint2);
		}
	}

	[Token(Token = "0x170009B9")]
	public uint this[int index]
	{
		[Token(Token = "0x6001EFA")]
		[Address(RVA = "0x48030C0", Offset = "0x48030C0", VA = "0x48030C0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6001EFB")]
		[Address(RVA = "0x48030D0", Offset = "0x48030D0", VA = "0x48030D0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E97")]
	[Address(RVA = "0x4802570", Offset = "0x4802570", VA = "0x4802570")]
	public uint2(uint x, uint y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E98")]
	[Address(RVA = "0x4802580", Offset = "0x4802580", VA = "0x4802580")]
	public uint2(uint2 xy)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E99")]
	[Address(RVA = "0x4802590", Offset = "0x4802590", VA = "0x4802590")]
	public uint2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E9A")]
	[Address(RVA = "0x48025A0", Offset = "0x48025A0", VA = "0x48025A0")]
	public uint2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E9B")]
	[Address(RVA = "0x48025B0", Offset = "0x48025B0", VA = "0x48025B0")]
	public uint2(bool2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E9C")]
	[Address(RVA = "0x48025D0", Offset = "0x48025D0", VA = "0x48025D0")]
	public uint2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E9D")]
	[Address(RVA = "0x48025E0", Offset = "0x48025E0", VA = "0x48025E0")]
	public uint2(int2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E9E")]
	[Address(RVA = "0x48025F0", Offset = "0x48025F0", VA = "0x48025F0")]
	public uint2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E9F")]
	[Address(RVA = "0x4802610", Offset = "0x4802610", VA = "0x4802610")]
	public uint2(float2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA0")]
	[Address(RVA = "0x4802640", Offset = "0x4802640", VA = "0x4802640")]
	public uint2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA1")]
	[Address(RVA = "0x4802660", Offset = "0x4802660", VA = "0x4802660")]
	public uint2(double2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA2")]
	[Address(RVA = "0x4802690", Offset = "0x4802690", VA = "0x4802690")]
	public static implicit operator uint2(uint v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA3")]
	[Address(RVA = "0x48026A0", Offset = "0x48026A0", VA = "0x48026A0")]
	public static explicit operator uint2(bool v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA4")]
	[Address(RVA = "0x48026B0", Offset = "0x48026B0", VA = "0x48026B0")]
	public static explicit operator uint2(bool2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA5")]
	[Address(RVA = "0x48026D0", Offset = "0x48026D0", VA = "0x48026D0")]
	public static explicit operator uint2(int v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA6")]
	[Address(RVA = "0x48026E0", Offset = "0x48026E0", VA = "0x48026E0")]
	public static explicit operator uint2(int2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA7")]
	[Address(RVA = "0x48026F0", Offset = "0x48026F0", VA = "0x48026F0")]
	public static explicit operator uint2(float v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA8")]
	[Address(RVA = "0x4802710", Offset = "0x4802710", VA = "0x4802710")]
	public static explicit operator uint2(float2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EA9")]
	[Address(RVA = "0x4802740", Offset = "0x4802740", VA = "0x4802740")]
	public static explicit operator uint2(double v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EAA")]
	[Address(RVA = "0x4802760", Offset = "0x4802760", VA = "0x4802760")]
	public static explicit operator uint2(double2 v)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EAB")]
	[Address(RVA = "0x4802790", Offset = "0x4802790", VA = "0x4802790")]
	public static uint2 operator *(uint2 lhs, uint2 rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EAC")]
	[Address(RVA = "0x48027C0", Offset = "0x48027C0", VA = "0x48027C0")]
	public static uint2 operator *(uint2 lhs, uint rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EAD")]
	[Address(RVA = "0x48027E0", Offset = "0x48027E0", VA = "0x48027E0")]
	public static uint2 operator *(uint lhs, uint2 rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EAE")]
	[Address(RVA = "0x4802800", Offset = "0x4802800", VA = "0x4802800")]
	public static uint2 operator +(uint2 lhs, uint2 rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EAF")]
	[Address(RVA = "0x4802820", Offset = "0x4802820", VA = "0x4802820")]
	public static uint2 operator +(uint2 lhs, uint rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB0")]
	[Address(RVA = "0x4802840", Offset = "0x4802840", VA = "0x4802840")]
	public static uint2 operator +(uint lhs, uint2 rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB1")]
	[Address(RVA = "0x4802860", Offset = "0x4802860", VA = "0x4802860")]
	public static uint2 operator -(uint2 lhs, uint2 rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB2")]
	[Address(RVA = "0x4802880", Offset = "0x4802880", VA = "0x4802880")]
	public static uint2 operator -(uint2 lhs, uint rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB3")]
	[Address(RVA = "0x48028A0", Offset = "0x48028A0", VA = "0x48028A0")]
	public static uint2 operator -(uint lhs, uint2 rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB4")]
	[Address(RVA = "0x48028C0", Offset = "0x48028C0", VA = "0x48028C0")]
	public static uint2 operator /(uint2 lhs, uint2 rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB5")]
	[Address(RVA = "0x48028F0", Offset = "0x48028F0", VA = "0x48028F0")]
	public static uint2 operator /(uint2 lhs, uint rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB6")]
	[Address(RVA = "0x4802920", Offset = "0x4802920", VA = "0x4802920")]
	public static uint2 operator /(uint lhs, uint2 rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB7")]
	[Address(RVA = "0x4802940", Offset = "0x4802940", VA = "0x4802940")]
	public static uint2 operator %(uint2 lhs, uint2 rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB8")]
	[Address(RVA = "0x4802970", Offset = "0x4802970", VA = "0x4802970")]
	public static uint2 operator %(uint2 lhs, uint rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EB9")]
	[Address(RVA = "0x4802990", Offset = "0x4802990", VA = "0x4802990")]
	public static uint2 operator %(uint lhs, uint2 rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EBA")]
	[Address(RVA = "0x48029B0", Offset = "0x48029B0", VA = "0x48029B0")]
	public static uint2 operator ++(uint2 val)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EBB")]
	[Address(RVA = "0x48029E0", Offset = "0x48029E0", VA = "0x48029E0")]
	public static uint2 operator --(uint2 val)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EBC")]
	[Address(RVA = "0x4802A00", Offset = "0x4802A00", VA = "0x4802A00")]
	public static bool2 operator <(uint2 lhs, uint2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EBD")]
	[Address(RVA = "0x4802A30", Offset = "0x4802A30", VA = "0x4802A30")]
	public static bool2 operator <(uint2 lhs, uint rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EBE")]
	[Address(RVA = "0x4802A50", Offset = "0x4802A50", VA = "0x4802A50")]
	public static bool2 operator <(uint lhs, uint2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EBF")]
	[Address(RVA = "0x4802A70", Offset = "0x4802A70", VA = "0x4802A70")]
	public static bool2 operator <=(uint2 lhs, uint2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EC0")]
	[Address(RVA = "0x4802AA0", Offset = "0x4802AA0", VA = "0x4802AA0")]
	public static bool2 operator <=(uint2 lhs, uint rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EC1")]
	[Address(RVA = "0x4802AC0", Offset = "0x4802AC0", VA = "0x4802AC0")]
	public static bool2 operator <=(uint lhs, uint2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EC2")]
	[Address(RVA = "0x4802AE0", Offset = "0x4802AE0", VA = "0x4802AE0")]
	public static bool2 operator >(uint2 lhs, uint2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EC3")]
	[Address(RVA = "0x4802B10", Offset = "0x4802B10", VA = "0x4802B10")]
	public static bool2 operator >(uint2 lhs, uint rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EC4")]
	[Address(RVA = "0x4802B30", Offset = "0x4802B30", VA = "0x4802B30")]
	public static bool2 operator >(uint lhs, uint2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EC5")]
	[Address(RVA = "0x4802B50", Offset = "0x4802B50", VA = "0x4802B50")]
	public static bool2 operator >=(uint2 lhs, uint2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EC6")]
	[Address(RVA = "0x4802B80", Offset = "0x4802B80", VA = "0x4802B80")]
	public static bool2 operator >=(uint2 lhs, uint rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EC7")]
	[Address(RVA = "0x4802BA0", Offset = "0x4802BA0", VA = "0x4802BA0")]
	public static bool2 operator >=(uint lhs, uint2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EC8")]
	[Address(RVA = "0x4802BC0", Offset = "0x4802BC0", VA = "0x4802BC0")]
	public static uint2 operator -(uint2 val)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EC9")]
	[Address(RVA = "0x4802BE0", Offset = "0x4802BE0", VA = "0x4802BE0")]
	public static uint2 operator +(uint2 val)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ECA")]
	[Address(RVA = "0x4802BF0", Offset = "0x4802BF0", VA = "0x4802BF0")]
	public static uint2 operator <<(uint2 x, int n)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ECB")]
	[Address(RVA = "0x4802C10", Offset = "0x4802C10", VA = "0x4802C10")]
	public static uint2 operator >>(uint2 x, int n)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ECC")]
	[Address(RVA = "0x4802C30", Offset = "0x4802C30", VA = "0x4802C30")]
	public static bool2 operator ==(uint2 lhs, uint2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ECD")]
	[Address(RVA = "0x4802C60", Offset = "0x4802C60", VA = "0x4802C60")]
	public static bool2 operator ==(uint2 lhs, uint rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ECE")]
	[Address(RVA = "0x4802C80", Offset = "0x4802C80", VA = "0x4802C80")]
	public static bool2 operator ==(uint lhs, uint2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ECF")]
	[Address(RVA = "0x4802CA0", Offset = "0x4802CA0", VA = "0x4802CA0")]
	public static bool2 operator !=(uint2 lhs, uint2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED0")]
	[Address(RVA = "0x4802CD0", Offset = "0x4802CD0", VA = "0x4802CD0")]
	public static bool2 operator !=(uint2 lhs, uint rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED1")]
	[Address(RVA = "0x4802CF0", Offset = "0x4802CF0", VA = "0x4802CF0")]
	public static bool2 operator !=(uint lhs, uint2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED2")]
	[Address(RVA = "0x4802D10", Offset = "0x4802D10", VA = "0x4802D10")]
	public static uint2 operator ~(uint2 val)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED3")]
	[Address(RVA = "0x4802D20", Offset = "0x4802D20", VA = "0x4802D20")]
	public static uint2 operator &(uint2 lhs, uint2 rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED4")]
	[Address(RVA = "0x4802D30", Offset = "0x4802D30", VA = "0x4802D30")]
	public static uint2 operator &(uint2 lhs, uint rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED5")]
	[Address(RVA = "0x4802D50", Offset = "0x4802D50", VA = "0x4802D50")]
	public static uint2 operator &(uint lhs, uint2 rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED6")]
	[Address(RVA = "0x4802D70", Offset = "0x4802D70", VA = "0x4802D70")]
	public static uint2 operator |(uint2 lhs, uint2 rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED7")]
	[Address(RVA = "0x4802D80", Offset = "0x4802D80", VA = "0x4802D80")]
	public static uint2 operator |(uint2 lhs, uint rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED8")]
	[Address(RVA = "0x4802DA0", Offset = "0x4802DA0", VA = "0x4802DA0")]
	public static uint2 operator |(uint lhs, uint2 rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ED9")]
	[Address(RVA = "0x4802DC0", Offset = "0x4802DC0", VA = "0x4802DC0")]
	public static uint2 operator ^(uint2 lhs, uint2 rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EDA")]
	[Address(RVA = "0x4802DD0", Offset = "0x4802DD0", VA = "0x4802DD0")]
	public static uint2 operator ^(uint2 lhs, uint rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EDB")]
	[Address(RVA = "0x4802DF0", Offset = "0x4802DF0", VA = "0x4802DF0")]
	public static uint2 operator ^(uint lhs, uint2 rhs)
	{
		return default(uint2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EFC")]
	[Address(RVA = "0x48030E0", Offset = "0x48030E0", VA = "0x48030E0", Slot = "4")]
	public bool Equals(uint2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001EFD")]
	[Address(RVA = "0x4803100", Offset = "0x4803100", VA = "0x4803100", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EFE")]
	[Address(RVA = "0x4803170", Offset = "0x4803170", VA = "0x4803170", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EFF")]
	[Address(RVA = "0x48031A0", Offset = "0x48031A0", VA = "0x48031A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F00")]
	[Address(RVA = "0x4803220", Offset = "0x4803220", VA = "0x4803220", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
