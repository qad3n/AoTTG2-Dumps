using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000098")]
[UnityEngine.Bindings.NativeHeader("Runtime/Geometry/AABB.h")]
[UnityEngine.NativeClass("AABB")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Geometry/AABB.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Geometry/Ray.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Geometry/Intersection.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/MathScripting.h")]
public struct Bounds : IEquatable<Bounds>, IFormattable
{
	[Token(Token = "0x400019B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Vector3 m_Center;

	[Token(Token = "0x400019C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("m_Extent")]
	private Vector3 m_Extents;

	[Token(Token = "0x1700006A")]
	public Vector3 center
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600025D")]
		[Address(RVA = "0x4A941D0", Offset = "0x4A941D0", VA = "0x4A941D0")]
		get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600025E")]
		[Address(RVA = "0x4A941E0", Offset = "0x4A941E0", VA = "0x4A941E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public Vector3 size
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600025F")]
		[Address(RVA = "0x4A941F0", Offset = "0x4A941F0", VA = "0x4A941F0")]
		get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000260")]
		[Address(RVA = "0x4A94210", Offset = "0x4A94210", VA = "0x4A94210")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public Vector3 extents
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000261")]
		[Address(RVA = "0x4A94230", Offset = "0x4A94230", VA = "0x4A94230")]
		get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000262")]
		[Address(RVA = "0x4A94240", Offset = "0x4A94240", VA = "0x4A94240")]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public Vector3 min
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000263")]
		[Address(RVA = "0x4A94250", Offset = "0x4A94250", VA = "0x4A94250")]
		get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000264")]
		[Address(RVA = "0x4A94270", Offset = "0x4A94270", VA = "0x4A94270")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public Vector3 max
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x4A942C0", Offset = "0x4A942C0", VA = "0x4A942C0")]
		get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x4A942E0", Offset = "0x4A942E0", VA = "0x4A942E0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000259")]
	[Address(RVA = "0x4A93FB0", Offset = "0x4A93FB0", VA = "0x4A93FB0")]
	public Bounds(Vector3 center, Vector3 size)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025A")]
	[Address(RVA = "0x4A93FE0", Offset = "0x4A93FE0", VA = "0x4A93FE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025B")]
	[Address(RVA = "0x4A940A0", Offset = "0x4A940A0", VA = "0x4A940A0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025C")]
	[Address(RVA = "0x4A94160", Offset = "0x4A94160", VA = "0x4A94160", Slot = "4")]
	public bool Equals(Bounds other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000267")]
	[Address(RVA = "0x4A94330", Offset = "0x4A94330", VA = "0x4A94330")]
	public static bool operator ==(Bounds lhs, Bounds rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000268")]
	[Address(RVA = "0x4A943E0", Offset = "0x4A943E0", VA = "0x4A943E0")]
	public static bool operator !=(Bounds lhs, Bounds rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000269")]
	[Address(RVA = "0x4A94490", Offset = "0x4A94490", VA = "0x4A94490")]
	public void SetMinMax(Vector3 min, Vector3 max)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026A")]
	[Address(RVA = "0x4A944C0", Offset = "0x4A944C0", VA = "0x4A944C0")]
	public void Encapsulate(Vector3 point)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026B")]
	[Address(RVA = "0x4A94530", Offset = "0x4A94530", VA = "0x4A94530")]
	public void Encapsulate(Bounds bounds)
	{
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x4A94620", Offset = "0x4A94620", VA = "0x4A94620")]
	public void Expand(float amount)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026D")]
	[Address(RVA = "0x4A94650", Offset = "0x4A94650", VA = "0x4A94650")]
	public bool Intersects(Bounds bounds)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026E")]
	[Address(RVA = "0x4A94710", Offset = "0x4A94710", VA = "0x4A94710", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026F")]
	[Address(RVA = "0x4A94720", Offset = "0x4A94720", VA = "0x4A94720", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x4A948C0", Offset = "0x4A948C0", VA = "0x4A948C0")]
	[UnityEngine.Bindings.NativeMethod("IsInside", IsThreadSafe = true)]
	public bool Contains(Vector3 point)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000271")]
	[Address(RVA = "0x4A94910", Offset = "0x4A94910", VA = "0x4A94910")]
	private static extern bool Contains_Injected(ref Bounds _unity_self, [In] ref Vector3 point);
}
