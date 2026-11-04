// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIToolkitInteroperabilityBridge
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000094")]
internal class UIToolkitInteroperabilityBridge
{
	[Token(Token = "0x2000095")]
	[Flags]
	public enum EventHandlerTypes
	{
		[Token(Token = "0x40002C6")]
		ScreenOverlay = 1,
		[Token(Token = "0x40002C7")]
		WorldSpace = 2
	}

	[Token(Token = "0x40002B2")]
	[FieldOffset(Offset = "0x10")]
	private EventSystem m_EventSystem;

	[Token(Token = "0x40002B3")]
	[FieldOffset(Offset = "0x18")]
	private bool m_OverrideUIToolkitEvents;

	[Token(Token = "0x40002B4")]
	[FieldOffset(Offset = "0x1C")]
	private EventHandlerTypes m_HandlerTypes;

	[Token(Token = "0x40002B5")]
	[FieldOffset(Offset = "0x20")]
	private LayerMask m_WorldPickingLayers;

	[Token(Token = "0x40002B6")]
	[FieldOffset(Offset = "0x24")]
	private float m_WorldPickingMaxDistance;

	[Token(Token = "0x40002B7")]
	[FieldOffset(Offset = "0x28")]
	private bool m_CreateDefaultPanelComponents;

	[Token(Token = "0x40002B8")]
	[FieldOffset(Offset = "0x29")]
	private bool m_Started;

	[Token(Token = "0x40002B9")]
	[FieldOffset(Offset = "0x2A")]
	private bool m_Enabled;

	[Token(Token = "0x40002BA")]
	[FieldOffset(Offset = "0x2B")]
	private bool m_IsTrackingPanels;

	[Token(Token = "0x40002BB")]
	[FieldOffset(Offset = "0x30")]
	private GameObject m_WorldSpaceGo;

	[Token(Token = "0x40002BC")]
	[FieldOffset(Offset = "0x38")]
	private readonly HashSet<UnityEngine.UIElements.BaseRuntimePanel> trackedPanels;

	[Token(Token = "0x40002BD")]
	[FieldOffset(Offset = "0x40")]
	private readonly Dictionary<UnityEngine.UIElements.BaseRuntimePanel, Action> destroyedActions;

	[Token(Token = "0x40002BE")]
	[FieldOffset(Offset = "0x48")]
	private PanelInputConfiguration.Settings m_InputSettings;

	[Token(Token = "0x40002BF")]
	[FieldOffset(Offset = "0x68")]
	private bool m_OldOverrideUIToolkitEvents;

	[Token(Token = "0x40002C0")]
	[FieldOffset(Offset = "0x6C")]
	private EventHandlerTypes m_OldHandlerTypes;

	[Token(Token = "0x40002C1")]
	[FieldOffset(Offset = "0x70")]
	private bool m_OldCreateDefaultPanelComponents;

	[Token(Token = "0x40002C2")]
	[FieldOffset(Offset = "0x71")]
	private bool m_OldDefaultEventCameraIsMainCamera;

	[Token(Token = "0x40002C3")]
	[FieldOffset(Offset = "0x78")]
	private long m_OldEventCamerasHash;

	[Token(Token = "0x40002C4")]
	[FieldOffset(Offset = "0x80")]
	private List<UnityEngine.UIElements.BaseRuntimePanel> m_PanelsToRemove;

