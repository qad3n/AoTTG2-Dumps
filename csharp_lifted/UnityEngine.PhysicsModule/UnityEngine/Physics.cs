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

[Token(Token = "0x200000E")]
[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/PhysicsManager.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/PhysicsQuery.h")]
public class Physics
{
	[Token(Token = "0x200000F")]
	public delegate void ContactEventDelegate(PhysicsScene scene, NativeArray<ContactPairHeader>.ReadOnly headerArray);

	[Token(Token = "0x400001C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<PhysicsScene, NativeArray<ModifiableContactPair>> ContactModifyEvent;

	[Token(Token = "0x400001D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<PhysicsScene, NativeArray<ModifiableContactPair>> ContactModifyEventCCD;

	[Token(Token = "0x400001E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
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
		[Address(RVA = "0x69D9090", Offset = "0x69D8090", VA = "0x69D9090")]
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
		[Address(RVA = "0x69D9150", Offset = "0x69D8150", VA = "0x69D9150")]
		get;
	}

	[Token(Token = "0x17000020")]
	public static PhysicsScene defaultPhysicsScene
	{
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x69D9180", Offset = "0x69D8180", VA = "0x69D9180")]
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
		[Address(RVA = "0x69DCC60", Offset = "0x69DBC60", VA = "0x69DCC60")]
		get;
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x69D8F00", Offset = "0x69D7F00", VA = "0x69D8F00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnSceneContactModify(PhysicsScene scene, IntPtr buffer, int count, bool isCCD)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x69D8FB0", Offset = "0x69D7FB0", VA = "0x69D8FB0")]
	private static void PhysXOnSceneContactModify(PhysicsScene scene, IntPtr buffer, int count, bool isCCD)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x69D9190", Offset = "0x69D8190", VA = "0x69D9190")]
	public static void IgnoreCollision([UnityEngine.Bindings.NotNull] Collider collider1, [UnityEngine.Bindings.NotNull] Collider collider2, [DefaultValue("true")] bool ignore)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x69D9330", Offset = "0x69D8330", VA = "0x69D9330")]
	[ExcludeFromDocs]
	public static void IgnoreCollision(Collider collider1, Collider collider2)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000063")]
	[Address(RVA = "0x69D9390", Offset = "0x69D8390", VA = "0x69D9390")]
	[UnityEngine.Bindings.NativeName("IgnoreCollision")]
	public static extern void IgnoreLayerCollision(int layer1, int layer2, [DefaultValue("true")] bool ignore);

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x69D93D0", Offset = "0x69D83D0", VA = "0x69D93D0")]
	public static bool Raycast(Vector3 origin, Vector3 direction, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x69D96F0", Offset = "0x69D86F0", VA = "0x69D96F0")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x69D97C0", Offset = "0x69D87C0", VA = "0x69D97C0")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x69D9890", Offset = "0x69D8890", VA = "0x69D9890")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x69D9950", Offset = "0x69D8950", VA = "0x69D9950")]
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x69D9CA0", Offset = "0x69D8CA0", VA = "0x69D9CA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x69D9D70", Offset = "0x69D8D70", VA = "0x69D9D70")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x69D9E40", Offset = "0x69D8E40", VA = "0x69D9E40")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x69D9F00", Offset = "0x69D8F00", VA = "0x69D9F00")]
	public static bool Raycast(Ray ray, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x69D9FA0", Offset = "0x69D8FA0", VA = "0x69D9FA0")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x69DA030", Offset = "0x69D9030", VA = "0x69DA030")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x69DA0C0", Offset = "0x69D90C0", VA = "0x69DA0C0")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray)
	{
		return default(bool);
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x69DA140", Offset = "0x69D9140", VA = "0x69DA140")]
	public static bool Raycast(Ray ray, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x69DA1F0", Offset = "0x69D91F0", VA = "0x69DA1F0")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x69DA2F0", Offset = "0x69D92F0", VA = "0x69DA2F0")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x69DA390", Offset = "0x69D9390", VA = "0x69DA390")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, out RaycastHit hitInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x69DA410", Offset = "0x69D9410", VA = "0x69DA410")]
	public static bool Linecast(Vector3 start, Vector3 end, out RaycastHit hitInfo, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x69DA590", Offset = "0x69D9590", VA = "0x69DA590")]
	[ExcludeFromDocs]
	public static bool Linecast(Vector3 start, Vector3 end, out RaycastHit hitInfo, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x69DA760", Offset = "0x69D9760", VA = "0x69DA760")]
	public static bool CapsuleCast(Vector3 point1, Vector3 point2, float radius, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x69DAB20", Offset = "0x69D9B20", VA = "0x69DAB20")]
	[ExcludeFromDocs]
	public static bool CapsuleCast(Vector3 point1, Vector3 point2, float radius, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x69DAC30", Offset = "0x69D9C30", VA = "0x69DAC30")]
	public static bool SphereCast(Vector3 origin, float radius, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x69DAF70", Offset = "0x69D9F70", VA = "0x69DAF70")]
	[ExcludeFromDocs]
	public static bool SphereCast(Vector3 origin, float radius, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x69DB050", Offset = "0x69DA050", VA = "0x69DB050")]
	public static bool BoxCast(Vector3 center, Vector3 halfExtents, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x69DB1B0", Offset = "0x69DA1B0", VA = "0x69DB1B0")]
	[ExcludeFromDocs]
	public static bool BoxCast(Vector3 center, Vector3 halfExtents, Vector3 direction, out RaycastHit hitInfo, Quaternion orientation, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x69DB2E0", Offset = "0x69DA2E0", VA = "0x69DB2E0")]
	[UnityEngine.Bindings.FreeFunction("Physics::RaycastAll")]
	private static RaycastHit[] Internal_RaycastAll(PhysicsScene physicsScene, Ray ray, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x69DB4A0", Offset = "0x69DA4A0", VA = "0x69DB4A0")]
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x69DB750", Offset = "0x69DA750", VA = "0x69DB750")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction, float maxDistance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x69DB810", Offset = "0x69DA810", VA = "0x69DB810")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction, float maxDistance)
	{
		return null;
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x69DB8F0", Offset = "0x69DA8F0", VA = "0x69DB8F0")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction)
	{
		return null;
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x69DB9A0", Offset = "0x69DA9A0", VA = "0x69DB9A0")]
	public static RaycastHit[] RaycastAll(Ray ray, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x69DBA60", Offset = "0x69DAA60", VA = "0x69DBA60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Ray ray, float maxDistance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x69DBB10", Offset = "0x69DAB10", VA = "0x69DBB10")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Ray ray, float maxDistance)
	{
		return null;
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x69DBBC0", Offset = "0x69DABC0", VA = "0x69DBBC0")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Ray ray)
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x69DBC60", Offset = "0x69DAC60", VA = "0x69DBC60")]
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x69DC030", Offset = "0x69DB030", VA = "0x69DC030")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results, float maxDistance, int layerMask)
	{
		return default(int);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x69DC0D0", Offset = "0x69DB0D0", VA = "0x69DC0D0")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results, float maxDistance)
	{
		return default(int);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x69DC170", Offset = "0x69DB170", VA = "0x69DC170")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results)
	{
		return default(int);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x69DC1F0", Offset = "0x69DB1F0", VA = "0x69DC1F0")]
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x69DC2D0", Offset = "0x69DB2D0", VA = "0x69DC2D0")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results, float maxDistance, int layerMask)
	{
		return default(int);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x69DC3A0", Offset = "0x69DB3A0", VA = "0x69DC3A0")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results, float maxDistance)
	{
		return default(int);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x69DC470", Offset = "0x69DB470", VA = "0x69DC470")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results)
	{
		return default(int);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x69DC530", Offset = "0x69DB530", VA = "0x69DC530")]
	[UnityEngine.Bindings.FreeFunction("Physics::SphereCastAll")]
	private static RaycastHit[] Query_SphereCastAll(PhysicsScene physicsScene, Vector3 origin, float radius, Vector3 direction, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x69DC720", Offset = "0x69DB720", VA = "0x69DC720")]
	public static RaycastHit[] SphereCastAll(Vector3 origin, float radius, Vector3 direction, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x69DC8D0", Offset = "0x69DB8D0", VA = "0x69DC8D0")]
	[ExcludeFromDocs]
	public static RaycastHit[] SphereCastAll(Vector3 origin, float radius, Vector3 direction, float maxDistance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x69DC9A0", Offset = "0x69DB9A0", VA = "0x69DC9A0")]
	[UnityEngine.Bindings.FreeFunction("Physics::OverlapSphere")]
	private static Collider[] OverlapSphere_Internal(PhysicsScene physicsScene, Vector3 position, float radius, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x69DCAC0", Offset = "0x69DBAC0", VA = "0x69DCAC0")]
	public static Collider[] OverlapSphere(Vector3 position, float radius, [DefaultValue("AllLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x69DCBD0", Offset = "0x69DBBD0", VA = "0x69DCBD0")]
	[ExcludeFromDocs]
	public static Collider[] OverlapSphere(Vector3 position, float radius, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x69DCC90", Offset = "0x69DBC90", VA = "0x69DCC90")]
	[UnityEngine.Bindings.FreeFunction("Physics::ComputePenetration")]
	private static bool Query_ComputePenetration([UnityEngine.Bindings.NotNull] Collider colliderA, Vector3 positionA, Quaternion rotationA, [UnityEngine.Bindings.NotNull] Collider colliderB, Vector3 positionB, Quaternion rotationB, ref Vector3 direction, ref float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x69DCE90", Offset = "0x69DBE90", VA = "0x69DCE90")]
	public static bool ComputePenetration(Collider colliderA, Vector3 positionA, Quaternion rotationA, Collider colliderB, Vector3 positionB, Quaternion rotationB, out Vector3 direction, out float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x69DCFA0", Offset = "0x69DBFA0", VA = "0x69DCFA0")]
	[UnityEngine.Bindings.FreeFunction("Physics::ClosestPoint")]
	private static Vector3 Query_ClosestPoint([UnityEngine.Bindings.NotNull] Collider collider, Vector3 position, Quaternion rotation, Vector3 point)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x69DD130", Offset = "0x69DC130", VA = "0x69DD130")]
	public static Vector3 ClosestPoint(Vector3 point, Collider collider, Vector3 position, Quaternion rotation)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x69DD220", Offset = "0x69DC220", VA = "0x69DD220")]
	public static int OverlapSphereNonAlloc(Vector3 position, float radius, Collider[] results, [DefaultValue("AllLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x69DD380", Offset = "0x69DC380", VA = "0x69DD380")]
	[UnityEngine.Bindings.FreeFunction("Physics::CapsuleTest")]
	private static bool CheckCapsule_Internal(PhysicsScene physicsScene, Vector3 start, Vector3 end, float radius, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x69DD4C0", Offset = "0x69DC4C0", VA = "0x69DD4C0")]
	public static bool CheckCapsule(Vector3 start, Vector3 end, float radius, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x69DD610", Offset = "0x69DC610", VA = "0x69DD610")]
	[UnityEngine.Bindings.FreeFunction("Physics::OverlapBox")]
	private static Collider[] OverlapBox_Internal(PhysicsScene physicsScene, Vector3 center, Vector3 halfExtents, Quaternion orientation, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x69DD740", Offset = "0x69DC740", VA = "0x69DD740")]
	public static Collider[] OverlapBox(Vector3 center, Vector3 halfExtents, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("AllLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x69DD8D0", Offset = "0x69DC8D0", VA = "0x69DD8D0")]
	[ExcludeFromDocs]
	public static Collider[] OverlapBox(Vector3 center, Vector3 halfExtents, Quaternion orientation, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x69DD9A0", Offset = "0x69DC9A0", VA = "0x69DD9A0")]
	public static int OverlapBoxNonAlloc(Vector3 center, Vector3 halfExtents, Collider[] results, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("AllLayers")] int mask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x69DDB70", Offset = "0x69DCB70", VA = "0x69DDB70")]
	[UnityEngine.Bindings.FreeFunction("Physics::BoxCastAll")]
	private static RaycastHit[] Internal_BoxCastAll(PhysicsScene physicsScene, Vector3 center, Vector3 halfExtents, Vector3 direction, Quaternion orientation, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x69DDD70", Offset = "0x69DCD70", VA = "0x69DDD70")]
	public static RaycastHit[] BoxCastAll(Vector3 center, Vector3 halfExtents, Vector3 direction, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x69DDF50", Offset = "0x69DCF50", VA = "0x69DDF50")]
	[ExcludeFromDocs]
	public static RaycastHit[] BoxCastAll(Vector3 center, Vector3 halfExtents, Vector3 direction, Quaternion orientation, float maxDistance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x69DE050", Offset = "0x69DD050", VA = "0x69DE050")]
	public static int OverlapCapsuleNonAlloc(Vector3 point0, Vector3 point1, float radius, Collider[] results, [DefaultValue("AllLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x69DE200", Offset = "0x69DD200", VA = "0x69DE200")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager()")]
	[UnityEngine.Bindings.ThreadSafe]
	public static void BakeMesh(EntityId meshEntityId, bool convex, MeshColliderCookingOptions cookingOptions)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x69DE2D0", Offset = "0x69DD2D0", VA = "0x69DE2D0")]
	public static void BakeMesh(EntityId meshEntityId, bool convex)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x69DE3D0", Offset = "0x69DD3D0", VA = "0x69DE3D0")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static Collider GetColliderByInstanceID(EntityId entityId)
	{
		return null;
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x69DE4A0", Offset = "0x69DD4A0", VA = "0x69DE4A0")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static Component GetBodyByInstanceID(EntityId entityId)
	{
		return null;
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x69DE570", Offset = "0x69DD570", VA = "0x69DE570")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static void SendOnCollisionEnter(Component component, Collision collision)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x69DE690", Offset = "0x69DD690", VA = "0x69DE690")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static void SendOnCollisionStay(Component component, Collision collision)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x69DE7B0", Offset = "0x69DD7B0", VA = "0x69DE7B0")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static void SendOnCollisionExit(Component component, Collision collision)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x69DE8D0", Offset = "0x69DD8D0", VA = "0x69DE8D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnSceneContact(PhysicsScene scene, IntPtr buffer, int count)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x69DEB90", Offset = "0x69DDB90", VA = "0x69DEB90")]
	private static void ReportContacts(NativeArray<ContactPairHeader>.ReadOnly array)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x69DFB60", Offset = "0x69DEB60", VA = "0x69DFB60")]
	private static Collision GetCollisionToReport(in ContactPairHeader header, in ContactPair pair, bool flipped)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x69D9120", Offset = "0x69D8120", VA = "0x69D9120")]
	private static extern void get_gravity_Injected(out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x69D92F0", Offset = "0x69D82F0", VA = "0x69D92F0")]
	private static extern void IgnoreCollision_Injected(IntPtr collider1, IntPtr collider2, [DefaultValue("true")] bool ignore);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x69DB430", Offset = "0x69DA430", VA = "0x69DB430")]
	private static extern void Internal_RaycastAll_Injected([In] ref PhysicsScene physicsScene, [In] ref Ray ray, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x69DC6A0", Offset = "0x69DB6A0", VA = "0x69DC6A0")]
	private static extern void Query_SphereCastAll_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 origin, float radius, [In] ref Vector3 direction, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x69DCA60", Offset = "0x69DBA60", VA = "0x69DCA60")]
	private static extern Collider[] OverlapSphere_Internal_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 position, float radius, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x69DCE30", Offset = "0x69DBE30", VA = "0x69DCE30")]
	private static extern bool Query_ComputePenetration_Injected(IntPtr colliderA, [In] ref Vector3 positionA, [In] ref Quaternion rotationA, IntPtr colliderB, [In] ref Vector3 positionB, [In] ref Quaternion rotationB, ref Vector3 direction, ref float distance);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x69DD0D0", Offset = "0x69DC0D0", VA = "0x69DD0D0")]
	private static extern void Query_ClosestPoint_Injected(IntPtr collider, [In] ref Vector3 position, [In] ref Quaternion rotation, [In] ref Vector3 point, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x69DD450", Offset = "0x69DC450", VA = "0x69DD450")]
	private static extern bool CheckCapsule_Internal_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 start, [In] ref Vector3 end, float radius, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x69DD6E0", Offset = "0x69DC6E0", VA = "0x69DD6E0")]
	private static extern Collider[] OverlapBox_Internal_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 center, [In] ref Vector3 halfExtents, [In] ref Quaternion orientation, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x69DDD00", Offset = "0x69DCD00", VA = "0x69DDD00")]
	private static extern void Internal_BoxCastAll_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 center, [In] ref Vector3 halfExtents, [In] ref Vector3 direction, [In] ref Quaternion orientation, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x69DE290", Offset = "0x69DD290", VA = "0x69DE290")]
	private static extern void BakeMesh_Injected([In] ref EntityId meshEntityId, bool convex, MeshColliderCookingOptions cookingOptions);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x69DE470", Offset = "0x69DD470", VA = "0x69DE470")]
	private static extern IntPtr GetColliderByInstanceID_Injected([In] ref EntityId entityId);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x69DE540", Offset = "0x69DD540", VA = "0x69DE540")]
	private static extern IntPtr GetBodyByInstanceID_Injected([In] ref EntityId entityId);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x69DE650", Offset = "0x69DD650", VA = "0x69DE650")]
	private static extern void SendOnCollisionEnter_Injected(IntPtr component, Collision collision);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x69DE770", Offset = "0x69DD770", VA = "0x69DE770")]
	private static extern void SendOnCollisionStay_Injected(IntPtr component, Collision collision);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x69DE890", Offset = "0x69DD890", VA = "0x69DE890")]
	private static extern void SendOnCollisionExit_Injected(IntPtr component, Collision collision);
}
