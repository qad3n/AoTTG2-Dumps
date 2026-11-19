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
		[Token(Token = "0x4000021")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000022")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000023")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GisketchUIRoot _003C_003E4__this;

		[Token(Token = "0x4000024")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private string _003Cid_003E5__2;

		[Token(Token = "0x4000025")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private IEnumerator _003Cprewarm_003E5__3;

		[Token(Token = "0x17000009")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000042")]
			[Address(RVA = "0x521DE70", Offset = "0x521CE70", VA = "0x521DE70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000044")]
			[Address(RVA = "0x521DEC0", Offset = "0x521CEC0", VA = "0x521DEC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600003E")]
		[Address(RVA = "0x521A8D0", Offset = "0x52198D0", VA = "0x521A8D0")]
		[DebuggerHidden]
		public _003CRunScreenPrewarmQueue_003Ed__11(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600003F")]
		[Address(RVA = "0x521D750", Offset = "0x521C750", VA = "0x521D750", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000040")]
		[Address(RVA = "0x521D820", Offset = "0x521C820", VA = "0x521D820", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000041")]
		[Address(RVA = "0x521DDB0", Offset = "0x521CDB0", VA = "0x521DDB0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000043")]
		[Address(RVA = "0x521DE80", Offset = "0x521CE80", VA = "0x521DE80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000006")]
	[CompilerGenerated]
	private sealed class _003CWaitForScreenPrewarmIdle_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000026")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000027")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000028")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GisketchUIRoot _003C_003E4__this;

		[Token(Token = "0x4000029")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private float _003CidleSeconds_003E5__2;

		[Token(Token = "0x400002A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		private float _003Ctarget_003E5__3;

		[Token(Token = "0x1700000B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000048")]
			[Address(RVA = "0x521E000", Offset = "0x521D000", VA = "0x521E000", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600004A")]
			[Address(RVA = "0x521E050", Offset = "0x521D050", VA = "0x521E050", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000045")]
		[Address(RVA = "0x521A960", Offset = "0x5219960", VA = "0x521A960")]
		[DebuggerHidden]
		public _003CWaitForScreenPrewarmIdle_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000046")]
		[Address(RVA = "0x521DED0", Offset = "0x521CED0", VA = "0x521DED0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000047")]
		[Address(RVA = "0x521DEE0", Offset = "0x521CEE0", VA = "0x521DEE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000049")]
		[Address(RVA = "0x521E010", Offset = "0x521D010", VA = "0x521E010", Slot = "8")]
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
	private bool _preserveStateOnBuild;

	[Token(Token = "0x4000018")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8A")]
	private bool _runtimeBuilt;

	[Token(Token = "0x17000001")]
	public AottgUiScalePreset ScalePreset
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x521AF40", Offset = "0x5219F40", VA = "0x521AF40")]
		get
		{
			return default(AottgUiScalePreset);
		}
	}

	[Token(Token = "0x17000002")]
	public float Scale
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x521AF50", Offset = "0x5219F50", VA = "0x521AF50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000003")]
	public GisketchUIState State
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x521B4F0", Offset = "0x521A4F0", VA = "0x521B4F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x521B500", Offset = "0x521A500", VA = "0x521B500")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public GisketchManifestDefinition Manifest
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x521B520", Offset = "0x521A520", VA = "0x521B520")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x521B530", Offset = "0x521A530", VA = "0x521B530")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public GisketchTheme Theme
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x521B550", Offset = "0x521A550", VA = "0x521B550")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x521B560", Offset = "0x521A560", VA = "0x521B560")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public GisketchScreenRouter Screens
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x521B580", Offset = "0x521A580", VA = "0x521B580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x521B590", Offset = "0x521A590", VA = "0x521B590")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public GisketchOverlayManager Overlays
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x521B5B0", Offset = "0x521A5B0", VA = "0x521B5B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x521B5C0", Offset = "0x521A5C0", VA = "0x521B5C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public GisketchToastManager Toasts
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x521B5E0", Offset = "0x521A5E0", VA = "0x521B5E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x521B5F0", Offset = "0x521A5F0", VA = "0x521B5F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x5219E90", Offset = "0x5218E90", VA = "0x5219E90")]
	private void UpdateFocusInput()
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x521A1F0", Offset = "0x52191F0", VA = "0x521A1F0")]
	private void ClearPointerSelection()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x521A0A0", Offset = "0x52190A0", VA = "0x521A0A0")]
	private static Selectable SelectedInput()
	{
		return null;
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x521A320", Offset = "0x5219320", VA = "0x521A320")]
	private bool IsInsideGisketchCanvas(GameObject selected)
	{
		return default(bool);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x521A3F0", Offset = "0x52193F0", VA = "0x521A3F0")]
	private static bool IsInput(GameObject selected)
	{
		return default(bool);
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x521A4C0", Offset = "0x52194C0", VA = "0x521A4C0")]
	public void QueueScreenPrewarm(params string[] screenIds)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x521A860", Offset = "0x5219860", VA = "0x521A860")]
	[IteratorStateMachine(typeof(_003CRunScreenPrewarmQueue_003Ed__11))]
	private IEnumerator RunScreenPrewarmQueue()
	{
		return null;
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x521A8F0", Offset = "0x52198F0", VA = "0x521A8F0")]
	[IteratorStateMachine(typeof(_003CWaitForScreenPrewarmIdle_003Ed__12))]
	private IEnumerator WaitForScreenPrewarmIdle()
	{
		return null;
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x521A980", Offset = "0x5219980", VA = "0x521A980")]
	private bool CanStartScreenPrewarm(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x521A7C0", Offset = "0x52197C0", VA = "0x521A7C0")]
	private bool IsScreenPrewarmQueued(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x521AA00", Offset = "0x5219A00", VA = "0x521AA00")]
	private bool CanWaitForScreenPrewarm()
	{
		return default(bool);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x521ACF0", Offset = "0x5219CF0", VA = "0x521ACF0")]
	private bool CanContinueScreenPrewarm()
	{
		return default(bool);
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x521AE00", Offset = "0x5219E00", VA = "0x521AE00")]
	private static bool ScreenPrewarmInput()
	{
		return default(bool);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x521AE60", Offset = "0x5219E60", VA = "0x521AE60")]
	private void CancelScreenPrewarm(bool clearQueue)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x521B0E0", Offset = "0x521A0E0", VA = "0x521B0E0")]
	public void SetScale(AottgUiScalePreset preset)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x521B170", Offset = "0x521A170", VA = "0x521B170")]
	public void SetScale(float scale)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x521B2A0", Offset = "0x521A2A0", VA = "0x521B2A0")]
	internal void ApplyScale([Optional] CanvasScaler scaler)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x521B610", Offset = "0x521A610", VA = "0x521B610")]
	private void Start()
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x521BD10", Offset = "0x521AD10", VA = "0x521BD10")]
	private void Update()
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x521B690", Offset = "0x521A690", VA = "0x521B690")]
	public void Build()
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x521CB10", Offset = "0x521BB10", VA = "0x521CB10")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x521C0B0", Offset = "0x521B0B0", VA = "0x521C0B0")]
	private void Clear(bool destroyEventSystem)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x521CC00", Offset = "0x521BC00", VA = "0x521CC00")]
	public void SetTheme(TextAsset themeJson)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x521CCC0", Offset = "0x521BCC0", VA = "0x521CCC0")]
	public void SetSelectedScreen(string screenId)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x521CD20", Offset = "0x521BD20", VA = "0x521CD20")]
	public void RefreshActiveScreen(TextAsset themeJson)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x521CD90", Offset = "0x521BD90", VA = "0x521CD90")]
	public void RefreshActiveScreen()
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x521CF80", Offset = "0x521BF80", VA = "0x521CF80")]
	public bool RefreshNode(string nodeId, GisketchNodeDefinition replacement, [Optional] GisketchNodeRefreshOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x521CFA0", Offset = "0x521BFA0", VA = "0x521CFA0")]
	public bool InvalidateScreen(string screenId)
	{
		return default(bool);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x521CFC0", Offset = "0x521BFC0", VA = "0x521CFC0")]
	public GisketchNodeDefinition[] BuildDetachedNodes(string ownerId, Action<AottgUi> build, [Optional] string clearOwnerPrefix)
	{
		return null;
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x521D0A0", Offset = "0x521C0A0", VA = "0x521D0A0")]
	public void SetActionHandler(MonoBehaviour actionHandler)
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x521D110", Offset = "0x521C110", VA = "0x521D110")]
	public void ShowToast(AottgToastDefinition toast)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x521D130", Offset = "0x521C130", VA = "0x521D130", Slot = "4")]
	public void HandleAction(string actionId, GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x521C200", Offset = "0x521B200", VA = "0x521C200")]
	private GisketchManifestDefinition LoadCodeManifest(AottgCodeCatalog catalog)
	{
		return null;
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x521C3C0", Offset = "0x521B3C0", VA = "0x521C3C0")]
	private void EnsureEventSystem()
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x521D430", Offset = "0x521C430", VA = "0x521D430")]
	private static void ConfigureEventSystem(EventSystem eventSystem)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x521D420", Offset = "0x521C420", VA = "0x521D420")]
	private static bool ShouldFocusOverlay(GisketchActionContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x521C650", Offset = "0x521B650", VA = "0x521C650")]
	private RectTransform CreateCanvas()
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x521C890", Offset = "0x521B890", VA = "0x521C890")]
	private static Transform CreateLayer(Transform parent, string name)
	{
		return null;
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x521CA00", Offset = "0x521BA00", VA = "0x521CA00")]
	private static void PromoteLayer(Transform layer, int sortingOrder)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x521CAB0", Offset = "0x521BAB0", VA = "0x521CAB0")]
	private static string FirstScreenId(GisketchManifestDefinition manifest)
	{
		return null;
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x521D4A0", Offset = "0x521C4A0", VA = "0x521D4A0")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x521CB20", Offset = "0x521BB20", VA = "0x521CB20")]
	private static void DestroyObject(ref GameObject go)
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x521D490", Offset = "0x521C490", VA = "0x521D490")]
	private static void MarkEditorPreview(GameObject go)
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x521D5A0", Offset = "0x521C5A0", VA = "0x521D5A0")]
	public GisketchUIRoot()
	{
	}
}
