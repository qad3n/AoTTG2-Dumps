// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rigidbody
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

[Token(Token = "0x2000021")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/Rigidbody.h")]
public class Rigidbody : Component
{
	[Token(Token = "0x1700003F")]
	public Vector3 linearVelocity
	{
		[Token(Token = "0x600011F")]
		[Address(RVA = "0x2FE7E40", Offset = "0x2FE6440", VA = "0x182FE7E40")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000120")]
		[Address(RVA = "0x2FE8A10", Offset = "0x2FE7010", VA = "0x182FE8A10")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public Vector3 angularVelocity
	{
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x2FE78A0", Offset = "0x2FE5EA0", VA = "0x182FE78A0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x2FE82A0", Offset = "0x2FE68A0", VA = "0x182FE82A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public float angularDamping
	{
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x2FE77D0", Offset = "0x2FE5DD0", VA = "0x182FE77D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x2FE81C0", Offset = "0x2FE67C0", VA = "0x182FE81C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public float mass
	{
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x2FE7F20", Offset = "0x2FE6520", VA = "0x182FE7F20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x2FE8AF0", Offset = "0x2FE70F0", VA = "0x182FE8AF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public bool useGravity
	{
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x2FE8D90", Offset = "0x2FE7390", VA = "0x182FE8D90")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public bool isKinematic
	{
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x2FE7D70", Offset = "0x2FE6370", VA = "0x182FE7D70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x2FE8930", Offset = "0x2FE6F30", VA = "0x182FE8930")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public bool freezeRotation
	{
		[Token(Token = "0x600012A")]
		[Address(RVA = "0x2FE8690", Offset = "0x2FE6C90", VA = "0x182FE8690")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public RigidbodyConstraints constraints
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x2FE7B30", Offset = "0x2FE6130", VA = "0x182FE7B30")]
		get
		{
			return default(RigidbodyConstraints);
		}
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x2FE8520", Offset = "0x2FE6B20", VA = "0x182FE8520")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public CollisionDetectionMode collisionDetectionMode
	{
		[Token(Token = "0x600012D")]
		[Address(RVA = "0x2FE7A70", Offset = "0x2FE6070", VA = "0x182FE7A70")]
		get
		{
			return default(CollisionDetectionMode);
		}
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x2FE8450", Offset = "0x2FE6A50", VA = "0x182FE8450")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public Vector3 centerOfMass
	{
		[Token(Token = "0x600012F")]
		[Address(RVA = "0x2FE7990", Offset = "0x2FE5F90", VA = "0x182FE7990")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x2FE8380", Offset = "0x2FE6980", VA = "0x182FE8380")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public bool detectCollisions
	{
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x2FE7BF0", Offset = "0x2FE61F0", VA = "0x182FE7BF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000132")]
		[Address(RVA = "0x2FE8600", Offset = "0x2FE6C00", VA = "0x182FE8600")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public Vector3 position
	{
		[Token(Token = "0x6000133")]
		[Address(RVA = "0x2FE7FF0", Offset = "0x2FE65F0", VA = "0x182FE7FF0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000134")]
		[Address(RVA = "0x2FE8BD0", Offset = "0x2FE71D0", VA = "0x182FE8BD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public Quaternion rotation
	{
		[Token(Token = "0x6000135")]
		[Address(RVA = "0x2FE80E0", Offset = "0x2FE66E0", VA = "0x182FE80E0")]
		get
		{
			return default(Quaternion);
		}
		[Token(Token = "0x6000136")]
		[Address(RVA = "0x2FE8CB0", Offset = "0x2FE72B0", VA = "0x182FE8CB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public RigidbodyInterpolation interpolation
	{
		[Token(Token = "0x6000137")]
		[Address(RVA = "0x2FE7CB0", Offset = "0x2FE62B0", VA = "0x182FE7CB0")]
		get
		{
			return default(RigidbodyInterpolation);
		}
		[Token(Token = "0x6000138")]
		[Address(RVA = "0x2FE8850", Offset = "0x2FE6E50", VA = "0x182FE8850")]
		set
		{
		}
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x2FE6FA0", Offset = "0x2FE55A0", VA = "0x182FE6FA0")]
	public void MovePosition(Vector3 position)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x2FE7080", Offset = "0x2FE5680", VA = "0x182FE7080")]
	public void MoveRotation(Quaternion rotation)
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x2FE7170", Offset = "0x2FE5770", VA = "0x182FE7170")]
	public void Move(Vector3 position, Quaternion rotation)
	{
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x2FE7310", Offset = "0x2FE5910", VA = "0x182FE7310")]
	public void ResetCenterOfMass()
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x2FE7250", Offset = "0x2FE5850", VA = "0x182FE7250")]
	public void PublishTransform()
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x2FE6DB0", Offset = "0x2FE53B0", VA = "0x182FE6DB0")]
	public void AddForce(Vector3 force, [DefaultValue("ForceMode.Force")] ForceMode mode)
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x2FE6D20", Offset = "0x2FE5320", VA = "0x182FE6D20")]
	[ExcludeFromDocs]
	public void AddForce(Vector3 force)
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x2FE6EB0", Offset = "0x2FE54B0", VA = "0x182FE6EB0")]
	public void AddTorque(Vector3 torque, [DefaultValue("ForceMode.Force")] ForceMode mode)
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x2FE6C20", Offset = "0x2FE5220", VA = "0x182FE6C20")]
	public void AddForceAtPosition(Vector3 force, Vector3 position, [DefaultValue("ForceMode.Force")] ForceMode mode)
	{
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x2FE6B10", Offset = "0x2FE5110", VA = "0x182FE6B10")]
	public void AddExplosionForce(float explosionForce, Vector3 explosionPosition, float explosionRadius, [DefaultValue("0.0f")] float upwardsModifier, [DefaultValue("ForceMode.Force)")] ForceMode mode)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x2FE7570", Offset = "0x2FE5B70", VA = "0x182FE7570")]
	private RaycastHit SweepTest(Vector3 direction, float maxDistance, QueryTriggerInteraction queryTriggerInteraction, ref bool hasHit)
	{
		return default(RaycastHit);
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x2FE7640", Offset = "0x2FE5C40", VA = "0x182FE7640")]
	public bool SweepTest(Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x2FE7400", Offset = "0x2FE5A00", VA = "0x182FE7400")]
	[ExcludeFromDocs]
	public bool SweepTest(Vector3 direction, out RaycastHit hitInfo, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public Rigidbody()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000147")]
	[Address(RVA = "0x2FE7DF0", Offset = "0x2FE63F0", VA = "0x182FE7DF0")]
	private static extern void get_linearVelocity_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000148")]
	[Address(RVA = "0x2FE89C0", Offset = "0x2FE6FC0", VA = "0x182FE89C0")]
	private static extern void set_linearVelocity_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000149")]
	[Address(RVA = "0x2FE7850", Offset = "0x2FE5E50", VA = "0x182FE7850")]
	private static extern void get_angularVelocity_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014A")]
	[Address(RVA = "0x2FE8250", Offset = "0x2FE6850", VA = "0x182FE8250")]
	private static extern void set_angularVelocity_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014B")]
	[Address(RVA = "0x2FE7790", Offset = "0x2FE5D90", VA = "0x182FE7790")]
	private static extern float get_angularDamping_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014C")]
	[Address(RVA = "0x2FE8170", Offset = "0x2FE6770", VA = "0x182FE8170")]
	private static extern void set_angularDamping_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014D")]
	[Address(RVA = "0x2FE7EE0", Offset = "0x2FE64E0", VA = "0x182FE7EE0")]
	private static extern float get_mass_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014E")]
	[Address(RVA = "0x2FE8AA0", Offset = "0x2FE70A0", VA = "0x182FE8AA0")]
	private static extern void set_mass_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014F")]
	[Address(RVA = "0x2FE8D40", Offset = "0x2FE7340", VA = "0x182FE8D40")]
	private static extern void set_useGravity_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000150")]
	[Address(RVA = "0x2FE7D30", Offset = "0x2FE6330", VA = "0x182FE7D30")]
	private static extern bool get_isKinematic_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000151")]
	[Address(RVA = "0x2FE88E0", Offset = "0x2FE6EE0", VA = "0x182FE88E0")]
	private static extern void set_isKinematic_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000152")]
	[Address(RVA = "0x2FE7AF0", Offset = "0x2FE60F0", VA = "0x182FE7AF0")]
	private static extern RigidbodyConstraints get_constraints_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000153")]
	[Address(RVA = "0x2FE84E0", Offset = "0x2FE6AE0", VA = "0x182FE84E0")]
	private static extern void set_constraints_Injected(IntPtr _unity_self, RigidbodyConstraints value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000154")]
	[Address(RVA = "0x2FE7A30", Offset = "0x2FE6030", VA = "0x182FE7A30")]
	private static extern CollisionDetectionMode get_collisionDetectionMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000155")]
	[Address(RVA = "0x2FE8410", Offset = "0x2FE6A10", VA = "0x182FE8410")]
	private static extern void set_collisionDetectionMode_Injected(IntPtr _unity_self, CollisionDetectionMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000156")]
	[Address(RVA = "0x2FE7940", Offset = "0x2FE5F40", VA = "0x182FE7940")]
	private static extern void get_centerOfMass_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000157")]
	[Address(RVA = "0x2FE8330", Offset = "0x2FE6930", VA = "0x182FE8330")]
	private static extern void set_centerOfMass_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000158")]
	[Address(RVA = "0x2FE7BB0", Offset = "0x2FE61B0", VA = "0x182FE7BB0")]
	private static extern bool get_detectCollisions_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000159")]
	[Address(RVA = "0x2FE85B0", Offset = "0x2FE6BB0", VA = "0x182FE85B0")]
	private static extern void set_detectCollisions_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600015A")]
	[Address(RVA = "0x2FE7FA0", Offset = "0x2FE65A0", VA = "0x182FE7FA0")]
	private static extern void get_position_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600015B")]
	[Address(RVA = "0x2FE8B80", Offset = "0x2FE7180", VA = "0x182FE8B80")]
	private static extern void set_position_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600015C")]
	[Address(RVA = "0x2FE8090", Offset = "0x2FE6690", VA = "0x182FE8090")]
	private static extern void get_rotation_Injected(IntPtr _unity_self, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600015D")]
	[Address(RVA = "0x2FE8C60", Offset = "0x2FE7260", VA = "0x182FE8C60")]
	private static extern void set_rotation_Injected(IntPtr _unity_self, [In] ref Quaternion value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600015E")]
	[Address(RVA = "0x2FE7C70", Offset = "0x2FE6270", VA = "0x182FE7C70")]
	private static extern RigidbodyInterpolation get_interpolation_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600015F")]
	[Address(RVA = "0x2FE8810", Offset = "0x2FE6E10", VA = "0x182FE8810")]
	private static extern void set_interpolation_Injected(IntPtr _unity_self, RigidbodyInterpolation value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000160")]
	[Address(RVA = "0x2FE6F50", Offset = "0x2FE5550", VA = "0x182FE6F50")]
	private static extern void MovePosition_Injected(IntPtr _unity_self, [In] ref Vector3 position);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000161")]
	[Address(RVA = "0x2FE7030", Offset = "0x2FE5630", VA = "0x182FE7030")]
	private static extern void MoveRotation_Injected(IntPtr _unity_self, [In] ref Quaternion rotation);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000162")]
	[Address(RVA = "0x2FE7110", Offset = "0x2FE5710", VA = "0x182FE7110")]
	private static extern void Move_Injected(IntPtr _unity_self, [In] ref Vector3 position, [In] ref Quaternion rotation);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000163")]
	[Address(RVA = "0x2FE72D0", Offset = "0x2FE58D0", VA = "0x182FE72D0")]
	private static extern void ResetCenterOfMass_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000164")]
	[Address(RVA = "0x2FE7210", Offset = "0x2FE5810", VA = "0x182FE7210")]
	private static extern void PublishTransform_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000165")]
	[Address(RVA = "0x2FE6CC0", Offset = "0x2FE52C0", VA = "0x182FE6CC0")]
	private static extern void AddForce_Injected(IntPtr _unity_self, [In] ref Vector3 force, [DefaultValue("ForceMode.Force")] ForceMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000166")]
	[Address(RVA = "0x2FE6E50", Offset = "0x2FE5450", VA = "0x182FE6E50")]
	private static extern void AddTorque_Injected(IntPtr _unity_self, [In] ref Vector3 torque, [DefaultValue("ForceMode.Force")] ForceMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000167")]
	[Address(RVA = "0x2FE6BD0", Offset = "0x2FE51D0", VA = "0x182FE6BD0")]
	private static extern void AddForceAtPosition_Injected(IntPtr _unity_self, [In] ref Vector3 force, [In] ref Vector3 position, [DefaultValue("ForceMode.Force")] ForceMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000168")]
	[Address(RVA = "0x2FE6AA0", Offset = "0x2FE50A0", VA = "0x182FE6AA0")]
	private static extern void AddExplosionForce_Injected(IntPtr _unity_self, float explosionForce, [In] ref Vector3 explosionPosition, float explosionRadius, [DefaultValue("0.0f")] float upwardsModifier, [DefaultValue("ForceMode.Force)")] ForceMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000169")]
	[Address(RVA = "0x2FE7390", Offset = "0x2FE5990", VA = "0x182FE7390")]
	private static extern void SweepTest_Injected(IntPtr _unity_self, [In] ref Vector3 direction, float maxDistance, QueryTriggerInteraction queryTriggerInteraction, ref bool hasHit, out RaycastHit ret);
}
