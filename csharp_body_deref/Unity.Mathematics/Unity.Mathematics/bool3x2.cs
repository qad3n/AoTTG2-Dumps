using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000014")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct bool3x2 : IEquatable<bool3x2>
{
	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x0")]
	public bool3 c0;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x3")]
	public bool3 c1;

	[Token(Token = "0x17000097")]
	public unsafe ref bool3 this[int index]
	{
		[Token(Token = "0x60008D6")]
		[Address(RVA = "0x477D710", Offset = "0x477D710", VA = "0x477D710")]
		get
		{
			return ref *(bool3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x477D100", Offset = "0x477D100", VA = "0x477D100")]
	public bool3x2(bool3 c0, bool3 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x477D120", Offset = "0x477D120", VA = "0x477D120")]
	public bool3x2(bool m00, bool m01, bool m10, bool m11, bool m20, bool m21)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x477D140", Offset = "0x477D140", VA = "0x477D140")]
	public bool3x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x477D160", Offset = "0x477D160", VA = "0x477D160")]
	public static implicit operator bool3x2(bool v)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x477D180", Offset = "0x477D180", VA = "0x477D180")]
	public static bool3x2 operator ==(bool3x2 lhs, bool3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x477D1A0", Offset = "0x477D1A0", VA = "0x477D1A0")]
	public static bool3x2 operator ==(bool3x2 lhs, bool rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x477D230", Offset = "0x477D230", VA = "0x477D230")]
	public static bool3x2 operator ==(bool lhs, bool3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x477D2C0", Offset = "0x477D2C0", VA = "0x477D2C0")]
	public static bool3x2 operator !=(bool3x2 lhs, bool3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x477D2E0", Offset = "0x477D2E0", VA = "0x477D2E0")]
	public static bool3x2 operator !=(bool3x2 lhs, bool rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x477D350", Offset = "0x477D350", VA = "0x477D350")]
	public static bool3x2 operator !=(bool lhs, bool3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x477D3C0", Offset = "0x477D3C0", VA = "0x477D3C0")]
	public static bool3x2 operator !(bool3x2 val)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x477D3E0", Offset = "0x477D3E0", VA = "0x477D3E0")]
	public static bool3x2 operator &(bool3x2 lhs, bool3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x477D410", Offset = "0x477D410", VA = "0x477D410")]
	public static bool3x2 operator &(bool3x2 lhs, bool rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x477D470", Offset = "0x477D470", VA = "0x477D470")]
	public static bool3x2 operator &(bool lhs, bool3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x477D4D0", Offset = "0x477D4D0", VA = "0x477D4D0")]
	public static bool3x2 operator |(bool3x2 lhs, bool3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x477D4F0", Offset = "0x477D4F0", VA = "0x477D4F0")]
	public static bool3x2 operator |(bool3x2 lhs, bool rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x477D560", Offset = "0x477D560", VA = "0x477D560")]
	public static bool3x2 operator |(bool lhs, bool3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x477D5D0", Offset = "0x477D5D0", VA = "0x477D5D0")]
	public static bool3x2 operator ^(bool3x2 lhs, bool3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x477D5F0", Offset = "0x477D5F0", VA = "0x477D5F0")]
	public static bool3x2 operator ^(bool3x2 lhs, bool rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x477D680", Offset = "0x477D680", VA = "0x477D680")]
	public static bool3x2 operator ^(bool lhs, bool3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x477D720", Offset = "0x477D720", VA = "0x477D720", Slot = "4")]
	public bool Equals(bool3x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x477D790", Offset = "0x477D790", VA = "0x477D790", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x477D860", Offset = "0x477D860", VA = "0x477D860", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x477D920", Offset = "0x477D920", VA = "0x477D920", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
