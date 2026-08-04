// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.uint3x3
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
[Token(Token = "0x200005B")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint3x3 : IEquatable<uint3x3>, IFormattable
{
	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x0")]
	public uint3 c0;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0xC")]
	public uint3 c1;

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x18")]
	public uint3 c2;

	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint3x3 identity;

	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x24")]
	public static readonly uint3x3 zero;

	[Token(Token = "0x17000A34")]
	public unsafe ref uint3 this[int index]
	{
		[Token(Token = "0x6002144")]
		[Address(RVA = "0x4B2EF80", Offset = "0x4B2EF80", VA = "0x4B2EF80")]
		get
		{
			return ref *(uint3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60020FF")]
	[Address(RVA = "0x4B2C7E0", Offset = "0x4B2C7E0", VA = "0x4B2C7E0")]
	public uint3x3(uint3 c0, uint3 c1, uint3 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002100")]
	[Address(RVA = "0x4B2C800", Offset = "0x4B2C800", VA = "0x4B2C800")]
	public uint3x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12, uint m20, uint m21, uint m22)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002101")]
	[Address(RVA = "0x4B2C840", Offset = "0x4B2C840", VA = "0x4B2C840")]
	public uint3x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002102")]
	[Address(RVA = "0x4B2C870", Offset = "0x4B2C870", VA = "0x4B2C870")]
	public uint3x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002103")]
	[Address(RVA = "0x4B2C8A0", Offset = "0x4B2C8A0", VA = "0x4B2C8A0")]
	public uint3x3(bool3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002104")]
	[Address(RVA = "0x4B2C930", Offset = "0x4B2C930", VA = "0x4B2C930")]
	public uint3x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002105")]
	[Address(RVA = "0x4B2C960", Offset = "0x4B2C960", VA = "0x4B2C960")]
	public uint3x3(int3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002106")]
	[Address(RVA = "0x4B2C990", Offset = "0x4B2C990", VA = "0x4B2C990")]
	public uint3x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002107")]
	[Address(RVA = "0x4B2C9D0", Offset = "0x4B2C9D0", VA = "0x4B2C9D0")]
	public uint3x3(float3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002108")]
	[Address(RVA = "0x4B2CAC0", Offset = "0x4B2CAC0", VA = "0x4B2CAC0")]
	public uint3x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002109")]
	[Address(RVA = "0x4B2CB00", Offset = "0x4B2CB00", VA = "0x4B2CB00")]
	public uint3x3(double3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210A")]
	[Address(RVA = "0x4B2CC00", Offset = "0x4B2CC00", VA = "0x4B2CC00")]
	public static implicit operator uint3x3(uint v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210B")]
	[Address(RVA = "0x4B2CC30", Offset = "0x4B2CC30", VA = "0x4B2CC30")]
	public static explicit operator uint3x3(bool v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210C")]
	[Address(RVA = "0x4B2CC60", Offset = "0x4B2CC60", VA = "0x4B2CC60")]
	public static explicit operator uint3x3(bool3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210D")]
	[Address(RVA = "0x4B2CCF0", Offset = "0x4B2CCF0", VA = "0x4B2CCF0")]
	public static explicit operator uint3x3(int v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210E")]
	[Address(RVA = "0x4B2CD20", Offset = "0x4B2CD20", VA = "0x4B2CD20")]
	public static explicit operator uint3x3(int3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600210F")]
	[Address(RVA = "0x4B2CD60", Offset = "0x4B2CD60", VA = "0x4B2CD60")]
	public static explicit operator uint3x3(float v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002110")]
	[Address(RVA = "0x4B2CDA0", Offset = "0x4B2CDA0", VA = "0x4B2CDA0")]
	public static explicit operator uint3x3(float3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002111")]
	[Address(RVA = "0x4B2CE90", Offset = "0x4B2CE90", VA = "0x4B2CE90")]
	public static explicit operator uint3x3(double v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002112")]
	[Address(RVA = "0x4B2CED0", Offset = "0x4B2CED0", VA = "0x4B2CED0")]
	public static explicit operator uint3x3(double3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002113")]
	[Address(RVA = "0x4B2CFD0", Offset = "0x4B2CFD0", VA = "0x4B2CFD0")]
	public static uint3x3 operator *(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002114")]
	[Address(RVA = "0x4B2D080", Offset = "0x4B2D080", VA = "0x4B2D080")]
	public static uint3x3 operator *(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002115")]
	[Address(RVA = "0x4B2D100", Offset = "0x4B2D100", VA = "0x4B2D100")]
	public static uint3x3 operator *(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002116")]
	[Address(RVA = "0x4B2D180", Offset = "0x4B2D180", VA = "0x4B2D180")]
	public static uint3x3 operator +(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002117")]
	[Address(RVA = "0x4B2D220", Offset = "0x4B2D220", VA = "0x4B2D220")]
	public static uint3x3 operator +(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002118")]
	[Address(RVA = "0x4B2D290", Offset = "0x4B2D290", VA = "0x4B2D290")]
	public static uint3x3 operator +(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002119")]
	[Address(RVA = "0x4B2D300", Offset = "0x4B2D300", VA = "0x4B2D300")]
	public static uint3x3 operator -(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211A")]
	[Address(RVA = "0x4B2D3A0", Offset = "0x4B2D3A0", VA = "0x4B2D3A0")]
	public static uint3x3 operator -(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211B")]
	[Address(RVA = "0x4B2D420", Offset = "0x4B2D420", VA = "0x4B2D420")]
	public static uint3x3 operator -(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211C")]
	[Address(RVA = "0x4B2D4A0", Offset = "0x4B2D4A0", VA = "0x4B2D4A0")]
	public static uint3x3 operator /(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211D")]
	[Address(RVA = "0x4B2D570", Offset = "0x4B2D570", VA = "0x4B2D570")]
	public static uint3x3 operator /(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211E")]
	[Address(RVA = "0x4B2D620", Offset = "0x4B2D620", VA = "0x4B2D620")]
	public static uint3x3 operator /(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600211F")]
	[Address(RVA = "0x4B2D6C0", Offset = "0x4B2D6C0", VA = "0x4B2D6C0")]
	public static uint3x3 operator %(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002120")]
	[Address(RVA = "0x4B2D790", Offset = "0x4B2D790", VA = "0x4B2D790")]
	public static uint3x3 operator %(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002121")]
	[Address(RVA = "0x4B2D840", Offset = "0x4B2D840", VA = "0x4B2D840")]
	public static uint3x3 operator %(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002122")]
	[Address(RVA = "0x4B2D8E0", Offset = "0x4B2D8E0", VA = "0x4B2D8E0")]
	public static uint3x3 operator ++(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002123")]
	[Address(RVA = "0x4B2D970", Offset = "0x4B2D970", VA = "0x4B2D970")]
	public static uint3x3 operator --(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002124")]
	[Address(RVA = "0x4B2DA00", Offset = "0x4B2DA00", VA = "0x4B2DA00")]
	public static bool3x3 operator <(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002125")]
	[Address(RVA = "0x4B2DAF0", Offset = "0x4B2DAF0", VA = "0x4B2DAF0")]
	public static bool3x3 operator <(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002126")]
	[Address(RVA = "0x4B2DBC0", Offset = "0x4B2DBC0", VA = "0x4B2DBC0")]
	public static bool3x3 operator <(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002127")]
	[Address(RVA = "0x4B2DC90", Offset = "0x4B2DC90", VA = "0x4B2DC90")]
	public static bool3x3 operator <=(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002128")]
	[Address(RVA = "0x4B2DD80", Offset = "0x4B2DD80", VA = "0x4B2DD80")]
	public static bool3x3 operator <=(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002129")]
	[Address(RVA = "0x4B2DE50", Offset = "0x4B2DE50", VA = "0x4B2DE50")]
	public static bool3x3 operator <=(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212A")]
	[Address(RVA = "0x4B2DF20", Offset = "0x4B2DF20", VA = "0x4B2DF20")]
	public static bool3x3 operator >(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212B")]
	[Address(RVA = "0x4B2E010", Offset = "0x4B2E010", VA = "0x4B2E010")]
	public static bool3x3 operator >(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212C")]
	[Address(RVA = "0x4B2E0E0", Offset = "0x4B2E0E0", VA = "0x4B2E0E0")]
	public static bool3x3 operator >(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212D")]
	[Address(RVA = "0x4B2E1B0", Offset = "0x4B2E1B0", VA = "0x4B2E1B0")]
	public static bool3x3 operator >=(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212E")]
	[Address(RVA = "0x4B2E2A0", Offset = "0x4B2E2A0", VA = "0x4B2E2A0")]
	public static bool3x3 operator >=(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600212F")]
	[Address(RVA = "0x4B2E370", Offset = "0x4B2E370", VA = "0x4B2E370")]
	public static bool3x3 operator >=(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002130")]
	[Address(RVA = "0x4B2E440", Offset = "0x4B2E440", VA = "0x4B2E440")]
	public static uint3x3 operator -(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002131")]
	[Address(RVA = "0x4B2E4B0", Offset = "0x4B2E4B0", VA = "0x4B2E4B0")]
	public static uint3x3 operator +(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002132")]
	[Address(RVA = "0x4B2E4F0", Offset = "0x4B2E4F0", VA = "0x4B2E4F0")]
	public static uint3x3 operator <<(uint3x3 x, int n)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002133")]
	[Address(RVA = "0x4B2E570", Offset = "0x4B2E570", VA = "0x4B2E570")]
	public static uint3x3 operator >>(uint3x3 x, int n)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002134")]
	[Address(RVA = "0x4B2E5F0", Offset = "0x4B2E5F0", VA = "0x4B2E5F0")]
	public static bool3x3 operator ==(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002135")]
	[Address(RVA = "0x4B2E6E0", Offset = "0x4B2E6E0", VA = "0x4B2E6E0")]
	public static bool3x3 operator ==(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002136")]
	[Address(RVA = "0x4B2E7B0", Offset = "0x4B2E7B0", VA = "0x4B2E7B0")]
	public static bool3x3 operator ==(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002137")]
	[Address(RVA = "0x4B2E880", Offset = "0x4B2E880", VA = "0x4B2E880")]
	public static bool3x3 operator !=(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002138")]
	[Address(RVA = "0x4B2E970", Offset = "0x4B2E970", VA = "0x4B2E970")]
	public static bool3x3 operator !=(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002139")]
	[Address(RVA = "0x4B2EA40", Offset = "0x4B2EA40", VA = "0x4B2EA40")]
	public static bool3x3 operator !=(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213A")]
	[Address(RVA = "0x4B2EB10", Offset = "0x4B2EB10", VA = "0x4B2EB10")]
	public static uint3x3 operator ~(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213B")]
	[Address(RVA = "0x4B2EB60", Offset = "0x4B2EB60", VA = "0x4B2EB60")]
	public static uint3x3 operator &(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213C")]
	[Address(RVA = "0x4B2EBC0", Offset = "0x4B2EBC0", VA = "0x4B2EBC0")]
	public static uint3x3 operator &(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213D")]
	[Address(RVA = "0x4B2EC40", Offset = "0x4B2EC40", VA = "0x4B2EC40")]
	public static uint3x3 operator &(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213E")]
	[Address(RVA = "0x4B2ECC0", Offset = "0x4B2ECC0", VA = "0x4B2ECC0")]
	public static uint3x3 operator |(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600213F")]
	[Address(RVA = "0x4B2ED20", Offset = "0x4B2ED20", VA = "0x4B2ED20")]
	public static uint3x3 operator |(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002140")]
	[Address(RVA = "0x4B2EDA0", Offset = "0x4B2EDA0", VA = "0x4B2EDA0")]
	public static uint3x3 operator |(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002141")]
	[Address(RVA = "0x4B2EE20", Offset = "0x4B2EE20", VA = "0x4B2EE20")]
	public static uint3x3 operator ^(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002142")]
	[Address(RVA = "0x4B2EE80", Offset = "0x4B2EE80", VA = "0x4B2EE80")]
	public static uint3x3 operator ^(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002143")]
	[Address(RVA = "0x4B2EF00", Offset = "0x4B2EF00", VA = "0x4B2EF00")]
	public static uint3x3 operator ^(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002145")]
	[Address(RVA = "0x4B2EF90", Offset = "0x4B2EF90", VA = "0x4B2EF90", Slot = "4")]
	public bool Equals(uint3x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002146")]
	[Address(RVA = "0x4B2EFF0", Offset = "0x4B2EFF0", VA = "0x4B2EFF0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002147")]
	[Address(RVA = "0x4B2F0A0", Offset = "0x4B2F0A0", VA = "0x4B2F0A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002148")]
	[Address(RVA = "0x4B2F150", Offset = "0x4B2F150", VA = "0x4B2F150", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002149")]
	[Address(RVA = "0x4B2F4C0", Offset = "0x4B2F4C0", VA = "0x4B2F4C0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
