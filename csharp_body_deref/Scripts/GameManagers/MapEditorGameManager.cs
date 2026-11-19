// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.MapEditorGameManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameManagers/MapEditorGameManager.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/MapEditorGameManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CustomLogic;
using Il2CppDummyDll;
using Map;
using MapEditor;
using Settings;
using UI;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x2000396")]
internal class MapEditorGameManager : BaseGameManager
{
	[Token(Token = "0x200039B")]
	[CompilerGenerated]
	private sealed class _003CWaitAndAutosave_003Ed__57 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001257")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001258")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001259")]
		[FieldOffset(Offset = "0x20")]
		public MapEditorGameManager _003C_003E4__this;

		[Token(Token = "0x17000282")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001732")]
			[Address(RVA = "0x5855450", Offset = "0x5854450", VA = "0x5855450", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000283")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001734")]
			[Address(RVA = "0x58554A0", Offset = "0x58544A0", VA = "0x58554A0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600172F")]
		[Address(RVA = "0x5852090", Offset = "0x5851090", VA = "0x5852090")]
		[DebuggerHidden]
		public _003CWaitAndAutosave_003Ed__57(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001730")]
		[Address(RVA = "0x5855380", Offset = "0x5854380", VA = "0x5855380", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001731")]
		[Address(RVA = "0x5855390", Offset = "0x5854390", VA = "0x5855390", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001733")]
		[Address(RVA = "0x5855460", Offset = "0x5854460", VA = "0x5855460", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400122C")]
	[FieldOffset(Offset = "0x28")]
	public MapScript MapScript;

	[Token(Token = "0x400122D")]
	[FieldOffset(Offset = "0x30")]
	public CustomLogicEvaluator LogicEvaluator;

	[Token(Token = "0x400122E")]
	[FieldOffset(Offset = "0x38")]
	public HashSet<MapObject> SelectedObjects;

	[Token(Token = "0x400122F")]
	[FieldOffset(Offset = "0x40")]
	public BaseGizmo CurrentGizmo;

	[Token(Token = "0x4001230")]
	[FieldOffset(Offset = "0x48")]
	public GizmoMode CurrentGizmoMode;

	[Token(Token = "0x4001231")]
	[FieldOffset(Offset = "0x4C")]
	public bool Snap;

	[Token(Token = "0x4001232")]
	[FieldOffset(Offset = "0x4D")]
	public bool HierarchyTreeViewEnabled;

	[Token(Token = "0x4001233")]
	[FieldOffset(Offset = "0x50")]
	public int LastSelectedObjectId;

	[Token(Token = "0x4001234")]
	[FieldOffset(Offset = "0x58")]
	private List<BaseCommand> _undoCommands;

	[Token(Token = "0x4001235")]
	[FieldOffset(Offset = "0x60")]
	private List<BaseCommand> _redoCommands;

	[Token(Token = "0x4001236")]
	[FieldOffset(Offset = "0x68")]
	private string _clipboard;

	[Token(Token = "0x4001237")]
	[FieldOffset(Offset = "0x70")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4001238")]
	[FieldOffset(Offset = "0x78")]
	private MapEditorInputSettings _input;

	[Token(Token = "0x4001239")]
	[FieldOffset(Offset = "0x80")]
	public PositionGizmo _positionGizmo;

	[Token(Token = "0x400123A")]
	[FieldOffset(Offset = "0x88")]
	public RotationGizmo _rotationGizmo;

	[Token(Token = "0x400123B")]
	[FieldOffset(Offset = "0x90")]
	public ScaleGizmo _scaleGizmo;

	[Token(Token = "0x400123C")]
	[FieldOffset(Offset = "0x98")]
	private OutlineGizmo _outlineGizmo;

	[Token(Token = "0x400123D")]
	[FieldOffset(Offset = "0xA0")]
	public MapEditorBrush Brush;

	[Token(Token = "0x400123E")]
	[FieldOffset(Offset = "0xA8")]
	public MapEditorRuler Ruler;

	[Token(Token = "0x400123F")]
	[FieldOffset(Offset = "0xB0")]
	private MapEditorSceneGrid _sceneGrid;

	[Token(Token = "0x4001240")]
	[FieldOffset(Offset = "0xB8")]
	private int _currentObjectId;

	[Token(Token = "0x4001241")]
	[FieldOffset(Offset = "0xBC")]
	public bool IgnoreNextSelect;

	[Token(Token = "0x4001242")]
	[FieldOffset(Offset = "0xBD")]
	private bool _isDrag;

	[Token(Token = "0x4001243")]
	[FieldOffset(Offset = "0xC0")]
	private Vector3 _dragStart;

	[Token(Token = "0x4001244")]
	[FieldOffset(Offset = "0xD0")]
	private MobileMapEditorPointer _mobilePointer;

	[Token(Token = "0x4001245")]
	[FieldOffset(Offset = "0xD8")]
	private bool _lightsOn;

	[Token(Token = "0x17000280")]
	private MobileMapEditorPointer MobilePointer
	{
		[Token(Token = "0x60016F5")]
		[Address(RVA = "0x584F2A0", Offset = "0x584E2A0", VA = "0x584F2A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000281")]
	public bool LightsOn
	{
		[Token(Token = "0x6001716")]
		[Address(RVA = "0x5853BF0", Offset = "0x5852BF0", VA = "0x5853BF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60016E8")]
	[Address(RVA = "0x584BAC0", Offset = "0x584AAC0", VA = "0x584BAC0", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x60016E9")]
	[Address(RVA = "0x584BB20", Offset = "0x584AB20", VA = "0x584BB20")]
	public void ShowAddObject()
	{
	}

	[Token(Token = "0x60016EA")]
	[Address(RVA = "0x584BB70", Offset = "0x584AB70", VA = "0x584BB70")]
	public void AddObject(string name)
	{
	}

	[Token(Token = "0x60016EB")]
	[Address(RVA = "0x584CD00", Offset = "0x584BD00", VA = "0x584CD00")]
	public void Undo()
	{
	}

	[Token(Token = "0x60016EC")]
	[Address(RVA = "0x584CF40", Offset = "0x584BF40", VA = "0x584CF40")]
	public void Redo()
	{
	}

	[Token(Token = "0x60016ED")]
	[Address(RVA = "0x584D180", Offset = "0x584C180", VA = "0x584D180")]
	public void Copy()
	{
	}

	[Token(Token = "0x60016EE")]
	[Address(RVA = "0x584DAB0", Offset = "0x584CAB0", VA = "0x584DAB0")]
	public void Paste()
	{
	}

	[Token(Token = "0x60016EF")]
	[Address(RVA = "0x584E380", Offset = "0x584D380", VA = "0x584E380")]
	public void PasteAsChild(int parentId)
	{
	}

	[Token(Token = "0x60016F0")]
	[Address(RVA = "0x584DAC0", Offset = "0x584CAC0", VA = "0x584DAC0")]
	private void Paste(int parentId)
	{
	}

	[Token(Token = "0x60016F1")]
	[Address(RVA = "0x584E430", Offset = "0x584D430", VA = "0x584E430")]
	public void CreateEmptyParent(int contextId)
	{
	}

	[Token(Token = "0x60016F2")]
	[Address(RVA = "0x584EC00", Offset = "0x584DC00", VA = "0x584EC00")]
	public void ResetOrigin()
	{
	}

	[Token(Token = "0x60016F3")]
	[Address(RVA = "0x584F180", Offset = "0x584E180", VA = "0x584F180")]
	public void Cut()
	{
	}

	[Token(Token = "0x60016F4")]
	[Address(RVA = "0x584F1A0", Offset = "0x584E1A0", VA = "0x584F1A0")]
	public void Delete()
	{
	}

	[Token(Token = "0x60016F6")]
	[Address(RVA = "0x584F320", Offset = "0x584E320", VA = "0x584F320")]
	public void Select(bool multi)
	{
	}

	[Token(Token = "0x60016F7")]
	[Address(RVA = "0x584F360", Offset = "0x584E360", VA = "0x584F360")]
	private void SelectAt(bool multi, Vector3 position, bool isUI)
	{
	}

	[Token(Token = "0x60016F8")]
	[Address(RVA = "0x584C7B0", Offset = "0x584B7B0", VA = "0x584C7B0")]
	public void DeselectAll()
	{
	}

	[Token(Token = "0x60016F9")]
	[Address(RVA = "0x584FE70", Offset = "0x584EE70", VA = "0x584FE70")]
	public void DeselectObject(MapObject obj)
	{
	}

	[Token(Token = "0x60016FA")]
	[Address(RVA = "0x584C940", Offset = "0x584B940", VA = "0x584C940")]
	public void SelectObject(MapObject obj)
	{
	}

	[Token(Token = "0x60016FB")]
	[Address(RVA = "0x584FF30", Offset = "0x584EF30", VA = "0x584FF30")]
	public void SetHierarchyTreeView(bool enabled)
	{
	}

	[Token(Token = "0x60016FC")]
	[Address(RVA = "0x584FF40", Offset = "0x584EF40", VA = "0x584FF40")]
	public List<MapObject> GetSelectedObjectsForTransformCommand()
	{
		return null;
	}

	[Token(Token = "0x60016FD")]
	[Address(RVA = "0x5850610", Offset = "0x584F610", VA = "0x5850610")]
	public void ReparentObjects(List<int> ids, int newParentId)
	{
	}

	[Token(Token = "0x60016FE")]
	[Address(RVA = "0x5851180", Offset = "0x5850180", VA = "0x5851180")]
	public void ReorderObjects(List<int> ids, int anchorId, bool insertAfter, bool inTreeView)
	{
	}

	[Token(Token = "0x60016FF")]
	[Address(RVA = "0x58503C0", Offset = "0x584F3C0", VA = "0x58503C0")]
	private void AddDescendants(int id, HashSet<int> ids)
	{
	}

	[Token(Token = "0x6001700")]
	[Address(RVA = "0x5851010", Offset = "0x5850010", VA = "0x5851010")]
	private bool IsDescendant(int id, int ancestorId)
	{
		return default(bool);
	}

	[Token(Token = "0x6001701")]
	[Address(RVA = "0x5850DD0", Offset = "0x584FDD0", VA = "0x5850DD0")]
	private bool HasAncestorInSet(int id, HashSet<int> ids)
	{
		return default(bool);
	}

	[Token(Token = "0x6001702")]
	[Address(RVA = "0x5851420", Offset = "0x5850420", VA = "0x5851420")]
	public void SetupTemporaryPhysicalParenting()
	{
	}

	[Token(Token = "0x6001703")]
	[Address(RVA = "0x5851760", Offset = "0x5850760", VA = "0x5851760")]
	public void TeardownTemporaryPhysicalParenting()
	{
	}

	[Token(Token = "0x6001704")]
	[Address(RVA = "0x584C610", Offset = "0x584B610", VA = "0x584C610")]
	public void NewCommand(BaseCommand command, bool syncInspector = true)
	{
	}

	[Token(Token = "0x6001705")]
	[Address(RVA = "0x5851A30", Offset = "0x5850A30", VA = "0x5851A30", Slot = "57")]
	protected override void OnFinishLoading()
	{
	}

	[Token(Token = "0x6001706")]
	[Address(RVA = "0x5852030", Offset = "0x5851030", VA = "0x5852030", Slot = "54")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6001707")]
	[Address(RVA = "0x5851FC0", Offset = "0x5850FC0", VA = "0x5851FC0")]
	[IteratorStateMachine(typeof(_003CWaitAndAutosave_003Ed__57))]
	private IEnumerator WaitAndAutosave()
	{
		return null;
	}

	[Token(Token = "0x6001708")]
	[Address(RVA = "0x58520B0", Offset = "0x58510B0", VA = "0x58520B0")]
	protected void Update()
	{
	}

	[Token(Token = "0x6001709")]
	[Address(RVA = "0x5852760", Offset = "0x5851760", VA = "0x5852760")]
	protected void UpdateBrush()
	{
	}

	[Token(Token = "0x600170A")]
	[Address(RVA = "0x5853580", Offset = "0x5852580", VA = "0x5853580")]
	private void PlaceBrush()
	{
	}

	[Token(Token = "0x600170B")]
	[Address(RVA = "0x5853670", Offset = "0x5852670", VA = "0x5853670")]
	public void ToggleBrush()
	{
	}

	[Token(Token = "0x600170C")]
	[Address(RVA = "0x5853050", Offset = "0x5852050", VA = "0x5853050")]
	protected void UpdateDrag()
	{
	}

	[Token(Token = "0x600170D")]
	[Address(RVA = "0x5852150", Offset = "0x5851150", VA = "0x5852150")]
	protected void UpdateInput()
	{
	}

	[Token(Token = "0x600170E")]
	[Address(RVA = "0x58536E0", Offset = "0x58526E0", VA = "0x58536E0")]
	public void Save()
	{
	}

	[Token(Token = "0x600170F")]
	[Address(RVA = "0x584C9B0", Offset = "0x584B9B0", VA = "0x584C9B0")]
	public void OnSelectionChange(bool focusHierarchy = true)
	{
	}

	[Token(Token = "0x6001710")]
	[Address(RVA = "0x5853710", Offset = "0x5852710", VA = "0x5853710")]
	public void SyncGizmos()
	{
	}

	[Token(Token = "0x6001711")]
	[Address(RVA = "0x5853790", Offset = "0x5852790", VA = "0x5853790")]
	public void SetGizmo(string gizmo)
	{
	}

	[Token(Token = "0x6001712")]
	[Address(RVA = "0x5853830", Offset = "0x5852830", VA = "0x5853830")]
	public void SetGizmoMode(GizmoMode mode)
	{
	}

	[Token(Token = "0x6001713")]
	[Address(RVA = "0x5853840", Offset = "0x5852840", VA = "0x5853840")]
	public void SetGridAxes(HashSet<int> axes)
	{
	}

	[Token(Token = "0x6001714")]
	[Address(RVA = "0x5853BE0", Offset = "0x5852BE0", VA = "0x5853BE0")]
	public int GetNextObjectId()
	{
		return default(int);
	}

	[Token(Token = "0x6001715")]
	[Address(RVA = "0x5851E40", Offset = "0x5850E40", VA = "0x5851E40")]
	protected int GetHighestObjectId()
	{
		return default(int);
	}

	[Token(Token = "0x6001717")]
	private T TryGetSetting<T>(Dictionary<string, BaseSetting> settings, string key, T Default) where T : BaseSetting
	{
		return null;
	}

	[Token(Token = "0x6001718")]
	[Address(RVA = "0x5853C00", Offset = "0x5852C00", VA = "0x5853C00")]
	public void ToggleLights()
	{
	}

	[Token(Token = "0x6001719")]
	[Address(RVA = "0x58545E0", Offset = "0x58535E0", VA = "0x58545E0")]
	public void SetLayerVisibility(HashSetSetting<int> selectedLayers)
	{
	}

	[Token(Token = "0x600171A")]
	[Address(RVA = "0x5854BA0", Offset = "0x5853BA0", VA = "0x5854BA0")]
	public MapEditorGameManager()
	{
	}
}
