// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.PhysicsScene
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;

namespace UnityEngine;

[Token(Token = "0x200001D")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/Public/PhysicsSceneHandle.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/PhysicsQuery.h")]
public struct PhysicsScene : IEquatable<PhysicsScene>
{
	[Token(Token = "0x400006E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int m_index;

	[Token(Token = "0x400006F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private int m_version;

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x2FE1240", Offset = "0x2FDF840", VA = "0x182FE1240", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x2F0A990", Offset = "0x2F08F90", VA = "0x182F0A990")]
	public static bool operator ==(PhysicsScene lhs, PhysicsScene rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x2FDFD70", Offset = "0x2FDE370", VA = "0x182FDFD70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x2FDFCB0", Offset = "0x2FDE2B0", VA = "0x182FDFCB0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x2FDFC90", Offset = "0x2FDE290", VA = "0x182FDFC90", Slot = "4")]
	public bool Equals(PhysicsScene other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x2FDFD60", Offset = "0x2FDE360", VA = "0x182FDFD60")]
	internal static PhysicsScene GetDefaultScene()
	{
		return default(PhysicsScene);
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x2FE0E30", Offset = "0x2FDF430", VA = "0x182FE0E30")]
	public bool Raycast(Vector3 origin, Vector3 direction, [DefaultValue("Mathf.Infinity")] float maxDistance = 1f / 0f, [DefaultValue("Physics.DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x2FE0240", Offset = "0x2FDE840", VA = "0x182FE0240")]
	[UnityEngine.Bindings.FreeFunction("Physics::RaycastTest")]
	private static bool Internal_RaycastTest(PhysicsScene physicsScene, Ray ray, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x2FE0FA0", Offset = "0x2FDF5A0", VA = "0x182FE0FA0")]
	public bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance = 1f / 0f, [DefaultValue("Physics.DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x2FE0320", Offset = "0x2FDE920", VA = "0x182FE0320")]
	[UnityEngine.Bindings.FreeFunction("Physics::Raycast")]
	private static bool Internal_Raycast(PhysicsScene physicsScene, Ray ray, float maxDistance, ref RaycastHit hit, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x2FE0C00", Offset = "0x2FDF200", VA = "0x182FE0C00")]
	public int Raycast(Vector3 origin, Vector3 direction, RaycastHit[] raycastHits, [DefaultValue("Mathf.Infinity")] float maxDistance = 1f / 0f, [DefaultValue("Physics.DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(int);
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x2FE00D0", Offset = "0x2FDE6D0", VA = "0x182FE00D0")]
	[UnityEngine.Bindings.FreeFunction("Physics::RaycastNonAlloc")]
	private static int Internal_RaycastNonAlloc(PhysicsScene physicsScene, Ray ray, RaycastHit[] raycastHits, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x2FE0A60", Offset = "0x2FDF060", VA = "0x182FE0A60")]
	[UnityEngine.Bindings.FreeFunction("Physics::CapsuleCast")]
	private static bool Query_CapsuleCast(PhysicsScene physicsScene, Vector3 point1, Vector3 point2, float radius, Vector3 direction, float maxDistance, ref RaycastHit hitInfo, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x2FDFF20", Offset = "0x2FDE520", VA = "0x182FDFF20")]
	private static bool Internal_CapsuleCast(PhysicsScene physicsScene, Vector3 point1, Vector3 point2, float radius, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x2FDFB40", Offset = "0x2FDE140", VA = "0x182FDFB40")]
	public bool CapsuleCast(Vector3 point1, Vector3 point2, float radius, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance = 1f / 0f, [DefaultValue("DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x2FE0680", Offset = "0x2FDEC80", VA = "0x182FE0680")]
	[UnityEngine.Bindings.FreeFunction("Physics::OverlapCapsuleNonAlloc")]
	private static int OverlapCapsuleNonAlloc_Internal(PhysicsScene physicsScene, Vector3 point0, Vector3 point1, float radius, [UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] Collider[] results, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x2FE0700", Offset = "0x2FDED00", VA = "0x182FE0700")]
	public int OverlapCapsule(Vector3 point0, Vector3 point1, float radius, Collider[] results, [DefaultValue("AllLayers")] int layerMask = -1, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(int);
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x2FE0B70", Offset = "0x2FDF170", VA = "0x182FE0B70")]
	[UnityEngine.Bindings.FreeFunction("Physics::SphereCast")]
	private static bool Query_SphereCast(PhysicsScene physicsScene, Vector3 origin, float radius, Vector3 direction, float maxDistance, ref RaycastHit hitInfo, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x2FE0390", Offset = "0x2FDE990", VA = "0x182FE0390")]
	private static bool Internal_SphereCast(PhysicsScene physicsScene, Vector3 origin, float radius, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x2FE1120", Offset = "0x2FDF720", VA = "0x182FE1120")]
	public bool SphereCast(Vector3 origin, float radius, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance = 1f / 0f, [DefaultValue("DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x2FE0810", Offset = "0x2FDEE10", VA = "0x182FE0810")]
	[UnityEngine.Bindings.FreeFunction("Physics::OverlapSphereNonAlloc")]
	private static int OverlapSphereNonAlloc_Internal(PhysicsScene physicsScene, Vector3 position, float radius, [UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] Collider[] results, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x2FE0880", Offset = "0x2FDEE80", VA = "0x182FE0880")]
	public int OverlapSphere(Vector3 position, float radius, Collider[] results, [DefaultValue("AllLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x2FE0950", Offset = "0x2FDEF50", VA = "0x182FE0950")]
	[UnityEngine.Bindings.FreeFunction("Physics::BoxCast")]
	private static bool Query_BoxCast(PhysicsScene physicsScene, Vector3 center, Vector3 halfExtents, Vector3 direction, Quaternion orientation, float maxDistance, ref RaycastHit outHit, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x2FDFDE0", Offset = "0x2FDE3E0", VA = "0x182FDFDE0")]
	private static bool Internal_BoxCast(PhysicsScene physicsScene, Vector3 center, Vector3 halfExtents, Quaternion orientation, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x2FDF9F0", Offset = "0x2FDDFF0", VA = "0x182FDF9F0")]
	public bool BoxCast(Vector3 center, Vector3 halfExtents, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("Mathf.Infinity")] float maxDistance = 1f / 0f, [DefaultValue("DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x2FE04E0", Offset = "0x2FDEAE0", VA = "0x182FE04E0")]
	[UnityEngine.Bindings.FreeFunction("Physics::OverlapBoxNonAlloc")]
	private static int OverlapBoxNonAlloc_Internal(PhysicsScene physicsScene, Vector3 center, Vector3 halfExtents, [UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] Collider[] results, Quaternion orientation, int mask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x2FE0560", Offset = "0x2FDEB60", VA = "0x182FE0560")]
	public int OverlapBox(Vector3 center, Vector3 halfExtents, Collider[] results, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000112")]
	[Address(RVA = "0x2FE01D0", Offset = "0x2FDE7D0", VA = "0x182FE01D0")]
	private static extern bool Internal_RaycastTest_Injected([In] ref PhysicsScene physicsScene, [In] ref Ray ray, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000113")]
	[Address(RVA = "0x2FE02B0", Offset = "0x2FDE8B0", VA = "0x182FE02B0")]
	private static extern bool Internal_Raycast_Injected([In] ref PhysicsScene physicsScene, [In] ref Ray ray, float maxDistance, ref RaycastHit hit, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000114")]
	[Address(RVA = "0x2FE0060", Offset = "0x2FDE660", VA = "0x182FE0060")]
	private static extern int Internal_RaycastNonAlloc_Injected([In] ref PhysicsScene physicsScene, [In] ref Ray ray, ref UnityEngine.Bindings.ManagedSpanWrapper raycastHits, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000115")]
	[Address(RVA = "0x2FE09F0", Offset = "0x2FDEFF0", VA = "0x182FE09F0")]
	private static extern bool Query_CapsuleCast_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 point1, [In] ref Vector3 point2, float radius, [In] ref Vector3 direction, float maxDistance, ref RaycastHit hitInfo, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000116")]
	[Address(RVA = "0x2FE0610", Offset = "0x2FDEC10", VA = "0x182FE0610")]
	private static extern int OverlapCapsuleNonAlloc_Internal_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 point0, [In] ref Vector3 point1, float radius, Collider[] results, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000117")]
	[Address(RVA = "0x2FE0B00", Offset = "0x2FDF100", VA = "0x182FE0B00")]
	private static extern bool Query_SphereCast_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 origin, float radius, [In] ref Vector3 direction, float maxDistance, ref RaycastHit hitInfo, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000118")]
	[Address(RVA = "0x2FE07A0", Offset = "0x2FDEDA0", VA = "0x182FE07A0")]
	private static extern int OverlapSphereNonAlloc_Internal_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 position, float radius, Collider[] results, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000119")]
	[Address(RVA = "0x2FE0900", Offset = "0x2FDEF00", VA = "0x182FE0900")]
	private static extern bool Query_BoxCast_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 center, [In] ref Vector3 halfExtents, [In] ref Vector3 direction, [In] ref Quaternion orientation, float maxDistance, ref RaycastHit outHit, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011A")]
	[Address(RVA = "0x2FE0490", Offset = "0x2FDEA90", VA = "0x182FE0490")]
	private static extern int OverlapBoxNonAlloc_Internal_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 center, [In] ref Vector3 halfExtents, Collider[] results, [In] ref Quaternion orientation, int mask, QueryTriggerInteraction queryTriggerInteraction);
}
