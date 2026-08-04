// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float4x2
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
[Token(Token = "0x2000034")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float4x2 : IEquatable<float4x2>, IFormattable
{
	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x0")]
	public float4 c0;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x10")]
	public float4 c1;

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float4x2 zero;

	[Token(Token = "0x170005C5")]
	public unsafe ref float4 this[int index]
	{
		[Token(Token = "0x60014F4")]
		[Address(RVA = "0x4AC92E0", Offset = "0x4AC92E0", VA = "0x4AC92E0")]
		get
		{
			return ref *(float4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014BB")]
	[Address(RVA = "0x4AC7820", Offset = "0x4AC7820", VA = "0x4AC7820")]
	public float4x2(float4 c0, float4 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014BC")]
	[Address(RVA = "0x4AC7830", Offset = "0x4AC7830", VA = "0x4AC7830")]
	public float4x2(float m00, float m01, float m10, float m11, float m20, float m21, float m30, float m31)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014BD")]
	[Address(RVA = "0x4AC7860", Offset = "0x4AC7860", VA = "0x4AC7860")]
	public float4x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014BE")]
	[Address(RVA = "0x4AC7870", Offset = "0x4AC7870", VA = "0x4AC7870")]
	public float4x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014BF")]
	[Address(RVA = "0x4AC78A0", Offset = "0x4AC78A0", VA = "0x4AC78A0")]
	public float4x2(bool4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014C0")]
	[Address(RVA = "0x4AC7970", Offset = "0x4AC7970", VA = "0x4AC7970")]
	public float4x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014C1")]
	[Address(RVA = "0x4AC7980", Offset = "0x4AC7980", VA = "0x4AC7980")]
	public float4x2(int4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014C2")]
	[Address(RVA = "0x4AC79F0", Offset = "0x4AC79F0", VA = "0x4AC79F0")]
	public float4x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014C3")]
	[Address(RVA = "0x4AC7A10", Offset = "0x4AC7A10", VA = "0x4AC7A10")]
	public float4x2(uint4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014C4")]
	[Address(RVA = "0x4AC7AB0", Offset = "0x4AC7AB0", VA = "0x4AC7AB0")]
	public float4x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014C5")]
	[Address(RVA = "0x4AC7AC0", Offset = "0x4AC7AC0", VA = "0x4AC7AC0")]
	public float4x2(double4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014C6")]
	[Address(RVA = "0x4AC7AF0", Offset = "0x4AC7AF0", VA = "0x4AC7AF0")]
	public static implicit operator float4x2(float v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014C7")]
	[Address(RVA = "0x4AC7B00", Offset = "0x4AC7B00", VA = "0x4AC7B00")]
	public static explicit operator float4x2(bool v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014C8")]
	[Address(RVA = "0x4AC7B30", Offset = "0x4AC7B30", VA = "0x4AC7B30")]
	public static explicit operator float4x2(bool4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014C9")]
	[Address(RVA = "0x4AC7C10", Offset = "0x4AC7C10", VA = "0x4AC7C10")]
	public static implicit operator float4x2(int v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014CA")]
	[Address(RVA = "0x4AC7C30", Offset = "0x4AC7C30", VA = "0x4AC7C30")]
	public static implicit operator float4x2(int4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014CB")]
	[Address(RVA = "0x4AC7CA0", Offset = "0x4AC7CA0", VA = "0x4AC7CA0")]
	public static implicit operator float4x2(uint v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014CC")]
	[Address(RVA = "0x4AC7CC0", Offset = "0x4AC7CC0", VA = "0x4AC7CC0")]
	public static implicit operator float4x2(uint4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014CD")]
	[Address(RVA = "0x4AC7D60", Offset = "0x4AC7D60", VA = "0x4AC7D60")]
	public static explicit operator float4x2(double v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014CE")]
	[Address(RVA = "0x4AC7D80", Offset = "0x4AC7D80", VA = "0x4AC7D80")]
	public static explicit operator float4x2(double4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014CF")]
	[Address(RVA = "0x4AC7DB0", Offset = "0x4AC7DB0", VA = "0x4AC7DB0")]
	public static float4x2 operator *(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014D0")]
	[Address(RVA = "0x4AC7E00", Offset = "0x4AC7E00", VA = "0x4AC7E00")]
	public static float4x2 operator *(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014D1")]
	[Address(RVA = "0x4AC7E40", Offset = "0x4AC7E40", VA = "0x4AC7E40")]
	public static float4x2 operator *(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014D2")]
	[Address(RVA = "0x4AC7E80", Offset = "0x4AC7E80", VA = "0x4AC7E80")]
	public static float4x2 operator +(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014D3")]
	[Address(RVA = "0x4AC7ED0", Offset = "0x4AC7ED0", VA = "0x4AC7ED0")]
	public static float4x2 operator +(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014D4")]
	[Address(RVA = "0x4AC7F10", Offset = "0x4AC7F10", VA = "0x4AC7F10")]
	public static float4x2 operator +(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014D5")]
	[Address(RVA = "0x4AC7F50", Offset = "0x4AC7F50", VA = "0x4AC7F50")]
	public static float4x2 operator -(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014D6")]
	[Address(RVA = "0x4AC7FA0", Offset = "0x4AC7FA0", VA = "0x4AC7FA0")]
	public static float4x2 operator -(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014D7")]
	[Address(RVA = "0x4AC7FE0", Offset = "0x4AC7FE0", VA = "0x4AC7FE0")]
	public static float4x2 operator -(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014D8")]
	[Address(RVA = "0x4AC8030", Offset = "0x4AC8030", VA = "0x4AC8030")]
	public static float4x2 operator /(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014D9")]
	[Address(RVA = "0x4AC8080", Offset = "0x4AC8080", VA = "0x4AC8080")]
	public static float4x2 operator /(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014DA")]
	[Address(RVA = "0x4AC80C0", Offset = "0x4AC80C0", VA = "0x4AC80C0")]
	public static float4x2 operator /(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014DB")]
	[Address(RVA = "0x4AC8110", Offset = "0x4AC8110", VA = "0x4AC8110")]
	public static float4x2 operator %(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014DC")]
	[Address(RVA = "0x4AC82A0", Offset = "0x4AC82A0", VA = "0x4AC82A0")]
	public static float4x2 operator %(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014DD")]
	[Address(RVA = "0x4AC83E0", Offset = "0x4AC83E0", VA = "0x4AC83E0")]
	public static float4x2 operator %(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014DE")]
	[Address(RVA = "0x4AC8520", Offset = "0x4AC8520", VA = "0x4AC8520")]
	public static float4x2 operator ++(float4x2 val)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014DF")]
	[Address(RVA = "0x4AC8570", Offset = "0x4AC8570", VA = "0x4AC8570")]
	public static float4x2 operator --(float4x2 val)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014E0")]
	[Address(RVA = "0x4AC85C0", Offset = "0x4AC85C0", VA = "0x4AC85C0")]
	public static bool4x2 operator <(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014E1")]
	[Address(RVA = "0x4AC8680", Offset = "0x4AC8680", VA = "0x4AC8680")]
	public static bool4x2 operator <(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014E2")]
	[Address(RVA = "0x4AC8720", Offset = "0x4AC8720", VA = "0x4AC8720")]
	public static bool4x2 operator <(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014E3")]
	[Address(RVA = "0x4AC87D0", Offset = "0x4AC87D0", VA = "0x4AC87D0")]
	public static bool4x2 operator <=(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014E4")]
	[Address(RVA = "0x4AC8890", Offset = "0x4AC8890", VA = "0x4AC8890")]
	public static bool4x2 operator <=(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014E5")]
	[Address(RVA = "0x4AC8930", Offset = "0x4AC8930", VA = "0x4AC8930")]
	public static bool4x2 operator <=(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014E6")]
	[Address(RVA = "0x4AC89E0", Offset = "0x4AC89E0", VA = "0x4AC89E0")]
	public static bool4x2 operator >(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014E7")]
	[Address(RVA = "0x4AC8AA0", Offset = "0x4AC8AA0", VA = "0x4AC8AA0")]
	public static bool4x2 operator >(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014E8")]
	[Address(RVA = "0x4AC8B50", Offset = "0x4AC8B50", VA = "0x4AC8B50")]
	public static bool4x2 operator >(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014E9")]
	[Address(RVA = "0x4AC8BF0", Offset = "0x4AC8BF0", VA = "0x4AC8BF0")]
	public static bool4x2 operator >=(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014EA")]
	[Address(RVA = "0x4AC8CB0", Offset = "0x4AC8CB0", VA = "0x4AC8CB0")]
	public static bool4x2 operator >=(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014EB")]
	[Address(RVA = "0x4AC8D60", Offset = "0x4AC8D60", VA = "0x4AC8D60")]
	public static bool4x2 operator >=(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014EC")]
	[Address(RVA = "0x4AC8E00", Offset = "0x4AC8E00", VA = "0x4AC8E00")]
	public static float4x2 operator -(float4x2 val)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014ED")]
	[Address(RVA = "0x4AC8E40", Offset = "0x4AC8E40", VA = "0x4AC8E40")]
	public static float4x2 operator +(float4x2 val)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014EE")]
	[Address(RVA = "0x4AC8E60", Offset = "0x4AC8E60", VA = "0x4AC8E60")]
	public static bool4x2 operator ==(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014EF")]
	[Address(RVA = "0x4AC8F60", Offset = "0x4AC8F60", VA = "0x4AC8F60")]
	public static bool4x2 operator ==(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F0")]
	[Address(RVA = "0x4AC9000", Offset = "0x4AC9000", VA = "0x4AC9000")]
	public static bool4x2 operator ==(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F1")]
	[Address(RVA = "0x4AC90A0", Offset = "0x4AC90A0", VA = "0x4AC90A0")]
	public static bool4x2 operator !=(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F2")]
	[Address(RVA = "0x4AC91A0", Offset = "0x4AC91A0", VA = "0x4AC91A0")]
	public static bool4x2 operator !=(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F3")]
	[Address(RVA = "0x4AC9240", Offset = "0x4AC9240", VA = "0x4AC9240")]
	public static bool4x2 operator !=(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F5")]
	[Address(RVA = "0x4AC92F0", Offset = "0x4AC92F0", VA = "0x4AC92F0", Slot = "4")]
	public bool Equals(float4x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60014F6")]
	[Address(RVA = "0x4AC9380", Offset = "0x4AC9380", VA = "0x4AC9380", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F7")]
	[Address(RVA = "0x4AC9470", Offset = "0x4AC9470", VA = "0x4AC9470", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F8")]
	[Address(RVA = "0x4AC9560", Offset = "0x4AC9560", VA = "0x4AC9560", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014F9")]
	[Address(RVA = "0x4AC9880", Offset = "0x4AC9880", VA = "0x4AC9880", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
