// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Physics
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200000E")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/PhysicsQuery.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/PhysicsManager.h")]
[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public class Physics
{
	[Token(Token = "0x200000F")]
	public delegate void ContactEventDelegate(PhysicsScene scene, NativeArray<ContactPairHeader>.ReadOnly headerArray);

	[Token(Token = "0x400001C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<PhysicsScene, NativeArray<ModifiableContactPair>> ContactModifyEvent;

	[Token(Token = "0x400001D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<PhysicsScene, NativeArray<ModifiableContactPair>> ContactModifyEventCCD;

	[Token(Token = "0x400001E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<PhysicsScene, IntPtr, int, bool> GenericContactModifyEvent;

	[Token(Token = "0x400001F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static ContactEventDelegate ContactEvent;

	[Token(Token = "0x4000020")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly Collision s_ReusableCollision;

	[Token(Token = "0x1700001E")]
	public static Vector3 gravity
	{
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x2FE6930", Offset = "0x2FE4F30", VA = "0x182FE6930")]
		[UnityEngine.Bindings.ThreadSafe]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700001F")]
	public static extern bool invokeCollisionCallbacks
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x2FE69A0", Offset = "0x2FE4FA0", VA = "0x182FE69A0")]
		get;
	}

	[Token(Token = "0x17000020")]
	public static PhysicsScene defaultPhysicsScene
	{
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x2FDFD60", Offset = "0x2FDE360", VA = "0x182FDFD60")]
		get
		{
			return default(PhysicsScene);
		}
	}

	[Token(Token = "0x17000021")]
	public static extern bool reuseCollisionCallbacks
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x2FE69D0", Offset = "0x2FE4FD0", VA = "0x182FE69D0")]
		get;
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x2FE3030", Offset = "0x2FE1630", VA = "0x182FE3030")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnSceneContactModify(PhysicsScene scene, IntPtr buffer, int count, bool isCCD)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x2FE3B90", Offset = "0x2FE2190", VA = "0x182FE3B90")]
	private static void PhysXOnSceneContactModify(PhysicsScene scene, IntPtr buffer, int count, bool isCCD)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x2FE2740", Offset = "0x2FE0D40", VA = "0x182FE2740")]
	public static void IgnoreCollision([UnityEngine.Bindings.NotNull] Collider collider1, [UnityEngine.Bindings.NotNull] Collider collider2, [DefaultValue("true")] bool ignore)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x2FE2870", Offset = "0x2FE0E70", VA = "0x182FE2870")]
	[ExcludeFromDocs]
	public static void IgnoreCollision(Collider collider1, Collider collider2)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000063")]
	[Address(RVA = "0x2FE29C0", Offset = "0x2FE0FC0", VA = "0x182FE29C0")]
	[UnityEngine.Bindings.NativeName("IgnoreCollision")]
	public static extern void IgnoreLayerCollision(int layer1, int layer2, [DefaultValue("true")] bool ignore);

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x2FE5150", Offset = "0x2FE3750", VA = "0x182FE5150")]
	public static bool Raycast(Vector3 origin, Vector3 direction, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x2FE4EB0", Offset = "0x2FE34B0", VA = "0x182FE4EB0")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x2FE5940", Offset = "0x2FE3F40", VA = "0x182FE5940")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x2FE56F0", Offset = "0x2FE3CF0", VA = "0x182FE56F0")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x2FE5610", Offset = "0x2FE3C10", VA = "0x182FE5610")]
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x2FE5220", Offset = "0x2FE3820", VA = "0x182FE5220")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x2FE4DE0", Offset = "0x2FE33E0", VA = "0x182FE4DE0")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x2FE4F80", Offset = "0x2FE3580", VA = "0x182FE4F80")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x2FE5540", Offset = "0x2FE3B40", VA = "0x182FE5540")]
	public static bool Raycast(Ray ray, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x2FE5300", Offset = "0x2FE3900", VA = "0x182FE5300")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x2FE53C0", Offset = "0x2FE39C0", VA = "0x182FE53C0")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x2FE5A00", Offset = "0x2FE4000", VA = "0x182FE5A00")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray)
	{
		return default(bool);
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x2FE5860", Offset = "0x2FE3E60", VA = "0x182FE5860")]
	public static bool Raycast(Ray ray, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x2FE5050", Offset = "0x2FE3650", VA = "0x182FE5050")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x2FE5470", Offset = "0x2FE3A70", VA = "0x182FE5470")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x2FE57A0", Offset = "0x2FE3DA0", VA = "0x182FE57A0")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, out RaycastHit hitInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x2FE2DA0", Offset = "0x2FE13A0", VA = "0x182FE2DA0")]
	public static bool Linecast(Vector3 start, Vector3 end, out RaycastHit hitInfo, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x2FE2EB0", Offset = "0x2FE14B0", VA = "0x182FE2EB0")]
	[ExcludeFromDocs]
	public static bool Linecast(Vector3 start, Vector3 end, out RaycastHit hitInfo, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x2FE1C90", Offset = "0x2FE0290", VA = "0x182FE1C90")]
	public static bool CapsuleCast(Vector3 point1, Vector3 point2, float radius, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x2FE1AD0", Offset = "0x2FE00D0", VA = "0x182FE1AD0")]
	[ExcludeFromDocs]
	public static bool CapsuleCast(Vector3 point1, Vector3 point2, float radius, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x2FE6640", Offset = "0x2FE4C40", VA = "0x182FE6640")]
	public static bool SphereCast(Vector3 origin, float radius, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x2FE64A0", Offset = "0x2FE4AA0", VA = "0x182FE64A0")]
	[ExcludeFromDocs]
	public static bool SphereCast(Vector3 origin, float radius, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x2FE1940", Offset = "0x2FDFF40", VA = "0x182FE1940")]
	public static bool BoxCast(Vector3 center, Vector3 halfExtents, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x2FE1780", Offset = "0x2FDFD80", VA = "0x182FE1780")]
	[ExcludeFromDocs]
	public static bool BoxCast(Vector3 center, Vector3 halfExtents, Vector3 direction, out RaycastHit hitInfo, Quaternion orientation, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x2FE2C50", Offset = "0x2FE1250", VA = "0x182FE2C50")]
	[UnityEngine.Bindings.FreeFunction("Physics::RaycastAll")]
	private static RaycastHit[] Internal_RaycastAll(PhysicsScene physicsScene, Ray ray, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x2FE4340", Offset = "0x2FE2940", VA = "0x182FE4340")]
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x2FE4290", Offset = "0x2FE2890", VA = "0x182FE4290")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction, float maxDistance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x2FE4570", Offset = "0x2FE2B70", VA = "0x182FE4570")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction, float maxDistance)
	{
		return null;
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x2FE4610", Offset = "0x2FE2C10", VA = "0x182FE4610")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction)
	{
		return null;
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x2FE44C0", Offset = "0x2FE2AC0", VA = "0x182FE44C0")]
	public static RaycastHit[] RaycastAll(Ray ray, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x2FE41F0", Offset = "0x2FE27F0", VA = "0x182FE41F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Ray ray, float maxDistance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x2FE4150", Offset = "0x2FE2750", VA = "0x182FE4150")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Ray ray, float maxDistance)
	{
		return null;
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x2FE46B0", Offset = "0x2FE2CB0", VA = "0x182FE46B0")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Ray ray)
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x2FE4B50", Offset = "0x2FE3150", VA = "0x182FE4B50")]
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x2FE48D0", Offset = "0x2FE2ED0", VA = "0x182FE48D0")]
	[ExcludeFromDocs]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results, float maxDistance, int layerMask)
	{
		return default(int);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x2FE4740", Offset = "0x2FE2D40", VA = "0x182FE4740")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results, float maxDistance)
	{
		return default(int);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x2FE4810", Offset = "0x2FE2E10", VA = "0x182FE4810")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results)
	{
		return default(int);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x2FE4C30", Offset = "0x2FE3230", VA = "0x182FE4C30")]
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x2FE4A70", Offset = "0x2FE3070", VA = "0x182FE4A70")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results, float maxDistance, int layerMask)
	{
		return default(int);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x2FE49A0", Offset = "0x2FE2FA0", VA = "0x182FE49A0")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results, float maxDistance)
	{
		return default(int);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x2FE4D10", Offset = "0x2FE3310", VA = "0x182FE4D10")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results)
	{
		return default(int);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x2FE3FE0", Offset = "0x2FE25E0", VA = "0x182FE3FE0")]
	[UnityEngine.Bindings.FreeFunction("Physics::SphereCastAll")]
	private static RaycastHit[] Query_SphereCastAll(PhysicsScene physicsScene, Vector3 origin, float radius, Vector3 direction, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x2FE6340", Offset = "0x2FE4940", VA = "0x182FE6340")]
	public static RaycastHit[] SphereCastAll(Vector3 origin, float radius, Vector3 direction, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x2FE61B0", Offset = "0x2FE47B0", VA = "0x182FE61B0")]
	[ExcludeFromDocs]
	public static RaycastHit[] SphereCastAll(Vector3 origin, float radius, Vector3 direction, float maxDistance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x2FE38E0", Offset = "0x2FE1EE0", VA = "0x182FE38E0")]
	[UnityEngine.Bindings.FreeFunction("Physics::OverlapSphere")]
	private static Collider[] OverlapSphere_Internal(PhysicsScene physicsScene, Vector3 position, float radius, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x2FE3AA0", Offset = "0x2FE20A0", VA = "0x182FE3AA0")]
	public static Collider[] OverlapSphere(Vector3 position, float radius, [DefaultValue("AllLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x2FE3980", Offset = "0x2FE1F80", VA = "0x182FE3980")]
	[ExcludeFromDocs]
	public static Collider[] OverlapSphere(Vector3 position, float radius, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x2FE3E10", Offset = "0x2FE2410", VA = "0x182FE3E10")]
	[UnityEngine.Bindings.FreeFunction("Physics::ComputePenetration")]
	private static bool Query_ComputePenetration([UnityEngine.Bindings.NotNull] Collider colliderA, Vector3 positionA, Quaternion rotationA, [UnityEngine.Bindings.NotNull] Collider colliderB, Vector3 positionB, Quaternion rotationB, ref Vector3 direction, ref float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x2FE21B0", Offset = "0x2FE07B0", VA = "0x182FE21B0")]
	public static bool ComputePenetration(Collider colliderA, Vector3 positionA, Quaternion rotationA, Collider colliderB, Vector3 positionB, Quaternion rotationB, out Vector3 direction, out float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x2FE3CD0", Offset = "0x2FE22D0", VA = "0x182FE3CD0")]
	[UnityEngine.Bindings.FreeFunction("Physics::ClosestPoint")]
	private static Vector3 Query_ClosestPoint([UnityEngine.Bindings.NotNull] Collider collider, Vector3 position, Quaternion rotation, Vector3 point)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x2FE2040", Offset = "0x2FE0640", VA = "0x182FE2040")]
	public static Vector3 ClosestPoint(Vector3 point, Collider collider, Vector3 position, Quaternion rotation)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x2FE37A0", Offset = "0x2FE1DA0", VA = "0x182FE37A0")]
	public static int OverlapSphereNonAlloc(Vector3 position, float radius, Collider[] results, [DefaultValue("AllLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x2FE1E90", Offset = "0x2FE0490", VA = "0x182FE1E90")]
	[UnityEngine.Bindings.FreeFunction("Physics::CapsuleTest")]
	private static bool CheckCapsule_Internal(PhysicsScene physicsScene, Vector3 start, Vector3 end, float radius, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x2FE1F30", Offset = "0x2FE0530", VA = "0x182FE1F30")]
	public static bool CheckCapsule(Vector3 start, Vector3 end, float radius, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x2FE33B0", Offset = "0x2FE19B0", VA = "0x182FE33B0")]
	[UnityEngine.Bindings.FreeFunction("Physics::OverlapBox")]
	private static Collider[] OverlapBox_Internal(PhysicsScene physicsScene, Vector3 center, Vector3 halfExtents, Quaternion orientation, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x2FE3450", Offset = "0x2FE1A50", VA = "0x182FE3450")]
	public static Collider[] OverlapBox(Vector3 center, Vector3 halfExtents, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("AllLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x2FE3560", Offset = "0x2FE1B60", VA = "0x182FE3560")]
	[ExcludeFromDocs]
	public static Collider[] OverlapBox(Vector3 center, Vector3 halfExtents, Quaternion orientation, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x2FE3270", Offset = "0x2FE1870", VA = "0x182FE3270")]
	public static int OverlapBoxNonAlloc(Vector3 center, Vector3 halfExtents, Collider[] results, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("AllLayers")] int mask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x2FE2A60", Offset = "0x2FE1060", VA = "0x182FE2A60")]
	[UnityEngine.Bindings.FreeFunction("Physics::BoxCastAll")]
	private static RaycastHit[] Internal_BoxCastAll(PhysicsScene physicsScene, Vector3 center, Vector3 halfExtents, Vector3 direction, Quaternion orientation, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x2FE1450", Offset = "0x2FDFA50", VA = "0x182FE1450")]
	public static RaycastHit[] BoxCastAll(Vector3 center, Vector3 halfExtents, Vector3 direction, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x2FE15D0", Offset = "0x2FDFBD0", VA = "0x182FE15D0")]
	[ExcludeFromDocs]
	public static RaycastHit[] BoxCastAll(Vector3 center, Vector3 halfExtents, Vector3 direction, Quaternion orientation, float maxDistance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x2FE36A0", Offset = "0x2FE1CA0", VA = "0x182FE36A0")]
	public static int OverlapCapsuleNonAlloc(Vector3 point0, Vector3 point1, float radius, Collider[] results, [DefaultValue("AllLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x2FE13D0", Offset = "0x2FDF9D0", VA = "0x182FE13D0")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager()")]
	public static void BakeMesh(EntityId meshEntityId, bool convex, MeshColliderCookingOptions cookingOptions)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x2FE1320", Offset = "0x2FDF920", VA = "0x182FE1320")]
	public static void BakeMesh(EntityId meshEntityId, bool convex)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x2FE24C0", Offset = "0x2FE0AC0", VA = "0x182FE24C0")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static Collider GetColliderByInstanceID(EntityId entityId)
	{
		return null;
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x2FE2400", Offset = "0x2FE0A00", VA = "0x182FE2400")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static Component GetBodyByInstanceID(EntityId entityId)
	{
		return null;
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x2FE5F30", Offset = "0x2FE4530", VA = "0x182FE5F30")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static void SendOnCollisionEnter(Component component, Collision collision)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x2FE6110", Offset = "0x2FE4710", VA = "0x182FE6110")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static void SendOnCollisionStay(Component component, Collision collision)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x2FE6020", Offset = "0x2FE4620", VA = "0x182FE6020")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static void SendOnCollisionExit(Component component, Collision collision)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x2FE30C0", Offset = "0x2FE16C0", VA = "0x182FE30C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnSceneContact(PhysicsScene scene, IntPtr buffer, int count)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x2FE5AA0", Offset = "0x2FE40A0", VA = "0x182FE5AA0")]
	private static void ReportContacts(NativeArray<ContactPairHeader>.ReadOnly array)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x2FE2540", Offset = "0x2FE0B40", VA = "0x182FE2540")]
	private static Collision GetCollisionToReport(in ContactPairHeader header, in ContactPair pair, bool flipped)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x2FE68F0", Offset = "0x2FE4EF0", VA = "0x182FE68F0")]
	private static extern void get_gravity_Injected(out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x2FE26E0", Offset = "0x2FE0CE0", VA = "0x182FE26E0")]
	private static extern void IgnoreCollision_Injected(IntPtr collider1, IntPtr collider2, [DefaultValue("true")] bool ignore);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x2FE2BE0", Offset = "0x2FE11E0", VA = "0x182FE2BE0")]
	private static extern void Internal_RaycastAll_Injected([In] ref PhysicsScene physicsScene, [In] ref Ray ray, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x2FE3F70", Offset = "0x2FE2570", VA = "0x182FE3F70")]
	private static extern void Query_SphereCastAll_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 origin, float radius, [In] ref Vector3 direction, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x2FE3870", Offset = "0x2FE1E70", VA = "0x182FE3870")]
	private static extern Collider[] OverlapSphere_Internal_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 position, float radius, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x2FE3DC0", Offset = "0x2FE23C0", VA = "0x182FE3DC0")]
	private static extern bool Query_ComputePenetration_Injected(IntPtr colliderA, [In] ref Vector3 positionA, [In] ref Quaternion rotationA, IntPtr colliderB, [In] ref Vector3 positionB, [In] ref Quaternion rotationB, ref Vector3 direction, ref float distance);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x2FE3C80", Offset = "0x2FE2280", VA = "0x182FE3C80")]
	private static extern void Query_ClosestPoint_Injected(IntPtr collider, [In] ref Vector3 position, [In] ref Quaternion rotation, [In] ref Vector3 point, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x2FE1E20", Offset = "0x2FE0420", VA = "0x182FE1E20")]
	private static extern bool CheckCapsule_Internal_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 start, [In] ref Vector3 end, float radius, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x2FE3360", Offset = "0x2FE1960", VA = "0x182FE3360")]
	private static extern Collider[] OverlapBox_Internal_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 center, [In] ref Vector3 halfExtents, [In] ref Quaternion orientation, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x2FE2A10", Offset = "0x2FE1010", VA = "0x182FE2A10")]
	private static extern void Internal_BoxCastAll_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 center, [In] ref Vector3 halfExtents, [In] ref Vector3 direction, [In] ref Quaternion orientation, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x2FE12C0", Offset = "0x2FDF8C0", VA = "0x182FE12C0")]
	private static extern void BakeMesh_Injected([In] ref EntityId meshEntityId, bool convex, MeshColliderCookingOptions cookingOptions);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x2FE2480", Offset = "0x2FE0A80", VA = "0x182FE2480")]
	private static extern IntPtr GetColliderByInstanceID_Injected([In] ref EntityId entityId);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x2FE23C0", Offset = "0x2FE09C0", VA = "0x182FE23C0")]
	private static extern IntPtr GetBodyByInstanceID_Injected([In] ref EntityId entityId);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x2FE5EE0", Offset = "0x2FE44E0", VA = "0x182FE5EE0")]
	private static extern void SendOnCollisionEnter_Injected(IntPtr component, Collision collision);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x2FE60C0", Offset = "0x2FE46C0", VA = "0x182FE60C0")]
	private static extern void SendOnCollisionStay_Injected(IntPtr component, Collision collision);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x2FE5FD0", Offset = "0x2FE45D0", VA = "0x182FE5FD0")]
	private static extern void SendOnCollisionExit_Injected(IntPtr component, Collision collision);
}
