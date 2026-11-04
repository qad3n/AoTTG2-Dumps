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
		[Address(RVA = "0x841B00", Offset = "0x840100", VA = "0x180841B00")]
		get
		{
			return ref *(uint4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002417")]
	[Address(RVA = "0x1046230", Offset = "0x1044830", VA = "0x181046230")]
	public uint4x3(uint4 c0, uint4 c1, uint4 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002418")]
	[Address(RVA = "0x2A3D3C0", Offset = "0x2A3B9C0", VA = "0x182A3D3C0")]
	public uint4x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12, uint m20, uint m21, uint m22, uint m30, uint m31, uint m32)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002419")]
	[Address(RVA = "0x2A31C90", Offset = "0x2A30290", VA = "0x182A31C90")]
	public uint4x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241A")]
	[Address(RVA = "0x2A3D530", Offset = "0x2A3BB30", VA = "0x182A3D530")]
	public uint4x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241B")]
	[Address(RVA = "0x2A3D410", Offset = "0x2A3BA10", VA = "0x182A3D410")]
	public uint4x3(bool4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241C")]
	[Address(RVA = "0x2A31C90", Offset = "0x2A30290", VA = "0x182A31C90")]
	public uint4x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241D")]
	[Address(RVA = "0x2A3D4D0", Offset = "0x2A3BAD0", VA = "0x182A3D4D0")]
	public uint4x3(int4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241E")]
	[Address(RVA = "0x29CEEE0", Offset = "0x29CD4E0", VA = "0x1829CEEE0")]
	public uint4x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241F")]
	[Address(RVA = "0x29CECC0", Offset = "0x29CD2C0", VA = "0x1829CECC0")]
	public uint4x3(float4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002420")]
	[Address(RVA = "0x29CEE00", Offset = "0x29CD400", VA = "0x1829CEE00")]
	public uint4x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002421")]
	[Address(RVA = "0x29CEFC0", Offset = "0x29CD5C0", VA = "0x1829CEFC0")]
	public uint4x3(double4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002422")]
	[Address(RVA = "0x29EB680", Offset = "0x29E9C80", VA = "0x1829EB680")]
	public static implicit operator uint4x3(uint v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002423")]
	[Address(RVA = "0x29EC050", Offset = "0x29EA650", VA = "0x1829EC050")]
	public static explicit operator uint4x3(bool v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002424")]
	[Address(RVA = "0x29EBEA0", Offset = "0x29EA4A0", VA = "0x1829EBEA0")]
	public static explicit operator uint4x3(bool4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002425")]
	[Address(RVA = "0x29EB680", Offset = "0x29E9C80", VA = "0x1829EB680")]
	public static explicit operator uint4x3(int v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002426")]
	[Address(RVA = "0x29EBFE0", Offset = "0x29EA5E0", VA = "0x1829EBFE0")]
	public static explicit operator uint4x3(int4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002427")]
	[Address(RVA = "0x2A3DFA0", Offset = "0x2A3C5A0", VA = "0x182A3DFA0")]
	public static explicit operator uint4x3(float v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002428")]
	[Address(RVA = "0x2A0FA60", Offset = "0x2A0E060", VA = "0x182A0FA60")]
	public static explicit operator uint4x3(float4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002429")]
	[Address(RVA = "0x2A3DFD0", Offset = "0x2A3C5D0", VA = "0x182A3DFD0")]
	public static explicit operator uint4x3(double v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242A")]
	[Address(RVA = "0x2A0FAB0", Offset = "0x2A0E0B0", VA = "0x182A0FAB0")]
	public static explicit operator uint4x3(double4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242B")]
	[Address(RVA = "0x2A3EDC0", Offset = "0x2A3D3C0", VA = "0x182A3EDC0")]
	public static uint4x3 operator *(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242C")]
	[Address(RVA = "0x2A3EC80", Offset = "0x2A3D280", VA = "0x182A3EC80")]
	public static uint4x3 operator *(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242D")]
	[Address(RVA = "0x2A3ED20", Offset = "0x2A3D320", VA = "0x182A3ED20")]
	public static uint4x3 operator *(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242E")]
	[Address(RVA = "0x2A3D6F0", Offset = "0x2A3BCF0", VA = "0x182A3D6F0")]
	public static uint4x3 operator +(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242F")]
	[Address(RVA = "0x2A3D590", Offset = "0x2A3BB90", VA = "0x182A3D590")]
	public static uint4x3 operator +(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002430")]
	[Address(RVA = "0x2A3D640", Offset = "0x2A3BC40", VA = "0x182A3D640")]
	public static uint4x3 operator +(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002431")]
	[Address(RVA = "0x2A3EFF0", Offset = "0x2A3D5F0", VA = "0x182A3EFF0")]
	public static uint4x3 operator -(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002432")]
	[Address(RVA = "0x2A3F090", Offset = "0x2A3D690", VA = "0x182A3F090")]
	public static uint4x3 operator -(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002433")]
	[Address(RVA = "0x2A3EF50", Offset = "0x2A3D550", VA = "0x182A3EF50")]
	public static uint4x3 operator -(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002434")]
	[Address(RVA = "0x2A3DA80", Offset = "0x2A3C080", VA = "0x182A3DA80")]
	public static uint4x3 operator /(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002435")]
	[Address(RVA = "0x2A3DC00", Offset = "0x2A3C200", VA = "0x182A3DC00")]
	public static uint4x3 operator /(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002436")]
	[Address(RVA = "0x2A3DB40", Offset = "0x2A3C140", VA = "0x182A3DB40")]
	public static uint4x3 operator /(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002437")]
	[Address(RVA = "0x2A3EBC0", Offset = "0x2A3D1C0", VA = "0x182A3EBC0")]
	public static uint4x3 operator %(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002438")]
	[Address(RVA = "0x2A3EB00", Offset = "0x2A3D100", VA = "0x182A3EB00")]
	public static uint4x3 operator %(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002439")]
	[Address(RVA = "0x2A3EA40", Offset = "0x2A3D040", VA = "0x182A3EA40")]
	public static uint4x3 operator %(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243A")]
	[Address(RVA = "0x2A3E3A0", Offset = "0x2A3C9A0", VA = "0x182A3E3A0")]
	public static uint4x3 operator ++(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243B")]
	[Address(RVA = "0x2A3D9B0", Offset = "0x2A3BFB0", VA = "0x182A3D9B0")]
	public static uint4x3 operator --(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243C")]
	[Address(RVA = "0x2A3E870", Offset = "0x2A3CE70", VA = "0x182A3E870")]
	public static bool4x3 operator <(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243D")]
	[Address(RVA = "0x2A3E9B0", Offset = "0x2A3CFB0", VA = "0x182A3E9B0")]
	public static bool4x3 operator <(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243E")]
	[Address(RVA = "0x2A3E920", Offset = "0x2A3CF20", VA = "0x182A3E920")]
	public static bool4x3 operator <(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243F")]
	[Address(RVA = "0x2A3E7C0", Offset = "0x2A3CDC0", VA = "0x182A3E7C0")]
	public static bool4x3 operator <=(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002440")]
	[Address(RVA = "0x2A3E730", Offset = "0x2A3CD30", VA = "0x182A3E730")]
	public static bool4x3 operator <=(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002441")]
	[Address(RVA = "0x2A3E6A0", Offset = "0x2A3CCA0", VA = "0x182A3E6A0")]
	public static bool4x3 operator <=(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002442")]
	[Address(RVA = "0x2A3E260", Offset = "0x2A3C860", VA = "0x182A3E260")]
	public static bool4x3 operator >(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002443")]
	[Address(RVA = "0x2A3E310", Offset = "0x2A3C910", VA = "0x182A3E310")]
	public static bool4x3 operator >(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002444")]
	[Address(RVA = "0x2A3E1D0", Offset = "0x2A3C7D0", VA = "0x182A3E1D0")]
	public static bool4x3 operator >(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002445")]
	[Address(RVA = "0x2A3E000", Offset = "0x2A3C600", VA = "0x182A3E000")]
	public static bool4x3 operator >=(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002446")]
	[Address(RVA = "0x2A3E140", Offset = "0x2A3C740", VA = "0x182A3E140")]
	public static bool4x3 operator >=(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002447")]
	[Address(RVA = "0x2A3E0B0", Offset = "0x2A3C6B0", VA = "0x182A3E0B0")]
	public static bool4x3 operator >=(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002448")]
	[Address(RVA = "0x2A3F130", Offset = "0x2A3D730", VA = "0x182A3F130")]
	public static uint4x3 operator -(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002449")]
	[Address(RVA = "0x2A3F180", Offset = "0x2A3D780", VA = "0x182A3F180")]
	public static uint4x3 operator +(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244A")]
	[Address(RVA = "0x2A3E640", Offset = "0x2A3CC40", VA = "0x182A3E640")]
	public static uint4x3 operator <<(uint4x3 x, int n)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244B")]
	[Address(RVA = "0x2A3EEB0", Offset = "0x2A3D4B0", VA = "0x182A3EEB0")]
	public static uint4x3 operator >>(uint4x3 x, int n)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244C")]
	[Address(RVA = "0x2A3DD50", Offset = "0x2A3C350", VA = "0x182A3DD50")]
	public static bool4x3 operator ==(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244D")]
	[Address(RVA = "0x2A3DE00", Offset = "0x2A3C400", VA = "0x182A3DE00")]
	public static bool4x3 operator ==(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244E")]
	[Address(RVA = "0x2A3DCC0", Offset = "0x2A3C2C0", VA = "0x182A3DCC0")]
	public static bool4x3 operator ==(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244F")]
	[Address(RVA = "0x2A3E500", Offset = "0x2A3CB00", VA = "0x182A3E500")]
	public static bool4x3 operator !=(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002450")]
	[Address(RVA = "0x2A3E470", Offset = "0x2A3CA70", VA = "0x182A3E470")]
	public static bool4x3 operator !=(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002451")]
	[Address(RVA = "0x2A3E5B0", Offset = "0x2A3CBB0", VA = "0x182A3E5B0")]
	public static bool4x3 operator !=(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002452")]
	[Address(RVA = "0x2A3EE70", Offset = "0x2A3D470", VA = "0x182A3EE70")]
	public static uint4x3 operator ~(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002453")]
	[Address(RVA = "0x2A3D7F0", Offset = "0x2A3BDF0", VA = "0x182A3D7F0")]
	public static uint4x3 operator &(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002454")]
	[Address(RVA = "0x2A3D790", Offset = "0x2A3BD90", VA = "0x182A3D790")]
	public static uint4x3 operator &(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002455")]
	[Address(RVA = "0x2A3D840", Offset = "0x2A3BE40", VA = "0x182A3D840")]
	public static uint4x3 operator &(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002456")]
	[Address(RVA = "0x2A3D900", Offset = "0x2A3BF00", VA = "0x182A3D900")]
	public static uint4x3 operator |(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002457")]
	[Address(RVA = "0x2A3D8A0", Offset = "0x2A3BEA0", VA = "0x182A3D8A0")]
	public static uint4x3 operator |(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002458")]
	[Address(RVA = "0x2A3D950", Offset = "0x2A3BF50", VA = "0x182A3D950")]
	public static uint4x3 operator |(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002459")]
	[Address(RVA = "0x2A3DEF0", Offset = "0x2A3C4F0", VA = "0x182A3DEF0")]
	public static uint4x3 operator ^(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600245A")]
	[Address(RVA = "0x2A3DE90", Offset = "0x2A3C490", VA = "0x182A3DE90")]
	public static uint4x3 operator ^(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600245B")]
	[Address(RVA = "0x2A3DF40", Offset = "0x2A3C540", VA = "0x182A3DF40")]
	public static uint4x3 operator ^(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600245D")]
	[Address(RVA = "0x2A3C720", Offset = "0x2A3AD20", VA = "0x182A3C720", Slot = "4")]
	public bool Equals(uint4x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600245E")]
	[Address(RVA = "0x2A3C7D0", Offset = "0x2A3ADD0", VA = "0x182A3C7D0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600245F")]
	[Address(RVA = "0x2A3C900", Offset = "0x2A3AF00", VA = "0x182A3C900", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002460")]
	[Address(RVA = "0x2A3C9E0", Offset = "0x2A3AFE0", VA = "0x182A3C9E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002461")]
	[Address(RVA = "0x2A3CEF0", Offset = "0x2A3B4F0", VA = "0x182A3CEF0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
