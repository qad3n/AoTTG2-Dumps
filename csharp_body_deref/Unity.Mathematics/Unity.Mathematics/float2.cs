using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200002B")]
[DebuggerTypeProxy(typeof(DebuggerProxy))]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float2 : IEquatable<float2>, IFormattable
{
	[Token(Token = "0x200002C")]
	internal sealed class DebuggerProxy
	{
		[Token(Token = "0x400009D")]
		[FieldOffset(Offset = "0x10")]
		public float x;

		[Token(Token = "0x400009E")]
		[FieldOffset(Offset = "0x14")]
		public float y;

		[Token(Token = "0x60010A5")]
		[Address(RVA = "0x47AC7D0", Offset = "0x47AC7D0", VA = "0x47AC7D0")]
		public DebuggerProxy(float2 v)
		{
		}
	}

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x0")]
	public float x;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x4")]
	public float y;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float2 zero;

	[Token(Token = "0x170003DB")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600107E")]
		[Address(RVA = "0x47AA310", Offset = "0x47AA310", VA = "0x47AA310")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003DC")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600107F")]
		[Address(RVA = "0x47AA320", Offset = "0x47AA320", VA = "0x47AA320")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003DD")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001080")]
		[Address(RVA = "0x47AA330", Offset = "0x47AA330", VA = "0x47AA330")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003DE")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001081")]
		[Address(RVA = "0x47AA350", Offset = "0x47AA350", VA = "0x47AA350")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003DF")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001082")]
		[Address(RVA = "0x47AA370", Offset = "0x47AA370", VA = "0x47AA370")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003E0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001083")]
		[Address(RVA = "0x47AA380", Offset = "0x47AA380", VA = "0x47AA380")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003E1")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001084")]
		[Address(RVA = "0x47AA390", Offset = "0x47AA390", VA = "0x47AA390")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003E2")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001085")]
		[Address(RVA = "0x47AA3A0", Offset = "0x47AA3A0", VA = "0x47AA3A0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003E3")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001086")]
		[Address(RVA = "0x47AA3B0", Offset = "0x47AA3B0", VA = "0x47AA3B0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003E4")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001087")]
		[Address(RVA = "0x47AA3D0", Offset = "0x47AA3D0", VA = "0x47AA3D0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003E5")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001088")]
		[Address(RVA = "0x47AA3E0", Offset = "0x47AA3E0", VA = "0x47AA3E0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003E6")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001089")]
		[Address(RVA = "0x47AA3F0", Offset = "0x47AA3F0", VA = "0x47AA3F0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003E7")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600108A")]
		[Address(RVA = "0x47AA410", Offset = "0x47AA410", VA = "0x47AA410")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003E8")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600108B")]
		[Address(RVA = "0x47AA430", Offset = "0x47AA430", VA = "0x47AA430")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003E9")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600108C")]
		[Address(RVA = "0x47AA440", Offset = "0x47AA440", VA = "0x47AA440")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003EA")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600108D")]
		[Address(RVA = "0x47AA460", Offset = "0x47AA460", VA = "0x47AA460")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003EB")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 xxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600108E")]
		[Address(RVA = "0x47AA470", Offset = "0x47AA470", VA = "0x47AA470")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x170003EC")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 xxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600108F")]
		[Address(RVA = "0x47AA480", Offset = "0x47AA480", VA = "0x47AA480")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x170003ED")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 xyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001090")]
		[Address(RVA = "0x47AA490", Offset = "0x47AA490", VA = "0x47AA490")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x170003EE")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 xyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001091")]
		[Address(RVA = "0x47AA4A0", Offset = "0x47AA4A0", VA = "0x47AA4A0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x170003EF")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 yxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001092")]
		[Address(RVA = "0x47AA4B0", Offset = "0x47AA4B0", VA = "0x47AA4B0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x170003F0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 yxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001093")]
		[Address(RVA = "0x47AA4C0", Offset = "0x47AA4C0", VA = "0x47AA4C0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x170003F1")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 yyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001094")]
		[Address(RVA = "0x47AA4D0", Offset = "0x47AA4D0", VA = "0x47AA4D0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x170003F2")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 yyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001095")]
		[Address(RVA = "0x47AA4E0", Offset = "0x47AA4E0", VA = "0x47AA4E0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x170003F3")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float2 xx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001096")]
		[Address(RVA = "0x47AA4F0", Offset = "0x47AA4F0", VA = "0x47AA4F0")]
		get
		{
			return default(float2);
		}
	}

	[Token(Token = "0x170003F4")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float2 xy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001097")]
		[Address(RVA = "0x47AA500", Offset = "0x47AA500", VA = "0x47AA500")]
		get
		{
			return default(float2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001098")]
		[Address(RVA = "0x47AA510", Offset = "0x47AA510", VA = "0x47AA510")]
		set
		{
		}
	}

	[Token(Token = "0x170003F5")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float2 yx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001099")]
		[Address(RVA = "0x47AA520", Offset = "0x47AA520", VA = "0x47AA520")]
		get
		{
			return default(float2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600109A")]
		[Address(RVA = "0x47AA530", Offset = "0x47AA530", VA = "0x47AA530")]
		set
		{
		}
	}

	[Token(Token = "0x170003F6")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float2 yy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600109B")]
		[Address(RVA = "0x47AA540", Offset = "0x47AA540", VA = "0x47AA540")]
		get
		{
			return default(float2);
		}
	}

	[Token(Token = "0x170003F7")]
	public float this[int index]
	{
		[Token(Token = "0x600109C")]
		[Address(RVA = "0x47AA550", Offset = "0x47AA550", VA = "0x47AA550")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600109D")]
		[Address(RVA = "0x47AA560", Offset = "0x47AA560", VA = "0x47AA560")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001041")]
	[Address(RVA = "0x47A9A20", Offset = "0x47A9A20", VA = "0x47A9A20")]
	public float2(float x, float y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001042")]
	[Address(RVA = "0x47A9A30", Offset = "0x47A9A30", VA = "0x47A9A30")]
	public float2(float2 xy)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001043")]
	[Address(RVA = "0x47A9A40", Offset = "0x47A9A40", VA = "0x47A9A40")]
	public float2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001044")]
	[Address(RVA = "0x47A9A50", Offset = "0x47A9A50", VA = "0x47A9A50")]
	public float2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001045")]
	[Address(RVA = "0x47A9A80", Offset = "0x47A9A80", VA = "0x47A9A80")]
	public float2(bool2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001046")]
	[Address(RVA = "0x47A9AC0", Offset = "0x47A9AC0", VA = "0x47A9AC0")]
	public float2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001047")]
	[Address(RVA = "0x47A9AD0", Offset = "0x47A9AD0", VA = "0x47A9AD0")]
	public float2(int2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001048")]
	[Address(RVA = "0x47A9AF0", Offset = "0x47A9AF0", VA = "0x47A9AF0")]
	public float2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001049")]
	[Address(RVA = "0x47A9B10", Offset = "0x47A9B10", VA = "0x47A9B10")]
	public float2(uint2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600104A")]
	[Address(RVA = "0x47A9B40", Offset = "0x47A9B40", VA = "0x47A9B40")]
	public float2(half v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600104B")]
	[Address(RVA = "0x47A9BA0", Offset = "0x47A9BA0", VA = "0x47A9BA0")]
	public float2(half2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600104C")]
	[Address(RVA = "0x47A9C60", Offset = "0x47A9C60", VA = "0x47A9C60")]
	public float2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600104D")]
	[Address(RVA = "0x47A9C70", Offset = "0x47A9C70", VA = "0x47A9C70")]
	public float2(double2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600104E")]
	[Address(RVA = "0x47A9C90", Offset = "0x47A9C90", VA = "0x47A9C90")]
	public static implicit operator float2(float v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600104F")]
	[Address(RVA = "0x47A9CA0", Offset = "0x47A9CA0", VA = "0x47A9CA0")]
	public static explicit operator float2(bool v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001050")]
	[Address(RVA = "0x47A9CC0", Offset = "0x47A9CC0", VA = "0x47A9CC0")]
	public static explicit operator float2(bool2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001051")]
	[Address(RVA = "0x47A9D00", Offset = "0x47A9D00", VA = "0x47A9D00")]
	public static implicit operator float2(int v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001052")]
	[Address(RVA = "0x47A9D10", Offset = "0x47A9D10", VA = "0x47A9D10")]
	public static implicit operator float2(int2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001053")]
	[Address(RVA = "0x47A9D20", Offset = "0x47A9D20", VA = "0x47A9D20")]
	public static implicit operator float2(uint v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001054")]
	[Address(RVA = "0x47A9D30", Offset = "0x47A9D30", VA = "0x47A9D30")]
	public static implicit operator float2(uint2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001055")]
	[Address(RVA = "0x47A9D50", Offset = "0x47A9D50", VA = "0x47A9D50")]
	public static implicit operator float2(half v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001056")]
	[Address(RVA = "0x47A9DC0", Offset = "0x47A9DC0", VA = "0x47A9DC0")]
	public static implicit operator float2(half2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001057")]
	[Address(RVA = "0x47A9E80", Offset = "0x47A9E80", VA = "0x47A9E80")]
	public static explicit operator float2(double v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001058")]
	[Address(RVA = "0x47A9E90", Offset = "0x47A9E90", VA = "0x47A9E90")]
	public static explicit operator float2(double2 v)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001059")]
	[Address(RVA = "0x47A9EA0", Offset = "0x47A9EA0", VA = "0x47A9EA0")]
	public static float2 operator *(float2 lhs, float2 rhs)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600105A")]
	[Address(RVA = "0x47A9EB0", Offset = "0x47A9EB0", VA = "0x47A9EB0")]
	public static float2 operator *(float2 lhs, float rhs)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600105B")]
	[Address(RVA = "0x47A9EC0", Offset = "0x47A9EC0", VA = "0x47A9EC0")]
	public static float2 operator *(float lhs, float2 rhs)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600105C")]
	[Address(RVA = "0x47A9ED0", Offset = "0x47A9ED0", VA = "0x47A9ED0")]
	public static float2 operator +(float2 lhs, float2 rhs)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600105D")]
	[Address(RVA = "0x47A9EE0", Offset = "0x47A9EE0", VA = "0x47A9EE0")]
	public static float2 operator +(float2 lhs, float rhs)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600105E")]
	[Address(RVA = "0x47A9EF0", Offset = "0x47A9EF0", VA = "0x47A9EF0")]
	public static float2 operator +(float lhs, float2 rhs)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600105F")]
	[Address(RVA = "0x47A9F00", Offset = "0x47A9F00", VA = "0x47A9F00")]
	public static float2 operator -(float2 lhs, float2 rhs)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001060")]
	[Address(RVA = "0x47A9F10", Offset = "0x47A9F10", VA = "0x47A9F10")]
	public static float2 operator -(float2 lhs, float rhs)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001061")]
	[Address(RVA = "0x47A9F20", Offset = "0x47A9F20", VA = "0x47A9F20")]
	public static float2 operator -(float lhs, float2 rhs)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001062")]
	[Address(RVA = "0x47A9F30", Offset = "0x47A9F30", VA = "0x47A9F30")]
	public static float2 operator /(float2 lhs, float2 rhs)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001063")]
	[Address(RVA = "0x47A9F40", Offset = "0x47A9F40", VA = "0x47A9F40")]
	public static float2 operator /(float2 lhs, float rhs)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001064")]
	[Address(RVA = "0x47A9F50", Offset = "0x47A9F50", VA = "0x47A9F50")]
	public static float2 operator /(float lhs, float2 rhs)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001065")]
	[Address(RVA = "0x47A9F60", Offset = "0x47A9F60", VA = "0x47A9F60")]
	public static float2 operator %(float2 lhs, float2 rhs)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001066")]
	[Address(RVA = "0x47A9FB0", Offset = "0x47A9FB0", VA = "0x47A9FB0")]
	public static float2 operator %(float2 lhs, float rhs)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001067")]
	[Address(RVA = "0x47A9FF0", Offset = "0x47A9FF0", VA = "0x47A9FF0")]
	public static float2 operator %(float lhs, float2 rhs)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001068")]
	[Address(RVA = "0x47AA030", Offset = "0x47AA030", VA = "0x47AA030")]
	public static float2 operator ++(float2 val)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001069")]
	[Address(RVA = "0x47AA040", Offset = "0x47AA040", VA = "0x47AA040")]
	public static float2 operator --(float2 val)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600106A")]
	[Address(RVA = "0x47AA050", Offset = "0x47AA050", VA = "0x47AA050")]
	public static bool2 operator <(float2 lhs, float2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600106B")]
	[Address(RVA = "0x47AA070", Offset = "0x47AA070", VA = "0x47AA070")]
	public static bool2 operator <(float2 lhs, float rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600106C")]
	[Address(RVA = "0x47AA090", Offset = "0x47AA090", VA = "0x47AA090")]
	public static bool2 operator <(float lhs, float2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600106D")]
	[Address(RVA = "0x47AA0B0", Offset = "0x47AA0B0", VA = "0x47AA0B0")]
	public static bool2 operator <=(float2 lhs, float2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600106E")]
	[Address(RVA = "0x47AA0D0", Offset = "0x47AA0D0", VA = "0x47AA0D0")]
	public static bool2 operator <=(float2 lhs, float rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600106F")]
	[Address(RVA = "0x47AA0F0", Offset = "0x47AA0F0", VA = "0x47AA0F0")]
	public static bool2 operator <=(float lhs, float2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001070")]
	[Address(RVA = "0x47AA110", Offset = "0x47AA110", VA = "0x47AA110")]
	public static bool2 operator >(float2 lhs, float2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001071")]
	[Address(RVA = "0x47AA130", Offset = "0x47AA130", VA = "0x47AA130")]
	public static bool2 operator >(float2 lhs, float rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001072")]
	[Address(RVA = "0x47AA150", Offset = "0x47AA150", VA = "0x47AA150")]
	public static bool2 operator >(float lhs, float2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001073")]
	[Address(RVA = "0x47AA170", Offset = "0x47AA170", VA = "0x47AA170")]
	public static bool2 operator >=(float2 lhs, float2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001074")]
	[Address(RVA = "0x47AA190", Offset = "0x47AA190", VA = "0x47AA190")]
	public static bool2 operator >=(float2 lhs, float rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001075")]
	[Address(RVA = "0x47AA1B0", Offset = "0x47AA1B0", VA = "0x47AA1B0")]
	public static bool2 operator >=(float lhs, float2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001076")]
	[Address(RVA = "0x47AA1D0", Offset = "0x47AA1D0", VA = "0x47AA1D0")]
	public static float2 operator -(float2 val)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001077")]
	[Address(RVA = "0x47AA1E0", Offset = "0x47AA1E0", VA = "0x47AA1E0")]
	public static float2 operator +(float2 val)
	{
		return default(float2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001078")]
	[Address(RVA = "0x47AA1F0", Offset = "0x47AA1F0", VA = "0x47AA1F0")]
	public static bool2 operator ==(float2 lhs, float2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001079")]
	[Address(RVA = "0x47AA220", Offset = "0x47AA220", VA = "0x47AA220")]
	public static bool2 operator ==(float2 lhs, float rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107A")]
	[Address(RVA = "0x47AA250", Offset = "0x47AA250", VA = "0x47AA250")]
	public static bool2 operator ==(float lhs, float2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107B")]
	[Address(RVA = "0x47AA280", Offset = "0x47AA280", VA = "0x47AA280")]
	public static bool2 operator !=(float2 lhs, float2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107C")]
	[Address(RVA = "0x47AA2B0", Offset = "0x47AA2B0", VA = "0x47AA2B0")]
	public static bool2 operator !=(float2 lhs, float rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600107D")]
	[Address(RVA = "0x47AA2E0", Offset = "0x47AA2E0", VA = "0x47AA2E0")]
	public static bool2 operator !=(float lhs, float2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600109E")]
	[Address(RVA = "0x47AA570", Offset = "0x47AA570", VA = "0x47AA570", Slot = "4")]
	public bool Equals(float2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600109F")]
	[Address(RVA = "0x47AA590", Offset = "0x47AA590", VA = "0x47AA590", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010A0")]
	[Address(RVA = "0x47AA610", Offset = "0x47AA610", VA = "0x47AA610", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010A1")]
	[Address(RVA = "0x47AA650", Offset = "0x47AA650", VA = "0x47AA650", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010A2")]
	[Address(RVA = "0x47AA6D0", Offset = "0x47AA6D0", VA = "0x47AA6D0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x60010A3")]
	[Address(RVA = "0x47AA750", Offset = "0x47AA750", VA = "0x47AA750")]
	public static implicit operator Vector2(float2 v)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60010A4")]
	[Address(RVA = "0x47AA760", Offset = "0x47AA760", VA = "0x47AA760")]
	public static implicit operator float2(Vector2 v)
	{
		return default(float2);
	}
}
