// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Physics2D
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000003")]
[UnityEngine.Bindings.NativeHeader("Physics2DScriptingClasses.h")]
[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager2D()", UnityEngine.Bindings.StaticAccessorType.Arrow)]
[UnityEngine.Bindings.NativeHeader("Modules/Physics2D/PhysicsManager2D.h")]
public class Physics2D
{
	[Token(Token = "0x4000002")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static List<Rigidbody2D> m_LastDisabledRigidbody2D;

	[Token(Token = "0x17000001")]
	public static PhysicsScene2D defaultPhysicsScene
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x69C6BF0", Offset = "0x69C5BF0", VA = "0x69C6BF0")]
		get
		{
			return default(PhysicsScene2D);
		}
	}

	[Token(Token = "0x17000002")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysics2DSettings()")]
	public static extern bool queriesHitTriggers
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x69C6C00", Offset = "0x69C5C00", VA = "0x69C6C00")]
		get;
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x69C6C30", Offset = "0x69C5C30", VA = "0x69C6C30")]
	[ExcludeFromDocs]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x69C6CF0", Offset = "0x69C5CF0", VA = "0x69C6CF0")]
	[ExcludeFromDocs]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction, float distance)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x69C6DC0", Offset = "0x69C5DC0", VA = "0x69C6DC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[ExcludeFromDocs]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction, float distance, int layerMask)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x69C6F50", Offset = "0x69C5F50", VA = "0x69C6F50")]
	[ExcludeFromDocs]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction, float distance, int layerMask, float minDepth)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x69C70F0", Offset = "0x69C60F0", VA = "0x69C70F0")]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float distance, [UnityEngine.Internal.DefaultValue("DefaultRaycastLayers")] int layerMask, [UnityEngine.Internal.DefaultValue("-Mathf.Infinity")] float minDepth, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float maxDepth)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x69C72A0", Offset = "0x69C62A0", VA = "0x69C72A0")]
	[ExcludeFromDocs]
	public static int Raycast(Vector2 origin, Vector2 direction, ContactFilter2D contactFilter, RaycastHit2D[] results)
	{
		return default(int);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x69C7320", Offset = "0x69C6320", VA = "0x69C7320")]
	public static int Raycast(Vector2 origin, Vector2 direction, ContactFilter2D contactFilter, RaycastHit2D[] results, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float distance)
	{
		return default(int);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x69C73B0", Offset = "0x69C63B0", VA = "0x69C73B0")]
	public static int Raycast(Vector2 origin, Vector2 direction, ContactFilter2D contactFilter, List<RaycastHit2D> results, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float distance = 1f / 0f)
	{
		return default(int);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x69C7440", Offset = "0x69C6440", VA = "0x69C7440")]
	[ExcludeFromDocs]
	public static RaycastHit2D[] GetRayIntersectionAll(Ray ray)
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x69C7610", Offset = "0x69C6610", VA = "0x69C7610")]
	[ExcludeFromDocs]
	public static RaycastHit2D[] GetRayIntersectionAll(Ray ray, float distance)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x69C7690", Offset = "0x69C6690", VA = "0x69C7690")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static RaycastHit2D[] GetRayIntersectionAll(Ray ray, float distance, [UnityEngine.Internal.DefaultValue("DefaultRaycastLayers")] int layerMask = -5)
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x69C74B0", Offset = "0x69C64B0", VA = "0x69C74B0")]
	[UnityEngine.Bindings.NativeMethod("GetRayIntersectionAll_Binding")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsQuery2D", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static RaycastHit2D[] GetRayIntersectionAll_Internal(PhysicsScene2D physicsScene, Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x69C7780", Offset = "0x69C6780", VA = "0x69C7780")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[ExcludeFromDocs]
	public static int GetRayIntersectionNonAlloc(Ray ray, RaycastHit2D[] results, float distance, [UnityEngine.Internal.DefaultValue("DefaultRaycastLayers")] int layerMask = -5)
	{
		return default(int);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x69C7810", Offset = "0x69C6810", VA = "0x69C7810")]
	[ExcludeFromDocs]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("GetRayIntersectionNonAlloc is deprecated. Please use GetRayIntersection.", false)]
	public static int GetRayIntersectionNonAlloc(Ray ray, RaycastHit2D[] results)
	{
		return default(int);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x69C7890", Offset = "0x69C6890", VA = "0x69C7890")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("GetRayIntersectionNonAlloc is deprecated. Please use GetRayIntersection.", false)]
	[ExcludeFromDocs]
	public static int GetRayIntersectionNonAlloc(Ray ray, RaycastHit2D[] results, float distance)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x69C7710", Offset = "0x69C6710", VA = "0x69C7710")]
	private static extern void GetRayIntersectionAll_Internal_Injected([In] ref PhysicsScene2D physicsScene, [In] ref Vector3 origin, [In] ref Vector3 direction, float distance, int layerMask, out UnityEngine.Bindings.BlittableArrayWrapper ret);
}
