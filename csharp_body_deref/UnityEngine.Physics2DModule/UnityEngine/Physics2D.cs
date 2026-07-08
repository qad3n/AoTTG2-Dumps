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
		[Address(RVA = "0x4B4C910", Offset = "0x4B4C910", VA = "0x4B4C910")]
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
		[Address(RVA = "0x4B4C920", Offset = "0x4B4C920", VA = "0x4B4C920")]
		get;
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4B4C950", Offset = "0x4B4C950", VA = "0x4B4C950")]
	[ExcludeFromDocs]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4B4CAF0", Offset = "0x4B4CAF0", VA = "0x4B4CAF0")]
	[ExcludeFromDocs]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction, float distance)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4B4CC90", Offset = "0x4B4CC90", VA = "0x4B4CC90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[ExcludeFromDocs]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction, float distance, int layerMask)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4B4CE30", Offset = "0x4B4CE30", VA = "0x4B4CE30")]
	[ExcludeFromDocs]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction, float distance, int layerMask, float minDepth)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4B4CFD0", Offset = "0x4B4CFD0", VA = "0x4B4CFD0")]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float distance, [UnityEngine.Internal.DefaultValue("DefaultRaycastLayers")] int layerMask, [UnityEngine.Internal.DefaultValue("-Mathf.Infinity")] float minDepth, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float maxDepth)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4B4D180", Offset = "0x4B4D180", VA = "0x4B4D180")]
	[ExcludeFromDocs]
	public static int Raycast(Vector2 origin, Vector2 direction, ContactFilter2D contactFilter, RaycastHit2D[] results)
	{
		return default(int);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4B4D200", Offset = "0x4B4D200", VA = "0x4B4D200")]
	public static int Raycast(Vector2 origin, Vector2 direction, ContactFilter2D contactFilter, RaycastHit2D[] results, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float distance)
	{
		return default(int);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4B4D290", Offset = "0x4B4D290", VA = "0x4B4D290")]
	public static int Raycast(Vector2 origin, Vector2 direction, ContactFilter2D contactFilter, List<RaycastHit2D> results, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float distance = float.PositiveInfinity)
	{
		return default(int);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4B4D370", Offset = "0x4B4D370", VA = "0x4B4D370")]
	[ExcludeFromDocs]
	public static RaycastHit2D[] GetRayIntersectionAll(Ray ray)
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4B4D530", Offset = "0x4B4D530", VA = "0x4B4D530")]
	[ExcludeFromDocs]
	public static RaycastHit2D[] GetRayIntersectionAll(Ray ray, float distance)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4B4D630", Offset = "0x4B4D630", VA = "0x4B4D630")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static RaycastHit2D[] GetRayIntersectionAll(Ray ray, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float distance, [UnityEngine.Internal.DefaultValue("DefaultRaycastLayers")] int layerMask)
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4B4D470", Offset = "0x4B4D470", VA = "0x4B4D470")]
	[UnityEngine.Bindings.NativeMethod("GetRayIntersectionAll_Binding")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsQuery2D", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static RaycastHit2D[] GetRayIntersectionAll_Internal(PhysicsScene2D physicsScene, Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4B4D790", Offset = "0x4B4D790", VA = "0x4B4D790")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static int GetRayIntersectionNonAlloc(Ray ray, RaycastHit2D[] results, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float distance, [UnityEngine.Internal.DefaultValue("DefaultRaycastLayers")] int layerMask)
	{
		return default(int);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4B4D820", Offset = "0x4B4D820", VA = "0x4B4D820")]
	[ExcludeFromDocs]
	[Obsolete("Physics2D.GetRayIntersectionNonAlloc is deprecated. Use Physics2D.GetRayIntersection instead.", false)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public static int GetRayIntersectionNonAlloc(Ray ray, RaycastHit2D[] results)
	{
		return default(int);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4B4D8A0", Offset = "0x4B4D8A0", VA = "0x4B4D8A0")]
	[Obsolete("Physics2D.GetRayIntersectionNonAlloc is deprecated. Use Physics2D.GetRayIntersection instead.", false)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[ExcludeFromDocs]
	public static int GetRayIntersectionNonAlloc(Ray ray, RaycastHit2D[] results, float distance)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4B4D730", Offset = "0x4B4D730", VA = "0x4B4D730")]
	private static extern RaycastHit2D[] GetRayIntersectionAll_Internal_Injected([In] ref PhysicsScene2D physicsScene, [In] ref Vector3 origin, [In] ref Vector3 direction, float distance, int layerMask);
}
