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
		[Address(RVA = "0x640E5A0", Offset = "0x640D5A0", VA = "0x640E5A0")]
		get
		{
			return ref *(uint4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002462")]
	[Address(RVA = "0x640A7C0", Offset = "0x64097C0", VA = "0x640A7C0")]
	public uint4x4(uint4 c0, uint4 c1, uint4 c2, uint4 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002463")]
	[Address(RVA = "0x640A7F0", Offset = "0x64097F0", VA = "0x640A7F0")]
	public uint4x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13, uint m20, uint m21, uint m22, uint m23, uint m30, uint m31, uint m32, uint m33)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002464")]
	[Address(RVA = "0x640A850", Offset = "0x6409850", VA = "0x640A850")]
	public uint4x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002465")]
	[Address(RVA = "0x640A880", Offset = "0x6409880", VA = "0x640A880")]
	public uint4x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002466")]
	[Address(RVA = "0x640A8C0", Offset = "0x64098C0", VA = "0x640A8C0")]
	public uint4x4(bool4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002467")]
	[Address(RVA = "0x640A9A0", Offset = "0x64099A0", VA = "0x640A9A0")]
	public uint4x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002468")]
	[Address(RVA = "0x640A9D0", Offset = "0x64099D0", VA = "0x640A9D0")]
	public uint4x4(int4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002469")]
	[Address(RVA = "0x640AA00", Offset = "0x6409A00", VA = "0x640AA00")]
	public uint4x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246A")]
	[Address(RVA = "0x640AA40", Offset = "0x6409A40", VA = "0x640AA40")]
	public uint4x4(float4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246B")]
	[Address(RVA = "0x640AC50", Offset = "0x6409C50", VA = "0x640AC50")]
	public uint4x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246C")]
	[Address(RVA = "0x640AC90", Offset = "0x6409C90", VA = "0x640AC90")]
	public uint4x4(double4x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246D")]
	[Address(RVA = "0x640AF00", Offset = "0x6409F00", VA = "0x640AF00")]
	public static implicit operator uint4x4(uint v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246E")]
	[Address(RVA = "0x640AF30", Offset = "0x6409F30", VA = "0x640AF30")]
	public static explicit operator uint4x4(bool v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246F")]
	[Address(RVA = "0x640AF70", Offset = "0x6409F70", VA = "0x640AF70")]
	public static explicit operator uint4x4(bool4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002470")]
	[Address(RVA = "0x640B050", Offset = "0x640A050", VA = "0x640B050")]
	public static explicit operator uint4x4(int v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002471")]
	[Address(RVA = "0x640B080", Offset = "0x640A080", VA = "0x640B080")]
	public static explicit operator uint4x4(int4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002472")]
	[Address(RVA = "0x640B0B0", Offset = "0x640A0B0", VA = "0x640B0B0")]
	public static explicit operator uint4x4(float v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002473")]
	[Address(RVA = "0x640B0F0", Offset = "0x640A0F0", VA = "0x640B0F0")]
	public static explicit operator uint4x4(float4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002474")]
	[Address(RVA = "0x640B330", Offset = "0x640A330", VA = "0x640B330")]
	public static explicit operator uint4x4(double v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002475")]
	[Address(RVA = "0x640B380", Offset = "0x640A380", VA = "0x640B380")]
	public static explicit operator uint4x4(double4x4 v)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002476")]
	[Address(RVA = "0x640B5F0", Offset = "0x640A5F0", VA = "0x640B5F0")]
	public static uint4x4 operator *(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002477")]
	[Address(RVA = "0x640B740", Offset = "0x640A740", VA = "0x640B740")]
	public static uint4x4 operator *(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002478")]
	[Address(RVA = "0x640B840", Offset = "0x640A840", VA = "0x640B840")]
	public static uint4x4 operator *(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002479")]
	[Address(RVA = "0x640B940", Offset = "0x640A940", VA = "0x640B940")]
	public static uint4x4 operator +(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600247A")]
	[Address(RVA = "0x640BA80", Offset = "0x640AA80", VA = "0x640BA80")]
	public static uint4x4 operator +(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600247B")]
	[Address(RVA = "0x640BAD0", Offset = "0x640AAD0", VA = "0x640BAD0")]
	public static uint4x4 operator +(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600247C")]
	[Address(RVA = "0x640BB20", Offset = "0x640AB20", VA = "0x640BB20")]
	public static uint4x4 operator -(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600247D")]
	[Address(RVA = "0x640BC70", Offset = "0x640AC70", VA = "0x640BC70")]
	public static uint4x4 operator -(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600247E")]
	[Address(RVA = "0x640BCC0", Offset = "0x640ACC0", VA = "0x640BCC0")]
	public static uint4x4 operator -(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600247F")]
	[Address(RVA = "0x640BD10", Offset = "0x640AD10", VA = "0x640BD10")]
	public static uint4x4 operator /(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002480")]
	[Address(RVA = "0x640BED0", Offset = "0x640AED0", VA = "0x640BED0")]
	public static uint4x4 operator /(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002481")]
	[Address(RVA = "0x640C020", Offset = "0x640B020", VA = "0x640C020")]
	public static uint4x4 operator /(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002482")]
	[Address(RVA = "0x640C160", Offset = "0x640B160", VA = "0x640C160")]
	public static uint4x4 operator %(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002483")]
	[Address(RVA = "0x640C320", Offset = "0x640B320", VA = "0x640C320")]
	public static uint4x4 operator %(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002484")]
	[Address(RVA = "0x640C470", Offset = "0x640B470", VA = "0x640C470")]
	public static uint4x4 operator %(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002485")]
	[Address(RVA = "0x640C5B0", Offset = "0x640B5B0", VA = "0x640C5B0")]
	public static uint4x4 operator ++(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002486")]
	[Address(RVA = "0x640C640", Offset = "0x640B640", VA = "0x640C640")]
	public static uint4x4 operator --(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002487")]
	[Address(RVA = "0x640C6D0", Offset = "0x640B6D0", VA = "0x640C6D0")]
	public static bool4x4 operator <(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002488")]
	[Address(RVA = "0x640C890", Offset = "0x640B890", VA = "0x640C890")]
	public static bool4x4 operator <(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002489")]
	[Address(RVA = "0x640C9F0", Offset = "0x640B9F0", VA = "0x640C9F0")]
	public static bool4x4 operator <(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600248A")]
	[Address(RVA = "0x640CB30", Offset = "0x640BB30", VA = "0x640CB30")]
	public static bool4x4 operator <=(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600248B")]
	[Address(RVA = "0x640CCC0", Offset = "0x640BCC0", VA = "0x640CCC0")]
	public static bool4x4 operator <=(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600248C")]
	[Address(RVA = "0x640CE10", Offset = "0x640BE10", VA = "0x640CE10")]
	public static bool4x4 operator <=(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600248D")]
	[Address(RVA = "0x640CF40", Offset = "0x640BF40", VA = "0x640CF40")]
	public static bool4x4 operator >(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600248E")]
	[Address(RVA = "0x640D100", Offset = "0x640C100", VA = "0x640D100")]
	public static bool4x4 operator >(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600248F")]
	[Address(RVA = "0x640D260", Offset = "0x640C260", VA = "0x640D260")]
	public static bool4x4 operator >(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002490")]
	[Address(RVA = "0x640D3A0", Offset = "0x640C3A0", VA = "0x640D3A0")]
	public static bool4x4 operator >=(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002491")]
	[Address(RVA = "0x640D530", Offset = "0x640C530", VA = "0x640D530")]
	public static bool4x4 operator >=(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002492")]
	[Address(RVA = "0x640D680", Offset = "0x640C680", VA = "0x640D680")]
	public static bool4x4 operator >=(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002493")]
	[Address(RVA = "0x640D7B0", Offset = "0x640C7B0", VA = "0x640D7B0")]
	public static uint4x4 operator -(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002494")]
	[Address(RVA = "0x640D840", Offset = "0x640C840", VA = "0x640D840")]
	public static uint4x4 operator +(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002495")]
	[Address(RVA = "0x640D870", Offset = "0x640C870", VA = "0x640D870")]
	public static uint4x4 operator <<(uint4x4 x, int n)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002496")]
	[Address(RVA = "0x640D960", Offset = "0x640C960", VA = "0x640D960")]
	public static uint4x4 operator >>(uint4x4 x, int n)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002497")]
	[Address(RVA = "0x640DA50", Offset = "0x640CA50", VA = "0x640DA50")]
	public static bool4x4 operator ==(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002498")]
	[Address(RVA = "0x640DC10", Offset = "0x640CC10", VA = "0x640DC10")]
	public static bool4x4 operator ==(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002499")]
	[Address(RVA = "0x640DD70", Offset = "0x640CD70", VA = "0x640DD70")]
	public static bool4x4 operator ==(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600249A")]
	[Address(RVA = "0x640DEB0", Offset = "0x640CEB0", VA = "0x640DEB0")]
	public static bool4x4 operator !=(uint4x4 lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600249B")]
	[Address(RVA = "0x640E040", Offset = "0x640D040", VA = "0x640E040")]
	public static bool4x4 operator !=(uint4x4 lhs, uint rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600249C")]
	[Address(RVA = "0x640E190", Offset = "0x640D190", VA = "0x640E190")]
	public static bool4x4 operator !=(uint lhs, uint4x4 rhs)
	{
		return default(bool4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600249D")]
	[Address(RVA = "0x640E2C0", Offset = "0x640D2C0", VA = "0x640E2C0")]
	public static uint4x4 operator ~(uint4x4 val)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600249E")]
	[Address(RVA = "0x640E300", Offset = "0x640D300", VA = "0x640E300")]
	public static uint4x4 operator &(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600249F")]
	[Address(RVA = "0x640E340", Offset = "0x640D340", VA = "0x640E340")]
	public static uint4x4 operator &(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024A0")]
	[Address(RVA = "0x640E390", Offset = "0x640D390", VA = "0x640E390")]
	public static uint4x4 operator &(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024A1")]
	[Address(RVA = "0x640E3E0", Offset = "0x640D3E0", VA = "0x640E3E0")]
	public static uint4x4 operator |(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024A2")]
	[Address(RVA = "0x640E420", Offset = "0x640D420", VA = "0x640E420")]
	public static uint4x4 operator |(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024A3")]
	[Address(RVA = "0x640E470", Offset = "0x640D470", VA = "0x640E470")]
	public static uint4x4 operator |(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024A4")]
	[Address(RVA = "0x640E4C0", Offset = "0x640D4C0", VA = "0x640E4C0")]
	public static uint4x4 operator ^(uint4x4 lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024A5")]
	[Address(RVA = "0x640E500", Offset = "0x640D500", VA = "0x640E500")]
	public static uint4x4 operator ^(uint4x4 lhs, uint rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024A6")]
	[Address(RVA = "0x640E550", Offset = "0x640D550", VA = "0x640E550")]
	public static uint4x4 operator ^(uint lhs, uint4x4 rhs)
	{
		return default(uint4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024A8")]
	[Address(RVA = "0x640E5B0", Offset = "0x640D5B0", VA = "0x640E5B0", Slot = "4")]
	public bool Equals(uint4x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60024A9")]
	[Address(RVA = "0x640E660", Offset = "0x640D660", VA = "0x640E660", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024AA")]
	[Address(RVA = "0x640E770", Offset = "0x640D770", VA = "0x640E770", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024AB")]
	[Address(RVA = "0x640E880", Offset = "0x640D880", VA = "0x640E880", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024AC")]
	[Address(RVA = "0x640EE50", Offset = "0x640DE50", VA = "0x640EE50", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
