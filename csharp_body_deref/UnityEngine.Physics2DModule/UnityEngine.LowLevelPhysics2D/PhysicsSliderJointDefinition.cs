// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsSliderJointDefinition
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.LowLevelPhysics2D;

[Serializable]
[Token(Token = "0x2000015")]
public struct PhysicsSliderJointDefinition
{
	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private PhysicsBody m_BodyA;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private PhysicsBody m_BodyB;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private PhysicsTransform m_LocalAnchorA;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private PhysicsTransform m_LocalAnchorB;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private bool m_EnableSpring;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	private float m_SpringTargetTranslation;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[Min(0f)]
	private float m_SpringFrequency;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	[Min(0f)]
	private float m_SpringDamping;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private bool m_EnableMotor;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x44")]
	[SerializeField]
	private float m_MotorSpeed;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x48")]
	[Min(0f)]
	[SerializeField]
	private float m_MaxMotorForce;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private bool m_EnableLimit;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private float m_LowerTranslationLimit;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x54")]
	[SerializeField]
	private float m_UpperTranslationLimit;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x58")]
	[Min(0f)]
	[SerializeField]
	private float m_ForceThreshold;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x5C")]
	[Min(0f)]
	[SerializeField]
	private float m_TorqueThreshold;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	[Range(0f, 1000f)]
	private float m_TuningFrequency;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x64")]
	[Range(0f, 10f)]
	[SerializeField]
	private float m_TuningDamping;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x68")]
	[Range(0.001f, 10f)]
	[SerializeField]
	private float m_DrawScale;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x6C")]
	[SerializeField]
	private bool m_CollideConnected;

	[Token(Token = "0x1700001D")]
	public static PhysicsSliderJointDefinition defaultDefinition
	{
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x2FD78D0", Offset = "0x2FD5ED0", VA = "0x182FD78D0")]
		get
		{
			return default(PhysicsSliderJointDefinition);
		}
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x2FD7830", Offset = "0x2FD5E30", VA = "0x182FD7830")]
	public PhysicsSliderJointDefinition()
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x2FD7780", Offset = "0x2FD5D80", VA = "0x182FD7780")]
	public PhysicsSliderJointDefinition(bool useSettings)
	{
	}
}
