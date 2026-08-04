// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int4x4
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
[Token(Token = "0x200004C")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int4x4 : IEquatable<int4x4>, IFormattable
{
	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0x0")]
	public int4 c0;

	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x10")]
	public int4 c1;

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0x20")]
	public int4 c2;

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x30")]
	public int4 c3;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int4x4 identity;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x40")]
	public static readonly int4x4 zero;

	[Token(Token = "0x1700099C")]
	public unsafe ref int4 this[int index]
	{
		[Token(Token = "0x6001DE7")]
		[Address(RVA = "0x4AFE580", Offset = "0x4AFE580", VA = "0x4AFE580")]
		get
		{
			return ref *(int4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA2")]
	[Address(RVA = "0x4AFAA00", Offset = "0x4AFAA00", VA = "0x4AFAA00")]
	public int4x4(int4 c0, int4 c1, int4 c2, int4 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA3")]
	[Address(RVA = "0x4AFAA30", Offset = "0x4AFAA30", VA = "0x4AFAA30")]
	public int4x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13, int m20, int m21, int m22, int m23, int m30, int m31, int m32, int m33)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA4")]
	[Address(RVA = "0x4AFAA90", Offset = "0x4AFAA90", VA = "0x4AFAA90")]
	public int4x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA5")]
	[Address(RVA = "0x4AFAAC0", Offset = "0x4AFAAC0", VA = "0x4AFAAC0")]
	public int4x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA6")]
	[Address(RVA = "0x4AFAB00", Offset = "0x4AFAB00", VA = "0x4AFAB00")]
	public int4x4(bool4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA7")]
	[Address(RVA = "0x4AFABE0", Offset = "0x4AFABE0", VA = "0x4AFABE0")]
	public int4x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA8")]
	[Address(RVA = "0x4AFAC10", Offset = "0x4AFAC10", VA = "0x4AFAC10")]
	public int4x4(uint4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA9")]
	[Address(RVA = "0x4AFAC40", Offset = "0x4AFAC40", VA = "0x4AFAC40")]
	public int4x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAA")]
	[Address(RVA = "0x4AFAC70", Offset = "0x4AFAC70", VA = "0x4AFAC70")]
	public int4x4(float4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAB")]
	[Address(RVA = "0x4AFAD60", Offset = "0x4AFAD60", VA = "0x4AFAD60")]
	public int4x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAC")]
	[Address(RVA = "0x4AFAD90", Offset = "0x4AFAD90", VA = "0x4AFAD90")]
	public int4x4(double4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAD")]
	[Address(RVA = "0x4AFAE50", Offset = "0x4AFAE50", VA = "0x4AFAE50")]
	public static implicit operator int4x4(int v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAE")]
	[Address(RVA = "0x4AFAE80", Offset = "0x4AFAE80", VA = "0x4AFAE80")]
	public static explicit operator int4x4(bool v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAF")]
	[Address(RVA = "0x4AFAEC0", Offset = "0x4AFAEC0", VA = "0x4AFAEC0")]
	public static explicit operator int4x4(bool4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB0")]
	[Address(RVA = "0x4AFAFA0", Offset = "0x4AFAFA0", VA = "0x4AFAFA0")]
	public static explicit operator int4x4(uint v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB1")]
	[Address(RVA = "0x4AFAFD0", Offset = "0x4AFAFD0", VA = "0x4AFAFD0")]
	public static explicit operator int4x4(uint4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB2")]
	[Address(RVA = "0x4AFB000", Offset = "0x4AFB000", VA = "0x4AFB000")]
	public static explicit operator int4x4(float v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB3")]
	[Address(RVA = "0x4AFB040", Offset = "0x4AFB040", VA = "0x4AFB040")]
	public static explicit operator int4x4(float4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB4")]
	[Address(RVA = "0x4AFB130", Offset = "0x4AFB130", VA = "0x4AFB130")]
	public static explicit operator int4x4(double v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB5")]
	[Address(RVA = "0x4AFB170", Offset = "0x4AFB170", VA = "0x4AFB170")]
	public static explicit operator int4x4(double4x4 v)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB6")]
	[Address(RVA = "0x4AFB260", Offset = "0x4AFB260", VA = "0x4AFB260")]
	public static int4x4 operator *(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB7")]
	[Address(RVA = "0x4AFB3B0", Offset = "0x4AFB3B0", VA = "0x4AFB3B0")]
	public static int4x4 operator *(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB8")]
	[Address(RVA = "0x4AFB4B0", Offset = "0x4AFB4B0", VA = "0x4AFB4B0")]
	public static int4x4 operator *(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB9")]
	[Address(RVA = "0x4AFB5B0", Offset = "0x4AFB5B0", VA = "0x4AFB5B0")]
	public static int4x4 operator +(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBA")]
	[Address(RVA = "0x4AFB680", Offset = "0x4AFB680", VA = "0x4AFB680")]
	public static int4x4 operator +(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBB")]
	[Address(RVA = "0x4AFB740", Offset = "0x4AFB740", VA = "0x4AFB740")]
	public static int4x4 operator +(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBC")]
	[Address(RVA = "0x4AFB800", Offset = "0x4AFB800", VA = "0x4AFB800")]
	public static int4x4 operator -(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBD")]
	[Address(RVA = "0x4AFB8D0", Offset = "0x4AFB8D0", VA = "0x4AFB8D0")]
	public static int4x4 operator -(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBE")]
	[Address(RVA = "0x4AFB990", Offset = "0x4AFB990", VA = "0x4AFB990")]
	public static int4x4 operator -(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBF")]
	[Address(RVA = "0x4AFBA60", Offset = "0x4AFBA60", VA = "0x4AFBA60")]
	public static int4x4 operator /(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC0")]
	[Address(RVA = "0x4AFBC10", Offset = "0x4AFBC10", VA = "0x4AFBC10")]
	public static int4x4 operator /(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC1")]
	[Address(RVA = "0x4AFBD50", Offset = "0x4AFBD50", VA = "0x4AFBD50")]
	public static int4x4 operator /(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC2")]
	[Address(RVA = "0x4AFBE80", Offset = "0x4AFBE80", VA = "0x4AFBE80")]
	public static int4x4 operator %(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC3")]
	[Address(RVA = "0x4AFC030", Offset = "0x4AFC030", VA = "0x4AFC030")]
	public static int4x4 operator %(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC4")]
	[Address(RVA = "0x4AFC170", Offset = "0x4AFC170", VA = "0x4AFC170")]
	public static int4x4 operator %(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC5")]
	[Address(RVA = "0x4AFC2A0", Offset = "0x4AFC2A0", VA = "0x4AFC2A0")]
	public static int4x4 operator ++(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC6")]
	[Address(RVA = "0x4AFC340", Offset = "0x4AFC340", VA = "0x4AFC340")]
	public static int4x4 operator --(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC7")]
	[Address(RVA = "0x4AFC3E0", Offset = "0x4AFC3E0", VA = "0x4AFC3E0")]
	public static bool4x4 operator <(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC8")]
	[Address(RVA = "0x4AFC5A0", Offset = "0x4AFC5A0", VA = "0x4AFC5A0")]
	public static bool4x4 operator <(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC9")]
	[Address(RVA = "0x4AFC6E0", Offset = "0x4AFC6E0", VA = "0x4AFC6E0")]
	public static bool4x4 operator <(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCA")]
	[Address(RVA = "0x4AFC820", Offset = "0x4AFC820", VA = "0x4AFC820")]
	public static bool4x4 operator <=(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCB")]
	[Address(RVA = "0x4AFC9E0", Offset = "0x4AFC9E0", VA = "0x4AFC9E0")]
	public static bool4x4 operator <=(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCC")]
	[Address(RVA = "0x4AFCB20", Offset = "0x4AFCB20", VA = "0x4AFCB20")]
	public static bool4x4 operator <=(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCD")]
	[Address(RVA = "0x4AFCC60", Offset = "0x4AFCC60", VA = "0x4AFCC60")]
	public static bool4x4 operator >(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCE")]
	[Address(RVA = "0x4AFCE20", Offset = "0x4AFCE20", VA = "0x4AFCE20")]
	public static bool4x4 operator >(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCF")]
	[Address(RVA = "0x4AFCF60", Offset = "0x4AFCF60", VA = "0x4AFCF60")]
	public static bool4x4 operator >(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD0")]
	[Address(RVA = "0x4AFD0A0", Offset = "0x4AFD0A0", VA = "0x4AFD0A0")]
	public static bool4x4 operator >=(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD1")]
	[Address(RVA = "0x4AFD260", Offset = "0x4AFD260", VA = "0x4AFD260")]
	public static bool4x4 operator >=(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD2")]
	[Address(RVA = "0x4AFD3A0", Offset = "0x4AFD3A0", VA = "0x4AFD3A0")]
	public static bool4x4 operator >=(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD3")]
	[Address(RVA = "0x4AFD4E0", Offset = "0x4AFD4E0", VA = "0x4AFD4E0")]
	public static int4x4 operator -(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD4")]
	[Address(RVA = "0x4AFD570", Offset = "0x4AFD570", VA = "0x4AFD570")]
	public static int4x4 operator +(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD5")]
	[Address(RVA = "0x4AFD5A0", Offset = "0x4AFD5A0", VA = "0x4AFD5A0")]
	public static int4x4 operator <<(int4x4 x, int n)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD6")]
	[Address(RVA = "0x4AFD690", Offset = "0x4AFD690", VA = "0x4AFD690")]
	public static int4x4 operator >>(int4x4 x, int n)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD7")]
	[Address(RVA = "0x4AFD780", Offset = "0x4AFD780", VA = "0x4AFD780")]
	public static bool4x4 operator ==(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD8")]
	[Address(RVA = "0x4AFD940", Offset = "0x4AFD940", VA = "0x4AFD940")]
	public static bool4x4 operator ==(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD9")]
	[Address(RVA = "0x4AFDA80", Offset = "0x4AFDA80", VA = "0x4AFDA80")]
	public static bool4x4 operator ==(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDA")]
	[Address(RVA = "0x4AFDBC0", Offset = "0x4AFDBC0", VA = "0x4AFDBC0")]
	public static bool4x4 operator !=(int4x4 lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDB")]
	[Address(RVA = "0x4AFDD80", Offset = "0x4AFDD80", VA = "0x4AFDD80")]
	public static bool4x4 operator !=(int4x4 lhs, int rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDC")]
	[Address(RVA = "0x4AFDEC0", Offset = "0x4AFDEC0", VA = "0x4AFDEC0")]
	public static bool4x4 operator !=(int lhs, int4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDD")]
	[Address(RVA = "0x4AFE000", Offset = "0x4AFE000", VA = "0x4AFE000")]
	public static int4x4 operator ~(int4x4 val)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDE")]
	[Address(RVA = "0x4AFE040", Offset = "0x4AFE040", VA = "0x4AFE040")]
	public static int4x4 operator &(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDF")]
	[Address(RVA = "0x4AFE080", Offset = "0x4AFE080", VA = "0x4AFE080")]
	public static int4x4 operator &(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE0")]
	[Address(RVA = "0x4AFE140", Offset = "0x4AFE140", VA = "0x4AFE140")]
	public static int4x4 operator &(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE1")]
	[Address(RVA = "0x4AFE200", Offset = "0x4AFE200", VA = "0x4AFE200")]
	public static int4x4 operator |(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE2")]
	[Address(RVA = "0x4AFE240", Offset = "0x4AFE240", VA = "0x4AFE240")]
	public static int4x4 operator |(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE3")]
	[Address(RVA = "0x4AFE300", Offset = "0x4AFE300", VA = "0x4AFE300")]
	public static int4x4 operator |(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE4")]
	[Address(RVA = "0x4AFE3C0", Offset = "0x4AFE3C0", VA = "0x4AFE3C0")]
	public static int4x4 operator ^(int4x4 lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE5")]
	[Address(RVA = "0x4AFE400", Offset = "0x4AFE400", VA = "0x4AFE400")]
	public static int4x4 operator ^(int4x4 lhs, int rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE6")]
	[Address(RVA = "0x4AFE4C0", Offset = "0x4AFE4C0", VA = "0x4AFE4C0")]
	public static int4x4 operator ^(int lhs, int4x4 rhs)
	{
		return default(int4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE8")]
	[Address(RVA = "0x4AFE590", Offset = "0x4AFE590", VA = "0x4AFE590", Slot = "4")]
	public bool Equals(int4x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DE9")]
	[Address(RVA = "0x4AFE640", Offset = "0x4AFE640", VA = "0x4AFE640", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DEA")]
	[Address(RVA = "0x4AFE750", Offset = "0x4AFE750", VA = "0x4AFE750", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DEB")]
	[Address(RVA = "0x4AFE8C0", Offset = "0x4AFE8C0", VA = "0x4AFE8C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DEC")]
	[Address(RVA = "0x4AFEE80", Offset = "0x4AFEE80", VA = "0x4AFEE80", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
