// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float4x3
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
[Token(Token = "0x2000036")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float4x3 : IEquatable<float4x3>, IFormattable
{
	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x0")]
	public float4 c0;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x10")]
	public float4 c1;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x20")]
	public float4 c2;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float4x3 zero;

	[Token(Token = "0x170005C6")]
	public unsafe ref float4 this[int index]
	{
		[Token(Token = "0x60015A6")]
		[Address(RVA = "0x6460880", Offset = "0x645F880", VA = "0x6460880")]
		get
		{
			return ref *(float4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156D")]
	[Address(RVA = "0x645E2B0", Offset = "0x645D2B0", VA = "0x645E2B0")]
	public float4x3(float4 c0, float4 c1, float4 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156E")]
	[Address(RVA = "0x645E2D0", Offset = "0x645D2D0", VA = "0x645E2D0")]
	public float4x3(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22, float m30, float m31, float m32)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156F")]
	[Address(RVA = "0x645E330", Offset = "0x645D330", VA = "0x645E330")]
	public float4x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001570")]
	[Address(RVA = "0x645E340", Offset = "0x645D340", VA = "0x645E340")]
	public float4x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001571")]
	[Address(RVA = "0x645E360", Offset = "0x645D360", VA = "0x645E360")]
	public float4x3(bool4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001572")]
	[Address(RVA = "0x645E410", Offset = "0x645D410", VA = "0x645E410")]
	public float4x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001573")]
	[Address(RVA = "0x645E430", Offset = "0x645D430", VA = "0x645E430")]
	public float4x3(int4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001574")]
	[Address(RVA = "0x645E4E0", Offset = "0x645D4E0", VA = "0x645E4E0")]
	public float4x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001575")]
	[Address(RVA = "0x645E500", Offset = "0x645D500", VA = "0x645E500")]
	public float4x3(uint4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001576")]
	[Address(RVA = "0x645E5C0", Offset = "0x645D5C0", VA = "0x645E5C0")]
	public float4x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001577")]
	[Address(RVA = "0x645E5E0", Offset = "0x645D5E0", VA = "0x645E5E0")]
	public float4x3(double4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001578")]
	[Address(RVA = "0x645E620", Offset = "0x645D620", VA = "0x645E620")]
	public static implicit operator float4x3(float v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001579")]
	[Address(RVA = "0x645E640", Offset = "0x645D640", VA = "0x645E640")]
	public static explicit operator float4x3(bool v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157A")]
	[Address(RVA = "0x645E670", Offset = "0x645D670", VA = "0x645E670")]
	public static explicit operator float4x3(bool4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157B")]
	[Address(RVA = "0x645E720", Offset = "0x645D720", VA = "0x645E720")]
	public static implicit operator float4x3(int v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157C")]
	[Address(RVA = "0x645E740", Offset = "0x645D740", VA = "0x645E740")]
	public static implicit operator float4x3(int4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157D")]
	[Address(RVA = "0x645E7F0", Offset = "0x645D7F0", VA = "0x645E7F0")]
	public static implicit operator float4x3(uint v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157E")]
	[Address(RVA = "0x645E810", Offset = "0x645D810", VA = "0x645E810")]
	public static implicit operator float4x3(uint4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157F")]
	[Address(RVA = "0x645E8E0", Offset = "0x645D8E0", VA = "0x645E8E0")]
	public static explicit operator float4x3(double v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001580")]
	[Address(RVA = "0x645E900", Offset = "0x645D900", VA = "0x645E900")]
	public static explicit operator float4x3(double4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001581")]
	[Address(RVA = "0x645E950", Offset = "0x645D950", VA = "0x645E950")]
	public static float4x3 operator *(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001582")]
	[Address(RVA = "0x645E9D0", Offset = "0x645D9D0", VA = "0x645E9D0")]
	public static float4x3 operator *(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001583")]
	[Address(RVA = "0x645EA30", Offset = "0x645DA30", VA = "0x645EA30")]
	public static float4x3 operator *(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001584")]
	[Address(RVA = "0x645EA90", Offset = "0x645DA90", VA = "0x645EA90")]
	public static float4x3 operator +(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001585")]
	[Address(RVA = "0x645EB10", Offset = "0x645DB10", VA = "0x645EB10")]
	public static float4x3 operator +(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001586")]
	[Address(RVA = "0x645EB70", Offset = "0x645DB70", VA = "0x645EB70")]
	public static float4x3 operator +(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001587")]
	[Address(RVA = "0x645EBD0", Offset = "0x645DBD0", VA = "0x645EBD0")]
	public static float4x3 operator -(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001588")]
	[Address(RVA = "0x645EC50", Offset = "0x645DC50", VA = "0x645EC50")]
	public static float4x3 operator -(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001589")]
	[Address(RVA = "0x645ECB0", Offset = "0x645DCB0", VA = "0x645ECB0")]
	public static float4x3 operator -(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158A")]
	[Address(RVA = "0x645ED20", Offset = "0x645DD20", VA = "0x645ED20")]
	public static float4x3 operator /(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158B")]
	[Address(RVA = "0x645EDA0", Offset = "0x645DDA0", VA = "0x645EDA0")]
	public static float4x3 operator /(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158C")]
	[Address(RVA = "0x645EE00", Offset = "0x645DE00", VA = "0x645EE00")]
	public static float4x3 operator /(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158D")]
	[Address(RVA = "0x645EE70", Offset = "0x645DE70", VA = "0x645EE70")]
	public static float4x3 operator %(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158E")]
	[Address(RVA = "0x645F0C0", Offset = "0x645E0C0", VA = "0x645F0C0")]
	public static float4x3 operator %(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158F")]
	[Address(RVA = "0x645F2A0", Offset = "0x645E2A0", VA = "0x645F2A0")]
	public static float4x3 operator %(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001590")]
	[Address(RVA = "0x645F480", Offset = "0x645E480", VA = "0x645F480")]
	public static float4x3 operator ++(float4x3 val)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001591")]
	[Address(RVA = "0x645F4E0", Offset = "0x645E4E0", VA = "0x645F4E0")]
	public static float4x3 operator --(float4x3 val)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001592")]
	[Address(RVA = "0x645F540", Offset = "0x645E540", VA = "0x645F540")]
	public static bool4x3 operator <(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001593")]
	[Address(RVA = "0x645F660", Offset = "0x645E660", VA = "0x645F660")]
	public static bool4x3 operator <(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001594")]
	[Address(RVA = "0x645F750", Offset = "0x645E750", VA = "0x645F750")]
	public static bool4x3 operator <(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001595")]
	[Address(RVA = "0x645F830", Offset = "0x645E830", VA = "0x645F830")]
	public static bool4x3 operator <=(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001596")]
	[Address(RVA = "0x645F950", Offset = "0x645E950", VA = "0x645F950")]
	public static bool4x3 operator <=(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001597")]
	[Address(RVA = "0x645FA40", Offset = "0x645EA40", VA = "0x645FA40")]
	public static bool4x3 operator <=(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001598")]
	[Address(RVA = "0x645FB20", Offset = "0x645EB20", VA = "0x645FB20")]
	public static bool4x3 operator >(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001599")]
	[Address(RVA = "0x645FC40", Offset = "0x645EC40", VA = "0x645FC40")]
	public static bool4x3 operator >(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600159A")]
	[Address(RVA = "0x645FD30", Offset = "0x645ED30", VA = "0x645FD30")]
	public static bool4x3 operator >(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600159B")]
	[Address(RVA = "0x645FE10", Offset = "0x645EE10", VA = "0x645FE10")]
	public static bool4x3 operator >=(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600159C")]
	[Address(RVA = "0x645FF30", Offset = "0x645EF30", VA = "0x645FF30")]
	public static bool4x3 operator >=(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600159D")]
	[Address(RVA = "0x6460020", Offset = "0x645F020", VA = "0x6460020")]
	public static bool4x3 operator >=(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600159E")]
	[Address(RVA = "0x6460100", Offset = "0x645F100", VA = "0x6460100")]
	public static float4x3 operator -(float4x3 val)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600159F")]
	[Address(RVA = "0x6460160", Offset = "0x645F160", VA = "0x6460160")]
	public static float4x3 operator +(float4x3 val)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A0")]
	[Address(RVA = "0x6460180", Offset = "0x645F180", VA = "0x6460180")]
	public static bool4x3 operator ==(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A1")]
	[Address(RVA = "0x64602C0", Offset = "0x645F2C0", VA = "0x64602C0")]
	public static bool4x3 operator ==(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A2")]
	[Address(RVA = "0x64603E0", Offset = "0x645F3E0", VA = "0x64603E0")]
	public static bool4x3 operator ==(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A3")]
	[Address(RVA = "0x6460500", Offset = "0x645F500", VA = "0x6460500")]
	public static bool4x3 operator !=(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A4")]
	[Address(RVA = "0x6460640", Offset = "0x645F640", VA = "0x6460640")]
	public static bool4x3 operator !=(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A5")]
	[Address(RVA = "0x6460760", Offset = "0x645F760", VA = "0x6460760")]
	public static bool4x3 operator !=(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A7")]
	[Address(RVA = "0x6460890", Offset = "0x645F890", VA = "0x6460890", Slot = "4")]
	public bool Equals(float4x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A8")]
	[Address(RVA = "0x6460990", Offset = "0x645F990", VA = "0x6460990", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A9")]
	[Address(RVA = "0x6460AE0", Offset = "0x645FAE0", VA = "0x6460AE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AA")]
	[Address(RVA = "0x6460BB0", Offset = "0x645FBB0", VA = "0x6460BB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AB")]
	[Address(RVA = "0x6461050", Offset = "0x6460050", VA = "0x6461050", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
