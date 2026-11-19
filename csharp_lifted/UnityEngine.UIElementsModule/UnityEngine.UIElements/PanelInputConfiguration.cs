// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PanelInputConfiguration
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200026E")]
[AddComponentMenu("UI Toolkit/Panel Input Configuration", 1)]
[HelpURL("UIE-get-started-with-runtime-ui")]
[ExecuteAlways]
[DisallowMultipleComponent]
public sealed class PanelInputConfiguration : MonoBehaviour
{
	[Token(Token = "0x200026F")]
	public enum PanelInputRedirection
	{
		[Token(Token = "0x4000903")]
		[InspectorName("Auto-switch (redirect from EventSystem if present)")]
		AutoSwitch,
		[Token(Token = "0x4000904")]
		[InspectorName("No input redirection")]
		Never,
		[Token(Token = "0x4000905")]
		[InspectorName("Always redirect from EventSystem (wait if unavailable)")]
		Always
	}

	[Serializable]
	[Token(Token = "0x2000270")]
	internal struct Settings
	{
		[Token(Token = "0x4000906")]
		[FieldOffset(Offset = "0x0")]
		private static Settings s_Default;

		[Token(Token = "0x4000907")]
		[FieldOffset(Offset = "0x0")]
		[SerializeField]
		[Tooltip("Determines whether world space panels process input events. Disable this if you need UGUI support but do not require world space input to improve performance.")]
		internal bool m_ProcessWorldSpaceInput;

		[Token(Token = "0x4000908")]
		[FieldOffset(Offset = "0x4")]
		[SerializeField]
		[Tooltip("Determines which layers can block input events on world space panels.")]
		internal LayerMask m_InteractionLayers;

		[Token(Token = "0x4000909")]
		[FieldOffset(Offset = "0x8")]
		[SerializeField]
		[Tooltip("Sets how far away interactions with world-space UI are possible. Defaults to unlimited (infinity), but you can customize it for XR or performance needs. The distance uses GameObject units, consistent with transform positions and Camera clipping planes.")]
		internal float m_MaxInteractionDistance;

		[Token(Token = "0x400090A")]
		[FieldOffset(Offset = "0xC")]
		[Tooltip("Defines whether the Main Camera is used as the Event Camera for world space panels. Disable to specify alternative Event Camera(s) for raycasting input.")]
		[SerializeField]
		internal bool m_DefaultEventCameraIsMainCamera;

		[Token(Token = "0x400090B")]
		[FieldOffset(Offset = "0x10")]
		[Tooltip("Defines the Event Camera(s) used for world space raycasting input.")]
		[SerializeField]
		internal Camera[] m_EventCameras;

		[Token(Token = "0x400090C")]
		[FieldOffset(Offset = "0x18")]
		[Tooltip("Determines which input event system is used for UI interactions when combining UI Toolkit and UGUI.")]
		[SerializeField]
		internal PanelInputRedirection m_PanelInputRedirection;

		[Token(Token = "0x400090D")]
		[FieldOffset(Offset = "0x1C")]
		[Tooltip("Automatically adds UI Toolkit components under the EventSystem to handle input redirection between UI Toolkit and UGUI panels. Disable to manually assign these components through code.")]
		[SerializeField]
		internal bool m_AutoCreatePanelComponents;

		[Token(Token = "0x17000341")]
		public static Settings Default
		{
			[Token(Token = "0x600107E")]
			[Address(RVA = "0x6C86AC0", Offset = "0x6C85AC0", VA = "0x6C86AC0")]
			get
			{
				return default(Settings);
			}
		}

