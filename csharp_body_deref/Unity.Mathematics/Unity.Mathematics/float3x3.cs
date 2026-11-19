// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float3x3
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
[Token(Token = "0x2000031")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float3x3 : IEquatable<float3x3>, IFormattable
{
	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x0")]
	public float3 c0;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0xC")]
	public float3 c1;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x18")]
	public float3 c2;

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float3x3 identity;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x24")]
	public static readonly float3x3 zero;

	[Token(Token = "0x17000472")]
	public unsafe ref float3 this[int index]
	{
		[Token(Token = "0x60012F5")]
		[Address(RVA = "0x644FAB0", Offset = "0x644EAB0", VA = "0x644FAB0")]
		get
		{
			return ref *(float3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x644D870", Offset = "0x644C870", VA = "0x644D870")]
	public float3x3(float3 c0, float3 c1, float3 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x644D890", Offset = "0x644C890", VA = "0x644D890")]
	public float3x3(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x644D8D0", Offset = "0x644C8D0", VA = "0x644D8D0")]
	public float3x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x644D900", Offset = "0x644C900", VA = "0x644D900")]
	public float3x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x644D940", Offset = "0x644C940", VA = "0x644D940")]
	public float3x3(bool3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x644DA70", Offset = "0x644CA70", VA = "0x644DA70")]
	public float3x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x644DAA0", Offset = "0x644CAA0", VA = "0x644DAA0")]
	public float3x3(int3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x644DB20", Offset = "0x644CB20", VA = "0x644DB20")]
	public float3x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x644DB50", Offset = "0x644CB50", VA = "0x644DB50")]
	public float3x3(uint3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x644DBE0", Offset = "0x644CBE0", VA = "0x644DBE0")]
	public float3x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x644DC10", Offset = "0x644CC10", VA = "0x644DC10")]
	public float3x3(double3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C7")]
	[Address(RVA = "0x644DC70", Offset = "0x644CC70", VA = "0x644DC70")]
	public static implicit operator float3x3(float v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C8")]
	[Address(RVA = "0x644DCA0", Offset = "0x644CCA0", VA = "0x644DCA0")]
	public static explicit operator float3x3(bool v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012C9")]
	[Address(RVA = "0x644DCE0", Offset = "0x644CCE0", VA = "0x644DCE0")]
	public static explicit operator float3x3(bool3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CA")]
	[Address(RVA = "0x644DE20", Offset = "0x644CE20", VA = "0x644DE20")]
	public static implicit operator float3x3(int v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CB")]
	[Address(RVA = "0x644DE50", Offset = "0x644CE50", VA = "0x644DE50")]
	public static implicit operator float3x3(int3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CC")]
	[Address(RVA = "0x644DED0", Offset = "0x644CED0", VA = "0x644DED0")]
	public static implicit operator float3x3(uint v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x644DF00", Offset = "0x644CF00", VA = "0x644DF00")]
	public static implicit operator float3x3(uint3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x644DFA0", Offset = "0x644CFA0", VA = "0x644DFA0")]
	public static explicit operator float3x3(double v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x644DFD0", Offset = "0x644CFD0", VA = "0x644DFD0")]
	public static explicit operator float3x3(double3x3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x644E030", Offset = "0x644D030", VA = "0x644E030")]
	public static float3x3 operator *(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x644E0A0", Offset = "0x644D0A0", VA = "0x644E0A0")]
	public static float3x3 operator *(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x644E100", Offset = "0x644D100", VA = "0x644E100")]
	public static float3x3 operator *(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x644E160", Offset = "0x644D160", VA = "0x644E160")]
	public static float3x3 operator +(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D4")]
	[Address(RVA = "0x644E1D0", Offset = "0x644D1D0", VA = "0x644E1D0")]
	public static float3x3 operator +(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D5")]
	[Address(RVA = "0x644E230", Offset = "0x644D230", VA = "0x644E230")]
	public static float3x3 operator +(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D6")]
	[Address(RVA = "0x644E290", Offset = "0x644D290", VA = "0x644E290")]
	public static float3x3 operator -(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D7")]
	[Address(RVA = "0x644E300", Offset = "0x644D300", VA = "0x644E300")]
	public static float3x3 operator -(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D8")]
	[Address(RVA = "0x644E360", Offset = "0x644D360", VA = "0x644E360")]
	public static float3x3 operator -(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D9")]
	[Address(RVA = "0x644E3C0", Offset = "0x644D3C0", VA = "0x644E3C0")]
	public static float3x3 operator /(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DA")]
	[Address(RVA = "0x644E430", Offset = "0x644D430", VA = "0x644E430")]
	public static float3x3 operator /(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DB")]
	[Address(RVA = "0x644E490", Offset = "0x644D490", VA = "0x644E490")]
	public static float3x3 operator /(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DC")]
	[Address(RVA = "0x644E4F0", Offset = "0x644D4F0", VA = "0x644E4F0")]
	public static float3x3 operator %(float3x3 lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DD")]
	[Address(RVA = "0x644E6E0", Offset = "0x644D6E0", VA = "0x644E6E0")]
	public static float3x3 operator %(float3x3 lhs, float rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DE")]
	[Address(RVA = "0x644E870", Offset = "0x644D870", VA = "0x644E870")]
	public static float3x3 operator %(float lhs, float3x3 rhs)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DF")]
	[Address(RVA = "0x644EA00", Offset = "0x644DA00", VA = "0x644EA00")]
	public static float3x3 operator ++(float3x3 val)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E0")]
	[Address(RVA = "0x644EA70", Offset = "0x644DA70", VA = "0x644EA70")]
	public static float3x3 operator --(float3x3 val)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E1")]
	[Address(RVA = "0x644EAE0", Offset = "0x644DAE0", VA = "0x644EAE0")]
	public static bool3x3 operator <(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E2")]
	[Address(RVA = "0x644EBD0", Offset = "0x644DBD0", VA = "0x644EBD0")]
	public static bool3x3 operator <(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E3")]
	[Address(RVA = "0x644EC90", Offset = "0x644DC90", VA = "0x644EC90")]
	public static bool3x3 operator <(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E4")]
	[Address(RVA = "0x644ED60", Offset = "0x644DD60", VA = "0x644ED60")]
	public static bool3x3 operator <=(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E5")]
	[Address(RVA = "0x644EE50", Offset = "0x644DE50", VA = "0x644EE50")]
	public static bool3x3 operator <=(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E6")]
	[Address(RVA = "0x644EF10", Offset = "0x644DF10", VA = "0x644EF10")]
	public static bool3x3 operator <=(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E7")]
	[Address(RVA = "0x644EFE0", Offset = "0x644DFE0", VA = "0x644EFE0")]
	public static bool3x3 operator >(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E8")]
	[Address(RVA = "0x644F0D0", Offset = "0x644E0D0", VA = "0x644F0D0")]
	public static bool3x3 operator >(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E9")]
	[Address(RVA = "0x644F1A0", Offset = "0x644E1A0", VA = "0x644F1A0")]
	public static bool3x3 operator >(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012EA")]
	[Address(RVA = "0x644F260", Offset = "0x644E260", VA = "0x644F260")]
	public static bool3x3 operator >=(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012EB")]
	[Address(RVA = "0x644F350", Offset = "0x644E350", VA = "0x644F350")]
	public static bool3x3 operator >=(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012EC")]
	[Address(RVA = "0x644F420", Offset = "0x644E420", VA = "0x644F420")]
	public static bool3x3 operator >=(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x644F4E0", Offset = "0x644E4E0", VA = "0x644F4E0")]
	public static float3x3 operator -(float3x3 val)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012EE")]
	[Address(RVA = "0x644F540", Offset = "0x644E540", VA = "0x644F540")]
	public static float3x3 operator +(float3x3 val)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012EF")]
	[Address(RVA = "0x644F590", Offset = "0x644E590", VA = "0x644F590")]
	public static bool3x3 operator ==(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F0")]
	[Address(RVA = "0x644F680", Offset = "0x644E680", VA = "0x644F680")]
	public static bool3x3 operator ==(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F1")]
	[Address(RVA = "0x644F750", Offset = "0x644E750", VA = "0x644F750")]
	public static bool3x3 operator ==(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F2")]
	[Address(RVA = "0x644F820", Offset = "0x644E820", VA = "0x644F820")]
	public static bool3x3 operator !=(float3x3 lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F3")]
	[Address(RVA = "0x644F910", Offset = "0x644E910", VA = "0x644F910")]
	public static bool3x3 operator !=(float3x3 lhs, float rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F4")]
	[Address(RVA = "0x644F9E0", Offset = "0x644E9E0", VA = "0x644F9E0")]
	public static bool3x3 operator !=(float lhs, float3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F6")]
	[Address(RVA = "0x644FAC0", Offset = "0x644EAC0", VA = "0x644FAC0", Slot = "4")]
	public bool Equals(float3x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60012F7")]
	[Address(RVA = "0x644FB70", Offset = "0x644EB70", VA = "0x644FB70", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F8")]
	[Address(RVA = "0x644FC70", Offset = "0x644EC70", VA = "0x644FC70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F9")]
	[Address(RVA = "0x644FD00", Offset = "0x644ED00", VA = "0x644FD00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012FA")]
	[Address(RVA = "0x64500A0", Offset = "0x644F0A0", VA = "0x64500A0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x60012FB")]
	[Address(RVA = "0x64503E0", Offset = "0x644F3E0", VA = "0x64503E0")]
	public float3x3(float4x4 f4x4)
	{
	}

	[Token(Token = "0x60012FC")]
	[Address(RVA = "0x6450430", Offset = "0x644F430", VA = "0x6450430")]
	public float3x3(quaternion q)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x6450570", Offset = "0x644F570", VA = "0x6450570")]
	public static float3x3 AxisAngle(float3 axis, float angle)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012FE")]
	[Address(RVA = "0x6450790", Offset = "0x644F790", VA = "0x6450790")]
	public static float3x3 EulerXYZ(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x6450880", Offset = "0x644F880", VA = "0x6450880")]
	public static float3x3 EulerXZY(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001300")]
	[Address(RVA = "0x6450960", Offset = "0x644F960", VA = "0x6450960")]
	public static float3x3 EulerYXZ(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001301")]
	[Address(RVA = "0x6450A70", Offset = "0x644FA70", VA = "0x6450A70")]
	public static float3x3 EulerYZX(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001302")]
	[Address(RVA = "0x6450B60", Offset = "0x644FB60", VA = "0x6450B60")]
	public static float3x3 EulerZXY(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001303")]
	[Address(RVA = "0x6450C70", Offset = "0x644FC70", VA = "0x6450C70")]
	public static float3x3 EulerZYX(float3 xyz)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001304")]
	[Address(RVA = "0x6450D80", Offset = "0x644FD80", VA = "0x6450D80")]
	public static float3x3 EulerXYZ(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001305")]
	[Address(RVA = "0x6450E80", Offset = "0x644FE80", VA = "0x6450E80")]
	public static float3x3 EulerXZY(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001306")]
	[Address(RVA = "0x6450F70", Offset = "0x644FF70", VA = "0x6450F70")]
	public static float3x3 EulerYXZ(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001307")]
	[Address(RVA = "0x6451080", Offset = "0x6450080", VA = "0x6451080")]
	public static float3x3 EulerYZX(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001308")]
	[Address(RVA = "0x6451170", Offset = "0x6450170", VA = "0x6451170")]
	public static float3x3 EulerZXY(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001309")]
	[Address(RVA = "0x6451280", Offset = "0x6450280", VA = "0x6451280")]
	public static float3x3 EulerZYX(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600130A")]
	[Address(RVA = "0x6451390", Offset = "0x6450390", VA = "0x6451390")]
	public static float3x3 Euler(float3 xyz, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600130B")]
	[Address(RVA = "0x6451980", Offset = "0x6450980", VA = "0x6451980")]
	public static float3x3 Euler(float x, float y, float z, math.RotationOrder order = math.RotationOrder.ZXY)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600130C")]
	[Address(RVA = "0x64519C0", Offset = "0x64509C0", VA = "0x64519C0")]
	public static float3x3 RotateX(float angle)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600130D")]
	[Address(RVA = "0x6451B10", Offset = "0x6450B10", VA = "0x6451B10")]
	public static float3x3 RotateY(float angle)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600130E")]
	[Address(RVA = "0x6451C70", Offset = "0x6450C70", VA = "0x6451C70")]
	public static float3x3 RotateZ(float angle)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600130F")]
	[Address(RVA = "0x6451DC0", Offset = "0x6450DC0", VA = "0x6451DC0")]
	public static float3x3 Scale(float s)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001310")]
	[Address(RVA = "0x6451DF0", Offset = "0x6450DF0", VA = "0x6451DF0")]
	public static float3x3 Scale(float x, float y, float z)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001311")]
	[Address(RVA = "0x6451E20", Offset = "0x6450E20", VA = "0x6451E20")]
	public static float3x3 Scale(float3 v)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001312")]
	[Address(RVA = "0x6451E50", Offset = "0x6450E50", VA = "0x6451E50")]
	public static float3x3 LookRotation(float3 forward, float3 up)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001313")]
	[Address(RVA = "0x6452010", Offset = "0x6451010", VA = "0x6452010")]
	public static float3x3 LookRotationSafe(float3 forward, float3 up)
	{
		return default(float3x3);
	}

	[Token(Token = "0x6001314")]
	[Address(RVA = "0x64524F0", Offset = "0x64514F0", VA = "0x64524F0")]
	public static explicit operator float3x3(float4x4 f4x4)
	{
		return default(float3x3);
	}
}
