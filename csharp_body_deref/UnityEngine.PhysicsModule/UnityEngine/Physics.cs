// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Physics
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200000B")]
[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/PhysicsManager.h")]
public class Physics
{
	[Token(Token = "0x200000C")]
	public delegate void ContactEventDelegate(PhysicsScene scene, NativeArray<ContactPairHeader>.ReadOnly headerArray);

	[Token(Token = "0x400002E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<PhysicsScene, NativeArray<ModifiableContactPair>> ContactModifyEvent;

	[Token(Token = "0x400002F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<PhysicsScene, NativeArray<ModifiableContactPair>> ContactModifyEventCCD;

	[Token(Token = "0x4000030")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static ContactEventDelegate ContactEvent;

	[Token(Token = "0x4000031")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly Collision s_ReusableCollision;

	[Token(Token = "0x1700000A")]
	public static extern bool invokeCollisionCallbacks
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4E76870", Offset = "0x4E76870", VA = "0x4E76870")]
		get;
	}

	[Token(Token = "0x1700000B")]
	[UnityEngine.Bindings.NativeProperty("DefaultPhysicsSceneHandle", true, UnityEngine.Bindings.TargetType.Function, true)]
	public static PhysicsScene defaultPhysicsScene
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4E768A0", Offset = "0x4E768A0", VA = "0x4E768A0")]
		get
		{
			return default(PhysicsScene);
		}
	}

	[Token(Token = "0x1700000C")]
	public static extern bool reuseCollisionCallbacks
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x4E7B080", Offset = "0x4E7B080", VA = "0x4E7B080")]
		get;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4E767A0", Offset = "0x4E767A0", VA = "0x4E767A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnSceneContactModify(PhysicsScene scene, IntPtr buffer, int count, bool isCCD)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4E76950", Offset = "0x4E76950", VA = "0x4E76950")]
	public static void IgnoreCollision([UnityEngine.Bindings.NotNull("NullExceptionObject")] Collider collider1, [UnityEngine.Bindings.NotNull("NullExceptionObject")] Collider collider2, [DefaultValue("true")] bool ignore)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4E76AC0", Offset = "0x4E76AC0", VA = "0x4E76AC0")]
	[ExcludeFromDocs]
	public static void IgnoreCollision(Collider collider1, Collider collider2)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4E76B20", Offset = "0x4E76B20", VA = "0x4E76B20")]
	[UnityEngine.Bindings.NativeName("IgnoreCollision")]
	public static extern void IgnoreLayerCollision(int layer1, int layer2, [DefaultValue("true")] bool ignore);

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4E76B60", Offset = "0x4E76B60", VA = "0x4E76B60")]
	public static bool Raycast(Vector3 origin, Vector3 direction, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4E76F20", Offset = "0x4E76F20", VA = "0x4E76F20")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4E77060", Offset = "0x4E77060", VA = "0x4E77060")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4E771A0", Offset = "0x4E771A0", VA = "0x4E771A0")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4E772D0", Offset = "0x4E772D0", VA = "0x4E772D0")]
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4E776C0", Offset = "0x4E776C0", VA = "0x4E776C0")]
	[ExcludeFromDocs]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4E77810", Offset = "0x4E77810", VA = "0x4E77810")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4E77950", Offset = "0x4E77950", VA = "0x4E77950")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4E77A90", Offset = "0x4E77A90", VA = "0x4E77A90")]
	public static bool Raycast(Ray ray, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4E77BC0", Offset = "0x4E77BC0", VA = "0x4E77BC0")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4E77CF0", Offset = "0x4E77CF0", VA = "0x4E77CF0")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4E77E10", Offset = "0x4E77E10", VA = "0x4E77E10")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray)
	{
		return default(bool);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4E77F30", Offset = "0x4E77F30", VA = "0x4E77F30")]
	public static bool Raycast(Ray ray, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4E78080", Offset = "0x4E78080", VA = "0x4E78080")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4E78140", Offset = "0x4E78140", VA = "0x4E78140")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4E78270", Offset = "0x4E78270", VA = "0x4E78270")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, out RaycastHit hitInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4E783B0", Offset = "0x4E783B0", VA = "0x4E783B0")]
	public static bool Linecast(Vector3 start, Vector3 end, out RaycastHit hitInfo, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4E78590", Offset = "0x4E78590", VA = "0x4E78590")]
	[ExcludeFromDocs]
	public static bool Linecast(Vector3 start, Vector3 end, out RaycastHit hitInfo, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4E78640", Offset = "0x4E78640", VA = "0x4E78640")]
	public static bool CapsuleCast(Vector3 point1, Vector3 point2, float radius, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4E787E0", Offset = "0x4E787E0", VA = "0x4E787E0")]
	[ExcludeFromDocs]
	public static bool CapsuleCast(Vector3 point1, Vector3 point2, float radius, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4E788F0", Offset = "0x4E788F0", VA = "0x4E788F0")]
	public static bool SphereCast(Vector3 origin, float radius, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4E78CF0", Offset = "0x4E78CF0", VA = "0x4E78CF0")]
	[ExcludeFromDocs]
	public static bool SphereCast(Vector3 origin, float radius, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4E78DD0", Offset = "0x4E78DD0", VA = "0x4E78DD0")]
	public static bool BoxCast(Vector3 center, Vector3 halfExtents, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4E78F80", Offset = "0x4E78F80", VA = "0x4E78F80")]
	[ExcludeFromDocs]
	public static bool BoxCast(Vector3 center, Vector3 halfExtents, Vector3 direction, out RaycastHit hitInfo, Quaternion orientation, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4E79080", Offset = "0x4E79080", VA = "0x4E79080")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	[UnityEngine.Bindings.NativeName("RaycastAll")]
	private static RaycastHit[] Internal_RaycastAll(PhysicsScene physicsScene, Ray ray, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4E791A0", Offset = "0x4E791A0", VA = "0x4E791A0")]
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4E79580", Offset = "0x4E79580", VA = "0x4E79580")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction, float maxDistance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4E79640", Offset = "0x4E79640", VA = "0x4E79640")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction, float maxDistance)
	{
		return null;
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4E79720", Offset = "0x4E79720", VA = "0x4E79720")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction)
	{
		return null;
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4E797D0", Offset = "0x4E797D0", VA = "0x4E797D0")]
	public static RaycastHit[] RaycastAll(Ray ray, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4E79890", Offset = "0x4E79890", VA = "0x4E79890")]
	[ExcludeFromDocs]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static RaycastHit[] RaycastAll(Ray ray, float maxDistance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4E79940", Offset = "0x4E79940", VA = "0x4E79940")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Ray ray, float maxDistance)
	{
		return null;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4E799F0", Offset = "0x4E799F0", VA = "0x4E799F0")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Ray ray)
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4E79A90", Offset = "0x4E79A90", VA = "0x4E79A90")]
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4E79F20", Offset = "0x4E79F20", VA = "0x4E79F20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results, float maxDistance, int layerMask)
	{
		return default(int);
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4E7A050", Offset = "0x4E7A050", VA = "0x4E7A050")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results, float maxDistance)
	{
		return default(int);
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4E7A180", Offset = "0x4E7A180", VA = "0x4E7A180")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results)
	{
		return default(int);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4E7A2C0", Offset = "0x4E7A2C0", VA = "0x4E7A2C0")]
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4E7A410", Offset = "0x4E7A410", VA = "0x4E7A410")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results, float maxDistance, int layerMask)
	{
		return default(int);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4E7A560", Offset = "0x4E7A560", VA = "0x4E7A560")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results, float maxDistance)
	{
		return default(int);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4E7A6A0", Offset = "0x4E7A6A0", VA = "0x4E7A6A0")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results)
	{
		return default(int);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4E7A7E0", Offset = "0x4E7A7E0", VA = "0x4E7A7E0")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	[UnityEngine.Bindings.NativeName("SphereCastAll")]
	private static RaycastHit[] Query_SphereCastAll(PhysicsScene physicsScene, Vector3 origin, float radius, Vector3 direction, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4E7A930", Offset = "0x4E7A930", VA = "0x4E7A930")]
	public static RaycastHit[] SphereCastAll(Vector3 origin, float radius, Vector3 direction, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4E7AC30", Offset = "0x4E7AC30", VA = "0x4E7AC30")]
	[ExcludeFromDocs]
	public static RaycastHit[] SphereCastAll(Vector3 origin, float radius, Vector3 direction, float maxDistance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4E7AD00", Offset = "0x4E7AD00", VA = "0x4E7AD00")]
	[UnityEngine.Bindings.NativeName("OverlapSphere")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	private static Collider[] OverlapSphere_Internal(PhysicsScene physicsScene, Vector3 position, float radius, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4E7AE20", Offset = "0x4E7AE20", VA = "0x4E7AE20")]
	public static Collider[] OverlapSphere(Vector3 position, float radius, [DefaultValue("AllLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4E7AFF0", Offset = "0x4E7AFF0", VA = "0x4E7AFF0")]
	[ExcludeFromDocs]
	public static Collider[] OverlapSphere(Vector3 position, float radius, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4E7B0B0", Offset = "0x4E7B0B0", VA = "0x4E7B0B0")]
	[UnityEngine.Bindings.NativeName("ComputePenetration")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()")]
	private static bool Query_ComputePenetration([UnityEngine.Bindings.NotNull("ArgumentNullException")] Collider colliderA, Vector3 positionA, Quaternion rotationA, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Collider colliderB, Vector3 positionB, Quaternion rotationB, ref Vector3 direction, ref float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4E7B320", Offset = "0x4E7B320", VA = "0x4E7B320")]
	public static bool ComputePenetration(Collider colliderA, Vector3 positionA, Quaternion rotationA, Collider colliderB, Vector3 positionB, Quaternion rotationB, out Vector3 direction, out float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4E7B420", Offset = "0x4E7B420", VA = "0x4E7B420")]
	[UnityEngine.Bindings.NativeName("ClosestPoint")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()")]
	private static Vector3 Query_ClosestPoint([UnityEngine.Bindings.NotNull("ArgumentNullException")] Collider collider, Vector3 position, Quaternion rotation, Vector3 point)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4E7B5F0", Offset = "0x4E7B5F0", VA = "0x4E7B5F0")]
	public static Vector3 ClosestPoint(Vector3 point, Collider collider, Vector3 position, Quaternion rotation)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4E7B6E0", Offset = "0x4E7B6E0", VA = "0x4E7B6E0")]
	[UnityEngine.Bindings.NativeName("OverlapBox")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()")]
	private static Collider[] OverlapBox_Internal(PhysicsScene physicsScene, Vector3 center, Vector3 halfExtents, Quaternion orientation, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4E7B810", Offset = "0x4E7B810", VA = "0x4E7B810")]
	public static Collider[] OverlapBox(Vector3 center, Vector3 halfExtents, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("AllLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4E7BA20", Offset = "0x4E7BA20", VA = "0x4E7BA20")]
	[ExcludeFromDocs]
	public static Collider[] OverlapBox(Vector3 center, Vector3 halfExtents, Quaternion orientation, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4E7BAF0", Offset = "0x4E7BAF0", VA = "0x4E7BAF0")]
	[UnityEngine.Bindings.NativeName("BoxCastAll")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()")]
	private static RaycastHit[] Internal_BoxCastAll(PhysicsScene physicsScene, Vector3 center, Vector3 halfExtents, Vector3 direction, Quaternion orientation, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4E7BC50", Offset = "0x4E7BC50", VA = "0x4E7BC50")]
	public static RaycastHit[] BoxCastAll(Vector3 center, Vector3 halfExtents, Vector3 direction, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4E7BFB0", Offset = "0x4E7BFB0", VA = "0x4E7BFB0")]
	[ExcludeFromDocs]
	public static RaycastHit[] BoxCastAll(Vector3 center, Vector3 halfExtents, Vector3 direction, Quaternion orientation, float maxDistance, int layerMask)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4E7C0B0", Offset = "0x4E7C0B0", VA = "0x4E7C0B0")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static extern Collider GetColliderByInstanceID(int instanceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4E7C0E0", Offset = "0x4E7C0E0", VA = "0x4E7C0E0")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static extern Component GetBodyByInstanceID(int instanceID);

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4E7C110", Offset = "0x4E7C110", VA = "0x4E7C110")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static void SendOnCollisionEnter(Component component, Collision collision)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4E7C240", Offset = "0x4E7C240", VA = "0x4E7C240")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static void SendOnCollisionStay(Component component, Collision collision)
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4E7C370", Offset = "0x4E7C370", VA = "0x4E7C370")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static void SendOnCollisionExit(Component component, Collision collision)
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4E7C4A0", Offset = "0x4E7C4A0", VA = "0x4E7C4A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnSceneContact(PhysicsScene scene, IntPtr buffer, int count)
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4E7C7B0", Offset = "0x4E7C7B0", VA = "0x4E7C7B0")]
	private static void ReportContacts(NativeArray<ContactPairHeader>.ReadOnly array)
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4E7CE30", Offset = "0x4E7CE30", VA = "0x4E7CE30")]
	private static Collision GetCollisionToReport(in ContactPairHeader header, in ContactPair pair, bool flipped)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4E76920", Offset = "0x4E76920", VA = "0x4E76920")]
	private static extern void get_defaultPhysicsScene_Injected(out PhysicsScene ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4E76A80", Offset = "0x4E76A80", VA = "0x4E76A80")]
	private static extern void IgnoreCollision_Injected(IntPtr collider1, IntPtr collider2, [DefaultValue("true")] bool ignore);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4E79140", Offset = "0x4E79140", VA = "0x4E79140")]
	private static extern RaycastHit[] Internal_RaycastAll_Injected([In] ref PhysicsScene physicsScene, [In] ref Ray ray, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4E7A8C0", Offset = "0x4E7A8C0", VA = "0x4E7A8C0")]
	private static extern RaycastHit[] Query_SphereCastAll_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 origin, float radius, [In] ref Vector3 direction, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005B")]
	[Address(RVA = "0x4E7ADC0", Offset = "0x4E7ADC0", VA = "0x4E7ADC0")]
	private static extern Collider[] OverlapSphere_Internal_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 position, float radius, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4E7B2C0", Offset = "0x4E7B2C0", VA = "0x4E7B2C0")]
	private static extern bool Query_ComputePenetration_Injected(IntPtr colliderA, [In] ref Vector3 positionA, [In] ref Quaternion rotationA, IntPtr colliderB, [In] ref Vector3 positionB, [In] ref Quaternion rotationB, ref Vector3 direction, ref float distance);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x4E7B590", Offset = "0x4E7B590", VA = "0x4E7B590")]
	private static extern void Query_ClosestPoint_Injected(IntPtr collider, [In] ref Vector3 position, [In] ref Quaternion rotation, [In] ref Vector3 point, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4E7B7B0", Offset = "0x4E7B7B0", VA = "0x4E7B7B0")]
	private static extern Collider[] OverlapBox_Internal_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 center, [In] ref Vector3 halfExtents, [In] ref Quaternion orientation, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4E7BBE0", Offset = "0x4E7BBE0", VA = "0x4E7BBE0")]
	private static extern RaycastHit[] Internal_BoxCastAll_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 center, [In] ref Vector3 halfExtents, [In] ref Vector3 direction, [In] ref Quaternion orientation, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4E7C200", Offset = "0x4E7C200", VA = "0x4E7C200")]
	private static extern void SendOnCollisionEnter_Injected(IntPtr component, Collision collision);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4E7C330", Offset = "0x4E7C330", VA = "0x4E7C330")]
	private static extern void SendOnCollisionStay_Injected(IntPtr component, Collision collision);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4E7C460", Offset = "0x4E7C460", VA = "0x4E7C460")]
	private static extern void SendOnCollisionExit_Injected(IntPtr component, Collision collision);
}
