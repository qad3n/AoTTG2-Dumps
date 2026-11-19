// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rigidbody
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

[Token(Token = "0x2000021")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/Rigidbody.h")]
[RequireComponent(typeof(Transform))]
public class Rigidbody : Component
{
	[Token(Token = "0x1700003F")]
	public Vector3 linearVelocity
	{
		[Token(Token = "0x600011F")]
		[Address(RVA = "0x69E1E60", Offset = "0x69E0E60", VA = "0x69E1E60")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000120")]
		[Address(RVA = "0x69E1F40", Offset = "0x69E0F40", VA = "0x69E1F40")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public Vector3 angularVelocity
	{
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x69E2010", Offset = "0x69E1010", VA = "0x69E2010")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x69E20F0", Offset = "0x69E10F0", VA = "0x69E20F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public float angularDamping
	{
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x69E21C0", Offset = "0x69E11C0", VA = "0x69E21C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x69E2270", Offset = "0x69E1270", VA = "0x69E2270")]
		set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public float mass
	{
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x69E2350", Offset = "0x69E1350", VA = "0x69E2350")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x69E2400", Offset = "0x69E1400", VA = "0x69E2400")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public bool useGravity
	{
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x69E24E0", Offset = "0x69E14E0", VA = "0x69E24E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public bool isKinematic
	{
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x69E25A0", Offset = "0x69E15A0", VA = "0x69E25A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x69E2650", Offset = "0x69E1650", VA = "0x69E2650")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public bool freezeRotation
	{
		[Token(Token = "0x600012A")]
		[Address(RVA = "0x69E2710", Offset = "0x69E1710", VA = "0x69E2710")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public RigidbodyConstraints constraints
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x69E28C0", Offset = "0x69E18C0", VA = "0x69E28C0")]
		get
		{
			return default(RigidbodyConstraints);
		}
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x69E2940", Offset = "0x69E1940", VA = "0x69E2940")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public CollisionDetectionMode collisionDetectionMode
	{
		[Token(Token = "0x600012D")]
		[Address(RVA = "0x69E2A30", Offset = "0x69E1A30", VA = "0x69E2A30")]
		get
		{
			return default(CollisionDetectionMode);
		}
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x69E2AE0", Offset = "0x69E1AE0", VA = "0x69E2AE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public Vector3 centerOfMass
	{
		[Token(Token = "0x600012F")]
		[Address(RVA = "0x69E2BA0", Offset = "0x69E1BA0", VA = "0x69E2BA0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x69E2C80", Offset = "0x69E1C80", VA = "0x69E2C80")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public bool detectCollisions
	{
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x69E2D50", Offset = "0x69E1D50", VA = "0x69E2D50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000132")]
		[Address(RVA = "0x69E2E00", Offset = "0x69E1E00", VA = "0x69E2E00")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public Vector3 position
	{
		[Token(Token = "0x6000133")]
		[Address(RVA = "0x69E2EC0", Offset = "0x69E1EC0", VA = "0x69E2EC0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000134")]
		[Address(RVA = "0x69E2FA0", Offset = "0x69E1FA0", VA = "0x69E2FA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public Quaternion rotation
	{
		[Token(Token = "0x6000135")]
		[Address(RVA = "0x69E3070", Offset = "0x69E2070", VA = "0x69E3070")]
		get
		{
			return default(Quaternion);
		}
		[Token(Token = "0x6000136")]
		[Address(RVA = "0x69E3150", Offset = "0x69E2150", VA = "0x69E3150")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public RigidbodyInterpolation interpolation
	{
		[Token(Token = "0x6000137")]
		[Address(RVA = "0x69E3220", Offset = "0x69E2220", VA = "0x69E3220")]
		get
		{
			return default(RigidbodyInterpolation);
		}
		[Token(Token = "0x6000138")]
		[Address(RVA = "0x69E32D0", Offset = "0x69E22D0", VA = "0x69E32D0")]
		set
		{
		}
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x69E3390", Offset = "0x69E2390", VA = "0x69E3390")]
	public void MovePosition(Vector3 position)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x69E3460", Offset = "0x69E2460", VA = "0x69E3460")]
	public void MoveRotation(Quaternion rotation)
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x69E3530", Offset = "0x69E2530", VA = "0x69E3530")]
	public void Move(Vector3 position, Quaternion rotation)
	{
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x69E3610", Offset = "0x69E2610", VA = "0x69E3610")]
	public void ResetCenterOfMass()
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x69E36C0", Offset = "0x69E26C0", VA = "0x69E36C0")]
	public void PublishTransform()
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x69E3770", Offset = "0x69E2770", VA = "0x69E3770")]
	public void AddForce(Vector3 force, [DefaultValue("ForceMode.Force")] ForceMode mode)
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x69E3850", Offset = "0x69E2850", VA = "0x69E3850")]
	[ExcludeFromDocs]
	public void AddForce(Vector3 force)
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x69E38E0", Offset = "0x69E28E0", VA = "0x69E38E0")]
	public void AddTorque(Vector3 torque, [DefaultValue("ForceMode.Force")] ForceMode mode)
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x69E39C0", Offset = "0x69E29C0", VA = "0x69E39C0")]
	public void AddForceAtPosition(Vector3 force, Vector3 position, [DefaultValue("ForceMode.Force")] ForceMode mode)
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x69E3AC0", Offset = "0x69E2AC0", VA = "0x69E3AC0")]
	public void AddExplosionForce(float explosionForce, Vector3 explosionPosition, float explosionRadius, [DefaultValue("0.0f")] float upwardsModifier, [DefaultValue("ForceMode.Force)")] ForceMode mode)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x69E3BF0", Offset = "0x69E2BF0", VA = "0x69E3BF0")]
	private RaycastHit SweepTest(Vector3 direction, float maxDistance, QueryTriggerInteraction queryTriggerInteraction, ref bool hasHit)
	{
		return default(RaycastHit);
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x69E3D50", Offset = "0x69E2D50", VA = "0x69E3D50")]
	public bool SweepTest(Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x69E3F60", Offset = "0x69E2F60", VA = "0x69E3F60")]
	[ExcludeFromDocs]
	public bool SweepTest(Vector3 direction, out RaycastHit hitInfo, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x69E3F70", Offset = "0x69E2F70", VA = "0x69E3F70")]
	public Rigidbody()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000147")]
	[Address(RVA = "0x69E1F00", Offset = "0x69E0F00", VA = "0x69E1F00")]
	private static extern void get_linearVelocity_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000148")]
	[Address(RVA = "0x69E1FD0", Offset = "0x69E0FD0", VA = "0x69E1FD0")]
	private static extern void set_linearVelocity_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000149")]
	[Address(RVA = "0x69E20B0", Offset = "0x69E10B0", VA = "0x69E20B0")]
	private static extern void get_angularVelocity_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014A")]
	[Address(RVA = "0x69E2180", Offset = "0x69E1180", VA = "0x69E2180")]
	private static extern void set_angularVelocity_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014B")]
	[Address(RVA = "0x69E2240", Offset = "0x69E1240", VA = "0x69E2240")]
	private static extern float get_angularDamping_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014C")]
	[Address(RVA = "0x69E2300", Offset = "0x69E1300", VA = "0x69E2300")]
	private static extern void set_angularDamping_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014D")]
	[Address(RVA = "0x69E23D0", Offset = "0x69E13D0", VA = "0x69E23D0")]
	private static extern float get_mass_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014E")]
	[Address(RVA = "0x69E2490", Offset = "0x69E1490", VA = "0x69E2490")]
	private static extern void set_mass_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014F")]
	[Address(RVA = "0x69E2560", Offset = "0x69E1560", VA = "0x69E2560")]
	private static extern void set_useGravity_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000150")]
	[Address(RVA = "0x69E2620", Offset = "0x69E1620", VA = "0x69E2620")]
	private static extern bool get_isKinematic_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000151")]
	[Address(RVA = "0x69E26D0", Offset = "0x69E16D0", VA = "0x69E26D0")]
	private static extern void set_isKinematic_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000152")]
	[Address(RVA = "0x69E29C0", Offset = "0x69E19C0", VA = "0x69E29C0")]
	private static extern RigidbodyConstraints get_constraints_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000153")]
	[Address(RVA = "0x69E29F0", Offset = "0x69E19F0", VA = "0x69E29F0")]
	private static extern void set_constraints_Injected(IntPtr _unity_self, RigidbodyConstraints value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000154")]
	[Address(RVA = "0x69E2AB0", Offset = "0x69E1AB0", VA = "0x69E2AB0")]
	private static extern CollisionDetectionMode get_collisionDetectionMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000155")]
	[Address(RVA = "0x69E2B60", Offset = "0x69E1B60", VA = "0x69E2B60")]
	private static extern void set_collisionDetectionMode_Injected(IntPtr _unity_self, CollisionDetectionMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000156")]
	[Address(RVA = "0x69E2C40", Offset = "0x69E1C40", VA = "0x69E2C40")]
	private static extern void get_centerOfMass_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000157")]
	[Address(RVA = "0x69E2D10", Offset = "0x69E1D10", VA = "0x69E2D10")]
	private static extern void set_centerOfMass_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000158")]
	[Address(RVA = "0x69E2DD0", Offset = "0x69E1DD0", VA = "0x69E2DD0")]
	private static extern bool get_detectCollisions_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000159")]
	[Address(RVA = "0x69E2E80", Offset = "0x69E1E80", VA = "0x69E2E80")]
	private static extern void set_detectCollisions_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600015A")]
	[Address(RVA = "0x69E2F60", Offset = "0x69E1F60", VA = "0x69E2F60")]
	private static extern void get_position_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600015B")]
	[Address(RVA = "0x69E3030", Offset = "0x69E2030", VA = "0x69E3030")]
	private static extern void set_position_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600015C")]
	[Address(RVA = "0x69E3110", Offset = "0x69E2110", VA = "0x69E3110")]
	private static extern void get_rotation_Injected(IntPtr _unity_self, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600015D")]
	[Address(RVA = "0x69E31E0", Offset = "0x69E21E0", VA = "0x69E31E0")]
	private static extern void set_rotation_Injected(IntPtr _unity_self, [In] ref Quaternion value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600015E")]
	[Address(RVA = "0x69E32A0", Offset = "0x69E22A0", VA = "0x69E32A0")]
	private static extern RigidbodyInterpolation get_interpolation_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600015F")]
	[Address(RVA = "0x69E3350", Offset = "0x69E2350", VA = "0x69E3350")]
	private static extern void set_interpolation_Injected(IntPtr _unity_self, RigidbodyInterpolation value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000160")]
	[Address(RVA = "0x69E3420", Offset = "0x69E2420", VA = "0x69E3420")]
	private static extern void MovePosition_Injected(IntPtr _unity_self, [In] ref Vector3 position);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000161")]
	[Address(RVA = "0x69E34F0", Offset = "0x69E24F0", VA = "0x69E34F0")]
	private static extern void MoveRotation_Injected(IntPtr _unity_self, [In] ref Quaternion rotation);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000162")]
	[Address(RVA = "0x69E35D0", Offset = "0x69E25D0", VA = "0x69E35D0")]
	private static extern void Move_Injected(IntPtr _unity_self, [In] ref Vector3 position, [In] ref Quaternion rotation);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000163")]
	[Address(RVA = "0x69E3690", Offset = "0x69E2690", VA = "0x69E3690")]
	private static extern void ResetCenterOfMass_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000164")]
	[Address(RVA = "0x69E3740", Offset = "0x69E2740", VA = "0x69E3740")]
	private static extern void PublishTransform_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000165")]
	[Address(RVA = "0x69E3810", Offset = "0x69E2810", VA = "0x69E3810")]
	private static extern void AddForce_Injected(IntPtr _unity_self, [In] ref Vector3 force, [DefaultValue("ForceMode.Force")] ForceMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000166")]
	[Address(RVA = "0x69E3980", Offset = "0x69E2980", VA = "0x69E3980")]
	private static extern void AddTorque_Injected(IntPtr _unity_self, [In] ref Vector3 torque, [DefaultValue("ForceMode.Force")] ForceMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000167")]
	[Address(RVA = "0x69E3A70", Offset = "0x69E2A70", VA = "0x69E3A70")]
	private static extern void AddForceAtPosition_Injected(IntPtr _unity_self, [In] ref Vector3 force, [In] ref Vector3 position, [DefaultValue("ForceMode.Force")] ForceMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000168")]
	[Address(RVA = "0x69E3B80", Offset = "0x69E2B80", VA = "0x69E3B80")]
	private static extern void AddExplosionForce_Injected(IntPtr _unity_self, float explosionForce, [In] ref Vector3 explosionPosition, float explosionRadius, [DefaultValue("0.0f")] float upwardsModifier, [DefaultValue("ForceMode.Force)")] ForceMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000169")]
	[Address(RVA = "0x69E3CE0", Offset = "0x69E2CE0", VA = "0x69E3CE0")]
	private static extern void SweepTest_Injected(IntPtr _unity_self, [In] ref Vector3 direction, float maxDistance, QueryTriggerInteraction queryTriggerInteraction, ref bool hasHit, out RaycastHit ret);
}
