// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.EventSystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Serialization;
using UnityEngine.UIElements;

namespace UnityEngine.EventSystems;

[Token(Token = "0x20000B0")]
[AddComponentMenu("Event/Event System")]
[DisallowMultipleComponent]
public class EventSystem : UIBehaviour
{
	[Token(Token = "0x20000B1")]
	private struct UIToolkitOverrideConfig
	{
		[Token(Token = "0x40002E9")]
		[FieldOffset(Offset = "0x0")]
		public EventSystem activeEventSystem;

		[Token(Token = "0x40002EA")]
		[FieldOffset(Offset = "0x8")]
		public bool sendEvents;

		[Token(Token = "0x40002EB")]
		[FieldOffset(Offset = "0x9")]
		public bool createPanelGameObjectsOnStart;
	}

	[Token(Token = "0x40002DB")]
	[FieldOffset(Offset = "0x20")]
	private List<BaseInputModule> m_SystemInputModules;

	[Token(Token = "0x40002DC")]
	[FieldOffset(Offset = "0x28")]
	private BaseInputModule m_CurrentInputModule;

	[Token(Token = "0x40002DD")]
	[FieldOffset(Offset = "0x0")]
	private static List<EventSystem> m_EventSystems;

	[Token(Token = "0x40002DE")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[FormerlySerializedAs("m_Selected")]
	private GameObject m_FirstSelected;

	[Token(Token = "0x40002DF")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private bool m_sendNavigationEvents;

	[Token(Token = "0x40002E0")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private int m_DragThreshold;

	[Token(Token = "0x40002E1")]
	[FieldOffset(Offset = "0x40")]
	private GameObject m_CurrentSelected;

	[Token(Token = "0x40002E2")]
	[FieldOffset(Offset = "0x48")]
	private bool m_HasFocus;

	[Token(Token = "0x40002E3")]
	[FieldOffset(Offset = "0x49")]
	private bool m_SelectionGuard;

	[Token(Token = "0x40002E4")]
	[FieldOffset(Offset = "0x50")]
	private BaseEventData m_DummyData;

	[Token(Token = "0x40002E5")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Comparison<RaycastResult> s_RaycastComparer;

	[Token(Token = "0x40002E6")]
	[FieldOffset(Offset = "0x10")]
	private static UIToolkitOverrideConfig s_UIToolkitOverride;

	[Token(Token = "0x40002E7")]
	[FieldOffset(Offset = "0x58")]
	private bool m_Started;

	[Token(Token = "0x40002E8")]
	[FieldOffset(Offset = "0x59")]
	private bool m_IsTrackingUIToolkitPanels;

	[Token(Token = "0x170001B4")]
	public static EventSystem current
	{
		[Token(Token = "0x600064E")]
		[Address(RVA = "0x50F6770", Offset = "0x50F6770", VA = "0x50F6770")]
		get
		{
			return null;
		}
		[Token(Token = "0x600064F")]
		[Address(RVA = "0x50F6850", Offset = "0x50F6850", VA = "0x50F6850")]
		set
		{
		}
	}

	[Token(Token = "0x170001B5")]
	public bool sendNavigationEvents
	{
		[Token(Token = "0x6000650")]
		[Address(RVA = "0x50F69F0", Offset = "0x50F69F0", VA = "0x50F69F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000651")]
		[Address(RVA = "0x50F6A00", Offset = "0x50F6A00", VA = "0x50F6A00")]
		set
		{
		}
	}

	[Token(Token = "0x170001B6")]
	public int pixelDragThreshold
	{
		[Token(Token = "0x6000652")]
		[Address(RVA = "0x50F6A10", Offset = "0x50F6A10", VA = "0x50F6A10")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000653")]
		[Address(RVA = "0x50F6A20", Offset = "0x50F6A20", VA = "0x50F6A20")]
		set
		{
		}
	}

	[Token(Token = "0x170001B7")]
	public BaseInputModule currentInputModule
	{
		[Token(Token = "0x6000654")]
		[Address(RVA = "0x50F6A30", Offset = "0x50F6A30", VA = "0x50F6A30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B8")]
	public GameObject firstSelectedGameObject
	{
		[Token(Token = "0x6000655")]
		[Address(RVA = "0x50F6A40", Offset = "0x50F6A40", VA = "0x50F6A40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000656")]
		[Address(RVA = "0x50F6A50", Offset = "0x50F6A50", VA = "0x50F6A50")]
		set
		{
		}
	}

	[Token(Token = "0x170001B9")]
	public GameObject currentSelectedGameObject
	{
		[Token(Token = "0x6000657")]
		[Address(RVA = "0x50F6A60", Offset = "0x50F6A60", VA = "0x50F6A60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BA")]
	[Obsolete("lastSelectedGameObject is no longer supported")]
	public GameObject lastSelectedGameObject
	{
		[Token(Token = "0x6000658")]
		[Address(RVA = "0x50F6A70", Offset = "0x50F6A70", VA = "0x50F6A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BB")]
	public bool isFocused
	{
		[Token(Token = "0x6000659")]
		[Address(RVA = "0x50F6A80", Offset = "0x50F6A80", VA = "0x50F6A80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BC")]
	public bool alreadySelecting
	{
		[Token(Token = "0x600065C")]
		[Address(RVA = "0x50F6C60", Offset = "0x50F6C60", VA = "0x50F6C60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BD")]
	private BaseEventData baseEventDataCache
	{
		[Token(Token = "0x600065E")]
		[Address(RVA = "0x50F6C70", Offset = "0x50F6C70", VA = "0x50F6C70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BE")]
	private bool isUIToolkitActiveEventSystem
	{
		[Token(Token = "0x6000664")]
		[Address(RVA = "0x50F74F0", Offset = "0x50F74F0", VA = "0x50F74F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BF")]
	private bool sendUIToolkitEvents
	{
		[Token(Token = "0x6000665")]
		[Address(RVA = "0x50F75D0", Offset = "0x50F75D0", VA = "0x50F75D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C0")]
	private bool createUIToolkitPanelGameObjectsOnStart
	{
		[Token(Token = "0x6000666")]
		[Address(RVA = "0x50F7660", Offset = "0x50F7660", VA = "0x50F7660")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x50F6A90", Offset = "0x50F6A90", VA = "0x50F6A90")]
	protected EventSystem()
	{
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x50F6B20", Offset = "0x50F6B20", VA = "0x50F6B20")]
	public void UpdateModules()
	{
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x50F4FD0", Offset = "0x50F4FD0", VA = "0x50F4FD0")]
	public void SetSelectedGameObject(GameObject selected, BaseEventData pointer)
	{
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x50F16D0", Offset = "0x50F16D0", VA = "0x50F16D0")]
	public void SetSelectedGameObject(GameObject selected)
	{
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x50F6D00", Offset = "0x50F6D00", VA = "0x50F6D00")]
	private static int RaycastComparer(RaycastResult lhs, RaycastResult rhs)
	{
		return default(int);
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x50F71A0", Offset = "0x50F71A0", VA = "0x50F71A0")]
	public void RaycastAll(PointerEventData eventData, List<RaycastResult> raycastResults)
	{
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x50F73D0", Offset = "0x50F73D0", VA = "0x50F73D0")]
	public bool IsPointerOverGameObject()
	{
		return default(bool);
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x50F7460", Offset = "0x50F7460", VA = "0x50F7460")]
	public bool IsPointerOverGameObject(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x50F76F0", Offset = "0x50F76F0", VA = "0x50F76F0")]
	public static void SetUITookitEventSystemOverride(EventSystem activeEventSystem, bool sendEvents = true, bool createPanelGameObjectsOnStart = true)
	{
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x50F7900", Offset = "0x50F7900", VA = "0x50F7900")]
	private void StartTrackingUIToolkitPanels()
	{
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x50F7E70", Offset = "0x50F7E70", VA = "0x50F7E70")]
	private void StopTrackingUIToolkitPanels()
	{
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x50F7BC0", Offset = "0x50F7BC0", VA = "0x50F7BC0")]
	private void CreateUIToolkitPanelGameObject(UnityEngine.UIElements.BaseRuntimePanel panel)
	{
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x50F7F20", Offset = "0x50F7F20", VA = "0x50F7F20", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x50F7F40", Offset = "0x50F7F40", VA = "0x50F7F40", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x50F80F0", Offset = "0x50F80F0", VA = "0x50F80F0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x50F8210", Offset = "0x50F8210", VA = "0x50F8210")]
	private void TickModules()
	{
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x50F8300", Offset = "0x50F8300", VA = "0x50F8300", Slot = "17")]
	protected virtual void OnApplicationFocus(bool hasFocus)
	{
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x50F8310", Offset = "0x50F8310", VA = "0x50F8310", Slot = "18")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x50F8590", Offset = "0x50F8590", VA = "0x50F8590")]
	private void ChangeEventModule(BaseInputModule module)
	{
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x50F8690", Offset = "0x50F8690", VA = "0x50F8690", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
