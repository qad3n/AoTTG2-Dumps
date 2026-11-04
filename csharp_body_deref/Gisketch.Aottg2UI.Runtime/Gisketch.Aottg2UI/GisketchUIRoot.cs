// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.GisketchUIRoot
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/GisketchUIRoot.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Overlays;
using Gisketch.Aottg2UI.Routing;
using Gisketch.Aottg2UI.State;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI;

[Token(Token = "0x2000003")]
[ExecuteAlways]
public sealed class GisketchUIRoot : MonoBehaviour, IGisketchActionHandler
{
	[Token(Token = "0x2000005")]
	[CompilerGenerated]
	private sealed class _003CRunScreenPrewarmQueue_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000020")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000021")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000022")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GisketchUIRoot _003C_003E4__this;

		[Token(Token = "0x4000023")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private string _003Cid_003E5__2;

		[Token(Token = "0x4000024")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private IEnumerator _003Cprewarm_003E5__3;

		[Token(Token = "0x17000009")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000041")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000043")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600003D")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CRunScreenPrewarmQueue_003Ed__11(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600003E")]
		[Address(RVA = "0x18A2A90", Offset = "0x18A1090", VA = "0x1818A2A90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600003F")]
		[Address(RVA = "0x18A2550", Offset = "0x18A0B50", VA = "0x1818A2550", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000040")]
		[Address(RVA = "0x18A2AD0", Offset = "0x18A10D0", VA = "0x1818A2AD0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000042")]
		[Address(RVA = "0x18A2A50", Offset = "0x18A1050", VA = "0x1818A2A50", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000006")]
	[CompilerGenerated]
	private sealed class _003CWaitForScreenPrewarmIdle_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000025")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000026")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000027")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GisketchUIRoot _003C_003E4__this;

		[Token(Token = "0x4000028")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private float _003CidleSeconds_003E5__2;

		[Token(Token = "0x4000029")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		private float _003Ctarget_003E5__3;

		[Token(Token = "0x1700000B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000047")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000049")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000044")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitForScreenPrewarmIdle_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000045")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000046")]
		[Address(RVA = "0x18A3790", Offset = "0x18A1D90", VA = "0x1818A3790", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000048")]
		[Address(RVA = "0x18A3850", Offset = "0x18A1E50", VA = "0x1818A3850", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000001")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[SerializeField]
	private float _screenPrewarmIdleDelay;

	[Token(Token = "0x4000002")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	[SerializeField]
	private int _screenPrewarmKeepAliveFrames;

	[Token(Token = "0x4000003")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<string> _screenPrewarmQueue;

	[Token(Token = "0x4000004")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly HashSet<string> _screenPrewarmed;

	[Token(Token = "0x4000005")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Coroutine _screenPrewarmRoutine;

	[Token(Token = "0x4000006")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[SerializeField]
	private AottgUiScalePreset _scalePreset;

	[Token(Token = "0x4000007")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	[SerializeField]
	private float _scale;

	[Token(Token = "0x4000008")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[SerializeField]
	private string _selectedScreenId;

	[Token(Token = "0x4000009")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[SerializeField]
	private TextAsset _themeJson;

	[Token(Token = "0x400000A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[SerializeField]
	private bool _buildOnStart;

	[Token(Token = "0x400000B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
	[SerializeField]
	private bool _previewInEditor;

	[Token(Token = "0x400000C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5A")]
	[SerializeField]
	private bool _createEventSystem;

	[Token(Token = "0x400000D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5B")]
	[SerializeField]
	private bool _motionEnabled;

	[Token(Token = "0x400000E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	[SerializeField]
	private float _motionScale;

	[Token(Token = "0x400000F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[SerializeField]
	private MonoBehaviour _actionHandler;

	[Token(Token = "0x4000010")]
	private const int OverlaySortingOrder = 900;

	[Token(Token = "0x4000011")]
	private const int ToastSortingOrder = 1000;

	[Token(Token = "0x4000012")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject _canvasObject;

	[Token(Token = "0x4000013")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private GameObject _eventSystemObject;

	[Token(Token = "0x4000014")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private IGisketchActionHandler _customActions;

	[Token(Token = "0x4000015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private AottgActionRegistry _codeActions;

	[Token(Token = "0x4000016")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private bool _suppressNextBuildMotion;

	[Token(Token = "0x4000017")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x89")]
	private bool _runtimeBuilt;

	[Token(Token = "0x17000001")]
	public AottgUiScalePreset ScalePreset
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0")]
		get
		{
			return default(AottgUiScalePreset);
		}
	}

	[Token(Token = "0x17000002")]
	public float Scale
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x189BA00", Offset = "0x189A000", VA = "0x18189BA00")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000003")]
	public GisketchUIState State
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0xA4D750", Offset = "0xA4BD50", VA = "0x180A4D750")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public GisketchManifestDefinition Manifest
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x58A900", Offset = "0x588F00", VA = "0x18058A900")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public GisketchTheme Theme
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x189BA60", Offset = "0x189A060", VA = "0x18189BA60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public GisketchScreenRouter Screens
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x58AA30", Offset = "0x589030", VA = "0x18058AA30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public GisketchOverlayManager Overlays
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x1537220", Offset = "0x1535820", VA = "0x181537220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x1537500", Offset = "0x1535B00", VA = "0x181537500")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public GisketchToastManager Toasts
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x187BC10", Offset = "0x187A210", VA = "0x18187BC10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x87BC50", Offset = "0x87A250", VA = "0x18087BC50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x189B2E0", Offset = "0x18998E0", VA = "0x18189B2E0")]
	private void UpdateFocusInput()
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x1899270", Offset = "0x1897870", VA = "0x181899270")]
	private void ClearPointerSelection()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x189ABD0", Offset = "0x18991D0", VA = "0x18189ABD0")]
	private static Selectable SelectedInput()
	{
		return null;
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x189A2F0", Offset = "0x18988F0", VA = "0x18189A2F0")]
	private bool IsInsideGisketchCanvas(GameObject selected)
	{
		return default(bool);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x189A220", Offset = "0x1898820", VA = "0x18189A220")]
	private static bool IsInput(GameObject selected)
	{
		return default(bool);
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x189A6D0", Offset = "0x1898CD0", VA = "0x18189A6D0")]
	public void QueueScreenPrewarm(params string[] screenIds)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x189AAE0", Offset = "0x18990E0", VA = "0x18189AAE0")]
	[IteratorStateMachine(typeof(_003CRunScreenPrewarmQueue_003Ed__11))]
	private IEnumerator RunScreenPrewarmQueue()
	{
		return null;
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x189B830", Offset = "0x1899E30", VA = "0x18189B830")]
	[IteratorStateMachine(typeof(_003CWaitForScreenPrewarmIdle_003Ed__12))]
	private IEnumerator WaitForScreenPrewarmIdle()
	{
		return null;
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x1899010", Offset = "0x1897610", VA = "0x181899010")]
	private bool CanStartScreenPrewarm(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x189A3D0", Offset = "0x18989D0", VA = "0x18189A3D0")]
	private bool IsScreenPrewarmQueued(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x18990A0", Offset = "0x18976A0", VA = "0x1818990A0")]
	private bool CanWaitForScreenPrewarm()
	{
		return default(bool);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x1898F60", Offset = "0x1897560", VA = "0x181898F60")]
	private bool CanContinueScreenPrewarm()
	{
		return default(bool);
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x189AB50", Offset = "0x1899150", VA = "0x18189AB50")]
	private static bool ScreenPrewarmInput()
	{
		return default(bool);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x1899190", Offset = "0x1897790", VA = "0x181899190")]
	private void CancelScreenPrewarm(bool clearQueue)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x189AEA0", Offset = "0x18994A0", VA = "0x18189AEA0")]
	public void SetScale(AottgUiScalePreset preset)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x189ADB0", Offset = "0x18993B0", VA = "0x18189ADB0")]
	public void SetScale(float scale)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x18985C0", Offset = "0x1896BC0", VA = "0x1818985C0")]
	internal void ApplyScale([Optional] CanvasScaler scaler)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x189B160", Offset = "0x1899760", VA = "0x18189B160")]
	private void Start()
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x189B650", Offset = "0x1899C50", VA = "0x18189B650")]
	private void Update()
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x18987C0", Offset = "0x1896DC0", VA = "0x1818987C0")]
	public void Build()
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x18994F0", Offset = "0x1897AF0", VA = "0x1818994F0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x1899500", Offset = "0x1897B00", VA = "0x181899500")]
	private void Clear(bool destroyEventSystem)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x189B080", Offset = "0x1899680", VA = "0x18189B080")]
	public void SetTheme(TextAsset themeJson)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x189B020", Offset = "0x1899620", VA = "0x18189B020")]
	public void SetSelectedScreen(string screenId)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x189A8C0", Offset = "0x1898EC0", VA = "0x18189A8C0")]
	public void RefreshActiveScreen()
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x189AAB0", Offset = "0x18990B0", VA = "0x18189AAB0")]
	public bool RefreshNode(string nodeId, GisketchNodeDefinition replacement, [Optional] GisketchNodeRefreshOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x189A200", Offset = "0x1898800", VA = "0x18189A200")]
	public bool InvalidateScreen(string screenId)
	{
		return default(bool);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x18986F0", Offset = "0x1896CF0", VA = "0x1818986F0")]
	public GisketchNodeDefinition[] BuildDetachedNodes(string ownerId, Action<AottgUi> build, [Optional] string clearOwnerPrefix)
	{
		return null;
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x189AD30", Offset = "0x1899330", VA = "0x18189AD30")]
	public void SetActionHandler(MonoBehaviour actionHandler)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x189B140", Offset = "0x1899740", VA = "0x18189B140")]
	public void ShowToast(AottgToastDefinition toast)
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x1899E80", Offset = "0x1898480", VA = "0x181899E80", Slot = "4")]
	public void HandleAction(string actionId, GisketchActionContext context)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x189A490", Offset = "0x1898A90", VA = "0x18189A490")]
	private GisketchManifestDefinition LoadCodeManifest(AottgCodeCatalog catalog)
	{
		return null;
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x1899BC0", Offset = "0x18981C0", VA = "0x181899BC0")]
	private void EnsureEventSystem()
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x18996E0", Offset = "0x1897CE0", VA = "0x1818996E0")]
	private static void ConfigureEventSystem(EventSystem eventSystem)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x189B130", Offset = "0x1899730", VA = "0x18189B130")]
	private static bool ShouldFocusOverlay(GisketchActionContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x1899740", Offset = "0x1897D40", VA = "0x181899740")]
	private RectTransform CreateCanvas()
	{
		return null;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x1899980", Offset = "0x1897F80", VA = "0x181899980")]
	private static Transform CreateLayer(Transform parent, string name)
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x189A610", Offset = "0x1898C10", VA = "0x18189A610")]
	private static void PromoteLayer(Transform layer, int sortingOrder)
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x1899E20", Offset = "0x1898420", VA = "0x181899E20")]
	private static string FirstScreenId(GisketchManifestDefinition manifest)
	{
		return null;
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x189B1D0", Offset = "0x18997D0", VA = "0x18189B1D0")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x1899AE0", Offset = "0x18980E0", VA = "0x181899AE0")]
	private static void DestroyObject(ref GameObject go)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private static void MarkEditorPreview(GameObject go)
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x189B8A0", Offset = "0x1899EA0", VA = "0x18189B8A0")]
	public GisketchUIRoot()
	{
	}
}
