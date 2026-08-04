// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.uint2x4
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
[Token(Token = "0x2000057")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint2x4 : IEquatable<uint2x4>, IFormattable
{
	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x0")]
	public uint2 c0;

	[Token(Token = "0x400013D")]
	[FieldOffset(Offset = "0x8")]
	public uint2 c1;

	[Token(Token = "0x400013E")]
	[FieldOffset(Offset = "0x10")]
	public uint2 c2;

	[Token(Token = "0x400013F")]
	[FieldOffset(Offset = "0x18")]
	public uint2 c3;

	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint2x4 zero;

	[Token(Token = "0x170009BC")]
	public unsafe ref uint2 this[int index]
	{
		[Token(Token = "0x6001FDE")]
		[Address(RVA = "0x4B286D0", Offset = "0x4B286D0", VA = "0x4B286D0")]
		get
		{
			return ref *(uint2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F99")]
	[Address(RVA = "0x4B265F0", Offset = "0x4B265F0", VA = "0x4B265F0")]
	public uint2x4(uint2 c0, uint2 c1, uint2 c2, uint2 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9A")]
	[Address(RVA = "0x4B26600", Offset = "0x4B26600", VA = "0x4B26600")]
	public uint2x4(uint m00, uint m01, uint m02, uint m03, uint m10, uint m11, uint m12, uint m13)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9B")]
	[Address(RVA = "0x4B26650", Offset = "0x4B26650", VA = "0x4B26650")]
	public uint2x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9C")]
	[Address(RVA = "0x4B26670", Offset = "0x4B26670", VA = "0x4B26670")]
	public uint2x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9D")]
	[Address(RVA = "0x4B266A0", Offset = "0x4B266A0", VA = "0x4B266A0")]
	public uint2x4(bool2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9E")]
	[Address(RVA = "0x4B26710", Offset = "0x4B26710", VA = "0x4B26710")]
	public uint2x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F9F")]
	[Address(RVA = "0x4B26730", Offset = "0x4B26730", VA = "0x4B26730")]
	public uint2x4(int2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA0")]
	[Address(RVA = "0x4B26750", Offset = "0x4B26750", VA = "0x4B26750")]
	public uint2x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA1")]
	[Address(RVA = "0x4B26780", Offset = "0x4B26780", VA = "0x4B26780")]
	public uint2x4(float2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA2")]
	[Address(RVA = "0x4B26850", Offset = "0x4B26850", VA = "0x4B26850")]
	public uint2x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA3")]
	[Address(RVA = "0x4B26880", Offset = "0x4B26880", VA = "0x4B26880")]
	public uint2x4(double2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA4")]
	[Address(RVA = "0x4B26960", Offset = "0x4B26960", VA = "0x4B26960")]
	public static implicit operator uint2x4(uint v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA5")]
	[Address(RVA = "0x4B26980", Offset = "0x4B26980", VA = "0x4B26980")]
	public static explicit operator uint2x4(bool v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA6")]
	[Address(RVA = "0x4B269B0", Offset = "0x4B269B0", VA = "0x4B269B0")]
	public static explicit operator uint2x4(bool2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA7")]
	[Address(RVA = "0x4B26A30", Offset = "0x4B26A30", VA = "0x4B26A30")]
	public static explicit operator uint2x4(int v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA8")]
	[Address(RVA = "0x4B26A50", Offset = "0x4B26A50", VA = "0x4B26A50")]
	public static explicit operator uint2x4(int2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FA9")]
	[Address(RVA = "0x4B26A70", Offset = "0x4B26A70", VA = "0x4B26A70")]
	public static explicit operator uint2x4(float v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAA")]
	[Address(RVA = "0x4B26AA0", Offset = "0x4B26AA0", VA = "0x4B26AA0")]
	public static explicit operator uint2x4(float2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAB")]
	[Address(RVA = "0x4B26B80", Offset = "0x4B26B80", VA = "0x4B26B80")]
	public static explicit operator uint2x4(double v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAC")]
	[Address(RVA = "0x4B26BB0", Offset = "0x4B26BB0", VA = "0x4B26BB0")]
	public static explicit operator uint2x4(double2x4 v)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAD")]
	[Address(RVA = "0x4B26CA0", Offset = "0x4B26CA0", VA = "0x4B26CA0")]
	public static uint2x4 operator *(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAE")]
	[Address(RVA = "0x4B26D40", Offset = "0x4B26D40", VA = "0x4B26D40")]
	public static uint2x4 operator *(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FAF")]
	[Address(RVA = "0x4B26DC0", Offset = "0x4B26DC0", VA = "0x4B26DC0")]
	public static uint2x4 operator *(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB0")]
	[Address(RVA = "0x4B26E40", Offset = "0x4B26E40", VA = "0x4B26E40")]
	public static uint2x4 operator +(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB1")]
	[Address(RVA = "0x4B26EB0", Offset = "0x4B26EB0", VA = "0x4B26EB0")]
	public static uint2x4 operator +(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB2")]
	[Address(RVA = "0x4B26F20", Offset = "0x4B26F20", VA = "0x4B26F20")]
	public static uint2x4 operator +(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB3")]
	[Address(RVA = "0x4B26F90", Offset = "0x4B26F90", VA = "0x4B26F90")]
	public static uint2x4 operator -(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB4")]
	[Address(RVA = "0x4B27000", Offset = "0x4B27000", VA = "0x4B27000")]
	public static uint2x4 operator -(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB5")]
	[Address(RVA = "0x4B27070", Offset = "0x4B27070", VA = "0x4B27070")]
	public static uint2x4 operator -(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB6")]
	[Address(RVA = "0x4B270E0", Offset = "0x4B270E0", VA = "0x4B270E0")]
	public static uint2x4 operator /(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB7")]
	[Address(RVA = "0x4B271A0", Offset = "0x4B271A0", VA = "0x4B271A0")]
	public static uint2x4 operator /(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB8")]
	[Address(RVA = "0x4B27240", Offset = "0x4B27240", VA = "0x4B27240")]
	public static uint2x4 operator /(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FB9")]
	[Address(RVA = "0x4B272E0", Offset = "0x4B272E0", VA = "0x4B272E0")]
	public static uint2x4 operator %(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBA")]
	[Address(RVA = "0x4B273A0", Offset = "0x4B273A0", VA = "0x4B273A0")]
	public static uint2x4 operator %(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBB")]
	[Address(RVA = "0x4B27440", Offset = "0x4B27440", VA = "0x4B27440")]
	public static uint2x4 operator %(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBC")]
	[Address(RVA = "0x4B274E0", Offset = "0x4B274E0", VA = "0x4B274E0")]
	public static uint2x4 operator ++(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBD")]
	[Address(RVA = "0x4B27550", Offset = "0x4B27550", VA = "0x4B27550")]
	public static uint2x4 operator --(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBE")]
	[Address(RVA = "0x4B275C0", Offset = "0x4B275C0", VA = "0x4B275C0")]
	public static bool2x4 operator <(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FBF")]
	[Address(RVA = "0x4B27690", Offset = "0x4B27690", VA = "0x4B27690")]
	public static bool2x4 operator <(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC0")]
	[Address(RVA = "0x4B27730", Offset = "0x4B27730", VA = "0x4B27730")]
	public static bool2x4 operator <(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC1")]
	[Address(RVA = "0x4B277D0", Offset = "0x4B277D0", VA = "0x4B277D0")]
	public static bool2x4 operator <=(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC2")]
	[Address(RVA = "0x4B278A0", Offset = "0x4B278A0", VA = "0x4B278A0")]
	public static bool2x4 operator <=(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC3")]
	[Address(RVA = "0x4B27940", Offset = "0x4B27940", VA = "0x4B27940")]
	public static bool2x4 operator <=(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC4")]
	[Address(RVA = "0x4B279E0", Offset = "0x4B279E0", VA = "0x4B279E0")]
	public static bool2x4 operator >(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC5")]
	[Address(RVA = "0x4B27AB0", Offset = "0x4B27AB0", VA = "0x4B27AB0")]
	public static bool2x4 operator >(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC6")]
	[Address(RVA = "0x4B27B50", Offset = "0x4B27B50", VA = "0x4B27B50")]
	public static bool2x4 operator >(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC7")]
	[Address(RVA = "0x4B27BF0", Offset = "0x4B27BF0", VA = "0x4B27BF0")]
	public static bool2x4 operator >=(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC8")]
	[Address(RVA = "0x4B27CC0", Offset = "0x4B27CC0", VA = "0x4B27CC0")]
	public static bool2x4 operator >=(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FC9")]
	[Address(RVA = "0x4B27D60", Offset = "0x4B27D60", VA = "0x4B27D60")]
	public static bool2x4 operator >=(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCA")]
	[Address(RVA = "0x4B27E00", Offset = "0x4B27E00", VA = "0x4B27E00")]
	public static uint2x4 operator -(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCB")]
	[Address(RVA = "0x4B27E60", Offset = "0x4B27E60", VA = "0x4B27E60")]
	public static uint2x4 operator +(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCC")]
	[Address(RVA = "0x4B27E80", Offset = "0x4B27E80", VA = "0x4B27E80")]
	public static uint2x4 operator <<(uint2x4 x, int n)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCD")]
	[Address(RVA = "0x4B27F00", Offset = "0x4B27F00", VA = "0x4B27F00")]
	public static uint2x4 operator >>(uint2x4 x, int n)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCE")]
	[Address(RVA = "0x4B27F80", Offset = "0x4B27F80", VA = "0x4B27F80")]
	public static bool2x4 operator ==(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FCF")]
	[Address(RVA = "0x4B28050", Offset = "0x4B28050", VA = "0x4B28050")]
	public static bool2x4 operator ==(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD0")]
	[Address(RVA = "0x4B280F0", Offset = "0x4B280F0", VA = "0x4B280F0")]
	public static bool2x4 operator ==(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD1")]
	[Address(RVA = "0x4B28190", Offset = "0x4B28190", VA = "0x4B28190")]
	public static bool2x4 operator !=(uint2x4 lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD2")]
	[Address(RVA = "0x4B28260", Offset = "0x4B28260", VA = "0x4B28260")]
	public static bool2x4 operator !=(uint2x4 lhs, uint rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD3")]
	[Address(RVA = "0x4B28300", Offset = "0x4B28300", VA = "0x4B28300")]
	public static bool2x4 operator !=(uint lhs, uint2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD4")]
	[Address(RVA = "0x4B283A0", Offset = "0x4B283A0", VA = "0x4B283A0")]
	public static uint2x4 operator ~(uint2x4 val)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD5")]
	[Address(RVA = "0x4B283D0", Offset = "0x4B283D0", VA = "0x4B283D0")]
	public static uint2x4 operator &(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD6")]
	[Address(RVA = "0x4B283F0", Offset = "0x4B283F0", VA = "0x4B283F0")]
	public static uint2x4 operator &(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD7")]
	[Address(RVA = "0x4B28460", Offset = "0x4B28460", VA = "0x4B28460")]
	public static uint2x4 operator &(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD8")]
	[Address(RVA = "0x4B284D0", Offset = "0x4B284D0", VA = "0x4B284D0")]
	public static uint2x4 operator |(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FD9")]
	[Address(RVA = "0x4B284F0", Offset = "0x4B284F0", VA = "0x4B284F0")]
	public static uint2x4 operator |(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDA")]
	[Address(RVA = "0x4B28560", Offset = "0x4B28560", VA = "0x4B28560")]
	public static uint2x4 operator |(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDB")]
	[Address(RVA = "0x4B285D0", Offset = "0x4B285D0", VA = "0x4B285D0")]
	public static uint2x4 operator ^(uint2x4 lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDC")]
	[Address(RVA = "0x4B285F0", Offset = "0x4B285F0", VA = "0x4B285F0")]
	public static uint2x4 operator ^(uint2x4 lhs, uint rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDD")]
	[Address(RVA = "0x4B28660", Offset = "0x4B28660", VA = "0x4B28660")]
	public static uint2x4 operator ^(uint lhs, uint2x4 rhs)
	{
		return default(uint2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FDF")]
	[Address(RVA = "0x4B286E0", Offset = "0x4B286E0", VA = "0x4B286E0", Slot = "4")]
	public bool Equals(uint2x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FE0")]
	[Address(RVA = "0x4B28740", Offset = "0x4B28740", VA = "0x4B28740", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE1")]
	[Address(RVA = "0x4B287F0", Offset = "0x4B287F0", VA = "0x4B287F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE2")]
	[Address(RVA = "0x4B288A0", Offset = "0x4B288A0", VA = "0x4B288A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001FE3")]
	[Address(RVA = "0x4B28BC0", Offset = "0x4B28BC0", VA = "0x4B28BC0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
