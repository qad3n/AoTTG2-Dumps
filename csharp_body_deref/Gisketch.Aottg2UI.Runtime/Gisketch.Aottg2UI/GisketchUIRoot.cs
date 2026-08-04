// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.GisketchUIRoot
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000005")]
[ExecuteAlways]
public sealed class GisketchUIRoot : MonoBehaviour, IGisketchActionHandler
{
	[Token(Token = "0x2000007")]
	[CompilerGenerated]
	private sealed class _003CRunScreenPrewarmQueue_003Ed__73 : IEnumerator<object>, IEnumerator, IDisposable
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
		private string _003Cid_003E5__2;

		[Token(Token = "0x4000029")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private IEnumerator _003Cprewarm_003E5__3;

		[Token(Token = "0x17000009")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000040")]
			[Address(RVA = "0x3A2D440", Offset = "0x3A2D440", VA = "0x3A2D440", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000042")]
			[Address(RVA = "0x3A2D490", Offset = "0x3A2D490", VA = "0x3A2D490", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600003C")]
		[Address(RVA = "0x3A2C310", Offset = "0x3A2C310", VA = "0x3A2C310")]
		[DebuggerHidden]
		public _003CRunScreenPrewarmQueue_003Ed__73(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600003D")]
		[Address(RVA = "0x3A2CCC0", Offset = "0x3A2CCC0", VA = "0x3A2CCC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600003E")]
		[Address(RVA = "0x3A2CD90", Offset = "0x3A2CD90", VA = "0x3A2CD90", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600003F")]
		[Address(RVA = "0x3A2D380", Offset = "0x3A2D380", VA = "0x3A2D380")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000041")]
		[Address(RVA = "0x3A2D450", Offset = "0x3A2D450", VA = "0x3A2D450", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000008")]
	[CompilerGenerated]
	private sealed class _003CWaitForScreenPrewarmIdle_003Ed__74 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400002A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400002B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400002C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GisketchUIRoot _003C_003E4__this;

		[Token(Token = "0x400002D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private float _003CidleSeconds_003E5__2;

		[Token(Token = "0x400002E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		private float _003Ctarget_003E5__3;

		[Token(Token = "0x1700000B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000046")]
			[Address(RVA = "0x3A2D5E0", Offset = "0x3A2D5E0", VA = "0x3A2D5E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700000C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000048")]
			[Address(RVA = "0x3A2D630", Offset = "0x3A2D630", VA = "0x3A2D630", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000043")]
		[Address(RVA = "0x3A2C3A0", Offset = "0x3A2C3A0", VA = "0x3A2C3A0")]
		[DebuggerHidden]
		public _003CWaitForScreenPrewarmIdle_003Ed__74(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000044")]
		[Address(RVA = "0x3A2D4A0", Offset = "0x3A2D4A0", VA = "0x3A2D4A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000045")]
		[Address(RVA = "0x3A2D4B0", Offset = "0x3A2D4B0", VA = "0x3A2D4B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000047")]
		[Address(RVA = "0x3A2D5F0", Offset = "0x3A2D5F0", VA = "0x3A2D5F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000006")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[SerializeField]
	private string _selectedScreenId;

	[Token(Token = "0x4000007")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[SerializeField]
	private TextAsset _themeJson;

	[Token(Token = "0x4000008")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[SerializeField]
	private bool _buildOnStart;

	[Token(Token = "0x4000009")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
	[SerializeField]
	private bool _previewInEditor;

	[Token(Token = "0x400000A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x32")]
	[SerializeField]
	private bool _createEventSystem;

	[Token(Token = "0x400000B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x33")]
	[SerializeField]
	private bool _motionEnabled;

	[Token(Token = "0x400000C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	[SerializeField]
	private float _motionScale;

	[Token(Token = "0x400000D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[SerializeField]
	private MonoBehaviour _actionHandler;

	[Token(Token = "0x400000E")]
	private const int OverlaySortingOrder = 900;

	[Token(Token = "0x400000F")]
	private const int ToastSortingOrder = 1000;

	[Token(Token = "0x4000010")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private GameObject _canvasObject;

	[Token(Token = "0x4000011")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private GameObject _eventSystemObject;

	[Token(Token = "0x4000012")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private IGisketchActionHandler _customActions;

	[Token(Token = "0x4000013")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private AottgActionRegistry _codeActions;

	[Token(Token = "0x4000014")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool _suppressNextBuildMotion;

	[Token(Token = "0x4000015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool _runtimeBuilt;

	[Token(Token = "0x400001C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	[SerializeField]
	private float _screenPrewarmIdleDelay;

	[Token(Token = "0x400001D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x9C")]
	[SerializeField]
	private int _screenPrewarmKeepAliveFrames;

	[Token(Token = "0x400001E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private readonly List<string> _screenPrewarmQueue;

	[Token(Token = "0x400001F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly HashSet<string> _screenPrewarmed;

	[Token(Token = "0x4000020")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Coroutine _screenPrewarmRoutine;

	[Token(Token = "0x4000021")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	[SerializeField]
	private AottgUiScalePreset _scalePreset;

	[Token(Token = "0x4000022")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xBC")]
	[SerializeField]
	private float _scale;

	[Token(Token = "0x17000001")]
	public GisketchUIState State
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x3A29630", Offset = "0x3A29630", VA = "0x3A29630")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x3A29640", Offset = "0x3A29640", VA = "0x3A29640")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public GisketchManifestDefinition Manifest
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x3A29650", Offset = "0x3A29650", VA = "0x3A29650")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x3A29660", Offset = "0x3A29660", VA = "0x3A29660")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public GisketchTheme Theme
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x3A29670", Offset = "0x3A29670", VA = "0x3A29670")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x3A29680", Offset = "0x3A29680", VA = "0x3A29680")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public GisketchScreenRouter Screens
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x3A29690", Offset = "0x3A29690", VA = "0x3A29690")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x3A296A0", Offset = "0x3A296A0", VA = "0x3A296A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public GisketchOverlayManager Overlays
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x3A296B0", Offset = "0x3A296B0", VA = "0x3A296B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x3A296C0", Offset = "0x3A296C0", VA = "0x3A296C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public GisketchToastManager Toasts
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x3A296E0", Offset = "0x3A296E0", VA = "0x3A296E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x3A296F0", Offset = "0x3A296F0", VA = "0x3A296F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public AottgUiScalePreset ScalePreset
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x3A2C8B0", Offset = "0x3A2C8B0", VA = "0x3A2C8B0")]
		get
		{
			return default(AottgUiScalePreset);
		}
	}

	[Token(Token = "0x17000008")]
	public float Scale
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x3A2C8C0", Offset = "0x3A2C8C0", VA = "0x3A2C8C0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x3A29710", Offset = "0x3A29710", VA = "0x3A29710")]
	private void Start()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x3A29E10", Offset = "0x3A29E10", VA = "0x3A29E10")]
	private void Update()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x3A29790", Offset = "0x3A29790", VA = "0x3A29790")]
	public void Build()
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x3A2B040", Offset = "0x3A2B040", VA = "0x3A2B040")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x3A2A2F0", Offset = "0x3A2A2F0", VA = "0x3A2A2F0")]
	private void Clear(bool destroyEventSystem)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x3A2B220", Offset = "0x3A2B220", VA = "0x3A2B220")]
	public void SetTheme(TextAsset themeJson)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3A2B2D0", Offset = "0x3A2B2D0", VA = "0x3A2B2D0")]
	public void SetSelectedScreen(string screenId)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x3A2B330", Offset = "0x3A2B330", VA = "0x3A2B330")]
	public void RefreshActiveScreen()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x3A2B380", Offset = "0x3A2B380", VA = "0x3A2B380")]
	public void SetActionHandler(MonoBehaviour actionHandler)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3A2B3F0", Offset = "0x3A2B3F0", VA = "0x3A2B3F0")]
	public void ShowToast(AottgToastDefinition toast)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3A2B410", Offset = "0x3A2B410", VA = "0x3A2B410", Slot = "4")]
	public void HandleAction(string actionId, GisketchActionContext context)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x3A2A420", Offset = "0x3A2A420", VA = "0x3A2A420")]
	private GisketchManifestDefinition LoadCodeManifest(AottgCodeCatalog catalog)
	{
		return null;
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x3A2A5C0", Offset = "0x3A2A5C0", VA = "0x3A2A5C0")]
	private void EnsureEventSystem()
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x3A2B780", Offset = "0x3A2B780", VA = "0x3A2B780")]
	private static void ConfigureEventSystem(EventSystem eventSystem)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3A2B770", Offset = "0x3A2B770", VA = "0x3A2B770")]
	private static bool ShouldFocusOverlay(GisketchActionContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x3A2A860", Offset = "0x3A2A860", VA = "0x3A2A860")]
	private RectTransform CreateCanvas()
	{
		return null;
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x3A2AAA0", Offset = "0x3A2AAA0", VA = "0x3A2AAA0")]
	private static Transform CreateLayer(Transform parent, string name)
	{
		return null;
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x3A2AC10", Offset = "0x3A2AC10", VA = "0x3A2AC10")]
	private static void PromoteLayer(Transform layer, int sortingOrder)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x3A2AFE0", Offset = "0x3A2AFE0", VA = "0x3A2AFE0")]
	private static string FirstScreenId(GisketchManifestDefinition manifest)
	{
		return null;
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x3A2B9B0", Offset = "0x3A2B9B0", VA = "0x3A2B9B0")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x3A2B140", Offset = "0x3A2B140", VA = "0x3A2B140")]
	private static void DestroyObject(ref GameObject go)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x3A2B7E0", Offset = "0x3A2B7E0", VA = "0x3A2B7E0")]
	private static void MarkEditorPreview(GameObject go)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x3A29FB0", Offset = "0x3A29FB0", VA = "0x3A29FB0")]
	private void UpdateFocusInput()
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x3A2BC00", Offset = "0x3A2BC00", VA = "0x3A2BC00")]
	private void ClearPointerSelection()
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x3A2BAB0", Offset = "0x3A2BAB0", VA = "0x3A2BAB0")]
	private static Selectable SelectedInput()
	{
		return null;
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x3A2BD30", Offset = "0x3A2BD30", VA = "0x3A2BD30")]
	private bool IsInsideGisketchCanvas(GameObject selected)
	{
		return default(bool);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x3A2BE00", Offset = "0x3A2BE00", VA = "0x3A2BE00")]
	private static bool IsInput(GameObject selected)
	{
		return default(bool);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x3A2BED0", Offset = "0x3A2BED0", VA = "0x3A2BED0")]
	public void QueueScreenPrewarm(params string[] screenIds)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x3A2C2A0", Offset = "0x3A2C2A0", VA = "0x3A2C2A0")]
	[IteratorStateMachine(typeof(_003CRunScreenPrewarmQueue_003Ed__73))]
	private IEnumerator RunScreenPrewarmQueue()
	{
		return null;
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x3A2C330", Offset = "0x3A2C330", VA = "0x3A2C330")]
	[IteratorStateMachine(typeof(_003CWaitForScreenPrewarmIdle_003Ed__74))]
	private IEnumerator WaitForScreenPrewarmIdle()
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x3A2C3C0", Offset = "0x3A2C3C0", VA = "0x3A2C3C0")]
	private bool CanStartScreenPrewarm(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x3A2C200", Offset = "0x3A2C200", VA = "0x3A2C200")]
	private bool IsScreenPrewarmQueued(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x3A2C440", Offset = "0x3A2C440", VA = "0x3A2C440")]
	private bool CanWaitForScreenPrewarm()
	{
		return default(bool);
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x3A2C740", Offset = "0x3A2C740", VA = "0x3A2C740")]
	private bool CanContinueScreenPrewarm()
	{
		return default(bool);
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x3A2C850", Offset = "0x3A2C850", VA = "0x3A2C850")]
	private static bool ScreenPrewarmInput()
	{
		return default(bool);
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x3A2B050", Offset = "0x3A2B050", VA = "0x3A2B050")]
	private void CancelScreenPrewarm(bool clearQueue)
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x3A2C8D0", Offset = "0x3A2C8D0", VA = "0x3A2C8D0")]
	public void SetScale(AottgUiScalePreset preset)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x3A2C960", Offset = "0x3A2C960", VA = "0x3A2C960")]
	public void SetScale(float scale)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x3A2B7F0", Offset = "0x3A2B7F0", VA = "0x3A2B7F0")]
	internal void ApplyScale([Optional] CanvasScaler scaler)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x3A2CB10", Offset = "0x3A2CB10", VA = "0x3A2CB10")]
	public GisketchUIRoot()
	{
	}
}
