using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000055")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint2x2 : IEquatable<uint2x2>, IFormattable
{
	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0x0")]
	public uint2 c0;

	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x8")]
	public uint2 c1;

	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint2x2 identity;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x10")]
	public static readonly uint2x2 zero;

	[Token(Token = "0x170009BA")]
	public unsafe ref uint2 this[int index]
	{
		[Token(Token = "0x6001F47")]
		[Address(RVA = "0x48041A0", Offset = "0x48041A0", VA = "0x48041A0")]
		get
		{
			return ref *(uint2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F02")]
	[Address(RVA = "0x48032D0", Offset = "0x48032D0", VA = "0x48032D0")]
	public uint2x2(uint2 c0, uint2 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F03")]
	[Address(RVA = "0x48032E0", Offset = "0x48032E0", VA = "0x48032E0")]
	public uint2x2(uint m00, uint m01, uint m10, uint m11)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F04")]
	[Address(RVA = "0x4803300", Offset = "0x4803300", VA = "0x4803300")]
	public uint2x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F05")]
	[Address(RVA = "0x4803320", Offset = "0x4803320", VA = "0x4803320")]
	public uint2x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F06")]
	[Address(RVA = "0x4803340", Offset = "0x4803340", VA = "0x4803340")]
	public uint2x2(bool2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F07")]
	[Address(RVA = "0x4803380", Offset = "0x4803380", VA = "0x4803380")]
	public uint2x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F08")]
	[Address(RVA = "0x48033A0", Offset = "0x48033A0", VA = "0x48033A0")]
	public uint2x2(int2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F09")]
	[Address(RVA = "0x48033B0", Offset = "0x48033B0", VA = "0x48033B0")]
	public uint2x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F0A")]
	[Address(RVA = "0x48033E0", Offset = "0x48033E0", VA = "0x48033E0")]
	public uint2x2(float2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F0B")]
	[Address(RVA = "0x4803440", Offset = "0x4803440", VA = "0x4803440")]
	public uint2x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F0C")]
	[Address(RVA = "0x4803470", Offset = "0x4803470", VA = "0x4803470")]
	public uint2x2(double2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F0D")]
	[Address(RVA = "0x48034F0", Offset = "0x48034F0", VA = "0x48034F0")]
	public static implicit operator uint2x2(uint v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F0E")]
	[Address(RVA = "0x4803500", Offset = "0x4803500", VA = "0x4803500")]
	public static explicit operator uint2x2(bool v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F0F")]
	[Address(RVA = "0x4803520", Offset = "0x4803520", VA = "0x4803520")]
	public static explicit operator uint2x2(bool2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F10")]
	[Address(RVA = "0x4803570", Offset = "0x4803570", VA = "0x4803570")]
	public static explicit operator uint2x2(int v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F11")]
	[Address(RVA = "0x4803580", Offset = "0x4803580", VA = "0x4803580")]
	public static explicit operator uint2x2(int2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F12")]
	[Address(RVA = "0x4803590", Offset = "0x4803590", VA = "0x4803590")]
	public static explicit operator uint2x2(float v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F13")]
	[Address(RVA = "0x48035B0", Offset = "0x48035B0", VA = "0x48035B0")]
	public static explicit operator uint2x2(float2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F14")]
	[Address(RVA = "0x4803610", Offset = "0x4803610", VA = "0x4803610")]
	public static explicit operator uint2x2(double v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F15")]
	[Address(RVA = "0x4803640", Offset = "0x4803640", VA = "0x4803640")]
	public static explicit operator uint2x2(double2x2 v)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F16")]
	[Address(RVA = "0x48036B0", Offset = "0x48036B0", VA = "0x48036B0")]
	public static uint2x2 operator *(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F17")]
	[Address(RVA = "0x48036F0", Offset = "0x48036F0", VA = "0x48036F0")]
	public static uint2x2 operator *(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F18")]
	[Address(RVA = "0x4803720", Offset = "0x4803720", VA = "0x4803720")]
	public static uint2x2 operator *(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F19")]
	[Address(RVA = "0x4803750", Offset = "0x4803750", VA = "0x4803750")]
	public static uint2x2 operator +(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F1A")]
	[Address(RVA = "0x4803780", Offset = "0x4803780", VA = "0x4803780")]
	public static uint2x2 operator +(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F1B")]
	[Address(RVA = "0x48037B0", Offset = "0x48037B0", VA = "0x48037B0")]
	public static uint2x2 operator +(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F1C")]
	[Address(RVA = "0x48037E0", Offset = "0x48037E0", VA = "0x48037E0")]
	public static uint2x2 operator -(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F1D")]
	[Address(RVA = "0x4803810", Offset = "0x4803810", VA = "0x4803810")]
	public static uint2x2 operator -(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F1E")]
	[Address(RVA = "0x4803840", Offset = "0x4803840", VA = "0x4803840")]
	public static uint2x2 operator -(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F1F")]
	[Address(RVA = "0x4803870", Offset = "0x4803870", VA = "0x4803870")]
	public static uint2x2 operator /(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F20")]
	[Address(RVA = "0x48038C0", Offset = "0x48038C0", VA = "0x48038C0")]
	public static uint2x2 operator /(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F21")]
	[Address(RVA = "0x4803910", Offset = "0x4803910", VA = "0x4803910")]
	public static uint2x2 operator /(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F22")]
	[Address(RVA = "0x4803950", Offset = "0x4803950", VA = "0x4803950")]
	public static uint2x2 operator %(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F23")]
	[Address(RVA = "0x48039A0", Offset = "0x48039A0", VA = "0x48039A0")]
	public static uint2x2 operator %(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F24")]
	[Address(RVA = "0x48039F0", Offset = "0x48039F0", VA = "0x48039F0")]
	public static uint2x2 operator %(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F25")]
	[Address(RVA = "0x4803A30", Offset = "0x4803A30", VA = "0x4803A30")]
	public static uint2x2 operator ++(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F26")]
	[Address(RVA = "0x4803A70", Offset = "0x4803A70", VA = "0x4803A70")]
	public static uint2x2 operator --(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F27")]
	[Address(RVA = "0x4803AB0", Offset = "0x4803AB0", VA = "0x4803AB0")]
	public static bool2x2 operator <(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F28")]
	[Address(RVA = "0x4803B00", Offset = "0x4803B00", VA = "0x4803B00")]
	public static bool2x2 operator <(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F29")]
	[Address(RVA = "0x4803B40", Offset = "0x4803B40", VA = "0x4803B40")]
	public static bool2x2 operator <(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2A")]
	[Address(RVA = "0x4803B80", Offset = "0x4803B80", VA = "0x4803B80")]
	public static bool2x2 operator <=(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2B")]
	[Address(RVA = "0x4803BD0", Offset = "0x4803BD0", VA = "0x4803BD0")]
	public static bool2x2 operator <=(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2C")]
	[Address(RVA = "0x4803C10", Offset = "0x4803C10", VA = "0x4803C10")]
	public static bool2x2 operator <=(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2D")]
	[Address(RVA = "0x4803C50", Offset = "0x4803C50", VA = "0x4803C50")]
	public static bool2x2 operator >(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2E")]
	[Address(RVA = "0x4803CA0", Offset = "0x4803CA0", VA = "0x4803CA0")]
	public static bool2x2 operator >(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F2F")]
	[Address(RVA = "0x4803CE0", Offset = "0x4803CE0", VA = "0x4803CE0")]
	public static bool2x2 operator >(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F30")]
	[Address(RVA = "0x4803D20", Offset = "0x4803D20", VA = "0x4803D20")]
	public static bool2x2 operator >=(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F31")]
	[Address(RVA = "0x4803D70", Offset = "0x4803D70", VA = "0x4803D70")]
	public static bool2x2 operator >=(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F32")]
	[Address(RVA = "0x4803DB0", Offset = "0x4803DB0", VA = "0x4803DB0")]
	public static bool2x2 operator >=(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F33")]
	[Address(RVA = "0x4803DF0", Offset = "0x4803DF0", VA = "0x4803DF0")]
	public static uint2x2 operator -(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F34")]
	[Address(RVA = "0x4803E30", Offset = "0x4803E30", VA = "0x4803E30")]
	public static uint2x2 operator +(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F35")]
	[Address(RVA = "0x4803E40", Offset = "0x4803E40", VA = "0x4803E40")]
	public static uint2x2 operator <<(uint2x2 x, int n)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F36")]
	[Address(RVA = "0x4803E70", Offset = "0x4803E70", VA = "0x4803E70")]
	public static uint2x2 operator >>(uint2x2 x, int n)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F37")]
	[Address(RVA = "0x4803EA0", Offset = "0x4803EA0", VA = "0x4803EA0")]
	public static bool2x2 operator ==(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F38")]
	[Address(RVA = "0x4803EF0", Offset = "0x4803EF0", VA = "0x4803EF0")]
	public static bool2x2 operator ==(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F39")]
	[Address(RVA = "0x4803F30", Offset = "0x4803F30", VA = "0x4803F30")]
	public static bool2x2 operator ==(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F3A")]
	[Address(RVA = "0x4803F70", Offset = "0x4803F70", VA = "0x4803F70")]
	public static bool2x2 operator !=(uint2x2 lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F3B")]
	[Address(RVA = "0x4803FC0", Offset = "0x4803FC0", VA = "0x4803FC0")]
	public static bool2x2 operator !=(uint2x2 lhs, uint rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F3C")]
	[Address(RVA = "0x4804000", Offset = "0x4804000", VA = "0x4804000")]
	public static bool2x2 operator !=(uint lhs, uint2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F3D")]
	[Address(RVA = "0x4804040", Offset = "0x4804040", VA = "0x4804040")]
	public static uint2x2 operator ~(uint2x2 val)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F3E")]
	[Address(RVA = "0x4804050", Offset = "0x4804050", VA = "0x4804050")]
	public static uint2x2 operator &(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F3F")]
	[Address(RVA = "0x4804060", Offset = "0x4804060", VA = "0x4804060")]
	public static uint2x2 operator &(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F40")]
	[Address(RVA = "0x4804090", Offset = "0x4804090", VA = "0x4804090")]
	public static uint2x2 operator &(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F41")]
	[Address(RVA = "0x48040C0", Offset = "0x48040C0", VA = "0x48040C0")]
	public static uint2x2 operator |(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F42")]
	[Address(RVA = "0x48040D0", Offset = "0x48040D0", VA = "0x48040D0")]
	public static uint2x2 operator |(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F43")]
	[Address(RVA = "0x4804100", Offset = "0x4804100", VA = "0x4804100")]
	public static uint2x2 operator |(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F44")]
	[Address(RVA = "0x4804130", Offset = "0x4804130", VA = "0x4804130")]
	public static uint2x2 operator ^(uint2x2 lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F45")]
	[Address(RVA = "0x4804140", Offset = "0x4804140", VA = "0x4804140")]
	public static uint2x2 operator ^(uint2x2 lhs, uint rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F46")]
	[Address(RVA = "0x4804170", Offset = "0x4804170", VA = "0x4804170")]
	public static uint2x2 operator ^(uint lhs, uint2x2 rhs)
	{
		return default(uint2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F48")]
	[Address(RVA = "0x48041B0", Offset = "0x48041B0", VA = "0x48041B0", Slot = "4")]
	public bool Equals(uint2x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F49")]
	[Address(RVA = "0x48041D0", Offset = "0x48041D0", VA = "0x48041D0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F4A")]
	[Address(RVA = "0x4804250", Offset = "0x4804250", VA = "0x4804250", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F4B")]
	[Address(RVA = "0x48042B0", Offset = "0x48042B0", VA = "0x48042B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F4C")]
	[Address(RVA = "0x4804480", Offset = "0x4804480", VA = "0x4804480", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
