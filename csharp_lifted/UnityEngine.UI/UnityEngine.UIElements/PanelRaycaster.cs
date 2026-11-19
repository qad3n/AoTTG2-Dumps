// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PanelRaycaster
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6D04A80", Offset = "0x6D03A80", VA = "0x6D04A80", Slot = "23")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005FA")]
		[Address(RVA = "0x6D04A90", Offset = "0x6D03A90", VA = "0x6D04A90", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x1700018F")]
	private GameObject selectableGameObject
	{
		[Token(Token = "0x60005FE")]
		[Address(RVA = "0x6D04D10", Offset = "0x6D03D10", VA = "0x6D04D10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000190")]
	public override int sortOrderPriority
	{
		[Token(Token = "0x60005FF")]
		[Address(RVA = "0x6D04D30", Offset = "0x6D03D30", VA = "0x6D04D30", Slot = "20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000191")]
	public override int renderOrderPriority
	{
		[Token(Token = "0x6000600")]
		[Address(RVA = "0x6D04DD0", Offset = "0x6D03DD0", VA = "0x6D04DD0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000192")]
	public override Camera eventCamera
	{
		[Token(Token = "0x6000602")]
		[Address(RVA = "0x6D052D0", Offset = "0x6D042D0", VA = "0x6D052D0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x6D04C80", Offset = "0x6D03C80", VA = "0x6D04C80")]
	private void RegisterCallbacks()
	{
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x6D04C00", Offset = "0x6D03C00", VA = "0x6D04C00")]
	private void UnregisterCallbacks()
	{
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x6D04D00", Offset = "0x6D03D00", VA = "0x6D04D00")]
	private void OnPanelDestroyed()
	{
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x6D04E40", Offset = "0x6D03E40", VA = "0x6D04E40", Slot = "17")]
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList)
	{
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x6D052E0", Offset = "0x6D042E0", VA = "0x6D052E0")]
	public PanelRaycaster()
	{
	}
}
