// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.Physics2DRaycaster
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000C5")]
[AddComponentMenu("Event/Physics 2D Raycaster")]
[RequireComponent(typeof(Camera))]
public class Physics2DRaycaster : PhysicsRaycaster
{
	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x48")]
	private RaycastHit2D[] m_Hits;

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x51029A0", Offset = "0x51029A0", VA = "0x51029A0")]
	protected Physics2DRaycaster()
	{
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x51029E0", Offset = "0x51029E0", VA = "0x51029E0", Slot = "17")]
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList)
	{
	}
}
