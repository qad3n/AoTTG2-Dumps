// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int2x3
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
[Token(Token = "0x2000042")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int2x3 : IEquatable<int2x3>, IFormattable
{
	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x0")]
	public int2 c0;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x8")]
	public int2 c1;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x10")]
	public int2 c2;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int2x3 zero;

	[Token(Token = "0x170007CE")]
	public unsafe ref int2 this[int index]
	{
		[Token(Token = "0x600199D")]
		[Address(RVA = "0x841B10", Offset = "0x840110", VA = "0x180841B10")]
		get
		{
			return ref *(int2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001958")]
	[Address(RVA = "0x1A687C0", Offset = "0x1A66DC0", VA = "0x181A687C0")]
	public int2x3(int2 c0, int2 c1, int2 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001959")]
	[Address(RVA = "0x2A9C2C0", Offset = "0x2A9A8C0", VA = "0x182A9C2C0")]
	public int2x3(int m00, int m01, int m02, int m10, int m11, int m12)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195A")]
	[Address(RVA = "0x2A9C230", Offset = "0x2A9A830", VA = "0x182A9C230")]
	public int2x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195B")]
	[Address(RVA = "0x29C8E90", Offset = "0x29C7490", VA = "0x1829C8E90")]
	public int2x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195C")]
	[Address(RVA = "0x2A9C110", Offset = "0x2A9A710", VA = "0x182A9C110")]
	public int2x3(bool2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195D")]
	[Address(RVA = "0x2A9C230", Offset = "0x2A9A830", VA = "0x182A9C230")]
	public int2x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195E")]
	[Address(RVA = "0x2A9C270", Offset = "0x2A9A870", VA = "0x182A9C270")]
	public int2x3(uint2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195F")]
	[Address(RVA = "0x2A9C190", Offset = "0x2A9A790", VA = "0x182A9C190")]
	public int2x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001960")]
	[Address(RVA = "0x2A9C1E0", Offset = "0x2A9A7E0", VA = "0x182A9C1E0")]
	public int2x3(float2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001961")]
	[Address(RVA = "0x2A9C070", Offset = "0x2A9A670", VA = "0x182A9C070")]
	public int2x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001962")]
	[Address(RVA = "0x2A9C0C0", Offset = "0x2A9A6C0", VA = "0x182A9C0C0")]
	public int2x3(double2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001963")]
	[Address(RVA = "0x29EA640", Offset = "0x29E8C40", VA = "0x1829EA640")]
	public static implicit operator int2x3(int v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001964")]
	[Address(RVA = "0x2A9CC80", Offset = "0x2A9B280", VA = "0x182A9CC80")]
	public static explicit operator int2x3(bool v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001965")]
	[Address(RVA = "0x29EA6D0", Offset = "0x29E8CD0", VA = "0x1829EA6D0")]
	public static explicit operator int2x3(bool2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001966")]
	[Address(RVA = "0x29EA640", Offset = "0x29E8C40", VA = "0x1829EA640")]
	public static explicit operator int2x3(uint v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001967")]
	[Address(RVA = "0x29EA5B0", Offset = "0x29E8BB0", VA = "0x1829EA5B0")]
	public static explicit operator int2x3(uint2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001968")]
	[Address(RVA = "0x29EA510", Offset = "0x29E8B10", VA = "0x1829EA510")]
	public static explicit operator int2x3(float v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001969")]
	[Address(RVA = "0x29EA870", Offset = "0x29E8E70", VA = "0x1829EA870")]
	public static explicit operator int2x3(float2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196A")]
	[Address(RVA = "0x29EA680", Offset = "0x29E8C80", VA = "0x1829EA680")]
	public static explicit operator int2x3(double v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196B")]
	[Address(RVA = "0x29EA780", Offset = "0x29E8D80", VA = "0x1829EA780")]
	public static explicit operator int2x3(double2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196C")]
	[Address(RVA = "0x2A9D6F0", Offset = "0x2A9BCF0", VA = "0x182A9D6F0")]
	public static int2x3 operator *(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196D")]
	[Address(RVA = "0x2A9D5F0", Offset = "0x2A9BBF0", VA = "0x182A9D5F0")]
	public static int2x3 operator *(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196E")]
	[Address(RVA = "0x2A9D670", Offset = "0x2A9BC70", VA = "0x182A9D670")]
	public static int2x3 operator *(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196F")]
	[Address(RVA = "0x2A9C380", Offset = "0x2A9A980", VA = "0x182A9C380")]
	public static int2x3 operator +(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001970")]
	[Address(RVA = "0x2A9C410", Offset = "0x2A9AA10", VA = "0x182A9C410")]
	public static int2x3 operator +(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001971")]
	[Address(RVA = "0x2A9C310", Offset = "0x2A9A910", VA = "0x182A9C310")]
	public static int2x3 operator +(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001972")]
	[Address(RVA = "0x2A9D900", Offset = "0x2A9BF00", VA = "0x182A9D900")]
	public static int2x3 operator -(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001973")]
	[Address(RVA = "0x2A9D990", Offset = "0x2A9BF90", VA = "0x182A9D990")]
	public static int2x3 operator -(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001974")]
	[Address(RVA = "0x2A9D880", Offset = "0x2A9BE80", VA = "0x182A9D880")]
	public static int2x3 operator -(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001975")]
	[Address(RVA = "0x2A9C7F0", Offset = "0x2A9ADF0", VA = "0x182A9C7F0")]
	public static int2x3 operator /(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001976")]
	[Address(RVA = "0x2A9C920", Offset = "0x2A9AF20", VA = "0x182A9C920")]
	public static int2x3 operator /(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001977")]
	[Address(RVA = "0x2A9C890", Offset = "0x2A9AE90", VA = "0x182A9C890")]
	public static int2x3 operator /(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001978")]
	[Address(RVA = "0x2A9D4C0", Offset = "0x2A9BAC0", VA = "0x182A9D4C0")]
	public static int2x3 operator %(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001979")]
	[Address(RVA = "0x2A9D560", Offset = "0x2A9BB60", VA = "0x182A9D560")]
	public static int2x3 operator %(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197A")]
	[Address(RVA = "0x2A9D430", Offset = "0x2A9BA30", VA = "0x182A9D430")]
	public static int2x3 operator %(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197B")]
	[Address(RVA = "0x2A9CF50", Offset = "0x2A9B550", VA = "0x182A9CF50")]
	public static int2x3 operator ++(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197C")]
	[Address(RVA = "0x2A9C780", Offset = "0x2A9AD80", VA = "0x182A9C780")]
	public static int2x3 operator --(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197D")]
	[Address(RVA = "0x2A9D3B0", Offset = "0x2A9B9B0", VA = "0x182A9D3B0")]
	public static bool2x3 operator <(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197E")]
	[Address(RVA = "0x2A9D2E0", Offset = "0x2A9B8E0", VA = "0x182A9D2E0")]
	public static bool2x3 operator <(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197F")]
	[Address(RVA = "0x2A9D350", Offset = "0x2A9B950", VA = "0x182A9D350")]
	public static bool2x3 operator <(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001980")]
	[Address(RVA = "0x2A9D200", Offset = "0x2A9B800", VA = "0x182A9D200")]
	public static bool2x3 operator <=(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001981")]
	[Address(RVA = "0x2A9D190", Offset = "0x2A9B790", VA = "0x182A9D190")]
	public static bool2x3 operator <=(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001982")]
	[Address(RVA = "0x2A9D280", Offset = "0x2A9B880", VA = "0x182A9D280")]
	public static bool2x3 operator <=(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001983")]
	[Address(RVA = "0x2A9CE00", Offset = "0x2A9B400", VA = "0x182A9CE00")]
	public static bool2x3 operator >(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001984")]
	[Address(RVA = "0x2A9CE80", Offset = "0x2A9B480", VA = "0x182A9CE80")]
	public static bool2x3 operator >(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001985")]
	[Address(RVA = "0x2A9CEF0", Offset = "0x2A9B4F0", VA = "0x182A9CEF0")]
	public static bool2x3 operator >(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001986")]
	[Address(RVA = "0x2A9CD80", Offset = "0x2A9B380", VA = "0x182A9CD80")]
	public static bool2x3 operator >=(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001987")]
	[Address(RVA = "0x2A9CCB0", Offset = "0x2A9B2B0", VA = "0x182A9CCB0")]
	public static bool2x3 operator >=(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001988")]
	[Address(RVA = "0x2A9CD20", Offset = "0x2A9B320", VA = "0x182A9CD20")]
	public static bool2x3 operator >=(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001989")]
	[Address(RVA = "0x2A9DA10", Offset = "0x2A9C010", VA = "0x182A9DA10")]
	public static int2x3 operator -(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600198A")]
	[Address(RVA = "0x2A9DA80", Offset = "0x2A9C080", VA = "0x182A9DA80")]
	public static int2x3 operator +(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600198B")]
	[Address(RVA = "0x2A9D110", Offset = "0x2A9B710", VA = "0x182A9D110")]
	public static int2x3 operator <<(int2x3 x, int n)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600198C")]
	[Address(RVA = "0x2A9D800", Offset = "0x2A9BE00", VA = "0x182A9D800")]
	public static int2x3 operator >>(int2x3 x, int n)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600198D")]
	[Address(RVA = "0x2A9C9B0", Offset = "0x2A9AFB0", VA = "0x182A9C9B0")]
	public static bool2x3 operator ==(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600198E")]
	[Address(RVA = "0x2A9CA30", Offset = "0x2A9B030", VA = "0x182A9CA30")]
	public static bool2x3 operator ==(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600198F")]
	[Address(RVA = "0x2A9CAA0", Offset = "0x2A9B0A0", VA = "0x182A9CAA0")]
	public static bool2x3 operator ==(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001990")]
	[Address(RVA = "0x2A9CFC0", Offset = "0x2A9B5C0", VA = "0x182A9CFC0")]
	public static bool2x3 operator !=(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001991")]
	[Address(RVA = "0x2A9D040", Offset = "0x2A9B640", VA = "0x182A9D040")]
	public static bool2x3 operator !=(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001992")]
	[Address(RVA = "0x2A9D0B0", Offset = "0x2A9B6B0", VA = "0x182A9D0B0")]
	public static bool2x3 operator !=(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001993")]
	[Address(RVA = "0x2A9D790", Offset = "0x2A9BD90", VA = "0x182A9D790")]
	public static int2x3 operator ~(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001994")]
	[Address(RVA = "0x2A9C480", Offset = "0x2A9AA80", VA = "0x182A9C480")]
	public static int2x3 operator &(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001995")]
	[Address(RVA = "0x2A9C510", Offset = "0x2A9AB10", VA = "0x182A9C510")]
	public static int2x3 operator &(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001996")]
	[Address(RVA = "0x2A9C590", Offset = "0x2A9AB90", VA = "0x182A9C590")]
	public static int2x3 operator &(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001997")]
	[Address(RVA = "0x2A9C670", Offset = "0x2A9AC70", VA = "0x182A9C670")]
	public static int2x3 operator |(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001998")]
	[Address(RVA = "0x2A9C700", Offset = "0x2A9AD00", VA = "0x182A9C700")]
	public static int2x3 operator |(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001999")]
	[Address(RVA = "0x2A9C600", Offset = "0x2A9AC00", VA = "0x182A9C600")]
	public static int2x3 operator |(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600199A")]
	[Address(RVA = "0x2A9CBF0", Offset = "0x2A9B1F0", VA = "0x182A9CBF0")]
	public static int2x3 operator ^(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600199B")]
	[Address(RVA = "0x2A9CB70", Offset = "0x2A9B170", VA = "0x182A9CB70")]
	public static int2x3 operator ^(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600199C")]
	[Address(RVA = "0x2A9CB00", Offset = "0x2A9B100", VA = "0x182A9CB00")]
	public static int2x3 operator ^(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600199E")]
	[Address(RVA = "0x2A9B8F0", Offset = "0x2A99EF0", VA = "0x182A9B8F0", Slot = "4")]
	public bool Equals(int2x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600199F")]
	[Address(RVA = "0x2A9B960", Offset = "0x2A99F60", VA = "0x182A9B960", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A0")]
	[Address(RVA = "0x2A9BA60", Offset = "0x2A9A060", VA = "0x182A9BA60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A1")]
	[Address(RVA = "0x2A9BAF0", Offset = "0x2A9A0F0", VA = "0x182A9BAF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A2")]
	[Address(RVA = "0x2A9BDC0", Offset = "0x2A9A3C0", VA = "0x182A9BDC0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
