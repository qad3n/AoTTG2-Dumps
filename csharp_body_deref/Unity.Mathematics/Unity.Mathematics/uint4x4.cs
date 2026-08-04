// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.uint4x4
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
[Token(Token = "0x2000061")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint4x4 : IEquatable<uint4x4>, IFormattable
{
	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x0")]
	public uint4 c0;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x10")]
	public uint4 c1;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x20")]
	public uint4 c2;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x30")]
	public uint4 c3;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint4x4 identity;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x40")]
	public static readonly uint4x4 zero;

	[Token(Token = "0x17000B89")]
	public unsafe ref uint4 this[int index]
	{
		[Token(Token = "0x6002450")]
		[Address(RVA = "0x4A83CD0", Offset = "0x4A83CD0", VA = "0x4A83CD0")]
		get
		{
			return ref *(uint4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600240B")]
	[Address(RVA = "0x4A7FD40", Offset = "0x4A7FD40", VA = "0x4A7FD40")]
	public uint4x4(uint4 c0, uint4 c1, uint4 c2, uint4 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600240C")]
	[Address(RVA = "0x4A7FD70", Offset = "0x4A7FD70", VA = "0x4A7FD70")]
	public uint4x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13, uint m20, uint m21, uint m22, uint m23, uint m30, uint m31, uint m32, uint m33)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600240D")]
	[Address(RVA = "0x4A7FDD0", Offset = "0x4A7FDD0", VA = "0x4A7FDD0")]
	public uint4x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600240E")]
	[Address(RVA = "0x4A7FE00", Offset = "0x4A7FE00", VA = "0x4A7FE00")]
	public uint4x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600240F")]
	[Address(RVA = "0x4A7FE40", Offset = "0x4A7FE40", VA = "0x4A7FE40")]
	public uint4x4(bool4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002410")]
	[Address(RVA = "0x4A7FF20", Offset = "0x4A7FF20", VA = "0x4A7FF20")]
	public uint4x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002411")]
	[Address(RVA = "0x4A7FF50", Offset = "0x4A7FF50", VA = "0x4A7FF50")]
	public uint4x4(int4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002412")]
	[Address(RVA = "0x4A7FF80", Offset = "0x4A7FF80", VA = "0x4A7FF80")]
	public uint4x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002413")]
	[Address(RVA = "0x4A7FFC0", Offset = "0x4A7FFC0", VA = "0x4A7FFC0")]
	public uint4x4(float4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002414")]
	[Address(RVA = "0x4A80170", Offset = "0x4A80170", VA = "0x4A80170")]
	public uint4x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002415")]
	[Address(RVA = "0x4A801B0", Offset = "0x4A801B0", VA = "0x4A801B0")]
	public uint4x4(double4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002416")]
	[Address(RVA = "0x4A80380", Offset = "0x4A80380", VA = "0x4A80380")]
	public static implicit operator uint4x4(uint v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002417")]
	[Address(RVA = "0x4A803B0", Offset = "0x4A803B0", VA = "0x4A803B0")]
	public static explicit operator uint4x4(bool v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002418")]
	[Address(RVA = "0x4A803F0", Offset = "0x4A803F0", VA = "0x4A803F0")]
	public static explicit operator uint4x4(bool4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002419")]
	[Address(RVA = "0x4A804D0", Offset = "0x4A804D0", VA = "0x4A804D0")]
	public static explicit operator uint4x4(int v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241A")]
	[Address(RVA = "0x4A80500", Offset = "0x4A80500", VA = "0x4A80500")]
	public static explicit operator uint4x4(int4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241B")]
	[Address(RVA = "0x4A80530", Offset = "0x4A80530", VA = "0x4A80530")]
	public static explicit operator uint4x4(float v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241C")]
	[Address(RVA = "0x4A80570", Offset = "0x4A80570", VA = "0x4A80570")]
	public static explicit operator uint4x4(float4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241D")]
	[Address(RVA = "0x4A80730", Offset = "0x4A80730", VA = "0x4A80730")]
	public static explicit operator uint4x4(double v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241E")]
	[Address(RVA = "0x4A80770", Offset = "0x4A80770", VA = "0x4A80770")]
	public static explicit operator uint4x4(double4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600241F")]
	[Address(RVA = "0x4A80950", Offset = "0x4A80950", VA = "0x4A80950")]
	public static uint4x4 operator *(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002420")]
	[Address(RVA = "0x4A80AA0", Offset = "0x4A80AA0", VA = "0x4A80AA0")]
	public static uint4x4 operator *(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002421")]
	[Address(RVA = "0x4A80BA0", Offset = "0x4A80BA0", VA = "0x4A80BA0")]
	public static uint4x4 operator *(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002422")]
	[Address(RVA = "0x4A80CA0", Offset = "0x4A80CA0", VA = "0x4A80CA0")]
	public static uint4x4 operator +(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002423")]
	[Address(RVA = "0x4A80D70", Offset = "0x4A80D70", VA = "0x4A80D70")]
	public static uint4x4 operator +(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002424")]
	[Address(RVA = "0x4A80E30", Offset = "0x4A80E30", VA = "0x4A80E30")]
	public static uint4x4 operator +(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002425")]
	[Address(RVA = "0x4A80EF0", Offset = "0x4A80EF0", VA = "0x4A80EF0")]
	public static uint4x4 operator -(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002426")]
	[Address(RVA = "0x4A80FC0", Offset = "0x4A80FC0", VA = "0x4A80FC0")]
	public static uint4x4 operator -(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002427")]
	[Address(RVA = "0x4A81080", Offset = "0x4A81080", VA = "0x4A81080")]
	public static uint4x4 operator -(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002428")]
	[Address(RVA = "0x4A81150", Offset = "0x4A81150", VA = "0x4A81150")]
	public static uint4x4 operator /(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002429")]
	[Address(RVA = "0x4A81310", Offset = "0x4A81310", VA = "0x4A81310")]
	public static uint4x4 operator /(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242A")]
	[Address(RVA = "0x4A81460", Offset = "0x4A81460", VA = "0x4A81460")]
	public static uint4x4 operator /(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242B")]
	[Address(RVA = "0x4A815A0", Offset = "0x4A815A0", VA = "0x4A815A0")]
	public static uint4x4 operator %(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242C")]
	[Address(RVA = "0x4A81760", Offset = "0x4A81760", VA = "0x4A81760")]
	public static uint4x4 operator %(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242D")]
	[Address(RVA = "0x4A818B0", Offset = "0x4A818B0", VA = "0x4A818B0")]
	public static uint4x4 operator %(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242E")]
	[Address(RVA = "0x4A819F0", Offset = "0x4A819F0", VA = "0x4A819F0")]
	public static uint4x4 operator ++(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600242F")]
	[Address(RVA = "0x4A81A90", Offset = "0x4A81A90", VA = "0x4A81A90")]
	public static uint4x4 operator --(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002430")]
	[Address(RVA = "0x4A81B30", Offset = "0x4A81B30", VA = "0x4A81B30")]
	public static bool4x4 operator <(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002431")]
	[Address(RVA = "0x4A81CF0", Offset = "0x4A81CF0", VA = "0x4A81CF0")]
	public static bool4x4 operator <(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002432")]
	[Address(RVA = "0x4A81E30", Offset = "0x4A81E30", VA = "0x4A81E30")]
	public static bool4x4 operator <(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002433")]
	[Address(RVA = "0x4A81F70", Offset = "0x4A81F70", VA = "0x4A81F70")]
	public static bool4x4 operator <=(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002434")]
	[Address(RVA = "0x4A82130", Offset = "0x4A82130", VA = "0x4A82130")]
	public static bool4x4 operator <=(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002435")]
	[Address(RVA = "0x4A82270", Offset = "0x4A82270", VA = "0x4A82270")]
	public static bool4x4 operator <=(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002436")]
	[Address(RVA = "0x4A823B0", Offset = "0x4A823B0", VA = "0x4A823B0")]
	public static bool4x4 operator >(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002437")]
	[Address(RVA = "0x4A82570", Offset = "0x4A82570", VA = "0x4A82570")]
	public static bool4x4 operator >(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002438")]
	[Address(RVA = "0x4A826B0", Offset = "0x4A826B0", VA = "0x4A826B0")]
	public static bool4x4 operator >(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002439")]
	[Address(RVA = "0x4A827F0", Offset = "0x4A827F0", VA = "0x4A827F0")]
	public static bool4x4 operator >=(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243A")]
	[Address(RVA = "0x4A829B0", Offset = "0x4A829B0", VA = "0x4A829B0")]
	public static bool4x4 operator >=(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243B")]
	[Address(RVA = "0x4A82AF0", Offset = "0x4A82AF0", VA = "0x4A82AF0")]
	public static bool4x4 operator >=(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243C")]
	[Address(RVA = "0x4A82C30", Offset = "0x4A82C30", VA = "0x4A82C30")]
	public static uint4x4 operator -(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243D")]
	[Address(RVA = "0x4A82CC0", Offset = "0x4A82CC0", VA = "0x4A82CC0")]
	public static uint4x4 operator +(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243E")]
	[Address(RVA = "0x4A82CF0", Offset = "0x4A82CF0", VA = "0x4A82CF0")]
	public static uint4x4 operator <<(uint4x4 x, int n)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600243F")]
	[Address(RVA = "0x4A82DE0", Offset = "0x4A82DE0", VA = "0x4A82DE0")]
	public static uint4x4 operator >>(uint4x4 x, int n)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002440")]
	[Address(RVA = "0x4A82ED0", Offset = "0x4A82ED0", VA = "0x4A82ED0")]
	public static bool4x4 operator ==(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002441")]
	[Address(RVA = "0x4A83090", Offset = "0x4A83090", VA = "0x4A83090")]
	public static bool4x4 operator ==(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002442")]
	[Address(RVA = "0x4A831D0", Offset = "0x4A831D0", VA = "0x4A831D0")]
	public static bool4x4 operator ==(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002443")]
	[Address(RVA = "0x4A83310", Offset = "0x4A83310", VA = "0x4A83310")]
	public static bool4x4 operator !=(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002444")]
	[Address(RVA = "0x4A834D0", Offset = "0x4A834D0", VA = "0x4A834D0")]
	public static bool4x4 operator !=(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002445")]
	[Address(RVA = "0x4A83610", Offset = "0x4A83610", VA = "0x4A83610")]
	public static bool4x4 operator !=(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002446")]
	[Address(RVA = "0x4A83750", Offset = "0x4A83750", VA = "0x4A83750")]
	public static uint4x4 operator ~(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002447")]
	[Address(RVA = "0x4A83790", Offset = "0x4A83790", VA = "0x4A83790")]
	public static uint4x4 operator &(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002448")]
	[Address(RVA = "0x4A837D0", Offset = "0x4A837D0", VA = "0x4A837D0")]
	public static uint4x4 operator &(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002449")]
	[Address(RVA = "0x4A83890", Offset = "0x4A83890", VA = "0x4A83890")]
	public static uint4x4 operator &(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244A")]
	[Address(RVA = "0x4A83950", Offset = "0x4A83950", VA = "0x4A83950")]
	public static uint4x4 operator |(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244B")]
	[Address(RVA = "0x4A83990", Offset = "0x4A83990", VA = "0x4A83990")]
	public static uint4x4 operator |(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244C")]
	[Address(RVA = "0x4A83A50", Offset = "0x4A83A50", VA = "0x4A83A50")]
	public static uint4x4 operator |(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244D")]
	[Address(RVA = "0x4A83B10", Offset = "0x4A83B10", VA = "0x4A83B10")]
	public static uint4x4 operator ^(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244E")]
	[Address(RVA = "0x4A83B50", Offset = "0x4A83B50", VA = "0x4A83B50")]
	public static uint4x4 operator ^(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600244F")]
	[Address(RVA = "0x4A83C10", Offset = "0x4A83C10", VA = "0x4A83C10")]
	public static uint4x4 operator ^(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002451")]
	[Address(RVA = "0x4A83CE0", Offset = "0x4A83CE0", VA = "0x4A83CE0", Slot = "4")]
	public bool Equals(uint4x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002452")]
	[Address(RVA = "0x4A83D90", Offset = "0x4A83D90", VA = "0x4A83D90", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002453")]
	[Address(RVA = "0x4A83EA0", Offset = "0x4A83EA0", VA = "0x4A83EA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002454")]
	[Address(RVA = "0x4A84010", Offset = "0x4A84010", VA = "0x4A84010", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002455")]
	[Address(RVA = "0x4A845D0", Offset = "0x4A845D0", VA = "0x4A845D0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
