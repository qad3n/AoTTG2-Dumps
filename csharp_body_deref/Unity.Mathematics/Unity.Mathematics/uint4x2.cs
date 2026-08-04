// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.uint4x2
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
public struct uint4x2 : IEquatable<uint4x2>, IFormattable
{
	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x0")]
	public uint4 c0;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x10")]
	public uint4 c1;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint4x2 zero;

	[Token(Token = "0x17000B87")]
	public unsafe ref uint4 this[int index]
	{
		[Token(Token = "0x60023BA")]
		[Address(RVA = "0x4A7BA80", Offset = "0x4A7BA80", VA = "0x4A7BA80")]
		get
		{
			return ref *(uint4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002375")]
	[Address(RVA = "0x4A79940", Offset = "0x4A79940", VA = "0x4A79940")]
	public uint4x2(uint4 c0, uint4 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002376")]
	[Address(RVA = "0x4A79950", Offset = "0x4A79950", VA = "0x4A79950")]
	public uint4x2(uint m00, uint m01, uint m10, uint m11, uint m20, uint m21, uint m30, uint m31)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002377")]
	[Address(RVA = "0x4A79980", Offset = "0x4A79980", VA = "0x4A79980")]
	public uint4x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002378")]
	[Address(RVA = "0x4A799A0", Offset = "0x4A799A0", VA = "0x4A799A0")]
	public uint4x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002379")]
	[Address(RVA = "0x4A799D0", Offset = "0x4A799D0", VA = "0x4A799D0")]
	public uint4x2(bool4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600237A")]
	[Address(RVA = "0x4A79A40", Offset = "0x4A79A40", VA = "0x4A79A40")]
	public uint4x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600237B")]
	[Address(RVA = "0x4A79A60", Offset = "0x4A79A60", VA = "0x4A79A60")]
	public uint4x2(int4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600237C")]
	[Address(RVA = "0x4A79A80", Offset = "0x4A79A80", VA = "0x4A79A80")]
	public uint4x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600237D")]
	[Address(RVA = "0x4A79AB0", Offset = "0x4A79AB0", VA = "0x4A79AB0")]
	public uint4x2(float4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600237E")]
	[Address(RVA = "0x4A79B90", Offset = "0x4A79B90", VA = "0x4A79B90")]
	public uint4x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600237F")]
	[Address(RVA = "0x4A79BC0", Offset = "0x4A79BC0", VA = "0x4A79BC0")]
	public uint4x2(double4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002380")]
	[Address(RVA = "0x4A79CB0", Offset = "0x4A79CB0", VA = "0x4A79CB0")]
	public static implicit operator uint4x2(uint v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002381")]
	[Address(RVA = "0x4A79CD0", Offset = "0x4A79CD0", VA = "0x4A79CD0")]
	public static explicit operator uint4x2(bool v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002382")]
	[Address(RVA = "0x4A79D00", Offset = "0x4A79D00", VA = "0x4A79D00")]
	public static explicit operator uint4x2(bool4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002383")]
	[Address(RVA = "0x4A79D80", Offset = "0x4A79D80", VA = "0x4A79D80")]
	public static explicit operator uint4x2(int v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002384")]
	[Address(RVA = "0x4A79DA0", Offset = "0x4A79DA0", VA = "0x4A79DA0")]
	public static explicit operator uint4x2(int4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002385")]
	[Address(RVA = "0x4A79DC0", Offset = "0x4A79DC0", VA = "0x4A79DC0")]
	public static explicit operator uint4x2(float v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002386")]
	[Address(RVA = "0x4A79DF0", Offset = "0x4A79DF0", VA = "0x4A79DF0")]
	public static explicit operator uint4x2(float4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002387")]
	[Address(RVA = "0x4A79ED0", Offset = "0x4A79ED0", VA = "0x4A79ED0")]
	public static explicit operator uint4x2(double v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002388")]
	[Address(RVA = "0x4A79F00", Offset = "0x4A79F00", VA = "0x4A79F00")]
	public static explicit operator uint4x2(double4x2 v)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002389")]
	[Address(RVA = "0x4A79FF0", Offset = "0x4A79FF0", VA = "0x4A79FF0")]
	public static uint4x2 operator *(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600238A")]
	[Address(RVA = "0x4A7A090", Offset = "0x4A7A090", VA = "0x4A7A090")]
	public static uint4x2 operator *(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600238B")]
	[Address(RVA = "0x4A7A110", Offset = "0x4A7A110", VA = "0x4A7A110")]
	public static uint4x2 operator *(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600238C")]
	[Address(RVA = "0x4A7A190", Offset = "0x4A7A190", VA = "0x4A7A190")]
	public static uint4x2 operator +(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600238D")]
	[Address(RVA = "0x4A7A200", Offset = "0x4A7A200", VA = "0x4A7A200")]
	public static uint4x2 operator +(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600238E")]
	[Address(RVA = "0x4A7A270", Offset = "0x4A7A270", VA = "0x4A7A270")]
	public static uint4x2 operator +(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600238F")]
	[Address(RVA = "0x4A7A2E0", Offset = "0x4A7A2E0", VA = "0x4A7A2E0")]
	public static uint4x2 operator -(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002390")]
	[Address(RVA = "0x4A7A350", Offset = "0x4A7A350", VA = "0x4A7A350")]
	public static uint4x2 operator -(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002391")]
	[Address(RVA = "0x4A7A3C0", Offset = "0x4A7A3C0", VA = "0x4A7A3C0")]
	public static uint4x2 operator -(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002392")]
	[Address(RVA = "0x4A7A430", Offset = "0x4A7A430", VA = "0x4A7A430")]
	public static uint4x2 operator /(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002393")]
	[Address(RVA = "0x4A7A500", Offset = "0x4A7A500", VA = "0x4A7A500")]
	public static uint4x2 operator /(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002394")]
	[Address(RVA = "0x4A7A5B0", Offset = "0x4A7A5B0", VA = "0x4A7A5B0")]
	public static uint4x2 operator /(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002395")]
	[Address(RVA = "0x4A7A650", Offset = "0x4A7A650", VA = "0x4A7A650")]
	public static uint4x2 operator %(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002396")]
	[Address(RVA = "0x4A7A720", Offset = "0x4A7A720", VA = "0x4A7A720")]
	public static uint4x2 operator %(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002397")]
	[Address(RVA = "0x4A7A7D0", Offset = "0x4A7A7D0", VA = "0x4A7A7D0")]
	public static uint4x2 operator %(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002398")]
	[Address(RVA = "0x4A7A870", Offset = "0x4A7A870", VA = "0x4A7A870")]
	public static uint4x2 operator ++(uint4x2 val)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002399")]
	[Address(RVA = "0x4A7A8C0", Offset = "0x4A7A8C0", VA = "0x4A7A8C0")]
	public static uint4x2 operator --(uint4x2 val)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600239A")]
	[Address(RVA = "0x4A7A910", Offset = "0x4A7A910", VA = "0x4A7A910")]
	public static bool4x2 operator <(uint4x2 lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600239B")]
	[Address(RVA = "0x4A7A9F0", Offset = "0x4A7A9F0", VA = "0x4A7A9F0")]
	public static bool4x2 operator <(uint4x2 lhs, uint rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600239C")]
	[Address(RVA = "0x4A7AA90", Offset = "0x4A7AA90", VA = "0x4A7AA90")]
	public static bool4x2 operator <(uint lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600239D")]
	[Address(RVA = "0x4A7AB30", Offset = "0x4A7AB30", VA = "0x4A7AB30")]
	public static bool4x2 operator <=(uint4x2 lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600239E")]
	[Address(RVA = "0x4A7AC10", Offset = "0x4A7AC10", VA = "0x4A7AC10")]
	public static bool4x2 operator <=(uint4x2 lhs, uint rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600239F")]
	[Address(RVA = "0x4A7ACB0", Offset = "0x4A7ACB0", VA = "0x4A7ACB0")]
	public static bool4x2 operator <=(uint lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A0")]
	[Address(RVA = "0x4A7AD50", Offset = "0x4A7AD50", VA = "0x4A7AD50")]
	public static bool4x2 operator >(uint4x2 lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A1")]
	[Address(RVA = "0x4A7AE30", Offset = "0x4A7AE30", VA = "0x4A7AE30")]
	public static bool4x2 operator >(uint4x2 lhs, uint rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A2")]
	[Address(RVA = "0x4A7AED0", Offset = "0x4A7AED0", VA = "0x4A7AED0")]
	public static bool4x2 operator >(uint lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A3")]
	[Address(RVA = "0x4A7AF70", Offset = "0x4A7AF70", VA = "0x4A7AF70")]
	public static bool4x2 operator >=(uint4x2 lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A4")]
	[Address(RVA = "0x4A7B050", Offset = "0x4A7B050", VA = "0x4A7B050")]
	public static bool4x2 operator >=(uint4x2 lhs, uint rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A5")]
	[Address(RVA = "0x4A7B0F0", Offset = "0x4A7B0F0", VA = "0x4A7B0F0")]
	public static bool4x2 operator >=(uint lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A6")]
	[Address(RVA = "0x4A7B190", Offset = "0x4A7B190", VA = "0x4A7B190")]
	public static uint4x2 operator -(uint4x2 val)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A7")]
	[Address(RVA = "0x4A7B1F0", Offset = "0x4A7B1F0", VA = "0x4A7B1F0")]
	public static uint4x2 operator +(uint4x2 val)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A8")]
	[Address(RVA = "0x4A7B210", Offset = "0x4A7B210", VA = "0x4A7B210")]
	public static uint4x2 operator <<(uint4x2 x, int n)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023A9")]
	[Address(RVA = "0x4A7B290", Offset = "0x4A7B290", VA = "0x4A7B290")]
	public static uint4x2 operator >>(uint4x2 x, int n)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023AA")]
	[Address(RVA = "0x4A7B310", Offset = "0x4A7B310", VA = "0x4A7B310")]
	public static bool4x2 operator ==(uint4x2 lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023AB")]
	[Address(RVA = "0x4A7B3F0", Offset = "0x4A7B3F0", VA = "0x4A7B3F0")]
	public static bool4x2 operator ==(uint4x2 lhs, uint rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023AC")]
	[Address(RVA = "0x4A7B490", Offset = "0x4A7B490", VA = "0x4A7B490")]
	public static bool4x2 operator ==(uint lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023AD")]
	[Address(RVA = "0x4A7B530", Offset = "0x4A7B530", VA = "0x4A7B530")]
	public static bool4x2 operator !=(uint4x2 lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023AE")]
	[Address(RVA = "0x4A7B610", Offset = "0x4A7B610", VA = "0x4A7B610")]
	public static bool4x2 operator !=(uint4x2 lhs, uint rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023AF")]
	[Address(RVA = "0x4A7B6B0", Offset = "0x4A7B6B0", VA = "0x4A7B6B0")]
	public static bool4x2 operator !=(uint lhs, uint4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B0")]
	[Address(RVA = "0x4A7B750", Offset = "0x4A7B750", VA = "0x4A7B750")]
	public static uint4x2 operator ~(uint4x2 val)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B1")]
	[Address(RVA = "0x4A7B780", Offset = "0x4A7B780", VA = "0x4A7B780")]
	public static uint4x2 operator &(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B2")]
	[Address(RVA = "0x4A7B7A0", Offset = "0x4A7B7A0", VA = "0x4A7B7A0")]
	public static uint4x2 operator &(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B3")]
	[Address(RVA = "0x4A7B810", Offset = "0x4A7B810", VA = "0x4A7B810")]
	public static uint4x2 operator &(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B4")]
	[Address(RVA = "0x4A7B880", Offset = "0x4A7B880", VA = "0x4A7B880")]
	public static uint4x2 operator |(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B5")]
	[Address(RVA = "0x4A7B8A0", Offset = "0x4A7B8A0", VA = "0x4A7B8A0")]
	public static uint4x2 operator |(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B6")]
	[Address(RVA = "0x4A7B910", Offset = "0x4A7B910", VA = "0x4A7B910")]
	public static uint4x2 operator |(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B7")]
	[Address(RVA = "0x4A7B980", Offset = "0x4A7B980", VA = "0x4A7B980")]
	public static uint4x2 operator ^(uint4x2 lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B8")]
	[Address(RVA = "0x4A7B9A0", Offset = "0x4A7B9A0", VA = "0x4A7B9A0")]
	public static uint4x2 operator ^(uint4x2 lhs, uint rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023B9")]
	[Address(RVA = "0x4A7BA10", Offset = "0x4A7BA10", VA = "0x4A7BA10")]
	public static uint4x2 operator ^(uint lhs, uint4x2 rhs)
	{
		return default(uint4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023BB")]
	[Address(RVA = "0x4A7BA90", Offset = "0x4A7BA90", VA = "0x4A7BA90", Slot = "4")]
	public bool Equals(uint4x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60023BC")]
	[Address(RVA = "0x4A7BAF0", Offset = "0x4A7BAF0", VA = "0x4A7BAF0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023BD")]
	[Address(RVA = "0x4A7BBA0", Offset = "0x4A7BBA0", VA = "0x4A7BBA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023BE")]
	[Address(RVA = "0x4A7BC50", Offset = "0x4A7BC50", VA = "0x4A7BC50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023BF")]
	[Address(RVA = "0x4A7BF70", Offset = "0x4A7BF70", VA = "0x4A7BF70", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
