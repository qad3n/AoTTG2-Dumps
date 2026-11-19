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
	[Address(RVA = "0x69E0D70", Offset = "0x69DFD70", VA = "0x69E0D70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x69E0DF0", Offset = "0x69DFDF0", VA = "0x69E0DF0")]
	public static bool operator ==(PhysicsScene lhs, PhysicsScene rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x69E0E00", Offset = "0x69DFE00", VA = "0x69E0E00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x69E0E70", Offset = "0x69DFE70", VA = "0x69E0E70", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x69E0ED0", Offset = "0x69DFED0", VA = "0x69E0ED0", Slot = "4")]
	public bool Equals(PhysicsScene other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x69E0EE0", Offset = "0x69DFEE0", VA = "0x69E0EE0")]
	internal static PhysicsScene GetDefaultScene()
	{
		return default(PhysicsScene);
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x69D94A0", Offset = "0x69D84A0", VA = "0x69D94A0")]
	public bool Raycast(Vector3 origin, Vector3 direction, [DefaultValue("Mathf.Infinity")] float maxDistance = 1f / 0f, [DefaultValue("Physics.DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x69E0EF0", Offset = "0x69DFEF0", VA = "0x69E0EF0")]
	[UnityEngine.Bindings.FreeFunction("Physics::RaycastTest")]
	private static bool Internal_RaycastTest(PhysicsScene physicsScene, Ray ray, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x69D9A30", Offset = "0x69D8A30", VA = "0x69D9A30")]
	public bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance = 1f / 0f, [DefaultValue("Physics.DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x69E0FC0", Offset = "0x69DFFC0", VA = "0x69E0FC0")]
	[UnityEngine.Bindings.FreeFunction("Physics::Raycast")]
	private static bool Internal_Raycast(PhysicsScene physicsScene, Ray ray, float maxDistance, ref RaycastHit hit, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x69DBD10", Offset = "0x69DAD10", VA = "0x69DBD10")]
	public int Raycast(Vector3 origin, Vector3 direction, RaycastHit[] raycastHits, [DefaultValue("Mathf.Infinity")] float maxDistance = 1f / 0f, [DefaultValue("Physics.DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(int);
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x69E10A0", Offset = "0x69E00A0", VA = "0x69E10A0")]
	[UnityEngine.Bindings.FreeFunction("Physics::RaycastNonAlloc")]
	private static int Internal_RaycastNonAlloc(PhysicsScene physicsScene, Ray ray, RaycastHit[] raycastHits, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x69E1210", Offset = "0x69E0210", VA = "0x69E1210")]
	[UnityEngine.Bindings.FreeFunction("Physics::CapsuleCast")]
	private static bool Query_CapsuleCast(PhysicsScene physicsScene, Vector3 point1, Vector3 point2, float radius, Vector3 direction, float maxDistance, ref RaycastHit hitInfo, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x69E1340", Offset = "0x69E0340", VA = "0x69E1340")]
	private static bool Internal_CapsuleCast(PhysicsScene physicsScene, Vector3 point1, Vector3 point2, float radius, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x69DA960", Offset = "0x69D9960", VA = "0x69DA960")]
	public bool CapsuleCast(Vector3 point1, Vector3 point2, float radius, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance = 1f / 0f, [DefaultValue("DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x69E1500", Offset = "0x69E0500", VA = "0x69E1500")]
	[UnityEngine.Bindings.FreeFunction("Physics::OverlapCapsuleNonAlloc")]
	private static int OverlapCapsuleNonAlloc_Internal(PhysicsScene physicsScene, Vector3 point0, Vector3 point1, float radius, [UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] Collider[] results, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x69DE170", Offset = "0x69DD170", VA = "0x69DE170")]
	public int OverlapCapsule(Vector3 point0, Vector3 point1, float radius, Collider[] results, [DefaultValue("AllLayers")] int layerMask = -1, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(int);
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x69E1600", Offset = "0x69E0600", VA = "0x69E1600")]
	[UnityEngine.Bindings.FreeFunction("Physics::SphereCast")]
	private static bool Query_SphereCast(PhysicsScene physicsScene, Vector3 origin, float radius, Vector3 direction, float maxDistance, ref RaycastHit hitInfo, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x69E1720", Offset = "0x69E0720", VA = "0x69E1720")]
	private static bool Internal_SphereCast(PhysicsScene physicsScene, Vector3 origin, float radius, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x69DADF0", Offset = "0x69D9DF0", VA = "0x69DADF0")]
	public bool SphereCast(Vector3 origin, float radius, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance = 1f / 0f, [DefaultValue("DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x69E18A0", Offset = "0x69E08A0", VA = "0x69E18A0")]
	[UnityEngine.Bindings.FreeFunction("Physics::OverlapSphereNonAlloc")]
	private static int OverlapSphereNonAlloc_Internal(PhysicsScene physicsScene, Vector3 position, float radius, [UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] Collider[] results, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x69DD300", Offset = "0x69DC300", VA = "0x69DD300")]
	public int OverlapSphere(Vector3 position, float radius, Collider[] results, [DefaultValue("AllLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x69E1990", Offset = "0x69E0990", VA = "0x69E1990")]
	[UnityEngine.Bindings.FreeFunction("Physics::BoxCast")]
	private static bool Query_BoxCast(PhysicsScene physicsScene, Vector3 center, Vector3 halfExtents, Vector3 direction, Quaternion orientation, float maxDistance, ref RaycastHit outHit, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x69E1AB0", Offset = "0x69E0AB0", VA = "0x69E1AB0")]
	private static bool Internal_BoxCast(PhysicsScene physicsScene, Vector3 center, Vector3 halfExtents, Quaternion orientation, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x69DB180", Offset = "0x69DA180", VA = "0x69DB180")]
	public bool BoxCast(Vector3 center, Vector3 halfExtents, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("Mathf.Infinity")] float maxDistance = 1f / 0f, [DefaultValue("DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x69E1CA0", Offset = "0x69E0CA0", VA = "0x69E1CA0")]
	[UnityEngine.Bindings.FreeFunction("Physics::OverlapBoxNonAlloc")]
	private static int OverlapBoxNonAlloc_Internal(PhysicsScene physicsScene, Vector3 center, Vector3 halfExtents, [UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] Collider[] results, Quaternion orientation, int mask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x69DDAE0", Offset = "0x69DCAE0", VA = "0x69DDAE0")]
	public int OverlapBox(Vector3 center, Vector3 halfExtents, Collider[] results, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000112")]
	[Address(RVA = "0x69E0F60", Offset = "0x69DFF60", VA = "0x69E0F60")]
	private static extern bool Internal_RaycastTest_Injected([In] ref PhysicsScene physicsScene, [In] ref Ray ray, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000113")]
	[Address(RVA = "0x69E1030", Offset = "0x69E0030", VA = "0x69E1030")]
	private static extern bool Internal_Raycast_Injected([In] ref PhysicsScene physicsScene, [In] ref Ray ray, float maxDistance, ref RaycastHit hit, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000114")]
	[Address(RVA = "0x69E11A0", Offset = "0x69E01A0", VA = "0x69E11A0")]
	private static extern int Internal_RaycastNonAlloc_Injected([In] ref PhysicsScene physicsScene, [In] ref Ray ray, ref UnityEngine.Bindings.ManagedSpanWrapper raycastHits, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000115")]
	[Address(RVA = "0x69E12C0", Offset = "0x69E02C0", VA = "0x69E12C0")]
	private static extern bool Query_CapsuleCast_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 point1, [In] ref Vector3 point2, float radius, [In] ref Vector3 direction, float maxDistance, ref RaycastHit hitInfo, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000116")]
	[Address(RVA = "0x69E1590", Offset = "0x69E0590", VA = "0x69E1590")]
	private static extern int OverlapCapsuleNonAlloc_Internal_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 point0, [In] ref Vector3 point1, float radius, Collider[] results, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000117")]
	[Address(RVA = "0x69E16A0", Offset = "0x69E06A0", VA = "0x69E16A0")]
	private static extern bool Query_SphereCast_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 origin, float radius, [In] ref Vector3 direction, float maxDistance, ref RaycastHit hitInfo, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000118")]
	[Address(RVA = "0x69E1920", Offset = "0x69E0920", VA = "0x69E1920")]
	private static extern int OverlapSphereNonAlloc_Internal_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 position, float radius, Collider[] results, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000119")]
	[Address(RVA = "0x69E1A40", Offset = "0x69E0A40", VA = "0x69E1A40")]
	private static extern bool Query_BoxCast_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 center, [In] ref Vector3 halfExtents, [In] ref Vector3 direction, [In] ref Quaternion orientation, float maxDistance, ref RaycastHit outHit, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011A")]
	[Address(RVA = "0x69E1D30", Offset = "0x69E0D30", VA = "0x69E1D30")]
	private static extern int OverlapBoxNonAlloc_Internal_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 center, [In] ref Vector3 halfExtents, Collider[] results, [In] ref Quaternion orientation, int mask, QueryTriggerInteraction queryTriggerInteraction);
}
