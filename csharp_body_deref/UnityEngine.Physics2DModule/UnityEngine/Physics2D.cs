// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Physics2D
// Update status: CHANGED in this game update
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
[UnityEngine.Bindings.NativeHeader("Modules/Physics2D/PhysicsManager2D.h")]
[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager2D()", UnityEngine.Bindings.StaticAccessorType.Arrow)]
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
		[Address(RVA = "0xB62B40", Offset = "0xB61140", VA = "0x180B62B40")]
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
		[Address(RVA = "0x2FD0C50", Offset = "0x2FCF250", VA = "0x182FD0C50")]
		get;
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x2FD0AF0", Offset = "0x2FCF0F0", VA = "0x182FD0AF0")]
	[ExcludeFromDocs]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x2FD07A0", Offset = "0x2FCEDA0", VA = "0x182FD07A0")]
	[ExcludeFromDocs]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction, float distance)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x2FD0450", Offset = "0x2FCEA50", VA = "0x182FD0450")]
	[ExcludeFromDocs]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction, float distance, int layerMask)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x2FD0940", Offset = "0x2FCEF40", VA = "0x182FD0940")]
	[ExcludeFromDocs]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction, float distance, int layerMask, float minDepth)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x2FD0100", Offset = "0x2FCE700", VA = "0x182FD0100")]
	public static RaycastHit2D Raycast(Vector2 origin, Vector2 direction, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float distance, [UnityEngine.Internal.DefaultValue("DefaultRaycastLayers")] int layerMask, [UnityEngine.Internal.DefaultValue("-Mathf.Infinity")] float minDepth, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float maxDepth)
	{
		return default(RaycastHit2D);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x2FD02B0", Offset = "0x2FCE8B0", VA = "0x182FD02B0")]
	[ExcludeFromDocs]
	public static int Raycast(Vector2 origin, Vector2 direction, ContactFilter2D contactFilter, RaycastHit2D[] results)
	{
		return default(int);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x2FD0600", Offset = "0x2FCEC00", VA = "0x182FD0600")]
	public static int Raycast(Vector2 origin, Vector2 direction, ContactFilter2D contactFilter, RaycastHit2D[] results, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float distance)
	{
		return default(int);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x2FD0880", Offset = "0x2FCEE80", VA = "0x182FD0880")]
	public static int Raycast(Vector2 origin, Vector2 direction, ContactFilter2D contactFilter, List<RaycastHit2D> results, [UnityEngine.Internal.DefaultValue("Mathf.Infinity")] float distance = 1f / 0f)
	{
		return default(int);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x2FCFBA0", Offset = "0x2FCE1A0", VA = "0x182FCFBA0")]
	[ExcludeFromDocs]
	public static RaycastHit2D[] GetRayIntersectionAll(Ray ray)
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x2FCFB00", Offset = "0x2FCE100", VA = "0x182FCFB00")]
	[ExcludeFromDocs]
	public static RaycastHit2D[] GetRayIntersectionAll(Ray ray, float distance)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x2FCFA60", Offset = "0x2FCE060", VA = "0x182FCFA60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static RaycastHit2D[] GetRayIntersectionAll(Ray ray, float distance, [UnityEngine.Internal.DefaultValue("DefaultRaycastLayers")] int layerMask = -5)
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x2FCF930", Offset = "0x2FCDF30", VA = "0x182FCF930")]
	[UnityEngine.Bindings.NativeMethod("GetRayIntersectionAll_Binding")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsQuery2D", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static RaycastHit2D[] GetRayIntersectionAll_Internal(PhysicsScene2D physicsScene, Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x2FCFDD0", Offset = "0x2FCE3D0", VA = "0x182FCFDD0")]
	[ExcludeFromDocs]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static int GetRayIntersectionNonAlloc(Ray ray, RaycastHit2D[] results, float distance, [UnityEngine.Internal.DefaultValue("DefaultRaycastLayers")] int layerMask = -5)
	{
		return default(int);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x2FCFF70", Offset = "0x2FCE570", VA = "0x182FCFF70")]
	[ExcludeFromDocs]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("GetRayIntersectionNonAlloc is deprecated. Please use GetRayIntersection.", false)]
	public static int GetRayIntersectionNonAlloc(Ray ray, RaycastHit2D[] results)
	{
		return default(int);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x2FCFC30", Offset = "0x2FCE230", VA = "0x182FCFC30")]
	[ExcludeFromDocs]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("GetRayIntersectionNonAlloc is deprecated. Please use GetRayIntersection.", false)]
	public static int GetRayIntersectionNonAlloc(Ray ray, RaycastHit2D[] results, float distance)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x2FCF8C0", Offset = "0x2FCDEC0", VA = "0x182FCF8C0")]
	private static extern void GetRayIntersectionAll_Internal_Injected([In] ref PhysicsScene2D physicsScene, [In] ref Vector3 origin, [In] ref Vector3 direction, float distance, int layerMask, out UnityEngine.Bindings.BlittableArrayWrapper ret);
}
