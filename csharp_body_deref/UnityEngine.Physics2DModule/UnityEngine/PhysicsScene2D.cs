// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.PhysicsScene2D
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x2FD7130", Offset = "0x2FD5730", VA = "0x182FD7130", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x2FD64F0", Offset = "0x2FD4AF0", VA = "0x182FD64F0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x2ED9400", Offset = "0x2ED7A00", VA = "0x182ED9400", Slot = "4")]
	public bool Equals(PhysicsScene2D other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x2FD6EE0", Offset = "0x2FD54E0", VA = "0x182FD6EE0")]
	public RaycastHit2D Raycast(Vector2 origin, Vector2 direction, float distance, [DefaultValue("Physics2D.DefaultRaycastLayers")] int layerMask = -5)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x2FD7050", Offset = "0x2FD5650", VA = "0x182FD7050")]
	public RaycastHit2D Raycast(Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x2FD6D40", Offset = "0x2FD5340", VA = "0x182FD6D40")]
	public int Raycast(Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter, RaycastHit2D[] results)
	{
		return default(int);
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x2FD6E90", Offset = "0x2FD5490", VA = "0x182FD6E90")]
	public int Raycast(Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter, List<RaycastHit2D> results)
	{
		return default(int);
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x2FD6CC0", Offset = "0x2FD52C0", VA = "0x182FD6CC0")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsQuery2D", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	[UnityEngine.Bindings.NativeMethod("Raycast_Binding")]
	private static RaycastHit2D Raycast_Internal(PhysicsScene2D physicsScene, Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x2FD68B0", Offset = "0x2FD4EB0", VA = "0x182FD68B0")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsQuery2D", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	[UnityEngine.Bindings.NativeMethod("RaycastArray_Binding")]
	private static int RaycastArray_Internal(PhysicsScene2D physicsScene, Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter, [UnityEngine.Bindings.NotNull] RaycastHit2D[] results)
	{
		return default(int);
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x2FD6A40", Offset = "0x2FD5040", VA = "0x182FD6A40")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsQuery2D", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	[UnityEngine.Bindings.NativeMethod("RaycastList_Binding")]
	private static int RaycastList_Internal(PhysicsScene2D physicsScene, Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter, [UnityEngine.Bindings.NotNull] List<RaycastHit2D> results)
	{
		return default(int);
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x2FD6700", Offset = "0x2FD4D00", VA = "0x182FD6700")]
	public int GetRayIntersection(Ray ray, float distance, RaycastHit2D[] results, [DefaultValue("Physics2D.DefaultRaycastLayers")] int layerMask = -5)
	{
		return default(int);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x2FD65E0", Offset = "0x2FD4BE0", VA = "0x182FD65E0")]
	[UnityEngine.Bindings.NativeMethod("GetRayIntersectionArray_Binding")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsQuery2D", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static int GetRayIntersectionArray_Internal(PhysicsScene2D physicsScene, Vector3 origin, Vector3 direction, float distance, int layerMask, [UnityEngine.Bindings.NotNull] RaycastHit2D[] results)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000E")]
	[Address(RVA = "0x2FD6C50", Offset = "0x2FD5250", VA = "0x182FD6C50")]
	private static extern void Raycast_Internal_Injected([In] ref PhysicsScene2D physicsScene, [In] ref Vector2 origin, [In] ref Vector2 direction, float distance, [In] ref ContactFilter2D contactFilter, out RaycastHit2D ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000F")]
	[Address(RVA = "0x2FD6840", Offset = "0x2FD4E40", VA = "0x182FD6840")]
	private static extern int RaycastArray_Internal_Injected([In] ref PhysicsScene2D physicsScene, [In] ref Vector2 origin, [In] ref Vector2 direction, float distance, [In] ref ContactFilter2D contactFilter, ref UnityEngine.Bindings.ManagedSpanWrapper results);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000010")]
	[Address(RVA = "0x2FD69D0", Offset = "0x2FD4FD0", VA = "0x182FD69D0")]
	private static extern int RaycastList_Internal_Injected([In] ref PhysicsScene2D physicsScene, [In] ref Vector2 origin, [In] ref Vector2 direction, float distance, [In] ref ContactFilter2D contactFilter, ref UnityEngine.Bindings.BlittableListWrapper results);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000011")]
	[Address(RVA = "0x2FD6570", Offset = "0x2FD4B70", VA = "0x182FD6570")]
	private static extern int GetRayIntersectionArray_Internal_Injected([In] ref PhysicsScene2D physicsScene, [In] ref Vector3 origin, [In] ref Vector3 direction, float distance, int layerMask, ref UnityEngine.Bindings.ManagedSpanWrapper results);
}
