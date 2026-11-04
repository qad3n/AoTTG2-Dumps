// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int4x3
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
public struct int4x3 : IEquatable<int4x3>, IFormattable
{
	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x0")]
	public int4 c0;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x10")]
	public int4 c1;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x20")]
	public int4 c2;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int4x3 zero;

	[Token(Token = "0x1700099B")]
	public unsafe ref int4 this[int index]
	{
		[Token(Token = "0x6001E0F")]
		[Address(RVA = "0x841B00", Offset = "0x840100", VA = "0x180841B00")]
		get
		{
			return ref *(int4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCA")]
	[Address(RVA = "0x1046230", Offset = "0x1044830", VA = "0x181046230")]
	public int4x3(int4 c0, int4 c1, int4 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCB")]
	[Address(RVA = "0x2A3D3C0", Offset = "0x2A3B9C0", VA = "0x182A3D3C0")]
	public int4x3(int m00, int m01, int m02, int m10, int m11, int m12, int m20, int m21, int m22, int m30, int m31, int m32)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCC")]
	[Address(RVA = "0x2A31C90", Offset = "0x2A30290", VA = "0x182A31C90")]
	public int4x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCD")]
	[Address(RVA = "0x2A3D530", Offset = "0x2A3BB30", VA = "0x182A3D530")]
	public int4x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCE")]
	[Address(RVA = "0x2A3D410", Offset = "0x2A3BA10", VA = "0x182A3D410")]
	public int4x3(bool4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DCF")]
	[Address(RVA = "0x2A31C90", Offset = "0x2A30290", VA = "0x182A31C90")]
	public int4x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD0")]
	[Address(RVA = "0x2A3D4D0", Offset = "0x2A3BAD0", VA = "0x182A3D4D0")]
	public int4x3(uint4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD1")]
	[Address(RVA = "0x2AB01F0", Offset = "0x2AAE7F0", VA = "0x182AB01F0")]
	public int4x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD2")]
	[Address(RVA = "0x2AB0220", Offset = "0x2AAE820", VA = "0x182AB0220")]
	public int4x3(float4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD3")]
	[Address(RVA = "0x2AB0190", Offset = "0x2AAE790", VA = "0x182AB0190")]
	public int4x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD4")]
	[Address(RVA = "0x2AA4ED0", Offset = "0x2AA34D0", VA = "0x182AA4ED0")]
	public int4x3(double4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD5")]
	[Address(RVA = "0x29EB680", Offset = "0x29E9C80", VA = "0x1829EB680")]
	public static implicit operator int4x3(int v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD6")]
	[Address(RVA = "0x29EC050", Offset = "0x29EA650", VA = "0x1829EC050")]
	public static explicit operator int4x3(bool v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD7")]
	[Address(RVA = "0x29EBEA0", Offset = "0x29EA4A0", VA = "0x1829EBEA0")]
	public static explicit operator int4x3(bool4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD8")]
	[Address(RVA = "0x29EB680", Offset = "0x29E9C80", VA = "0x1829EB680")]
	public static explicit operator int4x3(uint v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DD9")]
	[Address(RVA = "0x29EBFE0", Offset = "0x29EA5E0", VA = "0x1829EBFE0")]
	public static explicit operator int4x3(uint4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDA")]
	[Address(RVA = "0x29EBE60", Offset = "0x29EA460", VA = "0x1829EBE60")]
	public static explicit operator int4x3(float v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDB")]
	[Address(RVA = "0x29EC0B0", Offset = "0x29EA6B0", VA = "0x1829EC0B0")]
	public static explicit operator int4x3(float4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDC")]
	[Address(RVA = "0x29EBD50", Offset = "0x29EA350", VA = "0x1829EBD50")]
	public static explicit operator int4x3(double v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDD")]
	[Address(RVA = "0x29EBDC0", Offset = "0x29EA3C0", VA = "0x1829EBDC0")]
	public static explicit operator int4x3(double4x3 v)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDE")]
	[Address(RVA = "0x2A3EDC0", Offset = "0x2A3D3C0", VA = "0x182A3EDC0")]
	public static int4x3 operator *(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DDF")]
	[Address(RVA = "0x2A3EC80", Offset = "0x2A3D280", VA = "0x182A3EC80")]
	public static int4x3 operator *(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE0")]
	[Address(RVA = "0x2A3ED20", Offset = "0x2A3D320", VA = "0x182A3ED20")]
	public static int4x3 operator *(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE1")]
	[Address(RVA = "0x2AB0330", Offset = "0x2AAE930", VA = "0x182AB0330")]
	public static int4x3 operator +(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE2")]
	[Address(RVA = "0x2AB0250", Offset = "0x2AAE850", VA = "0x182AB0250")]
	public static int4x3 operator +(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE3")]
	[Address(RVA = "0x2AB02C0", Offset = "0x2AAE8C0", VA = "0x182AB02C0")]
	public static int4x3 operator +(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE4")]
	[Address(RVA = "0x2AB1000", Offset = "0x2AAF600", VA = "0x182AB1000")]
	public static int4x3 operator -(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE5")]
	[Address(RVA = "0x2AB0FA0", Offset = "0x2AAF5A0", VA = "0x182AB0FA0")]
	public static int4x3 operator -(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE6")]
	[Address(RVA = "0x2AB1050", Offset = "0x2AAF650", VA = "0x182AB1050")]
	public static int4x3 operator -(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE7")]
	[Address(RVA = "0x2AB0520", Offset = "0x2AAEB20", VA = "0x182AB0520")]
	public static int4x3 operator /(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE8")]
	[Address(RVA = "0x2AB03C0", Offset = "0x2AAE9C0", VA = "0x182AB03C0")]
	public static int4x3 operator /(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DE9")]
	[Address(RVA = "0x2AB0470", Offset = "0x2AAEA70", VA = "0x182AB0470")]
	public static int4x3 operator /(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DEA")]
	[Address(RVA = "0x2AB0DD0", Offset = "0x2AAF3D0", VA = "0x182AB0DD0")]
	public static int4x3 operator %(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DEB")]
	[Address(RVA = "0x2AB0E90", Offset = "0x2AAF490", VA = "0x182AB0E90")]
	public static int4x3 operator %(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DEC")]
	[Address(RVA = "0x2AB0D20", Offset = "0x2AAF320", VA = "0x182AB0D20")]
	public static int4x3 operator %(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DED")]
	[Address(RVA = "0x2A3E3A0", Offset = "0x2A3C9A0", VA = "0x182A3E3A0")]
	public static int4x3 operator ++(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DEE")]
	[Address(RVA = "0x2AB0380", Offset = "0x2AAE980", VA = "0x182AB0380")]
	public static int4x3 operator --(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DEF")]
	[Address(RVA = "0x2AB0BE0", Offset = "0x2AAF1E0", VA = "0x182AB0BE0")]
	public static bool4x3 operator <(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF0")]
	[Address(RVA = "0x2AB0B50", Offset = "0x2AAF150", VA = "0x182AB0B50")]
	public static bool4x3 operator <(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF1")]
	[Address(RVA = "0x2AB0C90", Offset = "0x2AAF290", VA = "0x182AB0C90")]
	public static bool4x3 operator <(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF2")]
	[Address(RVA = "0x2AB0980", Offset = "0x2AAEF80", VA = "0x182AB0980")]
	public static bool4x3 operator <=(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF3")]
	[Address(RVA = "0x2AB0AC0", Offset = "0x2AAF0C0", VA = "0x182AB0AC0")]
	public static bool4x3 operator <=(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF4")]
	[Address(RVA = "0x2AB0A30", Offset = "0x2AAF030", VA = "0x182AB0A30")]
	public static bool4x3 operator <=(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF5")]
	[Address(RVA = "0x2AB08D0", Offset = "0x2AAEED0", VA = "0x182AB08D0")]
	public static bool4x3 operator >(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF6")]
	[Address(RVA = "0x2AB0840", Offset = "0x2AAEE40", VA = "0x182AB0840")]
	public static bool4x3 operator >(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF7")]
	[Address(RVA = "0x2AB07B0", Offset = "0x2AAEDB0", VA = "0x182AB07B0")]
	public static bool4x3 operator >(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF8")]
	[Address(RVA = "0x2AB05E0", Offset = "0x2AAEBE0", VA = "0x182AB05E0")]
	public static bool4x3 operator >=(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DF9")]
	[Address(RVA = "0x2AB0720", Offset = "0x2AAED20", VA = "0x182AB0720")]
	public static bool4x3 operator >=(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFA")]
	[Address(RVA = "0x2AB0690", Offset = "0x2AAEC90", VA = "0x182AB0690")]
	public static bool4x3 operator >=(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFB")]
	[Address(RVA = "0x2A3F130", Offset = "0x2A3D730", VA = "0x182A3F130")]
	public static int4x3 operator -(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFC")]
	[Address(RVA = "0x2A3F180", Offset = "0x2A3D780", VA = "0x182A3F180")]
	public static int4x3 operator +(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFD")]
	[Address(RVA = "0x2A3E640", Offset = "0x2A3CC40", VA = "0x182A3E640")]
	public static int4x3 operator <<(int4x3 x, int n)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFE")]
	[Address(RVA = "0x2AB0F40", Offset = "0x2AAF540", VA = "0x182AB0F40")]
	public static int4x3 operator >>(int4x3 x, int n)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DFF")]
	[Address(RVA = "0x2A3DD50", Offset = "0x2A3C350", VA = "0x182A3DD50")]
	public static bool4x3 operator ==(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E00")]
	[Address(RVA = "0x2A3DE00", Offset = "0x2A3C400", VA = "0x182A3DE00")]
	public static bool4x3 operator ==(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E01")]
	[Address(RVA = "0x2A3DCC0", Offset = "0x2A3C2C0", VA = "0x182A3DCC0")]
	public static bool4x3 operator ==(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E02")]
	[Address(RVA = "0x2A3E500", Offset = "0x2A3CB00", VA = "0x182A3E500")]
	public static bool4x3 operator !=(int4x3 lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E03")]
	[Address(RVA = "0x2A3E470", Offset = "0x2A3CA70", VA = "0x182A3E470")]
	public static bool4x3 operator !=(int4x3 lhs, int rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E04")]
	[Address(RVA = "0x2A3E5B0", Offset = "0x2A3CBB0", VA = "0x182A3E5B0")]
	public static bool4x3 operator !=(int lhs, int4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E05")]
	[Address(RVA = "0x2A3EE70", Offset = "0x2A3D470", VA = "0x182A3EE70")]
	public static int4x3 operator ~(int4x3 val)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E06")]
	[Address(RVA = "0x2A3D7F0", Offset = "0x2A3BDF0", VA = "0x182A3D7F0")]
	public static int4x3 operator &(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E07")]
	[Address(RVA = "0x2A3D790", Offset = "0x2A3BD90", VA = "0x182A3D790")]
	public static int4x3 operator &(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E08")]
	[Address(RVA = "0x2A3D840", Offset = "0x2A3BE40", VA = "0x182A3D840")]
	public static int4x3 operator &(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E09")]
	[Address(RVA = "0x2A3D900", Offset = "0x2A3BF00", VA = "0x182A3D900")]
	public static int4x3 operator |(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0A")]
	[Address(RVA = "0x2A3D8A0", Offset = "0x2A3BEA0", VA = "0x182A3D8A0")]
	public static int4x3 operator |(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0B")]
	[Address(RVA = "0x2A3D950", Offset = "0x2A3BF50", VA = "0x182A3D950")]
	public static int4x3 operator |(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0C")]
	[Address(RVA = "0x2A3DEF0", Offset = "0x2A3C4F0", VA = "0x182A3DEF0")]
	public static int4x3 operator ^(int4x3 lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0D")]
	[Address(RVA = "0x2A3DE90", Offset = "0x2A3C490", VA = "0x182A3DE90")]
	public static int4x3 operator ^(int4x3 lhs, int rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E0E")]
	[Address(RVA = "0x2A3DF40", Offset = "0x2A3C540", VA = "0x182A3DF40")]
	public static int4x3 operator ^(int lhs, int4x3 rhs)
	{
		return default(int4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E10")]
	[Address(RVA = "0x2A3C720", Offset = "0x2A3AD20", VA = "0x182A3C720", Slot = "4")]
	public bool Equals(int4x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E11")]
	[Address(RVA = "0x2AAF5B0", Offset = "0x2AADBB0", VA = "0x182AAF5B0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E12")]
	[Address(RVA = "0x2AAF6E0", Offset = "0x2AADCE0", VA = "0x182AAF6E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E13")]
	[Address(RVA = "0x2AAFC80", Offset = "0x2AAE280", VA = "0x182AAFC80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E14")]
	[Address(RVA = "0x2AAF7B0", Offset = "0x2AADDB0", VA = "0x182AAF7B0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
