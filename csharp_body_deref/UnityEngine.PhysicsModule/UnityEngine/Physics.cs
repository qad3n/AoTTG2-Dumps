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
		[Address(RVA = "0x4B4EF40", Offset = "0x4B4EF40", VA = "0x4B4EF40")]
		get;
	}

	[Token(Token = "0x1700000B")]
	[UnityEngine.Bindings.NativeProperty("DefaultPhysicsSceneHandle", true, UnityEngine.Bindings.TargetType.Function, true)]
	public static PhysicsScene defaultPhysicsScene
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4B4EF70", Offset = "0x4B4EF70", VA = "0x4B4EF70")]
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
		[Address(RVA = "0x4B53750", Offset = "0x4B53750", VA = "0x4B53750")]
		get;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4B4EE70", Offset = "0x4B4EE70", VA = "0x4B4EE70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnSceneContactModify(PhysicsScene scene, IntPtr buffer, int count, bool isCCD)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4B4F020", Offset = "0x4B4F020", VA = "0x4B4F020")]
	public static void IgnoreCollision([UnityEngine.Bindings.NotNull("NullExceptionObject")] Collider collider1, [UnityEngine.Bindings.NotNull("NullExceptionObject")] Collider collider2, [DefaultValue("true")] bool ignore)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4B4F190", Offset = "0x4B4F190", VA = "0x4B4F190")]
	[ExcludeFromDocs]
	public static void IgnoreCollision(Collider collider1, Collider collider2)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4B4F1F0", Offset = "0x4B4F1F0", VA = "0x4B4F1F0")]
	[UnityEngine.Bindings.NativeName("IgnoreCollision")]
	public static extern void IgnoreLayerCollision(int layer1, int layer2, [DefaultValue("true")] bool ignore);

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4B4F230", Offset = "0x4B4F230", VA = "0x4B4F230")]
	public static bool Raycast(Vector3 origin, Vector3 direction, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4B4F5F0", Offset = "0x4B4F5F0", VA = "0x4B4F5F0")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4B4F730", Offset = "0x4B4F730", VA = "0x4B4F730")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4B4F870", Offset = "0x4B4F870", VA = "0x4B4F870")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4B4F9A0", Offset = "0x4B4F9A0", VA = "0x4B4F9A0")]
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4B4FD90", Offset = "0x4B4FD90", VA = "0x4B4FD90")]
	[ExcludeFromDocs]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4B4FEE0", Offset = "0x4B4FEE0", VA = "0x4B4FEE0")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4B50020", Offset = "0x4B50020", VA = "0x4B50020")]
	[ExcludeFromDocs]
	public static bool Raycast(Vector3 origin, Vector3 direction, out RaycastHit hitInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4B50160", Offset = "0x4B50160", VA = "0x4B50160")]
	public static bool Raycast(Ray ray, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4B50290", Offset = "0x4B50290", VA = "0x4B50290")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4B503C0", Offset = "0x4B503C0", VA = "0x4B503C0")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4B504E0", Offset = "0x4B504E0", VA = "0x4B504E0")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray)
	{
		return default(bool);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4B50600", Offset = "0x4B50600", VA = "0x4B50600")]
	public static bool Raycast(Ray ray, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4B50750", Offset = "0x4B50750", VA = "0x4B50750")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4B50810", Offset = "0x4B50810", VA = "0x4B50810")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4B50940", Offset = "0x4B50940", VA = "0x4B50940")]
	[ExcludeFromDocs]
	public static bool Raycast(Ray ray, out RaycastHit hitInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4B50A80", Offset = "0x4B50A80", VA = "0x4B50A80")]
	public static bool Linecast(Vector3 start, Vector3 end, out RaycastHit hitInfo, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4B50C60", Offset = "0x4B50C60", VA = "0x4B50C60")]
	[ExcludeFromDocs]
	public static bool Linecast(Vector3 start, Vector3 end, out RaycastHit hitInfo, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4B50D10", Offset = "0x4B50D10", VA = "0x4B50D10")]
	public static bool CapsuleCast(Vector3 point1, Vector3 point2, float radius, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4B50EB0", Offset = "0x4B50EB0", VA = "0x4B50EB0")]
	[ExcludeFromDocs]
	public static bool CapsuleCast(Vector3 point1, Vector3 point2, float radius, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4B50FC0", Offset = "0x4B50FC0", VA = "0x4B50FC0")]
	public static bool SphereCast(Vector3 origin, float radius, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4B513C0", Offset = "0x4B513C0", VA = "0x4B513C0")]
	[ExcludeFromDocs]
	public static bool SphereCast(Vector3 origin, float radius, Vector3 direction, out RaycastHit hitInfo, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4B514A0", Offset = "0x4B514A0", VA = "0x4B514A0")]
	public static bool BoxCast(Vector3 center, Vector3 halfExtents, Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4B51650", Offset = "0x4B51650", VA = "0x4B51650")]
	[ExcludeFromDocs]
	public static bool BoxCast(Vector3 center, Vector3 halfExtents, Vector3 direction, out RaycastHit hitInfo, Quaternion orientation, float maxDistance, int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4B51750", Offset = "0x4B51750", VA = "0x4B51750")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	[UnityEngine.Bindings.NativeName("RaycastAll")]
	private static RaycastHit[] Internal_RaycastAll(PhysicsScene physicsScene, Ray ray, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4B51870", Offset = "0x4B51870", VA = "0x4B51870")]
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4B51C50", Offset = "0x4B51C50", VA = "0x4B51C50")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction, float maxDistance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4B51D10", Offset = "0x4B51D10", VA = "0x4B51D10")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction, float maxDistance)
	{
		return null;
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4B51DF0", Offset = "0x4B51DF0", VA = "0x4B51DF0")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Vector3 origin, Vector3 direction)
	{
		return null;
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4B51EA0", Offset = "0x4B51EA0", VA = "0x4B51EA0")]
	public static RaycastHit[] RaycastAll(Ray ray, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4B51F60", Offset = "0x4B51F60", VA = "0x4B51F60")]
	[ExcludeFromDocs]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static RaycastHit[] RaycastAll(Ray ray, float maxDistance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4B52010", Offset = "0x4B52010", VA = "0x4B52010")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Ray ray, float maxDistance)
	{
		return null;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4B520C0", Offset = "0x4B520C0", VA = "0x4B520C0")]
	[ExcludeFromDocs]
	public static RaycastHit[] RaycastAll(Ray ray)
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4B52160", Offset = "0x4B52160", VA = "0x4B52160")]
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4B525F0", Offset = "0x4B525F0", VA = "0x4B525F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results, float maxDistance, int layerMask)
	{
		return default(int);
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4B52720", Offset = "0x4B52720", VA = "0x4B52720")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results, float maxDistance)
	{
		return default(int);
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4B52850", Offset = "0x4B52850", VA = "0x4B52850")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Ray ray, RaycastHit[] results)
	{
		return default(int);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4B52990", Offset = "0x4B52990", VA = "0x4B52990")]
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(int);
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4B52AE0", Offset = "0x4B52AE0", VA = "0x4B52AE0")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results, float maxDistance, int layerMask)
	{
		return default(int);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4B52C30", Offset = "0x4B52C30", VA = "0x4B52C30")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results, float maxDistance)
	{
		return default(int);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4B52D70", Offset = "0x4B52D70", VA = "0x4B52D70")]
	[ExcludeFromDocs]
	public static int RaycastNonAlloc(Vector3 origin, Vector3 direction, RaycastHit[] results)
	{
		return default(int);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4B52EB0", Offset = "0x4B52EB0", VA = "0x4B52EB0")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	[UnityEngine.Bindings.NativeName("SphereCastAll")]
	private static RaycastHit[] Query_SphereCastAll(PhysicsScene physicsScene, Vector3 origin, float radius, Vector3 direction, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4B53000", Offset = "0x4B53000", VA = "0x4B53000")]
	public static RaycastHit[] SphereCastAll(Vector3 origin, float radius, Vector3 direction, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4B53300", Offset = "0x4B53300", VA = "0x4B53300")]
	[ExcludeFromDocs]
	public static RaycastHit[] SphereCastAll(Vector3 origin, float radius, Vector3 direction, float maxDistance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4B533D0", Offset = "0x4B533D0", VA = "0x4B533D0")]
	[UnityEngine.Bindings.NativeName("OverlapSphere")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	private static Collider[] OverlapSphere_Internal(PhysicsScene physicsScene, Vector3 position, float radius, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4B534F0", Offset = "0x4B534F0", VA = "0x4B534F0")]
	public static Collider[] OverlapSphere(Vector3 position, float radius, [DefaultValue("AllLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4B536C0", Offset = "0x4B536C0", VA = "0x4B536C0")]
	[ExcludeFromDocs]
	public static Collider[] OverlapSphere(Vector3 position, float radius, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4B53780", Offset = "0x4B53780", VA = "0x4B53780")]
	[UnityEngine.Bindings.NativeName("ComputePenetration")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()")]
	private static bool Query_ComputePenetration([UnityEngine.Bindings.NotNull("ArgumentNullException")] Collider colliderA, Vector3 positionA, Quaternion rotationA, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Collider colliderB, Vector3 positionB, Quaternion rotationB, ref Vector3 direction, ref float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4B539F0", Offset = "0x4B539F0", VA = "0x4B539F0")]
	public static bool ComputePenetration(Collider colliderA, Vector3 positionA, Quaternion rotationA, Collider colliderB, Vector3 positionB, Quaternion rotationB, out Vector3 direction, out float distance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4B53AF0", Offset = "0x4B53AF0", VA = "0x4B53AF0")]
	[UnityEngine.Bindings.NativeName("ClosestPoint")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()")]
	private static Vector3 Query_ClosestPoint([UnityEngine.Bindings.NotNull("ArgumentNullException")] Collider collider, Vector3 position, Quaternion rotation, Vector3 point)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4B53CC0", Offset = "0x4B53CC0", VA = "0x4B53CC0")]
	public static Vector3 ClosestPoint(Vector3 point, Collider collider, Vector3 position, Quaternion rotation)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4B53DB0", Offset = "0x4B53DB0", VA = "0x4B53DB0")]
	[UnityEngine.Bindings.NativeName("OverlapBox")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()")]
	private static Collider[] OverlapBox_Internal(PhysicsScene physicsScene, Vector3 center, Vector3 halfExtents, Quaternion orientation, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4B53EE0", Offset = "0x4B53EE0", VA = "0x4B53EE0")]
	public static Collider[] OverlapBox(Vector3 center, Vector3 halfExtents, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("AllLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4B540F0", Offset = "0x4B540F0", VA = "0x4B540F0")]
	[ExcludeFromDocs]
	public static Collider[] OverlapBox(Vector3 center, Vector3 halfExtents, Quaternion orientation, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4B541C0", Offset = "0x4B541C0", VA = "0x4B541C0")]
	[UnityEngine.Bindings.NativeName("BoxCastAll")]
	[UnityEngine.Bindings.StaticAccessor("GetPhysicsManager().GetPhysicsQuery()")]
	private static RaycastHit[] Internal_BoxCastAll(PhysicsScene physicsScene, Vector3 center, Vector3 halfExtents, Vector3 direction, Quaternion orientation, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4B54320", Offset = "0x4B54320", VA = "0x4B54320")]
	public static RaycastHit[] BoxCastAll(Vector3 center, Vector3 halfExtents, Vector3 direction, [DefaultValue("Quaternion.identity")] Quaternion orientation, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("DefaultRaycastLayers")] int layerMask, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return null;
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4B54680", Offset = "0x4B54680", VA = "0x4B54680")]
	[ExcludeFromDocs]
	public static RaycastHit[] BoxCastAll(Vector3 center, Vector3 halfExtents, Vector3 direction, Quaternion orientation, float maxDistance, int layerMask)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4B54780", Offset = "0x4B54780", VA = "0x4B54780")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static extern Collider GetColliderByInstanceID(int instanceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4B547B0", Offset = "0x4B547B0", VA = "0x4B547B0")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static extern Component GetBodyByInstanceID(int instanceID);

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4B547E0", Offset = "0x4B547E0", VA = "0x4B547E0")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static void SendOnCollisionEnter(Component component, Collision collision)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4B54910", Offset = "0x4B54910", VA = "0x4B54910")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static void SendOnCollisionStay(Component component, Collision collision)
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4B54A40", Offset = "0x4B54A40", VA = "0x4B54A40")]
	[UnityEngine.Bindings.StaticAccessor("PhysicsManager", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static void SendOnCollisionExit(Component component, Collision collision)
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4B54B70", Offset = "0x4B54B70", VA = "0x4B54B70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void OnSceneContact(PhysicsScene scene, IntPtr buffer, int count)
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4B54E80", Offset = "0x4B54E80", VA = "0x4B54E80")]
	private static void ReportContacts(NativeArray<ContactPairHeader>.ReadOnly array)
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4B55500", Offset = "0x4B55500", VA = "0x4B55500")]
	private static Collision GetCollisionToReport(in ContactPairHeader header, in ContactPair pair, bool flipped)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4B4EFF0", Offset = "0x4B4EFF0", VA = "0x4B4EFF0")]
	private static extern void get_defaultPhysicsScene_Injected(out PhysicsScene ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4B4F150", Offset = "0x4B4F150", VA = "0x4B4F150")]
	private static extern void IgnoreCollision_Injected(IntPtr collider1, IntPtr collider2, [DefaultValue("true")] bool ignore);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4B51810", Offset = "0x4B51810", VA = "0x4B51810")]
	private static extern RaycastHit[] Internal_RaycastAll_Injected([In] ref PhysicsScene physicsScene, [In] ref Ray ray, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4B52F90", Offset = "0x4B52F90", VA = "0x4B52F90")]
	private static extern RaycastHit[] Query_SphereCastAll_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 origin, float radius, [In] ref Vector3 direction, float maxDistance, int mask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005B")]
	[Address(RVA = "0x4B53490", Offset = "0x4B53490", VA = "0x4B53490")]
	private static extern Collider[] OverlapSphere_Internal_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 position, float radius, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4B53990", Offset = "0x4B53990", VA = "0x4B53990")]
	private static extern bool Query_ComputePenetration_Injected(IntPtr colliderA, [In] ref Vector3 positionA, [In] ref Quaternion rotationA, IntPtr colliderB, [In] ref Vector3 positionB, [In] ref Quaternion rotationB, ref Vector3 direction, ref float distance);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x4B53C60", Offset = "0x4B53C60", VA = "0x4B53C60")]
	private static extern void Query_ClosestPoint_Injected(IntPtr collider, [In] ref Vector3 position, [In] ref Quaternion rotation, [In] ref Vector3 point, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4B53E80", Offset = "0x4B53E80", VA = "0x4B53E80")]
	private static extern Collider[] OverlapBox_Internal_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 center, [In] ref Vector3 halfExtents, [In] ref Quaternion orientation, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4B542B0", Offset = "0x4B542B0", VA = "0x4B542B0")]
	private static extern RaycastHit[] Internal_BoxCastAll_Injected([In] ref PhysicsScene physicsScene, [In] ref Vector3 center, [In] ref Vector3 halfExtents, [In] ref Vector3 direction, [In] ref Quaternion orientation, float maxDistance, int layerMask, QueryTriggerInteraction queryTriggerInteraction);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4B548D0", Offset = "0x4B548D0", VA = "0x4B548D0")]
	private static extern void SendOnCollisionEnter_Injected(IntPtr component, Collision collision);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4B54A00", Offset = "0x4B54A00", VA = "0x4B54A00")]
	private static extern void SendOnCollisionStay_Injected(IntPtr component, Collision collision);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4B54B30", Offset = "0x4B54B30", VA = "0x4B54B30")]
	private static extern void SendOnCollisionExit_Injected(IntPtr component, Collision collision);
}
