// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsShapeDefinition
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.LowLevelPhysics2D;

[Serializable]
[Token(Token = "0x200005C")]
public struct PhysicsShapeDefinition
{
	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x0")]
	public PhysicsShape.ContactFilter contactFilter;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0x18")]
	public PhysicsShape.SurfaceMaterial surfaceMaterial;

	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x38")]
	[Min(0f)]
	[SerializeField]
	private float m_Density;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private bool m_IsTrigger;

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x3D")]
	[SerializeField]
	private bool m_TriggerEvents;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x3E")]
	[SerializeField]
	private bool m_ContactEvents;

	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x3F")]
	[SerializeField]
	private bool m_HitEvents;

	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private bool m_ContactFilterCallbacks;

	[Token(Token = "0x40001FD")]
	[FieldOffset(Offset = "0x41")]
	[SerializeField]
	private bool m_PreSolveCallbacks;

	[Token(Token = "0x40001FE")]
	[FieldOffset(Offset = "0x42")]
	[SerializeField]
	private bool m_StartStaticContacts;

	[Token(Token = "0x40001FF")]
	[FieldOffset(Offset = "0x43")]
	[SerializeField]
	private bool m_StartMassUpdate;

	[Token(Token = "0x4000200")]
	[FieldOffset(Offset = "0x44")]
	public PhysicsShape.MoverData moverData;

	[Token(Token = "0x17000072")]
	public static PhysicsShapeDefinition defaultDefinition
	{
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x2FD72A0", Offset = "0x2FD58A0", VA = "0x182FD72A0")]
		get
		{
			return default(PhysicsShapeDefinition);
		}
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x2FD7190", Offset = "0x2FD5790", VA = "0x182FD7190")]
	public PhysicsShapeDefinition()
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x2FD7210", Offset = "0x2FD5810", VA = "0x182FD7210")]
	public PhysicsShapeDefinition(bool useSettings)
	{
	}
}
