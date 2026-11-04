// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bounds
// Update status: CHANGED in this game update
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

[Token(Token = "0x20000B6")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/MathScripting.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Geometry/Intersection.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Geometry/AABB.h")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Geometry/AABB.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Geometry/Ray.h")]
[UnityEngine.NativeClass("AABB")]
public struct Bounds : IEquatable<Bounds>, IFormattable
{
	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x0")]
	private Vector3 m_Center;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("m_Extent")]
	private Vector3 m_Extents;

	[Token(Token = "0x17000085")]
	public Vector3 center
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600036B")]
		[Address(RVA = "0x180F7A0", Offset = "0x180DDA0", VA = "0x18180F7A0")]
		readonly get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600036C")]
		[Address(RVA = "0x2B889E0", Offset = "0x2B86FE0", VA = "0x182B889E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public Vector3 size
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600036D")]
		[Address(RVA = "0x2EBC9C0", Offset = "0x2EBAFC0", VA = "0x182EBC9C0")]
		readonly get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600036E")]
		[Address(RVA = "0x2EBCC20", Offset = "0x2EBB220", VA = "0x182EBCC20")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public Vector3 extents
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600036F")]
		[Address(RVA = "0x180F8B0", Offset = "0x180DEB0", VA = "0x18180F8B0")]
		readonly get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000370")]
		[Address(RVA = "0x2EBC190", Offset = "0x2EBA790", VA = "0x182EBC190")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public Vector3 min
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x2EBC990", Offset = "0x2EBAF90", VA = "0x182EBC990")]
		readonly get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x2EBCBB0", Offset = "0x2EBB1B0", VA = "0x182EBCBB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000089")]
	public Vector3 max
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x2EBC960", Offset = "0x2EBAF60", VA = "0x182EBC960")]
		readonly get
		{
			return default(Vector3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x2EBCB30", Offset = "0x2EBB130", VA = "0x182EBCB30")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000366")]
	[Address(RVA = "0x2EBC920", Offset = "0x2EBAF20", VA = "0x182EBC920")]
	public Bounds(Vector3 center, Vector3 size)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000367")]
	[Address(RVA = "0xB1F060", Offset = "0xB1D660", VA = "0x180B1F060", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000368")]
	[Address(RVA = "0x2EBC2D0", Offset = "0x2EBA8D0", VA = "0x182EBC2D0", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000369")]
	[Address(RVA = "0x2EBC270", Offset = "0x2EBA870", VA = "0x182EBC270", Slot = "4")]
	public readonly bool Equals(Bounds other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600036A")]
	[Address(RVA = "0x2EBC270", Offset = "0x2EBA870", VA = "0x182EBC270")]
	public readonly bool Equals(in Bounds other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000375")]
	[Address(RVA = "0x2EBC9E0", Offset = "0x2EBAFE0", VA = "0x182EBC9E0")]
	public static bool operator ==(Bounds lhs, Bounds rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000376")]
	[Address(RVA = "0x2EBCA60", Offset = "0x2EBB060", VA = "0x182EBCA60")]
	public static bool operator !=(Bounds lhs, Bounds rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000377")]
	[Address(RVA = "0x2EBC750", Offset = "0x2EBAD50", VA = "0x182EBC750")]
	public void SetMinMax(Vector3 min, Vector3 max)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000378")]
	[Address(RVA = "0x2EBC6F0", Offset = "0x2EBACF0", VA = "0x182EBC6F0")]
	public void SetMinMax(in Vector3 min, in Vector3 max)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000379")]
	[Address(RVA = "0x1E7C3C0", Offset = "0x1E7A9C0", VA = "0x181E7C3C0")]
	public void Encapsulate(Vector3 point)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037A")]
	[Address(RVA = "0x1E7C3C0", Offset = "0x1E7A9C0", VA = "0x181E7C3C0")]
	public void Encapsulate(in Vector3 point)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037B")]
	[Address(RVA = "0x1E7C200", Offset = "0x1E7A800", VA = "0x181E7C200")]
	public void Encapsulate(Bounds bounds)
	{
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x2EBC3B0", Offset = "0x2EBA9B0", VA = "0x182EBC3B0")]
	public void Expand(float amount)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037D")]
	[Address(RVA = "0x2EBC650", Offset = "0x2EBAC50", VA = "0x182EBC650")]
	public readonly bool Intersects(Bounds bounds)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037E")]
	[Address(RVA = "0x2EBC5A0", Offset = "0x2EBABA0", VA = "0x182EBC5A0")]
	public readonly bool IntersectRay(Ray ray)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600037F")]
	[Address(RVA = "0x2EBC5F0", Offset = "0x2EBABF0", VA = "0x182EBC5F0")]
	public readonly bool IntersectRay(Ray ray, out float distance)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000380")]
	[Address(RVA = "0x2EBC910", Offset = "0x2EBAF10", VA = "0x182EBC910", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000381")]
	[Address(RVA = "0x2EBC810", Offset = "0x2EBAE10", VA = "0x182EBC810", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000382")]
	[Address(RVA = "0x2EBC4A0", Offset = "0x2EBAAA0", VA = "0x182EBC4A0")]
	[UnityEngine.Bindings.NativeMethod("IsInside", IsThreadSafe = true)]
	private readonly extern bool Internal_Contains(in Vector3 point);

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000383")]
	[Address(RVA = "0x2EBC220", Offset = "0x2EBA820", VA = "0x182EBC220")]
	public readonly bool Contains(Vector3 point)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000384")]
	[Address(RVA = "0x2EBC4F0", Offset = "0x2EBAAF0", VA = "0x182EBC4F0")]
	[UnityEngine.Bindings.FreeFunction("BoundsScripting::SqrDistance", HasExplicitThis = true, IsThreadSafe = true)]
	private readonly extern float Internal_SqrDistance(in Vector3 point);

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000385")]
	[Address(RVA = "0x2EBC7C0", Offset = "0x2EBADC0", VA = "0x182EBC7C0")]
	public readonly float SqrDistance(Vector3 point)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000386")]
	[Address(RVA = "0x2EBC540", Offset = "0x2EBAB40", VA = "0x182EBC540")]
	[UnityEngine.Bindings.FreeFunction("IntersectRayAABB", IsThreadSafe = true)]
	private static extern bool IntersectRayAABB(in Ray ray, in Bounds bounds, out float dist);

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x2EBC440", Offset = "0x2EBAA40", VA = "0x182EBC440")]
	[UnityEngine.Bindings.FreeFunction("BoundsScripting::ClosestPoint", HasExplicitThis = true, IsThreadSafe = true)]
	private readonly Vector3 Internal_ClosestPoint(in Vector3 point)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000388")]
	[Address(RVA = "0x2EBC1A0", Offset = "0x2EBA7A0", VA = "0x182EBC1A0")]
	public readonly Vector3 ClosestPoint(Vector3 point)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000389")]
	[Address(RVA = "0x2EBC3E0", Offset = "0x2EBA9E0", VA = "0x182EBC3E0")]
	private static extern void Internal_ClosestPoint_Injected(ref Bounds _unity_self, in Vector3 point, out Vector3 ret);
}
