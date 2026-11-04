// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PanelRaycaster
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000093")]
[AddComponentMenu("UI Toolkit/Panel Raycaster (UI Toolkit)")]
[UnityEngine.UGUIHelpURL("PanelRaycaster")]
public class PanelRaycaster : BaseRaycaster
{
	[Token(Token = "0x40002B0")]
	[FieldOffset(Offset = "0x28")]
	private UnityEngine.UIElements.BaseRuntimePanel m_Panel;

	[Token(Token = "0x40002B1")]
	[FieldOffset(Offset = "0x0")]
	private static UnityEngine.UIElements.ScreenOverlayPanelPicker panelPicker;

	[Token(Token = "0x1700018E")]
	public IPanel panel
	{
		[Token(Token = "0x60005F9")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "23")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005FA")]
		[Address(RVA = "0x32F9AE0", Offset = "0x32F80E0", VA = "0x1832F9AE0", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x1700018F")]
	private GameObject selectableGameObject
	{
		[Token(Token = "0x60005FE")]
		[Address(RVA = "0x32F9A50", Offset = "0x32F8050", VA = "0x1832F9A50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000190")]
	public override int sortOrderPriority
	{
		[Token(Token = "0x60005FF")]
		[Address(RVA = "0x32F9A70", Offset = "0x32F8070", VA = "0x1832F9A70", Slot = "20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000191")]
	public override int renderOrderPriority
	{
		[Token(Token = "0x6000600")]
		[Address(RVA = "0x32F99D0", Offset = "0x32F7FD0", VA = "0x1832F99D0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000192")]
	public override Camera eventCamera
	{
		[Token(Token = "0x6000602")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x32F9830", Offset = "0x32F7E30", VA = "0x1832F9830")]
	private void RegisterCallbacks()
	{
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x32F98C0", Offset = "0x32F7EC0", VA = "0x1832F98C0")]
	private void UnregisterCallbacks()
	{
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x32F92D0", Offset = "0x32F78D0", VA = "0x1832F92D0")]
	private void OnPanelDestroyed()
	{
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x32F9400", Offset = "0x32F7A00", VA = "0x1832F9400", Slot = "17")]
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList)
	{
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public PanelRaycaster()
	{
	}
}
