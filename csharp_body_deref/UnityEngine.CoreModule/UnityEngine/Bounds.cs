// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bounds
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4DBB9F0", Offset = "0x4DBB9F0", VA = "0x4DBB9F0")]
		get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600025E")]
		[Address(RVA = "0x4DBBA00", Offset = "0x4DBBA00", VA = "0x4DBBA00")]
		set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public Vector3 size
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600025F")]
		[Address(RVA = "0x4DBBA10", Offset = "0x4DBBA10", VA = "0x4DBBA10")]
		get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000260")]
		[Address(RVA = "0x4DBBA30", Offset = "0x4DBBA30", VA = "0x4DBBA30")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public Vector3 extents
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000261")]
		[Address(RVA = "0x4DBBA50", Offset = "0x4DBBA50", VA = "0x4DBBA50")]
		get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000262")]
		[Address(RVA = "0x4DBBA60", Offset = "0x4DBBA60", VA = "0x4DBBA60")]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public Vector3 min
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000263")]
		[Address(RVA = "0x4DBBA70", Offset = "0x4DBBA70", VA = "0x4DBBA70")]
		get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000264")]
		[Address(RVA = "0x4DBBA90", Offset = "0x4DBBA90", VA = "0x4DBBA90")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public Vector3 max
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x4DBBAE0", Offset = "0x4DBBAE0", VA = "0x4DBBAE0")]
		get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x4DBBB00", Offset = "0x4DBBB00", VA = "0x4DBBB00")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000259")]
	[Address(RVA = "0x4DBB7D0", Offset = "0x4DBB7D0", VA = "0x4DBB7D0")]
	public Bounds(Vector3 center, Vector3 size)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025A")]
	[Address(RVA = "0x4DBB800", Offset = "0x4DBB800", VA = "0x4DBB800", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025B")]
	[Address(RVA = "0x4DBB8C0", Offset = "0x4DBB8C0", VA = "0x4DBB8C0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600025C")]
	[Address(RVA = "0x4DBB980", Offset = "0x4DBB980", VA = "0x4DBB980", Slot = "4")]
	public bool Equals(Bounds other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000267")]
	[Address(RVA = "0x4DBBB50", Offset = "0x4DBBB50", VA = "0x4DBBB50")]
	public static bool operator ==(Bounds lhs, Bounds rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000268")]
	[Address(RVA = "0x4DBBC00", Offset = "0x4DBBC00", VA = "0x4DBBC00")]
	public static bool operator !=(Bounds lhs, Bounds rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000269")]
	[Address(RVA = "0x4DBBCB0", Offset = "0x4DBBCB0", VA = "0x4DBBCB0")]
	public void SetMinMax(Vector3 min, Vector3 max)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026A")]
	[Address(RVA = "0x4DBBCE0", Offset = "0x4DBBCE0", VA = "0x4DBBCE0")]
	public void Encapsulate(Vector3 point)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026B")]
	[Address(RVA = "0x4DBBD50", Offset = "0x4DBBD50", VA = "0x4DBBD50")]
	public void Encapsulate(Bounds bounds)
	{
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x4DBBE40", Offset = "0x4DBBE40", VA = "0x4DBBE40")]
	public void Expand(float amount)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026D")]
	[Address(RVA = "0x4DBBE70", Offset = "0x4DBBE70", VA = "0x4DBBE70")]
	public bool Intersects(Bounds bounds)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026E")]
	[Address(RVA = "0x4DBBF30", Offset = "0x4DBBF30", VA = "0x4DBBF30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600026F")]
	[Address(RVA = "0x4DBBF40", Offset = "0x4DBBF40", VA = "0x4DBBF40", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x4DBC0E0", Offset = "0x4DBC0E0", VA = "0x4DBC0E0")]
	[UnityEngine.Bindings.NativeMethod("IsInside", IsThreadSafe = true)]
	public bool Contains(Vector3 point)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000271")]
	[Address(RVA = "0x4DBC130", Offset = "0x4DBC130", VA = "0x4DBC130")]
	private static extern bool Contains_Injected(ref Bounds _unity_self, [In] ref Vector3 point);
}
