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
		[Address(RVA = "0x841B00", Offset = "0x840100", VA = "0x180841B00")]
		get
		{
			return ref *(float4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156D")]
	[Address(RVA = "0x1046230", Offset = "0x1044830", VA = "0x181046230")]
	public float4x3(float4 c0, float4 c1, float4 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156E")]
	[Address(RVA = "0x2A8C1F0", Offset = "0x2A8A7F0", VA = "0x182A8C1F0")]
	public float4x3(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22, float m30, float m31, float m32)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156F")]
	[Address(RVA = "0x2A82840", Offset = "0x2A80E40", VA = "0x182A82840")]
	public float4x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001570")]
	[Address(RVA = "0x2A8C150", Offset = "0x2A8A750", VA = "0x182A8C150")]
	public float4x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001571")]
	[Address(RVA = "0x29C7DC0", Offset = "0x29C63C0", VA = "0x1829C7DC0")]
	public float4x3(bool4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001572")]
	[Address(RVA = "0x2A8C1C0", Offset = "0x2A8A7C0", VA = "0x182A8C1C0")]
	public float4x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001573")]
	[Address(RVA = "0x2A8C190", Offset = "0x2A8A790", VA = "0x182A8C190")]
	public float4x3(int4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001574")]
	[Address(RVA = "0x29C7FC0", Offset = "0x29C65C0", VA = "0x1829C7FC0")]
	public float4x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001575")]
	[Address(RVA = "0x29C7ED0", Offset = "0x29C64D0", VA = "0x1829C7ED0")]
	public float4x3(uint4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001576")]
	[Address(RVA = "0x2A8C0B0", Offset = "0x2A8A6B0", VA = "0x182A8C0B0")]
	public float4x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001577")]
	[Address(RVA = "0x2A82970", Offset = "0x2A80F70", VA = "0x182A82970")]
	public float4x3(double4x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001578")]
	[Address(RVA = "0x29E1260", Offset = "0x29DF860", VA = "0x1829E1260")]
	public static implicit operator float4x3(float v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001579")]
	[Address(RVA = "0x29E22C0", Offset = "0x29E08C0", VA = "0x1829E22C0")]
	public static explicit operator float4x3(bool v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157A")]
	[Address(RVA = "0x29E20C0", Offset = "0x29E06C0", VA = "0x1829E20C0")]
	public static explicit operator float4x3(bool4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157B")]
	[Address(RVA = "0x29E2310", Offset = "0x29E0910", VA = "0x1829E2310")]
	public static implicit operator float4x3(int v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157C")]
	[Address(RVA = "0x29E2360", Offset = "0x29E0960", VA = "0x1829E2360")]
	public static implicit operator float4x3(int4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157D")]
	[Address(RVA = "0x2A8CEE0", Offset = "0x2A8B4E0", VA = "0x182A8CEE0")]
	public static implicit operator float4x3(uint v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157E")]
	[Address(RVA = "0x29E2100", Offset = "0x29E0700", VA = "0x1829E2100")]
	public static implicit operator float4x3(uint4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600157F")]
	[Address(RVA = "0x29E1F30", Offset = "0x29E0530", VA = "0x1829E1F30")]
	public static explicit operator float4x3(double v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001580")]
	[Address(RVA = "0x29E1E60", Offset = "0x29E0460", VA = "0x1829E1E60")]
	public static explicit operator float4x3(double4x3 v)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001581")]
	[Address(RVA = "0x2A8DC70", Offset = "0x2A8C270", VA = "0x182A8DC70")]
	public static float4x3 operator *(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001582")]
	[Address(RVA = "0x2A8DD60", Offset = "0x2A8C360", VA = "0x182A8DD60")]
	public static float4x3 operator *(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001583")]
	[Address(RVA = "0x2A8DBD0", Offset = "0x2A8C1D0", VA = "0x182A8DBD0")]
	public static float4x3 operator *(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001584")]
	[Address(RVA = "0x2A8C310", Offset = "0x2A8A910", VA = "0x182A8C310")]
	public static float4x3 operator +(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001585")]
	[Address(RVA = "0x2A8C400", Offset = "0x2A8AA00", VA = "0x182A8C400")]
	public static float4x3 operator +(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001586")]
	[Address(RVA = "0x2A8C270", Offset = "0x2A8A870", VA = "0x182A8C270")]
	public static float4x3 operator +(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001587")]
	[Address(RVA = "0x2A8DE00", Offset = "0x2A8C400", VA = "0x182A8DE00")]
	public static float4x3 operator -(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001588")]
	[Address(RVA = "0x2A8DEF0", Offset = "0x2A8C4F0", VA = "0x182A8DEF0")]
	public static float4x3 operator -(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001589")]
	[Address(RVA = "0x2A8DF30", Offset = "0x2A8C530", VA = "0x182A8DF30")]
	public static float4x3 operator -(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158A")]
	[Address(RVA = "0x2A8C500", Offset = "0x2A8AB00", VA = "0x182A8C500")]
	public static float4x3 operator /(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158B")]
	[Address(RVA = "0x2A8C5F0", Offset = "0x2A8ABF0", VA = "0x182A8C5F0")]
	public static float4x3 operator /(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158C")]
	[Address(RVA = "0x2A8C630", Offset = "0x2A8AC30", VA = "0x182A8C630")]
	public static float4x3 operator /(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158D")]
	[Address(RVA = "0x2A8DA50", Offset = "0x2A8C050", VA = "0x182A8DA50")]
	public static float4x3 operator %(float4x3 lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158E")]
	[Address(RVA = "0x2A8D8E0", Offset = "0x2A8BEE0", VA = "0x182A8D8E0")]
	public static float4x3 operator %(float4x3 lhs, float rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600158F")]
	[Address(RVA = "0x2A8D770", Offset = "0x2A8BD70", VA = "0x182A8D770")]
	public static float4x3 operator %(float lhs, float4x3 rhs)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001590")]
	[Address(RVA = "0x2A8CF10", Offset = "0x2A8B510", VA = "0x182A8CF10")]
	public static float4x3 operator ++(float4x3 val)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001591")]
	[Address(RVA = "0x2A8C4A0", Offset = "0x2A8AAA0", VA = "0x182A8C4A0")]
	public static float4x3 operator --(float4x3 val)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001592")]
	[Address(RVA = "0x2A8D540", Offset = "0x2A8BB40", VA = "0x182A8D540")]
	public static bool4x3 operator <(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001593")]
	[Address(RVA = "0x2A8D6E0", Offset = "0x2A8BCE0", VA = "0x182A8D6E0")]
	public static bool4x3 operator <(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001594")]
	[Address(RVA = "0x2A8D610", Offset = "0x2A8BC10", VA = "0x182A8D610")]
	public static bool4x3 operator <(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001595")]
	[Address(RVA = "0x2A8D310", Offset = "0x2A8B910", VA = "0x182A8D310")]
	public static bool4x3 operator <=(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001596")]
	[Address(RVA = "0x2A8D3E0", Offset = "0x2A8B9E0", VA = "0x182A8D3E0")]
	public static bool4x3 operator <=(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001597")]
	[Address(RVA = "0x2A8D470", Offset = "0x2A8BA70", VA = "0x182A8D470")]
	public static bool4x3 operator <=(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001598")]
	[Address(RVA = "0x2A8CD80", Offset = "0x2A8B380", VA = "0x182A8CD80")]
	public static bool4x3 operator >(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001599")]
	[Address(RVA = "0x2A8CCC0", Offset = "0x2A8B2C0", VA = "0x182A8CCC0")]
	public static bool4x3 operator >(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600159A")]
	[Address(RVA = "0x2A8CE50", Offset = "0x2A8B450", VA = "0x182A8CE50")]
	public static bool4x3 operator >(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600159B")]
	[Address(RVA = "0x2A8CAA0", Offset = "0x2A8B0A0", VA = "0x182A8CAA0")]
	public static bool4x3 operator >=(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600159C")]
	[Address(RVA = "0x2A8CC00", Offset = "0x2A8B200", VA = "0x182A8CC00")]
	public static bool4x3 operator >=(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600159D")]
	[Address(RVA = "0x2A8CB70", Offset = "0x2A8B170", VA = "0x182A8CB70")]
	public static bool4x3 operator >=(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600159E")]
	[Address(RVA = "0x2A8E000", Offset = "0x2A8C600", VA = "0x182A8E000")]
	public static float4x3 operator -(float4x3 val)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600159F")]
	[Address(RVA = "0x2A8E040", Offset = "0x2A8C640", VA = "0x182A8E040")]
	public static float4x3 operator +(float4x3 val)
	{
		return default(float4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A0")]
	[Address(RVA = "0x2A8C810", Offset = "0x2A8AE10", VA = "0x182A8C810")]
	public static bool4x3 operator ==(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A1")]
	[Address(RVA = "0x2A8C960", Offset = "0x2A8AF60", VA = "0x182A8C960")]
	public static bool4x3 operator ==(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A2")]
	[Address(RVA = "0x2A8C700", Offset = "0x2A8AD00", VA = "0x182A8C700")]
	public static bool4x3 operator ==(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A3")]
	[Address(RVA = "0x2A8D0B0", Offset = "0x2A8B6B0", VA = "0x182A8D0B0")]
	public static bool4x3 operator !=(float4x3 lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A4")]
	[Address(RVA = "0x2A8CF70", Offset = "0x2A8B570", VA = "0x182A8CF70")]
	public static bool4x3 operator !=(float4x3 lhs, float rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A5")]
	[Address(RVA = "0x2A8D200", Offset = "0x2A8B800", VA = "0x182A8D200")]
	public static bool4x3 operator !=(float lhs, float4x3 rhs)
	{
		return default(bool4x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A7")]
	[Address(RVA = "0x2A75B20", Offset = "0x2A74120", VA = "0x182A75B20", Slot = "4")]
	public bool Equals(float4x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A8")]
	[Address(RVA = "0x2A8B520", Offset = "0x2A89B20", VA = "0x182A8B520", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015A9")]
	[Address(RVA = "0x2A8B5D0", Offset = "0x2A89BD0", VA = "0x182A8B5D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AA")]
	[Address(RVA = "0x2A8BB70", Offset = "0x2A8A170", VA = "0x182A8BB70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015AB")]
	[Address(RVA = "0x2A8B6A0", Offset = "0x2A89CA0", VA = "0x182A8B6A0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
