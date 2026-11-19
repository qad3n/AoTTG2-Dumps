// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bounds
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000B8")]
[UnityEngine.Bindings.NativeHeader("Runtime/Geometry/Intersection.h")]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Geometry/AABB.h")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.Bindings.NativeHeader("Runtime/Geometry/AABB.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/MathScripting.h")]
[UnityEngine.NativeClass("AABB")]
[UnityEngine.Bindings.NativeHeader("Runtime/Geometry/Ray.h")]
public struct Bounds : IEquatable<Bounds>, IFormattable
{
	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x0")]
	private Vector3 m_Center;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("m_Extent")]
	private Vector3 m_Extents;

	[Token(Token = "0x17000086")]
	public Vector3 center
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x68C9380", Offset = "0x68C8380", VA = "0x68C9380")]
		readonly get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x68C9390", Offset = "0x68C8390", VA = "0x68C9390")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public Vector3 size
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x68C93A0", Offset = "0x68C83A0", VA = "0x68C93A0")]
		readonly get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x68C93C0", Offset = "0x68C83C0", VA = "0x68C93C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public Vector3 extents
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x68C93E0", Offset = "0x68C83E0", VA = "0x68C93E0")]
		readonly get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000376")]
		[Address(RVA = "0x68C93F0", Offset = "0x68C83F0", VA = "0x68C93F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000089")]
	public Vector3 min
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000377")]
		[Address(RVA = "0x68C9400", Offset = "0x68C8400", VA = "0x68C9400")]
		readonly get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000378")]
		[Address(RVA = "0x68C9420", Offset = "0x68C8420", VA = "0x68C9420")]
		set
		{
		}
	}

	[Token(Token = "0x1700008A")]
	public Vector3 max
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000379")]
		[Address(RVA = "0x68C9470", Offset = "0x68C8470", VA = "0x68C9470")]
		readonly get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600037A")]
		[Address(RVA = "0x68C9490", Offset = "0x68C8490", VA = "0x68C9490")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036C")]
	[Address(RVA = "0x68C9150", Offset = "0x68C8150", VA = "0x68C9150")]
	public Bounds(Vector3 center, Vector3 size)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036D")]
	[Address(RVA = "0x68C9180", Offset = "0x68C8180", VA = "0x68C9180", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036E")]
	[Address(RVA = "0x68C9210", Offset = "0x68C8210", VA = "0x68C9210", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036F")]
	[Address(RVA = "0x68C92C0", Offset = "0x68C82C0", VA = "0x68C92C0", Slot = "4")]
	public readonly bool Equals(Bounds other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000370")]
	[Address(RVA = "0x68C9320", Offset = "0x68C8320", VA = "0x68C9320")]
	public readonly bool Equals(in Bounds other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037B")]
	[Address(RVA = "0x68C94E0", Offset = "0x68C84E0", VA = "0x68C94E0")]
	public static bool operator ==(Bounds lhs, Bounds rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037C")]
	[Address(RVA = "0x68C9570", Offset = "0x68C8570", VA = "0x68C9570")]
	public static bool operator !=(Bounds lhs, Bounds rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037D")]
	[Address(RVA = "0x68C9600", Offset = "0x68C8600", VA = "0x68C9600")]
	public void SetMinMax(Vector3 min, Vector3 max)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037E")]
	[Address(RVA = "0x68C9630", Offset = "0x68C8630", VA = "0x68C9630")]
	public void SetMinMax(in Vector3 min, in Vector3 max)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037F")]
	[Address(RVA = "0x68C9680", Offset = "0x68C8680", VA = "0x68C9680")]
	public void Encapsulate(Vector3 point)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000380")]
	[Address(RVA = "0x68C96F0", Offset = "0x68C86F0", VA = "0x68C96F0")]
	public void Encapsulate(in Vector3 point)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000381")]
	[Address(RVA = "0x68C9760", Offset = "0x68C8760", VA = "0x68C9760")]
	public void Encapsulate(Bounds bounds)
	{
	}

	[Token(Token = "0x6000382")]
	[Address(RVA = "0x68C9830", Offset = "0x68C8830", VA = "0x68C9830")]
	public void Expand(float amount)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000383")]
	[Address(RVA = "0x68C9860", Offset = "0x68C8860", VA = "0x68C9860")]
	public readonly bool Intersects(Bounds bounds)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000384")]
	[Address(RVA = "0x68C9920", Offset = "0x68C8920", VA = "0x68C9920")]
	public readonly bool IntersectRay(Ray ray)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000385")]
	[Address(RVA = "0x68C99B0", Offset = "0x68C89B0", VA = "0x68C99B0")]
	public readonly bool IntersectRay(Ray ray, out float distance)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000386")]
	[Address(RVA = "0x68C9A00", Offset = "0x68C8A00", VA = "0x68C9A00", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000387")]
	[Address(RVA = "0x68C9A10", Offset = "0x68C8A10", VA = "0x68C9A10", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000388")]
	[Address(RVA = "0x68C9B00", Offset = "0x68C8B00", VA = "0x68C9B00")]
	[UnityEngine.Bindings.NativeMethod("IsInside", IsThreadSafe = true)]
	private readonly extern bool Internal_Contains(in Vector3 point);

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000389")]
	[Address(RVA = "0x68C9B40", Offset = "0x68C8B40", VA = "0x68C9B40")]
	public readonly bool Contains(Vector3 point)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600038A")]
	[Address(RVA = "0x68C9B90", Offset = "0x68C8B90", VA = "0x68C9B90")]
	[UnityEngine.Bindings.FreeFunction("BoundsScripting::SqrDistance", HasExplicitThis = true, IsThreadSafe = true)]
	private readonly extern float Internal_SqrDistance(in Vector3 point);

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038B")]
	[Address(RVA = "0x68C9BD0", Offset = "0x68C8BD0", VA = "0x68C9BD0")]
	public readonly float SqrDistance(Vector3 point)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600038C")]
	[Address(RVA = "0x68C9970", Offset = "0x68C8970", VA = "0x68C9970")]
	[UnityEngine.Bindings.FreeFunction("IntersectRayAABB", IsThreadSafe = true)]
	private static extern bool IntersectRayAABB(in Ray ray, in Bounds bounds, out float dist);

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x68C9C10", Offset = "0x68C8C10", VA = "0x68C9C10")]
	[UnityEngine.Bindings.FreeFunction("BoundsScripting::ClosestPoint", HasExplicitThis = true, IsThreadSafe = true)]
	private readonly Vector3 Internal_ClosestPoint(in Vector3 point)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600038E")]
	[Address(RVA = "0x68C9CB0", Offset = "0x68C8CB0", VA = "0x68C9CB0")]
	public readonly Vector3 ClosestPoint(Vector3 point)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600038F")]
	[Address(RVA = "0x68C9C70", Offset = "0x68C8C70", VA = "0x68C9C70")]
	private static extern void Internal_ClosestPoint_Injected(ref Bounds _unity_self, in Vector3 point, out Vector3 ret);
}