		[Token(Token = "0x17000342")]
		public bool processWorldSpaceInput
		{
			[Token(Token = "0x600107F")]
			[Address(RVA = "0x6C86B20", Offset = "0x6C85B20", VA = "0x6C86B20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000343")]
		public LayerMask interactionLayers
		{
			[Token(Token = "0x6001080")]
			[Address(RVA = "0x6C86B30", Offset = "0x6C85B30", VA = "0x6C86B30")]
			get
			{
				return default(LayerMask);
			}
		}

		[Token(Token = "0x17000344")]
		public float maxInteractionDistance
		{
			[Token(Token = "0x6001081")]
			[Address(RVA = "0x6C86B40", Offset = "0x6C85B40", VA = "0x6C86B40")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x17000345")]
		public bool defaultEventCameraIsMainCamera
		{
			[Token(Token = "0x6001082")]
			[Address(RVA = "0x6C86B50", Offset = "0x6C85B50", VA = "0x6C86B50")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000346")]
		public Camera[] eventCameras
		{
			[Token(Token = "0x6001083")]
			[Address(RVA = "0x6C86B60", Offset = "0x6C85B60", VA = "0x6C86B60")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000347")]
		public PanelInputRedirection panelInputRedirection
		{
			[Token(Token = "0x6001084")]
			[Address(RVA = "0x6C86B70", Offset = "0x6C85B70", VA = "0x6C86B70")]
			get
			{
				return default(PanelInputRedirection);
			}
		}

		[Token(Token = "0x17000348")]
		public bool autoCreatePanelComponents
		{
			[Token(Token = "0x6001085")]
			[Address(RVA = "0x6C86B80", Offset = "0x6C85B80", VA = "0x6C86B80")]
			get
			{
				return default(bool);
			}
		}
	}

	[Token(Token = "0x40008FE")]
	[FieldOffset(Offset = "0x8")]
	internal static int s_ActiveInstances;

	[Token(Token = "0x40008FF")]
	[FieldOffset(Offset = "0x10")]
	internal static Action<PanelInputConfiguration> onApply;

	[Token(Token = "0x4000900")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Settings m_Settings;

	[Token(Token = "0x4000901")]
	internal const string SettingsProperty = "m_Settings";

	[Token(Token = "0x17000338")]
	internal static PanelInputConfiguration current
	{
		[Token(Token = "0x6001069")]
		[Address(RVA = "0x6C85D00", Offset = "0x6C84D00", VA = "0x6C85D00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600106A")]
		[Address(RVA = "0x6C85D40", Offset = "0x6C84D40", VA = "0x6C85D40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000339")]
	internal Settings settings
	{
		[Token(Token = "0x600106B")]
		[Address(RVA = "0x6C85D90", Offset = "0x6C84D90", VA = "0x6C85D90")]
		get
		{
			return default(Settings);
		}
	}

	[Token(Token = "0x1700033A")]
	public bool processWorldSpaceInput
	{
		[Token(Token = "0x600106C")]
		[Address(RVA = "0x6C85DB0", Offset = "0x6C84DB0", VA = "0x6C85DB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600106D")]
		[Address(RVA = "0x6C85DC0", Offset = "0x6C84DC0", VA = "0x6C85DC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700033B")]
	public LayerMask interactionLayers
	{
		[Token(Token = "0x600106E")]
		[Address(RVA = "0x6C86360", Offset = "0x6C85360", VA = "0x6C86360")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x600106F")]
		[Address(RVA = "0x6C86370", Offset = "0x6C85370", VA = "0x6C86370")]
		set
		{
		}
	}

	[Token(Token = "0x1700033C")]
	public float maxInteractionDistance
	{
		[Token(Token = "0x6001070")]
		[Address(RVA = "0x6C863B0", Offset = "0x6C853B0", VA = "0x6C863B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001071")]
		[Address(RVA = "0x6C863C0", Offset = "0x6C853C0", VA = "0x6C863C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700033D")]
	public bool defaultEventCameraIsMainCamera
	{
		[Token(Token = "0x6001072")]
		[Address(RVA = "0x6C863E0", Offset = "0x6C853E0", VA = "0x6C863E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001073")]
		[Address(RVA = "0x6C863F0", Offset = "0x6C853F0", VA = "0x6C863F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700033E")]
	public Camera[] eventCameras
	{
		[Token(Token = "0x6001074")]
		[Address(RVA = "0x6C86400", Offset = "0x6C85400", VA = "0x6C86400")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001075")]
		[Address(RVA = "0x6C86410", Offset = "0x6C85410", VA = "0x6C86410")]
		set
		{
		}
	}

	[Token(Token = "0x1700033F")]
	public PanelInputRedirection panelInputRedirection
	{
		[Token(Token = "0x6001076")]
		[Address(RVA = "0x6C86440", Offset = "0x6C85440", VA = "0x6C86440")]
		get
		{
			return default(PanelInputRedirection);
		}
		[Token(Token = "0x6001077")]
		[Address(RVA = "0x6C86450", Offset = "0x6C85450", VA = "0x6C86450")]
		set
		{
		}
	}

	[Token(Token = "0x17000340")]
	public bool autoCreatePanelComponents
	{
		[Token(Token = "0x6001078")]
		[Address(RVA = "0x6C86460", Offset = "0x6C85460", VA = "0x6C86460")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001079")]
		[Address(RVA = "0x6C86470", Offset = "0x6C85470", VA = "0x6C86470")]
		set
		{
		}
	}

	[Token(Token = "0x600107A")]
	[Address(RVA = "0x6C86480", Offset = "0x6C85480", VA = "0x6C86480")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600107B")]
	[Address(RVA = "0x6C86760", Offset = "0x6C85760", VA = "0x6C86760")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600107C")]
	[Address(RVA = "0x6C85DD0", Offset = "0x6C84DD0", VA = "0x6C85DD0")]
	private static void Apply(PanelInputConfiguration input)
	{
	}

	[Token(Token = "0x600107D")]
	[Address(RVA = "0x6C869E0", Offset = "0x6C859E0", VA = "0x6C869E0")]
	public PanelInputConfiguration()
	{
	}
}
