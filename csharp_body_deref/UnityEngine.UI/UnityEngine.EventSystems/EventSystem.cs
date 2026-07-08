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
		[Address(RVA = "0x4DCEE20", Offset = "0x4DCEE20", VA = "0x4DCEE20")]
		get
		{
			return null;
		}
		[Token(Token = "0x600064F")]
		[Address(RVA = "0x4DCEF00", Offset = "0x4DCEF00", VA = "0x4DCEF00")]
		set
		{
		}
	}

	[Token(Token = "0x170001B5")]
	public bool sendNavigationEvents
	{
		[Token(Token = "0x6000650")]
		[Address(RVA = "0x4DCF0A0", Offset = "0x4DCF0A0", VA = "0x4DCF0A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000651")]
		[Address(RVA = "0x4DCF0B0", Offset = "0x4DCF0B0", VA = "0x4DCF0B0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B6")]
	public int pixelDragThreshold
	{
		[Token(Token = "0x6000652")]
		[Address(RVA = "0x4DCF0C0", Offset = "0x4DCF0C0", VA = "0x4DCF0C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000653")]
		[Address(RVA = "0x4DCF0D0", Offset = "0x4DCF0D0", VA = "0x4DCF0D0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B7")]
	public BaseInputModule currentInputModule
	{
		[Token(Token = "0x6000654")]
		[Address(RVA = "0x4DCF0E0", Offset = "0x4DCF0E0", VA = "0x4DCF0E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B8")]
	public GameObject firstSelectedGameObject
	{
		[Token(Token = "0x6000655")]
		[Address(RVA = "0x4DCF0F0", Offset = "0x4DCF0F0", VA = "0x4DCF0F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000656")]
		[Address(RVA = "0x4DCF100", Offset = "0x4DCF100", VA = "0x4DCF100")]
		set
		{
		}
	}

	[Token(Token = "0x170001B9")]
	public GameObject currentSelectedGameObject
	{
		[Token(Token = "0x6000657")]
		[Address(RVA = "0x4DCF110", Offset = "0x4DCF110", VA = "0x4DCF110")]
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
		[Address(RVA = "0x4DCF120", Offset = "0x4DCF120", VA = "0x4DCF120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BB")]
	public bool isFocused
	{
		[Token(Token = "0x6000659")]
		[Address(RVA = "0x4DCF130", Offset = "0x4DCF130", VA = "0x4DCF130")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BC")]
	public bool alreadySelecting
	{
		[Token(Token = "0x600065C")]
		[Address(RVA = "0x4DCF310", Offset = "0x4DCF310", VA = "0x4DCF310")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BD")]
	private BaseEventData baseEventDataCache
	{
		[Token(Token = "0x600065E")]
		[Address(RVA = "0x4DCF320", Offset = "0x4DCF320", VA = "0x4DCF320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BE")]
	private bool isUIToolkitActiveEventSystem
	{
		[Token(Token = "0x6000664")]
		[Address(RVA = "0x4DCFBA0", Offset = "0x4DCFBA0", VA = "0x4DCFBA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BF")]
	private bool sendUIToolkitEvents
	{
		[Token(Token = "0x6000665")]
		[Address(RVA = "0x4DCFC80", Offset = "0x4DCFC80", VA = "0x4DCFC80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001C0")]
	private bool createUIToolkitPanelGameObjectsOnStart
	{
		[Token(Token = "0x6000666")]
		[Address(RVA = "0x4DCFD10", Offset = "0x4DCFD10", VA = "0x4DCFD10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x4DCF140", Offset = "0x4DCF140", VA = "0x4DCF140")]
	protected EventSystem()
	{
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x4DCF1D0", Offset = "0x4DCF1D0", VA = "0x4DCF1D0")]
	public void UpdateModules()
	{
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x4DCD680", Offset = "0x4DCD680", VA = "0x4DCD680")]
	public void SetSelectedGameObject(GameObject selected, BaseEventData pointer)
	{
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x4DC9D80", Offset = "0x4DC9D80", VA = "0x4DC9D80")]
	public void SetSelectedGameObject(GameObject selected)
	{
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x4DCF3B0", Offset = "0x4DCF3B0", VA = "0x4DCF3B0")]
	private static int RaycastComparer(RaycastResult lhs, RaycastResult rhs)
	{
		return default(int);
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x4DCF850", Offset = "0x4DCF850", VA = "0x4DCF850")]
	public void RaycastAll(PointerEventData eventData, List<RaycastResult> raycastResults)
	{
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x4DCFA80", Offset = "0x4DCFA80", VA = "0x4DCFA80")]
	public bool IsPointerOverGameObject()
	{
		return default(bool);
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x4DCFB10", Offset = "0x4DCFB10", VA = "0x4DCFB10")]
	public bool IsPointerOverGameObject(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x4DCFDA0", Offset = "0x4DCFDA0", VA = "0x4DCFDA0")]
	public static void SetUITookitEventSystemOverride(EventSystem activeEventSystem, bool sendEvents = true, bool createPanelGameObjectsOnStart = true)
	{
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x4DCFFB0", Offset = "0x4DCFFB0", VA = "0x4DCFFB0")]
	private void StartTrackingUIToolkitPanels()
	{
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x4DD0520", Offset = "0x4DD0520", VA = "0x4DD0520")]
	private void StopTrackingUIToolkitPanels()
	{
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x4DD0270", Offset = "0x4DD0270", VA = "0x4DD0270")]
	private void CreateUIToolkitPanelGameObject(UnityEngine.UIElements.BaseRuntimePanel panel)
	{
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x4DD05D0", Offset = "0x4DD05D0", VA = "0x4DD05D0", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x4DD05F0", Offset = "0x4DD05F0", VA = "0x4DD05F0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x4DD07A0", Offset = "0x4DD07A0", VA = "0x4DD07A0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x4DD08C0", Offset = "0x4DD08C0", VA = "0x4DD08C0")]
	private void TickModules()
	{
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x4DD09B0", Offset = "0x4DD09B0", VA = "0x4DD09B0", Slot = "17")]
	protected virtual void OnApplicationFocus(bool hasFocus)
	{
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x4DD09C0", Offset = "0x4DD09C0", VA = "0x4DD09C0", Slot = "18")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x4DD0C40", Offset = "0x4DD0C40", VA = "0x4DD0C40")]
	private void ChangeEventModule(BaseInputModule module)
	{
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x4DD0D40", Offset = "0x4DD0D40", VA = "0x4DD0D40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
