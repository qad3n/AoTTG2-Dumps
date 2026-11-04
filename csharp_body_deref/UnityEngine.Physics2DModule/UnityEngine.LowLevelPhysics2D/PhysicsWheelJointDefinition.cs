// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsWheelJointDefinition
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.LowLevelPhysics2D;

[Serializable]
[Token(Token = "0x2000016")]
public struct PhysicsWheelJointDefinition
{
	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private PhysicsBody m_BodyA;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private PhysicsBody m_BodyB;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private PhysicsTransform m_LocalAnchorA;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private PhysicsTransform m_LocalAnchorB;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private bool m_EnableSpring;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	[Min(0f)]
	private float m_SpringFrequency;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x38")]
	[Min(0f)]
	[SerializeField]
	private float m_SpringDamping;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private bool m_EnableMotor;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private float m_MotorSpeed;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x44")]
	[SerializeField]
	[Min(0f)]
	private float m_MaxMotorTorque;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private bool m_EnableLimit;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private float m_LowerTranslationLimit;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private float m_UpperTranslationLimit;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x54")]
	[Min(0f)]
	[SerializeField]
	private float m_ForceThreshold;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	[Min(0f)]
	private float m_TorqueThreshold;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x5C")]
	[Range(0f, 1000f)]
	[SerializeField]
	private float m_TuningFrequency;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x60")]
	[Range(0f, 10f)]
	[SerializeField]
	private float m_TuningDamping;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x64")]
	[SerializeField]
	[Range(0.001f, 10f)]
	private float m_DrawScale;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private bool m_CollideConnected;

	[Token(Token = "0x1700001E")]
	public static PhysicsWheelJointDefinition defaultDefinition
	{
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x2FD7C70", Offset = "0x2FD6270", VA = "0x182FD7C70")]
		get
		{
			return default(PhysicsWheelJointDefinition);
		}
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x2FD7BD0", Offset = "0x2FD61D0", VA = "0x182FD7BD0")]
	public PhysicsWheelJointDefinition()
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x2FD7B20", Offset = "0x2FD6120", VA = "0x182FD7B20")]
	public PhysicsWheelJointDefinition(bool useSettings)
	{
	}
}
