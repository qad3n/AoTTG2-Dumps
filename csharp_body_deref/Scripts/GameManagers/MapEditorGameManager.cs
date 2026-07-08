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

[Token(Token = "0x20001ED")]
internal class MapEditorGameManager : BaseGameManager
{
	[Token(Token = "0x20001EE")]
	[CompilerGenerated]
	private sealed class _003CWaitAndAutosave_003Ed__35 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000AD6")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000AD7")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000AD8")]
		[FieldOffset(Offset = "0x20")]
		public MapEditorGameManager _003C_003E4__this;

		[Token(Token = "0x1700014F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000BE9")]
			[Address(RVA = "0x4139FE0", Offset = "0x4139FE0", VA = "0x4139FE0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000150")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BEB")]
			[Address(RVA = "0x413A030", Offset = "0x413A030", VA = "0x413A030", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000BE6")]
		[Address(RVA = "0x4137AE0", Offset = "0x4137AE0", VA = "0x4137AE0")]
		[DebuggerHidden]
		public _003CWaitAndAutosave_003Ed__35(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000BE7")]
		[Address(RVA = "0x4139F10", Offset = "0x4139F10", VA = "0x4139F10", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000BE8")]
		[Address(RVA = "0x4139F20", Offset = "0x4139F20", VA = "0x4139F20", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BEA")]
		[Address(RVA = "0x4139FF0", Offset = "0x4139FF0", VA = "0x4139FF0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000AC1")]
	[FieldOffset(Offset = "0x28")]
	public MapScript MapScript;

	[Token(Token = "0x4000AC2")]
	[FieldOffset(Offset = "0x30")]
	public CustomLogicEvaluator LogicEvaluator;

	[Token(Token = "0x4000AC3")]
	[FieldOffset(Offset = "0x38")]
	public HashSet<MapObject> SelectedObjects;

	[Token(Token = "0x4000AC4")]
	[FieldOffset(Offset = "0x40")]
	public BaseGizmo CurrentGizmo;

	[Token(Token = "0x4000AC5")]
	[FieldOffset(Offset = "0x48")]
	public GizmoMode CurrentGizmoMode;

	[Token(Token = "0x4000AC6")]
	[FieldOffset(Offset = "0x4C")]
	public bool Snap;

	[Token(Token = "0x4000AC7")]
	[FieldOffset(Offset = "0x50")]
	private List<BaseCommand> _undoCommands;

	[Token(Token = "0x4000AC8")]
	[FieldOffset(Offset = "0x58")]
	private List<BaseCommand> _redoCommands;

	[Token(Token = "0x4000AC9")]
	[FieldOffset(Offset = "0x60")]
	private string _clipboard;

	[Token(Token = "0x4000ACA")]
	[FieldOffset(Offset = "0x68")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4000ACB")]
	[FieldOffset(Offset = "0x70")]
	private MapEditorInputSettings _input;

	[Token(Token = "0x4000ACC")]
	[FieldOffset(Offset = "0x78")]
	public PositionGizmo _positionGizmo;

	[Token(Token = "0x4000ACD")]
	[FieldOffset(Offset = "0x80")]
	public RotationGizmo _rotationGizmo;

	[Token(Token = "0x4000ACE")]
	[FieldOffset(Offset = "0x88")]
	public ScaleGizmo _scaleGizmo;

	[Token(Token = "0x4000ACF")]
	[FieldOffset(Offset = "0x90")]
	private OutlineGizmo _outlineGizmo;

	[Token(Token = "0x4000AD0")]
	[FieldOffset(Offset = "0x98")]
	public MapEditorBrush Brush;

	[Token(Token = "0x4000AD1")]
	[FieldOffset(Offset = "0xA0")]
	private int _currentObjectId;

	[Token(Token = "0x4000AD2")]
	[FieldOffset(Offset = "0xA4")]
	public bool IgnoreNextSelect;

	[Token(Token = "0x4000AD3")]
	[FieldOffset(Offset = "0xA5")]
	private bool _isDrag;

	[Token(Token = "0x4000AD4")]
	[FieldOffset(Offset = "0xA8")]
	private Vector3 _dragStart;

	[Token(Token = "0x4000AD5")]
	[FieldOffset(Offset = "0xB4")]
	private bool _lightsOn;

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x4134C30", Offset = "0x4134C30", VA = "0x4134C30")]
	public void ShowAddObject()
	{
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x4134C90", Offset = "0x4134C90", VA = "0x4134C90")]
	public void AddObject(string name)
	{
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x4135EA0", Offset = "0x4135EA0", VA = "0x4135EA0")]
	public void Undo()
	{
	}

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x4136060", Offset = "0x4136060", VA = "0x4136060")]
	public void Redo()
	{
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x4136220", Offset = "0x4136220", VA = "0x4136220")]
	public void Copy()
	{
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x41364D0", Offset = "0x41364D0", VA = "0x41364D0")]
	public void Paste()
	{
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x41367F0", Offset = "0x41367F0", VA = "0x41367F0")]
	public void Cut()
	{
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x4136800", Offset = "0x4136800", VA = "0x4136800")]
	public void Delete()
	{
	}

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x41368E0", Offset = "0x41368E0", VA = "0x41368E0")]
	public void Select(bool multi)
	{
	}

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x41358D0", Offset = "0x41358D0", VA = "0x41358D0")]
	public void DeselectAll()
	{
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x41374E0", Offset = "0x41374E0", VA = "0x41374E0")]
	public void DeselectObject(MapObject obj)
	{
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x4135AA0", Offset = "0x4135AA0", VA = "0x4135AA0")]
	public void SelectObject(MapObject obj)
	{
	}

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x4135720", Offset = "0x4135720", VA = "0x4135720")]
	public void NewCommand(BaseCommand command, bool syncInspector = true)
	{
	}

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x4137530", Offset = "0x4137530", VA = "0x4137530", Slot = "57")]
	protected override void OnFinishLoading()
	{
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x4137A80", Offset = "0x4137A80", VA = "0x4137A80", Slot = "54")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x4137A10", Offset = "0x4137A10", VA = "0x4137A10")]
	[IteratorStateMachine(typeof(_003CWaitAndAutosave_003Ed__35))]
	private IEnumerator WaitAndAutosave()
	{
		return null;
	}

	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x4137B00", Offset = "0x4137B00", VA = "0x4137B00")]
	protected void Update()
	{
	}

	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x4137FA0", Offset = "0x4137FA0", VA = "0x4137FA0")]
	protected void UpdateBrush()
	{
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x4138A10", Offset = "0x4138A10", VA = "0x4138A10")]
	private void PlaceBrush()
	{
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x4138AF0", Offset = "0x4138AF0", VA = "0x4138AF0")]
	public void ToggleBrush()
	{
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x4138730", Offset = "0x4138730", VA = "0x4138730")]
	protected void UpdateDrag()
	{
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x4137B20", Offset = "0x4137B20", VA = "0x4137B20")]
	protected void UpdateInput()
	{
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x4138B60", Offset = "0x4138B60", VA = "0x4138B60")]
	public void Save()
	{
	}

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x4135AF0", Offset = "0x4135AF0", VA = "0x4135AF0")]
	public void OnSelectionChange()
	{
	}

	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x4138B90", Offset = "0x4138B90", VA = "0x4138B90")]
	public void SyncGizmos()
	{
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x4138C10", Offset = "0x4138C10", VA = "0x4138C10")]
	public void SetGizmo(string gizmo)
	{
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x4138CB0", Offset = "0x4138CB0", VA = "0x4138CB0")]
	public void SetGizmoMode(GizmoMode mode)
	{
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x4138CC0", Offset = "0x4138CC0", VA = "0x4138CC0")]
	public int GetNextObjectId()
	{
		return default(int);
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x4137890", Offset = "0x4137890", VA = "0x4137890")]
	protected int GetHighestObjectId()
	{
		return default(int);
	}

	[Token(Token = "0x6000BE2")]
	private T TryGetSetting<T>(Dictionary<string, BaseSetting> settings, string key, T Default) where T : BaseSetting
	{
		return null;
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x4138CD0", Offset = "0x4138CD0", VA = "0x4138CD0")]
	public void ToggleLights()
	{
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x41398E0", Offset = "0x41398E0", VA = "0x41398E0")]
	public void SetLayerVisibility(HashSetSetting<int> selectedLayers)
	{
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x4139DB0", Offset = "0x4139DB0", VA = "0x4139DB0")]
	public MapEditorGameManager()
	{
	}
}
