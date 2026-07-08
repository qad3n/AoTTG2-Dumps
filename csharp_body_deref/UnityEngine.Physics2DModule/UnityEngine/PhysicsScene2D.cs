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
	[Address(RVA = "0x4B4BDD0", Offset = "0x4B4BDD0", VA = "0x4B4BDD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4B4BEB0", Offset = "0x4B4BEB0", VA = "0x4B4BEB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4B4BEC0", Offset = "0x4B4BEC0", VA = "0x4B4BEC0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4B4BF20", Offset = "0x4B4BF20", VA = "0x4B4BF20", Slot = "4")]
	public bool Equals(PhysicsScene2D other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4B4BF30", Offset = "0x4B4BF30", VA = "0x4B4BF30")]
	public RaycastHit2D Raycast(Vector2 origin, Vector2 direction, float distance, [DefaultValue("Physics2D.DefaultRaycastLayers")] int layerMask = -5)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4B4C220", Offset = "0x4B4C220", VA = "0x4B4C220")]
	public RaycastHit2D Raycast(Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4B4C310", Offset = "0x4B4C310", VA = "0x4B4C310")]
	public int Raycast(Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter, RaycastHit2D[] results)
	{
		return default(int);
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4B4C490", Offset = "0x4B4C490", VA = "0x4B4C490")]
	public int Raycast(Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter, List<RaycastHit2D> results)
	{
		return default(int);
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4B4C180", Offset = "0x4B4C180", VA = "0x4B4C180")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsQuery2D", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	[UnityEngine.Bindings.NativeMethod("Raycast_Binding")]
	private static RaycastHit2D Raycast_Internal(PhysicsScene2D physicsScene, Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4B4C320", Offset = "0x4B4C320", VA = "0x4B4C320")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsQuery2D", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	[UnityEngine.Bindings.NativeMethod("RaycastArray_Binding")]
	private static int RaycastArray_Internal(PhysicsScene2D physicsScene, Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter, [UnityEngine.Bindings.NotNull("ArgumentNullException")] RaycastHit2D[] results)
	{
		return default(int);
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4B4C520", Offset = "0x4B4C520", VA = "0x4B4C520")]
	[UnityEngine.Bindings.NativeMethod("RaycastList_Binding")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsQuery2D", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static int RaycastList_Internal(PhysicsScene2D physicsScene, Vector2 origin, Vector2 direction, float distance, ContactFilter2D contactFilter, [UnityEngine.Bindings.NotNull("ArgumentNullException")] List<RaycastHit2D> results)
	{
		return default(int);
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4B4C6F0", Offset = "0x4B4C6F0", VA = "0x4B4C6F0")]
	public int GetRayIntersection(Ray ray, float distance, RaycastHit2D[] results, [DefaultValue("Physics2D.DefaultRaycastLayers")] int layerMask = -5)
	{
		return default(int);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4B4C720", Offset = "0x4B4C720", VA = "0x4B4C720")]
	[UnityEngine.Bindings.NativeMethod("GetRayIntersectionArray_Binding")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsQuery2D", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static int GetRayIntersectionArray_Internal(PhysicsScene2D physicsScene, Vector3 origin, Vector3 direction, float distance, int layerMask, [UnityEngine.Bindings.NotNull("ArgumentNullException")] RaycastHit2D[] results)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4B4C5A0", Offset = "0x4B4C5A0", VA = "0x4B4C5A0")]
	private static extern void Raycast_Internal_Injected([In] ref PhysicsScene2D physicsScene, [In] ref Vector2 origin, [In] ref Vector2 direction, float distance, [In] ref ContactFilter2D contactFilter, out RaycastHit2D ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000F")]
	[Address(RVA = "0x4B4C610", Offset = "0x4B4C610", VA = "0x4B4C610")]
	private static extern int RaycastArray_Internal_Injected([In] ref PhysicsScene2D physicsScene, [In] ref Vector2 origin, [In] ref Vector2 direction, float distance, [In] ref ContactFilter2D contactFilter, ref UnityEngine.Bindings.ManagedSpanWrapper results);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4B4C680", Offset = "0x4B4C680", VA = "0x4B4C680")]
	private static extern int RaycastList_Internal_Injected([In] ref PhysicsScene2D physicsScene, [In] ref Vector2 origin, [In] ref Vector2 direction, float distance, [In] ref ContactFilter2D contactFilter, List<RaycastHit2D> results);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4B4C8A0", Offset = "0x4B4C8A0", VA = "0x4B4C8A0")]
	private static extern int GetRayIntersectionArray_Internal_Injected([In] ref PhysicsScene2D physicsScene, [In] ref Vector3 origin, [In] ref Vector3 direction, float distance, int layerMask, ref UnityEngine.Bindings.ManagedSpanWrapper results);
}
