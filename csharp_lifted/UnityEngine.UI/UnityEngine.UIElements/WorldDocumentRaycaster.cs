// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.WorldDocumentRaycaster
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000097")]
[AddComponentMenu("UI Toolkit/World Document Raycaster (UI Toolkit)")]
public class WorldDocumentRaycaster : BaseRaycaster
{
	[Token(Token = "0x40002CA")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private Camera m_EventCamera;

	[Token(Token = "0x40002CB")]
	[FieldOffset(Offset = "0x0")]
	private static UnityEngine.UIElements.PhysicsDocumentPicker worldPicker;

	[Token(Token = "0x1700019A")]
	public override Camera eventCamera
	{
		[Token(Token = "0x6000627")]
		[Address(RVA = "0x6D06FC0", Offset = "0x6D05FC0", VA = "0x6D06FC0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019B")]
	public Camera camera
	{
		[Token(Token = "0x6000628")]
		[Address(RVA = "0x6D06FD0", Offset = "0x6D05FD0", VA = "0x6D06FD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000629")]
		[Address(RVA = "0x6D06FE0", Offset = "0x6D05FE0", VA = "0x6D06FE0")]
		set
		{
		}
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x6D06FF0", Offset = "0x6D05FF0", VA = "0x6D06FF0", Slot = "17")]
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList)
	{
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x6D07730", Offset = "0x6D06730", VA = "0x6D07730", Slot = "22")]
	protected virtual bool GetWorldRay(PointerEventData eventData, out Ray worldRay, out float maxDistance, out int layerMask)
	{
		return default(bool);
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x6D078A0", Offset = "0x6D068A0", VA = "0x6D078A0")]
	public WorldDocumentRaycaster()
	{
	}
}
