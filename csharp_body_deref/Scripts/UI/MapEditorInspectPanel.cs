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
using Utility;

namespace UI;

[Token(Token = "0x20006CD")]
internal class MapEditorInspectPanel : HeadedPanel
{
	[Token(Token = "0x20006D3")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnablePanel_003Ed__58 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002143")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002144")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002145")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public MapEditorInspectPanel _003C_003E4__this;

		[Token(Token = "0x17000D4E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004426")]
			[Address(RVA = "0x43364E0", Offset = "0x43364E0", VA = "0x43364E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D4F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004428")]
			[Address(RVA = "0x4336530", Offset = "0x4336530", VA = "0x4336530", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004423")]
		[Address(RVA = "0x4330040", Offset = "0x4330040", VA = "0x4330040")]
		[DebuggerHidden]
		public _003CWaitAndEnablePanel_003Ed__58(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004424")]
		[Address(RVA = "0x4336410", Offset = "0x4336410", VA = "0x4336410", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004425")]
		[Address(RVA = "0x4336420", Offset = "0x4336420", VA = "0x4336420", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004427")]
		[Address(RVA = "0x43364F0", Offset = "0x43364F0", VA = "0x43364F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400210F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002110")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4002111")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	public MapObject _mapObject;

	[Token(Token = "0x4002112")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	public List<MapObject> _mapObjects;

	[Token(Token = "0x4002113")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private HashSet<string> _mixedFields;

	[Token(Token = "0x4002114")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Dictionary<string, string> _syncedSerialized;

	[Token(Token = "0x4002115")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private List<GameObject> _mixedNumericElements;

	[Token(Token = "0x4002116")]
	private const string MixedStringValue = "--";

	[Token(Token = "0x4002117")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private IntSetting _parent;

	[Token(Token = "0x4002118")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private StringSetting _name;

	[Token(Token = "0x4002119")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private BoolSetting _active;

	[Token(Token = "0x400211A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private BoolSetting _static;

	[Token(Token = "0x400211B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private BoolSetting _networked;

	[Token(Token = "0x400211C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private BoolSetting _visible;

	[Token(Token = "0x400211D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private FloatSetting _positionX;

	[Token(Token = "0x400211E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private FloatSetting _positionY;

	[Token(Token = "0x400211F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private FloatSetting _positionZ;

	[Token(Token = "0x4002120")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private FloatSetting _rotationX;

	[Token(Token = "0x4002121")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private FloatSetting _rotationY;

	[Token(Token = "0x4002122")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private FloatSetting _rotationZ;

	[Token(Token = "0x4002123")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private FloatSetting _scaleX;

	[Token(Token = "0x4002124")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private FloatSetting _scaleY;

	[Token(Token = "0x4002125")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private FloatSetting _scaleZ;

	[Token(Token = "0x4002126")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private StringSetting _collideMode;

	[Token(Token = "0x4002127")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private StringSetting _collideWith;

	[Token(Token = "0x4002128")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private StringSetting _physicsMaterial;

	[Token(Token = "0x4002129")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private StringSetting _shader;

	[Token(Token = "0x400212A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private ColorSetting _color;

	[Token(Token = "0x400212B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private ColorSetting _reflectColor;

	[Token(Token = "0x400212C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private StringSetting _texture;

	[Token(Token = "0x400212D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private FloatSetting _tilingX;

	[Token(Token = "0x400212E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private FloatSetting _tilingY;

	[Token(Token = "0x400212F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private FloatSetting _offsetX;

	[Token(Token = "0x4002130")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private FloatSetting _offsetY;

	[Token(Token = "0x4002131")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private List<Dictionary<string, BaseSetting>> _components;

	[Token(Token = "0x4002132")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private List<string> _componentNames;

	[Token(Token = "0x17000D46")]
	protected override float Width
	{
		[Token(Token = "0x60043CF")]
		[Address(RVA = "0x43295A0", Offset = "0x43295A0", VA = "0x43295A0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D47")]
	protected override float Height
	{
		[Token(Token = "0x60043D0")]
		[Address(RVA = "0x43295B0", Offset = "0x43295B0", VA = "0x43295B0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D48")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60043D1")]
		[Address(RVA = "0x43295C0", Offset = "0x43295C0", VA = "0x43295C0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D49")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60043D2")]
		[Address(RVA = "0x43295D0", Offset = "0x43295D0", VA = "0x43295D0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D4A")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60043D3")]
		[Address(RVA = "0x43295E0", Offset = "0x43295E0", VA = "0x43295E0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D4B")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60043D4")]
		[Address(RVA = "0x43295F0", Offset = "0x43295F0", VA = "0x43295F0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D4C")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60043D5")]
		[Address(RVA = "0x4329600", Offset = "0x4329600", VA = "0x4329600", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D4D")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60043D6")]
		[Address(RVA = "0x4329610", Offset = "0x4329610", VA = "0x4329610", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60043D7")]
	[Address(RVA = "0x4329620", Offset = "0x4329620", VA = "0x4329620", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60043D8")]
	[Address(RVA = "0x43297C0", Offset = "0x43297C0", VA = "0x43297C0")]
	private bool HasNonConvexMeshCollider(MapObject mapObject)
	{
		return default(bool);
	}

	[Token(Token = "0x60043D9")]
	[Address(RVA = "0x43298B0", Offset = "0x43298B0", VA = "0x43298B0")]
	public void CopyID()
	{
	}

	[Token(Token = "0x60043DA")]
	[Address(RVA = "0x43298F0", Offset = "0x43298F0", VA = "0x43298F0")]
	public void CopyAssetCSV()
	{
	}

	[Token(Token = "0x60043DB")]
	[Address(RVA = "0x4329930", Offset = "0x4329930", VA = "0x4329930")]
	public void Show(MapObject mapObject)
	{
	}

	[Token(Token = "0x60043DC")]
	[Address(RVA = "0x4329A10", Offset = "0x4329A10", VA = "0x4329A10")]
	public void Show(List<MapObject> mapObjects)
	{
	}

	[Token(Token = "0x60043DD")]
	[Address(RVA = "0x432FFD0", Offset = "0x432FFD0", VA = "0x432FFD0")]
	[IteratorStateMachine(typeof(_003CWaitAndEnablePanel_003Ed__58))]
	private IEnumerator WaitAndEnablePanel()
	{
		return null;
	}

	[Token(Token = "0x60043DE")]
	[Address(RVA = "0x4330060", Offset = "0x4330060", VA = "0x4330060")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60043DF")]
	[Address(RVA = "0x43302D0", Offset = "0x43302D0", VA = "0x43302D0")]
	private void OnAddComponent()
	{
	}

	[Token(Token = "0x60043E0")]
	[Address(RVA = "0x4334A70", Offset = "0x4334A70", VA = "0x4334A70")]
	private void OnDeleteComponent(int index)
	{
	}

	[Token(Token = "0x60043E1")]
	[Address(RVA = "0x4334AF0", Offset = "0x4334AF0", VA = "0x4334AF0")]
	private string SanitizeName(string name)
	{
		return null;
	}

	[Token(Token = "0x60043E2")]
	[Address(RVA = "0x432D0C0", Offset = "0x432D0C0", VA = "0x432D0C0")]
	public void SyncSettings()
	{
	}

	[Token(Token = "0x60043E3")]
	[Address(RVA = "0x4334C70", Offset = "0x4334C70", VA = "0x4334C70")]
	private static bool ColorEquals(Color255 a, Color255 b)
	{
		return default(bool);
	}

	[Token(Token = "0x60043E4")]
	[Address(RVA = "0x432E430", Offset = "0x432E430", VA = "0x432E430")]
	private string[] WithMixedOption(string[] options, string fieldKey, StringSetting setting)
	{
		return null;
	}

	[Token(Token = "0x60043E5")]
	[Address(RVA = "0x432F1A0", Offset = "0x432F1A0", VA = "0x432F1A0")]
	private void CaptureSyncedValues()
	{
	}

	[Token(Token = "0x60043E6")]
	[Address(RVA = "0x4335110", Offset = "0x4335110", VA = "0x4335110")]
	private bool IsModified(string key, string current)
	{
		return default(bool);
	}

	[Token(Token = "0x60043E7")]
	[Address(RVA = "0x432E580", Offset = "0x432E580", VA = "0x432E580")]
	private void ApplyMixedIndicators()
	{
	}

	[Token(Token = "0x60043E8")]
	[Address(RVA = "0x43351B0", Offset = "0x43351B0", VA = "0x43351B0")]
	public void OnSelectTexture(string texture)
	{
	}

	[Token(Token = "0x60043E9")]
	[Address(RVA = "0x43304D0", Offset = "0x43304D0", VA = "0x43304D0")]
	public void OnChange()
	{
	}

	[Token(Token = "0x60043EA")]
	[Address(RVA = "0x4334CB0", Offset = "0x4334CB0", VA = "0x4334CB0")]
	public string SerializeSetting(BaseSetting setting)
	{
		return null;
	}

	[Token(Token = "0x60043EB")]
	[Address(RVA = "0x4335360", Offset = "0x4335360", VA = "0x4335360")]
	public MapEditorInspectPanel()
	{
	}
}
