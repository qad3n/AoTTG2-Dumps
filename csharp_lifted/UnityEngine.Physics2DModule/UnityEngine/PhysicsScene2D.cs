// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.PhysicsScene2D
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;

namespace UnityEngine;

[Token(Token = "0x2000002")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics2D/Public/PhysicsSceneHandle2D.h")]
public struct PhysicsScene2D : IEquatable<PhysicsScene2D>
{
	[Token(Token = "0x4000001")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int m_Handle;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x69C6020", Offset = "0x69C5020", VA = "0x69C6020", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x69C6080", Offset = "0x69C5080", VA = "0x69C6080", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x69C6090", Offset = "0x69C5090", VA = "0x69C6090", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x69C60F0", Offset = "0x69C50F0", VA = "0x69C60F0", Slot = "4")]
	public bool Equals(PhysicsScene2D other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x69C6100", Offset = "0x69C5100", VA = "0x69C6100")]
	public RaycastHit2D Raycast(Vector2 origin, Vector2 direction, float distance, [DefaultValue("Physics2D.DefaultRaycastLayers")] int layerMask = -5)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x69C64C0", Offset = "0x69C54C0", VA = "0x69C64C0")]
	public RaycastHit2D Raycast(Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x69C6590", Offset = "0x69C5590", VA = "0x69C6590")]
	public int Raycast(Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter, RaycastHit2D[] results)
	{
		return default(int);
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x69C66C0", Offset = "0x69C56C0", VA = "0x69C66C0")]
	public int Raycast(Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter, List<RaycastHit2D> results)
	{
		return default(int);
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x69C6420", Offset = "0x69C5420", VA = "0x69C6420")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsQuery2D", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	[UnityEngine.Bindings.NativeMethod("Raycast_Binding")]
	private static RaycastHit2D Raycast_Internal(PhysicsScene2D physicsScene, Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x69C65A0", Offset = "0x69C55A0", VA = "0x69C65A0")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsQuery2D", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	[UnityEngine.Bindings.NativeMethod("RaycastArray_Binding")]
	private static int RaycastArray_Internal(PhysicsScene2D physicsScene, Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter, [UnityEngine.Bindings.NotNull] RaycastHit2D[] results)
	{
		return default(int);
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x69C66D0", Offset = "0x69C56D0", VA = "0x69C66D0")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsQuery2D", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	[UnityEngine.Bindings.NativeMethod("RaycastList_Binding")]
	private static int RaycastList_Internal(PhysicsScene2D physicsScene, Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter, [UnityEngine.Bindings.NotNull] List<RaycastHit2D> results)
	{
		return default(int);
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x69C6A30", Offset = "0x69C5A30", VA = "0x69C6A30")]
	public int GetRayIntersection(Ray ray, float distance, RaycastHit2D[] results, [DefaultValue("Physics2D.DefaultRaycastLayers")] int layerMask = -5)
	{
		return default(int);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x69C6A60", Offset = "0x69C5A60", VA = "0x69C6A60")]
	[UnityEngine.Bindings.NativeMethod("GetRayIntersectionArray_Binding")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsQuery2D", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static int GetRayIntersectionArray_Internal(PhysicsScene2D physicsScene, Vector3 origin, Vector3 direction, float distance, int layerMask, [UnityEngine.Bindings.NotNull] RaycastHit2D[] results)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000E")]
	[Address(RVA = "0x69C68E0", Offset = "0x69C58E0", VA = "0x69C68E0")]
	private static extern void Raycast_Internal_Injected([In] ref PhysicsScene2D physicsScene, [In] ref Vector2 origin, [In] ref Vector2 direction, float distance, [In] ref ContactFilter2D contactFilter, out RaycastHit2D ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000F")]
	[Address(RVA = "0x69C6950", Offset = "0x69C5950", VA = "0x69C6950")]
	private static extern int RaycastArray_Internal_Injected([In] ref PhysicsScene2D physicsScene, [In] ref Vector2 origin, [In] ref Vector2 direction, float distance, [In] ref ContactFilter2D contactFilter, ref UnityEngine.Bindings.ManagedSpanWrapper results);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000010")]
	[Address(RVA = "0x69C69C0", Offset = "0x69C59C0", VA = "0x69C69C0")]
	private static extern int RaycastList_Internal_Injected([In] ref PhysicsScene2D physicsScene, [In] ref Vector2 origin, [In] ref Vector2 direction, float distance, [In] ref ContactFilter2D contactFilter, ref UnityEngine.Bindings.BlittableListWrapper results);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000011")]
	[Address(RVA = "0x69C6B80", Offset = "0x69C5B80", VA = "0x69C6B80")]
	private static extern int GetRayIntersectionArray_Internal_Injected([In] ref PhysicsScene2D physicsScene, [In] ref Vector3 origin, [In] ref Vector3 direction, float distance, int layerMask, ref UnityEngine.Bindings.ManagedSpanWrapper results);
}
