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

[Token(Token = "0x2000335")]
internal class MapEditorGameManager : BaseGameManager
{
	[Token(Token = "0x200033A")]
	[CompilerGenerated]
	private sealed class _003CWaitAndAutosave_003Ed__53 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40010AB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40010AC")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40010AD")]
		[FieldOffset(Offset = "0x20")]
		public MapEditorGameManager _003C_003E4__this;

		[Token(Token = "0x1700023B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60014B7")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700023C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60014B9")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60014B4")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndAutosave_003Ed__53(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60014B5")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60014B6")]
		[Address(RVA = "0x1E7BD60", Offset = "0x1E7A360", VA = "0x181E7BD60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60014B8")]
		[Address(RVA = "0x1E7BE20", Offset = "0x1E7A420", VA = "0x181E7BE20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001081")]
	[FieldOffset(Offset = "0x28")]
	public MapScript MapScript;

	[Token(Token = "0x4001082")]
	[FieldOffset(Offset = "0x30")]
	public CustomLogicEvaluator LogicEvaluator;

	[Token(Token = "0x4001083")]
	[FieldOffset(Offset = "0x38")]
	public HashSet<MapObject> SelectedObjects;

	[Token(Token = "0x4001084")]
	[FieldOffset(Offset = "0x40")]
	public BaseGizmo CurrentGizmo;

	[Token(Token = "0x4001085")]
	[FieldOffset(Offset = "0x48")]
	public GizmoMode CurrentGizmoMode;

	[Token(Token = "0x4001086")]
	[FieldOffset(Offset = "0x4C")]
	public bool Snap;

	[Token(Token = "0x4001087")]
	[FieldOffset(Offset = "0x4D")]
	public bool HierarchyTreeViewEnabled;

	[Token(Token = "0x4001088")]
	[FieldOffset(Offset = "0x50")]
	public int LastSelectedObjectId;

	[Token(Token = "0x4001089")]
	[FieldOffset(Offset = "0x58")]
	private List<BaseCommand> _undoCommands;

	[Token(Token = "0x400108A")]
	[FieldOffset(Offset = "0x60")]
	private List<BaseCommand> _redoCommands;

	[Token(Token = "0x400108B")]
	[FieldOffset(Offset = "0x68")]
	private string _clipboard;

	[Token(Token = "0x400108C")]
	[FieldOffset(Offset = "0x70")]
	private MapEditorMenu _menu;

	[Token(Token = "0x400108D")]
	[FieldOffset(Offset = "0x78")]
	private MapEditorInputSettings _input;

	[Token(Token = "0x400108E")]
	[FieldOffset(Offset = "0x80")]
	public PositionGizmo _positionGizmo;

	[Token(Token = "0x400108F")]
	[FieldOffset(Offset = "0x88")]
	public RotationGizmo _rotationGizmo;

	[Token(Token = "0x4001090")]
	[FieldOffset(Offset = "0x90")]
	public ScaleGizmo _scaleGizmo;

	[Token(Token = "0x4001091")]
	[FieldOffset(Offset = "0x98")]
	private OutlineGizmo _outlineGizmo;

	[Token(Token = "0x4001092")]
	[FieldOffset(Offset = "0xA0")]
	public MapEditorBrush Brush;

	[Token(Token = "0x4001093")]
	[FieldOffset(Offset = "0xA8")]
	public MapEditorRuler Ruler;

	[Token(Token = "0x4001094")]
	[FieldOffset(Offset = "0xB0")]
	private MapEditorSceneGrid _sceneGrid;

	[Token(Token = "0x4001095")]
	[FieldOffset(Offset = "0xB8")]
	private int _currentObjectId;

	[Token(Token = "0x4001096")]
	[FieldOffset(Offset = "0xBC")]
	public bool IgnoreNextSelect;

	[Token(Token = "0x4001097")]
	[FieldOffset(Offset = "0xBD")]
	private bool _isDrag;

	[Token(Token = "0x4001098")]
	[FieldOffset(Offset = "0xC0")]
	private Vector3 _dragStart;

	[Token(Token = "0x4001099")]
	[FieldOffset(Offset = "0xCC")]
	private bool _lightsOn;

	[Token(Token = "0x1700023A")]
	public bool LightsOn
	{
		[Token(Token = "0x600149B")]
		[Address(RVA = "0x1E71150", Offset = "0x1E6F750", VA = "0x181E71150")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600146F")]
	[Address(RVA = "0x1E6B980", Offset = "0x1E69F80", VA = "0x181E6B980", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6001470")]
	[Address(RVA = "0x1E6EA50", Offset = "0x1E6D050", VA = "0x181E6EA50")]
	public void ShowAddObject()
	{
	}

	[Token(Token = "0x6001471")]
	[Address(RVA = "0x1E68F20", Offset = "0x1E67520", VA = "0x181E68F20")]
	public void AddObject(string name)
	{
	}

	[Token(Token = "0x6001472")]
	[Address(RVA = "0x1E6F8A0", Offset = "0x1E6DEA0", VA = "0x181E6F8A0")]
	public void Undo()
	{
	}

	[Token(Token = "0x6001473")]
	[Address(RVA = "0x1E6C650", Offset = "0x1E6AC50", VA = "0x181E6C650")]
	public void Redo()
	{
	}

	[Token(Token = "0x6001474")]
	[Address(RVA = "0x1E69840", Offset = "0x1E67E40", VA = "0x181E69840")]
	public void Copy()
	{
	}

	[Token(Token = "0x6001475")]
	[Address(RVA = "0x1E6BDF0", Offset = "0x1E6A3F0", VA = "0x181E6BDF0")]
	public void Paste()
	{
	}

	[Token(Token = "0x6001476")]
	[Address(RVA = "0x1E6BD50", Offset = "0x1E6A350", VA = "0x181E6BD50")]
	public void PasteAsChild(int parentId)
	{
	}

	[Token(Token = "0x6001477")]
	[Address(RVA = "0x1E6BE00", Offset = "0x1E6A400", VA = "0x181E6BE00")]
	private void Paste(int parentId)
	{
	}

	[Token(Token = "0x6001478")]
	[Address(RVA = "0x1E69FB0", Offset = "0x1E685B0", VA = "0x181E69FB0")]
	public void CreateEmptyParent(int contextId)
	{
	}

	[Token(Token = "0x6001479")]
	[Address(RVA = "0x1E6D130", Offset = "0x1E6B730", VA = "0x181E6D130")]
	public void ResetOrigin()
	{
	}

	[Token(Token = "0x600147A")]
	[Address(RVA = "0x1E6A700", Offset = "0x1E68D00", VA = "0x181E6A700")]
	public void Cut()
	{
	}

	[Token(Token = "0x600147B")]
	[Address(RVA = "0x1E6A720", Offset = "0x1E68D20", VA = "0x181E6A720")]
	public void Delete()
	{
	}

	[Token(Token = "0x600147C")]
	[Address(RVA = "0x1E6D710", Offset = "0x1E6BD10", VA = "0x181E6D710")]
	public void Select(bool multi)
	{
	}

	[Token(Token = "0x600147D")]
	[Address(RVA = "0x1E6A830", Offset = "0x1E68E30", VA = "0x181E6A830")]
	public void DeselectAll()
	{
	}

	[Token(Token = "0x600147E")]
	[Address(RVA = "0x1E6A9A0", Offset = "0x1E68FA0", VA = "0x181E6A9A0")]
	public void DeselectObject(MapObject obj)
	{
	}

	[Token(Token = "0x600147F")]
	[Address(RVA = "0x1E6D6A0", Offset = "0x1E6BCA0", VA = "0x181E6D6A0")]
	public void SelectObject(MapObject obj)
	{
	}

	[Token(Token = "0x6001480")]
	[Address(RVA = "0x1E6E1F0", Offset = "0x1E6C7F0", VA = "0x181E6E1F0")]
	public void SetHierarchyTreeView(bool enabled)
	{
	}

	[Token(Token = "0x6001481")]
	[Address(RVA = "0x1E6AC00", Offset = "0x1E69200", VA = "0x181E6AC00")]
	public List<MapObject> GetSelectedObjectsForTransformCommand()
	{
		return null;
	}

	[Token(Token = "0x6001482")]
	[Address(RVA = "0x1E6CB00", Offset = "0x1E6B100", VA = "0x181E6CB00")]
	public void ReparentObjects(List<int> ids, int newParentId)
	{
	}

	[Token(Token = "0x6001483")]
	[Address(RVA = "0x1E6C860", Offset = "0x1E6AE60", VA = "0x181E6C860")]
	public void ReorderObjects(List<int> ids, int anchorId, bool insertAfter, bool inTreeView)
	{
	}

	[Token(Token = "0x6001484")]
	[Address(RVA = "0x1E68D30", Offset = "0x1E67330", VA = "0x181E68D30")]
	private void AddDescendants(int id, HashSet<int> ids)
	{
	}

	[Token(Token = "0x6001485")]
	[Address(RVA = "0x1E6B1F0", Offset = "0x1E697F0", VA = "0x181E6B1F0")]
	private bool IsDescendant(int id, int ancestorId)
	{
		return default(bool);
	}

	[Token(Token = "0x6001486")]
	[Address(RVA = "0x1E6B040", Offset = "0x1E69640", VA = "0x181E6B040")]
	private bool HasAncestorInSet(int id, HashSet<int> ids)
	{
		return default(bool);
	}

	[Token(Token = "0x6001487")]
	[Address(RVA = "0x1E6E740", Offset = "0x1E6CD40", VA = "0x181E6E740")]
	public void SetupTemporaryPhysicalParenting()
	{
	}

	[Token(Token = "0x6001488")]
	[Address(RVA = "0x1E6EB40", Offset = "0x1E6D140", VA = "0x181E6EB40")]
	public void TeardownTemporaryPhysicalParenting()
	{
	}

	[Token(Token = "0x6001489")]
	[Address(RVA = "0x1E6B370", Offset = "0x1E69970", VA = "0x181E6B370")]
	public void NewCommand(BaseCommand command, bool syncInspector = true)
	{
	}

	[Token(Token = "0x600148A")]
	[Address(RVA = "0x1E6B540", Offset = "0x1E69B40", VA = "0x181E6B540", Slot = "57")]
	protected override void OnFinishLoading()
	{
	}

	[Token(Token = "0x600148B")]
	[Address(RVA = "0x1E697D0", Offset = "0x1E67DD0", VA = "0x181E697D0", Slot = "54")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600148C")]
	[Address(RVA = "0x1E70F50", Offset = "0x1E6F550", VA = "0x181E70F50")]
	[IteratorStateMachine(typeof(_003CWaitAndAutosave_003Ed__53))]
	private IEnumerator WaitAndAutosave()
	{
		return null;
	}

	[Token(Token = "0x600148D")]
	[Address(RVA = "0x1E70F00", Offset = "0x1E6F500", VA = "0x181E70F00")]
	protected void Update()
	{
	}

	[Token(Token = "0x600148E")]
	[Address(RVA = "0x1E6FAB0", Offset = "0x1E6E0B0", VA = "0x181E6FAB0")]
	protected void UpdateBrush()
	{
	}

	[Token(Token = "0x600148F")]
	[Address(RVA = "0x1E6C550", Offset = "0x1E6AB50", VA = "0x181E6C550")]
	private void PlaceBrush()
	{
	}

	[Token(Token = "0x6001490")]
	[Address(RVA = "0x1E6EDD0", Offset = "0x1E6D3D0", VA = "0x181E6EDD0")]
	public void ToggleBrush()
	{
	}

	[Token(Token = "0x6001491")]
	[Address(RVA = "0x1E70540", Offset = "0x1E6EB40", VA = "0x181E70540")]
	protected void UpdateDrag()
	{
	}

	[Token(Token = "0x6001492")]
	[Address(RVA = "0x1E708D0", Offset = "0x1E6EED0", VA = "0x181E708D0")]
	protected void UpdateInput()
	{
	}

	[Token(Token = "0x6001493")]
	[Address(RVA = "0x1E6D670", Offset = "0x1E6BC70", VA = "0x181E6D670")]
	public void Save()
	{
	}

	[Token(Token = "0x6001494")]
	[Address(RVA = "0x1E6B9C0", Offset = "0x1E69FC0", VA = "0x181E6B9C0")]
	public void OnSelectionChange(bool focusHierarchy = true)
	{
	}

	[Token(Token = "0x6001495")]
	[Address(RVA = "0x1E6EAB0", Offset = "0x1E6D0B0", VA = "0x181E6EAB0")]
	public void SyncGizmos()
	{
	}

	[Token(Token = "0x6001496")]
	[Address(RVA = "0x1E6DF80", Offset = "0x1E6C580", VA = "0x181E6DF80")]
	public void SetGizmo(string gizmo)
	{
	}

	[Token(Token = "0x6001497")]
	[Address(RVA = "0x1E6DF70", Offset = "0x1E6C570", VA = "0x181E6DF70")]
	public void SetGizmoMode(GizmoMode mode)
	{
	}

	[Token(Token = "0x6001498")]
	[Address(RVA = "0x1E6E030", Offset = "0x1E6C630", VA = "0x181E6E030")]
	public void SetGridAxes(HashSet<int> axes)
	{
	}

	[Token(Token = "0x6001499")]
	[Address(RVA = "0x1E6ABF0", Offset = "0x1E691F0", VA = "0x181E6ABF0")]
	public int GetNextObjectId()
	{
		return default(int);
	}

	[Token(Token = "0x600149A")]
	[Address(RVA = "0x1E6AA70", Offset = "0x1E69070", VA = "0x181E6AA70")]
	protected int GetHighestObjectId()
	{
		return default(int);
	}

	[Token(Token = "0x600149C")]
	private T TryGetSetting<T>(Dictionary<string, BaseSetting> settings, string key, T Default) where T : BaseSetting
	{
		return null;
	}

	[Token(Token = "0x600149D")]
	[Address(RVA = "0x1E6EE50", Offset = "0x1E6D450", VA = "0x181E6EE50")]
	public void ToggleLights()
	{
	}

	[Token(Token = "0x600149E")]
	[Address(RVA = "0x1E6E200", Offset = "0x1E6C800", VA = "0x181E6E200")]
	public void SetLayerVisibility(HashSetSetting<int> selectedLayers)
	{
	}

	[Token(Token = "0x600149F")]
	[Address(RVA = "0x1E70FC0", Offset = "0x1E6F5C0", VA = "0x181E70FC0")]
	public MapEditorGameManager()
	{
	}
}
