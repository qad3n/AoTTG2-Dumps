// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsFixedJointDefinition
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.LowLevelPhysics2D;

[Serializable]
[Token(Token = "0x2000010")]
public struct PhysicsFixedJointDefinition
{
	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private PhysicsBody m_BodyA;

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private PhysicsBody m_BodyB;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private PhysicsTransform m_LocalAnchorA;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private PhysicsTransform m_LocalAnchorB;

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[Min(0f)]
	private float m_LinearFrequency;

	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x34")]
	[Min(0f)]
	[SerializeField]
	private float m_LinearDamping;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x38")]
	[Min(0f)]
	[SerializeField]
	private float m_AngularFrequency;

	[Token(Token = "0x400005E")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	[Min(0f)]
	private float m_AngularDamping;

	[Token(Token = "0x400005F")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	[Min(0f)]
	private float m_ForceThreshold;

	[Token(Token = "0x4000060")]
	[FieldOffset(Offset = "0x44")]
	[Min(0f)]
	[SerializeField]
	private float m_TorqueThreshold;

	[Token(Token = "0x4000061")]
	[FieldOffset(Offset = "0x48")]
	[Range(0f, 1000f)]
	[SerializeField]
	private float m_TuningFrequency;

	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	[Range(0f, 10f)]
	private float m_TuningDamping;

	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	[Range(0.001f, 10f)]
	private float m_DrawScale;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x54")]
	[SerializeField]
	private bool m_CollideConnected;

	[Token(Token = "0x17000017")]
	public static PhysicsFixedJointDefinition defaultDefinition
	{
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x69CB700", Offset = "0x69CA700", VA = "0x69CB700")]
		get
		{
			return default(PhysicsFixedJointDefinition);
		}
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x69CB640", Offset = "0x69CA640", VA = "0x69CB640")]
	public PhysicsFixedJointDefinition()
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x69C8EE0", Offset = "0x69C7EE0", VA = "0x69C8EE0")]
	public PhysicsFixedJointDefinition(bool useSettings)
	{
	}
}
