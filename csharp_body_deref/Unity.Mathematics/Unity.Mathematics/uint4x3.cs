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
[Token(Token = "0x2000060")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint4x3 : IEquatable<uint4x3>, IFormattable
{
	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x0")]
	public uint4 c0;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x10")]
	public uint4 c1;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x20")]
	public uint4 c2;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint4x3 zero;

	[Token(Token = "0x17000B88")]
	public unsafe ref uint4 this[int index]
	{
		[Token(Token = "0x6002405")]
		[Address(RVA = "0x4A7F240", Offset = "0x4A7F240", VA = "0x4A7F240")]
		get
		{
			return ref *(uint4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C0")]
	[Address(RVA = "0x4A7C260", Offset = "0x4A7C260", VA = "0x4A7C260")]
	public uint4x3(uint4 c0, uint4 c1, uint4 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C1")]
	[Address(RVA = "0x4A7C280", Offset = "0x4A7C280", VA = "0x4A7C280")]
	public uint4x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12, uint m20, uint m21, uint m22, uint m30, uint m31, uint m32)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C2")]
	[Address(RVA = "0x4A7C2E0", Offset = "0x4A7C2E0", VA = "0x4A7C2E0")]
	public uint4x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C3")]
	[Address(RVA = "0x4A7C310", Offset = "0x4A7C310", VA = "0x4A7C310")]
	public uint4x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C4")]
	[Address(RVA = "0x4A7C340", Offset = "0x4A7C340", VA = "0x4A7C340")]
	public uint4x3(bool4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C5")]
	[Address(RVA = "0x4A7C3F0", Offset = "0x4A7C3F0", VA = "0x4A7C3F0")]
	public uint4x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C6")]
	[Address(RVA = "0x4A7C420", Offset = "0x4A7C420", VA = "0x4A7C420")]
	public uint4x3(int4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C7")]
	[Address(RVA = "0x4A7C440", Offset = "0x4A7C440", VA = "0x4A7C440")]
	public uint4x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C8")]
	[Address(RVA = "0x4A7C480", Offset = "0x4A7C480", VA = "0x4A7C480")]
	public uint4x3(float4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C9")]
	[Address(RVA = "0x4A7C5C0", Offset = "0x4A7C5C0", VA = "0x4A7C5C0")]
	public uint4x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023CA")]
	[Address(RVA = "0x4A7C600", Offset = "0x4A7C600", VA = "0x4A7C600")]
	public uint4x3(double4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023CB")]
	[Address(RVA = "0x4A7C760", Offset = "0x4A7C760", VA = "0x4A7C760")]
	public static implicit operator uint4x3(uint v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023CC")]
	[Address(RVA = "0x4A7C790", Offset = "0x4A7C790", VA = "0x4A7C790")]
	public static explicit operator uint4x3(bool v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023CD")]
	[Address(RVA = "0x4A7C7C0", Offset = "0x4A7C7C0", VA = "0x4A7C7C0")]
	public static explicit operator uint4x3(bool4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023CE")]
	[Address(RVA = "0x4A7C870", Offset = "0x4A7C870", VA = "0x4A7C870")]
	public static explicit operator uint4x3(int v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023CF")]
	[Address(RVA = "0x4A7C8A0", Offset = "0x4A7C8A0", VA = "0x4A7C8A0")]
	public static explicit operator uint4x3(int4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D0")]
	[Address(RVA = "0x4A7C8C0", Offset = "0x4A7C8C0", VA = "0x4A7C8C0")]
	public static explicit operator uint4x3(float v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D1")]
	[Address(RVA = "0x4A7C900", Offset = "0x4A7C900", VA = "0x4A7C900")]
	public static explicit operator uint4x3(float4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D2")]
	[Address(RVA = "0x4A7CA50", Offset = "0x4A7CA50", VA = "0x4A7CA50")]
	public static explicit operator uint4x3(double v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D3")]
	[Address(RVA = "0x4A7CA90", Offset = "0x4A7CA90", VA = "0x4A7CA90")]
	public static explicit operator uint4x3(double4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D4")]
	[Address(RVA = "0x4A7CBF0", Offset = "0x4A7CBF0", VA = "0x4A7CBF0")]
	public static uint4x3 operator *(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D5")]
	[Address(RVA = "0x4A7CCE0", Offset = "0x4A7CCE0", VA = "0x4A7CCE0")]
	public static uint4x3 operator *(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D6")]
	[Address(RVA = "0x4A7CDA0", Offset = "0x4A7CDA0", VA = "0x4A7CDA0")]
	public static uint4x3 operator *(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D7")]
	[Address(RVA = "0x4A7CE60", Offset = "0x4A7CE60", VA = "0x4A7CE60")]
	public static uint4x3 operator +(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D8")]
	[Address(RVA = "0x4A7CF00", Offset = "0x4A7CF00", VA = "0x4A7CF00")]
	public static uint4x3 operator +(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D9")]
	[Address(RVA = "0x4A7CF90", Offset = "0x4A7CF90", VA = "0x4A7CF90")]
	public static uint4x3 operator +(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023DA")]
	[Address(RVA = "0x4A7D020", Offset = "0x4A7D020", VA = "0x4A7D020")]
	public static uint4x3 operator -(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023DB")]
	[Address(RVA = "0x4A7D0C0", Offset = "0x4A7D0C0", VA = "0x4A7D0C0")]
	public static uint4x3 operator -(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023DC")]
	[Address(RVA = "0x4A7D150", Offset = "0x4A7D150", VA = "0x4A7D150")]
	public static uint4x3 operator -(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023DD")]
	[Address(RVA = "0x4A7D1F0", Offset = "0x4A7D1F0", VA = "0x4A7D1F0")]
	public static uint4x3 operator /(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023DE")]
	[Address(RVA = "0x4A7D330", Offset = "0x4A7D330", VA = "0x4A7D330")]
	public static uint4x3 operator /(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023DF")]
	[Address(RVA = "0x4A7D430", Offset = "0x4A7D430", VA = "0x4A7D430")]
	public static uint4x3 operator /(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E0")]
	[Address(RVA = "0x4A7D520", Offset = "0x4A7D520", VA = "0x4A7D520")]
	public static uint4x3 operator %(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E1")]
	[Address(RVA = "0x4A7D660", Offset = "0x4A7D660", VA = "0x4A7D660")]
	public static uint4x3 operator %(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E2")]
	[Address(RVA = "0x4A7D760", Offset = "0x4A7D760", VA = "0x4A7D760")]
	public static uint4x3 operator %(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E3")]
	[Address(RVA = "0x4A7D850", Offset = "0x4A7D850", VA = "0x4A7D850")]
	public static uint4x3 operator ++(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E4")]
	[Address(RVA = "0x4A7D8D0", Offset = "0x4A7D8D0", VA = "0x4A7D8D0")]
	public static uint4x3 operator --(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E5")]
	[Address(RVA = "0x4A7D950", Offset = "0x4A7D950", VA = "0x4A7D950")]
	public static bool4x3 operator <(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E6")]
	[Address(RVA = "0x4A7DA90", Offset = "0x4A7DA90", VA = "0x4A7DA90")]
	public static bool4x3 operator <(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E7")]
	[Address(RVA = "0x4A7DB80", Offset = "0x4A7DB80", VA = "0x4A7DB80")]
	public static bool4x3 operator <(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E8")]
	[Address(RVA = "0x4A7DC70", Offset = "0x4A7DC70", VA = "0x4A7DC70")]
	public static bool4x3 operator <=(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E9")]
	[Address(RVA = "0x4A7DDB0", Offset = "0x4A7DDB0", VA = "0x4A7DDB0")]
	public static bool4x3 operator <=(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023EA")]
	[Address(RVA = "0x4A7DEA0", Offset = "0x4A7DEA0", VA = "0x4A7DEA0")]
	public static bool4x3 operator <=(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023EB")]
	[Address(RVA = "0x4A7DF90", Offset = "0x4A7DF90", VA = "0x4A7DF90")]
	public static bool4x3 operator >(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023EC")]
	[Address(RVA = "0x4A7E0D0", Offset = "0x4A7E0D0", VA = "0x4A7E0D0")]
	public static bool4x3 operator >(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023ED")]
	[Address(RVA = "0x4A7E1C0", Offset = "0x4A7E1C0", VA = "0x4A7E1C0")]
	public static bool4x3 operator >(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023EE")]
	[Address(RVA = "0x4A7E2B0", Offset = "0x4A7E2B0", VA = "0x4A7E2B0")]
	public static bool4x3 operator >=(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023EF")]
	[Address(RVA = "0x4A7E3F0", Offset = "0x4A7E3F0", VA = "0x4A7E3F0")]
	public static bool4x3 operator >=(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F0")]
	[Address(RVA = "0x4A7E4E0", Offset = "0x4A7E4E0", VA = "0x4A7E4E0")]
	public static bool4x3 operator >=(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F1")]
	[Address(RVA = "0x4A7E5D0", Offset = "0x4A7E5D0", VA = "0x4A7E5D0")]
	public static uint4x3 operator -(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F2")]
	[Address(RVA = "0x4A7E640", Offset = "0x4A7E640", VA = "0x4A7E640")]
	public static uint4x3 operator +(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F3")]
	[Address(RVA = "0x4A7E660", Offset = "0x4A7E660", VA = "0x4A7E660")]
	public static uint4x3 operator <<(uint4x3 x, int n)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F4")]
	[Address(RVA = "0x4A7E720", Offset = "0x4A7E720", VA = "0x4A7E720")]
	public static uint4x3 operator >>(uint4x3 x, int n)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F5")]
	[Address(RVA = "0x4A7E7E0", Offset = "0x4A7E7E0", VA = "0x4A7E7E0")]
	public static bool4x3 operator ==(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F6")]
	[Address(RVA = "0x4A7E920", Offset = "0x4A7E920", VA = "0x4A7E920")]
	public static bool4x3 operator ==(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F7")]
	[Address(RVA = "0x4A7EA10", Offset = "0x4A7EA10", VA = "0x4A7EA10")]
	public static bool4x3 operator ==(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F8")]
	[Address(RVA = "0x4A7EB00", Offset = "0x4A7EB00", VA = "0x4A7EB00")]
	public static bool4x3 operator !=(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F9")]
	[Address(RVA = "0x4A7EC40", Offset = "0x4A7EC40", VA = "0x4A7EC40")]
	public static bool4x3 operator !=(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023FA")]
	[Address(RVA = "0x4A7ED30", Offset = "0x4A7ED30", VA = "0x4A7ED30")]
	public static bool4x3 operator !=(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023FB")]
	[Address(RVA = "0x4A7EE20", Offset = "0x4A7EE20", VA = "0x4A7EE20")]
	public static uint4x3 operator ~(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023FC")]
	[Address(RVA = "0x4A7EE50", Offset = "0x4A7EE50", VA = "0x4A7EE50")]
	public static uint4x3 operator &(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023FD")]
	[Address(RVA = "0x4A7EE80", Offset = "0x4A7EE80", VA = "0x4A7EE80")]
	public static uint4x3 operator &(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023FE")]
	[Address(RVA = "0x4A7EF10", Offset = "0x4A7EF10", VA = "0x4A7EF10")]
	public static uint4x3 operator &(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023FF")]
	[Address(RVA = "0x4A7EFA0", Offset = "0x4A7EFA0", VA = "0x4A7EFA0")]
	public static uint4x3 operator |(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002400")]
	[Address(RVA = "0x4A7EFD0", Offset = "0x4A7EFD0", VA = "0x4A7EFD0")]
	public static uint4x3 operator |(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002401")]
	[Address(RVA = "0x4A7F060", Offset = "0x4A7F060", VA = "0x4A7F060")]
	public static uint4x3 operator |(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002402")]
	[Address(RVA = "0x4A7F0F0", Offset = "0x4A7F0F0", VA = "0x4A7F0F0")]
	public static uint4x3 operator ^(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002403")]
	[Address(RVA = "0x4A7F120", Offset = "0x4A7F120", VA = "0x4A7F120")]
	public static uint4x3 operator ^(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002404")]
	[Address(RVA = "0x4A7F1B0", Offset = "0x4A7F1B0", VA = "0x4A7F1B0")]
	public static uint4x3 operator ^(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002406")]
	[Address(RVA = "0x4A7F250", Offset = "0x4A7F250", VA = "0x4A7F250", Slot = "4")]
	public bool Equals(uint4x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002407")]
	[Address(RVA = "0x4A7F2D0", Offset = "0x4A7F2D0", VA = "0x4A7F2D0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002408")]
	[Address(RVA = "0x4A7F3B0", Offset = "0x4A7F3B0", VA = "0x4A7F3B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002409")]
	[Address(RVA = "0x4A7F4C0", Offset = "0x4A7F4C0", VA = "0x4A7F4C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600240A")]
	[Address(RVA = "0x4A7F920", Offset = "0x4A7F920", VA = "0x4A7F920", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
