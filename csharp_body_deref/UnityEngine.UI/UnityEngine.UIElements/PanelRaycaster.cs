using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000095")]
[AddComponentMenu("UI Toolkit/Panel Raycaster (UI Toolkit)")]
public class PanelRaycaster : BaseRaycaster, UnityEngine.UIElements.IRuntimePanelComponent
{
	[Token(Token = "0x40002A8")]
	[FieldOffset(Offset = "0x28")]
	private UnityEngine.UIElements.BaseRuntimePanel m_Panel;

	[Token(Token = "0x17000187")]
	public IPanel panel
	{
		[Token(Token = "0x60005DC")]
		[Address(RVA = "0x4DCC990", Offset = "0x4DCC990", VA = "0x4DCC990", Slot = "23")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005DD")]
		[Address(RVA = "0x4DCC9A0", Offset = "0x4DCC9A0", VA = "0x4DCC9A0", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x17000188")]
	private GameObject selectableGameObject
	{
		[Token(Token = "0x60005E1")]
		[Address(RVA = "0x4DCCC20", Offset = "0x4DCCC20", VA = "0x4DCCC20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000189")]
	public override int sortOrderPriority
	{
		[Token(Token = "0x60005E2")]
		[Address(RVA = "0x4DCCC40", Offset = "0x4DCCC40", VA = "0x4DCCC40", Slot = "20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700018A")]
	public override int renderOrderPriority
	{
		[Token(Token = "0x60005E3")]
		[Address(RVA = "0x4DCCCE0", Offset = "0x4DCCCE0", VA = "0x4DCCCE0", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700018B")]
	public override Camera eventCamera
	{
		[Token(Token = "0x60005E5")]
		[Address(RVA = "0x4DCD4D0", Offset = "0x4DCD4D0", VA = "0x4DCD4D0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x4DCCB90", Offset = "0x4DCCB90", VA = "0x4DCCB90")]
	private void RegisterCallbacks()
	{
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x4DCCB10", Offset = "0x4DCCB10", VA = "0x4DCCB10")]
	private void UnregisterCallbacks()
	{
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x4DCCC10", Offset = "0x4DCCC10", VA = "0x4DCCC10")]
	private void OnPanelDestroyed()
	{
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x4DCCD50", Offset = "0x4DCCD50", VA = "0x4DCCD50", Slot = "17")]
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList)
	{
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x4DCD4E0", Offset = "0x4DCD4E0", VA = "0x4DCD4E0")]
	public PanelRaycaster()
	{
	}
}
