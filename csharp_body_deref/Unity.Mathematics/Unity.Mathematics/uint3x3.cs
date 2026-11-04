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
[Token(Token = "0x200005A")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint3x3 : IEquatable<uint3x3>, IFormattable
{
	[Token(Token = "0x4000156")]
	[FieldOffset(Offset = "0x0")]
	public uint3 c0;

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0xC")]
	public uint3 c1;

	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x18")]
	public uint3 c2;

	[Token(Token = "0x4000159")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint3x3 identity;

	[Token(Token = "0x400015A")]
	[FieldOffset(Offset = "0x24")]
	public static readonly uint3x3 zero;

	[Token(Token = "0x17000A34")]
	public unsafe ref uint3 this[int index]
	{
		[Token(Token = "0x600219B")]
		[Address(RVA = "0x841BD0", Offset = "0x8401D0", VA = "0x180841BD0")]
		get
		{
			return ref *(uint3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002156")]
	[Address(RVA = "0x2A2F3B0", Offset = "0x2A2D9B0", VA = "0x182A2F3B0")]
	public uint3x3(uint3 c0, uint3 c1, uint3 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002157")]
	[Address(RVA = "0x2A2F230", Offset = "0x2A2D830", VA = "0x182A2F230")]
	public uint3x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12, uint m20, uint m21, uint m22)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002158")]
	[Address(RVA = "0x2A2F2D0", Offset = "0x2A2D8D0", VA = "0x182A2F2D0")]
	public uint3x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002159")]
	[Address(RVA = "0x2A2F2F0", Offset = "0x2A2D8F0", VA = "0x182A2F2F0")]
	public uint3x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215A")]
	[Address(RVA = "0x2A2F340", Offset = "0x2A2D940", VA = "0x182A2F340")]
	public uint3x3(bool3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215B")]
	[Address(RVA = "0x2A2F2D0", Offset = "0x2A2D8D0", VA = "0x182A2F2D0")]
	public uint3x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215C")]
	[Address(RVA = "0x2A2F270", Offset = "0x2A2D870", VA = "0x182A2F270")]
	public uint3x3(int3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215D")]
	[Address(RVA = "0x29CE2C0", Offset = "0x29CC8C0", VA = "0x1829CE2C0")]
	public uint3x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215E")]
	[Address(RVA = "0x29CE470", Offset = "0x29CCA70", VA = "0x1829CE470")]
	public uint3x3(float3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600215F")]
	[Address(RVA = "0x29CE210", Offset = "0x29CC810", VA = "0x1829CE210")]
	public uint3x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002160")]
	[Address(RVA = "0x29CE370", Offset = "0x29CC970", VA = "0x1829CE370")]
	public uint3x3(double3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002161")]
	[Address(RVA = "0x29EB110", Offset = "0x29E9710", VA = "0x1829EB110")]
	public static implicit operator uint3x3(uint v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002162")]
	[Address(RVA = "0x29EB450", Offset = "0x29E9A50", VA = "0x1829EB450")]
	public static explicit operator uint3x3(bool v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002163")]
	[Address(RVA = "0x29EB390", Offset = "0x29E9990", VA = "0x1829EB390")]
	public static explicit operator uint3x3(bool3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002164")]
	[Address(RVA = "0x29EB110", Offset = "0x29E9710", VA = "0x1829EB110")]
	public static explicit operator uint3x3(int v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002165")]
	[Address(RVA = "0x29EB180", Offset = "0x29E9780", VA = "0x1829EB180")]
	public static explicit operator uint3x3(int3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002166")]
	[Address(RVA = "0x2A2FF10", Offset = "0x2A2E510", VA = "0x182A2FF10")]
	public static explicit operator uint3x3(float v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002167")]
	[Address(RVA = "0x2A2FEC0", Offset = "0x2A2E4C0", VA = "0x182A2FEC0")]
	public static explicit operator uint3x3(float3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002168")]
	[Address(RVA = "0x2A2FF40", Offset = "0x2A2E540", VA = "0x182A2FF40")]
	public static explicit operator uint3x3(double v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002169")]
	[Address(RVA = "0x2A2FE60", Offset = "0x2A2E460", VA = "0x182A2FE60")]
	public static explicit operator uint3x3(double3x3 v)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216A")]
	[Address(RVA = "0x2A30AF0", Offset = "0x2A2F0F0", VA = "0x182A30AF0")]
	public static uint3x3 operator *(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216B")]
	[Address(RVA = "0x2A30B80", Offset = "0x2A2F180", VA = "0x182A30B80")]
	public static uint3x3 operator *(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216C")]
	[Address(RVA = "0x2A30A60", Offset = "0x2A2F060", VA = "0x182A30A60")]
	public static uint3x3 operator *(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216D")]
	[Address(RVA = "0x2A2F550", Offset = "0x2A2DB50", VA = "0x182A2F550")]
	public static uint3x3 operator +(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216E")]
	[Address(RVA = "0x2A2F4A0", Offset = "0x2A2DAA0", VA = "0x182A2F4A0")]
	public static uint3x3 operator +(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600216F")]
	[Address(RVA = "0x2A2F3F0", Offset = "0x2A2D9F0", VA = "0x182A2F3F0")]
	public static uint3x3 operator +(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002170")]
	[Address(RVA = "0x2A30D00", Offset = "0x2A2F300", VA = "0x182A30D00")]
	public static uint3x3 operator -(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002171")]
	[Address(RVA = "0x2A30D90", Offset = "0x2A2F390", VA = "0x182A30D90")]
	public static uint3x3 operator -(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002172")]
	[Address(RVA = "0x2A30E30", Offset = "0x2A2F430", VA = "0x182A30E30")]
	public static uint3x3 operator -(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002173")]
	[Address(RVA = "0x2A2FA10", Offset = "0x2A2E010", VA = "0x182A2FA10")]
	public static uint3x3 operator /(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002174")]
	[Address(RVA = "0x2A2F970", Offset = "0x2A2DF70", VA = "0x182A2F970")]
	public static uint3x3 operator /(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002175")]
	[Address(RVA = "0x2A2FAC0", Offset = "0x2A2E0C0", VA = "0x182A2FAC0")]
	public static uint3x3 operator /(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002176")]
	[Address(RVA = "0x2A30910", Offset = "0x2A2EF10", VA = "0x182A30910")]
	public static uint3x3 operator %(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002177")]
	[Address(RVA = "0x2A309C0", Offset = "0x2A2EFC0", VA = "0x182A309C0")]
	public static uint3x3 operator %(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002178")]
	[Address(RVA = "0x2A30870", Offset = "0x2A2EE70", VA = "0x182A30870")]
	public static uint3x3 operator %(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002179")]
	[Address(RVA = "0x2A30290", Offset = "0x2A2E890", VA = "0x182A30290")]
	public static uint3x3 operator ++(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217A")]
	[Address(RVA = "0x2A2F8C0", Offset = "0x2A2DEC0", VA = "0x182A2F8C0")]
	public static uint3x3 operator --(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217B")]
	[Address(RVA = "0x2A306E0", Offset = "0x2A2ECE0", VA = "0x182A306E0")]
	public static bool3x3 operator <(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217C")]
	[Address(RVA = "0x2A307F0", Offset = "0x2A2EDF0", VA = "0x182A307F0")]
	public static bool3x3 operator <(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217D")]
	[Address(RVA = "0x2A30770", Offset = "0x2A2ED70", VA = "0x182A30770")]
	public static bool3x3 operator <(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217E")]
	[Address(RVA = "0x2A30650", Offset = "0x2A2EC50", VA = "0x182A30650")]
	public static bool3x3 operator <=(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600217F")]
	[Address(RVA = "0x2A30550", Offset = "0x2A2EB50", VA = "0x182A30550")]
	public static bool3x3 operator <=(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002180")]
	[Address(RVA = "0x2A305D0", Offset = "0x2A2EBD0", VA = "0x182A305D0")]
	public static bool3x3 operator <=(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002181")]
	[Address(RVA = "0x2A30180", Offset = "0x2A2E780", VA = "0x182A30180")]
	public static bool3x3 operator >(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002182")]
	[Address(RVA = "0x2A30100", Offset = "0x2A2E700", VA = "0x182A30100")]
	public static bool3x3 operator >(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002183")]
	[Address(RVA = "0x2A30210", Offset = "0x2A2E810", VA = "0x182A30210")]
	public static bool3x3 operator >(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002184")]
	[Address(RVA = "0x2A2FF70", Offset = "0x2A2E570", VA = "0x182A2FF70")]
	public static bool3x3 operator >=(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002185")]
	[Address(RVA = "0x2A30000", Offset = "0x2A2E600", VA = "0x182A30000")]
	public static bool3x3 operator >=(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002186")]
	[Address(RVA = "0x2A30080", Offset = "0x2A2E680", VA = "0x182A30080")]
	public static bool3x3 operator >=(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002187")]
	[Address(RVA = "0x2A30ED0", Offset = "0x2A2F4D0", VA = "0x182A30ED0")]
	public static uint3x3 operator -(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002188")]
	[Address(RVA = "0x2A30F30", Offset = "0x2A2F530", VA = "0x182A30F30")]
	public static uint3x3 operator +(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002189")]
	[Address(RVA = "0x2A304D0", Offset = "0x2A2EAD0", VA = "0x182A304D0")]
	public static uint3x3 operator <<(uint3x3 x, int n)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218A")]
	[Address(RVA = "0x2A30C70", Offset = "0x2A2F270", VA = "0x182A30C70")]
	public static uint3x3 operator >>(uint3x3 x, int n)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218B")]
	[Address(RVA = "0x2A2FC60", Offset = "0x2A2E260", VA = "0x182A2FC60")]
	public static bool3x3 operator ==(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218C")]
	[Address(RVA = "0x2A2FB60", Offset = "0x2A2E160", VA = "0x182A2FB60")]
	public static bool3x3 operator ==(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218D")]
	[Address(RVA = "0x2A2FBE0", Offset = "0x2A2E1E0", VA = "0x182A2FBE0")]
	public static bool3x3 operator ==(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218E")]
	[Address(RVA = "0x2A30340", Offset = "0x2A2E940", VA = "0x182A30340")]
	public static bool3x3 operator !=(uint3x3 lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600218F")]
	[Address(RVA = "0x2A303D0", Offset = "0x2A2E9D0", VA = "0x182A303D0")]
	public static bool3x3 operator !=(uint3x3 lhs, uint rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002190")]
	[Address(RVA = "0x2A30450", Offset = "0x2A2EA50", VA = "0x182A30450")]
	public static bool3x3 operator !=(uint lhs, uint3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002191")]
	[Address(RVA = "0x2A30C10", Offset = "0x2A2F210", VA = "0x182A30C10")]
	public static uint3x3 operator ~(uint3x3 val)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002192")]
	[Address(RVA = "0x2A2F660", Offset = "0x2A2DC60", VA = "0x182A2F660")]
	public static uint3x3 operator &(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002193")]
	[Address(RVA = "0x2A2F6D0", Offset = "0x2A2DCD0", VA = "0x182A2F6D0")]
	public static uint3x3 operator &(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002194")]
	[Address(RVA = "0x2A2F5E0", Offset = "0x2A2DBE0", VA = "0x182A2F5E0")]
	public static uint3x3 operator &(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002195")]
	[Address(RVA = "0x2A2F750", Offset = "0x2A2DD50", VA = "0x182A2F750")]
	public static uint3x3 operator |(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002196")]
	[Address(RVA = "0x2A2F840", Offset = "0x2A2DE40", VA = "0x182A2F840")]
	public static uint3x3 operator |(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002197")]
	[Address(RVA = "0x2A2F7C0", Offset = "0x2A2DDC0", VA = "0x182A2F7C0")]
	public static uint3x3 operator |(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002198")]
	[Address(RVA = "0x2A2FDF0", Offset = "0x2A2E3F0", VA = "0x182A2FDF0")]
	public static uint3x3 operator ^(uint3x3 lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002199")]
	[Address(RVA = "0x2A2FD70", Offset = "0x2A2E370", VA = "0x182A2FD70")]
	public static uint3x3 operator ^(uint3x3 lhs, uint rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600219A")]
	[Address(RVA = "0x2A2FCF0", Offset = "0x2A2E2F0", VA = "0x182A2FCF0")]
	public static uint3x3 operator ^(uint lhs, uint3x3 rhs)
	{
		return default(uint3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600219C")]
	[Address(RVA = "0x2A2E8E0", Offset = "0x2A2CEE0", VA = "0x182A2E8E0", Slot = "4")]
	public bool Equals(uint3x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600219D")]
	[Address(RVA = "0x2A2E7E0", Offset = "0x2A2CDE0", VA = "0x182A2E7E0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600219E")]
	[Address(RVA = "0x2A2E960", Offset = "0x2A2CF60", VA = "0x182A2E960", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600219F")]
	[Address(RVA = "0x2A2EA10", Offset = "0x2A2D010", VA = "0x182A2EA10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021A0")]
	[Address(RVA = "0x2A2EE00", Offset = "0x2A2D400", VA = "0x182A2EE00", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
