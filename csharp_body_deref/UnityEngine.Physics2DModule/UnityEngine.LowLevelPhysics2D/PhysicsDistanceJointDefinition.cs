// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsDistanceJointDefinition
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.LowLevelPhysics2D;

[Serializable]
[Token(Token = "0x200000F")]
public struct PhysicsDistanceJointDefinition
{
	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private PhysicsBody m_BodyA;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private PhysicsBody m_BodyB;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private PhysicsTransform m_LocalAnchorA;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private PhysicsTransform m_LocalAnchorB;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[Min(1E-45f)]
	private float m_Distance;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	private bool m_EnableSpring;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x38")]
	[Min(0f)]
	[SerializeField]
	private float m_SpringFrequency;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	[Min(0f)]
	private float m_SpringDamping;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private float m_SpringLowerForce;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x44")]
	[SerializeField]
	private float m_SpringUpperForce;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private bool m_EnableMotor;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private float m_MotorSpeed;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private float m_MaxMotorForce;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x54")]
	[SerializeField]
	private bool m_EnableLimit;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	[Min(0f)]
	private float m_MinDistanceLimit;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x5C")]
	[Min(0f)]
	[SerializeField]
	private float m_MaxDistanceLimit;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	[Min(0f)]
	private float m_ForceThreshold;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x64")]
	[Min(0f)]
	[SerializeField]
	private float m_TorqueThreshold;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x68")]
	[Range(0f, 1000f)]
	[SerializeField]
	private float m_TuningFrequency;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x6C")]
	[Range(0f, 10f)]
	[SerializeField]
	private float m_TuningDamping;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x70")]
	[Range(0.001f, 10f)]
	[SerializeField]
	private float m_DrawScale;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x74")]
	[SerializeField]
	private bool m_CollideConnected;

	[Token(Token = "0x17000016")]
	public static PhysicsDistanceJointDefinition defaultDefinition
	{
		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x2FD1790", Offset = "0x2FCFD90", VA = "0x182FD1790")]
		get
		{
			return default(PhysicsDistanceJointDefinition);
		}
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x2FD16D0", Offset = "0x2FCFCD0", VA = "0x182FD16D0")]
	public PhysicsDistanceJointDefinition()
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x2FD1600", Offset = "0x2FCFC00", VA = "0x182FD1600")]
	public PhysicsDistanceJointDefinition(bool useSettings)
	{
	}
}
