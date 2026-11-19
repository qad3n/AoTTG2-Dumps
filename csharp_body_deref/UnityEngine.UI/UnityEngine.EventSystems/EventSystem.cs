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
		[Address(RVA = "0x6D07660", Offset = "0x6D06660", VA = "0x6D07660")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000696")]
		[Address(RVA = "0x6D09260", Offset = "0x6D08260", VA = "0x6D09260")]
		set
		{
		}
	}

	[Token(Token = "0x170001C5")]
	public bool sendNavigationEvents
	{
		[Token(Token = "0x6000697")]
		[Address(RVA = "0x6D09400", Offset = "0x6D08400", VA = "0x6D09400")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000698")]
		[Address(RVA = "0x6D09410", Offset = "0x6D08410", VA = "0x6D09410")]
		set
		{
		}
	}

	[Token(Token = "0x170001C6")]
	public int pixelDragThreshold
	{
		[Token(Token = "0x6000699")]
		[Address(RVA = "0x6D09420", Offset = "0x6D08420", VA = "0x6D09420")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600069A")]
		[Address(RVA = "0x6D09430", Offset = "0x6D08430", VA = "0x6D09430")]
		set
		{
		}
	}

	[Token(Token = "0x170001C7")]
	public BaseInputModule currentInputModule
	{
		[Token(Token = "0x600069B")]
		[Address(RVA = "0x6D09440", Offset = "0x6D08440", VA = "0x6D09440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C8")]
	public GameObject firstSelectedGameObject
	{
		[Token(Token = "0x600069C")]
		[Address(RVA = "0x6D09450", Offset = "0x6D08450", VA = "0x6D09450")]
		get
		{
			return null;
		}
		[Token(Token = "0x600069D")]
		[Address(RVA = "0x6D09460", Offset = "0x6D08460", VA = "0x6D09460")]
		set
		{
		}
	}

	[Token(Token = "0x170001C9")]
	public GameObject currentSelectedGameObject
	{
		[Token(Token = "0x600069E")]
		[Address(RVA = "0x6D09470", Offset = "0x6D08470", VA = "0x6D09470")]
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
		[Address(RVA = "0x6D09480", Offset = "0x6D08480", VA = "0x6D09480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CB")]
	public bool isFocused
	{
		[Token(Token = "0x60006A0")]
		[Address(RVA = "0x6D09490", Offset = "0x6D08490", VA = "0x6D09490")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CC")]
	public bool alreadySelecting
	{
		[Token(Token = "0x60006A3")]
		[Address(RVA = "0x6D096A0", Offset = "0x6D086A0", VA = "0x6D096A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CD")]
	private BaseEventData baseEventDataCache
	{
		[Token(Token = "0x60006A5")]
		[Address(RVA = "0x6D096B0", Offset = "0x6D086B0", VA = "0x6D096B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CE")]
	internal UIToolkitInteroperabilityBridge uiToolkitInterop
	{
		[Token(Token = "0x60006AB")]
		[Address(RVA = "0x6D09ED0", Offset = "0x6D08ED0", VA = "0x6D09ED0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CF")]
	internal bool isOverridingUIToolkitEvents
	{
		[Token(Token = "0x60006AC")]
		[Address(RVA = "0x6D09EE0", Offset = "0x6D08EE0", VA = "0x6D09EE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x6D094A0", Offset = "0x6D084A0", VA = "0x6D094A0")]
	protected EventSystem()
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x6D09560", Offset = "0x6D08560", VA = "0x6D09560")]
	public void UpdateModules()
	{
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x6D07A80", Offset = "0x6D06A80", VA = "0x6D07A80")]
	public void SetSelectedGameObject(GameObject selected, BaseEventData pointer)
	{
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x6D01480", Offset = "0x6D00480", VA = "0x6D01480")]
	public void SetSelectedGameObject(GameObject selected)
	{
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x6D09740", Offset = "0x6D08740", VA = "0x6D09740")]
	private static int RaycastComparer(RaycastResult lhs, RaycastResult rhs)
	{
		return default(int);
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x6D09B90", Offset = "0x6D08B90", VA = "0x6D09B90")]
	public void RaycastAll(PointerEventData eventData, List<RaycastResult> raycastResults)
	{
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x6D09DB0", Offset = "0x6D08DB0", VA = "0x6D09DB0")]
	public bool IsPointerOverGameObject()
	{
		return default(bool);
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x6D09E40", Offset = "0x6D08E40", VA = "0x6D09E40")]
	public bool IsPointerOverGameObject(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x6D09F40", Offset = "0x6D08F40", VA = "0x6D09F40")]
	[Obsolete("Use PanelInputConfiguration component instead.")]
	public static void SetUITookitEventSystemOverride(EventSystem activeEventSystem, bool sendEvents = true, bool createPanelGameObjectsOnStart = true)
	{
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x6D0A400", Offset = "0x6D09400", VA = "0x6D0A400", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x6D0A6C0", Offset = "0x6D096C0", VA = "0x6D0A6C0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x6D0A7B0", Offset = "0x6D097B0", VA = "0x6D0A7B0", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x6D0A7E0", Offset = "0x6D097E0", VA = "0x6D0A7E0")]
	private void TickModules()
	{
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x6D0A8E0", Offset = "0x6D098E0", VA = "0x6D0A8E0", Slot = "17")]
	protected virtual void OnApplicationFocus(bool hasFocus)
	{
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x6D0A8F0", Offset = "0x6D098F0", VA = "0x6D0A8F0", Slot = "18")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x6D0AB70", Offset = "0x6D09B70", VA = "0x6D0AB70")]
	private void ChangeEventModule(BaseInputModule module)
	{
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x6D0AC70", Offset = "0x6D09C70", VA = "0x6D0AC70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
