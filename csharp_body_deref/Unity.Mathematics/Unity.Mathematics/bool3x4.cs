using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000016")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct bool3x4 : IEquatable<bool3x4>
{
	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x0")]
	public bool3 c0;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x3")]
	public bool3 c1;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x6")]
	public bool3 c2;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x9")]
	public bool3 c3;

	[Token(Token = "0x17000099")]
	public unsafe ref bool3 this[int index]
	{
		[Token(Token = "0x6000908")]
		[Address(RVA = "0x477FB50", Offset = "0x477FB50", VA = "0x477FB50")]
		get
		{
			return ref *(bool3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x477ED20", Offset = "0x477ED20", VA = "0x477ED20")]
	public bool3x4(bool3 c0, bool3 c1, bool3 c2, bool3 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x477ED50", Offset = "0x477ED50", VA = "0x477ED50")]
	public bool3x4(bool m00, bool m01, bool m02, bool m03, bool m10, bool m11, bool m12, bool m13, bool m20, bool m21, bool m22, bool m23)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x477EDB0", Offset = "0x477EDB0", VA = "0x477EDB0")]
	public bool3x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x477EDE0", Offset = "0x477EDE0", VA = "0x477EDE0")]
	public static implicit operator bool3x4(bool v)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x477EE20", Offset = "0x477EE20", VA = "0x477EE20")]
	public static bool3x4 operator ==(bool3x4 lhs, bool3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x477EEC0", Offset = "0x477EEC0", VA = "0x477EEC0")]
	public static bool3x4 operator ==(bool3x4 lhs, bool rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x477EFE0", Offset = "0x477EFE0", VA = "0x477EFE0")]
	public static bool3x4 operator ==(bool lhs, bool3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x477F0F0", Offset = "0x477F0F0", VA = "0x477F0F0")]
	public static bool3x4 operator !=(bool3x4 lhs, bool3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x477F180", Offset = "0x477F180", VA = "0x477F180")]
	public static bool3x4 operator !=(bool3x4 lhs, bool rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x477F270", Offset = "0x477F270", VA = "0x477F270")]
	public static bool3x4 operator !=(bool lhs, bool3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x477F360", Offset = "0x477F360", VA = "0x477F360")]
	public static bool3x4 operator !(bool3x4 val)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x477F3E0", Offset = "0x477F3E0", VA = "0x477F3E0")]
	public static bool3x4 operator &(bool3x4 lhs, bool3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000900")]
	[Address(RVA = "0x477F480", Offset = "0x477F480", VA = "0x477F480")]
	public static bool3x4 operator &(bool3x4 lhs, bool rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000901")]
	[Address(RVA = "0x477F550", Offset = "0x477F550", VA = "0x477F550")]
	public static bool3x4 operator &(bool lhs, bool3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000902")]
	[Address(RVA = "0x477F620", Offset = "0x477F620", VA = "0x477F620")]
	public static bool3x4 operator |(bool3x4 lhs, bool3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000903")]
	[Address(RVA = "0x477F6B0", Offset = "0x477F6B0", VA = "0x477F6B0")]
	public static bool3x4 operator |(bool3x4 lhs, bool rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000904")]
	[Address(RVA = "0x477F7A0", Offset = "0x477F7A0", VA = "0x477F7A0")]
	public static bool3x4 operator |(bool lhs, bool3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000905")]
	[Address(RVA = "0x477F890", Offset = "0x477F890", VA = "0x477F890")]
	public static bool3x4 operator ^(bool3x4 lhs, bool3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000906")]
	[Address(RVA = "0x477F920", Offset = "0x477F920", VA = "0x477F920")]
	public static bool3x4 operator ^(bool3x4 lhs, bool rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000907")]
	[Address(RVA = "0x477FA40", Offset = "0x477FA40", VA = "0x477FA40")]
	public static bool3x4 operator ^(bool lhs, bool3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000909")]
	[Address(RVA = "0x477FB60", Offset = "0x477FB60", VA = "0x477FB60", Slot = "4")]
	public bool Equals(bool3x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x477FC50", Offset = "0x477FC50", VA = "0x477FC50", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600090B")]
	[Address(RVA = "0x477FDB0", Offset = "0x477FDB0", VA = "0x477FDB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600090C")]
	[Address(RVA = "0x477FF50", Offset = "0x477FF50", VA = "0x477FF50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
