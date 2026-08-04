// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.PhysicsScene
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200001B")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/Public/PhysicsSceneHandle.h")]
public struct PhysicsScene : IEquatable<PhysicsScene>
{
	[Token(Token = "0x4000048")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int m_Handle;

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x4E82A30", Offset = "0x4E82A30", VA = "0x4E82A30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x4E82B10", Offset = "0x4E82B10", VA = "0x4E82B10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x4E82B20", Offset = "0x4E82B20", VA = "0x4E82B20", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x4E82B80", Offset = "0x4E82B80", VA = "0x4E82B80", Slot = "4")]
	public bool Equals(PhysicsScene other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x4E76CA0", Offset = "0x4E76CA0", VA = "0x4E76CA0")]
	public bool Raycast(Vector3 origin, Vector3 direction, [DefaultValue("Mathf.Infinity")] float maxDistance = float.PositiveInfinity, [DefaultValue("Physics.DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x4E82B90", Offset = "0x4E82B90", VA = "0x4E82B90")]
	[UnityEngine.Bindings.NativeName("RaycastTest")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	private static bool Internal_RaycastTest(PhysicsScene physicsScene, Ray ray, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x4E77420", Offset = "0x4E77420", VA = "0x4E77420")]
	public bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance = float.PositiveInfinity, [DefaultValue("Physics.DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x4E82C50", Offset = "0x4E82C50", VA = "0x4E82C50")]
	[UnityEngine.Bindings.NativeName("Raycast")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	private static bool Internal_Raycast(PhysicsScene physicsScene, Ray ray, float maxDistance, ref RaycastHit hit, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x4E79BE0", Offset = "0x4E79BE0", VA = "0x4E79BE0")]
	public int Raycast(Vector3 origin, Vector3 direction, RaycastHit[] raycastHits, [DefaultValue("Mathf.Infinity")] float maxDistance = float.PositiveInfinity, [DefaultValue("Physics.DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(int);
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x4E82D30", Offset = "0x4E82D30", VA = "0x4E82D30")]
	[UnityEngine.Bindings.NativeName("RaycastNonAlloc")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()")]
	private static int Internal_RaycastNonAlloc(PhysicsScene physicsScene, Ray ray, RaycastHit[] raycastHits, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x4E82E90", Offset = "0x4E82E90", VA = "0x4E82E90")]
	[UnityEngine.Bindings.NativeName("CapsuleCast")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	private static bool Query_CapsuleCast(PhysicsScene physicsScene, Vector3 point1, Vector3 point2, float radius, Vector3 direction, float maxDistance, ref RaycastHit hitInfo, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x4E82FC0", Offset = "0x4E82FC0", VA = "0x4E82FC0")]
	private static bool Internal_CapsuleCast(PhysicsScene physicsScene, Vector3 point1, Vector3 point2, float radius, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x4E787D0", Offset = "0x4E787D0", VA = "0x4E787D0")]
	public bool CapsuleCast(Vector3 point1, Vector3 point2, float radius, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance = float.PositiveInfinity, [DefaultValue("DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x4E83180", Offset = "0x4E83180", VA = "0x4E83180")]
	[UnityEngine.Bindings.NativeName("SphereCast")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	private static bool Query_SphereCast(PhysicsScene physicsScene, Vector3 origin, float radius, Vector3 direction, float maxDistance, ref RaycastHit hitInfo, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x4E832A0", Offset = "0x4E832A0", VA = "0x4E832A0")]
	private static bool Internal_SphereCast(PhysicsScene physicsScene, Vector3 origin, float radius, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x4E78B70", Offset = "0x4E78B70", VA = "0x4E78B70")]
	public bool SphereCast(Vector3 origin, float radius, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance = float.PositiveInfinity, [DefaultValue("DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x4E83420", Offset = "0x4E83420", VA = "0x4E83420")]
	[UnityEngine.Bindings.NativeName("BoxCast")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	private static bool Query_BoxCast(PhysicsScene physicsScene, Vector3 center, Vector3 halfExtents, Vector3 direction, Quaternion orientation, float maxDistance, ref RaycastHit outHit, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x4E83530", Offset = "0x4E83530", VA = "0x4E83530")]
	private static bool Internal_BoxCast(PhysicsScene physicsScene, Vector3 center, Vector3 halfExtents, Quaternion orientation, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x4E78F60", Offset = "0x4E78F60", VA = "0x4E78F60")]
	public bool BoxCast(Vector3 center, Vector3 halfExtents, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("Mathf.Infinity")] float maxDistance = float.PositiveInfinity, [DefaultValue("DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000138")]
	[Address(RVA = "0x4E82BF0", Offset = "0x4E82BF0", VA = "0x4E82BF0")]
	private static extern bool Internal_RaycastTest_Injected([In] ref PhysicsScene physicsScene, [In] ref Ray ray, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000139")]
	[Address(RVA = "0x4E82CC0", Offset = "0x4E82CC0", VA = "0x4E82CC0")]
	private static extern bool Internal_Raycast_Injected([In] ref PhysicsScene physicsScene, [In] ref Ray ray, float maxDistance, ref RaycastHit hit, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013A")]
	[Address(RVA = "0x4E82E20", Offset = "0x4E82E20", VA = "0x4E82E20")]
	private static extern int Internal_RaycastNonAlloc_Injected([In] ref PhysicsScene physicsScene, [In] ref Ray ray, ref UnityEngine.Bindings.ManagedSpanWrapper raycastHits, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013B")]
	[Address(RVA = "0x4E82F40", Offset = "0x4E82F40", VA = "0x4E82F40")]
	private static extern bool Query_CapsuleCast_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 point1, [In] ref Vector3 point2, float radius, [In] ref Vector3 direction, float maxDistance, ref RaycastHit hitInfo, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013C")]
	[Address(RVA = "0x4E83220", Offset = "0x4E83220", VA = "0x4E83220")]
	private static extern bool Query_SphereCast_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 origin, float radius, [In] ref Vector3 direction, float maxDistance, ref RaycastHit hitInfo, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013D")]
	[Address(RVA = "0x4E834C0", Offset = "0x4E834C0", VA = "0x4E834C0")]
	private static extern bool Query_BoxCast_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 center, [In] ref Vector3 halfExtents, [In] ref Vector3 direction, [In] ref Quaternion orientation, float maxDistance, ref RaycastHit outHit, int layerMask, QueryTriggerInteraction queryTriggerInteraction);
}
