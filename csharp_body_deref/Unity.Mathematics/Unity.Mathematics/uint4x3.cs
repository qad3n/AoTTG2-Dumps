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
		[Address(RVA = "0x47725C0", Offset = "0x47725C0", VA = "0x47725C0")]
		get
		{
			return ref *(uint4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C0")]
	[Address(RVA = "0x476F5E0", Offset = "0x476F5E0", VA = "0x476F5E0")]
	public uint4x3(uint4 c0, uint4 c1, uint4 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C1")]
	[Address(RVA = "0x476F600", Offset = "0x476F600", VA = "0x476F600")]
	public uint4x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12, uint m20, uint m21, uint m22, uint m30, uint m31, uint m32)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C2")]
	[Address(RVA = "0x476F660", Offset = "0x476F660", VA = "0x476F660")]
	public uint4x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C3")]
	[Address(RVA = "0x476F690", Offset = "0x476F690", VA = "0x476F690")]
	public uint4x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C4")]
	[Address(RVA = "0x476F6C0", Offset = "0x476F6C0", VA = "0x476F6C0")]
	public uint4x3(bool4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C5")]
	[Address(RVA = "0x476F770", Offset = "0x476F770", VA = "0x476F770")]
	public uint4x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C6")]
	[Address(RVA = "0x476F7A0", Offset = "0x476F7A0", VA = "0x476F7A0")]
	public uint4x3(int4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C7")]
	[Address(RVA = "0x476F7C0", Offset = "0x476F7C0", VA = "0x476F7C0")]
	public uint4x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C8")]
	[Address(RVA = "0x476F800", Offset = "0x476F800", VA = "0x476F800")]
	public uint4x3(float4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023C9")]
	[Address(RVA = "0x476F940", Offset = "0x476F940", VA = "0x476F940")]
	public uint4x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023CA")]
	[Address(RVA = "0x476F980", Offset = "0x476F980", VA = "0x476F980")]
	public uint4x3(double4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023CB")]
	[Address(RVA = "0x476FAE0", Offset = "0x476FAE0", VA = "0x476FAE0")]
	public static implicit operator uint4x3(uint v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023CC")]
	[Address(RVA = "0x476FB10", Offset = "0x476FB10", VA = "0x476FB10")]
	public static explicit operator uint4x3(bool v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023CD")]
	[Address(RVA = "0x476FB40", Offset = "0x476FB40", VA = "0x476FB40")]
	public static explicit operator uint4x3(bool4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023CE")]
	[Address(RVA = "0x476FBF0", Offset = "0x476FBF0", VA = "0x476FBF0")]
	public static explicit operator uint4x3(int v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023CF")]
	[Address(RVA = "0x476FC20", Offset = "0x476FC20", VA = "0x476FC20")]
	public static explicit operator uint4x3(int4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D0")]
	[Address(RVA = "0x476FC40", Offset = "0x476FC40", VA = "0x476FC40")]
	public static explicit operator uint4x3(float v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D1")]
	[Address(RVA = "0x476FC80", Offset = "0x476FC80", VA = "0x476FC80")]
	public static explicit operator uint4x3(float4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D2")]
	[Address(RVA = "0x476FDD0", Offset = "0x476FDD0", VA = "0x476FDD0")]
	public static explicit operator uint4x3(double v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D3")]
	[Address(RVA = "0x476FE10", Offset = "0x476FE10", VA = "0x476FE10")]
	public static explicit operator uint4x3(double4x3 v)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D4")]
	[Address(RVA = "0x476FF70", Offset = "0x476FF70", VA = "0x476FF70")]
	public static uint4x3 operator *(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D5")]
	[Address(RVA = "0x4770060", Offset = "0x4770060", VA = "0x4770060")]
	public static uint4x3 operator *(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D6")]
	[Address(RVA = "0x4770120", Offset = "0x4770120", VA = "0x4770120")]
	public static uint4x3 operator *(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D7")]
	[Address(RVA = "0x47701E0", Offset = "0x47701E0", VA = "0x47701E0")]
	public static uint4x3 operator +(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D8")]
	[Address(RVA = "0x4770280", Offset = "0x4770280", VA = "0x4770280")]
	public static uint4x3 operator +(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023D9")]
	[Address(RVA = "0x4770310", Offset = "0x4770310", VA = "0x4770310")]
	public static uint4x3 operator +(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023DA")]
	[Address(RVA = "0x47703A0", Offset = "0x47703A0", VA = "0x47703A0")]
	public static uint4x3 operator -(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023DB")]
	[Address(RVA = "0x4770440", Offset = "0x4770440", VA = "0x4770440")]
	public static uint4x3 operator -(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023DC")]
	[Address(RVA = "0x47704D0", Offset = "0x47704D0", VA = "0x47704D0")]
	public static uint4x3 operator -(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023DD")]
	[Address(RVA = "0x4770570", Offset = "0x4770570", VA = "0x4770570")]
	public static uint4x3 operator /(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023DE")]
	[Address(RVA = "0x47706B0", Offset = "0x47706B0", VA = "0x47706B0")]
	public static uint4x3 operator /(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023DF")]
	[Address(RVA = "0x47707B0", Offset = "0x47707B0", VA = "0x47707B0")]
	public static uint4x3 operator /(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E0")]
	[Address(RVA = "0x47708A0", Offset = "0x47708A0", VA = "0x47708A0")]
	public static uint4x3 operator %(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E1")]
	[Address(RVA = "0x47709E0", Offset = "0x47709E0", VA = "0x47709E0")]
	public static uint4x3 operator %(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E2")]
	[Address(RVA = "0x4770AE0", Offset = "0x4770AE0", VA = "0x4770AE0")]
	public static uint4x3 operator %(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E3")]
	[Address(RVA = "0x4770BD0", Offset = "0x4770BD0", VA = "0x4770BD0")]
	public static uint4x3 operator ++(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E4")]
	[Address(RVA = "0x4770C50", Offset = "0x4770C50", VA = "0x4770C50")]
	public static uint4x3 operator --(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E5")]
	[Address(RVA = "0x4770CD0", Offset = "0x4770CD0", VA = "0x4770CD0")]
	public static bool4x3 operator <(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E6")]
	[Address(RVA = "0x4770E10", Offset = "0x4770E10", VA = "0x4770E10")]
	public static bool4x3 operator <(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E7")]
	[Address(RVA = "0x4770F00", Offset = "0x4770F00", VA = "0x4770F00")]
	public static bool4x3 operator <(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E8")]
	[Address(RVA = "0x4770FF0", Offset = "0x4770FF0", VA = "0x4770FF0")]
	public static bool4x3 operator <=(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023E9")]
	[Address(RVA = "0x4771130", Offset = "0x4771130", VA = "0x4771130")]
	public static bool4x3 operator <=(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023EA")]
	[Address(RVA = "0x4771220", Offset = "0x4771220", VA = "0x4771220")]
	public static bool4x3 operator <=(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023EB")]
	[Address(RVA = "0x4771310", Offset = "0x4771310", VA = "0x4771310")]
	public static bool4x3 operator >(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023EC")]
	[Address(RVA = "0x4771450", Offset = "0x4771450", VA = "0x4771450")]
	public static bool4x3 operator >(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023ED")]
	[Address(RVA = "0x4771540", Offset = "0x4771540", VA = "0x4771540")]
	public static bool4x3 operator >(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023EE")]
	[Address(RVA = "0x4771630", Offset = "0x4771630", VA = "0x4771630")]
	public static bool4x3 operator >=(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023EF")]
	[Address(RVA = "0x4771770", Offset = "0x4771770", VA = "0x4771770")]
	public static bool4x3 operator >=(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F0")]
	[Address(RVA = "0x4771860", Offset = "0x4771860", VA = "0x4771860")]
	public static bool4x3 operator >=(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F1")]
	[Address(RVA = "0x4771950", Offset = "0x4771950", VA = "0x4771950")]
	public static uint4x3 operator -(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F2")]
	[Address(RVA = "0x47719C0", Offset = "0x47719C0", VA = "0x47719C0")]
	public static uint4x3 operator +(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F3")]
	[Address(RVA = "0x47719E0", Offset = "0x47719E0", VA = "0x47719E0")]
	public static uint4x3 operator <<(uint4x3 x, int n)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F4")]
	[Address(RVA = "0x4771AA0", Offset = "0x4771AA0", VA = "0x4771AA0")]
	public static uint4x3 operator >>(uint4x3 x, int n)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F5")]
	[Address(RVA = "0x4771B60", Offset = "0x4771B60", VA = "0x4771B60")]
	public static bool4x3 operator ==(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F6")]
	[Address(RVA = "0x4771CA0", Offset = "0x4771CA0", VA = "0x4771CA0")]
	public static bool4x3 operator ==(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F7")]
	[Address(RVA = "0x4771D90", Offset = "0x4771D90", VA = "0x4771D90")]
	public static bool4x3 operator ==(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F8")]
	[Address(RVA = "0x4771E80", Offset = "0x4771E80", VA = "0x4771E80")]
	public static bool4x3 operator !=(uint4x3 lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023F9")]
	[Address(RVA = "0x4771FC0", Offset = "0x4771FC0", VA = "0x4771FC0")]
	public static bool4x3 operator !=(uint4x3 lhs, uint rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023FA")]
	[Address(RVA = "0x47720B0", Offset = "0x47720B0", VA = "0x47720B0")]
	public static bool4x3 operator !=(uint lhs, uint4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023FB")]
	[Address(RVA = "0x47721A0", Offset = "0x47721A0", VA = "0x47721A0")]
	public static uint4x3 operator ~(uint4x3 val)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023FC")]
	[Address(RVA = "0x47721D0", Offset = "0x47721D0", VA = "0x47721D0")]
	public static uint4x3 operator &(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023FD")]
	[Address(RVA = "0x4772200", Offset = "0x4772200", VA = "0x4772200")]
	public static uint4x3 operator &(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023FE")]
	[Address(RVA = "0x4772290", Offset = "0x4772290", VA = "0x4772290")]
	public static uint4x3 operator &(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60023FF")]
	[Address(RVA = "0x4772320", Offset = "0x4772320", VA = "0x4772320")]
	public static uint4x3 operator |(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002400")]
	[Address(RVA = "0x4772350", Offset = "0x4772350", VA = "0x4772350")]
	public static uint4x3 operator |(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002401")]
	[Address(RVA = "0x47723E0", Offset = "0x47723E0", VA = "0x47723E0")]
	public static uint4x3 operator |(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002402")]
	[Address(RVA = "0x4772470", Offset = "0x4772470", VA = "0x4772470")]
	public static uint4x3 operator ^(uint4x3 lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002403")]
	[Address(RVA = "0x47724A0", Offset = "0x47724A0", VA = "0x47724A0")]
	public static uint4x3 operator ^(uint4x3 lhs, uint rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002404")]
	[Address(RVA = "0x4772530", Offset = "0x4772530", VA = "0x4772530")]
	public static uint4x3 operator ^(uint lhs, uint4x3 rhs)
	{
		return default(uint4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002406")]
	[Address(RVA = "0x47725D0", Offset = "0x47725D0", VA = "0x47725D0", Slot = "4")]
	public bool Equals(uint4x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6002407")]
	[Address(RVA = "0x4772650", Offset = "0x4772650", VA = "0x4772650", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002408")]
	[Address(RVA = "0x4772730", Offset = "0x4772730", VA = "0x4772730", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002409")]
	[Address(RVA = "0x4772840", Offset = "0x4772840", VA = "0x4772840", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600240A")]
	[Address(RVA = "0x4772CA0", Offset = "0x4772CA0", VA = "0x4772CA0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