	[Token(Token = "0x17000193")]
	internal EventSystem eventSystem
	{
		[Token(Token = "0x6000605")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000606")]
		[Address(RVA = "0x3306130", Offset = "0x3304730", VA = "0x183306130")]
		set
		{
		}
	}

	[Token(Token = "0x17000194")]
	public bool overrideUIToolkitEvents
	{
		[Token(Token = "0x6000607")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000608")]
		[Address(RVA = "0x3306200", Offset = "0x3304800", VA = "0x183306200")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000195")]
	public EventHandlerTypes handlerTypes
	{
		[Token(Token = "0x6000609")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		get
		{
			return default(EventHandlerTypes);
		}
		[Token(Token = "0x600060A")]
		[Address(RVA = "0x33061B0", Offset = "0x33047B0", VA = "0x1833061B0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000196")]
	public int worldPickingLayers
	{
		[Token(Token = "0x600060B")]
		[Address(RVA = "0x33060D0", Offset = "0x33046D0", VA = "0x1833060D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600060C")]
		[Address(RVA = "0x3306210", Offset = "0x3304810", VA = "0x183306210")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000197")]
	public float worldPickingMaxDistance
	{
		[Token(Token = "0x600060D")]
		[Address(RVA = "0x18A4260", Offset = "0x18A2860", VA = "0x1818A4260")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600060E")]
		[Address(RVA = "0x18A4270", Offset = "0x18A2870", VA = "0x1818A4270")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000198")]
	public bool createDefaultPanelComponents
	{
		[Token(Token = "0x600060F")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000610")]
		[Address(RVA = "0x33060E0", Offset = "0x33046E0", VA = "0x1833060E0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000199")]
	private bool shouldTrackPanels
	{
		[Token(Token = "0x6000611")]
		[Address(RVA = "0x33060B0", Offset = "0x33046B0", VA = "0x1833060B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x3305690", Offset = "0x3303C90", VA = "0x183305690")]
	private void StartTrackingUIToolkitPanels()
	{
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x3305630", Offset = "0x3303C30", VA = "0x183305630")]
	private void StartTrackingPanel(UnityEngine.UIElements.BaseRuntimePanel panel)
	{
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x33058C0", Offset = "0x3303EC0", VA = "0x1833058C0")]
	private void StopTrackingUIToolkitPanels()
	{
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x3305AD0", Offset = "0x33040D0", VA = "0x183305AD0")]
	private void UpdatePanelGameObject(UnityEngine.UIElements.BaseRuntimePanel panel)
	{
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x3304A20", Offset = "0x3303020", VA = "0x183304A20")]
	private void CreatePanelGameObject(UnityEngine.UIElements.BaseRuntimePanel panel)
	{
	}

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x3304F00", Offset = "0x3303500", VA = "0x183304F00")]
	private void DestroyPanelGameObject(UnityEngine.UIElements.BaseRuntimePanel panel)
	{
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x3304D30", Offset = "0x3303330", VA = "0x183304D30")]
	private void CreateWorldSpacePanelGameObject()
	{
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x3305000", Offset = "0x3303600", VA = "0x183305000")]
	private void DestroyWorldSpacePanelGameObject()
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x33058B0", Offset = "0x3303EB0", VA = "0x1833058B0")]
	public void Start()
	{
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x33051F0", Offset = "0x33037F0", VA = "0x1833051F0")]
	public void OnEnable()
	{
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x3305070", Offset = "0x3303670", VA = "0x183305070")]
	public void OnDisable()
	{
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x3305EE0", Offset = "0x33044E0", VA = "0x183305EE0")]
	public void Update()
	{
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x3304860", Offset = "0x3302E60", VA = "0x183304860")]
	private void Apply(PanelInputConfiguration input)
	{
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x3304790", Offset = "0x3302D90", VA = "0x183304790")]
	private void ApplyOverrideUIToolkitEvents()
	{
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x33045A0", Offset = "0x3302BA0", VA = "0x1833045A0")]
	private void ApplyCameraProperties()
	{
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x3304740", Offset = "0x3302D40", VA = "0x183304740")]
	private void ApplyOtherProperties()
	{
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x3305EB0", Offset = "0x33044B0", VA = "0x183305EB0")]
	private void UpdatePanelTracking()
	{
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x3305B10", Offset = "0x3304110", VA = "0x183305B10")]
	private void UpdatePanelGameObjects()
	{
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x3305EF0", Offset = "0x33044F0", VA = "0x183305EF0")]
	public UIToolkitInteroperabilityBridge()
	{
	}
}
