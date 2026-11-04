// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsHingeJointDefinition
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.LowLevelPhysics2D;

[Serializable]
[Token(Token = "0x2000011")]
public struct PhysicsHingeJointDefinition
{
	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private PhysicsBody m_BodyA;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private PhysicsBody m_BodyB;

	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private PhysicsTransform m_LocalAnchorA;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private PhysicsTransform m_LocalAnchorB;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private bool m_EnableUnpinned;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x31")]
	[SerializeField]
	private bool m_EnableSpring;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	private float m_SpringTargetAngle;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[Min(0f)]
	private float m_SpringFrequency;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x3C")]
	[Min(0f)]
	[SerializeField]
	private float m_SpringDamping;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private bool m_EnableMotor;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x44")]
	[SerializeField]
	private float m_MotorSpeed;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x48")]
	[Min(0f)]
	[SerializeField]
	private float m_MaxMotorTorque;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private bool m_EnableLimit;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	[Range(-178f, 178f)]
	private float m_LowerAngleLimit;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x54")]
	[Range(-178f, 178f)]
	[SerializeField]
	private float m_UpperAngleLimit;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x58")]
	[Min(0f)]
	[SerializeField]
	private float m_ForceThreshold;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x5C")]
	[SerializeField]
	[Min(0f)]
	private float m_TorqueThreshold;

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x60")]
	[Range(0f, 1000f)]
	[SerializeField]
	private float m_TuningFrequency;

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x64")]
	[Range(0f, 10f)]
	[SerializeField]
	private float m_TuningDamping;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	[Range(0.001f, 10f)]
	private float m_DrawScale;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x6C")]
	[SerializeField]
	private bool m_CollideConnected;

	[Token(Token = "0x17000018")]
	public static PhysicsHingeJointDefinition defaultDefinition
	{
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x2FD1F30", Offset = "0x2FD0530", VA = "0x182FD1F30")]
		get
		{
			return default(PhysicsHingeJointDefinition);
		}
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x2FD1DE0", Offset = "0x2FD03E0", VA = "0x182FD1DE0")]
	public PhysicsHingeJointDefinition()
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x2FD1E80", Offset = "0x2FD0480", VA = "0x182FD1E80")]
	public PhysicsHingeJointDefinition(bool useSettings)
	{
	}
}
