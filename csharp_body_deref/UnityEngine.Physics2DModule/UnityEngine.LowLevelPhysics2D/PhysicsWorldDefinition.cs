// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsWorldDefinition
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.LowLevelPhysics2D;

[Serializable]
[Token(Token = "0x200004F")]
public struct PhysicsWorldDefinition
{
	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Vector2 m_Gravity;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x8")]
	[FormerlySerializedAs("m_SimulationMode")]
	[SerializeField]
	private PhysicsWorld.SimulationType m_SimulationType;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0xC")]
	[SerializeField]
	[Min(1f)]
	private int m_SimulationSubSteps;

	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[Range(1f, 64f)]
	private int m_SimulationWorkers;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	private PhysicsWorld.TransformWriteMode m_TransformWriteMode;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private PhysicsWorld.TransformPlane m_TransformPlane;

	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	private bool m_TransformTweening;

	[Token(Token = "0x40001AB")]
	[FieldOffset(Offset = "0x1D")]
	[SerializeField]
	private bool m_SleepingAllowed;

	[Token(Token = "0x40001AC")]
	[FieldOffset(Offset = "0x1E")]
	[SerializeField]
	private bool m_ContinuousAllowed;

	[Token(Token = "0x40001AD")]
	[FieldOffset(Offset = "0x1F")]
	[SerializeField]
	private bool m_ContactFilterCallbacks;

	[Token(Token = "0x40001AE")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private bool m_PreSolveCallbacks;

	[Token(Token = "0x40001AF")]
	[FieldOffset(Offset = "0x21")]
	[SerializeField]
	private bool m_AutoBodyUpdateCallbacks;

	[Token(Token = "0x40001B0")]
	[FieldOffset(Offset = "0x22")]
	[SerializeField]
	private bool m_AutoContactCallbacks;

	[Token(Token = "0x40001B1")]
	[FieldOffset(Offset = "0x23")]
	[SerializeField]
	private bool m_AutoTriggerCallbacks;

	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private bool m_AutoJointThresholdCallbacks;

	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[Min(0f)]
	private float m_BounceThreshold;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	[Min(0f)]
	private float m_ContactHitEventThreshold;

	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x30")]
	[Min(0f)]
	[SerializeField]
	private float m_ContactFrequency;

	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	[Min(0f)]
	private float m_ContactDamping;

	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[Min(0f)]
	private float m_ContactSpeed;

	[Token(Token = "0x40001B8")]
	[FieldOffset(Offset = "0x3C")]
	[Min(0f)]
	[SerializeField]
	private float m_ContactRecycleDistance;

	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	[Min(0f)]
	private float m_MaximumLinearSpeed;

	[Token(Token = "0x40001BA")]
	[FieldOffset(Offset = "0x44")]
	[SerializeField]
	private PhysicsWorld.DrawOptions m_DrawOptions;

	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private PhysicsWorld.DrawFillOptions m_DrawFillOptions;

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private PhysicsWorld.DrawContactType m_DrawContactType;

	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x50")]
	[Range(1f, 5f)]
	[SerializeField]
	private float m_DrawThickness;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x54")]
	[Range(0f, 1f)]
	[SerializeField]
	private float m_DrawFillAlpha;

	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x58")]
	[Range(0.001f, 10f)]
	[SerializeField]
	private float m_DrawPointScale;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x5C")]
	[Range(0.001f, 10f)]
	[SerializeField]
	private float m_DrawNormalScale;

	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x60")]
	[Range(0.001f, 10f)]
	[SerializeField]
	private float m_DrawImpulseScale;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x64")]
	[SerializeField]
	[Min(0f)]
	private int m_DrawCapacity;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private PhysicsWorld.DrawColors m_DrawColors;

	[Token(Token = "0x1700006C")]
	public static PhysicsWorldDefinition defaultDefinition
	{
		[Token(Token = "0x6000170")]
		[Address(RVA = "0x2FD7ED0", Offset = "0x2FD64D0", VA = "0x182FD7ED0")]
		get
		{
			return default(PhysicsWorldDefinition);
		}
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x2FD7E00", Offset = "0x2FD6400", VA = "0x182FD7E00")]
	public PhysicsWorldDefinition()
	{
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x2FD7D10", Offset = "0x2FD6310", VA = "0x182FD7D10")]
	public PhysicsWorldDefinition(bool useSettings)
	{
	}
}
