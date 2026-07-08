using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000041")]
[DebuggerTypeProxy(typeof(DebuggerProxy))]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int2 : IEquatable<int2>, IFormattable
{
	[Token(Token = "0x2000042")]
	internal sealed class DebuggerProxy
	{
		[Token(Token = "0x40000F0")]
		[FieldOffset(Offset = "0x10")]
		public int x;

		[Token(Token = "0x40000F1")]
		[FieldOffset(Offset = "0x14")]
		public int y;

		[Token(Token = "0x60018C0")]
		[Address(RVA = "0x47DABF0", Offset = "0x47DABF0", VA = "0x47DABF0")]
		public DebuggerProxy(int2 v)
		{
		}
	}

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x0")]
	public int x;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x4")]
	public int y;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int2 zero;

	[Token(Token = "0x170007B0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int4 xxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600189B")]
		[Address(RVA = "0x47DA760", Offset = "0x47DA760", VA = "0x47DA760")]
		get
		{
			return default(int4);
		}
	}

	[Token(Token = "0x170007B1")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int4 xxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600189C")]
		[Address(RVA = "0x47DA770", Offset = "0x47DA770", VA = "0x47DA770")]
		get
		{
			return default(int4);
		}
	}

	[Token(Token = "0x170007B2")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int4 xxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600189D")]
		[Address(RVA = "0x47DA790", Offset = "0x47DA790", VA = "0x47DA790")]
		get
		{
			return default(int4);
		}
	}

	[Token(Token = "0x170007B3")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int4 xxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600189E")]
		[Address(RVA = "0x47DA7B0", Offset = "0x47DA7B0", VA = "0x47DA7B0")]
		get
		{
			return default(int4);
		}
	}

	[Token(Token = "0x170007B4")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int4 xyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600189F")]
		[Address(RVA = "0x47DA7D0", Offset = "0x47DA7D0", VA = "0x47DA7D0")]
		get
		{
			return default(int4);
		}
	}

	[Token(Token = "0x170007B5")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int4 xyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018A0")]
		[Address(RVA = "0x47DA7F0", Offset = "0x47DA7F0", VA = "0x47DA7F0")]
		get
		{
			return default(int4);
		}
	}

	[Token(Token = "0x170007B6")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int4 xyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018A1")]
		[Address(RVA = "0x47DA800", Offset = "0x47DA800", VA = "0x47DA800")]
		get
		{
			return default(int4);
		}
	}

	[Token(Token = "0x170007B7")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int4 xyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018A2")]
		[Address(RVA = "0x47DA820", Offset = "0x47DA820", VA = "0x47DA820")]
		get
		{
			return default(int4);
		}
	}

	[Token(Token = "0x170007B8")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int4 yxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018A3")]
		[Address(RVA = "0x47DA840", Offset = "0x47DA840", VA = "0x47DA840")]
		get
		{
			return default(int4);
		}
	}

	[Token(Token = "0x170007B9")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int4 yxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018A4")]
		[Address(RVA = "0x47DA860", Offset = "0x47DA860", VA = "0x47DA860")]
		get
		{
			return default(int4);
		}
	}

	[Token(Token = "0x170007BA")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int4 yxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018A5")]
		[Address(RVA = "0x47DA880", Offset = "0x47DA880", VA = "0x47DA880")]
		get
		{
			return default(int4);
		}
	}

	[Token(Token = "0x170007BB")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int4 yxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018A6")]
		[Address(RVA = "0x47DA890", Offset = "0x47DA890", VA = "0x47DA890")]
		get
		{
			return default(int4);
		}
	}

	[Token(Token = "0x170007BC")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int4 yyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018A7")]
		[Address(RVA = "0x47DA8B0", Offset = "0x47DA8B0", VA = "0x47DA8B0")]
		get
		{
			return default(int4);
		}
	}

	[Token(Token = "0x170007BD")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int4 yyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018A8")]
		[Address(RVA = "0x47DA8D0", Offset = "0x47DA8D0", VA = "0x47DA8D0")]
		get
		{
			return default(int4);
		}
	}

	[Token(Token = "0x170007BE")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int4 yyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018A9")]
		[Address(RVA = "0x47DA8F0", Offset = "0x47DA8F0", VA = "0x47DA8F0")]
		get
		{
			return default(int4);
		}
	}

	[Token(Token = "0x170007BF")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int4 yyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018AA")]
		[Address(RVA = "0x47DA910", Offset = "0x47DA910", VA = "0x47DA910")]
		get
		{
			return default(int4);
		}
	}

	[Token(Token = "0x170007C0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int3 xxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018AB")]
		[Address(RVA = "0x47DA930", Offset = "0x47DA930", VA = "0x47DA930")]
		get
		{
			return default(int3);
		}
	}

	[Token(Token = "0x170007C1")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int3 xxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018AC")]
		[Address(RVA = "0x47DA940", Offset = "0x47DA940", VA = "0x47DA940")]
		get
		{
			return default(int3);
		}
	}

	[Token(Token = "0x170007C2")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int3 xyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018AD")]
		[Address(RVA = "0x47DA950", Offset = "0x47DA950", VA = "0x47DA950")]
		get
		{
			return default(int3);
		}
	}

	[Token(Token = "0x170007C3")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int3 xyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018AE")]
		[Address(RVA = "0x47DA960", Offset = "0x47DA960", VA = "0x47DA960")]
		get
		{
			return default(int3);
		}
	}

	[Token(Token = "0x170007C4")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int3 yxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018AF")]
		[Address(RVA = "0x47DA970", Offset = "0x47DA970", VA = "0x47DA970")]
		get
		{
			return default(int3);
		}
	}

	[Token(Token = "0x170007C5")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int3 yxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018B0")]
		[Address(RVA = "0x47DA980", Offset = "0x47DA980", VA = "0x47DA980")]
		get
		{
			return default(int3);
		}
	}

	[Token(Token = "0x170007C6")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int3 yyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018B1")]
		[Address(RVA = "0x47DA990", Offset = "0x47DA990", VA = "0x47DA990")]
		get
		{
			return default(int3);
		}
	}

	[Token(Token = "0x170007C7")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int3 yyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018B2")]
		[Address(RVA = "0x47DA9A0", Offset = "0x47DA9A0", VA = "0x47DA9A0")]
		get
		{
			return default(int3);
		}
	}

	[Token(Token = "0x170007C8")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int2 xx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018B3")]
		[Address(RVA = "0x47DA9B0", Offset = "0x47DA9B0", VA = "0x47DA9B0")]
		get
		{
			return default(int2);
		}
	}

	[Token(Token = "0x170007C9")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int2 xy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018B4")]
		[Address(RVA = "0x47DA9C0", Offset = "0x47DA9C0", VA = "0x47DA9C0")]
		get
		{
			return default(int2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018B5")]
		[Address(RVA = "0x47DA9D0", Offset = "0x47DA9D0", VA = "0x47DA9D0")]
		set
		{
		}
	}

	[Token(Token = "0x170007CA")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int2 yx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018B6")]
		[Address(RVA = "0x47DA9E0", Offset = "0x47DA9E0", VA = "0x47DA9E0")]
		get
		{
			return default(int2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018B7")]
		[Address(RVA = "0x47DA9F0", Offset = "0x47DA9F0", VA = "0x47DA9F0")]
		set
		{
		}
	}

	[Token(Token = "0x170007CB")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public int2 yy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60018B8")]
		[Address(RVA = "0x47DAA00", Offset = "0x47DAA00", VA = "0x47DAA00")]
		get
		{
			return default(int2);
		}
	}

	[Token(Token = "0x170007CC")]
	public int this[int index]
	{
		[Token(Token = "0x60018B9")]
		[Address(RVA = "0x47DAA10", Offset = "0x47DAA10", VA = "0x47DAA10")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60018BA")]
		[Address(RVA = "0x47DAA20", Offset = "0x47DAA20", VA = "0x47DAA20")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001856")]
	[Address(RVA = "0x47D9F70", Offset = "0x47D9F70", VA = "0x47D9F70")]
	public int2(int x, int y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001857")]
	[Address(RVA = "0x47D9F80", Offset = "0x47D9F80", VA = "0x47D9F80")]
	public int2(int2 xy)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001858")]
	[Address(RVA = "0x47D9F90", Offset = "0x47D9F90", VA = "0x47D9F90")]
	public int2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001859")]
	[Address(RVA = "0x47D9FA0", Offset = "0x47D9FA0", VA = "0x47D9FA0")]
	public int2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600185A")]
	[Address(RVA = "0x47D9FB0", Offset = "0x47D9FB0", VA = "0x47D9FB0")]
	public int2(bool2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600185B")]
	[Address(RVA = "0x47D9FD0", Offset = "0x47D9FD0", VA = "0x47D9FD0")]
	public int2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600185C")]
	[Address(RVA = "0x47D9FE0", Offset = "0x47D9FE0", VA = "0x47D9FE0")]
	public int2(uint2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600185D")]
	[Address(RVA = "0x47D9FF0", Offset = "0x47D9FF0", VA = "0x47D9FF0")]
	public int2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600185E")]
	[Address(RVA = "0x47DA000", Offset = "0x47DA000", VA = "0x47DA000")]
	public int2(float2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600185F")]
	[Address(RVA = "0x47DA020", Offset = "0x47DA020", VA = "0x47DA020")]
	public int2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001860")]
	[Address(RVA = "0x47DA030", Offset = "0x47DA030", VA = "0x47DA030")]
	public int2(double2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001861")]
	[Address(RVA = "0x47DA040", Offset = "0x47DA040", VA = "0x47DA040")]
	public static implicit operator int2(int v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001862")]
	[Address(RVA = "0x47DA050", Offset = "0x47DA050", VA = "0x47DA050")]
	public static explicit operator int2(bool v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001863")]
	[Address(RVA = "0x47DA060", Offset = "0x47DA060", VA = "0x47DA060")]
	public static explicit operator int2(bool2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001864")]
	[Address(RVA = "0x47DA080", Offset = "0x47DA080", VA = "0x47DA080")]
	public static explicit operator int2(uint v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001865")]
	[Address(RVA = "0x47DA090", Offset = "0x47DA090", VA = "0x47DA090")]
	public static explicit operator int2(uint2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001866")]
	[Address(RVA = "0x47DA0A0", Offset = "0x47DA0A0", VA = "0x47DA0A0")]
	public static explicit operator int2(float v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001867")]
	[Address(RVA = "0x47DA0B0", Offset = "0x47DA0B0", VA = "0x47DA0B0")]
	public static explicit operator int2(float2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001868")]
	[Address(RVA = "0x47DA0D0", Offset = "0x47DA0D0", VA = "0x47DA0D0")]
	public static explicit operator int2(double v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001869")]
	[Address(RVA = "0x47DA0E0", Offset = "0x47DA0E0", VA = "0x47DA0E0")]
	public static explicit operator int2(double2 v)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600186A")]
	[Address(RVA = "0x47DA0F0", Offset = "0x47DA0F0", VA = "0x47DA0F0")]
	public static int2 operator *(int2 lhs, int2 rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600186B")]
	[Address(RVA = "0x47DA120", Offset = "0x47DA120", VA = "0x47DA120")]
	public static int2 operator *(int2 lhs, int rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600186C")]
	[Address(RVA = "0x47DA140", Offset = "0x47DA140", VA = "0x47DA140")]
	public static int2 operator *(int lhs, int2 rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600186D")]
	[Address(RVA = "0x47DA160", Offset = "0x47DA160", VA = "0x47DA160")]
	public static int2 operator +(int2 lhs, int2 rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600186E")]
	[Address(RVA = "0x47DA180", Offset = "0x47DA180", VA = "0x47DA180")]
	public static int2 operator +(int2 lhs, int rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600186F")]
	[Address(RVA = "0x47DA1A0", Offset = "0x47DA1A0", VA = "0x47DA1A0")]
	public static int2 operator +(int lhs, int2 rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001870")]
	[Address(RVA = "0x47DA1C0", Offset = "0x47DA1C0", VA = "0x47DA1C0")]
	public static int2 operator -(int2 lhs, int2 rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001871")]
	[Address(RVA = "0x47DA1E0", Offset = "0x47DA1E0", VA = "0x47DA1E0")]
	public static int2 operator -(int2 lhs, int rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001872")]
	[Address(RVA = "0x47DA200", Offset = "0x47DA200", VA = "0x47DA200")]
	public static int2 operator -(int lhs, int2 rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001873")]
	[Address(RVA = "0x47DA220", Offset = "0x47DA220", VA = "0x47DA220")]
	public static int2 operator /(int2 lhs, int2 rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001874")]
	[Address(RVA = "0x47DA250", Offset = "0x47DA250", VA = "0x47DA250")]
	public static int2 operator /(int2 lhs, int rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001875")]
	[Address(RVA = "0x47DA270", Offset = "0x47DA270", VA = "0x47DA270")]
	public static int2 operator /(int lhs, int2 rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001876")]
	[Address(RVA = "0x47DA290", Offset = "0x47DA290", VA = "0x47DA290")]
	public static int2 operator %(int2 lhs, int2 rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001877")]
	[Address(RVA = "0x47DA2C0", Offset = "0x47DA2C0", VA = "0x47DA2C0")]
	public static int2 operator %(int2 lhs, int rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001878")]
	[Address(RVA = "0x47DA2E0", Offset = "0x47DA2E0", VA = "0x47DA2E0")]
	public static int2 operator %(int lhs, int2 rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001879")]
	[Address(RVA = "0x47DA300", Offset = "0x47DA300", VA = "0x47DA300")]
	public static int2 operator ++(int2 val)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600187A")]
	[Address(RVA = "0x47DA330", Offset = "0x47DA330", VA = "0x47DA330")]
	public static int2 operator --(int2 val)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600187B")]
	[Address(RVA = "0x47DA350", Offset = "0x47DA350", VA = "0x47DA350")]
	public static bool2 operator <(int2 lhs, int2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600187C")]
	[Address(RVA = "0x47DA380", Offset = "0x47DA380", VA = "0x47DA380")]
	public static bool2 operator <(int2 lhs, int rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600187D")]
	[Address(RVA = "0x47DA3A0", Offset = "0x47DA3A0", VA = "0x47DA3A0")]
	public static bool2 operator <(int lhs, int2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600187E")]
	[Address(RVA = "0x47DA3C0", Offset = "0x47DA3C0", VA = "0x47DA3C0")]
	public static bool2 operator <=(int2 lhs, int2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600187F")]
	[Address(RVA = "0x47DA3F0", Offset = "0x47DA3F0", VA = "0x47DA3F0")]
	public static bool2 operator <=(int2 lhs, int rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001880")]
	[Address(RVA = "0x47DA410", Offset = "0x47DA410", VA = "0x47DA410")]
	public static bool2 operator <=(int lhs, int2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001881")]
	[Address(RVA = "0x47DA430", Offset = "0x47DA430", VA = "0x47DA430")]
	public static bool2 operator >(int2 lhs, int2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001882")]
	[Address(RVA = "0x47DA460", Offset = "0x47DA460", VA = "0x47DA460")]
	public static bool2 operator >(int2 lhs, int rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001883")]
	[Address(RVA = "0x47DA480", Offset = "0x47DA480", VA = "0x47DA480")]
	public static bool2 operator >(int lhs, int2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001884")]
	[Address(RVA = "0x47DA4A0", Offset = "0x47DA4A0", VA = "0x47DA4A0")]
	public static bool2 operator >=(int2 lhs, int2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001885")]
	[Address(RVA = "0x47DA4D0", Offset = "0x47DA4D0", VA = "0x47DA4D0")]
	public static bool2 operator >=(int2 lhs, int rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001886")]
	[Address(RVA = "0x47DA4F0", Offset = "0x47DA4F0", VA = "0x47DA4F0")]
	public static bool2 operator >=(int lhs, int2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001887")]
	[Address(RVA = "0x47DA510", Offset = "0x47DA510", VA = "0x47DA510")]
	public static int2 operator -(int2 val)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001888")]
	[Address(RVA = "0x47DA530", Offset = "0x47DA530", VA = "0x47DA530")]
	public static int2 operator +(int2 val)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001889")]
	[Address(RVA = "0x47DA540", Offset = "0x47DA540", VA = "0x47DA540")]
	public static int2 operator <<(int2 x, int n)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600188A")]
	[Address(RVA = "0x47DA560", Offset = "0x47DA560", VA = "0x47DA560")]
	public static int2 operator >>(int2 x, int n)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600188B")]
	[Address(RVA = "0x47DA580", Offset = "0x47DA580", VA = "0x47DA580")]
	public static bool2 operator ==(int2 lhs, int2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600188C")]
	[Address(RVA = "0x47DA5B0", Offset = "0x47DA5B0", VA = "0x47DA5B0")]
	public static bool2 operator ==(int2 lhs, int rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600188D")]
	[Address(RVA = "0x47DA5D0", Offset = "0x47DA5D0", VA = "0x47DA5D0")]
	public static bool2 operator ==(int lhs, int2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600188E")]
	[Address(RVA = "0x47DA5F0", Offset = "0x47DA5F0", VA = "0x47DA5F0")]
	public static bool2 operator !=(int2 lhs, int2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600188F")]
	[Address(RVA = "0x47DA620", Offset = "0x47DA620", VA = "0x47DA620")]
	public static bool2 operator !=(int2 lhs, int rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001890")]
	[Address(RVA = "0x47DA640", Offset = "0x47DA640", VA = "0x47DA640")]
	public static bool2 operator !=(int lhs, int2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001891")]
	[Address(RVA = "0x47DA660", Offset = "0x47DA660", VA = "0x47DA660")]
	public static int2 operator ~(int2 val)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001892")]
	[Address(RVA = "0x47DA670", Offset = "0x47DA670", VA = "0x47DA670")]
	public static int2 operator &(int2 lhs, int2 rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001893")]
	[Address(RVA = "0x47DA680", Offset = "0x47DA680", VA = "0x47DA680")]
	public static int2 operator &(int2 lhs, int rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001894")]
	[Address(RVA = "0x47DA6A0", Offset = "0x47DA6A0", VA = "0x47DA6A0")]
	public static int2 operator &(int lhs, int2 rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001895")]
	[Address(RVA = "0x47DA6C0", Offset = "0x47DA6C0", VA = "0x47DA6C0")]
	public static int2 operator |(int2 lhs, int2 rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001896")]
	[Address(RVA = "0x47DA6D0", Offset = "0x47DA6D0", VA = "0x47DA6D0")]
	public static int2 operator |(int2 lhs, int rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001897")]
	[Address(RVA = "0x47DA6F0", Offset = "0x47DA6F0", VA = "0x47DA6F0")]
	public static int2 operator |(int lhs, int2 rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001898")]
	[Address(RVA = "0x47DA710", Offset = "0x47DA710", VA = "0x47DA710")]
	public static int2 operator ^(int2 lhs, int2 rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001899")]
	[Address(RVA = "0x47DA720", Offset = "0x47DA720", VA = "0x47DA720")]
	public static int2 operator ^(int2 lhs, int rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600189A")]
	[Address(RVA = "0x47DA740", Offset = "0x47DA740", VA = "0x47DA740")]
	public static int2 operator ^(int lhs, int2 rhs)
	{
		return default(int2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018BB")]
	[Address(RVA = "0x47DAA30", Offset = "0x47DAA30", VA = "0x47DAA30", Slot = "4")]
	public bool Equals(int2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60018BC")]
	[Address(RVA = "0x47DAA50", Offset = "0x47DAA50", VA = "0x47DAA50", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018BD")]
	[Address(RVA = "0x47DAAC0", Offset = "0x47DAAC0", VA = "0x47DAAC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018BE")]
	[Address(RVA = "0x47DAAF0", Offset = "0x47DAAF0", VA = "0x47DAAF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60018BF")]
	[Address(RVA = "0x47DAB70", Offset = "0x47DAB70", VA = "0x47DAB70", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
