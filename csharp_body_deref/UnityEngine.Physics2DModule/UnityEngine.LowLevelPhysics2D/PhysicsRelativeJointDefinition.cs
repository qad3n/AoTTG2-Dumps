// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsRelativeJointDefinition
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.LowLevelPhysics2D;

[Serializable]
[Token(Token = "0x2000014")]
public struct PhysicsRelativeJointDefinition
{
	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private PhysicsBody m_BodyA;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private PhysicsBody m_BodyB;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private PhysicsTransform m_LocalAnchorA;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private PhysicsTransform m_LocalAnchorB;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private Vector2 m_LinearVelocity;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private float m_AngularVelocity;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x3C")]
	[Min(0f)]
	[SerializeField]
	private float m_MaxForce;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x40")]
	[Min(0f)]
	[SerializeField]
	private float m_MaxTorque;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x44")]
	[SerializeField]
	[Min(0f)]
	private float m_SpringLinearFrequency;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x48")]
	[Min(0f)]
	[SerializeField]
	private float m_SpringAngularFrequency;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x4C")]
	[Min(0f)]
	[SerializeField]
	private float m_SpringLinearDamping;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	[Min(0f)]
	private float m_SpringAngularDamping;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x54")]
	[Min(0f)]
	[SerializeField]
	private float m_SpringMaxForce;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x58")]
	[Min(0f)]
	[SerializeField]
	private float m_SpringMaxTorque;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x5C")]
	[Min(0f)]
	[SerializeField]
	private float m_ForceThreshold;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	[Min(0f)]
	private float m_TorqueThreshold;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x64")]
	[SerializeField]
	[Range(0f, 1000f)]
	private float m_TuningFrequency;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	[Range(0f, 10f)]
	private float m_TuningDamping;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x6C")]
	[Range(0.001f, 10f)]
	[SerializeField]
	private float m_DrawScale;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private bool m_CollideConnected;

	[Token(Token = "0x1700001C")]
	public static PhysicsRelativeJointDefinition defaultDefinition
	{
		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x2FD5DE0", Offset = "0x2FD43E0", VA = "0x182FD5DE0")]
		get
		{
			return default(PhysicsRelativeJointDefinition);
		}
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x2FD5C50", Offset = "0x2FD4250", VA = "0x182FD5C50")]
	public PhysicsRelativeJointDefinition()
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x2FD5D10", Offset = "0x2FD4310", VA = "0x182FD5D10")]
	public PhysicsRelativeJointDefinition(bool useSettings)
	{
	}
}
