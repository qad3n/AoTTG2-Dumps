// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorInspectPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapEditorInspectPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorInspectPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
using UnityEngine.EventSystems;
using Utility;

namespace UI;

[Token(Token = "0x2000832")]
internal class MapEditorInspectPanel : MapEditorScaledPanel
{
	[Token(Token = "0x2000843")]
	[CompilerGenerated]
	private sealed class _003CRestoreScrollPositionAfterLayout_003Ed__88 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400298F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002990")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002991")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MapEditorInspectPanel _003C_003E4__this;

		[Token(Token = "0x4002992")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public float position;

		[Token(Token = "0x17000E97")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004FE3")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000E98")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004FE5")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004FE0")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CRestoreScrollPositionAfterLayout_003Ed__88(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004FE1")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004FE2")]
		[Address(RVA = "0x22CF590", Offset = "0x22CDB90", VA = "0x1822CF590", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004FE4")]
		[Address(RVA = "0x22CF700", Offset = "0x22CDD00", VA = "0x1822CF700", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000844")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnablePanel_003Ed__89 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002993")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002994")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002995")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MapEditorInspectPanel _003C_003E4__this;

		[Token(Token = "0x17000E99")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004FE9")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000E9A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004FEB")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004FE6")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndEnablePanel_003Ed__89(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004FE7")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004FE8")]
		[Address(RVA = "0x22D1300", Offset = "0x22CF900", VA = "0x1822D1300", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004FEA")]
		[Address(RVA = "0x22D13C0", Offset = "0x22CF9C0", VA = "0x1822D13C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400292E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x400292F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4002930")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	public MapObject _mapObject;

	[Token(Token = "0x4002931")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public List<MapObject> _mapObjects;

	[Token(Token = "0x4002932")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private HashSet<string> _mixedFields;

	[Token(Token = "0x4002933")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<string, string> _syncedSerialized;

	[Token(Token = "0x4002934")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private List<GameObject> _mixedNumericElements;

	[Token(Token = "0x4002935")]
	private const string MixedStringValue = "--";

	[Token(Token = "0x4002936")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private IntSetting _parent;

	[Token(Token = "0x4002937")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private StringSetting _name;

	[Token(Token = "0x4002938")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private BoolSetting _active;

	[Token(Token = "0x4002939")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private BoolSetting _static;

	[Token(Token = "0x400293A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private BoolSetting _networked;

	[Token(Token = "0x400293B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private BoolSetting _visible;

	[Token(Token = "0x400293C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private FloatSetting _positionX;

	[Token(Token = "0x400293D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private FloatSetting _positionY;

	[Token(Token = "0x400293E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private FloatSetting _positionZ;

	[Token(Token = "0x400293F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private FloatSetting _rotationX;

	[Token(Token = "0x4002940")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private FloatSetting _rotationY;

	[Token(Token = "0x4002941")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private FloatSetting _rotationZ;

	[Token(Token = "0x4002942")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private FloatSetting _scaleX;

	[Token(Token = "0x4002943")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private FloatSetting _scaleY;

	[Token(Token = "0x4002944")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private FloatSetting _scaleZ;

	[Token(Token = "0x4002945")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private StringSetting _collideMode;

	[Token(Token = "0x4002946")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private StringSetting _collideWith;

	[Token(Token = "0x4002947")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private StringSetting _physicsMaterial;

	[Token(Token = "0x4002948")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private StringSetting _shader;

	[Token(Token = "0x4002949")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private ColorSetting _color;

	[Token(Token = "0x400294A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private ColorSetting _reflectColor;

	[Token(Token = "0x400294B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private StringSetting _texture;

	[Token(Token = "0x400294C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private FloatSetting _tilingX;

	[Token(Token = "0x400294D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private FloatSetting _tilingY;

	[Token(Token = "0x400294E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private FloatSetting _offsetX;

	[Token(Token = "0x400294F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private FloatSetting _offsetY;

	[Token(Token = "0x4002950")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private List<Dictionary<string, BaseSetting>> _components;

	[Token(Token = "0x4002951")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	private List<string> _componentNames;

	[Token(Token = "0x4002952")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	private Dictionary<string, Dictionary<string, string>> _syncedComponentFields;

	[Token(Token = "0x4002953")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private MapEditorContextMenu _contextMenu;

	[Token(Token = "0x4002954")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly HashSet<string> CollapsedSections;

	[Token(Token = "0x4002955")]
	private const string ComponentClipboardPrefix = "AOTTG2_COMPONENT_V1:";

	[Token(Token = "0x4002956")]
	private const string TransformClipboardPrefix = "AOTTG2_TRANSFORM_V1:";

	[Token(Token = "0x17000E8F")]
	protected override float Width
	{
		[Token(Token = "0x6004F40")]
		[Address(RVA = "0x1DA8B00", Offset = "0x1DA7100", VA = "0x181DA8B00", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E90")]
	protected override float Height
	{
		[Token(Token = "0x6004F41")]
		[Address(RVA = "0x229A1F0", Offset = "0x22987F0", VA = "0x18229A1F0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E91")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004F42")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E92")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004F43")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E93")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004F47")]
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E94")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004F48")]
		[Address(RVA = "0x21D1FA0", Offset = "0x21D05A0", VA = "0x1821D1FA0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E95")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004F49")]
		[Address(RVA = "0x1B9BE70", Offset = "0x1B9A470", VA = "0x181B9BE70", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E96")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004F4A")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004F44")]
	[Address(RVA = "0x22BDDE0", Offset = "0x22BC3E0", VA = "0x1822BDDE0", Slot = "33")]
	protected override float GetWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6004F45")]
	[Address(RVA = "0x22BD8A0", Offset = "0x22BBEA0", VA = "0x1822BD8A0", Slot = "34")]
	protected override float GetHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6004F46")]
	[Address(RVA = "0x22BDC50", Offset = "0x22BC250", VA = "0x1822BDC50")]
	private static float GetTopOffset()
	{
		return default(float);
	}

	[Token(Token = "0x6004F4B")]
	[Address(RVA = "0x22BD830", Offset = "0x22BBE30", VA = "0x1822BD830")]
	private static string GetComponentFieldKey(string componentName, string fieldName)
	{
		return null;
	}

	[Token(Token = "0x6004F4C")]
	[Address(RVA = "0x22C1400", Offset = "0x22BFA00", VA = "0x1822C1400")]
	private void OnComponentFieldChanged(string componentName, string fieldName)
	{
	}

	[Token(Token = "0x6004F4D")]
	[Address(RVA = "0x22BD310", Offset = "0x22BB910", VA = "0x1822BD310")]
	private Transform CreateSection(string key, string title, ElementStyle style, [Optional][DefaultParameterValue(false)] bool contextMenu, [Optional] Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6004F4E")]
	[Address(RVA = "0x22C3CF0", Offset = "0x22C22F0", VA = "0x1822C3CF0")]
	private void ShowSectionContextMenu(string key, PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004F4F")]
	[Address(RVA = "0x22BCAC0", Offset = "0x22BB0C0", VA = "0x1822BCAC0")]
	private void CopyTransform()
	{
	}

	[Token(Token = "0x6004F50")]
	[Address(RVA = "0x22C39C0", Offset = "0x22C1FC0", VA = "0x1822C39C0")]
	private static string SerializeVector(Vector3 value)
	{
		return null;
	}

	[Token(Token = "0x6004F51")]
	[Address(RVA = "0x22C9B40", Offset = "0x22C8140", VA = "0x1822C9B40")]
	private static bool TryReadTransformClipboard(out Vector3 position, out Vector3 rotation, out Vector3 scale)
	{
		return default(bool);
	}

	[Token(Token = "0x6004F52")]
	[Address(RVA = "0x22C9760", Offset = "0x22C7D60", VA = "0x1822C9760")]
	private static bool TryParseVector(string serialized, out Vector3 value)
	{
		return default(bool);
	}

	[Token(Token = "0x6004F53")]
	[Address(RVA = "0x22C1AC0", Offset = "0x22C00C0", VA = "0x1822C1AC0")]
	private void PasteTransform()
	{
	}

	[Token(Token = "0x6004F54")]
	[Address(RVA = "0x22BC840", Offset = "0x22BAE40", VA = "0x1822BC840")]
	private void CopyComponent(string componentName)
	{
	}

	[Token(Token = "0x6004F55")]
	[Address(RVA = "0x22C9940", Offset = "0x22C7F40", VA = "0x1822C9940")]
	private bool TryReadComponentClipboard(out MapScriptComponent component)
	{
		return default(bool);
	}

	[Token(Token = "0x6004F56")]
	[Address(RVA = "0x22C17B0", Offset = "0x22BFDB0", VA = "0x1822C17B0")]
	private void PasteComponent()
	{
	}

	[Token(Token = "0x6004F57")]
	[Address(RVA = "0x22BD5A0", Offset = "0x22BBBA0", VA = "0x1822BD5A0")]
	private void DeleteComponent(string componentName)
	{
	}

	[Token(Token = "0x6004F58")]
	[Address(RVA = "0x22BC4B0", Offset = "0x22BAAB0", VA = "0x1822BC4B0")]
	private static MapScriptComponent CloneComponent(MapScriptComponent source)
	{
		return null;
	}

	[Token(Token = "0x6004F59")]
	[Address(RVA = "0x22C1560", Offset = "0x22BFB60", VA = "0x1822C1560")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004F5A")]
	[Address(RVA = "0x22C3B10", Offset = "0x22C2110", VA = "0x1822C3B10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004F5B")]
	[Address(RVA = "0x22BA360", Offset = "0x22B8960", VA = "0x1822BA360")]
	private void AddResizeHandle()
	{
	}

	[Token(Token = "0x6004F5C")]
	[Address(RVA = "0x22BDE40", Offset = "0x22BC440", VA = "0x1822BDE40")]
	private bool HasNonConvexMeshCollider(MapObject mapObject)
	{
		return default(bool);
	}

	[Token(Token = "0x6004F5D")]
	[Address(RVA = "0x22BCA40", Offset = "0x22BB040", VA = "0x1822BCA40")]
	public void CopyID()
	{
	}

	[Token(Token = "0x6004F5E")]
	[Address(RVA = "0x22BC7C0", Offset = "0x22BADC0", VA = "0x1822BC7C0")]
	public void CopyAssetCSV()
	{
	}

	[Token(Token = "0x6004F5F")]
	[Address(RVA = "0x22C7CB0", Offset = "0x22C62B0", VA = "0x1822C7CB0")]
	public void Show(MapObject mapObject)
	{
	}

	[Token(Token = "0x6004F60")]
	[Address(RVA = "0x22C42A0", Offset = "0x22C28A0", VA = "0x1822C42A0")]
	public void Show(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x6004F61")]
	[Address(RVA = "0x22BD080", Offset = "0x22BB680", VA = "0x1822BD080")]
	private void CreateMapObjectSetting(Transform parent, ElementStyle style, IntSetting setting, string title, string tooltip, Action onChanged)
	{
	}

	[Token(Token = "0x6004F62")]
	[Address(RVA = "0x22BCD60", Offset = "0x22BB360", VA = "0x1822BCD60")]
	private void CreateMapObjectListSetting(Transform parent, ElementStyle style, HashSetSetting<int> setting, string title, string tooltip, Action onChanged)
	{
	}

	[Token(Token = "0x6004F63")]
	[Address(RVA = "0x22C1650", Offset = "0x22BFC50", VA = "0x1822C1650")]
	private static HashSet<int> ParseMapObjectIds(string value)
	{
		return null;
	}

	[Token(Token = "0x6004F64")]
	[Address(RVA = "0x22C2F60", Offset = "0x22C1560", VA = "0x1822C2F60")]
	private static string SerializeMapObjectIds(IEnumerable<int> ids)
	{
		return null;
	}

	[Token(Token = "0x6004F65")]
	[Address(RVA = "0x22BDB50", Offset = "0x22BC150", VA = "0x1822BDB50")]
	public float GetScrollPosition()
	{
		return default(float);
	}

	[Token(Token = "0x6004F66")]
	[Address(RVA = "0x22C2B10", Offset = "0x22C1110", VA = "0x1822C2B10")]
	public void RestoreScrollPosition(float position)
	{
	}

	[Token(Token = "0x6004F67")]
	[Address(RVA = "0x22C2A90", Offset = "0x22C1090", VA = "0x1822C2A90")]
	[IteratorStateMachine(typeof(_003CRestoreScrollPositionAfterLayout_003Ed__88))]
	private IEnumerator RestoreScrollPositionAfterLayout(float position)
	{
		return null;
	}

	[Token(Token = "0x6004F68")]
	[Address(RVA = "0x22C9F70", Offset = "0x22C8570", VA = "0x1822C9F70")]
	[IteratorStateMachine(typeof(_003CWaitAndEnablePanel_003Ed__89))]
	private IEnumerator WaitAndEnablePanel()
	{
		return null;
	}

	[Token(Token = "0x6004F69")]
	[Address(RVA = "0x22BE4E0", Offset = "0x22BCAE0", VA = "0x1822BE4E0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004F6A")]
	[Address(RVA = "0x22BE360", Offset = "0x22BC960", VA = "0x1822BE360")]
	private void OnAddComponent()
	{
	}

	[Token(Token = "0x6004F6B")]
	[Address(RVA = "0x22C14D0", Offset = "0x22BFAD0", VA = "0x1822C14D0")]
	private void OnDeleteComponent(int index)
	{
	}

	[Token(Token = "0x6004F6C")]
	[Address(RVA = "0x22C2BA0", Offset = "0x22C11A0", VA = "0x1822C2BA0")]
	private string SanitizeName(string name)
	{
		return null;
	}

	[Token(Token = "0x6004F6D")]
	[Address(RVA = "0x22C7DA0", Offset = "0x22C63A0", VA = "0x1822C7DA0")]
	public void SyncSettings()
	{
	}

	[Token(Token = "0x6004F6E")]
	[Address(RVA = "0x22BC770", Offset = "0x22BAD70", VA = "0x1822BC770")]
	private static bool ColorEquals(Color255 a, Color255 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6004F6F")]
	[Address(RVA = "0x22C9FE0", Offset = "0x22C85E0", VA = "0x1822C9FE0")]
	private string[] WithMixedOption(string[] options, string fieldKey, StringSetting setting)
	{
		return null;
	}

	[Token(Token = "0x6004F70")]
	[Address(RVA = "0x22BB330", Offset = "0x22B9930", VA = "0x1822BB330")]
	private void CaptureSyncedValues()
	{
	}

	[Token(Token = "0x6004F71")]
	[Address(RVA = "0x22C2D00", Offset = "0x22C1300", VA = "0x1822C2D00")]
	private Dictionary<string, string> SerializeComponentFields(Dictionary<string, BaseSetting> settings)
	{
		return null;
	}

	[Token(Token = "0x6004F72")]
	[Address(RVA = "0x22BE010", Offset = "0x22BC610", VA = "0x1822BE010")]
	private MapScriptComponent MergeComponent(string componentName, MapScriptComponent previous, Dictionary<string, string> changedFields)
	{
		return null;
	}

	[Token(Token = "0x6004F73")]
	[Address(RVA = "0x22BDF70", Offset = "0x22BC570", VA = "0x1822BDF70")]
	private bool IsModified(string key, string current)
	{
		return default(bool);
	}

	[Token(Token = "0x6004F74")]
	[Address(RVA = "0x22BA570", Offset = "0x22B8B70", VA = "0x1822BA570")]
	private void ApplyMixedIndicators()
	{
	}

	[Token(Token = "0x6004F75")]
	[Address(RVA = "0x22C1580", Offset = "0x22BFB80", VA = "0x1822C1580")]
	public void OnSelectTexture(string texture)
	{
	}

	[Token(Token = "0x6004F76")]
	[Address(RVA = "0x22BE750", Offset = "0x22BCD50", VA = "0x1822BE750")]
	public void OnChange()
	{
	}

	[Token(Token = "0x6004F77")]
	[Address(RVA = "0x22C3190", Offset = "0x22C1790", VA = "0x1822C3190")]
	public string SerializeSetting(BaseSetting setting)
	{
		return null;
	}

	[Token(Token = "0x6004F78")]
	[Address(RVA = "0x22C1DB0", Offset = "0x22C03B0", VA = "0x1822C1DB0")]
	private void PropagateTransformToDescendants(List<MapObject> posObjects, List<MapObject> rotObjects, List<MapObject> scaleObjects)
	{
	}

	[Token(Token = "0x6004F79")]
	[Address(RVA = "0x22BC580", Offset = "0x22BAB80", VA = "0x1822BC580")]
	private void CollectDescendantIds(int id, HashSet<int> result)
	{
	}

	[Token(Token = "0x6004F7A")]
	[Address(RVA = "0x22CA190", Offset = "0x22C8790", VA = "0x1822CA190")]
	public MapEditorInspectPanel()
	{
	}
}
