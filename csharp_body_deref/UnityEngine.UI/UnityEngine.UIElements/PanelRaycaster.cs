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
		[Address(RVA = "0x50F42E0", Offset = "0x50F42E0", VA = "0x50F42E0", Slot = "23")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005DD")]
		[Address(RVA = "0x50F42F0", Offset = "0x50F42F0", VA = "0x50F42F0", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x17000188")]
	private GameObject selectableGameObject
	{
		[Token(Token = "0x60005E1")]
		[Address(RVA = "0x50F4570", Offset = "0x50F4570", VA = "0x50F4570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000189")]
	public override int sortOrderPriority
	{
		[Token(Token = "0x60005E2")]
		[Address(RVA = "0x50F4590", Offset = "0x50F4590", VA = "0x50F4590", Slot = "20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700018A")]
	public override int renderOrderPriority
	{
		[Token(Token = "0x60005E3")]
		[Address(RVA = "0x50F4630", Offset = "0x50F4630", VA = "0x50F4630", Slot = "21")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700018B")]
	public override Camera eventCamera
	{
		[Token(Token = "0x60005E5")]
		[Address(RVA = "0x50F4E20", Offset = "0x50F4E20", VA = "0x50F4E20", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x50F44E0", Offset = "0x50F44E0", VA = "0x50F44E0")]
	private void RegisterCallbacks()
	{
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x50F4460", Offset = "0x50F4460", VA = "0x50F4460")]
	private void UnregisterCallbacks()
	{
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x50F4560", Offset = "0x50F4560", VA = "0x50F4560")]
	private void OnPanelDestroyed()
	{
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x50F46A0", Offset = "0x50F46A0", VA = "0x50F46A0", Slot = "17")]
	public override void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList)
	{
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x50F4E30", Offset = "0x50F4E30", VA = "0x50F4E30")]
	public PanelRaycaster()
	{
	}
}
