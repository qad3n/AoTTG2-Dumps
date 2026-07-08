using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000C6")]
[AddComponentMenu("Event/Physics 2D Raycaster")]
[RequireComponent(typeof(Camera))]
public class Physics2DRaycaster : PhysicsRaycaster
{
	[Token(Token = "0x4000352")]
	[FieldOffset(Offset = "0x48")]
	private RaycastHit2D[] m_Hits;

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x4DDB1B0", Offset = "0x4DDB1B0", VA = "0x4DDB1B0")]
	protected Physics2DRaycaster()
	{
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x4DDB1F0", Offset = "0x4DDB1F0", VA = "0x4DDB1F0", Slot = "17")]
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList)
	{
	}
}
