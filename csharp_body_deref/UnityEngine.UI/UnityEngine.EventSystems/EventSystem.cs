// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EventSystems.EventSystem
// Update status: CHANGED in this game update
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

[Token(Token = "0x20000B2")]
[AddComponentMenu("Event/Event System")]
[DisallowMultipleComponent]
[UnityEngine.UGUIHelpURL("EventSystem")]
public class EventSystem : UIBehaviour
{
	[Token(Token = "0x20000B3")]
	private struct UIToolkitOverrideConfigOld
	{
		[Token(Token = "0x400030B")]
		[FieldOffset(Offset = "0x0")]
		public EventSystem activeEventSystem;

		[Token(Token = "0x400030C")]
		[FieldOffset(Offset = "0x8")]
		public bool sendEvents;

		[Token(Token = "0x400030D")]
		[FieldOffset(Offset = "0x9")]
		public bool createPanelGameObjectsOnStart;
	}

	[Token(Token = "0x40002FE")]
	[FieldOffset(Offset = "0x20")]
	private List<BaseInputModule> m_SystemInputModules;

	[Token(Token = "0x40002FF")]
	[FieldOffset(Offset = "0x28")]
	private BaseInputModule m_CurrentInputModule;

	[Token(Token = "0x4000300")]
	[FieldOffset(Offset = "0x0")]
	private static List<EventSystem> m_EventSystems;

	[Token(Token = "0x4000301")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[FormerlySerializedAs("m_Selected")]
	private GameObject m_FirstSelected;

	[Token(Token = "0x4000302")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private bool m_sendNavigationEvents;

	[Token(Token = "0x4000303")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private int m_DragThreshold;

	[Token(Token = "0x4000304")]
	[FieldOffset(Offset = "0x40")]
	private GameObject m_CurrentSelected;

	[Token(Token = "0x4000305")]
	[FieldOffset(Offset = "0x48")]
	private bool m_HasFocus;

	[Token(Token = "0x4000306")]
	[FieldOffset(Offset = "0x49")]
	private bool m_SelectionGuard;

	[Token(Token = "0x4000307")]
	[FieldOffset(Offset = "0x50")]
	private BaseEventData m_DummyData;

	[Token(Token = "0x4000308")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Comparison<RaycastResult> s_RaycastComparer;

	[Token(Token = "0x4000309")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	[HideInInspector]
	private UIToolkitInteroperabilityBridge m_UIToolkitInterop;

	[Token(Token = "0x400030A")]
	[FieldOffset(Offset = "0x10")]
	private static UIToolkitOverrideConfigOld? s_UIToolkitOverrideConfigOld;

	[Token(Token = "0x170001C4")]
	public static EventSystem current
	{
		[Token(Token = "0x6000695")]
		[Address(RVA = "0x32F4530", Offset = "0x32F2B30", VA = "0x1832F4530")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000696")]
		[Address(RVA = "0x32F4640", Offset = "0x32F2C40", VA = "0x1832F4640")]
		set
		{
		}
	}

	[Token(Token = "0x170001C5")]
	public bool sendNavigationEvents
	{
		[Token(Token = "0x6000697")]
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000698")]
		[Address(RVA = "0xF1D640", Offset = "0xF1BC40", VA = "0x180F1D640")]
		set
		{
		}
	}

	[Token(Token = "0x170001C6")]
	public int pixelDragThreshold
	{
		[Token(Token = "0x6000699")]
		[Address(RVA = "0x19CF1C0", Offset = "0x19CD7C0", VA = "0x1819CF1C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600069A")]
		[Address(RVA = "0x1CFE070", Offset = "0x1CFC670", VA = "0x181CFE070")]
		set
		{
		}
	}

	[Token(Token = "0x170001C7")]
	public BaseInputModule currentInputModule
	{
		[Token(Token = "0x600069B")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C8")]
	public GameObject firstSelectedGameObject
	{
		[Token(Token = "0x600069C")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600069D")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x170001C9")]
	public GameObject currentSelectedGameObject
	{
		[Token(Token = "0x600069E")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CA")]
	[Obsolete("lastSelectedGameObject is no longer supported")]
	public GameObject lastSelectedGameObject
	{
		[Token(Token = "0x600069F")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CB")]
	public bool isFocused
	{
		[Token(Token = "0x60006A0")]
		[Address(RVA = "0x58A530", Offset = "0x588B30", VA = "0x18058A530")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CC")]
	public bool alreadySelecting
	{
		[Token(Token = "0x60006A3")]
		[Address(RVA = "0x58A880", Offset = "0x588E80", VA = "0x18058A880")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CD")]
	private BaseEventData baseEventDataCache
	{
		[Token(Token = "0x60006A5")]
		[Address(RVA = "0x32F44B0", Offset = "0x32F2AB0", VA = "0x1832F44B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CE")]
	internal UIToolkitInteroperabilityBridge uiToolkitInterop
	{
		[Token(Token = "0x60006AB")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CF")]
	internal bool isOverridingUIToolkitEvents
	{
		[Token(Token = "0x60006AC")]
		[Address(RVA = "0x32F45E0", Offset = "0x32F2BE0", VA = "0x1832F45E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x32F43F0", Offset = "0x32F29F0", VA = "0x1832F43F0")]
	protected EventSystem()
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x32F3F30", Offset = "0x32F2530", VA = "0x1832F3F30")]
	public void UpdateModules()
	{
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x32F35A0", Offset = "0x32F1BA0", VA = "0x1832F35A0")]
	public void SetSelectedGameObject(GameObject selected, BaseEventData pointer)
	{
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x32F3500", Offset = "0x32F1B00", VA = "0x1832F3500")]
	public void SetSelectedGameObject(GameObject selected)
	{
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x32F30C0", Offset = "0x32F16C0", VA = "0x1832F30C0")]
	private static int RaycastComparer(RaycastResult lhs, RaycastResult rhs)
	{
		return default(int);
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x32F2EC0", Offset = "0x32F14C0", VA = "0x1832F2EC0")]
	public void RaycastAll(PointerEventData eventData, List<RaycastResult> raycastResults)
	{
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x32F2870", Offset = "0x32F0E70", VA = "0x1832F2870")]
	public bool IsPointerOverGameObject()
	{
		return default(bool);
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x32F27D0", Offset = "0x32F0DD0", VA = "0x1832F27D0")]
	public bool IsPointerOverGameObject(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x32F37C0", Offset = "0x32F1DC0", VA = "0x1832F37C0")]
	[Obsolete("Use PanelInputConfiguration component instead.")]
	public static void SetUITookitEventSystemOverride(EventSystem activeEventSystem, bool sendEvents = true, bool createPanelGameObjectsOnStart = true)
	{
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x32F2B70", Offset = "0x32F1170", VA = "0x1832F2B70", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x32F2910", Offset = "0x32F0F10", VA = "0x1832F2910", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x32F3CB0", Offset = "0x32F22B0", VA = "0x1832F3CB0", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x32F3CE0", Offset = "0x32F22E0", VA = "0x1832F3CE0")]
	private void TickModules()
	{
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x32F2900", Offset = "0x32F0F00", VA = "0x1832F2900", Slot = "17")]
	protected virtual void OnApplicationFocus(bool hasFocus)
	{
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x32F4070", Offset = "0x32F2670", VA = "0x1832F4070", Slot = "18")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x32F26C0", Offset = "0x32F0CC0", VA = "0x1832F26C0")]
	private void ChangeEventModule(BaseInputModule module)
	{
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x32F3DE0", Offset = "0x32F23E0", VA = "0x1832F3DE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
