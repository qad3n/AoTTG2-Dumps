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
[Token(Token = "0x2000060")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint4x4 : IEquatable<uint4x4>, IFormattable
{
	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x0")]
	public uint4 c0;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x10")]
	public uint4 c1;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x20")]
	public uint4 c2;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x30")]
	public uint4 c3;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint4x4 identity;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x40")]
	public static readonly uint4x4 zero;

	[Token(Token = "0x17000B89")]
	public unsafe ref uint4 this[int index]
	{
		[Token(Token = "0x60024A7")]
		[Address(RVA = "0x841B00", Offset = "0x840100", VA = "0x180841B00")]
		get
		{
			return ref *(uint4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002462")]
	[Address(RVA = "0x2A401B0", Offset = "0x2A3E7B0", VA = "0x182A401B0")]
	public uint4x4(uint4 c0, uint4 c1, uint4 c2, uint4 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002463")]
	[Address(RVA = "0x2A40260", Offset = "0x2A3E860", VA = "0x182A40260")]
	public uint4x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13, uint m20, uint m21, uint m22, uint m23, uint m30, uint m31, uint m32, uint m33)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002464")]
	[Address(RVA = "0x2A40180", Offset = "0x2A3E780", VA = "0x182A40180")]
	public uint4x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002465")]
	[Address(RVA = "0x29C8FB0", Offset = "0x29C75B0", VA = "0x1829C8FB0")]
	public uint4x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002466")]
	[Address(RVA = "0x29C9020", Offset = "0x29C7620", VA = "0x1829C9020")]
	public uint4x4(bool4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002467")]
	[Address(RVA = "0x2A40180", Offset = "0x2A3E780", VA = "0x182A40180")]
	public uint4x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002468")]
	[Address(RVA = "0x2A401E0", Offset = "0x2A3E7E0", VA = "0x182A401E0")]
	public uint4x4(int4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002469")]
	[Address(RVA = "0x29CF240", Offset = "0x29CD840", VA = "0x1829CF240")]
	public uint4x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246A")]
	[Address(RVA = "0x29CF530", Offset = "0x29CDB30", VA = "0x1829CF530")]
	public uint4x4(float4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246B")]
	[Address(RVA = "0x29CF110", Offset = "0x29CD710", VA = "0x1829CF110")]
	public uint4x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246C")]
	[Address(RVA = "0x29CF370", Offset = "0x29CD970", VA = "0x1829CF370")]
	public uint4x4(double4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246D")]
	[Address(RVA = "0x29EC2C0", Offset = "0x29EA8C0", VA = "0x1829EC2C0")]
	public static implicit operator uint4x4(uint v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246E")]
	[Address(RVA = "0x29EC160", Offset = "0x29EA760", VA = "0x1829EC160")]
	public static explicit operator uint4x4(bool v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246F")]
	[Address(RVA = "0x2A40FD0", Offset = "0x2A3F5D0", VA = "0x182A40FD0")]
	public static explicit operator uint4x4(bool4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002470")]
	[Address(RVA = "0x29EC2C0", Offset = "0x29EA8C0", VA = "0x1829EC2C0")]
	public static explicit operator uint4x4(int v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002471")]
	[Address(RVA = "0x29EC470", Offset = "0x29EAA70", VA = "0x1829EC470")]
	public static explicit operator uint4x4(int4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002472")]
	[Address(RVA = "0x2A0FDE0", Offset = "0x2A0E3E0", VA = "0x182A0FDE0")]
	public static explicit operator uint4x4(float v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002473")]
	[Address(RVA = "0x2A0FD00", Offset = "0x2A0E300", VA = "0x182A0FD00")]
	public static explicit operator uint4x4(float4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002474")]
	[Address(RVA = "0x2A0FE10", Offset = "0x2A0E410", VA = "0x182A0FE10")]
	public static explicit operator uint4x4(double v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002475")]
	[Address(RVA = "0x2A0FD60", Offset = "0x2A0E360", VA = "0x182A0FD60")]
	public static explicit operator uint4x4(double4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002476")]
	[Address(RVA = "0x2A421A0", Offset = "0x2A407A0", VA = "0x182A421A0")]
	public static uint4x4 operator *(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002477")]
	[Address(RVA = "0x2A420D0", Offset = "0x2A406D0", VA = "0x182A420D0")]
	public static uint4x4 operator *(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002478")]
	[Address(RVA = "0x2A42280", Offset = "0x2A40880", VA = "0x182A42280")]
	public static uint4x4 operator *(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002479")]
	[Address(RVA = "0x2A404B0", Offset = "0x2A3EAB0", VA = "0x182A404B0")]
	public static uint4x4 operator +(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600247A")]
	[Address(RVA = "0x2A403C0", Offset = "0x2A3E9C0", VA = "0x182A403C0")]
	public static uint4x4 operator +(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600247B")]
	[Address(RVA = "0x2A402D0", Offset = "0x2A3E8D0", VA = "0x182A402D0")]
	public static uint4x4 operator +(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600247C")]
	[Address(RVA = "0x2A42550", Offset = "0x2A40B50", VA = "0x182A42550")]
	public static uint4x4 operator -(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600247D")]
	[Address(RVA = "0x2A42470", Offset = "0x2A40A70", VA = "0x182A42470")]
	public static uint4x4 operator -(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600247E")]
	[Address(RVA = "0x2A42620", Offset = "0x2A40C20", VA = "0x182A42620")]
	public static uint4x4 operator -(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600247F")]
	[Address(RVA = "0x2A40910", Offset = "0x2A3EF10", VA = "0x182A40910")]
	public static uint4x4 operator /(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002480")]
	[Address(RVA = "0x2A40A20", Offset = "0x2A3F020", VA = "0x182A40A20")]
	public static uint4x4 operator /(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002481")]
	[Address(RVA = "0x2A40B20", Offset = "0x2A3F120", VA = "0x182A40B20")]
	public static uint4x4 operator /(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002482")]
	[Address(RVA = "0x2A41DC0", Offset = "0x2A403C0", VA = "0x182A41DC0")]
	public static uint4x4 operator %(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002483")]
	[Address(RVA = "0x2A41FD0", Offset = "0x2A405D0", VA = "0x182A41FD0")]
	public static uint4x4 operator %(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002484")]
	[Address(RVA = "0x2A41ED0", Offset = "0x2A404D0", VA = "0x182A41ED0")]
	public static uint4x4 operator %(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002485")]
	[Address(RVA = "0x2A414F0", Offset = "0x2A3FAF0", VA = "0x182A414F0")]
	public static uint4x4 operator ++(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002486")]
	[Address(RVA = "0x2A40800", Offset = "0x2A3EE00", VA = "0x182A40800")]
	public static uint4x4 operator --(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002487")]
	[Address(RVA = "0x2A41C10", Offset = "0x2A40210", VA = "0x182A41C10")]
	public static bool4x4 operator <(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002488")]
	[Address(RVA = "0x2A41D00", Offset = "0x2A40300", VA = "0x182A41D00")]
	public static bool4x4 operator <(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002489")]
	[Address(RVA = "0x2A41B50", Offset = "0x2A40150", VA = "0x182A41B50")]
	public static bool4x4 operator <(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600248A")]
	[Address(RVA = "0x2A419A0", Offset = "0x2A3FFA0", VA = "0x182A419A0")]
	public static bool4x4 operator <=(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600248B")]
	[Address(RVA = "0x2A41A90", Offset = "0x2A40090", VA = "0x182A41A90")]
	public static bool4x4 operator <=(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600248C")]
	[Address(RVA = "0x2A418E0", Offset = "0x2A3FEE0", VA = "0x182A418E0")]
	public static bool4x4 operator <=(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600248D")]
	[Address(RVA = "0x2A41400", Offset = "0x2A3FA00", VA = "0x182A41400")]
	public static bool4x4 operator >(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600248E")]
	[Address(RVA = "0x2A41340", Offset = "0x2A3F940", VA = "0x182A41340")]
	public static bool4x4 operator >(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600248F")]
	[Address(RVA = "0x2A41280", Offset = "0x2A3F880", VA = "0x182A41280")]
	public static bool4x4 operator >(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002490")]
	[Address(RVA = "0x2A410D0", Offset = "0x2A3F6D0", VA = "0x182A410D0")]
	public static bool4x4 operator >=(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002491")]
	[Address(RVA = "0x2A41010", Offset = "0x2A3F610", VA = "0x182A41010")]
	public static bool4x4 operator >=(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002492")]
	[Address(RVA = "0x2A411C0", Offset = "0x2A3F7C0", VA = "0x182A411C0")]
	public static bool4x4 operator >=(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002493")]
	[Address(RVA = "0x2A42700", Offset = "0x2A40D00", VA = "0x182A42700")]
	public static uint4x4 operator -(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002494")]
	[Address(RVA = "0x2A42760", Offset = "0x2A40D60", VA = "0x182A42760")]
	public static uint4x4 operator +(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002495")]
	[Address(RVA = "0x2A41870", Offset = "0x2A3FE70", VA = "0x182A41870")]
	public static uint4x4 operator <<(uint4x4 x, int n)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002496")]
	[Address(RVA = "0x2A423A0", Offset = "0x2A409A0", VA = "0x182A423A0")]
	public static uint4x4 operator >>(uint4x4 x, int n)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002497")]
	[Address(RVA = "0x2A40C20", Offset = "0x2A3F220", VA = "0x182A40C20")]
	public static bool4x4 operator ==(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002498")]
	[Address(RVA = "0x2A40DD0", Offset = "0x2A3F3D0", VA = "0x182A40DD0")]
	public static bool4x4 operator ==(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002499")]
	[Address(RVA = "0x2A40D10", Offset = "0x2A3F310", VA = "0x182A40D10")]
	public static bool4x4 operator ==(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600249A")]
	[Address(RVA = "0x2A41780", Offset = "0x2A3FD80", VA = "0x182A41780")]
	public static bool4x4 operator !=(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600249B")]
	[Address(RVA = "0x2A416C0", Offset = "0x2A3FCC0", VA = "0x182A416C0")]
	public static bool4x4 operator !=(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600249C")]
	[Address(RVA = "0x2A41600", Offset = "0x2A3FC00", VA = "0x182A41600")]
	public static bool4x4 operator !=(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600249D")]
	[Address(RVA = "0x2A42350", Offset = "0x2A40950", VA = "0x182A42350")]
	public static uint4x4 operator ~(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600249E")]
	[Address(RVA = "0x2A40580", Offset = "0x2A3EB80", VA = "0x182A40580")]
	public static uint4x4 operator &(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600249F")]
	[Address(RVA = "0x2A40650", Offset = "0x2A3EC50", VA = "0x182A40650")]
	public static uint4x4 operator &(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024A0")]
	[Address(RVA = "0x2A405E0", Offset = "0x2A3EBE0", VA = "0x182A405E0")]
	public static uint4x4 operator &(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024A1")]
	[Address(RVA = "0x2A406C0", Offset = "0x2A3ECC0", VA = "0x182A406C0")]
	public static uint4x4 operator |(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024A2")]
	[Address(RVA = "0x2A40720", Offset = "0x2A3ED20", VA = "0x182A40720")]
	public static uint4x4 operator |(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024A3")]
	[Address(RVA = "0x2A40790", Offset = "0x2A3ED90", VA = "0x182A40790")]
	public static uint4x4 operator |(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024A4")]
	[Address(RVA = "0x2A40F70", Offset = "0x2A3F570", VA = "0x182A40F70")]
	public static uint4x4 operator ^(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024A5")]
	[Address(RVA = "0x2A40E90", Offset = "0x2A3F490", VA = "0x182A40E90")]
	public static uint4x4 operator ^(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024A6")]
	[Address(RVA = "0x2A40F00", Offset = "0x2A3F500", VA = "0x182A40F00")]
	public static uint4x4 operator ^(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024A8")]
	[Address(RVA = "0x2A38750", Offset = "0x2A36D50", VA = "0x182A38750", Slot = "4")]
	public bool Equals(uint4x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60024A9")]
	[Address(RVA = "0x2A3F1F0", Offset = "0x2A3D7F0", VA = "0x182A3F1F0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024AA")]
	[Address(RVA = "0x2A3F2A0", Offset = "0x2A3D8A0", VA = "0x182A3F2A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024AB")]
	[Address(RVA = "0x2A3F3E0", Offset = "0x2A3D9E0", VA = "0x182A3F3E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024AC")]
	[Address(RVA = "0x2A3FA80", Offset = "0x2A3E080", VA = "0x182A3FA80", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
