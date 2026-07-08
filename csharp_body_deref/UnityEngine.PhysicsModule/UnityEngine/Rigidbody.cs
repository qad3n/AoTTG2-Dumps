using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;

namespace UnityEngine;

[Token(Token = "0x2000010")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/Rigidbody.h")]
public class Rigidbody : Component
{
	[Token(Token = "0x17000016")]
	public Vector3 velocity
	{
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x4B562A0", Offset = "0x4B562A0", VA = "0x4B562A0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x4B563A0", Offset = "0x4B563A0", VA = "0x4B563A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public Vector3 angularVelocity
	{
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x4B56490", Offset = "0x4B56490", VA = "0x4B56490")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x4B56590", Offset = "0x4B56590", VA = "0x4B56590")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public float angularDrag
	{
		[Token(Token = "0x6000083")]
		[Address(RVA = "0x4B56680", Offset = "0x4B56680", VA = "0x4B56680")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000084")]
		[Address(RVA = "0x4B56750", Offset = "0x4B56750", VA = "0x4B56750")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public float mass
	{
		[Token(Token = "0x6000085")]
		[Address(RVA = "0x4B56850", Offset = "0x4B56850", VA = "0x4B56850")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000086")]
		[Address(RVA = "0x4B56920", Offset = "0x4B56920", VA = "0x4B56920")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public bool useGravity
	{
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x4B56A20", Offset = "0x4B56A20", VA = "0x4B56A20")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public bool isKinematic
	{
		[Token(Token = "0x6000088")]
		[Address(RVA = "0x4B56B00", Offset = "0x4B56B00", VA = "0x4B56B00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000089")]
		[Address(RVA = "0x4B56BD0", Offset = "0x4B56BD0", VA = "0x4B56BD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public bool freezeRotation
	{
		[Token(Token = "0x600008A")]
		[Address(RVA = "0x4B56CB0", Offset = "0x4B56CB0", VA = "0x4B56CB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public RigidbodyConstraints constraints
	{
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x4B56D90", Offset = "0x4B56D90", VA = "0x4B56D90")]
		get
		{
			return default(RigidbodyConstraints);
		}
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x4B56E60", Offset = "0x4B56E60", VA = "0x4B56E60")]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public CollisionDetectionMode collisionDetectionMode
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x4B56F40", Offset = "0x4B56F40", VA = "0x4B56F40")]
		get
		{
			return default(CollisionDetectionMode);
		}
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x4B57010", Offset = "0x4B57010", VA = "0x4B57010")]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public Vector3 centerOfMass
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x4B570F0", Offset = "0x4B570F0", VA = "0x4B570F0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x4B571F0", Offset = "0x4B571F0", VA = "0x4B571F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public bool detectCollisions
	{
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x4B572E0", Offset = "0x4B572E0", VA = "0x4B572E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x4B573B0", Offset = "0x4B573B0", VA = "0x4B573B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public Vector3 position
	{
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x4B57490", Offset = "0x4B57490", VA = "0x4B57490")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x4B57590", Offset = "0x4B57590", VA = "0x4B57590")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public Quaternion rotation
	{
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x4B57680", Offset = "0x4B57680", VA = "0x4B57680")]
		get
		{
			return default(Quaternion);
		}
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x4B57780", Offset = "0x4B57780", VA = "0x4B57780")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public RigidbodyInterpolation interpolation
	{
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x4B57870", Offset = "0x4B57870", VA = "0x4B57870")]
		get
		{
			return default(RigidbodyInterpolation);
		}
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x4B57940", Offset = "0x4B57940", VA = "0x4B57940")]
		set
		{
		}
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4B57A20", Offset = "0x4B57A20", VA = "0x4B57A20")]
	public void MovePosition(Vector3 position)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4B57B10", Offset = "0x4B57B10", VA = "0x4B57B10")]
	public void MoveRotation(Quaternion rot)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x4B57C00", Offset = "0x4B57C00", VA = "0x4B57C00")]
	public void Move(Vector3 position, Quaternion rotation)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4B57D00", Offset = "0x4B57D00", VA = "0x4B57D00")]
	public void ResetCenterOfMass()
	{
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x4B57DD0", Offset = "0x4B57DD0", VA = "0x4B57DD0")]
	public void PublishTransform()
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x4B57EA0", Offset = "0x4B57EA0", VA = "0x4B57EA0")]
	public void AddForce(Vector3 force, [DefaultValue("ForceMode.Force")] ForceMode mode)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x4B57FA0", Offset = "0x4B57FA0", VA = "0x4B57FA0")]
	[ExcludeFromDocs]
	public void AddForce(Vector3 force)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x4B58050", Offset = "0x4B58050", VA = "0x4B58050")]
	public void AddTorque(Vector3 torque, [DefaultValue("ForceMode.Force")] ForceMode mode)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4B58150", Offset = "0x4B58150", VA = "0x4B58150")]
	public void AddForceAtPosition(Vector3 force, Vector3 position, [DefaultValue("ForceMode.Force")] ForceMode mode)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4B58270", Offset = "0x4B58270", VA = "0x4B58270")]
	public void AddExplosionForce(float explosionForce, Vector3 explosionPosition, float explosionRadius, [DefaultValue("0.0f")] float upwardsModifier, [DefaultValue("ForceMode.Force)")] ForceMode mode)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4B583C0", Offset = "0x4B583C0", VA = "0x4B583C0")]
	private RaycastHit SweepTest(Vector3 direction, float maxDistance, QueryTriggerInteraction queryTriggerInteraction, ref bool hasHit)
	{
		return default(RaycastHit);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4B58540", Offset = "0x4B58540", VA = "0x4B58540")]
	public bool SweepTest(Vector3 direction, out RaycastHit hitInfo, [DefaultValue("Mathf.Infinity")] float maxDistance, [DefaultValue("QueryTriggerInteraction.UseGlobal")] QueryTriggerInteraction queryTriggerInteraction)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x4B58680", Offset = "0x4B58680", VA = "0x4B58680")]
	[ExcludeFromDocs]
	public bool SweepTest(Vector3 direction, out RaycastHit hitInfo, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4B587C0", Offset = "0x4B587C0", VA = "0x4B587C0")]
	public Rigidbody()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4B56360", Offset = "0x4B56360", VA = "0x4B56360")]
	private static extern void get_velocity_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x4B56450", Offset = "0x4B56450", VA = "0x4B56450")]
	private static extern void set_velocity_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4B56550", Offset = "0x4B56550", VA = "0x4B56550")]
	private static extern void get_angularVelocity_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4B56640", Offset = "0x4B56640", VA = "0x4B56640")]
	private static extern void set_angularVelocity_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4B56720", Offset = "0x4B56720", VA = "0x4B56720")]
	private static extern float get_angularDrag_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4B56800", Offset = "0x4B56800", VA = "0x4B56800")]
	private static extern void set_angularDrag_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4B568F0", Offset = "0x4B568F0", VA = "0x4B568F0")]
	private static extern float get_mass_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4B569D0", Offset = "0x4B569D0", VA = "0x4B569D0")]
	private static extern void set_mass_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4B56AC0", Offset = "0x4B56AC0", VA = "0x4B56AC0")]
	private static extern void set_useGravity_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x4B56BA0", Offset = "0x4B56BA0", VA = "0x4B56BA0")]
	private static extern bool get_isKinematic_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x4B56C70", Offset = "0x4B56C70", VA = "0x4B56C70")]
	private static extern void set_isKinematic_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x4B56D50", Offset = "0x4B56D50", VA = "0x4B56D50")]
	private static extern void set_freezeRotation_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x4B56E30", Offset = "0x4B56E30", VA = "0x4B56E30")]
	private static extern RigidbodyConstraints get_constraints_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x4B56F00", Offset = "0x4B56F00", VA = "0x4B56F00")]
	private static extern void set_constraints_Injected(IntPtr _unity_self, RigidbodyConstraints value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x4B56FE0", Offset = "0x4B56FE0", VA = "0x4B56FE0")]
	private static extern CollisionDetectionMode get_collisionDetectionMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x4B570B0", Offset = "0x4B570B0", VA = "0x4B570B0")]
	private static extern void set_collisionDetectionMode_Injected(IntPtr _unity_self, CollisionDetectionMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x4B571B0", Offset = "0x4B571B0", VA = "0x4B571B0")]
	private static extern void get_centerOfMass_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x4B572A0", Offset = "0x4B572A0", VA = "0x4B572A0")]
	private static extern void set_centerOfMass_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x4B57380", Offset = "0x4B57380", VA = "0x4B57380")]
	private static extern bool get_detectCollisions_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x4B57450", Offset = "0x4B57450", VA = "0x4B57450")]
	private static extern void set_detectCollisions_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4B57550", Offset = "0x4B57550", VA = "0x4B57550")]
	private static extern void get_position_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x4B57640", Offset = "0x4B57640", VA = "0x4B57640")]
	private static extern void set_position_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x4B57740", Offset = "0x4B57740", VA = "0x4B57740")]
	private static extern void get_rotation_Injected(IntPtr _unity_self, out Quaternion ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x4B57830", Offset = "0x4B57830", VA = "0x4B57830")]
	private static extern void set_rotation_Injected(IntPtr _unity_self, [In] ref Quaternion value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x4B57910", Offset = "0x4B57910", VA = "0x4B57910")]
	private static extern RigidbodyInterpolation get_interpolation_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x4B579E0", Offset = "0x4B579E0", VA = "0x4B579E0")]
	private static extern void set_interpolation_Injected(IntPtr _unity_self, RigidbodyInterpolation value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x4B57AD0", Offset = "0x4B57AD0", VA = "0x4B57AD0")]
	private static extern void MovePosition_Injected(IntPtr _unity_self, [In] ref Vector3 position);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x4B57BC0", Offset = "0x4B57BC0", VA = "0x4B57BC0")]
	private static extern void MoveRotation_Injected(IntPtr _unity_self, [In] ref Quaternion rot);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x4B57CC0", Offset = "0x4B57CC0", VA = "0x4B57CC0")]
	private static extern void Move_Injected(IntPtr _unity_self, [In] ref Vector3 position, [In] ref Quaternion rotation);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x4B57DA0", Offset = "0x4B57DA0", VA = "0x4B57DA0")]
	private static extern void ResetCenterOfMass_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x4B57E70", Offset = "0x4B57E70", VA = "0x4B57E70")]
	private static extern void PublishTransform_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x4B57F60", Offset = "0x4B57F60", VA = "0x4B57F60")]
	private static extern void AddForce_Injected(IntPtr _unity_self, [In] ref Vector3 force, [DefaultValue("ForceMode.Force")] ForceMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x4B58110", Offset = "0x4B58110", VA = "0x4B58110")]
	private static extern void AddTorque_Injected(IntPtr _unity_self, [In] ref Vector3 torque, [DefaultValue("ForceMode.Force")] ForceMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x4B58220", Offset = "0x4B58220", VA = "0x4B58220")]
	private static extern void AddForceAtPosition_Injected(IntPtr _unity_self, [In] ref Vector3 force, [In] ref Vector3 position, [DefaultValue("ForceMode.Force")] ForceMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x4B58350", Offset = "0x4B58350", VA = "0x4B58350")]
	private static extern void AddExplosionForce_Injected(IntPtr _unity_self, float explosionForce, [In] ref Vector3 explosionPosition, float explosionRadius, [DefaultValue("0.0f")] float upwardsModifier, [DefaultValue("ForceMode.Force)")] ForceMode mode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x4B584D0", Offset = "0x4B584D0", VA = "0x4B584D0")]
	private static extern void SweepTest_Injected(IntPtr _unity_self, [In] ref Vector3 direction, float maxDistance, QueryTriggerInteraction queryTriggerInteraction, ref bool hasHit, out RaycastHit ret);
}
