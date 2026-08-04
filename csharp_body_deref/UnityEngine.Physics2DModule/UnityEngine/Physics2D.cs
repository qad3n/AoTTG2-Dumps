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
[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager2D()", UnityEngine.Bindings.StaticAccessorType.Arrow)]
[UnityEngine.Bindings.NativeHeader("Physics2DScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics2D/PhysicsManager2D.h")]
[UnityEngine.Bindings.NativeHeader("Physics2DScriptingClasses.h")]
public class Physics2D
{
	[Token(Token = "0x4000002")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static List<Rigidbody2D> m_LastDisabledRigidbody2D;

	[Token(Token = "0x17000001")]
	public static PhysicsScene2D defaultPhysicsScene
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x4E74240", Offset = "0x4E74240", VA = "0x4E74240")]
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
		[Address(RVA = "0x4E74250", Offset = "0x4E74250", VA = "0x4E74250")]
		get;
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4E74280", Offset = "0x4E74280", VA = "0x4E74280")]
	[ExcludeFromDocs]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4E74420", Offset = "0x4E74420", VA = "0x4E74420")]
	[ExcludeFromDocs]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction, float distance)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4E745C0", Offset = "0x4E745C0", VA = "0x4E745C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[ExcludeFromDocs]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction, float distance, int layerMask)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4E74760", Offset = "0x4E74760", VA = "0x4E74760")]
	[ExcludeFromDocs]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction, float distance, int layerMask, float minDepth)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4E74900", Offset = "0x4E74900", VA = "0x4E74900")]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float distance, [UnityEngine.Internal.DefaultValue("DefaultRaycastLayers")] int layerMask, [UnityEngine.Internal.DefaultValue("-Mathf.Infinity")] float minDepth, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float maxDepth)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4E74AB0", Offset = "0x4E74AB0", VA = "0x4E74AB0")]
	[ExcludeFromDocs]
	public static int Raycast(Vector2 origin, Vector2 direction, ContactFilter2D contactFilter, RaycastHit2D[] results)
	{
		return default(int);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4E74B30", Offset = "0x4E74B30", VA = "0x4E74B30")]
	public static int Raycast(Vector2 origin, Vector2 direction, ContactFilter2D contactFilter, RaycastHit2D[] results, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float distance)
	{
		return default(int);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4E74BC0", Offset = "0x4E74BC0", VA = "0x4E74BC0")]
	public static int Raycast(Vector2 origin, Vector2 direction, ContactFilter2D contactFilter, List<RaycastHit2D> results, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float distance = float.PositiveInfinity)
	{
		return default(int);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4E74CA0", Offset = "0x4E74CA0", VA = "0x4E74CA0")]
	[ExcludeFromDocs]
	public static RaycastHit2D[] GetRayIntersectionAll(Ray ray)
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4E74E60", Offset = "0x4E74E60", VA = "0x4E74E60")]
	[ExcludeFromDocs]
	public static RaycastHit2D[] GetRayIntersectionAll(Ray ray, float distance)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4E74F60", Offset = "0x4E74F60", VA = "0x4E74F60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static RaycastHit2D[] GetRayIntersectionAll(Ray ray, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float distance, [UnityEngine.Internal.DefaultValue("DefaultRaycastLayers")] int layerMask)
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4E74DA0", Offset = "0x4E74DA0", VA = "0x4E74DA0")]
	[UnityEngine.Bindings.NativeMethod("GetRayIntersectionAll_Binding")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsQuery2D", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static RaycastHit2D[] GetRayIntersectionAll_Internal(PhysicsScene2D physicsScene, Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4E750C0", Offset = "0x4E750C0", VA = "0x4E750C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static int GetRayIntersectionNonAlloc(Ray ray, RaycastHit2D[] results, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float distance, [UnityEngine.Internal.DefaultValue("DefaultRaycastLayers")] int layerMask)
	{
		return default(int);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4E75150", Offset = "0x4E75150", VA = "0x4E75150")]
	[ExcludeFromDocs]
	[Obsolete("Physics2D.GetRayIntersectionNonAlloc is deprecated. Use Physics2D.GetRayIntersection instead.", false)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public static int GetRayIntersectionNonAlloc(Ray ray, RaycastHit2D[] results)
	{
		return default(int);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4E751D0", Offset = "0x4E751D0", VA = "0x4E751D0")]
	[Obsolete("Physics2D.GetRayIntersectionNonAlloc is deprecated. Use Physics2D.GetRayIntersection instead.", false)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[ExcludeFromDocs]
	public static int GetRayIntersectionNonAlloc(Ray ray, RaycastHit2D[] results, float distance)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4E75060", Offset = "0x4E75060", VA = "0x4E75060")]
	private static extern RaycastHit2D[] GetRayIntersectionAll_Internal_Injected([In] ref PhysicsScene2D physicsScene, [In] ref Vector3 origin, [In] ref Vector3 direction, float distance, int layerMask);
}
