// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsChainDefinition
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.LowLevelPhysics2D;

[Serializable]
[Token(Token = "0x2000035")]
public struct PhysicsChainDefinition
{
	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private PhysicsShape.SurfaceMaterial m_SurfaceMaterial;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private PhysicsShape.ContactFilter m_ContactFilter;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private bool m_IsLoop;

	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x39")]
	[SerializeField]
	private bool m_TriggerEvents;

	[Token(Token = "0x1700004D")]
	public static PhysicsChainDefinition defaultDefinition
	{
		[Token(Token = "0x600012D")]
		[Address(RVA = "0x69CE2F0", Offset = "0x69CD2F0", VA = "0x69CE2F0")]
		get
		{
			return default(PhysicsChainDefinition);
		}
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x69CE260", Offset = "0x69CD260", VA = "0x69CE260")]
	public PhysicsChainDefinition()
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x69C8D50", Offset = "0x69C7D50", VA = "0x69C8D50")]
	public PhysicsChainDefinition(bool useSettings)
	{
	}
}
