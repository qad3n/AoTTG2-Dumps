// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.MapEditorGameManager
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000223")]
internal class MapEditorGameManager : BaseGameManager
{
	[Token(Token = "0x2000224")]
	[CompilerGenerated]
	private sealed class _003CWaitAndAutosave_003Ed__35 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000BAF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000BB0")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000BB1")]
		[FieldOffset(Offset = "0x20")]
		public MapEditorGameManager _003C_003E4__this;

		[Token(Token = "0x170001A6")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000D7E")]
			[Address(RVA = "0x446EA10", Offset = "0x446EA10", VA = "0x446EA10", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001A7")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D80")]
			[Address(RVA = "0x446EA60", Offset = "0x446EA60", VA = "0x446EA60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D7B")]
		[Address(RVA = "0x446C510", Offset = "0x446C510", VA = "0x446C510")]
		[DebuggerHidden]
		public _003CWaitAndAutosave_003Ed__35(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D7C")]
		[Address(RVA = "0x446E940", Offset = "0x446E940", VA = "0x446E940", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D7D")]
		[Address(RVA = "0x446E950", Offset = "0x446E950", VA = "0x446E950", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D7F")]
		[Address(RVA = "0x446EA20", Offset = "0x446EA20", VA = "0x446EA20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000B9A")]
	[FieldOffset(Offset = "0x28")]
	public MapScript MapScript;

	[Token(Token = "0x4000B9B")]
	[FieldOffset(Offset = "0x30")]
	public CustomLogicEvaluator LogicEvaluator;

	[Token(Token = "0x4000B9C")]
	[FieldOffset(Offset = "0x38")]
	public HashSet<MapObject> SelectedObjects;

	[Token(Token = "0x4000B9D")]
	[FieldOffset(Offset = "0x40")]
	public BaseGizmo CurrentGizmo;

	[Token(Token = "0x4000B9E")]
	[FieldOffset(Offset = "0x48")]
	public GizmoMode CurrentGizmoMode;

	[Token(Token = "0x4000B9F")]
	[FieldOffset(Offset = "0x4C")]
	public bool Snap;

	[Token(Token = "0x4000BA0")]
	[FieldOffset(Offset = "0x50")]
	private List<BaseCommand> _undoCommands;

	[Token(Token = "0x4000BA1")]
	[FieldOffset(Offset = "0x58")]
	private List<BaseCommand> _redoCommands;

	[Token(Token = "0x4000BA2")]
	[FieldOffset(Offset = "0x60")]
	private string _clipboard;

	[Token(Token = "0x4000BA3")]
	[FieldOffset(Offset = "0x68")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4000BA4")]
	[FieldOffset(Offset = "0x70")]
	private MapEditorInputSettings _input;

	[Token(Token = "0x4000BA5")]
	[FieldOffset(Offset = "0x78")]
	public PositionGizmo _positionGizmo;

	[Token(Token = "0x4000BA6")]
	[FieldOffset(Offset = "0x80")]
	public RotationGizmo _rotationGizmo;

	[Token(Token = "0x4000BA7")]
	[FieldOffset(Offset = "0x88")]
	public ScaleGizmo _scaleGizmo;

	[Token(Token = "0x4000BA8")]
	[FieldOffset(Offset = "0x90")]
	private OutlineGizmo _outlineGizmo;

	[Token(Token = "0x4000BA9")]
	[FieldOffset(Offset = "0x98")]
	public MapEditorBrush Brush;

	[Token(Token = "0x4000BAA")]
	[FieldOffset(Offset = "0xA0")]
	private int _currentObjectId;

	[Token(Token = "0x4000BAB")]
	[FieldOffset(Offset = "0xA4")]
	public bool IgnoreNextSelect;

	[Token(Token = "0x4000BAC")]
	[FieldOffset(Offset = "0xA5")]
	private bool _isDrag;

	[Token(Token = "0x4000BAD")]
	[FieldOffset(Offset = "0xA8")]
	private Vector3 _dragStart;

	[Token(Token = "0x4000BAE")]
	[FieldOffset(Offset = "0xB4")]
	private bool _lightsOn;

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x4469660", Offset = "0x4469660", VA = "0x4469660")]
	public void ShowAddObject()
	{
	}

	[Token(Token = "0x6000D5B")]
	[Address(RVA = "0x44696C0", Offset = "0x44696C0", VA = "0x44696C0")]
	public void AddObject(string name)
	{
	}

	[Token(Token = "0x6000D5C")]
	[Address(RVA = "0x446A8D0", Offset = "0x446A8D0", VA = "0x446A8D0")]
	public void Undo()
	{
	}

	[Token(Token = "0x6000D5D")]
	[Address(RVA = "0x446AA90", Offset = "0x446AA90", VA = "0x446AA90")]
	public void Redo()
	{
	}

	[Token(Token = "0x6000D5E")]
	[Address(RVA = "0x446AC50", Offset = "0x446AC50", VA = "0x446AC50")]
	public void Copy()
	{
	}

	[Token(Token = "0x6000D5F")]
	[Address(RVA = "0x446AF00", Offset = "0x446AF00", VA = "0x446AF00")]
	public void Paste()
	{
	}

	[Token(Token = "0x6000D60")]
	[Address(RVA = "0x446B220", Offset = "0x446B220", VA = "0x446B220")]
	public void Cut()
	{
	}

	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x446B230", Offset = "0x446B230", VA = "0x446B230")]
	public void Delete()
	{
	}

	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x446B310", Offset = "0x446B310", VA = "0x446B310")]
	public void Select(bool multi)
	{
	}

	[Token(Token = "0x6000D63")]
	[Address(RVA = "0x446A300", Offset = "0x446A300", VA = "0x446A300")]
	public void DeselectAll()
	{
	}

	[Token(Token = "0x6000D64")]
	[Address(RVA = "0x446BF10", Offset = "0x446BF10", VA = "0x446BF10")]
	public void DeselectObject(MapObject obj)
	{
	}

	[Token(Token = "0x6000D65")]
	[Address(RVA = "0x446A4D0", Offset = "0x446A4D0", VA = "0x446A4D0")]
	public void SelectObject(MapObject obj)
	{
	}

	[Token(Token = "0x6000D66")]
	[Address(RVA = "0x446A150", Offset = "0x446A150", VA = "0x446A150")]
	public void NewCommand(BaseCommand command, bool syncInspector = true)
	{
	}

	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x446BF60", Offset = "0x446BF60", VA = "0x446BF60", Slot = "57")]
	protected override void OnFinishLoading()
	{
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x446C4B0", Offset = "0x446C4B0", VA = "0x446C4B0", Slot = "54")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x446C440", Offset = "0x446C440", VA = "0x446C440")]
	[IteratorStateMachine(typeof(_003CWaitAndAutosave_003Ed__35))]
	private IEnumerator WaitAndAutosave()
	{
		return null;
	}

	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x446C530", Offset = "0x446C530", VA = "0x446C530")]
	protected void Update()
	{
	}

	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x446C9D0", Offset = "0x446C9D0", VA = "0x446C9D0")]
	protected void UpdateBrush()
	{
	}

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x446D440", Offset = "0x446D440", VA = "0x446D440")]
	private void PlaceBrush()
	{
	}

	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x446D520", Offset = "0x446D520", VA = "0x446D520")]
	public void ToggleBrush()
	{
	}

	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x446D160", Offset = "0x446D160", VA = "0x446D160")]
	protected void UpdateDrag()
	{
	}

	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x446C550", Offset = "0x446C550", VA = "0x446C550")]
	protected void UpdateInput()
	{
	}

	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x446D590", Offset = "0x446D590", VA = "0x446D590")]
	public void Save()
	{
	}

	[Token(Token = "0x6000D71")]
	[Address(RVA = "0x446A520", Offset = "0x446A520", VA = "0x446A520")]
	public void OnSelectionChange()
	{
	}

	[Token(Token = "0x6000D72")]
	[Address(RVA = "0x446D5C0", Offset = "0x446D5C0", VA = "0x446D5C0")]
	public void SyncGizmos()
	{
	}

	[Token(Token = "0x6000D73")]
	[Address(RVA = "0x446D640", Offset = "0x446D640", VA = "0x446D640")]
	public void SetGizmo(string gizmo)
	{
	}

	[Token(Token = "0x6000D74")]
	[Address(RVA = "0x446D6E0", Offset = "0x446D6E0", VA = "0x446D6E0")]
	public void SetGizmoMode(GizmoMode mode)
	{
	}

	[Token(Token = "0x6000D75")]
	[Address(RVA = "0x446D6F0", Offset = "0x446D6F0", VA = "0x446D6F0")]
	public int GetNextObjectId()
	{
		return default(int);
	}

	[Token(Token = "0x6000D76")]
	[Address(RVA = "0x446C2C0", Offset = "0x446C2C0", VA = "0x446C2C0")]
	protected int GetHighestObjectId()
	{
		return default(int);
	}

	[Token(Token = "0x6000D77")]
	private T TryGetSetting<T>(Dictionary<string, BaseSetting> settings, string key, T Default) where T : BaseSetting
	{
		return null;
	}

	[Token(Token = "0x6000D78")]
	[Address(RVA = "0x446D700", Offset = "0x446D700", VA = "0x446D700")]
	public void ToggleLights()
	{
	}

	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x446E310", Offset = "0x446E310", VA = "0x446E310")]
	public void SetLayerVisibility(HashSetSetting<int> selectedLayers)
	{
	}

	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x446E7E0", Offset = "0x446E7E0", VA = "0x446E7E0")]
	public MapEditorGameManager()
	{
	}
}
