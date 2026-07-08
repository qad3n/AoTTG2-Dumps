using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Map;
using Settings;
using UnityEngine;
using Utility;

namespace UI;

[Token(Token = "0x2000681")]
internal class MapEditorInspectPanel : HeadedPanel
{
	[Token(Token = "0x2000685")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnablePanel_003Ed__58 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001FE6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001FE7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001FE8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MapEditorInspectPanel _003C_003E4__this;

		[Token(Token = "0x17000CD4")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60041BF")]
			[Address(RVA = "0x4021110", Offset = "0x4021110", VA = "0x4021110", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000CD5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60041C1")]
			[Address(RVA = "0x4021160", Offset = "0x4021160", VA = "0x4021160", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60041BC")]
		[Address(RVA = "0x401B690", Offset = "0x401B690", VA = "0x401B690")]
		[DebuggerHidden]
		public _003CWaitAndEnablePanel_003Ed__58(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60041BD")]
		[Address(RVA = "0x4021040", Offset = "0x4021040", VA = "0x4021040", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60041BE")]
		[Address(RVA = "0x4021050", Offset = "0x4021050", VA = "0x4021050", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60041C0")]
		[Address(RVA = "0x4021120", Offset = "0x4021120", VA = "0x4021120", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001FBA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4001FBB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4001FBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	public MapObject _mapObject;

	[Token(Token = "0x4001FBD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	public List<MapObject> _mapObjects;

	[Token(Token = "0x4001FBE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private HashSet<string> _mixedFields;

	[Token(Token = "0x4001FBF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Dictionary<string, string> _syncedSerialized;

	[Token(Token = "0x4001FC0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private List<GameObject> _mixedNumericElements;

	[Token(Token = "0x4001FC1")]
	private const string MixedStringValue = "--";

	[Token(Token = "0x4001FC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private IntSetting _parent;

	[Token(Token = "0x4001FC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private StringSetting _name;

	[Token(Token = "0x4001FC4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private BoolSetting _active;

	[Token(Token = "0x4001FC5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private BoolSetting _static;

	[Token(Token = "0x4001FC6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private BoolSetting _networked;

	[Token(Token = "0x4001FC7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private BoolSetting _visible;

	[Token(Token = "0x4001FC8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private FloatSetting _positionX;

	[Token(Token = "0x4001FC9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private FloatSetting _positionY;

	[Token(Token = "0x4001FCA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private FloatSetting _positionZ;

	[Token(Token = "0x4001FCB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private FloatSetting _rotationX;

	[Token(Token = "0x4001FCC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private FloatSetting _rotationY;

	[Token(Token = "0x4001FCD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private FloatSetting _rotationZ;

	[Token(Token = "0x4001FCE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private FloatSetting _scaleX;

	[Token(Token = "0x4001FCF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private FloatSetting _scaleY;

	[Token(Token = "0x4001FD0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private FloatSetting _scaleZ;

	[Token(Token = "0x4001FD1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private StringSetting _collideMode;

	[Token(Token = "0x4001FD2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private StringSetting _collideWith;

	[Token(Token = "0x4001FD3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private StringSetting _physicsMaterial;

	[Token(Token = "0x4001FD4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private StringSetting _shader;

	[Token(Token = "0x4001FD5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private ColorSetting _color;

	[Token(Token = "0x4001FD6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private ColorSetting _reflectColor;

	[Token(Token = "0x4001FD7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private StringSetting _texture;

	[Token(Token = "0x4001FD8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private FloatSetting _tilingX;

	[Token(Token = "0x4001FD9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private FloatSetting _tilingY;

	[Token(Token = "0x4001FDA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private FloatSetting _offsetX;

	[Token(Token = "0x4001FDB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private FloatSetting _offsetY;

	[Token(Token = "0x4001FDC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private List<Dictionary<string, BaseSetting>> _components;

	[Token(Token = "0x4001FDD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private List<string> _componentNames;

	[Token(Token = "0x17000CCC")]
	protected override float Width
	{
		[Token(Token = "0x6004171")]
		[Address(RVA = "0x40150D0", Offset = "0x40150D0", VA = "0x40150D0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CCD")]
	protected override float Height
	{
		[Token(Token = "0x6004172")]
		[Address(RVA = "0x40150E0", Offset = "0x40150E0", VA = "0x40150E0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CCE")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004173")]
		[Address(RVA = "0x40150F0", Offset = "0x40150F0", VA = "0x40150F0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CCF")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004174")]
		[Address(RVA = "0x4015100", Offset = "0x4015100", VA = "0x4015100", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CD0")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004175")]
		[Address(RVA = "0x4015110", Offset = "0x4015110", VA = "0x4015110", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CD1")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004176")]
		[Address(RVA = "0x4015120", Offset = "0x4015120", VA = "0x4015120", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CD2")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004177")]
		[Address(RVA = "0x4015130", Offset = "0x4015130", VA = "0x4015130", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CD3")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004178")]
		[Address(RVA = "0x4015140", Offset = "0x4015140", VA = "0x4015140", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004179")]
	[Address(RVA = "0x4015150", Offset = "0x4015150", VA = "0x4015150", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600417A")]
	[Address(RVA = "0x40152F0", Offset = "0x40152F0", VA = "0x40152F0")]
	private bool HasNonConvexMeshCollider(MapObject mapObject)
	{
		return default(bool);
	}

	[Token(Token = "0x600417B")]
	[Address(RVA = "0x40153E0", Offset = "0x40153E0", VA = "0x40153E0")]
	public void CopyID()
	{
	}

	[Token(Token = "0x600417C")]
	[Address(RVA = "0x4015420", Offset = "0x4015420", VA = "0x4015420")]
	public void CopyAssetCSV()
	{
	}

	[Token(Token = "0x600417D")]
	[Address(RVA = "0x4015460", Offset = "0x4015460", VA = "0x4015460")]
	public void Show(MapObject mapObject)
	{
	}

	[Token(Token = "0x600417E")]
	[Address(RVA = "0x4015540", Offset = "0x4015540", VA = "0x4015540")]
	public void Show(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x600417F")]
	[Address(RVA = "0x401B620", Offset = "0x401B620", VA = "0x401B620")]
	[IteratorStateMachine(typeof(_003CWaitAndEnablePanel_003Ed__58))]
	private IEnumerator WaitAndEnablePanel()
	{
		return null;
	}

	[Token(Token = "0x6004180")]
	[Address(RVA = "0x401B6B0", Offset = "0x401B6B0", VA = "0x401B6B0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004181")]
	[Address(RVA = "0x401B920", Offset = "0x401B920", VA = "0x401B920")]
	private void OnAddComponent()
	{
	}

	[Token(Token = "0x6004182")]
	[Address(RVA = "0x401FB70", Offset = "0x401FB70", VA = "0x401FB70")]
	private void OnDeleteComponent(int index)
	{
	}

	[Token(Token = "0x6004183")]
	[Address(RVA = "0x401FBF0", Offset = "0x401FBF0", VA = "0x401FBF0")]
	private string SanitizeName(string name)
	{
		return null;
	}

	[Token(Token = "0x6004184")]
	[Address(RVA = "0x4018990", Offset = "0x4018990", VA = "0x4018990")]
	public void SyncSettings()
	{
	}

	[Token(Token = "0x6004185")]
	[Address(RVA = "0x401FD70", Offset = "0x401FD70", VA = "0x401FD70")]
	private static bool ColorEquals(Color255 a, Color255 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6004186")]
	[Address(RVA = "0x4019D00", Offset = "0x4019D00", VA = "0x4019D00")]
	private string[] WithMixedOption(string[] options, string fieldKey, StringSetting setting)
	{
		return null;
	}

	[Token(Token = "0x6004187")]
	[Address(RVA = "0x401ACD0", Offset = "0x401ACD0", VA = "0x401ACD0")]
	private void CaptureSyncedValues()
	{
	}

	[Token(Token = "0x6004188")]
	[Address(RVA = "0x4020210", Offset = "0x4020210", VA = "0x4020210")]
	private bool IsModified(string key, string current)
	{
		return default(bool);
	}

	[Token(Token = "0x6004189")]
	[Address(RVA = "0x4019E50", Offset = "0x4019E50", VA = "0x4019E50")]
	private void ApplyMixedIndicators()
	{
	}

	[Token(Token = "0x600418A")]
	[Address(RVA = "0x40202A0", Offset = "0x40202A0", VA = "0x40202A0")]
	public void OnSelectTexture(string texture)
	{
	}

	[Token(Token = "0x600418B")]
	[Address(RVA = "0x401BB20", Offset = "0x401BB20", VA = "0x401BB20")]
	public void OnChange()
	{
	}

	[Token(Token = "0x600418C")]
	[Address(RVA = "0x401FDB0", Offset = "0x401FDB0", VA = "0x401FDB0")]
	public string SerializeSetting(BaseSetting setting)
	{
		return null;
	}

	[Token(Token = "0x600418D")]
	[Address(RVA = "0x4020450", Offset = "0x4020450", VA = "0x4020450")]
	public MapEditorInspectPanel()
	{
	}
}
