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
	[Address(RVA = "0x4B5B100", Offset = "0x4B5B100", VA = "0x4B5B100", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x4B5B1E0", Offset = "0x4B5B1E0", VA = "0x4B5B1E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x4B5B1F0", Offset = "0x4B5B1F0", VA = "0x4B5B1F0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x4B5B250", Offset = "0x4B5B250", VA = "0x4B5B250", Slot = "4")]
	public bool Equals(PhysicsScene other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x4B4F370", Offset = "0x4B4F370", VA = "0x4B4F370")]
	public bool Raycast(Vector3 origin, Vector3 direction, [DefaultValue("Mathf.Infinity")] float maxDistance = float.PositiveInfinity, [DefaultValue("Physics.DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x4B5B260", Offset = "0x4B5B260", VA = "0x4B5B260")]
	[UnityEngine.Bindings.NativeName("RaycastTest")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	private static bool Internal_RaycastTest(PhysicsScene physicsScene, Ray ray, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x4B4FAF0", Offset = "0x4B4FAF0", VA = "0x4B4FAF0")]
	public bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance = float.PositiveInfinity, [DefaultValue("Physics.DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x4B5B320", Offset = "0x4B5B320", VA = "0x4B5B320")]
	[UnityEngine.Bindings.NativeName("Raycast")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	private static bool Internal_Raycast(PhysicsScene physicsScene, Ray ray, float maxDistance, ref RaycastHit hit, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x4B522B0", Offset = "0x4B522B0", VA = "0x4B522B0")]
	public int Raycast(Vector3 origin, Vector3 direction, RaycastHit[] raycastHits, [DefaultValue("Mathf.Infinity")] float maxDistance = float.PositiveInfinity, [DefaultValue("Physics.DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(int);
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x4B5B400", Offset = "0x4B5B400", VA = "0x4B5B400")]
	[UnityEngine.Bindings.NativeName("RaycastNonAlloc")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()")]
	private static int Internal_RaycastNonAlloc(PhysicsScene physicsScene, Ray ray, RaycastHit[] raycastHits, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x4B5B560", Offset = "0x4B5B560", VA = "0x4B5B560")]
	[UnityEngine.Bindings.NativeName("CapsuleCast")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	private static bool Query_CapsuleCast(PhysicsScene physicsScene, Vector3 point1, Vector3 point2, float radius, Vector3 direction, float maxDistance, ref RaycastHit hitInfo, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x4B5B690", Offset = "0x4B5B690", VA = "0x4B5B690")]
	private static bool Internal_CapsuleCast(PhysicsScene physicsScene, Vector3 point1, Vector3 point2, float radius, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x4B50EA0", Offset = "0x4B50EA0", VA = "0x4B50EA0")]
	public bool CapsuleCast(Vector3 point1, Vector3 point2, float radius, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance = float.PositiveInfinity, [DefaultValue("DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x4B5B850", Offset = "0x4B5B850", VA = "0x4B5B850")]
	[UnityEngine.Bindings.NativeName("SphereCast")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	private static bool Query_SphereCast(PhysicsScene physicsScene, Vector3 origin, float radius, Vector3 direction, float maxDistance, ref RaycastHit hitInfo, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x4B5B970", Offset = "0x4B5B970", VA = "0x4B5B970")]
	private static bool Internal_SphereCast(PhysicsScene physicsScene, Vector3 origin, float radius, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x4B51240", Offset = "0x4B51240", VA = "0x4B51240")]
	public bool SphereCast(Vector3 origin, float radius, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance = float.PositiveInfinity, [DefaultValue("DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x4B5BAF0", Offset = "0x4B5BAF0", VA = "0x4B5BAF0")]
	[UnityEngine.Bindings.NativeName("BoxCast")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	private static bool Query_BoxCast(PhysicsScene physicsScene, Vector3 center, Vector3 halfExtents, Vector3 direction, Quaternion orientation, float maxDistance, ref RaycastHit outHit, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x4B5BC00", Offset = "0x4B5BC00", VA = "0x4B5BC00")]
	private static bool Internal_BoxCast(PhysicsScene physicsScene, Vector3 center, Vector3 halfExtents, Quaternion orientation, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x4B51630", Offset = "0x4B51630", VA = "0x4B51630")]
	public bool BoxCast(Vector3 center, Vector3 halfExtents, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("Mathf.Infinity")] float maxDistance = float.PositiveInfinity, [DefaultValue("DefaultRaycastLayers")] int layerMask = -5, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction.UseGlobal)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000138")]
	[Address(RVA = "0x4B5B2C0", Offset = "0x4B5B2C0", VA = "0x4B5B2C0")]
	private static extern bool Internal_RaycastTest_Injected([In] ref PhysicsScene physicsScene, [In] ref Ray ray, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000139")]
	[Address(RVA = "0x4B5B390", Offset = "0x4B5B390", VA = "0x4B5B390")]
	private static extern bool Internal_Raycast_Injected([In] ref PhysicsScene physicsScene, [In] ref Ray ray, float maxDistance, ref RaycastHit hit, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013A")]
	[Address(RVA = "0x4B5B4F0", Offset = "0x4B5B4F0", VA = "0x4B5B4F0")]
	private static extern int Internal_RaycastNonAlloc_Injected([In] ref PhysicsScene physicsScene, [In] ref Ray ray, ref UnityEngine.Bindings.ManagedSpanWrapper raycastHits, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013B")]
	[Address(RVA = "0x4B5B610", Offset = "0x4B5B610", VA = "0x4B5B610")]
	private static extern bool Query_CapsuleCast_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 point1, [In] ref Vector3 point2, float radius, [In] ref Vector3 direction, float maxDistance, ref RaycastHit hitInfo, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013C")]
	[Address(RVA = "0x4B5B8F0", Offset = "0x4B5B8F0", VA = "0x4B5B8F0")]
	private static extern bool Query_SphereCast_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 origin, float radius, [In] ref Vector3 direction, float maxDistance, ref RaycastHit hitInfo, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013D")]
	[Address(RVA = "0x4B5BB90", Offset = "0x4B5BB90", VA = "0x4B5BB90")]
	private static extern bool Query_BoxCast_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 center, [In] ref Vector3 halfExtents, [In] ref Vector3 direction, [In] ref Quaternion orientation, float maxDistance, ref RaycastHit outHit, int layerMask, QueryTriggerInteraction queryTriggerInteraction);
}
