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

[Token(Token = "0x20000C8")]
[AddComponentMenu("Event/Physics 2D Raycaster")]
[RequireComponent(typeof(Camera))]
[UnityEngine.UGUIHelpURL("Physics2DRaycaster")]
public class Physics2DRaycaster : PhysicsRaycaster
{
	[Token(Token = "0x400037A")]
	[FieldOffset(Offset = "0x48")]
	private RaycastHit2D[] m_Hits;

	[Token(Token = "0x6000793")]
	[Address(RVA = "0x32FA490", Offset = "0x32F8A90", VA = "0x1832FA490")]
	protected Physics2DRaycaster()
	{
	}

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x32F9C50", Offset = "0x32F8250", VA = "0x1832F9C50", Slot = "17")]
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList)
	{
	}
}
