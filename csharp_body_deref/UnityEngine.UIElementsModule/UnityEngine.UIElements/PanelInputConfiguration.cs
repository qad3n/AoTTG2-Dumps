// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PanelInputConfiguration
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200026E")]
[ExecuteAlways]
[AddComponentMenu("UI Toolkit/Panel Input Configuration", 1)]
[HelpURL("UIE-get-started-with-runtime-ui")]
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
		[Tooltip("Determines which layers can block input events on world space panels.")]
		[SerializeField]
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
		[SerializeField]
		[Tooltip("Defines the Event Camera(s) used for world space raycasting input.")]
		internal Camera[] m_EventCameras;

		[Token(Token = "0x400090C")]
		[FieldOffset(Offset = "0x18")]
		[SerializeField]
		[Tooltip("Determines which input event system is used for UI interactions when combining UI Toolkit and UGUI.")]
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
			[Address(RVA = "0x32851F0", Offset = "0x32837F0", VA = "0x1832851F0")]
			get
			{
				return default(Settings);
			}
		}

		[Token(Token = "0x17000342")]
		public bool processWorldSpaceInput
		{
			[Token(Token = "0x600107F")]
			[Address(RVA = "0xAE2930", Offset = "0xAE0F30", VA = "0x180AE2930")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000343")]
		public LayerMask interactionLayers
		{
			[Token(Token = "0x6001080")]
			[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
			get
			{
				return default(LayerMask);
			}
		}

		[Token(Token = "0x17000344")]
		public float maxInteractionDistance
		{
			[Token(Token = "0x6001081")]
			[Address(RVA = "0x562B90", Offset = "0x561190", VA = "0x180562B90")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x17000345")]
		public bool defaultEventCameraIsMainCamera
		{
			[Token(Token = "0x6001082")]
			[Address(RVA = "0x2BA6F90", Offset = "0x2BA5590", VA = "0x182BA6F90")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000346")]
		public Camera[] eventCameras
		{
			[Token(Token = "0x6001083")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000347")]
		public PanelInputRedirection panelInputRedirection
		{
			[Token(Token = "0x6001084")]
			[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
			get
			{
				return default(PanelInputRedirection);
			}
		}

		[Token(Token = "0x17000348")]
		public bool autoCreatePanelComponents
		{
			[Token(Token = "0x6001085")]
			[Address(RVA = "0xE5A3F0", Offset = "0xE589F0", VA = "0x180E5A3F0")]
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
		[Address(RVA = "0x32817A0", Offset = "0x327FDA0", VA = "0x1832817A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600106A")]
		[Address(RVA = "0x32817F0", Offset = "0x327FDF0", VA = "0x1832817F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000339")]
	internal Settings settings
	{
		[Token(Token = "0x600106B")]
		[Address(RVA = "0x3212690", Offset = "0x3210C90", VA = "0x183212690")]
		get
		{
			return default(Settings);
		}
	}

	[Token(Token = "0x1700033A")]
	public bool processWorldSpaceInput
	{
		[Token(Token = "0x600106C")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600106D")]
		[Address(RVA = "0x3281920", Offset = "0x327FF20", VA = "0x183281920")]
		set
		{
		}
	}

	[Token(Token = "0x1700033B")]
	public LayerMask interactionLayers
	{
		[Token(Token = "0x600106E")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x600106F")]
		[Address(RVA = "0x32818A0", Offset = "0x327FEA0", VA = "0x1832818A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700033C")]
	public float maxInteractionDistance
	{
		[Token(Token = "0x6001070")]
		[Address(RVA = "0x584AC0", Offset = "0x5830C0", VA = "0x180584AC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001071")]
		[Address(RVA = "0x32818F0", Offset = "0x327FEF0", VA = "0x1832818F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700033D")]
	public bool defaultEventCameraIsMainCamera
	{
		[Token(Token = "0x6001072")]
		[Address(RVA = "0x584AB0", Offset = "0x5830B0", VA = "0x180584AB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001073")]
		[Address(RVA = "0x3281850", Offset = "0x327FE50", VA = "0x183281850")]
		set
		{
		}
	}

	[Token(Token = "0x1700033E")]
	public Camera[] eventCameras
	{
		[Token(Token = "0x6001074")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001075")]
		[Address(RVA = "0x3281860", Offset = "0x327FE60", VA = "0x183281860")]
		set
		{
		}
	}

	[Token(Token = "0x1700033F")]
	public PanelInputRedirection panelInputRedirection
	{
		[Token(Token = "0x6001076")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
		get
		{
			return default(PanelInputRedirection);
		}
		[Token(Token = "0x6001077")]
		[Address(RVA = "0x3281910", Offset = "0x327FF10", VA = "0x183281910")]
		set
		{
		}
	}

	[Token(Token = "0x17000340")]
	public bool autoCreatePanelComponents
	{
		[Token(Token = "0x6001078")]
		[Address(RVA = "0xDA7C70", Offset = "0xDA6270", VA = "0x180DA7C70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001079")]
		[Address(RVA = "0x32817E0", Offset = "0x327FDE0", VA = "0x1832817E0")]
		set
		{
		}
	}

	[Token(Token = "0x600107A")]
	[Address(RVA = "0x3281430", Offset = "0x327FA30", VA = "0x183281430")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600107B")]
	[Address(RVA = "0x3281330", Offset = "0x327F930", VA = "0x183281330")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600107C")]
	[Address(RVA = "0x3280EA0", Offset = "0x327F4A0", VA = "0x183280EA0")]
	private static void Apply(PanelInputConfiguration input)
	{
	}

	[Token(Token = "0x600107D")]
	[Address(RVA = "0x32816F0", Offset = "0x327FCF0", VA = "0x1832816F0")]
	public PanelInputConfiguration()
	{
	}
}
