// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIToolkitInteroperabilityBridge
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6D05370", Offset = "0x6D04370", VA = "0x6D05370")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000606")]
		[Address(RVA = "0x6D05380", Offset = "0x6D04380", VA = "0x6D05380")]
		set
		{
		}
	}

	[Token(Token = "0x17000194")]
	public bool overrideUIToolkitEvents
	{
		[Token(Token = "0x6000607")]
		[Address(RVA = "0x6D05400", Offset = "0x6D04400", VA = "0x6D05400")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000608")]
		[Address(RVA = "0x6D05410", Offset = "0x6D04410", VA = "0x6D05410")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000195")]
	public EventHandlerTypes handlerTypes
	{
		[Token(Token = "0x6000609")]
		[Address(RVA = "0x6D054E0", Offset = "0x6D044E0", VA = "0x6D054E0")]
		get
		{
			return default(EventHandlerTypes);
		}
		[Token(Token = "0x600060A")]
		[Address(RVA = "0x6D054F0", Offset = "0x6D044F0", VA = "0x6D054F0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000196")]
	public int worldPickingLayers
	{
		[Token(Token = "0x600060B")]
		[Address(RVA = "0x6D05590", Offset = "0x6D04590", VA = "0x6D05590")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600060C")]
		[Address(RVA = "0x6D055A0", Offset = "0x6D045A0", VA = "0x6D055A0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000197")]
	public float worldPickingMaxDistance
	{
		[Token(Token = "0x600060D")]
		[Address(RVA = "0x6D055C0", Offset = "0x6D045C0", VA = "0x6D055C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600060E")]
		[Address(RVA = "0x6D055D0", Offset = "0x6D045D0", VA = "0x6D055D0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000198")]
	public bool createDefaultPanelComponents
	{
		[Token(Token = "0x600060F")]
		[Address(RVA = "0x6D055E0", Offset = "0x6D045E0", VA = "0x6D055E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000610")]
		[Address(RVA = "0x6D055F0", Offset = "0x6D045F0", VA = "0x6D055F0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000199")]
	private bool shouldTrackPanels
	{
		[Token(Token = "0x6000611")]
		[Address(RVA = "0x6D05640", Offset = "0x6D04640", VA = "0x6D05640")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x6D05660", Offset = "0x6D04660", VA = "0x6D05660")]
	private void StartTrackingUIToolkitPanels()
	{
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x6D05890", Offset = "0x6D04890", VA = "0x6D05890")]
	private void StartTrackingPanel(UnityEngine.UIElements.BaseRuntimePanel panel)
	{
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x6D058E0", Offset = "0x6D048E0", VA = "0x6D058E0")]
	private void StopTrackingUIToolkitPanels()
	{
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x6D05C80", Offset = "0x6D04C80", VA = "0x6D05C80")]
	private void UpdatePanelGameObject(UnityEngine.UIElements.BaseRuntimePanel panel)
	{
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x6D05CB0", Offset = "0x6D04CB0", VA = "0x6D05CB0")]
	private void CreatePanelGameObject(UnityEngine.UIElements.BaseRuntimePanel panel)
	{
	}

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x6D05B10", Offset = "0x6D04B10", VA = "0x6D05B10")]
	private void DestroyPanelGameObject(UnityEngine.UIElements.BaseRuntimePanel panel)
	{
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x6D05FE0", Offset = "0x6D04FE0", VA = "0x6D05FE0")]
	private void CreateWorldSpacePanelGameObject()
	{
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x6D05C10", Offset = "0x6D04C10", VA = "0x6D05C10")]
	private void DestroyWorldSpacePanelGameObject()
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x6D06380", Offset = "0x6D05380", VA = "0x6D06380")]
	public void Start()
	{
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x6D06390", Offset = "0x6D05390", VA = "0x6D06390")]
	public void OnEnable()
	{
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x6D067C0", Offset = "0x6D057C0", VA = "0x6D067C0")]
	public void OnDisable()
	{
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x6D06930", Offset = "0x6D05930", VA = "0x6D06930")]
	public void Update()
	{
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x6D065C0", Offset = "0x6D055C0", VA = "0x6D065C0")]
	private void Apply(PanelInputConfiguration input)
	{
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x6D05420", Offset = "0x6D04420", VA = "0x6D05420")]
	private void ApplyOverrideUIToolkitEvents()
	{
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x6D061D0", Offset = "0x6D051D0", VA = "0x6D061D0")]
	private void ApplyCameraProperties()
	{
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x6D05540", Offset = "0x6D04540", VA = "0x6D05540")]
	private void ApplyOtherProperties()
	{
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x6D06D70", Offset = "0x6D05D70", VA = "0x6D06D70")]
	private void UpdatePanelTracking()
	{
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x6D06940", Offset = "0x6D05940", VA = "0x6D06940")]
	private void UpdatePanelGameObjects()
	{
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x6D06DA0", Offset = "0x6D05DA0", VA = "0x6D06DA0")]
	public UIToolkitInteroperabilityBridge()
	{
	}
}
