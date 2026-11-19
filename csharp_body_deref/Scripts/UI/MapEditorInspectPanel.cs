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

[Token(Token = "0x20008B0")]
internal class MapEditorInspectPanel : MapEditorScaledPanel
{
	[Token(Token = "0x20008C1")]
	[CompilerGenerated]
	private sealed class _003CRestoreScrollPositionAfterLayout_003Ed__89 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002C48")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002C49")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002C4A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MapEditorInspectPanel _003C_003E4__this;

		[Token(Token = "0x4002C4B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public float position;

		[Token(Token = "0x17000E98")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005382")]
			[Address(RVA = "0x5C93F50", Offset = "0x5C92F50", VA = "0x5C93F50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000E99")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005384")]
			[Address(RVA = "0x5C93FA0", Offset = "0x5C92FA0", VA = "0x5C93FA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600537F")]
		[Address(RVA = "0x5C93DA0", Offset = "0x5C92DA0", VA = "0x5C93DA0")]
		[DebuggerHidden]
		public _003CRestoreScrollPositionAfterLayout_003Ed__89(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005380")]
		[Address(RVA = "0x5C93DC0", Offset = "0x5C92DC0", VA = "0x5C93DC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005381")]
		[Address(RVA = "0x5C93DD0", Offset = "0x5C92DD0", VA = "0x5C93DD0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005383")]
		[Address(RVA = "0x5C93F60", Offset = "0x5C92F60", VA = "0x5C93F60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20008C2")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnablePanel_003Ed__90 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002C4C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002C4D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002C4E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MapEditorInspectPanel _003C_003E4__this;

		[Token(Token = "0x17000E9A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005388")]
			[Address(RVA = "0x5C94090", Offset = "0x5C93090", VA = "0x5C94090", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000E9B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600538A")]
			[Address(RVA = "0x5C940E0", Offset = "0x5C930E0", VA = "0x5C940E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005385")]
		[Address(RVA = "0x5C93FB0", Offset = "0x5C92FB0", VA = "0x5C93FB0")]
		[DebuggerHidden]
		public _003CWaitAndEnablePanel_003Ed__90(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005386")]
		[Address(RVA = "0x5C93FD0", Offset = "0x5C92FD0", VA = "0x5C93FD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005387")]
		[Address(RVA = "0x5C93FE0", Offset = "0x5C92FE0", VA = "0x5C93FE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005389")]
		[Address(RVA = "0x5C940A0", Offset = "0x5C930A0", VA = "0x5C940A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002BE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002BE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4002BE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	public MapObject _mapObject;

	[Token(Token = "0x4002BEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public List<MapObject> _mapObjects;

	[Token(Token = "0x4002BEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private HashSet<string> _mixedFields;

	[Token(Token = "0x4002BEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<string, string> _syncedSerialized;

	[Token(Token = "0x4002BED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private List<GameObject> _mixedNumericElements;

	[Token(Token = "0x4002BEE")]
	private const string MixedStringValue = "--";

	[Token(Token = "0x4002BEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private IntSetting _parent;

	[Token(Token = "0x4002BF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private StringSetting _name;

	[Token(Token = "0x4002BF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private BoolSetting _active;

	[Token(Token = "0x4002BF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private BoolSetting _static;

	[Token(Token = "0x4002BF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private BoolSetting _networked;

	[Token(Token = "0x4002BF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private BoolSetting _visible;

	[Token(Token = "0x4002BF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private FloatSetting _positionX;

	[Token(Token = "0x4002BF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private FloatSetting _positionY;

	[Token(Token = "0x4002BF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private FloatSetting _positionZ;

	[Token(Token = "0x4002BF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private FloatSetting _rotationX;

	[Token(Token = "0x4002BF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private FloatSetting _rotationY;

	[Token(Token = "0x4002BFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private FloatSetting _rotationZ;

	[Token(Token = "0x4002BFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private FloatSetting _scaleX;

	[Token(Token = "0x4002BFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private FloatSetting _scaleY;

	[Token(Token = "0x4002BFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private FloatSetting _scaleZ;

	[Token(Token = "0x4002BFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private StringSetting _collideMode;

	[Token(Token = "0x4002BFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private StringSetting _collideWith;

	[Token(Token = "0x4002C00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private StringSetting _physicsMaterial;

	[Token(Token = "0x4002C01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private StringSetting _shader;

	[Token(Token = "0x4002C02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private ColorSetting _color;

	[Token(Token = "0x4002C03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private ColorSetting _reflectColor;

	[Token(Token = "0x4002C04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private StringSetting _texture;

	[Token(Token = "0x4002C05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private FloatSetting _tilingX;

	[Token(Token = "0x4002C06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private FloatSetting _tilingY;

	[Token(Token = "0x4002C07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private FloatSetting _offsetX;

	[Token(Token = "0x4002C08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private FloatSetting _offsetY;

	[Token(Token = "0x4002C09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private List<Dictionary<string, BaseSetting>> _components;

	[Token(Token = "0x4002C0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	private List<string> _componentNames;

	[Token(Token = "0x4002C0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	private Dictionary<string, Dictionary<string, string>> _syncedComponentFields;

	[Token(Token = "0x4002C0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private MapEditorContextMenu _contextMenu;

	[Token(Token = "0x4002C0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly HashSet<string> CollapsedSections;

	[Token(Token = "0x4002C0E")]
	private const string ComponentClipboardPrefix = "AOTTG2_COMPONENT_V1:";

	[Token(Token = "0x4002C0F")]
	private const string TransformClipboardPrefix = "AOTTG2_TRANSFORM_V1:";

	[Token(Token = "0x17000E90")]
	protected override float Width
	{
		[Token(Token = "0x60052DE")]
		[Address(RVA = "0x5C7E7A0", Offset = "0x5C7D7A0", VA = "0x5C7E7A0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E91")]
	protected override float Height
	{
		[Token(Token = "0x60052DF")]
		[Address(RVA = "0x5C7E7B0", Offset = "0x5C7D7B0", VA = "0x5C7E7B0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E92")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60052E0")]
		[Address(RVA = "0x5C7E7C0", Offset = "0x5C7D7C0", VA = "0x5C7E7C0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E93")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60052E1")]
		[Address(RVA = "0x5C7E7D0", Offset = "0x5C7D7D0", VA = "0x5C7E7D0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E94")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60052E5")]
		[Address(RVA = "0x5C7EB60", Offset = "0x5C7DB60", VA = "0x5C7EB60", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E95")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60052E6")]
		[Address(RVA = "0x5C7EB70", Offset = "0x5C7DB70", VA = "0x5C7EB70", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E96")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60052E7")]
		[Address(RVA = "0x5C7EB80", Offset = "0x5C7DB80", VA = "0x5C7EB80", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E97")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60052E8")]
		[Address(RVA = "0x5C7EB90", Offset = "0x5C7DB90", VA = "0x5C7EB90", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60052E2")]
	[Address(RVA = "0x5C7E7E0", Offset = "0x5C7D7E0", VA = "0x5C7E7E0", Slot = "33")]
	protected override float GetWidth()
	{
		return default(float);
	}

	[Token(Token = "0x60052E3")]
	[Address(RVA = "0x5C7E840", Offset = "0x5C7D840", VA = "0x5C7E840", Slot = "34")]
	protected override float GetHeight()
	{
		return default(float);
	}

	[Token(Token = "0x60052E4")]
	[Address(RVA = "0x5C7E9A0", Offset = "0x5C7D9A0", VA = "0x5C7E9A0")]
	private static float GetTopOffset()
	{
		return default(float);
	}

	[Token(Token = "0x60052E9")]
	[Address(RVA = "0x5C7EBA0", Offset = "0x5C7DBA0", VA = "0x5C7EBA0")]
	internal static string Locale(string item)
	{
		return null;
	}

	[Token(Token = "0x60052EA")]
	[Address(RVA = "0x5C7EC30", Offset = "0x5C7DC30", VA = "0x5C7EC30")]
	private static string GetComponentFieldKey(string componentName, string fieldName)
	{
		return null;
	}

	[Token(Token = "0x60052EB")]
	[Address(RVA = "0x5C7EC90", Offset = "0x5C7DC90", VA = "0x5C7EC90")]
	private void OnComponentFieldChanged(string componentName, string fieldName)
	{
	}

	[Token(Token = "0x60052EC")]
	[Address(RVA = "0x5C82C70", Offset = "0x5C81C70", VA = "0x5C82C70")]
	private Transform CreateSection(string key, string title, ElementStyle style, [Optional][DefaultParameterValue(false)] bool contextMenu, [Optional] Transform parent)
	{
		return null;
	}

	[Token(Token = "0x60052ED")]
	[Address(RVA = "0x5C82F00", Offset = "0x5C81F00", VA = "0x5C82F00")]
	private void ShowSectionContextMenu(string key, PointerEventData eventData)
	{
	}

	[Token(Token = "0x60052EE")]
	[Address(RVA = "0x5C83DC0", Offset = "0x5C82DC0", VA = "0x5C83DC0")]
	private void CopyTransform()
	{
	}

	[Token(Token = "0x60052EF")]
	[Address(RVA = "0x5C84020", Offset = "0x5C83020", VA = "0x5C84020")]
	private static string SerializeVector(Vector3 value)
	{
		return null;
	}

	[Token(Token = "0x60052F0")]
	[Address(RVA = "0x5C83820", Offset = "0x5C82820", VA = "0x5C83820")]
	private static bool TryReadTransformClipboard(out Vector3 position, out Vector3 rotation, out Vector3 scale)
	{
		return default(bool);
	}

	[Token(Token = "0x60052F1")]
	[Address(RVA = "0x5C84180", Offset = "0x5C83180", VA = "0x5C84180")]
	private static bool TryParseVector(string serialized, out Vector3 value)
	{
		return default(bool);
	}

	[Token(Token = "0x60052F2")]
	[Address(RVA = "0x5C84350", Offset = "0x5C83350", VA = "0x5C84350")]
	private void PasteTransform()
	{
	}

	[Token(Token = "0x60052F3")]
	[Address(RVA = "0x5C84640", Offset = "0x5C83640", VA = "0x5C84640")]
	private void CopyComponent(string componentName)
	{
	}

	[Token(Token = "0x60052F4")]
	[Address(RVA = "0x5C83B20", Offset = "0x5C82B20", VA = "0x5C83B20")]
	private bool TryReadComponentClipboard(out MapScriptComponent component)
	{
		return default(bool);
	}

	[Token(Token = "0x60052F5")]
	[Address(RVA = "0x5C84860", Offset = "0x5C83860", VA = "0x5C84860")]
	private void PasteComponent()
	{
	}

	[Token(Token = "0x60052F6")]
	[Address(RVA = "0x5C84D10", Offset = "0x5C83D10", VA = "0x5C84D10")]
	private void DeleteComponent(string componentName)
	{
	}

	[Token(Token = "0x60052F7")]
	[Address(RVA = "0x5C84C50", Offset = "0x5C83C50", VA = "0x5C84C50")]
	private static MapScriptComponent CloneComponent(MapScriptComponent source)
	{
		return null;
	}

	[Token(Token = "0x60052F8")]
	[Address(RVA = "0x5C84FD0", Offset = "0x5C83FD0", VA = "0x5C84FD0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60052F9")]
	[Address(RVA = "0x5C85060", Offset = "0x5C84060", VA = "0x5C85060", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60052FA")]
	[Address(RVA = "0x5C85210", Offset = "0x5C84210", VA = "0x5C85210")]
	private void AddResizeHandle()
	{
	}

	[Token(Token = "0x60052FB")]
	[Address(RVA = "0x5C853F0", Offset = "0x5C843F0", VA = "0x5C853F0")]
	private bool HasNonConvexMeshCollider(MapObject mapObject)
	{
		return default(bool);
	}

	[Token(Token = "0x60052FC")]
	[Address(RVA = "0x5C854E0", Offset = "0x5C844E0", VA = "0x5C854E0")]
	public void CopyID()
	{
	}

	[Token(Token = "0x60052FD")]
	[Address(RVA = "0x5C85560", Offset = "0x5C84560", VA = "0x5C85560")]
	public void CopyAssetCSV()
	{
	}

	[Token(Token = "0x60052FE")]
	[Address(RVA = "0x5C855E0", Offset = "0x5C845E0", VA = "0x5C855E0")]
	public void Show(MapObject mapObject)
	{
	}

	[Token(Token = "0x60052FF")]
	[Address(RVA = "0x5C856C0", Offset = "0x5C846C0", VA = "0x5C856C0")]
	public void Show(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x6005300")]
	[Address(RVA = "0x5C8C490", Offset = "0x5C8B490", VA = "0x5C8C490")]
	private void CreateMapObjectSetting(Transform parent, ElementStyle style, IntSetting setting, string title, string tooltip, Action onChanged)
	{
	}

	[Token(Token = "0x6005301")]
	[Address(RVA = "0x5C8C720", Offset = "0x5C8B720", VA = "0x5C8C720")]
	private void CreateMapObjectListSetting(Transform parent, ElementStyle style, HashSetSetting<int> setting, string title, string tooltip, Action onChanged)
	{
	}

	[Token(Token = "0x6005302")]
	[Address(RVA = "0x5C8EE40", Offset = "0x5C8DE40", VA = "0x5C8EE40")]
	private static HashSet<int> ParseMapObjectIds(string value)
	{
		return null;
	}

	[Token(Token = "0x6005303")]
	[Address(RVA = "0x5C8EC30", Offset = "0x5C8DC30", VA = "0x5C8EC30")]
	private static string SerializeMapObjectIds(IEnumerable<int> ids)
	{
		return null;
	}

	[Token(Token = "0x6005304")]
	[Address(RVA = "0x5C8F000", Offset = "0x5C8E000", VA = "0x5C8F000")]
	public float GetScrollPosition()
	{
		return default(float);
	}

	[Token(Token = "0x6005305")]
	[Address(RVA = "0x5C8F100", Offset = "0x5C8E100", VA = "0x5C8F100")]
	public void RestoreScrollPosition(float position)
	{
	}

	[Token(Token = "0x6005306")]
	[Address(RVA = "0x5C8F190", Offset = "0x5C8E190", VA = "0x5C8F190")]
	[IteratorStateMachine(typeof(_003CRestoreScrollPositionAfterLayout_003Ed__89))]
	private IEnumerator RestoreScrollPositionAfterLayout(float position)
	{
		return null;
	}

	[Token(Token = "0x6005307")]
	[Address(RVA = "0x5C8EBC0", Offset = "0x5C8DBC0", VA = "0x5C8EBC0")]
	[IteratorStateMachine(typeof(_003CWaitAndEnablePanel_003Ed__90))]
	private IEnumerator WaitAndEnablePanel()
	{
		return null;
	}

	[Token(Token = "0x6005308")]
	[Address(RVA = "0x5C8F210", Offset = "0x5C8E210", VA = "0x5C8F210")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6005309")]
	[Address(RVA = "0x5C8F4B0", Offset = "0x5C8E4B0", VA = "0x5C8F4B0")]
	private void OnAddComponent()
	{
	}

	[Token(Token = "0x600530A")]
	[Address(RVA = "0x5C8F6B0", Offset = "0x5C8E6B0", VA = "0x5C8F6B0")]
	private void OnDeleteComponent(int index)
	{
	}

	[Token(Token = "0x600530B")]
	[Address(RVA = "0x5C8F730", Offset = "0x5C8E730", VA = "0x5C8F730")]
	private string SanitizeName(string name)
	{
		return null;
	}

	[Token(Token = "0x600530C")]
	[Address(RVA = "0x5C8A5F0", Offset = "0x5C895F0", VA = "0x5C8A5F0")]
	public void SyncSettings()
	{
	}

	[Token(Token = "0x600530D")]
	[Address(RVA = "0x5C8F8B0", Offset = "0x5C8E8B0", VA = "0x5C8F8B0")]
	private static bool ColorEquals(Color255 a, Color255 b)
	{
		return default(bool);
	}

	[Token(Token = "0x600530E")]
	[Address(RVA = "0x5C8C350", Offset = "0x5C8B350", VA = "0x5C8C350")]
	private string[] WithMixedOption(string[] options, string fieldKey, StringSetting setting)
	{
		return null;
	}

	[Token(Token = "0x600530F")]
	[Address(RVA = "0x5C8D920", Offset = "0x5C8C920", VA = "0x5C8D920")]
	private void CaptureSyncedValues()
	{
	}

	[Token(Token = "0x6005310")]
	[Address(RVA = "0x5C8F8F0", Offset = "0x5C8E8F0", VA = "0x5C8F8F0")]
	private Dictionary<string, string> SerializeComponentFields(Dictionary<string, BaseSetting> settings)
	{
		return null;
	}

	[Token(Token = "0x6005311")]
	[Address(RVA = "0x5C902A0", Offset = "0x5C8F2A0", VA = "0x5C902A0")]
	private MapScriptComponent MergeComponent(string componentName, MapScriptComponent previous, Dictionary<string, string> changedFields)
	{
		return null;
	}

	[Token(Token = "0x6005312")]
	[Address(RVA = "0x5C90720", Offset = "0x5C8F720", VA = "0x5C90720")]
	private bool IsModified(string key, string current)
	{
		return default(bool);
	}

	[Token(Token = "0x6005313")]
	[Address(RVA = "0x5C8CA50", Offset = "0x5C8BA50", VA = "0x5C8CA50")]
	private void ApplyMixedIndicators()
	{
	}

	[Token(Token = "0x6005314")]
	[Address(RVA = "0x5C907A0", Offset = "0x5C8F7A0", VA = "0x5C907A0")]
	public void OnSelectTexture(string texture)
	{
	}

	[Token(Token = "0x6005315")]
	[Address(RVA = "0x5C7ED70", Offset = "0x5C7DD70", VA = "0x5C7ED70")]
	public void OnChange()
	{
	}

	[Token(Token = "0x6005316")]
	[Address(RVA = "0x5C8FC50", Offset = "0x5C8EC50", VA = "0x5C8FC50")]
	public string SerializeSetting(BaseSetting setting)
	{
		return null;
	}

	[Token(Token = "0x6005317")]
	[Address(RVA = "0x5C90860", Offset = "0x5C8F860", VA = "0x5C90860")]
	private void PropagateTransformToDescendants(List<MapObject> posObjects, List<MapObject> rotObjects, List<MapObject> scaleObjects)
	{
	}

	[Token(Token = "0x6005318")]
	[Address(RVA = "0x5C91830", Offset = "0x5C90830", VA = "0x5C91830")]
	private void CollectDescendantIds(int id, HashSet<int> result)
	{
	}

	[Token(Token = "0x6005319")]
	[Address(RVA = "0x5C91A80", Offset = "0x5C90A80", VA = "0x5C91A80")]
	public MapEditorInspectPanel()
	{
	}
}
