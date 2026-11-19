// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorInspectPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapEditorInspectPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorInspectPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
				// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel.<RestoreScrollPositionAfterLayout>d__89$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel.<RestoreScrollPositionAfterLayout>d__89$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600537F")]
		[Address(RVA = "0x5C93DA0", Offset = "0x5C92DA0", VA = "0x5C93DA0")]
		[DebuggerHidden]
		public _003CRestoreScrollPositionAfterLayout_003Ed__89(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel.<RestoreScrollPositionAfterLayout>d__89$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6005380")]
		[Address(RVA = "0x5C93DC0", Offset = "0x5C92DC0", VA = "0x5C93DC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel.<RestoreScrollPositionAfterLayout>d__89$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6005381")]
		[Address(RVA = "0x5C93DD0", Offset = "0x5C92DD0", VA = "0x5C93DD0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel.<RestoreScrollPositionAfterLayout>d__89$$MoveNext): clean
			int iVar1;
			MapEditorInspectPanel pUVar2;
			bool bVar3;
			Transform pUVar4;
			ScrollRect __this_00;
			object __this_01;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				__this_01 = new WaitForEndOfFrame();
				this.__2__current = __this_01;
				this.__1__state = 1;
			}
			else {
				if (iVar1 != 1) goto label_05d93f35;
				pUVar2 = this.__4__this;
				this.__1__state = -1;
				Canvas.ForceUpdateCanvases();
				if (pUVar2 == null) goto label_05d93f49;
				pUVar4 = pUVar2.SinglePanel;
				__this_00 = null;
				bVar3 = ((Object)pUVar4 != null);
				if (bVar3) {
					pUVar4 = pUVar2.SinglePanel;
					if (pUVar4 == null) goto label_05d93f49;
					pUVar4 = pUVar4.parent;
					if (pUVar4 == null) goto label_05d93f49;
					pUVar4 = pUVar4.parent;
					if (pUVar4 == null) goto label_05d93f49;
					__this_00 = pUVar4.GetComponent<ScrollRect>();
				}
				bVar3 = ((Object)__this_00 != null);
				if (bVar3) {
					if (__this_00 == null) {
		label_05d93f49: ;
						throw new NullReferenceException();
					}
					__this_00.verticalNormalizedPosition = this.position;
				}
			}
		label_05d93f35: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x6005383")]
		[Address(RVA = "0x5C93F60", Offset = "0x5C92F60", VA = "0x5C93F60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel.<RestoreScrollPositionAfterLayout>d__89$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_MapEditorInspectPanel_RestoreScrollPositionAfterLayout_d__89_System_Collections_IEnumerator_R);
			throw (object)__this_00;
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
				// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__90$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__90$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6005385")]
		[Address(RVA = "0x5C93FB0", Offset = "0x5C92FB0", VA = "0x5C93FB0")]
		[DebuggerHidden]
		public _003CWaitAndEnablePanel_003Ed__90(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__90$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6005386")]
		[Address(RVA = "0x5C93FD0", Offset = "0x5C92FD0", VA = "0x5C93FD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__90$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6005387")]
		[Address(RVA = "0x5C93FE0", Offset = "0x5C92FE0", VA = "0x5C93FE0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__90$$MoveNext): clean
			int iVar1;
			MapEditorInspectPanel pUVar2;
			Transform __this_00;
			GameObject __this_01;
			object __this_02;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				__this_02 = new WaitForEndOfFrame();
				this.__2__current = __this_02;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				pUVar2 = this.__4__this;
				this.__1__state = -1;
				if ((pUVar2 != null) &&(__this_00 = pUVar2.SinglePanel, __this_00 != null)) {
					__this_01 = __this_00.gameObject;
					if (__this_01 != null) {
						__this_01.SetActive(true);
						goto label_05d9407f;
					}
				}
				throw new NullReferenceException();
			}
		label_05d9407f: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x6005389")]
		[Address(RVA = "0x5C940A0", Offset = "0x5C930A0", VA = "0x5C940A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__90$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_MapEditorInspectPanel_WaitAndEnablePanel_d__90_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
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
			// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$get_Width): clean
			return 400.0;
		}
	}

	[Token(Token = "0x17000E91")]
	protected override float Height
	{
		[Token(Token = "0x60052DF")]
		[Address(RVA = "0x5C7E7B0", Offset = "0x5C7D7B0", VA = "0x5C7E7B0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$get_Height): clean
			return 990.0;
		}
	}

	[Token(Token = "0x17000E92")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60052E0")]
		[Address(RVA = "0x5C7E7C0", Offset = "0x5C7D7C0", VA = "0x5C7E7C0", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$get_TopBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000E93")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60052E1")]
		[Address(RVA = "0x5C7E7D0", Offset = "0x5C7D7D0", VA = "0x5C7E7D0", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$get_BottomBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000E94")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60052E5")]
		[Address(RVA = "0x5C7EB60", Offset = "0x5C7DB60", VA = "0x5C7EB60", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$get_VerticalSpacing): clean
			return 10.0;
		}
	}

	[Token(Token = "0x17000E95")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60052E6")]
		[Address(RVA = "0x5C7EB70", Offset = "0x5C7DB70", VA = "0x5C7EB70", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$get_HorizontalPadding): clean
			return 0x19;
		}
	}

	[Token(Token = "0x17000E96")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60052E7")]
		[Address(RVA = "0x5C7EB80", Offset = "0x5C7DB80", VA = "0x5C7EB80", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$get_VerticalPadding): clean
			return 0xf;
		}
	}

	[Token(Token = "0x17000E97")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60052E8")]
		[Address(RVA = "0x5C7EB90", Offset = "0x5C7DB90", VA = "0x5C7EB90", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x60052E2")]
	[Address(RVA = "0x5C7E7E0", Offset = "0x5C7D7E0", VA = "0x5C7E7E0", Slot = "33")]
	protected override float GetWidth()
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$GetWidth): clean
		MapEditorSettings pSVar1;
		FloatSetting pSVar2;

		pSVar1 = SettingsManager.MapEditorSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.InspectorPanelWidth, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		return pSVar2._value;
	}

	[Token(Token = "0x60052E3")]
	[Address(RVA = "0x5C7E840", Offset = "0x5C7D840", VA = "0x5C7E840", Slot = "34")]
	protected override float GetHeight()
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$GetHeight): 4 lines keep C-only constructs
		bool bVar1;
		Canvas x;
		RectTransform __this_00;
		Il2CppClass klass;
		float fVar2;
		Rect UVar3;

		x = this.GetComponentInParent<Canvas>();
		bVar1 = ((Object)x != null);
		if (bVar1) {
			if ((x == null) ||(__this_00 = x.GetComponent<RectTransform>(), __this_00 == null)) {
				throw new NullReferenceException();
			}
			UVar3 = __this_00.rect;
			klass = typeof(MapEditorInspectPanel);
			if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
				klass = typeof(MapEditorInspectPanel);
			}
			typeof(MapEditorInspectPanel) = (MapEditorInspectPanel)klass;
			if (0.0 < UVar3.m_Height) {
				fVar2 = MapEditorInspectPanel.GetTopOffset();
				return UVar3.m_Height - fVar2;
			}
		}
		fVar2 = this.get_Height();
		return fVar2;
	}

	[Token(Token = "0x60052E4")]
	[Address(RVA = "0x5C7E9A0", Offset = "0x5C7D9A0", VA = "0x5C7E9A0")]
	private static float GetTopOffset()
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$GetTopOffset): 2 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		List<BasePopup> pSVar3;
		Vector2 UVar4;
		Vector2 UVar5;
		bool bVar6;
		BaseMenu pUVar7;
		RectTransform __this;
		BaseMenu x;
		float fVar8;
		float fStack_24;

		if (Il2CppMethodInitialized_07548007 == false) {
			Il2CppMethodInitialized_07548007 = true;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) goto label_05d7ea24;
	label_05d7e9c5: ;
			pUVar7 = UIManager.CurrentMenu;
			if (pUVar7 == null) goto label_05d7ea5c;
	label_05d7ea3c: ;
			bVar1 = (typeof(MapEditorMenu)._2).typeHierarchyDepth;
			if ((pUVar7.klass._2).typeHierarchyDepth < bVar1) goto label_05d7ea5c;
			x = null;
			if ((pUVar7.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(MapEditorMenu)) {
				x = pUVar7;
			}
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor != 0) goto label_05d7e9c5;
	label_05d7ea24: ;
			pUVar7 = UIManager.CurrentMenu;
			if (pUVar7 != null) goto label_05d7ea3c;
	label_05d7ea5c: ;
			x = null;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar6 = ((Object)x != null);
		if (bVar6) {
			if (x == null) {
	label_05d7eb50: ;
				throw new NullReferenceException();
			}
			pSVar3 = (*(ulong)((sbyte)x + 0xb8));
			bVar6 = ((Object)pSVar3 != null);
			if (bVar6) {
				pSVar3 = (*(ulong)((sbyte)x + 0xb8));
				if ((pSVar3 == null) ||(__this = pSVar3.GetComponent<RectTransform>(), __this == null)) goto label_05d7eb50;
				UVar4 = __this.sizeDelta;
				UVar5 = __this.anchoredPosition;
				fStack_24 = UVar4.y;
				fStack_24 = fStack_24 - UVar5.y;
				if (0.0 <= fStack_24) {
				}
			}
		}
		return fVar8;
	}

	[Token(Token = "0x60052E9")]
	[Address(RVA = "0x5C7EBA0", Offset = "0x5C7DBA0", VA = "0x5C7EBA0")]
	internal static string Locale(string item)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$Locale): clean
		String pSVar1;

		pSVar1 = UIManager.GetLocale("MapEditor", "Inspect", item, "", "");
		return pSVar1;
	}

	[Token(Token = "0x60052EA")]
	[Address(RVA = "0x5C7EC30", Offset = "0x5C7DC30", VA = "0x5C7EC30")]
	private static string GetComponentFieldKey(string componentName, string fieldName)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$GetComponentFieldKey): clean
		String pSVar1;

		pSVar1 = String.Concat("Component:", componentName, ":", fieldName);
		return pSVar1;
	}

	[Token(Token = "0x60052EB")]
	[Address(RVA = "0x5C7EC90", Offset = "0x5C7DC90", VA = "0x5C7EC90")]
	private void OnComponentFieldChanged(string componentName, string fieldName)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$OnComponentFieldChanged): clean
		HashSet<object> __this_00;
		MethodInfo method_00;

		__this_00 = (HashSet<object>)this._mixedFields;
		method_00 = (MethodInfo)String.Concat("Component:", componentName, ":", fieldName);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Remove((object)method_00);
		this.OnChange();
		return;
	}

	[Token(Token = "0x60052EC")]
	[Address(RVA = "0x5C82C70", Offset = "0x5C81C70", VA = "0x5C82C70")]
	private Transform CreateSection(string key, string title, ElementStyle style, [Optional][DefaultParameterValue(false)] bool contextMenu, [Optional] Transform parent)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$CreateSection): 3 lines keep C-only constructs
		HashSet<object> __this_00;
		bool bVar1;
		MapEditorInspectPanel.c__DisplayClass63_0 __this_01;
		Action<bool> __this_02;
		CollapsibleSection __this_03;
		GameObject pUVar2;
		RightClickHandler pUVar3;
		Action<PointerEventData> __this_04;
		Transform pUVar4;
		float spacing;

		if (Il2CppMethodInitialized_0754800b == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_0754800b = true;
		}
		__this_01 = new MapEditorInspectPanel.c__DisplayClass63_0();
		if (__this_01 != null) {
			__this_01.key = key;
			__this_01.__4__this = this;
			bVar1 = ((Object)parent == null);
			if (bVar1) {
				parent = this.SinglePanel;
			}
			if ((typeof(MapEditorInspectPanel)._2).cctor_finished_or_no_cctor == 0) {
				__this_00 = (HashSet<object>)MapEditorInspectPanel.CollapsedSections;
			}
			else {
				__this_00 = (HashSet<object>)MapEditorInspectPanel.CollapsedSections;
			}
			if (__this_00 != null) {
				bVar1 = __this_00.Contains((object)__this_01.key);
				__this_02 = new Action<bool>((object)__this_01, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass63_0_CreateSection_b__0);
				__this_03 = ElementFactory.CreateCollapsibleSection(parent, style, title, !bVar1, __this_02);
				if (contextMenu) {
					if ((__this_03 == null) ||(pUVar2 = __this_03.gameObject, pUVar2 == null)) goto label_05d82efb;
					pUVar3 = pUVar2.AddComponent<RightClickHandler>();
					__this_04 = new Action<PointerEventData>((object)__this_01, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass63_0_CreateSection_b__1);
					if (pUVar3 == null) goto label_05d82efb;
					pUVar3._onRightClick = __this_04;
				}
				spacing = this.get_VerticalSpacing();
				pUVar2 = ElementFactory.CreateVerticalGroup(parent, spacing, 0);
				if ((__this_03 != null) &&(__this_03.AddChild(pUVar2), pUVar2 != null)) {
					return pUVar4;
				}
			}
		}
	label_05d82efb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60052ED")]
	[Address(RVA = "0x5C82F00", Offset = "0x5C81F00", VA = "0x5C82F00")]
	private void ShowSectionContextMenu(string key, PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$ShowSectionContextMenu): 69 lines keep C-only constructs
		int piVar1;
		MapEditorContextMenu* targetAddress;
		uint uVar2;
		MapEditorMenu pUVar3;
		MapEditorContextMenu.Item[] pUVar4;
		MapEditorContextMenu.Item item;
		MapEditorContextMenu.Item item_00;
		MapEditorContextMenu.Item item_01;
		MapEditorContextMenu.Item item_02;
		MapEditorContextMenu.Item item_03;
		MapEditorContextMenu.Item pUVar5;
		bool bVar6;
		MapEditorInspectPanel.c__DisplayClass64_0 __this_00;
		Transform pUVar7;
		String pSVar8;
		MapEditorContextMenu pUVar9;
		List<MapEditorContextMenu.Item> __this_01;
		Action pSVar10;
		MethodInfo pMVar11;
		long lVar12;
		PointerEventData eventData_00;
		String pSStack_c8;
		Action pSStack_c0;
		ulong uStack_b8;
		String pSStack_b0;
		Action pSStack_a8;
		ulong uStack_a0;
		MapEditorContextMenu pUStack_98;
		String pSStack_90;
		Action pSStack_88;
		ulong uStack_80;
		PointerEventData pUStack_78;
		MapEditorContextMenu pUStack_70;
		Vector3 UStack_68;
		Vector3 UStack_58;
		Vector3 UStack_48;
		MapScriptComponent pMStack_38;

		pMStack_38 = null;
		UStack_48.z = 0.0;
		UStack_48.x = 0.0;
		UStack_48.y = 0.0;
		UStack_58.z = 0.0;
		UStack_58.x = 0.0;
		UStack_58.y = 0.0;
		UStack_68.z = 0.0;
		UStack_68.x = 0.0;
		UStack_68.y = 0.0;
		__this_00 = new MapEditorInspectPanel.c__DisplayClass64_0();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			pUVar3 = this._menu;
			if (pUVar3 != null) {
				bVar6 = pUVar3.IsPopupActive();
				if (!bVar6) {
					targetAddress = &this._contextMenu;
					pUStack_78 = eventData;
					if (this._contextMenu == null) {
						pUVar3 = this._menu;
						pUStack_98 = (MapEditorContextMenu)key;
						if (pUVar3 == null) goto label_05d83815;
						pUVar7 = pUVar3.transform;
						pSVar8 = this.get_ThemePanel();
						pUVar9 = new MapEditorContextMenu();
						pUVar9._parent = pUVar7;
						pUVar9._themePanel = pSVar8;
						this._contextMenu = pUVar9;
						key = (String)pUStack_98;
					}
					bVar6 = (key == "Transform");
					if (bVar6) {
						pUStack_98 = *targetAddress;
						__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<MapEditorContextMenu.Item>));
						__this_01 = new List<MapEditorContextMenu.Item>();
						pSVar8 = UIManager.GetLocaleCommon("Copy");
						pSVar10 = new Action((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_CopyTransform);
						pSStack_a8 = null;
						uStack_a0 = 0;
						pSStack_b0 = pSVar8;
						pSStack_a8 = pSVar10;
						uStack_a0 = CONCAT62(uStack_a0._2_6_, 1);
						if (__this_01 == null) goto label_05d83815;
						piVar1 = &__this_01._version;
						*piVar1 = *piVar1 + 1;
						pUVar4 = __this_01._items;
						if (pUVar4 == null) goto label_05d83815;
						uVar2 = __this_01._size;
						if (uVar2 < (uint)pUVar4.Length) {
							__this_01._size = uVar2 + 1;
							pUVar5 = pUVar4.m_Items + (int)uVar2;
							uStack_a0._0_1_ = (undefined1)1;
							uStack_a0._1_1_ = (undefined1)(1 >> 8);
							pUVar5.Enabled = (bool)(undefined1)uStack_a0;
							pUVar5.SeparatorBefore = (bool)uStack_a0._1_1_;
							*(undefined6)&pUVar5.field_0x12 = uStack_a0._2_6_;
							pUVar4[(int)uVar2].Label = pSStack_b0;
							pUVar4[(int)uVar2].Action = pSStack_a8;
						}
						else {
							item.Action = pSStack_a8;
							item.Label = pSStack_b0;
							uStack_a0._0_1_ = (undefined1)1;
							uStack_a0._1_1_ = (undefined1)(1 >> 8);
							item.Enabled = (bool)(undefined1)uStack_a0;
							item.SeparatorBefore = (bool)uStack_a0._1_1_;
							item._18_6_ = uStack_a0._2_6_;
							__this_01.AddWithResize(item);
						}
						pSVar8 = UIManager.GetLocale("MapEditorSettings", "Keybinds", "Paste", "", "");
						pSVar10 = new Action((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_PasteTransform);
						bVar6 = MapEditorInspectPanel.TryReadTransformClipboard(ref UStack_48, ref UStack_58, ref UStack_68);
						pSStack_c0 = null;
						uStack_b8 = 0;
						pSStack_c8 = pSVar8;
						pSStack_c0 = pSVar10;
						uStack_b8._0_2_ = (ushort)bVar6;
						piVar1 = &__this_01._version;
						*piVar1 = *piVar1 + 1;
						pUVar4 = __this_01._items;
						if (pUVar4 == null) goto label_05d83815;
						uVar2 = __this_01._size;
						lVar12 = (long)(int)uVar2;
						if (uVar2 < (uint)pUVar4.Length) {
							__this_01._size = uVar2 + 1;
							pMVar11 = (MethodInfo)(lVar12 * 3);
							pUVar5 = pUVar4.m_Items + lVar12;
							pUVar5.Enabled = (bool)(undefined1)uStack_b8;
							pUVar5.SeparatorBefore = (bool)uStack_b8._1_1_;
							*(undefined6)&pUVar5.field_0x12 = uStack_b8._2_6_;
							pUVar4[lVar12].Label = pSStack_c8;
							pUVar4[lVar12].Action = pSStack_c0;
						}
						else {
							item_00.Action = pSStack_c0;
							item_00.Label = pSStack_c8;
							item_00.Enabled = (bool)(undefined1)uStack_b8;
							item_00.SeparatorBefore = (bool)uStack_b8._1_1_;
							item_00._18_6_ = uStack_b8._2_6_;
							__this_01.AddWithResize(item_00);
						}
						if (pUStack_98 == null) goto label_05d83815;
						eventData_00 = pUStack_78;
						pUVar9 = pUStack_98;
					}
					else {
						if ((MapEditorContextMenu)key == null) goto label_05d83815;
						bVar6 = key.StartsWith("Component:");
						if (!bVar6) {
							return;
						}
						if ("Component:" == null) goto label_05d83815;
						pSVar8 = key.Substring(("Component:".fields)._stringLength);
						__this_00.componentName = pSVar8;
						bVar6 = this.TryReadComponentClipboard(ref pMStack_38);
						pUStack_98 = (MapEditorContextMenu)CONCAT71(pUStack_98._1_7_, bVar6);
						pUStack_70 = this._contextMenu;
						__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<MapEditorContextMenu.Item>));
						__this_01 = new List<MapEditorContextMenu.Item>();
						pSVar8 = UIManager.GetLocaleCommon("Copy");
						pSVar10 = new Action((object)__this_00, (intptr_t) MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass64_0_ShowSectionContextMenu_b__0);
						pSStack_a8 = null;
						uStack_a0 = 0;
						pSStack_b0 = pSVar8;
						pSStack_a8 = pSVar10;
						uStack_a0 = CONCAT62(uStack_a0._2_6_, 1);
						if (__this_01 == null) goto label_05d83815;
						piVar1 = &__this_01._version;
						*piVar1 = *piVar1 + 1;
						pUVar4 = __this_01._items;
						if (pUVar4 == null) goto label_05d83815;
						uVar2 = __this_01._size;
						if (uVar2 < (uint)pUVar4.Length) {
							__this_01._size = uVar2 + 1;
							pUVar5 = pUVar4.m_Items + (int)uVar2;
							uStack_a0._0_1_ = (undefined1)1;
							uStack_a0._1_1_ = (undefined1)(1 >> 8);
							pUVar5.Enabled = (bool)(undefined1)uStack_a0;
							pUVar5.SeparatorBefore = (bool)uStack_a0._1_1_;
							*(undefined6)&pUVar5.field_0x12 = uStack_a0._2_6_;
							pUVar4[(int)uVar2].Label = pSStack_b0;
							pUVar4[(int)uVar2].Action = pSStack_a8;
						}
						else {
							item_01.Action = pSStack_a8;
							item_01.Label = pSStack_b0;
							uStack_a0._0_1_ = (undefined1)1;
							uStack_a0._1_1_ = (undefined1)(1 >> 8);
							item_01.Enabled = (bool)(undefined1)uStack_a0;
							item_01.SeparatorBefore = (bool)uStack_a0._1_1_;
							item_01._18_6_ = uStack_a0._2_6_;
							__this_01.AddWithResize(item_01);
						}
						pSVar8 = UIManager.GetLocale("MapEditorSettings", "Keybinds", "Paste", "", "");
						pSVar10 = new Action((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_PasteComponent);
						pSStack_c0 = null;
						uStack_b8 = 0;
						pSStack_c8 = pSVar8;
						pSStack_c0 = pSVar10;
						uStack_b8._0_2_ = (ushort)(byte)pUStack_98;
						piVar1 = &__this_01._version;
						*piVar1 = *piVar1 + 1;
						pUVar4 = __this_01._items;
						if (pUVar4 == null) goto label_05d83815;
						uVar2 = __this_01._size;
						if (uVar2 < (uint)pUVar4.Length) {
							__this_01._size = uVar2 + 1;
							pUVar5 = pUVar4.m_Items + (int)uVar2;
							pUVar5.Enabled = (bool)(undefined1)uStack_b8;
							pUVar5.SeparatorBefore = (bool)uStack_b8._1_1_;
							*(undefined6)&pUVar5.field_0x12 = uStack_b8._2_6_;
							pUVar4[(int)uVar2].Label = pSStack_c8;
							pUVar4[(int)uVar2].Action = pSStack_c0;
						}
						else {
							item_02.Action = pSStack_c0;
							item_02.Label = pSStack_c8;
							item_02.Enabled = (bool)(undefined1)uStack_b8;
							item_02.SeparatorBefore = (bool)uStack_b8._1_1_;
							item_02._18_6_ = uStack_b8._2_6_;
							__this_01.AddWithResize(item_02);
						}
						pSVar8 = UIManager.GetLocaleCommon("Delete");
						pSVar10 = new Action((object)__this_00, (intptr_t) MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass64_0_ShowSectionContextMenu_b__1);
						pSStack_88 = null;
						uStack_80 = 0;
						pSStack_90 = pSVar8;
						pSStack_88 = pSVar10;
						eventData_00 = pUStack_78;
						uStack_80 = CONCAT62(uStack_80._2_6_, 0x101);
						piVar1 = &__this_01._version;
						*piVar1 = *piVar1 + 1;
						pUVar4 = __this_01._items;
						if (pUVar4 == null) goto label_05d83815;
						uVar2 = __this_01._size;
						lVar12 = (long)(int)uVar2;
						if (uVar2 < (uint)pUVar4.Length) {
							__this_01._size = uVar2 + 1;
							pMVar11 = (MethodInfo)(lVar12 * 3);
							pUVar5 = pUVar4.m_Items + lVar12;
							uStack_80._0_1_ = (undefined1)0x101;
							uStack_80._1_1_ = (undefined1)(0x101 >> 8);
							pUVar5.Enabled = (bool)(undefined1)uStack_80;
							pUVar5.SeparatorBefore = (bool)uStack_80._1_1_;
							*(undefined6)&pUVar5.field_0x12 = uStack_80._2_6_;
							pUVar4[lVar12].Label = pSStack_90;
							pUVar4[lVar12].Action = pSStack_88;
						}
						else {
							item_03.Action = pSStack_88;
							item_03.Label = pSStack_90;
							uStack_80._0_1_ = (undefined1)0x101;
							uStack_80._1_1_ = (undefined1)(0x101 >> 8);
							item_03.Enabled = (bool)(undefined1)uStack_80;
							item_03.SeparatorBefore = (bool)uStack_80._1_1_;
							item_03._18_6_ = uStack_80._2_6_;
							__this_01.AddWithResize(item_03);
						}
						if (pUStack_70 == null) goto label_05d83815;
						pUVar9 = pUStack_70;
					}
					pUVar9.Show(eventData_00, (System_Collections_Generic_IList_MapEditorContextMenu_Item__o)__this_01);
				}
				return;
			}
		}
	label_05d83815: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60052EE")]
	[Address(RVA = "0x5C83DC0", Offset = "0x5C82DC0", VA = "0x5C83DC0")]
	private void CopyTransform()
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$CopyTransform): 1 lines keep C-only constructs
		byte bVar1;
		MapObject pMVar2;
		String[] value;
		String pSVar3;
		Encoding pSVar4;
		Byte[] inArray;
		MapScriptBaseObject __this_00;
		Vector3 UVar5;

		pMVar2 = this._mapObject;
		if (pMVar2 != null) {
			__this_00 = pMVar2.ScriptObject;
			if (__this_00 == null) {
				new string[3];
				throw new NullReferenceException();
			}
			bVar1 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapScriptSceneObject))) {
				throw new InvalidCastException();
			}
			value = (String[])new string[3];
			UVar5 = __this_00.GetPosition();
			pSVar3 = MapEditorInspectPanel.SerializeVector(UVar5);
			if (value != null) {
				if ((int)value.Length != 0) {
					value[0] = pSVar3;
					UVar5 = __this_00.GetRotation();
					pSVar3 = MapEditorInspectPanel.SerializeVector(UVar5);
					if ((value.Length & 0xfffffffe) != 0) {
						value[1] = pSVar3;
						UVar5 = __this_00.GetScale();
						pSVar3 = MapEditorInspectPanel.SerializeVector(UVar5);
						if (2 < (uint)value.Length) {
							value[2] = pSVar3;
							pSVar3 = String.Join("|", value);
							pSVar4 = Encoding.UTF8;
							if (pSVar4 != null) {
								inArray = pSVar4.GetBytes(pSVar3);
								pSVar3 = Convert.ToBase64String(inArray);
								pSVar3 = String.Concat("AOTTG2_TRANSFORM_V1:", pSVar3);
								GUIUtility.systemCopyBuffer = pSVar3;
								return;
							}
							goto label_05d83ff3;
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05d83ff3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60052EF")]
	[Address(RVA = "0x5C84020", Offset = "0x5C83020", VA = "0x5C84020")]
	private static string SerializeVector(Vector3 value)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$SerializeVector): 2 lines keep C-only constructs
		String[] value_00;
		CultureInfo pSVar1;
		String pSVar2;
		ulong local_28;
		float[] local_20 = new float[2];

		local_20[0] = value.z;
		local_28 = value._0_8_;
		value_00 = (String[])new string[3];
		pSVar1 = CultureInfo.InvariantCulture;
		pSVar2 = local_28.ToString("R", (IFormatProvider)pSVar1);
		if (value_00 == null) {
			throw new NullReferenceException();
		}
		if ((int)value_00.Length != 0) {
			value_00[0] = pSVar2;
			pSVar1 = CultureInfo.InvariantCulture;
			pSVar2 = (((long)&local_28 + 4)).ToString("R", (IFormatProvider)pSVar1);
			if ((value_00.Length & 0xfffffffe) != 0) {
				value_00[1] = pSVar2;
				pSVar1 = CultureInfo.InvariantCulture;
				pSVar2 = local_20.ToString("R", (IFormatProvider)pSVar1) ;
				if (2 < (uint)value_00.Length) {
					value_00[2] = pSVar2;
					pSVar2 = String.Join(",", value_00);
					return pSVar2;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60052F0")]
	[Address(RVA = "0x5C83820", Offset = "0x5C82820", VA = "0x5C83820")]
	private static bool TryReadTransformClipboard(out Vector3 position, out Vector3 rotation, out Vector3 scale)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$TryReadTransformClipboard): clean
		float fVar1;
		uint uVar2;
		uint uVar3;
		bool bVar5;
		String pSVar6;
		Encoding pSVar7;
		Byte[] pSVar8;
		String[] pSVar9;

		uVar2 = (Vector3.zeroVector).x;
		uVar3 = (Vector3.zeroVector).y;
		fVar1 = (Vector3.zeroVector).z;
		scale.x = (float)uVar2;
		scale.y = (float)uVar3;
		scale.z = fVar1;
		rotation.x = (float)uVar2;
		rotation.y = (float)uVar3;
		rotation.z = fVar1;
		position.x = (float)uVar2;
		position.y = (float)uVar3;
		position.z = fVar1;
		pSVar6 = GUIUtility.systemCopyBuffer;
		bVar5 = String.IsNullOrEmpty(pSVar6);
		if (!bVar5) {
			if (pSVar6 == null) {
				throw new NullReferenceException();
			}
			bVar5 = pSVar6.StartsWith("AOTTG2_TRANSFORM_V1:");
			if (bVar5) {
				pSVar7 = Encoding.UTF8;
				if ("AOTTG2_TRANSFORM_V1:" == null) {
					throw new NullReferenceException();
				}
				pSVar6 = pSVar6.Substring(("AOTTG2_TRANSFORM_V1:".fields)._stringLength);
				pSVar8 = Convert.FromBase64String(pSVar6);
				if (pSVar7 == null) {
					throw new NullReferenceException();
				}
				pSVar6 = pSVar7.GetString(pSVar8);
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				pSVar9 = pSVar6.Split(0x7c, 0);
				if (pSVar9 == null) {
					throw new NullReferenceException();
				}
				if ((int)pSVar9.Length == 3) {
					pSVar6 = pSVar9[0];
					if ((typeof(MapEditorInspectPanel)._2).cctor_finished_or_no_cctor == 0) {
					}
					bVar5 = MapEditorInspectPanel.TryParseVector(pSVar6, position);
					if (bVar5) {
						if ((pSVar9.Length & 0xfffffffe) == 0) {
							throw new IndexOutOfRangeException();
						}
						pSVar6 = pSVar9[1];
						if ((typeof(MapEditorInspectPanel)._2).cctor_finished_or_no_cctor == 0) {
						}
						bVar5 = MapEditorInspectPanel.TryParseVector(pSVar6, rotation);
						if (bVar5) {
							if ((uint)pSVar9.Length < 3) {
								throw new IndexOutOfRangeException();
							}
							pSVar6 = pSVar9[2];
							if ((typeof(MapEditorInspectPanel)._2).cctor_finished_or_no_cctor == 0) {
							}
							bVar5 = MapEditorInspectPanel.TryParseVector(pSVar6, scale);
							return bVar5;
						}
					}
				}
			}
		}
		return false;
	}

	[Token(Token = "0x60052F1")]
	[Address(RVA = "0x5C84180", Offset = "0x5C83180", VA = "0x5C84180")]
	private static bool TryParseVector(string serialized, out Vector3 value)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$TryParseVector): clean
		float fVar1;
		String pSVar3;
		float fVar4;
		bool bVar5;
		String[] pSVar6;
		CultureInfo pSVar7;
		bool bVar8;
		float local_34;
		float local_30;
		float local_2c;

		local_2c = 0.0;
		local_30 = 0.0;
		local_34 = 0.0;
		fVar4 = (Vector3.zeroVector).y;
		fVar1 = (Vector3.zeroVector).z;
		value.x = (Vector3.zeroVector).x;
		value.y = fVar4;
		value.z = fVar1;
		if (serialized != null) {
			pSVar6 = serialized.Split(0x2c, 0);
			if (pSVar6 != null) {
				if ((int)pSVar6.Length == 3) {
					pSVar3 = pSVar6[0];
					pSVar7 = CultureInfo.InvariantCulture;
					bVar5 = Single.TryParse(pSVar3, 0xa7, (IFormatProvider)pSVar7, ref local_2c);
					if (bVar5) {
						if ((pSVar6.Length & 0xfffffffe) == 0) {
	label_05d8434b: ;
							throw new IndexOutOfRangeException();
						}
						pSVar3 = pSVar6[1];
						pSVar7 = CultureInfo.InvariantCulture;
						bVar5 = Single.TryParse(pSVar3, 0xa7, (IFormatProvider)pSVar7, ref local_30);
						if (bVar5) {
							if ((uint)pSVar6.Length < 3) goto label_05d8434b;
							pSVar3 = pSVar6[2];
							pSVar7 = CultureInfo.InvariantCulture;
							bVar5 = Single.TryParse(pSVar3, 0xa7, (IFormatProvider)pSVar7, ref local_34);
							if (bVar5) {
								value.x = local_2c;
								value.y = local_30;
								value.z = local_34;
							}
						}
					}
				}
				else {
				}
				return bVar8;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60052F2")]
	[Address(RVA = "0x5C84350", Offset = "0x5C83350", VA = "0x5C84350")]
	private void PasteTransform()
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$PasteTransform): 1 lines keep C-only constructs
		HashSet<@object> __this_00;
		object @object;
		FloatSetting pSVar1;
		MapEditorMenu __this_01;
		bool bVar2;
		UI_MapEditorInspectPanel___c_StaticFields pUVar3;
		Predicate<T> match;
		Vector3 UStack_58;
		Vector3 UStack_48;
		Vector3 UStack_38;

		UStack_38.z = 0.0;
		UStack_38.x = 0.0;
		UStack_38.y = 0.0;
		UStack_48.z = 0.0;
		UStack_48.x = 0.0;
		UStack_48.y = 0.0;
		UStack_58.z = 0.0;
		UStack_58.x = 0.0;
		UStack_58.y = 0.0;
		bVar2 = MapEditorInspectPanel.TryReadTransformClipboard(ref UStack_38, ref UStack_48, ref UStack_58);
		if (!bVar2) {
			return;
		}
		__this_00 = (HashSet<@object>)this._mixedFields;
		if ((typeof(MapEditorInspectPanel.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar3 = typeof(MapEditorInspectPanel.c).static_fields;
			match = (Predicate<T>)pUVar3.__9__69_0;
		}
		else {
			pUVar3 = typeof(MapEditorInspectPanel.c).static_fields;
			match = (Predicate<T>)pUVar3.__9__69_0;
		}
		if (match == null) {
			if (((typeof(MapEditorInspectPanel.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar3 = typeof(MapEditorInspectPanel.c).static_fields;
			}
			@object = (object)pUVar3.__9;
			match = new Predicate<string>(@object, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_PasteTransform_b__69_0);
			pUVar3 = typeof(MapEditorInspectPanel.c).static_fields;
			pUVar3.__9__69_0 = (Predicate<string>)match;
		}
		if (__this_00 != null) {
			__this_00.RemoveWhere(match);
			pSVar1 = this._positionX;
			if (pSVar1 != null) {
				pSVar1.Value = UStack_38.x;
				pSVar1 = this._positionY;
				if (pSVar1 != null) {
					pSVar1.Value = UStack_38.y;
					pSVar1 = this._positionZ;
					if (pSVar1 != null) {
						pSVar1.Value = UStack_38.z;
						pSVar1 = this._rotationX;
						if (pSVar1 != null) {
							pSVar1.Value = UStack_48.x;
							pSVar1 = this._rotationY;
							if (pSVar1 != null) {
								pSVar1.Value = UStack_48.y;
								pSVar1 = this._rotationZ;
								if (pSVar1 != null) {
									pSVar1.Value = UStack_48.z;
									pSVar1 = this._scaleX;
									if (pSVar1 != null) {
										pSVar1.Value = UStack_58.x;
										pSVar1 = this._scaleY;
										if (pSVar1 != null) {
											pSVar1.Value = UStack_58.y;
											pSVar1 = this._scaleZ;
											if (pSVar1 != null) {
												pSVar1.Value = UStack_58.z;
												this.OnChange();
												__this_01 = this._menu;
												if (__this_01 != null) {
													__this_01.ShowInspector(this._mapObjects);
													return;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60052F3")]
	[Address(RVA = "0x5C84640", Offset = "0x5C83640", VA = "0x5C84640")]
	private void CopyComponent(string componentName)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$CopyComponent): 5 lines keep C-only constructs
		byte bVar1;
		MapObject pMVar2;
		MapScriptBaseObject pMVar3;
		System_Collections_Generic_IEnumerable_TSource__o source;
		MapEditorInspectPanel.c__DisplayClass70_0 __this_00;
		Func<MapScriptComponent, bool> __this_01;
		MapScriptComponent pMVar4;
		Encoding pSVar5;
		String pSVar6;
		Byte[] inArray;

		__this_00 = new MapEditorInspectPanel.c__DisplayClass70_0();
		if (__this_00 != null) {
			__this_00.componentName = componentName;
			pMVar2 = this._mapObject;
			if ((pMVar2 != null) &&(pMVar3 = pMVar2.ScriptObject, pMVar3 != null)) {
				bVar1 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
				if (((pMVar3.klass._2).typeHierarchyDepth < bVar1) ||((pMVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapScriptSceneObject))) {
					throw new InvalidCastException();
				}
				source = *(System_Collections_Generic_IEnumerable_TSource__o*)&(*(uint)((sbyte)pMVar3 + 0x80));
				__this_01 = new Func<MapScriptComponent, bool>((object)__this_00, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass70_0_CopyComponent_b__0);
				pMVar4 = Enumerable.FirstOrDefault<MapScriptComponent>(source, (System_Func_TSource__bool__o)__this_01);
				if (pMVar4 == null) {
					return;
				}
				pSVar5 = Encoding.UTF8;
				pSVar6 = pMVar4.Serialize();
				if (pSVar5 != null) {
					inArray = pSVar5.GetBytes(pSVar6);
					pSVar6 = Convert.ToBase64String(inArray);
					pSVar6 = String.Concat("AOTTG2_COMPONENT_V1:", pSVar6);
					GUIUtility.systemCopyBuffer = pSVar6;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60052F4")]
	[Address(RVA = "0x5C83B20", Offset = "0x5C82B20", VA = "0x5C83B20")]
	private bool TryReadComponentClipboard(out MapScriptComponent component)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$TryReadComponentClipboard): clean
		MapEditorGameManager pGVar1;
		CustomLogicEvaluator __this_00;
		bool bVar2;
		String pSVar3;
		MapScriptComponent __this_01;
		Encoding pSVar4;
		Byte[] pSVar5;
		List<string> __this_02;

		*component = null;
		pSVar3 = GUIUtility.systemCopyBuffer;
		bVar2 = String.IsNullOrEmpty(pSVar3);
		if (!bVar2) {
			if (pSVar3 == null) {
				throw new NullReferenceException();
			}
			bVar2 = pSVar3.StartsWith("AOTTG2_COMPONENT_V1:");
			if (bVar2) {
				__this_01 = new MapScriptComponent();
				pSVar4 = Encoding.UTF8;
				if ("AOTTG2_COMPONENT_V1:" == null) {
					throw new NullReferenceException();
				}
				pSVar3 = pSVar3.Substring(("AOTTG2_COMPONENT_V1:".fields)._stringLength);
				pSVar5 = Convert.FromBase64String(pSVar3);
				if (pSVar4 == null) {
					throw new NullReferenceException();
				}
				pSVar3 = pSVar4.GetString(pSVar5);
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				__this_01.Deserialize(pSVar3);
				bVar2 = String.IsNullOrEmpty(__this_01.ComponentName);
				if (!bVar2) {
					pGVar1 = this._gameManager;
					if (pGVar1 == null) {
						throw new NullReferenceException();
					}
					__this_00 = pGVar1.LogicEvaluator;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					__this_02 = __this_00.GetComponentNames();
					if (__this_02 == null) {
						throw new NullReferenceException();
					}
					bVar2 = __this_02.Contains((object)__this_01.ComponentName);
					if (bVar2) {
						*component = __this_01;
						return true;
					}
				}
			}
		}
		return false;
	}

	[Token(Token = "0x60052F5")]
	[Address(RVA = "0x5C84860", Offset = "0x5C83860", VA = "0x5C84860")]
	private void PasteComponent()
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$PasteComponent): 8 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		List<MapObject> __this_00;
		Il2CppClass pIVar4;
		IntPtr pvVar5;
		List<object> pSVar6;
		Object[] pSVar7;
		MapEditorMenu __this_01;
		bool bVar9;
		int index;
		MapEditorInspectPanel.c__DisplayClass72_0 __this_02;
		Predicate<T> match;
		MapScriptComponent pMVar10;
		Predicate<MapScriptComponent>* targetAddress;
		byte[] auStack_68 = new byte[8];
		object pIStack_58;
		byte[] auStack_48 = new byte[16];
		object pIStack_38;

		auStack_68 = (byte[])0x0;
		pIStack_58 = null;
		__this_02 = new MapEditorInspectPanel.c__DisplayClass72_0();
		if (__this_02 != null) {
			bVar9 = this.TryReadComponentClipboard(ref __this_02.copied);
			if (!bVar9) {
				return;
			}
			__this_00 = this._mapObjects;
			if (__this_00 != null) {
				auStack_48.GetEnumerator((List<object>)__this_00);
				pIStack_58 = pIStack_38;
				auStack_68 = (byte[])auStack_48._0_8_;
				auStack_48._0_8_ = null;
				auStack_48._8_8_ = auStack_68;
				targetAddress = &__this_02.__9__0;
				while (bVar9 = auStack_68.MoveNext()) {
					if (pIStack_58 == null) {
						throw new NullReferenceException();
					}
					pIVar4 = pIStack_58[2].klass;
					if (pIVar4 == null) {
						throw new NullReferenceException();
					}
					pvVar5 = (pIVar4._1).image;
					bVar2 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
					if ((*(byte)((long)pvVar5 + 0x130) < bVar2) ||(*(MapScriptSceneObject*)(*(long)((long)pvVar5 + 200) + -8 + (ulong)bVar2 * 8) != typeof(MapScriptSceneObject))) {
						throw new InvalidCastException();
					}
					pSVar6 = (pIVar4._1);
					match = (Predicate<T>)*targetAddress;
					if (match == null) {
						match = new Predicate<MapScriptComponent>((object)__this_02, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass72_0_PasteComponent_b__0);
						*targetAddress = (Predicate<MapScriptComponent>)match;
					}
					if (pSVar6 == null) {
						throw new NullReferenceException();
					}
					index = pSVar6.FindIndex(match);
					pMVar10 = __this_02.copied;
					pMVar10 = MapEditorInspectPanel.CloneComponent(pMVar10);
					pSVar6 = (pIVar4._1);
					if (index < 0) {
						if (pSVar6 == null) {
	label_05d84bb9: ;
							throw new NullReferenceException();
						}
						piVar1 = &pSVar6._version;
						*piVar1 = *piVar1 + 1;
						pSVar7 = pSVar6._items;
						if (pSVar7 == null) goto label_05d84bb9;
						uVar3 = pSVar6._size;
						if (uVar3 < (uint)pSVar7.Length) {
							pSVar6._size = uVar3 + 1;
							pSVar7[(int)uVar3] = (object)pMVar10;
						}
						else {
							pSVar6.AddWithResize((object)pMVar10);
						}
					}
					else {
						if (pSVar6 == null) {
							throw new NullReferenceException();
						}
						pSVar6.set_Item(index, (object)pMVar10);
					}
				}
				auStack_68.Dispose();
				__this_01 = this._menu;
				if (__this_01 != null) {
					__this_01.ShowInspector(this._mapObjects);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60052F6")]
	[Address(RVA = "0x5C84D10", Offset = "0x5C83D10", VA = "0x5C84D10")]
	private void DeleteComponent(string componentName)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$DeleteComponent): 7 lines keep C-only constructs
		byte bVar1;
		List<MapObject> __this_00;
		Il2CppClass pIVar2;
		IntPtr pvVar3;
		List<object> __this_01;
		MapEditorMenu __this_02;
		bool bVar4;
		MapEditorInspectPanel.c__DisplayClass73_0 __this_03;
		Predicate<T> match;
		Predicate<MapScriptComponent>* targetAddress;
		byte[] auStack_70 = new byte[16];
		object pIStack_60;
		byte[] auStack_58 = new byte[16];
		object pIStack_48;
		MapEditorInspectPanel.c__DisplayClass73_0 pUStack_38;

		__this_03 = new MapEditorInspectPanel.c__DisplayClass73_0();
		if (__this_03 != null) {
			__this_03.componentName = componentName;
			__this_00 = this._mapObjects;
			if (__this_00 != null) {
				auStack_70.GetEnumerator((List<object>)__this_00);
				pIStack_48 = pIStack_60;
				auStack_58._0_8_ = auStack_70._0_8_;
				auStack_58._8_8_ = auStack_70._8_8_;
				auStack_70._0_8_ = null;
				targetAddress = &__this_03.__9__0;
				auStack_70._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_58;
				pUStack_38 = __this_03;
				while(true) {
					bVar4 = auStack_58.MoveNext();
					if (!bVar4) break;
					if (pIStack_48 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = pIStack_48[2].klass;
					if (pIVar2 == null) {
						throw new NullReferenceException();
					}
					pvVar3 = (pIVar2._1).image;
					bVar1 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
					if ((*(byte)((long)pvVar3 + 0x130) < bVar1) ||(*(MapScriptSceneObject*)(*(long)((long)pvVar3 + 200) + -8 + (ulong)bVar1 * 8) != typeof(MapScriptSceneObject))) {
						throw new InvalidCastException();
					}
					__this_01 = (pIVar2._1);
					match = (Predicate<T>)*targetAddress;
					if (match == null) {
						match = new Predicate<MapScriptComponent>((object)pUStack_38, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass73_0_DeleteComponent_b__0);
						*targetAddress = (Predicate<MapScriptComponent>)match;
					}
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
					__this_01.RemoveAll(match);
				}
				auStack_58.Dispose();
				__this_02 = this._menu;
				if (__this_02 != null) {
					__this_02.ShowInspector(this._mapObjects);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60052F7")]
	[Address(RVA = "0x5C84C50", Offset = "0x5C83C50", VA = "0x5C84C50")]
	private static MapScriptComponent CloneComponent(MapScriptComponent source)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$CloneComponent): clean
		List<string> collection;
		MapScriptComponent __this;
		List<string> __this_00;

		__this = new MapScriptComponent();
		if ((source == null) || (__this == null)) {
			throw new NullReferenceException();
		}
		__this.ComponentName = source.ComponentName;
		collection = source.Parameters;
		__this_00 = new List<string>((IEnumerable<T>)collection);
		__this.Parameters = __this_00;
		return __this;
	}

	[Token(Token = "0x60052F8")]
	[Address(RVA = "0x5C84FD0", Offset = "0x5C83FD0", VA = "0x5C84FD0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$OnDestroy): clean
		MapEditorContextMenu pUVar1;
		Object pUVar2;
		bool bVar3;

		pUVar1 = this._contextMenu;
		if (pUVar1 != null) {
			pUVar2 = (Object)pUVar1._root;
			bVar3 = (pUVar2 != null);
			if (bVar3) {
				pUVar2 = (Object)pUVar1._root;
				Object.Destroy(pUVar2);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60052F9")]
	[Address(RVA = "0x5C85060", Offset = "0x5C84060", VA = "0x5C85060", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$Setup): 4 lines keep C-only constructs
		byte bVar1;
		MapEditorGameManager pGVar2;
		MapEditorMenu method_00;

		this.Setup(parent);
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			method_00 = (MapEditorMenu)UIManager.CurrentMenu;
			if (method_00 != null) goto label_05d850da;
	label_05d85155: ;
			this._menu = null;
		}
		else {
			method_00 = (MapEditorMenu)UIManager.CurrentMenu;
			if (method_00 == null) goto label_05d85155;
	label_05d850da: ;
			pGVar2 = (MapEditorGameManager)typeof(MapEditorMenu);
			bVar1 = (typeof(MapEditorMenu)._2).typeHierarchyDepth;
			if (((((BaseGameManager)method_00.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)method_00.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorMenu))) goto label_05d851ff;
			this._menu = method_00;
			if (((((BaseGameManager)method_00.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)method_00.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=(Il2CppClass)pGVar2)) goto label_05d851ff;
		}
		pGVar2 = typeof(MapEditorGameManager);
		method_00 = (MapEditorMenu)SceneLoader.CurrentGameManager;
		if (method_00 == null) {
			this._gameManager = null;
	label_05d851eb: ;
			this.AddResizeHandle();
			return;
		}
		bVar1 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
		if ((bVar1 <= (((BaseGameManager)method_00.klass)._2).typeHierarchyDepth) &&((((BaseGameManager)method_00.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(MapEditorGameManager))) {
			this._gameManager = (MapEditorGameManager)method_00;
			if ((bVar1 <= (((BaseGameManager)method_00.klass)._2).typeHierarchyDepth) &&((((BaseGameManager)method_00.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==(Il2CppClass)pGVar2)) goto label_05d851eb;
		}
	label_05d851ff: ;
		throw new InvalidCastException();
	}

	[Token(Token = "0x60052FA")]
	[Address(RVA = "0x5C85210", Offset = "0x5C84210", VA = "0x5C85210")]
	private void AddResizeHandle()
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$AddResizeHandle): 1 lines keep C-only constructs
		GameObject __this_00;
		Transform __this_01;
		Transform parent;
		RectTransform __this_02;
		Image pUVar1;
		PanelResizeHandle pUVar2;
		Action<float> __this_03;
		Color UVar3;

		__this_00 = new GameObject("ResizeHandle");
		if (__this_00 != null) {
			__this_01 = __this_00.transform;
			parent = this.transform;
			if (__this_01 != null) {
				__this_01.SetParent(parent, false);
				__this_02 = __this_00.AddComponent<RectTransform>();
				if (__this_02 != null) {
					__this_02.anchorMin = (Vector2)0x0;
					__this_02.anchorMax = (Vector2)0x3f80000000000000;
					__this_02.offsetMin = (Vector2)0xc1000000;
					__this_02.offsetMax = (Vector2)0x0;
					pUVar1 = __this_00.AddComponent<Image>();
					if (pUVar1 != null) {
						UVar3.b = 1.0;
						UVar3.a = 0.04;
						UVar3.r = 1.0;
						UVar3.g = 1.0;
						pUVar1.set_color(UVar3);
						pUVar2 = __this_00.AddComponent<PanelResizeHandle>();
						if (pUVar2 != null) {
							pUVar2.IsRightEdge = false;
							pUVar2.MinWidth = 200.0;
							pUVar2.MaxWidth = 700.0;
							__this_03 = new Action<float>((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_AddResizeHandle_b__77_0);
							pUVar2.OnResize = __this_03;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60052FB")]
	[Address(RVA = "0x5C853F0", Offset = "0x5C843F0", VA = "0x5C853F0")]
	private bool HasNonConvexMeshCollider(MapObject mapObject)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$HasNonConvexMeshCollider): 1 lines keep C-only constructs
		byte bVar1;
		GameObject __this_00;
		MeshCollider __this_01;
		bool bVar2;
		Object[] pSVar3;
		ulong uVar4;
		ulong uVar5;

		if ((mapObject != null) &&(__this_00 = mapObject.GameObject, __this_00 != null)) {
			pSVar3 = __this_00.GetComponentsInChildren<Collider>();
			if (pSVar3 != null) {
				if (0 < (int)pSVar3.Length) {
					uVar4 = pSVar3.Length & 0xffffffff;
					uVar5 = 0;
					do {
						if (uVar4 <= uVar5) {
							throw new IndexOutOfRangeException();
						}
						__this_01 = (MeshCollider)pSVar3[uVar5];
						if (__this_01 != null) {
							bVar1 = (typeof(MeshCollider)._2).typeHierarchyDepth;
							if ((bVar1 <= (__this_01.klass._2).typeHierarchyDepth) &&((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(MeshCollider))) {
								bVar2 = __this_01.convex;
								if (!bVar2) {
									return true;
								}
								uVar4 = (ulong)(uint)pSVar3.Length;
							}
						}
						uVar5 = uVar5 + 1;
					} while ((long)uVar5 < (long)(int)uVar4);
				}
				return false;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60052FC")]
	[Address(RVA = "0x5C854E0", Offset = "0x5C844E0", VA = "0x5C854E0")]
	public void CopyID()
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$CopyID): clean
		MapObject pMVar1;
		MapScriptBaseObject pMVar2;
		String value;

		pMVar1 = this._mapObject;
		if ((pMVar1 == null) ||(pMVar2 = pMVar1.ScriptObject, pMVar2 == null)) {
			throw new NullReferenceException();
		}
		value = (pMVar2.Id).ToString();
		if ((typeof(GUIUtility)._2).cctor_finished_or_no_cctor == 0) {
			GUIUtility.systemCopyBuffer = value;
			return;
		}
		GUIUtility.systemCopyBuffer = value;
		return;
	}

	[Token(Token = "0x60052FD")]
	[Address(RVA = "0x5C85560", Offset = "0x5C84560", VA = "0x5C85560")]
	public void CopyAssetCSV()
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$CopyAssetCSV): clean
		MapObject pMVar1;
		MapScriptBaseObject pMVar2;
		String value;

		pMVar1 = this._mapObject;
		if ((pMVar1 == null) ||(pMVar2 = pMVar1.ScriptObject, pMVar2 == null)) {
			throw new NullReferenceException();
		}
		value = pMVar2.Serialize();
		if ((typeof(GUIUtility)._2).cctor_finished_or_no_cctor == 0) {
			GUIUtility.systemCopyBuffer = value;
			return;
		}
		GUIUtility.systemCopyBuffer = value;
		return;
	}

	[Token(Token = "0x60052FE")]
	[Address(RVA = "0x5C855E0", Offset = "0x5C845E0", VA = "0x5C855E0")]
	public void Show(MapObject mapObject)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$Show): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		MapObject[] pMVar3;
		List<MapObject> mapObjects;

		mapObjects = new List<MapObject>();
		if (mapObjects != null) {
			piVar1 = &mapObjects._version;
			*piVar1 = *piVar1 + 1;
			pMVar3 = mapObjects._items;
			if (pMVar3 != null) {
				uVar2 = mapObjects._size;
				if (uVar2 < (uint)pMVar3.Length) {
					mapObjects._size = uVar2 + 1;
					pMVar3[(int)uVar2] = mapObject;
				}
				else {
					mapObjects.AddWithResize((object)mapObject);
				}
				this.Show(mapObjects);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60052FF")]
	[Address(RVA = "0x5C856C0", Offset = "0x5C846C0", VA = "0x5C856C0")]
	public void Show(List<MapObject> mapObjects)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$Show): 123 lines keep C-only constructs
		int piVar1;
		List<MapObject>* targetAddress;
		MapObject* targetAddress_00;
		MapEditorInspectPanel.c__DisplayClass82_0* targetAddress_01;
		byte bVar2;
		uint uVar3;
		uint uVar4;
		HashSet<object> pSVar5;
		List<GameObject> pSVar6;
		MapScriptBaseObject pMVar7;
		BoolSetting pSVar8;
		StringSetting pSVar9;
		MapEditorInspectPanel.c__DisplayClass82_0 pUVar10;
		ColorSetting pSVar11;
		List<Dictionary<string, BaseSetting>> pSVar12;
		String[] pSVar13;
		InspectorSettingMetadata pSVar14;
		String str3;
		MapEditorMenu pUVar15;
		Vector3Popup vector3Popup;
		ColorPickPopup pUVar16;
		Dictionary<object, object> __this_00;
		bool bVar17;
		bool bVar18;
		sbyte cVar19;
		List<MapObject> pSVar20;
		MapObject pMVar21;
		String pSVar22;
		ElementStyle pUVar23;
		GameObject pUVar24;
		Transform pUVar25;
		UnityAction pUVar26;
		object pIVar27;
		ElementStyle __this_01;
		Transform pUVar28;
		System_Func_TSource__bool__o method_00;
		Func<MapObject, bool> pSVar29;
		String[] pSVar30;
		UnityAction __this_02;
		MethodInfo* ppMVar31;
		UI_MapEditorInspectPanel___c_StaticFields pUVar32;
		System_Func_TSource__bool__o __this_03;
		LayoutElement pUVar33;
		MapEditorInspectPanel.c__DisplayClass82_0 pUVar34;
		Dictionary<string, BaseSetting> settings;
		Dictionary<string, string[]> __this_04;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o pSVar35;
		BaseSetting pSVar36;
		List<string> pSVar37;
		ulong uVar38;
		String pSVar39;
		Object[] value;
		MapEditorInspectPanel.c__DisplayClass82_1 __this_05;
		IntSetting pSVar40;
		IntSetting pSVar41;
		System_Collections_Generic_IEnumerable_TSource__o source;
		UnityAction pUVar42;
		MapEditorInspectPanel.d__90<WaitAndEnablePanel> __this_06;
		byte bVar43;
		String* ppSVar44;
		int iVar45;
		uint uVar46;
		String* ppSVar47;
		FloatSetting pSVar48;
		MethodInfo pMVar49;
		Transform pUStack_b0;
		Dictionary<object, object> pSStack_a8;
		String pSStack_a0;
		MapEditorInspectPanel.c__DisplayClass82_0 pUStack_98;
		byte[] auStack_90 = new byte[16];
		String pSStack_80;
		byte[] auStack_78 = new byte[8];
		String pSStack_68;
		Transform pUStack_60;
		Dictionary<string, string[]> pSStack_58;
		Dictionary<string, string> pSStack_50;
		float fStack_44;
		Dictionary<string, Transform> pSStack_40;
		ulong uStack_38;

		if (Il2CppMethodInitialized_0754801d == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_get_Item) ;
			Il2CppMethodInitialized_0754801d = true;
		}
		auStack_78 = (byte[])0x0;
		pSStack_68 = null;
		pUStack_b0 = null;
		this.Show();
		pSVar20 = new List<MapObject>((IEnumerable<T>)mapObjects);
		targetAddress = &this._mapObjects;
		this._mapObjects = pSVar20;
		pSVar20 = this._mapObjects;
		if (pSVar20 == null) goto label_05d8a5b8;
		pMVar21 = pSVar20.get_Item(0);
		targetAddress_00 = &this._mapObject;
		this._mapObject = pMVar21;
		pSVar5 = (HashSet<object>)this._mixedFields;
		if (pSVar5 == null) goto label_05d8a5b8;
		pSVar5.Clear();
		pSVar6 = this._mixedNumericElements;
		if (pSVar6 == null) goto label_05d8a5b8;
		piVar1 = &pSVar6._version;
		*piVar1 = *piVar1 + 1;
		iVar45 = pSVar6._size;
		pSVar6._size = 0;
		if (0 < iVar45) {
			Array.Clear((Array)pSVar6._items, 0, iVar45);
		}
		this.SyncSettings();
		pSVar22 = this.get_ThemePanel();
		pUVar23 = new ElementStyle(0x12, 80.0, 10.0, pSVar22);
		pSVar20 = this._mapObjects;
		if (pSVar20 == null) goto label_05d8a5b8;
		pUVar25 = this.SinglePanel;
		pUStack_98 = (MapEditorInspectPanel.c__DisplayClass82_0)targetAddress;
		if (pSVar20._size == 1) {
			pUVar24 = ElementFactory.CreateHorizontalGroup(pUVar25, 20.0, 3);
			if (pUVar24 == null) goto label_05d8a5b8;
			pUVar25 = pUVar24.transform;
			pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_30);
			ElementFactory.CreateIconButton(pUVar25, pUVar23, "Icons/Navigation/CopyIcon", 32.0, 32.0, pUVar26, null);
			pUVar25 = pUVar24.transform;
			pUVar24 = ElementFactory.CreateVerticalGroup(pUVar25, 10.0, 0);
			if (pUVar24 == null) goto label_05d8a5b8;
			pUVar25 = pUVar24.transform;
			if ((typeof(MapEditorInspectPanel)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_07548008 != false) goto label_05d86073;
	label_05d8a3fd: ;
				pSVar22 = "Id";
				Il2CppMethodInitialized_07548008 = true;
				uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07548008 == false) goto label_05d8a3fd;
	label_05d86073: ;
				uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
				pSVar22 = "Id";
			}
			if (uVar3 == 0) {
			}
			pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
			if ((*targetAddress_00 == null) ||(pMVar7 = ((*targetAddress_00).fields).ScriptObject, pMVar7 == null)) goto label_05d8a5b8;
			auStack_90._0_4_ = pMVar7.Id;
			pIVar27 = (object)auStack_90;
			pSVar22 = String.Format(pSVar22, pIVar27);
			pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_31);
			ElementFactory.CreateTextButton(pUVar25, pUVar23, pSVar22, 0.0, pUVar26);
			pUVar25 = pUVar24.transform;
			pSVar22 = "Asset";
			pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
			if ((*targetAddress_00 == null) ||(pMVar7 = ((*targetAddress_00).fields).ScriptObject, pMVar7 == null)) goto label_05d8a5b8;
			pSVar22 = String.Format(pSVar22, (object)pMVar7.Asset);
			pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_32);
			ElementFactory.CreateTextButton(pUVar25, pUVar23, pSVar22, 0.0, pUVar26);
		}
		else {
			if ((typeof(MapEditorInspectPanel)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_07548008 != false) goto label_05d8627c;
	label_05d8a389: ;
				pSVar22 = "SelectedCount";
				Il2CppMethodInitialized_07548008 = true;
				uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07548008 == false) goto label_05d8a389;
	label_05d8627c: ;
				uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
				pSVar22 = "SelectedCount";
			}
			if (uVar3 == 0) {
			}
			pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
			if (*targetAddress == null) goto label_05d8a5b8;
			auStack_90._0_4_ = ((*targetAddress).fields)._size;
			pIVar27 = (object)auStack_90;
			pSVar22 = String.Format(pSVar22, pIVar27);
			ElementFactory.CreateDefaultLabel(pUVar25, pUVar23, pSVar22, 0, 3);
		}
		pUVar24 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 20.0, 3);
		if (pUVar24 == null) goto label_05d8a5b8;
		pUVar25 = pUVar24.transform;
		pSVar22 = this.get_ThemePanel();
		__this_01 = new ElementStyle(0xf, 45.0, 10.0, pSVar22);
		pSVar8 = this._active;
		if ((typeof(MapEditorInspectPanel)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07548008 != false) goto label_05d863ca;
	label_05d87d33: ;
			pSVar22 = "Active";
			Il2CppMethodInitialized_07548008 = true;
			uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07548008 == false) goto label_05d87d33;
	label_05d863ca: ;
			uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			pSVar22 = "Active";
		}
		if (uVar3 == 0) {
		}
		pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
		pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_0);
		ElementFactory.CreateToggleSetting(pUVar25, __this_01, (BaseSetting)pSVar8, pSVar22, "", 25.0, 25.0, pUVar26);
		pSVar22 = "Static";
		pSVar8 = this._static;
		pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
		pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_1);
		ElementFactory.CreateToggleSetting(pUVar25, __this_01, (BaseSetting)pSVar8, pSVar22, "", 25.0, 25.0, pUVar26);
		if (__this_01 == null) goto label_05d8a5b8;
		__this_01.TitleWidth = 80.0;
		pSVar22 = "Networked";
		pSVar8 = this._networked;
		pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
		pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_2);
		ElementFactory.CreateToggleSetting(pUVar25, __this_01, (BaseSetting)pSVar8, pSVar22, "", 25.0, 25.0, pUVar26);
		pUVar25 = this.SinglePanel;
		pSVar9 = this._name;
		pSVar22 = UIManager.GetLocaleCommon("Name");
		pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_3);
		ElementFactory.CreateInputSetting(pUVar25, pUVar23, (BaseSetting)pSVar9, pSVar22, "", 140.0, 35.0, false, null, pUVar26, null, null);
		pSVar22 = "ParentId";
		pUVar25 = this.SinglePanel;
		pSVar40 = this._parent;
		pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
		pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_4);
		ElementFactory.CreateInputSetting(pUVar25, pUVar23, (BaseSetting)pSVar40, pSVar22, "", 140.0, 35.0, false, null, pUVar26, null, null);
		this.CreateHorizontalDivider(this.SinglePanel, 1.0);
		pSVar22 = this.get_ThemePanel();
		pUVar23 = new ElementStyle(0x12, 15.0, 5.0, pSVar22);
		pSVar22 = "Transform";
		pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
		pUVar25 = this.CreateSection("Transform", pSVar22, pUVar23, true, null);
		pSVar22 = "Position";
		pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
		ElementFactory.CreateDefaultLabel(pUVar25, pUVar23, pSVar22, 0, 4);
		pUVar24 = ElementFactory.CreateHorizontalGroup(pUVar25, 15.0, 3);
		if (pUVar24 == null) goto label_05d8a5b8;
		pUVar28 = pUVar24.transform;
		pSVar48 = this._positionX;
		pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_5);
		ElementFactory.CreateInputSetting(pUVar28, pUVar23, (BaseSetting)pSVar48, "X", "", 80.0, 35.0, false, null, pUVar26, null, null);
		pSVar48 = this._positionY;
		pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_6);
		ElementFactory.CreateInputSetting(pUVar28, pUVar23, (BaseSetting)pSVar48, "Y", "", 80.0, 35.0, false, null, pUVar26, null, null);
		pSVar48 = this._positionZ;
		pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_7);
		ElementFactory.CreateInputSetting(pUVar28, pUVar23, (BaseSetting)pSVar48, "Z", "", 80.0, 35.0, false, null, pUVar26, null, null);
		pSVar22 = "Rotation";
		pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
		ElementFactory.CreateDefaultLabel(pUVar25, pUVar23, pSVar22, 0, 4);
		pUVar24 = ElementFactory.CreateHorizontalGroup(pUVar25, 15.0, 3);
		if (pUVar24 == null) goto label_05d8a5b8;
		pUVar28 = pUVar24.transform;
		pSVar48 = this._rotationX;
		pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_8);
		ElementFactory.CreateInputSetting(pUVar28, pUVar23, (BaseSetting)pSVar48, "X", "", 80.0, 35.0, false, null, pUVar26, null, null);
		pSVar48 = this._rotationY;
		pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_9);
		ElementFactory.CreateInputSetting(pUVar28, pUVar23, (BaseSetting)pSVar48, "Y", "", 80.0, 35.0, false, null, pUVar26, null, null);
		pSVar48 = this._rotationZ;
		pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_10);
		ElementFactory.CreateInputSetting(pUVar28, pUVar23, (BaseSetting)pSVar48, "Z", "", 80.0, 35.0, false, null, pUVar26, null, null);
		pSVar22 = "Scale";
		pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
		ElementFactory.CreateDefaultLabel(pUVar25, pUVar23, pSVar22, 0, 4);
		pUVar24 = ElementFactory.CreateHorizontalGroup(pUVar25, 15.0, 3);
		if (pUVar24 == null) goto label_05d8a5b8;
		pUVar25 = pUVar24.transform;
		pSVar48 = this._scaleX;
		pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_11);
		ElementFactory.CreateInputSetting(pUVar25, pUVar23, (BaseSetting)pSVar48, "X", "", 80.0, 35.0, false, null, pUVar26, null, null);
		pSVar48 = this._scaleY;
		pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_12);
		ElementFactory.CreateInputSetting(pUVar25, pUVar23, (BaseSetting)pSVar48, "Y", "", 80.0, 35.0, false, null, pUVar26, null, null);
		pSVar48 = this._scaleZ;
		pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_13);
		ElementFactory.CreateInputSetting(pUVar25, pUVar23, (BaseSetting)pSVar48, "Z", "", 80.0, 35.0, false, null, pUVar26, null, null);
		this.CreateHorizontalDivider(this.SinglePanel, 1.0);
		pSVar22 = this.get_ThemePanel();
		method_00 = new ElementStyle(0x12, 160.0, 20.0, pSVar22);
		pSVar22 = "Collision";
		pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
		pUVar25 = this.CreateSection("Collision", pSVar22, (ElementStyle)method_00, false, null);
		pSVar20 = this._mapObjects;
		pSVar29 = new Func<MapObject, bool>((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_HasNonConvexMeshCollider) ;
		bVar17 = Enumerable.Any<MapObject>((System_Collections_Generic_IEnumerable_TSource__o)pSVar20, (System_Func_TSource__bool__o)pSVar29);
		if (bVar17) {
			pSVar30 = (String[])new string[2];
			if (pSVar30 == null) goto label_05d8a5b8;
			if ((int)pSVar30.Length == 0) goto label_05d8a5bd;
			pSVar30[0] = MapObjectCollideMode.Physical;
			if ((pSVar30.Length & 0xfffffffe) == 0) goto label_05d8a5bd;
			ppSVar47 = pSVar30.m_Items + 1;
			pSVar30[1] = MapObjectCollideMode.None;
		}
		else {
			pSVar30 = (String[])new string[3];
			if (pSVar30 == null) goto label_05d8a5b8;
			if ((int)pSVar30.Length == 0) goto label_05d8a5bd;
			pSVar30[0] = MapObjectCollideMode.Physical;
			if ((pSVar30.Length & 0xfffffffe) == 0) goto label_05d8a5bd;
			pSVar30[1] = MapObjectCollideMode.Region;
			if ((uint)pSVar30.Length < 3) goto label_05d8a5bd;
			ppSVar47 = pSVar30.m_Items + 2;
			pSVar30[2] = MapObjectCollideMode.None;
		}
		pSVar9 = this._collideMode;
		if ((typeof(MapEditorInspectPanel)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07548008 != false) goto label_05d872fd;
	label_05d87daf: ;
			pSVar22 = "CollideMode";
			Il2CppMethodInitialized_07548008 = true;
			uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07548008 == false) goto label_05d87daf;
	label_05d872fd: ;
			uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			pSVar22 = "CollideMode";
		}
		if (uVar3 == 0) {
		}
		pMVar49 = (MethodInfo *)"";
		pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
		pSVar30 = this.WithMixedOption(pSVar30, "CollideMode", this._collideMode);
		pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_14);
		ElementFactory.CreateDropdownSetting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar9, pSVar22, pSVar30, "", 140.0, 30.0, 300.0, (Nullable<float>)0x0, pUVar26, null, null);
		pSVar22 = "CollideWith";
		pSVar9 = this._collideWith;
		pMVar49 = (MethodInfo *)"";
		pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
		pSVar30 = (String[])new string[8];
		if (pSVar30 == null) goto label_05d8a5b8;
		if ((int)pSVar30.Length == 0) {
	label_05d8a5bd: ;
			throw new IndexOutOfRangeException();
		}
		pSVar30[0] = MapObjectCollideWith.Entities;
		if ((pSVar30.Length & 0xfffffffe) == 0) goto label_05d8a5bd;
		pSVar30[1] = MapObjectCollideWith.Characters;
		if ((uint)pSVar30.Length < 3) goto label_05d8a5bd;
		pSVar30[2] = MapObjectCollideWith.Titans;
		if ((pSVar30.Length & 0xfffffffc) == 0) goto label_05d8a5bd;
		pSVar30[3] = MapObjectCollideWith.Humans;
		if ((uint)pSVar30.Length < 5) goto label_05d8a5bd;
		pSVar30[4] = MapObjectCollideWith.Projectiles;
		if ((uint)pSVar30.Length < 6) goto label_05d8a5bd;
		pSVar30[5] = MapObjectCollideWith.Hitboxes;
		if ((uint)pSVar30.Length < 7) goto label_05d8a5bd;
		pSVar30[6] = MapObjectCollideWith.MapObjects;
		if ((pSVar30.Length & 0xfffffff8) == 0) goto label_05d8a5bd;
		pSVar30[7] = MapObjectCollideWith.All;
		pSVar30 = this.WithMixedOption(pSVar30, "CollideWith", this._collideWith);
		pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_15);
		ElementFactory.CreateDropdownSetting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar9, pSVar22, pSVar30, "", 140.0, 30.0, 300.0, (Nullable<float>)0x0, pUVar26, null, null);
		pSVar22 = "PhysicsMaterial";
		pSVar9 = this._physicsMaterial;
		pMVar49 = (MethodInfo *)"";
		pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
		pSVar30 = (String[])new string[2];
		if (pSVar30 == null) goto label_05d8a5b8;
		if ((int)pSVar30.Length == 0) goto label_05d8a5bd;
		pSVar30[0] = MapObjectPhysicsMaterial.Default;
		if ((pSVar30.Length & 0xfffffffe) == 0) goto label_05d8a5bd;
		pSVar30[1] = MapObjectPhysicsMaterial.Ice;
		pSVar30 = this.WithMixedOption(pSVar30, "PhysicsMaterial", this._physicsMaterial);
		pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_16);
		ElementFactory.CreateDropdownSetting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar9, pSVar22, pSVar30, "", 140.0, 30.0, 300.0, (Nullable<float>)0x0, pUVar26, null, null);
		this.CreateHorizontalDivider(this.SinglePanel, 1.0);
		pSVar22 = "Shader";
		pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
		pUVar25 = this.CreateSection("Shader", pSVar22, (ElementStyle)method_00, false, null);
		pSVar22 = "Visible";
		pSVar8 = this._visible;
		pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
		pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_17);
		ElementFactory.CreateToggleSetting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar8, pSVar22, "", 25.0, 25.0, pUVar26);
		pSVar22 = "Shader";
		pSVar9 = this._shader;
		pMVar49 = (MethodInfo *)"";
		pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
		pSVar30 = (String[])new string[6];
		if (pSVar30 == null) goto label_05d8a5b8;
		if ((int)pSVar30.Length == 0) goto label_05d8a5bd;
		pSVar30[0] = MapObjectShader.Default;
		if ((pSVar30.Length & 0xfffffffe) == 0) goto label_05d8a5bd;
		pSVar30[1] = MapObjectShader.Basic;
		if ((uint)pSVar30.Length < 3) goto label_05d8a5bd;
		pSVar30[2] = MapObjectShader.Transparent;
		if ((pSVar30.Length & 0xfffffffc) == 0) goto label_05d8a5bd;
		pSVar30[3] = MapObjectShader.Reflective;
		if ((uint)pSVar30.Length < 5) goto label_05d8a5bd;
		pSVar30[4] = MapObjectShader.DefaultNoTint;
		if ((uint)pSVar30.Length < 6) goto label_05d8a5bd;
		pSVar30[5] = MapObjectShader.DefaultTiled;
		pSVar30 = this.WithMixedOption(pSVar30, "Shader", this._shader);
		__this_02 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_18);
		pUVar26 = null;
		ElementFactory.CreateDropdownSetting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar9, pSVar22, pSVar30, "", 140.0, 30.0, 300.0, (Nullable<float>)0x0, __this_02, null, null);
		pSVar20 = this._mapObjects;
		pUVar32 = typeof(MapEditorInspectPanel.c).static_fields;
		pSVar29 = pUVar32.__9__82_19;
		if (pSVar29 == null) {
			if ((typeof(MapEditorInspectPanel.c)._2).cctor_finished_or_no_cctor == 0) {
				pUVar32 = typeof(MapEditorInspectPanel.c).static_fields;
			}
			pIVar27 = (object)pUVar32.__9;
			pSVar29 = new Func<MapObject, bool>(pIVar27, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_Show_b__82_19);
			pUVar32 = typeof(MapEditorInspectPanel.c).static_fields;
			pUVar32.__9__82_19 = pSVar29;
		}
		pUVar34 = pUStack_98;
		bVar17 = Enumerable.All<MapObject>((System_Collections_Generic_IEnumerable_TSource__o)pSVar20, (System_Func_TSource__bool__o)pSVar29);
		pUVar10 = pUVar34.klass;
		if ((typeof(MapEditorInspectPanel.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar32 = typeof(MapEditorInspectPanel.c).static_fields;
			pSVar29 = pUVar32.__9__82_20;
		}
		else {
			pUVar32 = typeof(MapEditorInspectPanel.c).static_fields;
			pSVar29 = pUVar32.__9__82_20;
		}
		if (pSVar29 == null) {
			if (((typeof(MapEditorInspectPanel.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar32 = typeof(MapEditorInspectPanel.c).static_fields;
			}
			pIVar27 = (object)pUVar32.__9;
			pSVar29 = new Func<MapObject, bool>(pIVar27, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_Show_b__82_20);
			pUVar32 = typeof(MapEditorInspectPanel.c).static_fields;
			pUVar32.__9__82_20 = pSVar29;
			pUVar34 = pUStack_98;
		}
		bVar18 = Enumerable.All<MapObject>((System_Collections_Generic_IEnumerable_TSource__o)pUVar10, (System_Func_TSource__bool__o)pSVar29);
		pUStack_98 = (MapEditorInspectPanel.c__DisplayClass82_0)CONCAT71(pUStack_98._1_7_, bVar18);
		pUVar10 = pUVar34.klass;
		if ((typeof(MapEditorInspectPanel.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar32 = typeof(MapEditorInspectPanel.c).static_fields;
			pSVar29 = pUVar32.__9__82_21;
		}
		else {
			pUVar32 = typeof(MapEditorInspectPanel.c).static_fields;
			pSVar29 = pUVar32.__9__82_21;
		}
		if (pSVar29 == null) {
			if (((typeof(MapEditorInspectPanel.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar32 = typeof(MapEditorInspectPanel.c).static_fields;
			}
			pIVar27 = (object)pUVar32.__9;
			pSVar29 = new Func<MapObject, bool>(pIVar27, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_Show_b__82_21);
			pUVar32 = typeof(MapEditorInspectPanel.c).static_fields;
			pUVar32.__9__82_21 = pSVar29;
		}
		bVar18 = Enumerable.All<MapObject>((System_Collections_Generic_IEnumerable_TSource__o)pUVar10, (System_Func_TSource__bool__o)pSVar29);
		pSStack_a8 = (Dictionary<object, object>)CONCAT71(pSStack_a8._1_7_, bVar18);
		pUVar10 = pUVar34.klass;
		if ((typeof(MapEditorInspectPanel.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar32 = typeof(MapEditorInspectPanel.c).static_fields;
			pSVar29 = pUVar32.__9__82_22;
		}
		else {
			pUVar32 = typeof(MapEditorInspectPanel.c).static_fields;
			pSVar29 = pUVar32.__9__82_22;
		}
		if (pSVar29 == null) {
			if (((typeof(MapEditorInspectPanel.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar32 = typeof(MapEditorInspectPanel.c).static_fields;
			}
			pIVar27 = (object)pUVar32.__9;
			pSVar29 = new Func<MapObject, bool>(pIVar27, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_Show_b__82_22);
			pUVar32 = typeof(MapEditorInspectPanel.c).static_fields;
			pUVar32.__9__82_22 = pSVar29;
		}
		bVar18 = Enumerable.All<MapObject>((System_Collections_Generic_IEnumerable_TSource__o)pUVar10, (System_Func_TSource__bool__o)pSVar29);
		pUVar10 = pUVar34.klass;
		pUVar32 = typeof(MapEditorInspectPanel.c).static_fields;
		__this_03 = (System_Func_TSource__bool__o)pUVar32.__9__82_23;
		if (__this_03 == null) {
			if ((typeof(MapEditorInspectPanel.c)._2).cctor_finished_or_no_cctor == 0) {
				pUVar32 = typeof(MapEditorInspectPanel.c).static_fields;
			}
			pIVar27 = (object)pUVar32.__9;
			__this_03 = new Func<MapObject, bool>(pIVar27, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_Show_b__82_23);
			pUVar32 = typeof(MapEditorInspectPanel.c).static_fields;
			pUVar32.__9__82_23 = (Func<MapObject, bool>)__this_03;
			cVar19 = Enumerable.All<MapObject>((System_Collections_Generic_IEnumerable_TSource__o)pUVar10, __this_03);
			if (!bVar17) goto label_05d88038;
	label_05d88292: ;
			pSStack_a0 = (String)CONCAT71(pSStack_a0._1_7_, cVar19);
			pSVar11 = this._color;
			pSVar22 = "Color";
			pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
			pUVar15 = this._menu;
			if (pUVar15 == null) goto label_05d8a5b8;
			pUVar16 = pUVar15.ColorPickPopup;
			pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_24);
			__this_02 = null;
			__this_03 = method_00;
			ElementFactory.CreateColorSetting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar11, pSVar22, pUVar16, "", 90.0, 25.0, pUVar26);
			cVar19 = (char)pSStack_a0;
			if ((char)pUStack_98 != false) goto label_05d88043;
	label_05d883f0: ;
			if ((char)pSStack_a8 == false) {
				if (!bVar18) goto label_05d88bde;
				if (cVar19 != false) {
					pSVar11 = this._reflectColor;
					pSVar22 = MapEditorInspectPanel.Locale("ReflectColor");
					pUVar15 = this._menu;
					if (pUVar15 == null) goto label_05d8a5b8;
					pUVar16 = pUVar15.ColorPickPopup;
					pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_33);
					ElementFactory.CreateColorSetting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar11, pSVar22, pUVar16, "", 90.0, 25.0, pUVar26);
				}
				pUVar24 = ElementFactory.CreateHorizontalGroup(pUVar25, 20.0, 3);
				if (pUVar24 == null) goto label_05d8a5b8;
				pUVar28 = pUVar24.transform;
				if ((typeof(MapEditorInspectPanel)._2).cctor_finished_or_no_cctor == 0) {
					if (Il2CppMethodInitialized_07548008 != false) goto label_05d886c1;
	label_05d8a560: ;
					pSVar22 = "Texture";
					Il2CppMethodInitialized_07548008 = true;
					uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (Il2CppMethodInitialized_07548008 == false) goto label_05d8a560;
	label_05d886c1: ;
					uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
					pSVar22 = "Texture";
				}
				if (uVar3 == 0) {
				}
				pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
				pUVar24 = ElementFactory.CreateDefaultLabel(pUVar28, (ElementStyle)method_00, pSVar22, 0, 3);
				if ((pUVar24 == null) ||(pUVar33 = pUVar24.GetComponent<LayoutElement>(), pUVar33 == null)) {
	label_05d8a5b8: ;
					throw new NullReferenceException();
				}
				pUVar33.set_preferredWidth(160.0);
				pSVar9 = this._texture;
				if (pSVar9 == null) goto label_05d8a5b8;
				pSVar22 = pSVar9._value;
				pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_34);
				ElementFactory.CreateDefaultButton(pUVar28, (ElementStyle)method_00, pSVar22, 0.0, 0.0, pUVar26);
				pSVar22 = "TilingX";
				pSVar48 = this._tilingX;
				pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
				pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_35);
				ElementFactory.CreateInputSetting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar48, pSVar22, "", 80.0, 35.0, false, null, pUVar26, null, null);
				pSVar22 = "TilingY";
				pSVar48 = this._tilingY;
				pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
				pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_36);
				ElementFactory.CreateInputSetting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar48, pSVar22, "", 80.0, 35.0, false, null, pUVar26, null, null);
				pSVar22 = "OffsetX";
				pSVar48 = this._offsetX;
				pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
				pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_37);
				ElementFactory.CreateInputSetting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar48, pSVar22, "", 80.0, 35.0, false, null, pUVar26, null, null);
				pSVar22 = "OffsetY";
				pSVar48 = this._offsetY;
				pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
				ppMVar31 = &MethodInfo_UI_MapEditorInspectPanel_Show_b__82_38;
			}
			else {
				pSVar48 = this._tilingX;
				if ((typeof(MapEditorInspectPanel)._2).cctor_finished_or_no_cctor == 0) {
					if (Il2CppMethodInitialized_07548008 != false) goto label_05d8843f;
	label_05d8a4ec: ;
					pSVar22 = "TilingX";
					Il2CppMethodInitialized_07548008 = true;
					uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (Il2CppMethodInitialized_07548008 == false) goto label_05d8a4ec;
	label_05d8843f: ;
					uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
					pSVar22 = "TilingX";
				}
				if (uVar3 == 0) {
				}
				pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
				pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_27);
				ElementFactory.CreateInputSetting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar48, pSVar22, "", 80.0, 35.0, false, null, pUVar26, null, null);
				pSVar22 = "TilingY";
				pSVar48 = this._tilingY;
				pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
				ppMVar31 = &MethodInfo_UI_MapEditorInspectPanel_Show_b__82_28;
			}
		}
		else {
			cVar19 = Enumerable.All<MapObject>((System_Collections_Generic_IEnumerable_TSource__o)pUVar10, __this_03);
			if (bVar17) goto label_05d88292;
	label_05d88038: ;
			if ((char)pUStack_98 == false) goto label_05d883f0;
	label_05d88043: ;
			pUVar24 = ElementFactory.CreateHorizontalGroup(this.SinglePanel, 20.0, 3);
			if (pUVar24 == null) goto label_05d8a5b8;
			pUVar24.transform;
			pSVar48 = this._tilingX;
			if ((typeof(MapEditorInspectPanel)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_07548008 != false) goto label_05d880ac;
	label_05d8a471: ;
				pSVar22 = "TilingX";
				Il2CppMethodInitialized_07548008 = true;
				uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07548008 == false) goto label_05d8a471;
	label_05d880ac: ;
				uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
				pSVar22 = "TilingX";
			}
			if (uVar3 == 0) {
			}
			pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
			pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_25);
			ElementFactory.CreateInputSetting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar48, pSVar22, "", 80.0, 35.0, false, null, pUVar26, null, null);
			pSVar22 = "TilingY";
			pSVar48 = this._tilingY;
			pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
			ppMVar31 = &MethodInfo_UI_MapEditorInspectPanel_Show_b__82_26;
		}
		__this_02 = new UnityAction((object)this, (intptr_t)*ppMVar31);
		pUVar26 = null;
		ElementFactory.CreateInputSetting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar48, pSVar22, "", 80.0, 35.0, false, null, __this_02, null, null);
	label_05d88bde: ;
		uVar38 = 0;
		this.CreateHorizontalDivider(this.SinglePanel, 1.0);
	label_05d88c86: ;
		pSVar12 = this._components;
		if (pSVar12 != null) {
			iVar45 = (int32_t)uVar38;
			if (iVar45 < pSVar12._size) {
				pUVar34 = new MapEditorInspectPanel.c__DisplayClass82_0();
				if (pUVar34 != null) {
					pUVar34.__4__this = this;
					pSVar37 = this._componentNames;
					if (pSVar37 != null) {
						pSVar22 = pSVar37.get_Item(iVar45);
						pUVar34.componentName = pSVar22;
						pSVar22 = String.Concat("Component:", pUVar34.componentName);
						pUStack_98 = pUVar34;
						pUStack_60 = this.CreateSection(pSVar22, pUVar34.componentName, (ElementStyle)method_00, true, null);
						pSVar12 = this._components;
						if (pSVar12 != null) {
							uStack_38 = uVar38;
							settings = (Dictionary<string, BaseSetting>)pSVar12.get_Item(iVar45);
							pSStack_a8 = (Dictionary<object, object>)settings;
							pSVar22 = CustomLogicManager.GetModeDescription(settings);
							bVar17 = (pSVar22 != "");
							if (bVar17) {
								ElementFactory.CreateDefaultLabel(pUStack_60, (ElementStyle)method_00, pSVar22, 0, 3);
							}
							pSStack_50 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, string>));
							pSStack_50 = new Dictionary<object, object>();
							__this_04 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, string[]>));
							__this_04 = new Dictionary<object, object>();
							pSStack_40 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Transform>));
							pSStack_40 = new Dictionary<object, object>();
							__this_00 = pSStack_a8;
							if ((pSStack_a8 != null) &&(pSStack_58 = __this_04, pSVar35 = pSStack_a8.Keys, pSVar35 != null)) {
								auStack_90.GetEnumerator(pSVar35);
								pSStack_68 = pSStack_80;
								auStack_78 = (byte[])auStack_90._0_8_;
								auStack_90._0_8_ = null;
								auStack_90._8_8_ = auStack_78;
	label_05d88ed0: ;
								bVar17 = auStack_78.MoveNext();
								pSVar22 = pSStack_68;
								if (bVar17) {
									pSVar36 = __this_00.get_Item((object)pSStack_68);
									if (pSVar22 == null) {
										throw new NullReferenceException();
									}
									bVar17 = pSVar22.EndsWith("Tooltip");
									if ((bVar17) && (pSVar36 != null)) {
										bVar43 = (typeof(StringSetting)._2).typeHierarchyDepth;
										if ((bVar43 <= (pSVar36.klass._2).typeHierarchyDepth) &&((pSVar36.klass._2).typeHierarchy[(ulong)bVar43 - 1] ==typeof(StringSetting))) {
											pSVar22 = pSVar22.Substring(0, pSVar22._stringLength + -7);
											bVar43 = (typeof(StringSetting)._2).typeHierarchyDepth;
											if (((pSVar36.klass._2).typeHierarchyDepth < bVar43) ||((pSVar36.klass._2).typeHierarchy[(ulong)bVar43 - 1] !=typeof(StringSetting))) {
												throw new InvalidCastException();
											}
											if (pSStack_50 == null) {
												throw new NullReferenceException();
											}
											pSStack_50.set_Item((object)pSVar22, (*(ulong)((sbyte)pSVar36 + 0x20)));
											goto label_05d88ed0;
										}
									}
									bVar17 = pSVar22.EndsWith("Dropbox");
									if ((bVar17) && (pSVar36 != null)) {
										bVar43 = (typeof(StringSetting)._2).typeHierarchyDepth;
										if ((bVar43 <= (pSVar36.klass._2).typeHierarchyDepth) &&((pSVar36.klass._2).typeHierarchy[(ulong)bVar43 - 1] ==typeof(StringSetting))) {
											pSVar37 = new List<string>();
											bVar43 = (typeof(StringSetting)._2).typeHierarchyDepth;
											if (((pSVar36.klass._2).typeHierarchyDepth < bVar43) ||((pSVar36.klass._2).typeHierarchy[(ulong)bVar43 - 1] !=typeof(StringSetting))) {
												throw new InvalidCastException();
											}
											if ((*(ulong)((sbyte)pSVar36 + 0x20)) == null) {
												throw new NullReferenceException();
											}
											pSVar30 = ((*(ulong)((sbyte)pSVar36 + 0x20))).Split(0x2c, 0);
											if (pSVar30 == null) {
												throw new NullReferenceException();
											}
											uVar38 = pSVar30.Length;
											if (pSVar37 == null) {
												if ((int)uVar38 < 1) {
													throw new NullReferenceException();
												}
												if ((uVar38 & 0xffffffff) != 0) {
													if (pSVar30[0] != null) {
														(pSVar30[0]).Trim();
	label_05d89f2b: ;
														throw new NullReferenceException();
													}
	label_05d89f1a: ;
													throw new NullReferenceException();
												}
	label_05d89eb7: ;
												throw new IndexOutOfRangeException();
											}
											if (0 < (int)uVar38) {
												uVar46 = 0;
												do {
													if ((uint)uVar38 <= uVar46) goto label_05d89eb7;
													if (pSVar30[(int)uVar46] == null) goto label_05d89f1a;
													pSVar39 = (pSVar30[(int)uVar46]).Trim();
													piVar1 = &pSVar37._version;
													*piVar1 = *piVar1 + 1;
													pSVar13 = pSVar37._items;
													if (pSVar13 == null) goto label_05d89f2b;
													uVar4 = pSVar37._size;
													if (uVar4 < (uint)pSVar13.Length) {
														pSVar37._size = uVar4 + 1;
														pSVar13[(int)uVar4] = pSVar39;
													}
													else {
														pSVar37.AddWithResize((object)pSVar39);
													}
													uVar46 = uVar46 + 1;
													uVar4 = (uint)pSVar30.Length;
													uVar38 = (ulong)uVar4;
												} while ((int)uVar46 < (int)uVar4);
											}
											pSVar39 = "None";
											if (pSVar37._size == 0) {
												piVar1 = &pSVar37._version;
												*piVar1 = *piVar1 + 1;
												pSVar30 = pSVar37._items;
												if (pSVar30 == null) {
													throw new NullReferenceException();
												}
												if ((int)pSVar30.Length == 0) {
													pSVar37.AddWithResize((object)pSVar39);
												}
												else {
													pSVar37._size = 1;
													pSVar30[0] = pSVar39;
												}
											}
											pSVar22 = pSVar22.Substring(0, pSVar22._stringLength + -7);
											value = pSVar37.ToArray();
											if (pSStack_58 == null) {
												throw new NullReferenceException();
											}
											pSStack_58.set_Item((object)pSVar22, ref value.obj);
										}
									}
									goto label_05d88ed0;
								}
								auStack_78.Dispose();
								pSVar35 = __this_00.Keys;
								if (pSVar35 != null) {
									auStack_90.GetEnumerator(pSVar35);
									pSStack_68 = pSStack_80;
									auStack_78 = (byte[])auStack_90._0_8_;
									auStack_90._0_8_ = null;
									auStack_90._8_8_ = auStack_78;
	label_05d89290: ;
									do {
										bVar17 = auStack_78.MoveNext();
										pSVar22 = pSStack_68;
										if (!bVar17) goto label_05d89d90;
										__this_05 = il2cpp_codegen_object_new(typeof(MapEditorInspectPanel.c__DisplayClass82_1)) ;
										__this_05 = new MapEditorInspectPanel.c__DisplayClass82_1();
										if (__this_05 == null) {
											throw new NullReferenceException();
										}
										targetAddress_01 = &__this_05.CS___8__locals1;
										__this_05.CS___8__locals1 = pUStack_98;
										pSVar40 = (IntSetting)pSStack_a8.get_Item((object)pSVar22);
										bVar17 = (pSVar22 == "Description");
										if (!bVar17) {
											if (pSVar22 == null) {
												throw new NullReferenceException();
											}
											bVar17 = pSVar22.EndsWith("Tooltip");
											if ((bVar17) && (pSVar40 != null)) {
												bVar43 = (typeof(StringSetting)._2).typeHierarchyDepth;
												if ((bVar43 <= (pSVar40.klass._2).typeHierarchyDepth) &&((pSVar40.klass._2).typeHierarchy[(ulong)bVar43 - 1] ==typeof(StringSetting))) goto label_05d89290;
											}
											bVar17 = pSVar22.EndsWith("Dropbox");
											pSVar39 = "";
											if ((bVar17) && (pSVar40 != null)) {
												bVar43 = (typeof(StringSetting)._2).typeHierarchyDepth;
												if ((bVar43 <= (pSVar40.klass._2).typeHierarchyDepth) &&((pSVar40.klass._2).typeHierarchy[(ulong)bVar43 - 1] ==typeof(StringSetting))) goto label_05d89290;
											}
											if (pSStack_50 == null) {
												throw new NullReferenceException();
											}
											bVar17 = pSStack_50.ContainsKey((object)pSVar22);
											if (bVar17) {
												pSVar39 = pSStack_50.get_Item((object)pSVar22);
											}
											if (pSVar40 == null) {
												throw new NullReferenceException();
											}
											pSVar14 = pSVar40.InspectorMetadata;
											if (pSVar14 == null) {
												throw new NullReferenceException();
											}
											bVar17 = String.IsNullOrEmpty(pSVar14.Tooltip);
											if (!bVar17) {
												pSVar39 = pSVar14.Tooltip;
											}
											pUStack_b0 = pUStack_60;
											bVar17 = String.IsNullOrEmpty(pSVar14.GroupId);
											pSStack_a0 = pSVar39;
											if (!bVar17) {
												if (pSStack_40 == null) {
													throw new NullReferenceException();
												}
												ppSVar47 = &pSVar14.GroupId;
												bVar17 = pSStack_40.TryGetValue((object)*ppSVar47, (object*)&pUStack_b0);
												if (!bVar17) {
													if (*targetAddress_01 == null) {
														throw new NullReferenceException();
													}
													pSVar39 = String.Concat("Component:", ((*targetAddress_01).fields).componentName, ":Group:", *ppSVar47);
													bVar17 = String.IsNullOrEmpty(pSVar14.GroupHeader) ;
													ppSVar44 = &pSVar14.GroupHeader;
													if (bVar17) {
														ppSVar44 = ppSVar47;
													}
													pUStack_b0 = this.CreateSection(pSVar39, *ppSVar44, (ElementStyle)method_00, false, pUStack_60);
													pSStack_40.set_Item((object)*ppSVar47, (object)pUStack_b0) ;
												}
											}
											bVar17 = String.IsNullOrEmpty(pSVar14.Header);
											if (!bVar17) {
												ElementFactory.CreateDefaultLabel(pUStack_b0, (ElementStyle)method_00, pSVar14.Header, 1, 3);
											}
											__this_05.fieldName = pSVar22;
											if (*targetAddress_01 == null) {
												throw new NullReferenceException();
											}
											pSVar39 = ((*targetAddress_01).fields).componentName;
											str3 = __this_05.fieldName;
											pSVar39 = String.Concat("Component:", pSVar39, ":", str3);
											pSVar37 = pSVar14.Dropbox;
											if (pSVar37 == null) {
												throw new NullReferenceException();
											}
											if ((pSVar37._size < 1) ||(pSVar30 = (String[])pSVar37.ToArray(), pSVar30 == null)) {
												if (pSStack_58 == null) {
													throw new NullReferenceException();
												}
												bVar17 = pSStack_58.ContainsKey((object)pSVar22);
												if (bVar17) {
													bVar17 = true;
													pSVar30 = null;
													goto label_05d8966b;
												}
											}
											else {
												bVar17 = false;
	label_05d8966b: ;
												bVar43 = (typeof(StringSetting)._2).typeHierarchyDepth;
												if ((bVar43 <= (pSVar40.klass._2).typeHierarchyDepth) &&((pSVar40.klass._2).typeHierarchy[(ulong)bVar43 - 1] ==typeof(StringSetting))) {
													if (bVar17) {
														if (pSStack_58 == null) {
															throw new NullReferenceException();
														}
														pSVar30 = (String[])pSStack_58.get_Item((object)pSVar22);
													}
													pSVar5 = (HashSet<object>)this._mixedFields ;
													if (pSVar5 == null) {
														throw new NullReferenceException();
													}
													bVar17 = pSVar5.Contains((object)pSVar39);
													if (bVar17) {
														bVar43 = (typeof(StringSetting)._2).typeHierarchyDepth;
														if (((pSVar40.klass._2).typeHierarchyDepth < bVar43) ||((pSVar40.klass._2).typeHierarchy[(ulong)bVar43 - 1] !=typeof(StringSetting))) {
															throw new InvalidCastException();
														}
														pSVar40.Value = (Il2CppObject *)"--";
														pIVar27 = new string[1];
														if (pIVar27 == null) {
															throw new NullReferenceException();
														}
														if (*(int)&pIVar27[1].monitor == 0) {
															throw new IndexOutOfRangeException();
														}
														pIVar27[2].klass = (Il2CppClass *)"--";
														source = Enumerable.Concat<string>((System_Collections_Generic_IEnumerable_TSource__o)pIVar27, (System_Collections_Generic_IEnumerable_TSource__o)pSVar30);
														pSVar30 = (String[])Enumerable.ToArray<string>(source);
													}
													pUVar25 = pUStack_b0;
													__this_02 = new UnityAction((object)__this_05, (intptr_t) MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1_Show_b__41);
													pUVar26 = null;
													ElementFactory.CreateDropdownSetting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar40, pSVar22, pSVar30, pSStack_a0, 140.0, 35.0, 300.0, (Nullable<float>)0x0, __this_02, null, null);
													goto label_05d89290;
												}
											}
											pUVar25 = pUStack_b0;
											if (pSVar14.MapObject != false) {
												bVar43 = (typeof(IntSetting)._2).typeHierarchyDepth;
												if ((bVar43 <= (pSVar40.klass._2).typeHierarchyDepth) &&((pSVar40.klass._2).typeHierarchy[(ulong)bVar43 - 1] ==typeof(IntSetting))) {
													pUVar26 = new UnityAction((object)__this_05, (intptr_t) MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1_Show_b__40);
													bVar43 = (typeof(IntSetting)._2).typeHierarchyDepth;
													if (((pSVar40.klass._2).typeHierarchyDepth < bVar43) ||((pSVar40.klass._2).typeHierarchy[(ulong)bVar43 - 1] !=typeof(IntSetting))) {
														throw new InvalidCastException();
													}
													this.CreateMapObjectSetting(pUVar25, (ElementStyle)method_00, pSVar40, pSVar22, pSStack_a0, (Action)pUVar26);
													goto label_05d89290;
												}
											}
											if (pSVar14.MapObjectList != false) {
												bVar43 = (typeof(HashSetSetting<int>)._2).typeHierarchyDepth;
												if ((bVar43 <= (pSVar40.klass._2).typeHierarchyDepth) &&((pSVar40.klass._2).typeHierarchy[(ulong)bVar43 - 1] ==typeof(HashSetSetting<int>))) {
													pUVar26 = new UnityAction((object)__this_05, (intptr_t) MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1_Show_b__42);
													this.CreateMapObjectListSetting(pUVar25, (ElementStyle)method_00, (HashSetSetting<int>)pSVar40, pSVar22, pSStack_a0, (Action)pUVar26);
													goto label_05d89290;
												}
											}
											if (pSVar14.HasSlider == false) {
												pSVar41 = pSVar40.klass;
												bVar43 = (pSVar41._2).typeHierarchyDepth;
											}
											else {
												pSVar41 = pSVar40.klass;
												bVar43 = (pSVar41._2).typeHierarchyDepth;
												bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
												if (((bVar2 <= bVar43) &&((pSVar41._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(FloatSetting))) ||((bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth, bVar2 <= bVar43 &&((pSVar41._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(IntSetting))))) {
													fStack_44 = pSVar14.SliderInterval;
													pUVar26 = new UnityAction((object)__this_05, (intptr_t) MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1_Show_b__43);
													__this_02 = null;
													ElementFactory.CreateSliderSetting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar40, pSVar22, pSStack_a0, 140.0, 16.0, 2, fStack_44, pUVar26);
													goto label_05d89290;
												}
											}
											bVar2 = (typeof(BoolSetting)._2).typeHierarchyDepth;
											if ((bVar43 < bVar2) ||((pSVar41._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(BoolSetting))) {
												bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
												if ((((bVar43 < bVar2) ||((pSVar41._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(StringSetting))) &&((bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth, bVar43 < bVar2 ||((pSVar41._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(FloatSetting))))) &&((bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth, bVar43 < bVar2 ||((pSVar41._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(IntSetting))))) {
													bVar2 = (typeof(ColorSetting)._2).typeHierarchyDepth;
													if ((bVar43 < bVar2) ||((pSVar41._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(ColorSetting))) {
														bVar2 = (typeof(Vector3Setting)._2).typeHierarchyDepth;
														if ((bVar2 <= bVar43) &&((pSVar41._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(Vector3Setting))) {
															pUVar15 = this._menu;
															if (pUVar15 == null) {
																throw new NullReferenceException();
															}
															vector3Popup = pUVar15.Vector3Popup;
															pUVar26 = new UnityAction((object)__this_05, (intptr_t) MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1_Show_b__47);
															__this_02 = null;
															ElementFactory.CreateVector3Setting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar40, pSVar22, vector3Popup, pSStack_a0, 90.0, 30.0, pUVar26);
														}
													}
													else {
														pUVar15 = this._menu;
														if (pUVar15 == null) {
															throw new NullReferenceException();
														}
														pUVar16 = pUVar15.ColorPickPopup;
														pUVar26 = new UnityAction((object)__this_05, (intptr_t) MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1_Show_b__46);
														__this_02 = null;
														ElementFactory.CreateColorSetting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar40, pSVar22, pUVar16, pSStack_a0, 90.0, 30.0, pUVar26);
													}
												}
												else {
													__this_02 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_45);
													pUVar26 = null;
													ElementFactory.CreateInputSetting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar40, pSVar22, pSStack_a0, 140.0, 35.0, false, null, __this_02, null, null);
												}
											}
											else {
												pUVar42 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_44);
												pUVar26 = null;
												ElementFactory.CreateToggleSetting(pUVar25, (ElementStyle)method_00, (BaseSetting)pSVar40, pSVar22, pSStack_a0, 30.0, 30.0, pUVar42);
											}
										}
									} while(true);
								}
							}
						}
					}
				}
			}
			else {
				pUVar25 = this.SinglePanel;
				if ((typeof(MapEditorInspectPanel)._2).cctor_finished_or_no_cctor == 0) {
					if (Il2CppMethodInitialized_07548008 != false) goto label_05d8a1c1;
	label_05d8a315: ;
					pSVar22 = "AddComponent";
					Il2CppMethodInitialized_07548008 = true;
					uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (Il2CppMethodInitialized_07548008 == false) goto label_05d8a315;
	label_05d8a1c1: ;
					uVar3 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
					pSVar22 = "AddComponent";
				}
				if (uVar3 == 0) {
				}
				pSVar22 = UIManager.GetLocale("MapEditor", "Inspect", pSVar22, "", "");
				pUVar26 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_29);
				ElementFactory.CreateDefaultButton(pUVar25, (ElementStyle)method_00, pSVar22, 0.0, 0.0, pUVar26);
				this.ApplyMixedIndicators();
				this.CaptureSyncedValues();
				pUVar25 = this.SinglePanel;
				if ((pUVar25 != null) &&(pUVar24 = pUVar25.gameObject, pUVar24 != null)) {
					pUVar24.SetActive(false);
					__this_06 = new MapEditorInspectPanel.d__90<WaitAndEnablePanel>(0);
					if (__this_06 != null) {
						__this_06.__4__this = this;
						this.StartCoroutine((IEnumerator)__this_06);
						return;
					}
				}
			}
		}
		goto label_05d8a5b8;
	label_05d89d90: ;
		auStack_78.Dispose();
		pSVar22 = UIManager.GetLocaleCommon("Delete");
		pUVar42 = new UnityAction((object)pUStack_98, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_0_Show_b__39);
		ElementFactory.CreateDefaultButton(pUStack_60, (ElementStyle)method_00, pSVar22, 0.0, 0.0, pUVar42);
		this.CreateHorizontalDivider(this.SinglePanel, 1.0);
		uVar38 = (ulong)((int)uStack_38 + 1);
		goto label_05d88c86;
	}

	[Token(Token = "0x6005300")]
	[Address(RVA = "0x5C8C490", Offset = "0x5C8B490", VA = "0x5C8C490")]
	private void CreateMapObjectSetting(Transform parent, ElementStyle style, IntSetting setting, string title, string tooltip, Action onChanged)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$CreateMapObjectSetting): 2 lines keep C-only constructs
		int fontSize;
		IntSetting setting_00;
		MapEditorInspectPanel.c__DisplayClass83_0 __this_00;
		ElementStyle __this_01;
		GameObject pUVar1;
		Transform parent_00;
		UnityAction pUVar2;
		InputSettingElement pUVar3;
		String pSVar4;

		__this_00 = new MapEditorInspectPanel.c__DisplayClass83_0();
		if (__this_00 != null) {
			__this_00.onChanged = onChanged;
			__this_00.__4__this = this;
			__this_00.setting = setting;
			if (style != null) {
				fontSize = style.FontSize;
				pSVar4 = style.ThemePanel;
				__this_01 = new ElementStyle(fontSize, 90.0, 5.0, pSVar4);
				pUVar1 = ElementFactory.CreateHorizontalGroup(parent, 8.0, 3);
				if (pUVar1 != null) {
					parent_00 = pUVar1.transform;
					setting_00 = __this_00.setting;
					pUVar2 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0_CreateMapObjectSetting_b__0);
					pUVar1 = ElementFactory.CreateInputSetting(parent_00, __this_01, (BaseSetting)setting_00, title, tooltip, 100.0, 35.0, false, null, pUVar2, null, null);
					if (pUVar1 != null) {
						pUVar3 = pUVar1.GetComponent<InputSettingElement>();
						__this_00.input = pUVar3;
						pSVar4 = UIManager.GetLocaleCommon("Search");
						pUVar2 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0_CreateMapObjectSetting_b__1);
						ElementFactory.CreateDefaultButton(parent_00, __this_01, pSVar4, 80.0, 35.0, pUVar2);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005301")]
	[Address(RVA = "0x5C8C720", Offset = "0x5C8B720", VA = "0x5C8C720")]
	private void CreateMapObjectListSetting(Transform parent, ElementStyle style, HashSetSetting<int> setting, string title, string tooltip, Action onChanged)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$CreateMapObjectListSetting): 2 lines keep C-only constructs
		uint fontSize;
		HashSetSetting<int> pSVar1;
		HashSet<T> ids;
		MapEditorInspectPanel.c__DisplayClass84_0 __this_00;
		ElementStyle __this_01;
		String pSVar2;
		StringSetting pSVar3;
		GameObject pUVar4;
		Transform parent_00;
		UnityAction pUVar5;
		InputSettingElement pUVar6;

		__this_00 = new MapEditorInspectPanel.c__DisplayClass84_0();
		if (__this_00 != null) {
			__this_00.setting = setting;
			__this_00.onChanged = onChanged;
			__this_00.__4__this = this;
			if (style != null) {
				fontSize = style.FontSize;
				pSVar2 = style.ThemePanel;
				__this_01 = new ElementStyle(fontSize, 90.0, 5.0, pSVar2);
				pSVar1 = __this_00.setting;
				if (pSVar1 != null) {
					ids = pSVar1._value;
					pSVar2 = MapEditorInspectPanel.SerializeMapObjectIds((IEnumerable<int>)ids);
					pSVar3 = new StringSetting(pSVar2, 0x7fffffff);
					__this_00.serialized = pSVar3;
					pUVar4 = ElementFactory.CreateHorizontalGroup(parent, 8.0, 3);
					if (pUVar4 != null) {
						parent_00 = pUVar4.transform;
						pSVar3 = __this_00.serialized;
						pUVar5 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass84_0_CreateMapObjectListSetting_b__0);
						pUVar4 = ElementFactory.CreateInputSetting(parent_00, __this_01, (BaseSetting)pSVar3, title, tooltip, 140.0, 35.0, false, null, pUVar5, null, null);
						if (pUVar4 != null) {
							pUVar6 = pUVar4.GetComponent<InputSettingElement>();
							__this_00.input = pUVar6;
							pSVar2 = UIManager.GetLocaleCommon("Search");
							pUVar5 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass84_0_CreateMapObjectListSetting_b__1);
							ElementFactory.CreateDefaultButton(parent_00, __this_01, pSVar2, 80.0, 35.0, pUVar5);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005302")]
	[Address(RVA = "0x5C8EE40", Offset = "0x5C8DE40", VA = "0x5C8EE40")]
	private static HashSet<int> ParseMapObjectIds(string value)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$ParseMapObjectIds): clean
		int iVar1;
		bool bVar2;
		uint uVar3;
		HashSet<int> __this;
		Char[] separator;
		String[] pSVar4;
		String pSVar5;
		uint uVar6;
		long lVar7;
		int local_2c;

		local_2c = 0;
		__this = new HashSet<int>();
		separator = (Char[])new char[2];
		if (separator != null) {
			iVar1 = (int)separator.Length;
			if ((iVar1 == 0) || (separator[0] = 0x2c, iVar1 == 1)) {
	label_05d8efef: ;
				throw new IndexOutOfRangeException();
			}
			separator[1] = 0x2f;
			if (value != null) {
				pSVar4 = value.Split(separator, 1);
				if (pSVar4 != null) {
					uVar3 = (uint)pSVar4.Length;
					if (__this == null) {
						if (0 < (int)uVar3) {
							lVar7 = 0;
							do {
								if (uVar3 <= (uint)lVar7) goto label_05d8efef;
								if (pSVar4[lVar7] == null) goto label_05d8efd9;
								pSVar5 = (pSVar4[lVar7]).Trim();
								bVar2 = Int32.TryParse(pSVar5, ref local_2c);
								if ((bVar2) && (-1 < local_2c)) goto label_05d8efd9;
								uVar3 = (uint)pSVar4.Length;
								lVar7 = lVar7 + 1;
							} while ((int)lVar7 < (int)uVar3);
						}
					}
					else if (0 < (int)uVar3) {
						uVar6 = 0;
						do {
							if (uVar3 <= uVar6) goto label_05d8efef;
							if (pSVar4[(int)uVar6] == null) goto label_05d8efd9;
							pSVar5 = (pSVar4[(int)uVar6]).Trim();
							bVar2 = Int32.TryParse(pSVar5, ref local_2c);
							if ((bVar2) && (-1 < local_2c)) {
								__this.Add(local_2c);
							}
							uVar6 = uVar6 + 1;
							uVar3 = (uint)pSVar4.Length;
						} while ((int)uVar6 < (int)uVar3);
					}
					return __this;
				}
			}
		}
	label_05d8efd9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005303")]
	[Address(RVA = "0x5C8EC30", Offset = "0x5C8DC30", VA = "0x5C8EC30")]
	private static string SerializeMapObjectIds(IEnumerable<int> ids)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$SerializeMapObjectIds): 7 lines keep C-only constructs
		object pIVar1;
		Func<int, int> __this;
		System_Linq_IOrderedEnumerable_TSource__o source;
		UI_MapEditorInspectPanel___c_StaticFields pUVar2;
		Func<int, string> __this_00;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		String[] value;
		String pSVar3;

		pSVar3 = "/";
		pUVar2 = typeof(MapEditorInspectPanel.c).static_fields;
		__this = pUVar2.__9__86_0;
		if (__this == null) {
			if ((typeof(MapEditorInspectPanel.c)._2).cctor_finished_or_no_cctor == 0) {
				pUVar2 = typeof(MapEditorInspectPanel.c).static_fields;
			}
			pIVar1 = (object)pUVar2.__9;
			__this = new Func<int, int>(pIVar1, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_SerializeMapObjectIds_b__86_0);
			pUVar2 = typeof(MapEditorInspectPanel.c).static_fields;
			pUVar2.__9__86_0 = __this;
		}
		source = Enumerable.OrderBy<int, int>((System_Collections_Generic_IEnumerable_TSource__o)ids, (System_Func_TSource__TKey__o)__this);
		if ((typeof(MapEditorInspectPanel.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar2 = typeof(MapEditorInspectPanel.c).static_fields;
			__this_00 = pUVar2.__9__86_1;
		}
		else {
			pUVar2 = typeof(MapEditorInspectPanel.c).static_fields;
			__this_00 = pUVar2.__9__86_1;
		}
		if (__this_00 == null) {
			if (((typeof(MapEditorInspectPanel.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar2 = typeof(MapEditorInspectPanel.c).static_fields;
			}
			pIVar1 = (object)pUVar2.__9;
			__this_00 = new Func<int, string>(pIVar1, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_SerializeMapObjectIds_b__86_1);
			pUVar2 = typeof(MapEditorInspectPanel.c).static_fields;
			pUVar2.__9__86_1 = __this_00;
		}
		source_00 = Enumerable.Select<int, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_00);
		value = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
		pSVar3 = String.Join(pSVar3, value);
		return pSVar3;
	}

	[Token(Token = "0x6005304")]
	[Address(RVA = "0x5C8F000", Offset = "0x5C8E000", VA = "0x5C8F000")]
	public float GetScrollPosition()
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$GetScrollPosition): clean
		bool bVar1;
		Transform pUVar2;
		ScrollRect __this_00;
		float fVar3;

		pUVar2 = this.SinglePanel;
		__this_00 = null;
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			pUVar2 = this.SinglePanel;
			if (pUVar2 == null) goto label_05d8f0f0;
			pUVar2 = pUVar2.parent;
			if (pUVar2 == null) goto label_05d8f0f0;
			pUVar2 = pUVar2.parent;
			if (pUVar2 == null) goto label_05d8f0f0;
			__this_00 = pUVar2.GetComponent<ScrollRect>();
		}
		bVar1 = ((Object)__this_00 != null);
		if (!bVar1) {
			return 1.0;
		}
		if (__this_00 != null) {
			return fVar3;
		}
	label_05d8f0f0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005305")]
	[Address(RVA = "0x5C8F100", Offset = "0x5C8E100", VA = "0x5C8F100")]
	public void RestoreScrollPosition(float position)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$RestoreScrollPosition): 1 lines keep C-only constructs
		MapEditorInspectPanel.d__89<RestoreScrollPositionAfterLayout> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(MapEditorInspectPanel.d__89<RestoreScrollPositionAfterLayout>));
		__this_00 = new MapEditorInspectPanel.d__89<RestoreScrollPositionAfterLayout>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.position = position;
		this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x6005306")]
	[Address(RVA = "0x5C8F190", Offset = "0x5C8E190", VA = "0x5C8F190")]
	[IteratorStateMachine(typeof(_003CRestoreScrollPositionAfterLayout_003Ed__89))]
	private IEnumerator RestoreScrollPositionAfterLayout(float position)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$RestoreScrollPositionAfterLayout): 1 lines keep C-only constructs
		MapEditorInspectPanel.d__89<RestoreScrollPositionAfterLayout> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(MapEditorInspectPanel.d__89<RestoreScrollPositionAfterLayout>));
		__this_00 = new MapEditorInspectPanel.d__89<RestoreScrollPositionAfterLayout>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.position = position;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6005307")]
	[Address(RVA = "0x5C8EBC0", Offset = "0x5C8DBC0", VA = "0x5C8EBC0")]
	[IteratorStateMachine(typeof(_003CWaitAndEnablePanel_003Ed__90))]
	private IEnumerator WaitAndEnablePanel()
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$WaitAndEnablePanel): clean
		MapEditorInspectPanel.d__90<WaitAndEnablePanel> __this_00;

		__this_00 = new MapEditorInspectPanel.d__90<WaitAndEnablePanel>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6005308")]
	[Address(RVA = "0x5C8F210", Offset = "0x5C8E210", VA = "0x5C8F210")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$OnButtonClick): 2 lines keep C-only constructs
		MapEditorMenu pUVar1;
		MapEditorTexturePopup pUVar2;
		MapEditorAddComponentPopup __this_00;
		ConfirmPopup __this_01;
		bool bVar3;
		int iVar4;
		UnityAction pUVar5;
		MapEditorInspectPanel.c__DisplayClass91_0 __this_02;
		String pSVar6;

		pUVar1 = this._menu;
		if (pUVar1 != null) {
			bVar3 = pUVar1.IsPopupActive();
			if (bVar3) {
				return;
			}
			bVar3 = (name == "Texture");
			if (bVar3) {
				pUVar1 = this._menu;
				if ((pUVar1 != null) &&(pUVar2 = pUVar1.TexturePopup, pUVar2 != null)) {
					pUVar2.Show();
					return;
				}
			}
			else {
				bVar3 = (name == "AddComponent");
				if (bVar3) {
					pUVar1 = this._menu;
					if (pUVar1 != null) {
						__this_00 = pUVar1.AddComponentPopup;
						pUVar5 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_OnButtonClick_b__91_0);
						if (__this_00 != null) {
							__this_00.Show(pUVar5);
							return;
						}
					}
				}
				else if (name != null) {
					bVar3 = name.StartsWith("DeleteComponent");
					if (!bVar3) {
						return;
					}
					__this_02 = new MapEditorInspectPanel.c__DisplayClass91_0();
					if (__this_02 != null) {
						__this_02.__4__this = this;
						if ("DeleteComponent" != null) {
							pSVar6 = name.Substring(("DeleteComponent".fields)._stringLength);
							iVar4 = Int32.Parse(pSVar6);
							__this_02.index = iVar4;
							pUVar1 = this._menu;
							if (pUVar1 != null) {
								__this_01 = pUVar1.ConfirmPopup;
								pSVar6 = UIManager.GetLocaleCommon("DeleteWarning");
								pUVar5 = new UnityAction((object)__this_02, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass91_0_OnButtonClick_b__1);
								if (__this_01 != null) {
									__this_01.Show(pSVar6, pUVar5, null);
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005309")]
	[Address(RVA = "0x5C8F4B0", Offset = "0x5C8E4B0", VA = "0x5C8F4B0")]
	private void OnAddComponent()
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$OnAddComponent): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		MapEditorMenu pUVar3;
		MapEditorAddComponentPopup pUVar4;
		StringSetting pSVar5;
		MapEditorGameManager pGVar6;
		List<Dictionary<string, BaseSetting>> __this_00;
		CustomLogicEvaluator __this_01;
		Dictionary<string, BaseSetting>[] pSVar7;
		String[] pSVar8;
		bool bVar9;
		List<string> pSVar10;
		Dictionary<string, BaseSetting> item;
		MethodInfo component;

		pUVar3 = this._menu;
		if ((((pUVar3 != null) &&(pUVar4 = pUVar3.AddComponentPopup, pUVar4 != null)) &&(pSVar5 = pUVar4.FinishSetting, pSVar5 != null)) &&(pSVar10 = this._componentNames, pSVar10 != null) ) {
			component = (MethodInfo)pSVar5._value;
			bVar9 = pSVar10.Contains((object)component);
			if (bVar9) {
	label_05d8f68c: ;
				this.OnChange();
				return;
			}
			pGVar6 = this._gameManager;
			if (pGVar6 != null) {
				__this_00 = this._components;
				__this_01 = pGVar6.LogicEvaluator;
				pSVar10 = new List<string>();
				if (__this_01 != null) {
					item = __this_01.GetComponentSettings((String)component, pSVar10);
					if (__this_00 != null) {
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar7 = __this_00._items;
						if (pSVar7 != null) {
							uVar2 = __this_00._size;
							if (uVar2 < (uint)pSVar7.Length) {
								__this_00._size = uVar2 + 1;
								pSVar7[(int)uVar2] = item;
							}
							else {
								__this_00.AddWithResize((object)item);
							}
							pSVar10 = this._componentNames;
							if (pSVar10 != null) {
								piVar1 = &pSVar10._version;
								*piVar1 = *piVar1 + 1;
								pSVar8 = pSVar10._items;
								if (pSVar8 != null) {
									uVar2 = pSVar10._size;
									if (uVar2 < (uint)pSVar8.Length) {
										pSVar10._size = uVar2 + 1;
										pSVar8[(int)uVar2] = (String)component;
									}
									else {
										pSVar10.AddWithResize((object)component);
									}
									goto label_05d8f68c;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600530A")]
	[Address(RVA = "0x5C8F6B0", Offset = "0x5C8E6B0", VA = "0x5C8F6B0")]
	private void OnDeleteComponent(int index)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$OnDeleteComponent): clean
		List<Dictionary<string, BaseSetting>> __this_00;
		List<string> __this_01;

		__this_00 = this._components;
		if (__this_00 != null) {
			__this_00.RemoveAt(index);
			__this_01 = this._componentNames;
			if (__this_01 != null) {
				__this_01.RemoveAt(index);
				this.OnChange();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600530B")]
	[Address(RVA = "0x5C8F730", Offset = "0x5C8E730", VA = "0x5C8F730")]
	private string SanitizeName(string name)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$SanitizeName): 3 lines keep C-only constructs
		bool bVar1;
		object array;
		ulong uVar2;
		String pSVar3;
		ulong uVar4;
		ushort local_2a;

		local_2a = 0;
		bVar1 = String.IsNullOrEmpty(name);
		if (bVar1) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		array = new char[8];
		RuntimeHelpers.InitializeArray((Array)array, FieldRva_PrivateImplementationDetails_619EB2C637D6EE6BE496B015CCC320AC0B7F976E145A6080B09E8587538D44D0);
		if (array != null) {
			if (0 < (int)array[1].monitor) {
				uVar2 = (ulong)array[1].monitor & 0xffffffff;
				uVar4 = 0;
				do {
					if (uVar2 <= uVar4) {
						throw new IndexOutOfRangeException();
					}
					local_2a = *(ushort)((long)&array[2].klass + uVar4 * 2);
					pSVar3 = Char.ToString(ref local_2a);
					if (name == null) goto label_05d8f89b;
					name = name.Replace(pSVar3, (String)**(ulong*)(g_data_07556758 + 0xb8));
					uVar4 = uVar4 + 1;
					uVar2 = (ulong)*(uint)&array[1].monitor;
				} while ((long)uVar4 < (long)(int)*(uint)&array[1].monitor);
			}
			if ((name != null) &&((name._stringLength < 0x100 ||(name = name.Substring(0, 0xff), name != null)))) {
				pSVar3 = name.Trim();
				return pSVar3;
			}
		}
	label_05d8f89b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600530C")]
	[Address(RVA = "0x5C8A5F0", Offset = "0x5C895F0", VA = "0x5C8A5F0")]
	public void SyncSettings()
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$SyncSettings): 109 lines keep C-only constructs
		float pfVar1;
		MapEditorInspectPanel.c__DisplayClass95_0 targetAddress;
		int piVar2;
		byte bVar3;
		byte bVar4;
		uint uVar5;
		StringSetting pSVar6;
		BoolSetting pSVar7;
		IntSetting pSVar8;
		FloatSetting pSVar9;
		ColorSetting pSVar10;
		String pSVar11;
		List<object> __this_00;
		String[] pSVar12;
		MapEditorGameManager pGVar13;
		CustomLogicEvaluator pCVar14;
		Dictionary<string, BaseSetting>[] pSVar15;
		Il2CppClass pIVar16;
		IntPtr pvVar18;
		HashSet<object> __this_01;
		Il2CppType handle;
		bool bVar19;
		String pSVar20;
		Color255 pUVar21;
		Type pSVar22;
		Type pSVar23;
		HashSet<string>* ppSVar24;
		MapObject pMVar25;
		List<Dictionary<string, BaseSetting>> pSVar26;
		List<string> pSVar27;
		MapEditorInspectPanel.c__DisplayClass95_0 __this_02;
		System_Collections_Generic_IEnumerable_TSource__o pSVar28;
		Func<MapObject, bool> __this_03;
		Dictionary<string, BaseSetting> pSVar29;
		Dictionary<string, string> __this_04;
		object pIVar30;
		Func<MapScriptComponent, bool>* targetAddress_00;
		Func<MapScriptComponent, bool> __this_05;
		MapScriptComponent pMVar32;
		Dictionary<string, string> __this_06;
		int index;
		String* __this_07;
		MapEditorInspectPanel __this_08;
		MapScriptBaseObject pMVar36;
		float fVar37;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		Vector3 UVar38;
		float fStack_114;
		object local_100;
		byte[] local_f8 = new byte[24];
		MapEditorInspectPanel.c__DisplayClass95_0 local_e0;
		byte[] local_d8 = new byte[8];
		ulong uStack_d0;
		MapScriptComponent local_c8;
		String local_c0;
		byte[] local_b8 = new byte[8];
		MapScriptComponent local_a8;
		String pSStack_a0;
		ulong local_98;
		byte[] local_88 = new byte[16];
		MapScriptComponent local_78;
		String pSStack_70;
		int local_68;
		uint uStack_64;
		List<Dictionary<string, BaseSetting>>* local_60;
		List<string>* local_58;
		object* local_48;

		__this_07 = (String*)this;
		if (Il2CppMethodInitialized_07548029 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_get_Item) ;
			__this_07 = &"PhysicsMaterial";
			Il2CppMethodInitialized_07548029 = true;
		}
		local_d8 = (byte[])0x0;
		uStack_d0._0_4_ = 0;
		uStack_d0._4_4_ = 0;
		local_c8 = null;
		local_100 = null;
		local_a8 = null;
		pSStack_a0 = null;
		local_b8 = (byte[])0x0;
		local_98._0_4_ = 0;
		local_98._4_4_ = 0;
		local_c0 = null;
		pMVar25 = this._mapObject;
		if ((pMVar25 == null) ||(pMVar36 = pMVar25.ScriptObject, pMVar36 == null)) goto label_05d8c243;
		bVar3 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
		if (((pMVar36.klass._2).typeHierarchyDepth < bVar3) ||((pMVar36.klass._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(MapScriptSceneObject) )) {
			throw new InvalidCastException();
		}
		pSVar6 = this._name;
		pSVar20 = __this_07.SanitizeName(pMVar36.Name);
		if (pSVar6 == null) goto label_05d8c243;
		pSVar6.Value = (object)pSVar20;
		pSVar7 = this._active;
		if (pSVar7 == null) goto label_05d8c243;
		pSVar7.Value = pMVar36.Active;
		pSVar7 = this._static;
		if (pSVar7 == null) goto label_05d8c243;
		pSVar7.Value = pMVar36.Static;
		pSVar7 = this._networked;
		if (pSVar7 == null) goto label_05d8c243;
		pSVar7.Value = pMVar36.Networked;
		pSVar8 = this._parent;
		if (pSVar8 == null) goto label_05d8c243;
		pSVar8.Value = pMVar36.Parent;
		pSVar7 = this._visible;
		if (pSVar7 == null) goto label_05d8c243;
		pSVar7.Value = pMVar36.Visible;
		UVar38 = pMVar36.GetPosition();
		pSVar9 = this._positionX;
		if (pSVar9 == null) goto label_05d8c243;
		pSVar9.Value = UVar38.x;
		pSVar9 = this._positionY;
		if (pSVar9 == null) goto label_05d8c243;
		fStack_114 = UVar38.y;
		pSVar9.Value = fStack_114;
		pSVar9 = this._positionZ;
		if (pSVar9 == null) goto label_05d8c243;
		pSVar9.Value = UVar38.z;
		UVar38 = pMVar36.GetRotation();
		pSVar9 = this._rotationX;
		if (pSVar9 == null) goto label_05d8c243;
		pSVar9.Value = UVar38.x;
		pSVar9 = this._rotationY;
		if (pSVar9 == null) goto label_05d8c243;
		fStack_114 = UVar38.y;
		pSVar9.Value = fStack_114;
		pSVar9 = this._rotationZ;
		if (pSVar9 == null) goto label_05d8c243;
		pSVar9.Value = UVar38.z;
		UVar38 = pMVar36.GetScale();
		pSVar9 = this._scaleX;
		if (pSVar9 == null) goto label_05d8c243;
		pSVar9.Value = UVar38.x;
		pSVar9 = this._scaleY;
		if (pSVar9 == null) goto label_05d8c243;
		fStack_114 = UVar38.y;
		pSVar9.Value = fStack_114;
		pSVar9 = this._scaleZ;
		if (pSVar9 == null) goto label_05d8c243;
		pSVar9.Value = UVar38.z;
		pSVar6 = this._collideMode;
		if (pSVar6 == null) goto label_05d8c243;
		pSVar6.Value = (object)(*(ulong)((sbyte)pMVar36 + 0x60));
		pSVar6 = this._collideWith;
		if (pSVar6 == null) goto label_05d8c243;
		pSVar6.Value = (*(ulong)((sbyte)pMVar36 + 0x68));
		pSVar6 = this._physicsMaterial;
		if (pSVar6 == null) goto label_05d8c243;
		pSVar6.Value = (object)(*(ulong)((sbyte)pMVar36 + 0x70));
		pSVar20 = (*(ulong)((sbyte)pMVar36 + 0x78));
		if ((pSVar20 == null) ||(pSVar6 = this._shader, pSVar6 == null)) goto label_05d8c243;
		pSVar6.Value = (object)pSVar20.fields;
		pSVar20 = (*(ulong)((sbyte)pMVar36 + 0x78));
		if ((pSVar20 == null) ||(pSVar10 = this._color, pSVar10 == null)) goto label_05d8c243;
		pSVar10.Value = (object)(*(ulong)((sbyte)pSVar20 + 0x18));
		pSVar10 = this._reflectColor;
		pUVar21 = new Color255();
		if (pSVar10 == null) goto label_05d8c243;
		pSVar10.Value = (object)pUVar21;
		pSVar6 = this._texture;
		if (pSVar6 == null) goto label_05d8c243;
		pSVar6.Value = (Il2CppObject *)"Misc/None";
		pSVar9 = this._tilingX;
		if (pSVar9 == null) goto label_05d8c243;
		pSVar9.Value = 1.0;
		pSVar9 = this._tilingY;
		if (pSVar9 == null) goto label_05d8c243;
		pSVar9.Value = 1.0;
		pSVar9 = this._offsetX;
		if (pSVar9 == null) goto label_05d8c243;
		pSVar9.Value = 0.0;
		pSVar9 = this._offsetY;
		if (pSVar9 == null) goto label_05d8c243;
		pSVar9.Value = 0.0;
		handle = TypeRef_Map_MapScriptBasicMaterial;
		pSVar20 = (*(ulong)((sbyte)pMVar36 + 0x78));
		if (pSVar20 == null) {
	label_05d8ae28: ;
			pSVar22 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			pSVar20 = (*(ulong)((sbyte)pMVar36 + 0x78));
			if ((pSVar20 == null) ||(pSVar23 = pSVar20.GetType(), pSVar22 == null)) goto label_05d8c243;
			bVar19 = pSVar22.IsAssignableFrom(pSVar23);
			if (bVar19) {
				pSVar20 = (*(ulong)((sbyte)pMVar36 + 0x78));
				if (pSVar20 == null) goto label_05d8c243;
				bVar3 = (typeof(MapScriptBasicMaterial)._2).typeHierarchyDepth;
				if (((pSVar20.klass._2).typeHierarchyDepth < bVar3) ||((pSVar20.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(MapScriptBasicMaterial))) {
					throw new InvalidCastException();
				}
				pSVar6 = this._texture;
				if (pSVar6 == null) goto label_05d8c243;
				pSVar6.Value = (*(ulong)((sbyte)pSVar20 + 0x20));
				pSVar9 = this._tilingX;
				if (pSVar9 == null) goto label_05d8c243;
				pSVar9.Value = (float)(*(uint)((sbyte)pSVar20 + 0x28));
				pSVar9 = this._tilingY;
				if (pSVar9 == null) goto label_05d8c243;
				pSVar9.Value = *(float)&(*(ushort)((sbyte)pSVar20 + 0x2c));
				pSVar9 = this._offsetX;
				if (pSVar9 == null) goto label_05d8c243;
				pSVar9.Value = *(float)&(*(ulong)((sbyte)pSVar20 + 0x30));
				pSVar9 = this._offsetY;
				if (pSVar9 == null) goto label_05d8c243;
				pSVar9.Value = *(float)((long)&(*(ulong)((sbyte)pSVar20 + 0x30)) + 4);
				pSVar20 = (*(ulong)((sbyte)pMVar36 + 0x78));
				if (pSVar20 != null) {
					bVar3 = (typeof(MapScriptReflectiveMaterial)._2).typeHierarchyDepth;
					if ((bVar3 <= (pSVar20.klass._2).typeHierarchyDepth) &&((pSVar20.klass._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(MapScriptReflectiveMaterial))) {
						pSVar10 = this._reflectColor;
						if (pSVar10 == null) goto label_05d8c243;
						pSVar10.Value = (*(ulong)((sbyte)pSVar20 + 0x38));
					}
				}
			}
		}
		else {
			pSVar11 = pSVar20.klass;
			bVar3 = (pSVar11._2).typeHierarchyDepth;
			bVar4 = (typeof(MapScriptLegacyMaterial)._2).typeHierarchyDepth;
			if (((bVar3 < bVar4) ||((pSVar11._2).typeHierarchy[(ulong)bVar4 - 1] != typeof(MapScriptLegacyMaterial)) ) && ((bVar4 = (typeof(MapScriptDefaultTiledMaterial)._2).typeHierarchyDepth, bVar3 < bVar4 ||((pSVar11._2).typeHierarchy[(ulong)bVar4 - 1] !=typeof(MapScriptDefaultTiledMaterial))))) goto label_05d8ae28;
			pSVar9 = this._tilingX;
			if (pSVar9 == null) goto label_05d8c243;
			pSVar9.Value = *(float)&(*(ulong)((sbyte)pSVar20 + 0x20));
			pSVar9 = this._tilingY;
			if (pSVar9 == null) goto label_05d8c243;
			pSVar9.Value = *(float)((long)&(*(ulong)((sbyte)pSVar20 + 0x20)) + 4);
		}
		__this_08 = (MapEditorInspectPanel)this._mapObjects;
		if (__this_08 != null) {
			ppSVar24 = &this._mixedFields;
			index = 1;
			while (index < *(int)&__this_08.m_CancellationTokenSource) {
				pMVar25 = __this_08.get_Item(index);
				if ((pMVar25 == null) ||(pMVar36 = pMVar25.ScriptObject, pMVar36 == null)) goto label_05d8c243;
				bVar3 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
				if (((pMVar36.klass._2).typeHierarchyDepth < bVar3) ||((pMVar36.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(MapScriptSceneObject))) goto label_05d8c24b;
				pSVar20 = __this_08.SanitizeName(pMVar36.Name);
				pSVar6 = this._name;
				if (pSVar6 == null) goto label_05d8c243;
				bVar19 = (pSVar20 != pSVar6._value);
				if (bVar19) {
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"Name");
				}
				pSVar7 = this._active;
				if (pSVar7 == null) goto label_05d8c243;
				if (pMVar36.Active != pSVar7._value) {
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"Active");
				}
				pSVar7 = this._static;
				if (pSVar7 == null) goto label_05d8c243;
				if (pMVar36.Static != pSVar7._value) {
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"Static");
				}
				pSVar7 = this._networked;
				if (pSVar7 == null) goto label_05d8c243;
				if (pMVar36.Networked != pSVar7._value) {
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"Networked");
				}
				pSVar7 = this._visible;
				if (pSVar7 == null) goto label_05d8c243;
				if (pMVar36.Visible != pSVar7._value) {
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"Visible");
				}
				pSVar8 = this._parent;
				if (pSVar8 == null) goto label_05d8c243;
				if (pMVar36.Parent != pSVar8._value) {
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"Parent");
				}
				UVar38 = pMVar36.GetPosition();
				pSVar9 = this._positionX;
				if (pSVar9 == null) goto label_05d8c243;
				pfVar1 = &pSVar9._value;
				if ((UVar38.x != *pfVar1) || (fVar37 = UVar38.y, NAN(UVar38.x) || NAN(*pfVar1))) {
					local_f8._8_4_ = extraout_XMM0_Dc;
					local_f8._0_8_ = UVar38._0_8_;
					local_f8._12_4_ = extraout_XMM0_Dd;
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"PositionX");
					fVar37 = (float)local_f8._4_4_;
				}
				pSVar9 = this._positionY;
				if (pSVar9 == null) goto label_05d8c243;
				pfVar1 = &pSVar9._value;
				if ((fVar37 != *pfVar1) || (NAN(fVar37) || NAN(*pfVar1))) {
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"PositionY");
				}
				pSVar9 = this._positionZ;
				if (pSVar9 == null) goto label_05d8c243;
				pfVar1 = &pSVar9._value;
				if ((UVar38.z != *pfVar1) || (NAN(UVar38.z) || NAN(*pfVar1))) {
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"PositionZ");
				}
				UVar38 = pMVar36.GetRotation();
				pSVar9 = this._rotationX;
				if (pSVar9 == null) goto label_05d8c243;
				pfVar1 = &pSVar9._value;
				if ((UVar38.x != *pfVar1) || (fVar37 = UVar38.y, NAN(UVar38.x) || NAN(*pfVar1))) {
					local_f8._8_4_ = extraout_XMM0_Dc_00;
					local_f8._0_8_ = UVar38._0_8_;
					local_f8._12_4_ = extraout_XMM0_Dd_00;
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"RotationX");
					fVar37 = (float)local_f8._4_4_;
				}
				pSVar9 = this._rotationY;
				if (pSVar9 == null) goto label_05d8c243;
				pfVar1 = &pSVar9._value;
				if ((fVar37 != *pfVar1) || (NAN(fVar37) || NAN(*pfVar1))) {
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"RotationY");
				}
				pSVar9 = this._rotationZ;
				if (pSVar9 == null) goto label_05d8c243;
				pfVar1 = &pSVar9._value;
				if ((UVar38.z != *pfVar1) || (NAN(UVar38.z) || NAN(*pfVar1))) {
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"RotationZ");
				}
				UVar38 = pMVar36.GetScale();
				pSVar9 = this._scaleX;
				if (pSVar9 == null) goto label_05d8c243;
				pfVar1 = &pSVar9._value;
				if ((UVar38.x != *pfVar1) || (fVar37 = UVar38.y, NAN(UVar38.x) || NAN(*pfVar1))) {
					local_f8._8_4_ = extraout_XMM0_Dc_01;
					local_f8._0_8_ = UVar38._0_8_;
					local_f8._12_4_ = extraout_XMM0_Dd_01;
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"ScaleX");
					fVar37 = (float)local_f8._4_4_;
				}
				pSVar9 = this._scaleY;
				if (pSVar9 == null) goto label_05d8c243;
				pfVar1 = &pSVar9._value;
				if ((fVar37 != *pfVar1) || (NAN(fVar37) || NAN(*pfVar1))) {
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"ScaleY");
				}
				pSVar9 = this._scaleZ;
				if (pSVar9 == null) goto label_05d8c243;
				pfVar1 = &pSVar9._value;
				if ((UVar38.z != *pfVar1) || (NAN(UVar38.z) || NAN(*pfVar1))) {
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"ScaleZ");
				}
				pSVar6 = this._collideMode;
				if (pSVar6 == null) goto label_05d8c243;
				bVar19 = ((String)(*(ulong)((sbyte)pMVar36 + 0x60)) != pSVar6._value);
				if (bVar19) {
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"CollideMode");
				}
				pSVar6 = this._collideWith;
				if (pSVar6 == null) goto label_05d8c243;
				bVar19 = ((*(ulong)((sbyte)pMVar36 + 0x68)) != pSVar6._value);
				if (bVar19) {
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"CollideWith");
				}
				pSVar6 = this._physicsMaterial;
				if (pSVar6 == null) goto label_05d8c243;
				bVar19 = ((*(ulong)((sbyte)pMVar36 + 0x70)) != pSVar6._value);
				if (bVar19) {
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"PhysicsMaterial");
				}
				pSVar20 = (*(ulong)((sbyte)pMVar36 + 0x78));
				if ((pSVar20 == null) ||(pSVar6 = this._shader, pSVar6 == null)) goto label_05d8c243;
				bVar19 = ((String)pSVar20.fields != pSVar6._value);
				if (bVar19) {
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"Shader");
				}
				pSVar20 = (*(ulong)((sbyte)pMVar36 + 0x78));
				if ((pSVar20 == null) ||(pSVar10 = this._color, pSVar10 == null)) goto label_05d8c243;
				pSVar11 = (*(ulong)((sbyte)pSVar20 + 0x18));
				pUVar21 = pSVar10._value;
				if ((pSVar11 == null) || (pUVar21 == null)) goto label_05d8c243;
				if ((*(int)&(pSVar11._1).name != pUVar21.R) ||(((*(int)((long)&(pSVar11._1).name + 4) != pUVar21.G ||(*(int)&(pSVar11._1).namespaze != pUVar21.B)) ||(*(int)((long)&(pSVar11._1).namespaze + 4) != pUVar21.A)))) {
					if ((HashSet<object>)*ppSVar24 ==null) goto label_05d8c243;
					(*ppSVar24).Add((Il2CppObject *)"Color");
				}
				index = index + 1;
				__this_08 = (MapEditorInspectPanel)this._mapObjects;
				if (__this_08 == null) goto label_05d8c243;
			}
			if ((HashSet<object>)*ppSVar24 !=null) {
				bVar19 = (*ppSVar24).Contains((Il2CppObject *)"Name") ;
				if (bVar19) {
					pSVar6 = this._name;
					if (pSVar6 == null) goto label_05d8c243;
					pSVar6.Value = (Il2CppObject *)"--";
				}
				if ((HashSet<object>)*ppSVar24 !=null) {
					bVar19 = (*ppSVar24).Contains((Il2CppObject *)"Texture");
					if (bVar19) {
						pSVar6 = this._texture;
						if (pSVar6 == null) goto label_05d8c243;
						pSVar6.Value = (Il2CppObject *)"--";
					}
					pSVar26 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<Dictionary<string, BaseSetting>>));
					pSVar26 = new List<object>();
					local_60 = &this._components;
					this._components = pSVar26;
					pSVar27 = new List<string>();
					local_58 = &this._componentNames;
					this._componentNames = pSVar27;
					pMVar25 = this._mapObject;
					if ((pMVar25 != null) &&(pMVar36 = pMVar25.ScriptObject, pMVar36 != null)) {
						bVar3 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
						if (((pMVar36.klass._2).typeHierarchyDepth < bVar3) ||((pMVar36.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(MapScriptSceneObject))) {
	label_05d8c24b: ;
							throw new InvalidCastException();
						}
						__this_00 = *(List<object>*)&(*(uint)((sbyte)pMVar36 + 0x80));
						if (__this_00 != null) {
							local_88.GetEnumerator(__this_00);
							local_c8 = local_78;
							local_d8 = (byte[])local_88._0_8_;
							uStack_d0 = (byte)local_88._8_8_;
							goto label_05d8b960;
						}
					}
				}
			}
		}
	label_05d8c243: ;
		throw new NullReferenceException();
	label_05d8c075: ;
		if (local_100 != null) {
			pIVar16 = local_100.klass;
			pIVar30.MoveNext();
		}
	label_05d8b960: ;
		do {
			bVar19 = local_d8.MoveNext();
			if (!bVar19) {
				local_d8.Dispose();
				this.SyncSettingElements();
				return;
			}
			__this_02 = new MapEditorInspectPanel.c__DisplayClass95_0();
			if (__this_02 == null) {
				throw new NullReferenceException();
			}
			targetAddress = &__this_02.fields;
			__this_02.component = local_c8;
			local_e0 = __this_02;
			pSVar28 = Enumerable.Skip<MapObject>((System_Collections_Generic_IEnumerable_TSource__o)this._mapObjects, 1);
			__this_03 = new Func<MapObject, bool>((object)local_e0, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass95_0_SyncSettings_b__0);
			bVar19 = Enumerable.All<MapObject>(pSVar28, (System_Func_TSource__bool__o)__this_03);
		} while (!bVar19);
		if (targetAddress.component == null) {
			throw new NullReferenceException();
		}
		pSVar27 = *local_58;
		if (pSVar27 != null) {
			pSVar20 = targetAddress.component.ComponentName;
			piVar2 = &pSVar27._version;
			*piVar2 = *piVar2 + 1;
			pSVar12 = pSVar27._items;
			if (pSVar12 != null) {
				uVar5 = pSVar27._size;
				if (uVar5 < (uint)pSVar12.Length) {
					pSVar27._size = uVar5 + 1;
					pSVar12[(int)uVar5] = pSVar20;
				}
				else {
					pSVar27.AddWithResize((object)pSVar20);
				}
				pGVar13 = this._gameManager;
				if (pGVar13 == null) {
					throw new NullReferenceException();
				}
				pMVar32 = targetAddress.component;
				if (pMVar32 == null) {
					throw new NullReferenceException();
				}
				pCVar14 = pGVar13.LogicEvaluator;
				if (pCVar14 == null) {
					throw new NullReferenceException();
				}
				pSVar29 = pCVar14.GetComponentSettings(pMVar32.ComponentName, pMVar32.Parameters);
				pSVar26 = *local_60;
				if (pSVar26 != null) {
					piVar2 = &pSVar26._version;
					*piVar2 = *piVar2 + 1;
					pSVar15 = pSVar26._items;
					if (pSVar15 != null) {
						uVar5 = pSVar26._size;
						if (uVar5 < (uint)pSVar15.Length) {
							pSVar26._size = uVar5 + 1;
							pSVar15[(int)uVar5] = pSVar29;
						}
						else {
							pSVar26.AddWithResize((object)pSVar29);
						}
						__this_04 = this.SerializeComponentFields(pSVar29);
						pIVar30 = (object)Enumerable.Skip<MapObject>((System_Collections_Generic_IEnumerable_TSource__o)this._mapObjects, 1);
						if (pIVar30 == null) {
							throw new NullReferenceException();
						}
						pIVar16 = pIVar30.klass;
						local_100 = pIVar30.MoveNext();
						local_48 = &local_100;
						if (local_100 == null) {
	label_05d8c10f: ;
							throw new NullReferenceException();
						}
						targetAddress_00 = &local_e0.__9__2;
						local_f8._0_8_ = __this_04;
						do {
							pIVar30 = local_100;
							pIVar16 = local_100.klass;
							bVar19 = pIVar30.MoveNext();
							pIVar30 = local_100;
							if (!bVar19) goto label_05d8c075;
							if (local_100 == null) {
								throw new NullReferenceException();
							}
							pIVar16 = local_100.klass;
							pIVar30 = pIVar30.MoveNext();
							if (pIVar30 == null) {
								throw new NullReferenceException();
							}
							pIVar16 = pIVar30[2].klass;
							if (pIVar16 == null) {
								throw new NullReferenceException();
							}
							pvVar18 = (pIVar16._1).image;
							bVar3 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
							if ((*(byte)((long)pvVar18 + 0x130) < bVar3) ||(*(MapScriptSceneObject*)(*(long)((long)pvVar18 + 200) + -8 + (ulong)bVar3 * 8) != typeof(MapScriptSceneObject))) {
								throw new InvalidCastException();
							}
							pSVar28 = (pIVar16._1);
							__this_05 = *targetAddress_00;
							if (__this_05 == null) {
								__this_05 = new Func<MapScriptComponent, bool>((object)local_e0, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass95_0_SyncSettings_b__2);
								*targetAddress_00 = __this_05;
							}
							pMVar32 = Enumerable.First<MapScriptComponent>(pSVar28, (System_Func_TSource__bool__o)__this_05);
							pGVar13 = this._gameManager;
							if (pGVar13 == null) {
								throw new NullReferenceException();
							}
							if (targetAddress.component == null) {
								throw new NullReferenceException();
							}
							if (pMVar32 == null) {
								throw new NullReferenceException();
							}
							pCVar14 = pGVar13.LogicEvaluator;
							if (pCVar14 == null) {
								throw new NullReferenceException();
							}
							pSVar29 = pCVar14.GetComponentSettings(targetAddress.component.ComponentName, pMVar32.Parameters);
							__this_06 = this.SerializeComponentFields(pSVar29);
							if (__this_04 == null) {
								throw new NullReferenceException();
							}
							local_88.GetEnumerator((Dictionary<object, object>)__this_04);
							local_98._0_4_ = local_68;
							local_98._4_4_ = uStack_64;
							local_a8 = local_78;
							pSStack_a0 = pSStack_70;
							local_b8 = (byte[])local_88._0_8_;
							local_88._0_8_ = null;
							local_88._8_8_ = local_b8;
							if (__this_06 == null) {
								bVar19 = local_b8.MoveNext();
								if (bVar19) {
									throw new NullReferenceException();
								}
							}
							else {
								while(true) {
									bVar19 = local_b8.MoveNext();
									pSVar20 = pSStack_a0;
									pMVar32 = local_a8;
									if (!bVar19) break;
									bVar19 = __this_06.TryGetValue((object)local_a8, (object*)&local_c0);
									if ((!bVar19) ||(bVar19 = (local_c0 != pSVar20))) {
										if (targetAddress.component == null) {
											throw new NullReferenceException();
										}
										__this_01 = (HashSet<object>)*ppSVar24;
										pSVar20 = targetAddress.component.ComponentName;
										pSVar20 = String.Concat("Component:", pSVar20, ":", (String)pMVar32);
										if (__this_01 == null) {
											throw new NullReferenceException();
										}
										__this_01.Add((object)pSVar20);
									}
								}
							}
							local_b8.Dispose();
							__this_04 = (Dictionary<string, string>)local_f8._0_8_;
							if (local_100 == null) goto label_05d8c10f;
						} while(true);
					}
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600530D")]
	[Address(RVA = "0x5C8F8B0", Offset = "0x5C8E8B0", VA = "0x5C8F8B0")]
	private static bool ColorEquals(Color255 a, Color255 b)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$ColorEquals): clean
		if ((a == null) || (b == null)) {
			throw new NullReferenceException();
		}
		if (((a.R == b.R) && (a.G == b.G)) &&(a.B == b.B)) {
			return a.A == b.A;
		}
		return false;
	}

	[Token(Token = "0x600530E")]
	[Address(RVA = "0x5C8C350", Offset = "0x5C8B350", VA = "0x5C8C350")]
	private string[] WithMixedOption(string[] options, string fieldKey, StringSetting setting)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$WithMixedOption): 1 lines keep C-only constructs
		HashSet<object> __this_00;
		bool bVar1;
		List<string> __this_01;
		String[] pSVar2;

		if (Il2CppMethodInitialized_0754802a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_0754802a = true;
		}
		__this_00 = (HashSet<object>)this._mixedFields;
		if (__this_00 != null) {
			bVar1 = __this_00.Contains((object)fieldKey);
			if (!bVar1) {
				return options;
			}
			if (setting != null) {
				setting.Value = (Il2CppObject *)"--";
				__this_01 = new List<string>((IEnumerable<T>)options);
				if (__this_01 != null) {
					__this_01.Insert(0, (Il2CppObject *)"--");
					pSVar2 = (String[])__this_01.ToArray();
					return pSVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600530F")]
	[Address(RVA = "0x5C8D920", Offset = "0x5C8C920", VA = "0x5C8D920")]
	private void CaptureSyncedValues()
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$CaptureSyncedValues): 8 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		StringSetting pSVar2;
		HashSet<object> pSVar3;
		BoolSetting pSVar4;
		IntSetting pSVar5;
		FloatSetting pSVar6;
		List<Dictionary<string, BaseSetting>> __this_00;
		bool bVar7;
		String pSVar8;
		List<string> pSVar9;
		Dictionary<string, BaseSetting> settings;
		Dictionary<string, string> __this_01;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o source;
		System_Collections_Generic_List_TSource__o __this_02;
		String pSVar10;
		MapEditorInspectPanel __this_03;
		MapEditorInspectPanel __this_04;
		int index;
		bool local_71;
		float local_70;
		int local_6c;
		byte[] local_68 = new byte[8];
		String local_58;
		Dictionary<string, string> local_50;
		byte[] local_48 = new byte[16];
		String local_38;

		if (Il2CppMethodInitialized_0754802b == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_0754802b = true;
		}
		local_71 = false;
		local_6c = 0;
		local_70 = 0.0;
		local_68 = (byte[])0x0;
		local_58 = null;
		pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
		if (pSVar1 != null) {
			pSVar1.Clear();
			pSVar2 = this._name;
			if ((pSVar2 != null) &&(pSVar1 = (Dictionary<object, object>)this._syncedSerialized , pSVar1 != null)) {
				pSVar1.set_Item((Il2CppObject *)"Name", (object)pSVar2._value);
				pSVar3 = (HashSet<object>)this._mixedFields;
				if (pSVar3 != null) {
					pSVar1 = (Dictionary<object, object>)this._syncedSerialized ;
					bVar7 = pSVar3.Contains((Il2CppObject *)"Active");
					pSVar8 = "Active";
					if (bVar7) {
						pSVar10 = "--";
					}
					else {
						pSVar4 = this._active;
						if (pSVar4 == null) goto label_05d8eb8f;
						local_71 = pSVar4._value;
						pSVar10 = local_71.ToString();
					}
					if (pSVar1 != null) {
						pSVar1.set_Item((object)pSVar8, (object)pSVar10);
						pSVar3 = (HashSet<object>)this._mixedFields;
						if (pSVar3 != null) {
							pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
							bVar7 = pSVar3.Contains((Il2CppObject *)"Static");
							pSVar8 = "Static";
							if (bVar7) {
								pSVar10 = "--";
							}
							else {
								pSVar4 = this._static;
								if (pSVar4 == null) goto label_05d8eb8f;
								local_71 = pSVar4._value;
								pSVar10 = local_71.ToString();
							}
							if (pSVar1 != null) {
								pSVar1.set_Item((object)pSVar8, (object)pSVar10);
								pSVar3 = (HashSet<object>)this._mixedFields;
								if (pSVar3 != null) {
									pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
									bVar7 = pSVar3.Contains((Il2CppObject *)"Networked");
									pSVar8 = "Networked";
									if (bVar7) {
										pSVar10 = "--";
									}
									else {
										pSVar4 = this._networked;
										if (pSVar4 == null) goto label_05d8eb8f;
										local_71 = pSVar4._value;
										pSVar10 = local_71.ToString();
									}
									if (pSVar1 != null) {
										pSVar1.set_Item((object)pSVar8, (object)pSVar10);
										pSVar3 = (HashSet<object>)this._mixedFields;
										if (pSVar3 != null) {
											pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
											bVar7 = pSVar3.Contains((Il2CppObject *)"Visible");
											pSVar8 = "Visible";
											if (bVar7) {
												pSVar10 = "--";
											}
											else {
												pSVar4 = this._visible;
												if (pSVar4 == null) goto label_05d8eb8f;
												local_71 = pSVar4._value;
												pSVar10 = local_71.ToString();
											}
											if (pSVar1 != null) {
												pSVar1.set_Item((object)pSVar8, (object)pSVar10);
												pSVar3 = (HashSet<object>)this._mixedFields;
												if (pSVar3 != null) {
													pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
													bVar7 = pSVar3.Contains((Il2CppObject *)"Parent");
													pSVar8 = "Parent";
													if (bVar7) {
														pSVar10 = "--";
													}
													else {
														pSVar5 = this._parent;
														if (pSVar5 == null) goto label_05d8eb8f;
														local_6c = pSVar5._value;
														pSVar10 = local_6c.ToString();
													}
													if (pSVar1 != null) {
														pSVar1.set_Item((object)pSVar8, (object)pSVar10);
														pSVar3 = (HashSet<object>)this._mixedFields;
														if (pSVar3 != null) {
															pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
															bVar7 = pSVar3.Contains((Il2CppObject *)"PositionX");
															pSVar8 = "PositionX";
															if (bVar7) {
																pSVar10 = "--";
															}
															else {
																pSVar6 = this._positionX;
																if (pSVar6 == null) goto label_05d8eb8f;
																local_70 = pSVar6._value;
																pSVar10 = local_70.ToString("R");
															}
															if (pSVar1 != null) {
																pSVar1.set_Item((object)pSVar8, (object)pSVar10);
																pSVar3 = (HashSet<object>)this._mixedFields;
																if (pSVar3 != null) {
																	pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
																	bVar7 = pSVar3.Contains((Il2CppObject *)"PositionY");
																	pSVar8 = "PositionY";
																	if (bVar7) {
																		pSVar10 = "--";
																	}
																	else {
																		pSVar6 = this._positionY;
																		if (pSVar6 == null) goto label_05d8eb8f;
																		local_70 = pSVar6._value;
																		pSVar10 = local_70.ToString("R");
																	}
																	if (pSVar1 != null) {
																		pSVar1.set_Item((object)pSVar8, (object)pSVar10);
																		pSVar3 = (HashSet<object>)this._mixedFields;
																		if (pSVar3 != null) {
																			pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
																			bVar7 = pSVar3.Contains((Il2CppObject *)"PositionZ");
																			pSVar8 = "PositionZ";
																			if (bVar7) {
																				pSVar10 = "--";
																			}
																			else {
																				pSVar6 = this._positionZ;
																				if (pSVar6 == null) goto label_05d8eb8f;
																				local_70 = pSVar6._value;
																				pSVar10 = local_70.ToString("R");
																			}
																			if (pSVar1 != (Dictionary<object, object>)0x0) {
																				pSVar1.set_Item((object)pSVar8, (object)pSVar10);
																				pSVar3 = (HashSet<object>)this._mixedFields;
																				if (pSVar3 != null) {
																					pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
																					bVar7 = pSVar3.Contains((Il2CppObject *)"RotationX");
																					pSVar8 = "RotationX";
																					if (bVar7) {
																						pSVar10 = "--";
																					}
																					else {
																						pSVar6 = this._rotationX;
																						if (pSVar6 == null) goto label_05d8eb8f;
																						local_70 = pSVar6._value;
																						pSVar10 = local_70.ToString("R");
																					}
																					if (pSVar1 != null) {
																						pSVar1.set_Item((object)pSVar8, (object)pSVar10);
																						pSVar3 = (HashSet<object>)this._mixedFields;
																						if (pSVar3 != null) {
																							pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
																							bVar7 = pSVar3.Contains((Il2CppObject *)"RotationY");
																							pSVar8 = "RotationY";
																							if (bVar7) {
																								pSVar10 = "--";
																							}
																							else {
																								pSVar6 = this._rotationY;
																								if (pSVar6 == null) goto label_05d8eb8f;
																								local_70 = pSVar6._value;
																								pSVar10 = local_70.ToString("R");
																							}
																							if (pSVar1 != null) {
																								pSVar1.set_Item((object)pSVar8, (object)pSVar10);
																								pSVar3 = (HashSet<object>)this._mixedFields;
																								if (pSVar3 != (HashSet<object>)0x0) {
																									pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
																									bVar7 = pSVar3.Contains((Il2CppObject *) "RotationZ");
																									pSVar8 = "RotationZ";
																									if (bVar7) {
																										pSVar10 = "--";
																									}
																									else {
																										pSVar6 = this._rotationZ;
																										if (pSVar6 == null) goto label_05d8eb8f;
																										local_70 = pSVar6._value;
																										pSVar10 = local_70.ToString("R");
																									}
																									if (pSVar1 != null) {
																										pSVar1.set_Item((object)pSVar8, (object)pSVar10);
																										pSVar3 = (HashSet<object>)this._mixedFields;
																										if (pSVar3 != null) {
																											pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
																											bVar7 = pSVar3.Contains((Il2CppObject *)"ScaleX");
																											pSVar8 = "ScaleX";
																											if (bVar7) {
																												pSVar10 = "--";
																											}
																											else {
																												pSVar6 = this._scaleX;
																												if (pSVar6 == null) goto label_05d8eb8f;
																												local_70 = pSVar6._value;
																												pSVar10 = local_70.ToString("R");
																											}
																											if (pSVar1 != null) {
																												pSVar1.set_Item((object)pSVar8, (object)pSVar10);
																												pSVar3 = (System_Collections_Generic_HashSet_object__o * )this._mixedFields;
																												if (pSVar3 != null) {
																													pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
																												bVar7 = pSVar3.Contains((Il2CppObject *)"ScaleY");
																												pSVar8 = "ScaleY";
																												if (bVar7) {
																													pSVar10 = "--";
																												}
																												else {
																													pSVar6 = this._scaleY;
																													if (pSVar6 == null) goto label_05d8eb8f;
																													local_70 = pSVar6._value;
																													pSVar10 = local_70.ToString("R");
																												}
																												if (pSVar1 != null) {

																												pSVar1.set_Item((object)pSVar8, (object)pSVar10);
																												pSVar3 = (HashSet<object>)this._mixedFields;
																												if (pSVar3 != null) {
																													pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
																												bVar7 = pSVar3.Contains((Il2CppObject *)"ScaleZ");
																												pSVar8 = "ScaleZ";
																												if (bVar7) {
																													pSVar10 = "--";
																												}
																												else {
																													pSVar6 = this._scaleZ;
																													if (pSVar6 == null) goto label_05d8eb8f;
																													local_70 = pSVar6._value;
																													pSVar10 = local_70.ToString("R");
																												}
																												if (pSVar1 != null) {

																												pSVar1.set_Item((object)pSVar8, (object)pSVar10);
																												pSVar2 = this._collideMode;
																												if ((pSVar2 != null) &&(pSVar1 = (Dictionary<object, object>)this._syncedSerialized, pSVar1 != null)) {

																												pSVar1.set_Item((Il2CppObject *)"CollideMode", (object)pSVar2._value);
																												pSVar2 = this._collideWith;
																												if ((pSVar2 != null) &&(pSVar1 = (Dictionary<object, object>)this._syncedSerialized, pSVar1 != null)) {

																												pSVar1.set_Item((Il2CppObject *)"CollideWith", (object)pSVar2._value);
																												pSVar2 = this._physicsMaterial;
																												if ((pSVar2 != null) &&(pSVar1 = (Dictionary<object, object>)this._syncedSerialized, pSVar1 != null)) {

																												pSVar1.set_Item((Il2CppObject *)"PhysicsMaterial", (object)pSVar2._value);
																												pSVar2 = this._shader;
																												if ((pSVar2 != null) &&(__this_03 = (MapEditorInspectPanel)this._syncedSerialized, __this_03 != null)) {

																												__this_03.set_Item((Il2CppObject *)"Shader", (object)pSVar2._value);
																												__this_04 = (MapEditorInspectPanel)this._syncedSerialized;
																												pSVar8 = __this_03.SerializeSetting((BaseSetting)this._color);
																												if (__this_04 != null) {

																												__this_04.set_Item((Il2CppObject *)"Color", (object)pSVar8);
																												pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
																												pSVar8 = __this_04.SerializeSetting((BaseSetting)this._reflectColor);
																												if (pSVar1 != null) {

																												pSVar1.set_Item((Il2CppObject *)"ReflectColor", (object)pSVar8);
																												pSVar2 = this._texture;
																												if ((pSVar2 != null) &&(pSVar1 = (Dictionary<object, object>)this._syncedSerialized, pSVar1 != null)) {

																												pSVar1.set_Item((Il2CppObject *)"Texture", (object)pSVar2._value);
																												pSVar3 = (HashSet<object>)this._mixedFields;
																												if (pSVar3 != null) {
																													pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
																												bVar7 = pSVar3.Contains((Il2CppObject *)"TilingX");
																												pSVar8 = "TilingX";
																												if (bVar7) {
																													pSVar10 = "--";
																												}
																												else {
																													pSVar6 = this._tilingX;
																													if (pSVar6 == null) goto label_05d8eb8f;
																													local_70 = pSVar6._value;
																													pSVar10 = local_70.ToString("R");
																												}
																												if (pSVar1 != null) {

																												pSVar1.set_Item((object)pSVar8, (object)pSVar10);
																												pSVar3 = (HashSet<object>)this._mixedFields;
																												if (pSVar3 != null) {
																													pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
																												bVar7 = pSVar3.Contains((Il2CppObject *)"TilingY");
																												pSVar8 = "TilingY";
																												if (bVar7) {
																													pSVar10 = "--";
																												}
																												else {
																													pSVar6 = this._tilingY;
																													if (pSVar6 == null) goto label_05d8eb8f;
																													local_70 = pSVar6._value;
																													pSVar10 = local_70.ToString("R");
																												}
																												if (pSVar1 != null) {

																												pSVar1.set_Item((object)pSVar8, (object)pSVar10);
																												pSVar3 = (HashSet<object>)this._mixedFields;
																												if (pSVar3 != null) {
																													pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
																												bVar7 = pSVar3.Contains((Il2CppObject *)"OffsetX");
																												pSVar8 = "OffsetX";
																												if (bVar7) {
																													pSVar10 = "--";
																												}
																												else {
																													pSVar6 = this._offsetX;
																													if (pSVar6 == null) goto label_05d8eb8f;
																													local_70 = pSVar6._value;
																													pSVar10 = local_70.ToString("R");
																												}
																												if (pSVar1 != null) {

																												pSVar1.set_Item((object)pSVar8, (object)pSVar10);
																												pSVar3 = (HashSet<object>)this._mixedFields;
																												if (pSVar3 != null) {
																													pSVar1 = (Dictionary<object, object>)this._syncedSerialized;
																												bVar7 = pSVar3.Contains((Il2CppObject *)"OffsetY");
																												pSVar8 = "OffsetY";
																												if (bVar7) {
																													pSVar10 = "--";
																												}
																												else {
																													pSVar6 = this._offsetY;
																													if (pSVar6 == null) goto label_05d8eb8f;
																													local_70 = pSVar6._value;
																													pSVar10 = local_70.ToString("R");
																												}
																												if (pSVar1 != null) {

																												pSVar1.set_Item((object)pSVar8, (object)pSVar10);
																												pSVar1 = (Dictionary<object, object>)this._syncedComponentFields;
																												if (pSVar1 != null) {

																												pSVar1.Clear();
																												pSVar9 = this._componentNames;
																												if (pSVar9 != null) {
																													index = 0;
																													do {
																														if (pSVar9._size <= index) {
																															return;
																														}
																														__this_00 = this._components;
																														if (__this_00 ==null) break;
																												settings = (Dictionary<string, BaseSetting>)__this_00.get_Item(index);
																												__this_01 = this.SerializeComponentFields(settings);
																												if (__this_01 ==null) break;
																												local_50 = __this_01;
																												source = __this_01.Keys;
																												__this_02 = Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)source) ;
																												if (__this_02 ==null) break;
																												local_48.GetEnumerator((List<object>)__this_02);
																												local_58 = local_38;
																												local_68 = (byte[])local_48._0_8_;
																												local_48._0_8_ =null;
																												local_48._8_8_ = local_68;
																												while (true) {
																													bVar7 = local_68.MoveNext();
																													pSVar8 = local_58;
																													if (!(bVar7)) break;
																													pSVar9 = this._componentNames;
																													if (pSVar9 == null) {
																													throw new NullReferenceException();
																												}
																												pSVar3 = (HashSet<object>)this._mixedFields;
																												pSVar10 = pSVar9.get_Item(index);
																												if ((typeof(MapEditorInspectPanel)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pSVar10 = String.Concat("Component:", pSVar10, ":", pSVar8);
																												if (pSVar3 == null) {
																													throw new NullReferenceException();
																												}
																												bVar7 = pSVar3.Contains((object)pSVar10);
																												if (bVar7) {

																												local_50.set_Item((object)pSVar8, (Il2CppObject *)"--");
																												}
																												}
																												local_68.Dispose();
																												pSVar9 = this._componentNames;
																												if (pSVar9 == null) break;
																												pSVar1 = (Dictionary<object, object>)this._syncedComponentFields;
																												pSVar8 = pSVar9.get_Item(index);
																												if (pSVar1 == null) break;
																												pSVar1.set_Item((object)pSVar8, (object)local_50);
																												index = index + 1;
																												pSVar9 = this._componentNames;
																												} while (pSVar9 != null);
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05d8eb8f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005310")]
	[Address(RVA = "0x5C8F8F0", Offset = "0x5C8E8F0", VA = "0x5C8F8F0")]
	private Dictionary<string, string> SerializeComponentFields(Dictionary<string, BaseSetting> settings)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$SerializeComponentFields): 7 lines keep C-only constructs
		object pIVar1;
		bool bVar2;
		Dictionary<string, string> __this_00;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_01;
		BaseSetting pSVar3;
		String value;
		MapEditorInspectPanel pUVar4;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_68;
		MapEditorInspectPanel local_50;
		byte[] local_48 = new byte[16];
		String local_38;

		local_68._dictionary = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._currentKey = null;
		__this_00 = new Dictionary<string, string>();
		if (settings != null) {
			__this_01 = settings.Keys;
			if (__this_01 != null) {
				local_50 = (MapEditorInspectPanel)settings;
				local_48.GetEnumerator(__this_01);
				local_68._currentKey = (object)local_38;
				local_68._dictionary = (Dictionary<TKey, TValue>)local_48._0_8_;
				local_68._index = local_48._8_4_;
				local_68._version = local_48._12_4_;
				local_48._0_8_ = null;
				local_48._8_8_ = &local_68;
				if (__this_00 == null) {
					while(true) {
						bVar2 = local_68.MoveNext();
						pIVar1 = local_68._currentKey;
						if (!bVar2) break;
						bVar2 = ((String)local_68._currentKey == "Description");
						if (!bVar2) {
							if ((String)pIVar1 == null) goto label_05d8fbca;
							bVar2 = pIVar1.EndsWith("Tooltip") ;
							if (!bVar2) {
								bVar2 = pIVar1.EndsWith("Dropbox");
								if (!bVar2) {
									pUVar4 = local_50;
									pSVar3 = local_50.get_Item(pIVar1);
									pUVar4.SerializeSetting(pSVar3);
									throw new NullReferenceException();
								}
							}
						}
					}
				}
				else {
					while(true) {
						bVar2 = local_68.MoveNext();
						pIVar1 = local_68._currentKey;
						if (!bVar2) break;
						bVar2 = ((String)local_68._currentKey == "Description");
						if (!bVar2) {
							if ((String)pIVar1 == null) {
	label_05d8fbca: ;
								throw new NullReferenceException();
							}
							bVar2 = pIVar1.EndsWith("Tooltip") ;
							if (!bVar2) {
								bVar2 = pIVar1.EndsWith("Dropbox");
								if (!bVar2) {
									pUVar4 = local_50;
									pSVar3 = local_50.get_Item(pIVar1);
									value = pUVar4.SerializeSetting(pSVar3);
									__this_00.set_Item(pIVar1, (object)value);
								}
							}
						}
					}
				}
				local_68.Dispose();
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005311")]
	[Address(RVA = "0x5C902A0", Offset = "0x5C8F2A0", VA = "0x5C902A0")]
	private MapScriptComponent MergeComponent(string componentName, MapScriptComponent previous, Dictionary<string, string> changedFields)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$MergeComponent): 12 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<string> collection;
		String[] pSVar3;
		bool bVar5;
		int index;
		List<string> __this_00;
		MapEditorInspectPanel.c__DisplayClass100_0 pUVar6;
		Predicate<T> match;
		String value;
		MapScriptComponent __this_01;
		Predicate<string> __this_02;
		byte[] local_88 = new byte[8];
		String local_78;
		String pSStack_70;
		ulong local_68;
		String local_60;
		byte[] local_58 = new byte[16];
		String local_48;
		String pSStack_40;
		int local_38;
		uint uStack_34;

		local_60 = componentName;
		local_78 = null;
		pSStack_70 = null;
		local_88 = (byte[])0x0;
		local_68._0_4_ = 0;
		local_68._4_4_ = 0;
		if (previous == null) {
			__this_00 = new List<string>();
		}
		else {
			collection = previous.Parameters;
			__this_00 = new List<string>((IEnumerable<T>)collection);
		}
		if (changedFields != null) {
			local_58.GetEnumerator((Dictionary<object, object>)changedFields);
			local_68._0_4_ = local_38;
			local_68._4_4_ = uStack_34;
			local_78 = local_48;
			pSStack_70 = pSStack_40;
			local_88 = (byte[])local_58._0_8_;
			local_58._0_8_ = null;
			local_58._8_8_ = local_88;
			if (__this_00 == null) {
				local_58._8_8_ = local_88;
				bVar5 = local_88.MoveNext();
				if (bVar5) {
					pUVar6 = new MapEditorInspectPanel.c__DisplayClass100_0();
					if (pUVar6 != null) {
						pUVar6.changed.key = local_78;
						pUVar6.changed.value = pSStack_70;
						__this_02 = new Predicate<string>((object)pUVar6, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass100_0_MergeComponent_b__0);
						throw new NullReferenceException();
					}
	label_05d90654: ;
					throw new NullReferenceException();
				}
			}
			else {
				while (bVar5 = local_88.MoveNext()) {
					pUVar6 = new MapEditorInspectPanel.c__DisplayClass100_0();
					if (pUVar6 == null) goto label_05d90654;
					pUVar6.changed.key = local_78;
					pUVar6.changed.value = pSStack_70;
					match = new Predicate<string>((object)pUVar6, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass100_0_MergeComponent_b__0);
					index = __this_00.FindIndex(match);
					value = String.Concat(pUVar6.changed.key, ":", pUVar6.changed.value);
					if (index < 0) {
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar3 = __this_00._items;
						if (pSVar3 == null) {
							throw new NullReferenceException();
						}
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pSVar3.Length) {
							__this_00._size = uVar2 + 1;
							pSVar3[(int)uVar2] = value;
						}
						else {
							__this_00.AddWithResize((object)value);
						}
					}
					else {
						__this_00.set_Item(index, (object)value);
					}
				}
			}
			local_88.Dispose();
			__this_01 = new MapScriptComponent();
			if (__this_01 != null) {
				__this_01.ComponentName = local_60;
				__this_01.Parameters = __this_00;
				return __this_01;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005312")]
	[Address(RVA = "0x5C90720", Offset = "0x5C8F720", VA = "0x5C90720")]
	private bool IsModified(string key, string current)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$IsModified): 1 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		bool bVar2;
		String pSStack_20;

		pSStack_20 = null;
		__this_00 = (Dictionary<object, object>)this._syncedSerialized;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.TryGetValue((object)key, (object*)&pSStack_20);
		if (bVar1) {
			bVar2 = (pSStack_20 != current);
		}
		return bVar2;
	}

	[Token(Token = "0x6005313")]
	[Address(RVA = "0x5C8CA50", Offset = "0x5C8BA50", VA = "0x5C8CA50")]
	private void ApplyMixedIndicators()
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$ApplyMixedIndicators): 25 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		List<string> __this_00;
		Component pUVar3;
		HashSet<object> pSVar4;
		InputField.EndEditEvent __this_01;
		UnityEngine_Events_UnityEvent_bool__o __this_02;
		Il2CppType handle;
		bool bVar5;
		Dictionary<BaseSetting, string> __this_03;
		Dictionary<object, object> __this_04;
		String str1;
		String pSVar6;
		Type pSVar7;
		FieldInfo left;
		Object[] pSVar8;
		ulong uVar9;
		object pIVar10;
		Transform pUVar11;
		MapEditorInspectPanel.c__DisplayClass102_0 __this_05;
		UnityAction<T0> pUVar12;
		MapEditorInspectPanel.c__DisplayClass102_1 __this_06;
		RectTransform __this_07;
		Text __this_08;
		GameObject pUVar13;
		Toggle x;
		int iVar14;
		int fontSize;
		Image pUVar15;
		List<Dictionary<string, BaseSetting>> __this_09;
		ulong uVar16;
		InputField __this_10;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Rect UVar17;
		Color color;
		String local_c0;
		String local_b8;
		Transform local_b0;
		Toggle local_a8;
		byte[] local_98 = new byte[8];
		ulong local_88;
		ulong uStack_80;
		ulong local_78;
		byte[] local_70 = new byte[16];
		uint local_60;
		uint uStack_5c;
		uint uStack_58;
		uint uStack_54;
		int local_50;
		uint uStack_4c;
		byte[] local_48 = new byte[24];

		if (Il2CppMethodInitialized_0754802f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_0754802f = true;
		}
		local_88 = null;
		uStack_80 = null;
		local_98 = (byte[])0x0;
		local_78._0_4_ = 0;
		local_78._4_4_ = 0;
		local_b8 = null;
		local_c0 = null;
		__this_03 = new Dictionary<BaseSetting, string>();
		if (__this_03 != null) {
			__this_03.Add((object)this._positionX, (Il2CppObject *)"PositionX");
			__this_03.Add((object)this._positionY, (Il2CppObject *)"PositionY");
			__this_03.Add((object)this._positionZ, (Il2CppObject *)"PositionZ");
			__this_03.Add((object)this._rotationX, (Il2CppObject *)"RotationX");
			__this_03.Add((object)this._rotationY, (Il2CppObject *)"RotationY");
			__this_03.Add((object)this._rotationZ, (Il2CppObject *)"RotationZ");
			__this_03.Add((object)this._scaleX, (Il2CppObject *)"ScaleX");
			__this_03.Add((object)this._scaleY, (Il2CppObject *)"ScaleY");
			__this_03.Add((object)this._scaleZ, (Il2CppObject *)"ScaleZ");
			__this_03.Add((object)this._tilingX, (Il2CppObject *)"TilingX");
			__this_03.Add((object)this._tilingY, (Il2CppObject *)"TilingY");
			__this_03.Add((object)this._offsetX, (Il2CppObject *)"OffsetX");
			__this_03.Add((object)this._offsetY, (Il2CppObject *)"OffsetY");
			__this_03.Add((object)this._parent, (Il2CppObject *)"Parent");
			__this_03.Add((object)this._active, (Il2CppObject *)"Active");
			__this_03.Add((object)this._static, (Il2CppObject *)"Static");
			__this_03.Add((object)this._networked, (Il2CppObject *)"Networked");
			__this_03.Add((object)this._visible, (Il2CppObject *)"Visible");
			__this_09 = this._components;
			if (__this_09 != null) {
				iVar14 = 0;
				do {
					handle = TypeRef_UI_BaseSettingElement;
					if (__this_09._size <= iVar14) {
						pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
						if (pSVar7 != null) {
							left = (FieldInfo)pSVar7.unknown("_setting");
							bVar5 = (left == null);
							if (bVar5) {
								return;
							}
							pUVar11 = this.SinglePanel;
							if ((pUVar11 != null) &&(pSVar8 = pUVar11.GetComponentsInChildren<InputSettingElement>(true), pSVar8 != null)) {
								iVar14 = (int)pSVar8.Length;
								if (left != null) {
									if (iVar14 < 1) goto label_05d8d241;
									uVar9 = pSVar8.Length & 0xffffffff;
									uVar16 = 0;
									goto label_05d8d2e2;
								}
								if (iVar14 < 1) goto label_05d8d241;
							}
						}
						break;
					}
					__this_04 = (Dictionary<object, object>)__this_09.get_Item(iVar14);
					if (__this_04 == null) break;
					local_70.GetEnumerator(__this_04);
					local_78._0_4_ = local_50;
					local_78._4_4_ = uStack_4c;
					local_88 = (String)CONCAT44(uStack_5c, local_60);
					uStack_80 = (object)CONCAT44(uStack_54, uStack_58);
					local_98 = (byte[])local_70._0_8_;
					local_70._0_8_ = null;
					local_70._8_8_ = local_98;
					in_XMM1_Dc = uStack_58;
					in_XMM1_Dd = uStack_54;
					while (true) {
						bVar5 = local_98.MoveNext();
						pIVar10 = uStack_80;
						pSVar6 = local_88;
						if (!(bVar5)) break;
						__this_00 = this._componentNames;
						if (__this_00 == null) {
							throw new NullReferenceException();
						}
						str1 = __this_00.get_Item(iVar14);
						pSVar6 = String.Concat("Component:", str1, ":", pSVar6);
						__this_03.set_Item(pIVar10, (object)pSVar6);
					}
					local_98.Dispose();
					iVar14 = iVar14 + 1;
					__this_09 = this._components;
				} while (__this_09 != null);
			}
		}
		goto label_05d8d8f3;
		while(true) {
			pUVar3 = (Component)pSVar8[uVar16];
			pIVar10 = (object)left.unknown(pUVar3);
			if (pIVar10 != null) {
				bVar1 = (typeof(BaseSetting)._2).typeHierarchyDepth;
				if (((bVar1 <= (pIVar10.klass._2).typeHierarchyDepth) &&((pIVar10.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(BaseSetting))) &&(bVar5 = __this_03.TryGetValue(pIVar10, (object*)&local_b8))) {
					pSVar4 = (HashSet<object>)this._mixedFields;
					if (pSVar4 == null) goto label_05d8d8f3;
					bVar5 = pSVar4.Contains((object)local_b8);
					if (bVar5) {
						if ((pUVar3 == null) ||(pUVar11 = pUVar3.transform, pUVar11 == null)) goto label_05d8d8f3;
						pUVar11 = pUVar11.Find("InputField");
						__this_10 = null;
						if (pUVar11 != null) {
							if (pUVar11 == null) goto label_05d8d8f3;
							__this_10 = pUVar11.GetComponent<InputField>();
						}
						bVar5 = ((Object)__this_10 != null);
						if (bVar5) {
							__this_05 = new MapEditorInspectPanel.c__DisplayClass102_0();
							if (__this_05 == null) goto label_05d8d8f3;
							__this_05.__4__this = this;
							if (__this_10 == null) goto label_05d8d8f3;
							__this_10.text = "--";
							__this_05.capturedKey = local_b8;
							__this_01 = __this_10.m_OnDidEndEdit;
							pUVar12 = (UnityAction<T0>)il2cpp_codegen_object_new(typeof(UnityAction<string>)) ;
							pUVar12 = new UnityAction<bool>((object)__this_05, (intptr_t) MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass102_0_ApplyMixedIndicators_b__0);
							if (__this_01 == null) goto label_05d8d8f3;
							__this_01.AddListener(pUVar12);
						}
					}
				}
			}
			uVar16 = uVar16 + 1;
			uVar2 = (uint)pSVar8.Length;
			uVar9 = (ulong)uVar2;
			if ((long)(int)uVar2 <= (long)uVar16) break;
	label_05d8d2e2: ;
			if (uVar9 <= uVar16) goto label_05d8d8f8;
		}
	label_05d8d241: ;
		pUVar11 = this.SinglePanel;
		if ((pUVar11 != null) &&(pSVar8 = pUVar11.GetComponentsInChildren<ToggleSettingElement>(true), pSVar8 != null)) {
			iVar14 = (int)pSVar8.Length;
			if (left == null) {
				if (0 < iVar14) goto label_05d8d8f3;
			}
			else if (0 < iVar14) {
				uVar9 = pSVar8.Length & 0xffffffff;
				uVar16 = 0;
				do {
					if (uVar9 <= uVar16) {
	label_05d8d8f8: ;
						throw new IndexOutOfRangeException();
					}
					pUVar3 = (Component)pSVar8[uVar16];
					pIVar10 = (object)left.unknown(pUVar3);
					if (pIVar10 != null) {
						bVar1 = (typeof(BaseSetting)._2).typeHierarchyDepth;
						if (((bVar1 <= (pIVar10.klass._2).typeHierarchyDepth) &&((pIVar10.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(BaseSetting))) &&(bVar5 = __this_03.TryGetValue(pIVar10, (object*)&local_c0))) {
							pSVar4 = (HashSet<object>)this._mixedFields;
							if (pSVar4 == null) goto label_05d8d8f3;
							bVar5 = pSVar4.Contains((object)local_c0);
							if (bVar5) {
								__this_06 = new MapEditorInspectPanel.c__DisplayClass102_1();
								if (__this_06 == null) goto label_05d8d8f3;
								__this_06.__4__this = this;
								if ((pUVar3 == null) ||(pUVar11 = pUVar3.transform, pUVar11 == null)) goto label_05d8d8f3;
								pUVar11 = pUVar11.Find("Toggle");
								x = null;
								if (pUVar11 != null) {
									if (pUVar11 == null) goto label_05d8d8f3;
									x = pUVar11.GetComponent<Toggle>();
								}
								bVar5 = ((Object)x == null);
								if (!bVar5) {
									if ((x == null) ||(local_a8 = x, pUVar11 = x.transform, pUVar11 == null)) goto label_05d8d8f3;
									pUVar11 = pUVar11.Find("Background");
									bVar5 = ((Object)pUVar11 != null);
									local_b0 = pUVar11;
									if (bVar5) {
										if (pUVar11 == null) goto label_05d8d8f3;
										pUVar11 = pUVar11.Find("Checkmark");
										pUVar15 = null;
										if (pUVar11 == null) {
										}
										else {
											if (pUVar11 == null) goto label_05d8d8f3;
											pUVar15 = pUVar11.GetComponent<Image>();
										}
									}
									else {
										pUVar15 = null;
									}
									__this_06.checkmark = pUVar15;
									pUVar15 = __this_06.checkmark;
									bVar5 = ((Object)pUVar15 == null);
									if (!bVar5) {
										local_a8.SetIsOnWithoutNotify(false);
										pUVar15 = __this_06.checkmark;
										if (((pUVar15 == null) ||(pUVar15.enabled = false, local_b0 == null)) ||(__this_07 = local_b0.GetComponent<RectTransform>(), __this_07 == null)) goto label_05d8d8f3;
										UVar17 = __this_07.rect;
										local_48._8_4_ = in_XMM1_Dc;
										local_48._0_8_ = UVar17._8_8_;
										local_48._12_4_ = in_XMM1_Dd;
										pUVar11 = pUVar3.transform;
										pUVar15 = __this_06.checkmark;
										if (pUVar15 == null) goto label_05d8d8f3;
										fontSize = (int32_t)((float)local_48._4_4_ * 0.9);
										if (fontSize < 0xb) {
											fontSize = 10;
										}
										color = pUVar15.get_color();
										__this_08 = ElementFactory.CreateOverlayLabel(local_b0, pUVar11, "--", color, 4, 1, fontSize);
										if (__this_08 == null) goto label_05d8d8f3;
										pUVar13 = __this_08.gameObject;
										__this_06.labelGO = pUVar13;
										__this_06.capturedKey = local_c0;
										__this_02 = (UnityEngine_Events_UnityEvent_bool__o)local_a8.onValueChanged;
										pUVar12 = new UnityAction<bool>((object)__this_06, (intptr_t) MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass102_1_ApplyMixedIndicators_b__1);
										if (__this_02 == null) goto label_05d8d8f3;
										__this_02.AddListener(pUVar12);
									}
								}
							}
						}
					}
					uVar16 = uVar16 + 1;
					uVar2 = (uint)pSVar8.Length;
					uVar9 = (ulong)uVar2;
				} while ((long)uVar16 < (long)(int)uVar2);
			}
			return;
		}
	label_05d8d8f3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005314")]
	[Address(RVA = "0x5C907A0", Offset = "0x5C8F7A0", VA = "0x5C907A0")]
	public void OnSelectTexture(string texture)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$OnSelectTexture): clean
		StringSetting __this_00;
		Dictionary<object, object> __this_01;
		MapScriptBasicMaterial pMVar1;
		MethodInfo method_00;

		__this_00 = this._texture;
		__this_01 = (Dictionary<object, object>)BuiltinMapTextures.AllTextures;
		if (__this_01 != null) {
			pMVar1 = __this_01.get_Item((object)texture);
			if ((pMVar1 != null) && (__this_00 != null)) {
				method_00 = (MethodInfo)pMVar1.Texture;
				__this_00.Value = (object)method_00;
				this.OnChange();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005315")]
	[Address(RVA = "0x5C7ED70", Offset = "0x5C7DD70", VA = "0x5C7ED70")]
	public void OnChange()
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$OnChange): 346 lines keep C-only constructs
		String* ppSVar1;
		int piVar2;
		IntPtr targetAddress;
		byte bVar3;
		uint uVar4;
		uint uVar5;
		StringSetting pSVar6;
		Dictionary<object, object> pSVar7;
		BoolSetting pSVar8;
		IntSetting pSVar9;
		HashSet<object> pSVar10;
		List<MapObject> pSVar11;
		Dictionary<int, object> pSVar12;
		GameObject pUVar13;
		MapObject[] pMVar14;
		ColorSetting pSVar15;
		String pSVar16;
		Il2CppClass* ppIVar17;
		List<Dictionary<string, BaseSetting>> __this_00;
		object pIVar18;
		Object[] pSVar19;
		MapEditorMenu pUVar20;
		byte[] auVar21 = new byte[16];
		float fVar22;
		Il2CppType handle;
		MapScriptReflectiveMaterial pMVar23;
		MapScriptBaseObject pMVar25;
		MapObject obj;
		bool bVar26;
		bool bVar27;
		bool bVar28;
		bool bVar29;
		int iVar30;
		String pSVar31;
		undefined7 extraout_var;
		undefined7 extraout_var_00;
		undefined7 extraout_var_01;
		undefined7 extraout_var_02;
		undefined7 extraout_var_03;
		undefined7 extraout_var_04;
		undefined7 extraout_var_05;
		undefined7 extraout_var_06;
		undefined7 extraout_var_07;
		undefined7 extraout_var_08;
		undefined7 extraout_var_09;
		undefined7 extraout_var_10;
		undefined7 extraout_var_11;
		undefined7 extraout_var_12;
		undefined7 extraout_var_13;
		undefined7 extraout_var_14;
		undefined7 extraout_var_15;
		undefined7 extraout_var_16;
		undefined7 extraout_var_17;
		undefined7 extraout_var_18;
		undefined7 extraout_var_19;
		undefined7 extraout_var_20;
		undefined7 extraout_var_21;
		undefined7 extraout_var_22;
		List<MapObject> scaleObjects;
		String pSVar32;
		MapObject pMVar33;
		Transform pUVar34;
		MapScriptBaseMaterial __this_01;
		Type pSVar35;
		Type pSVar36;
		float pfVar37;
		MapScriptDefaultTiledMaterial __this_02;
		MapScriptBasicMaterial __this_03;
		FloatSetting pSVar38;
		MapEditorInspectPanel.c__DisplayClass104_0 __this_04;
		Dictionary<string, BaseSetting> settings;
		Dictionary<string, string> source;
		Dictionary<string, string> __this_05;
		Func<T, TResult> pSVar39;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		UI_MapEditorInspectPanel___c_StaticFields pUVar40;
		Func<T, TResult> __this_06;
		System_Collections_Generic_Dictionary_TKey__TElement__o __this_07;
		Predicate<T> match;
		MapScriptComponent pMVar41;
		MapScriptReflectiveMaterial __this_08;
		MapScriptLegacyMaterial __this_09;
		List<object> pSVar42;
		MethodInfo pMVar43;
		List<string> pSVar44;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		sbyte cVar45;
		byte bVar46;
		Dictionary<string, string>* ppSVar47;
		MapEditorInspectPanel pUVar48;
		MapEditorInspectPanel pUVar49;
		MapEditorGameManager pGVar50;
		String* material;
		ulong uVar51;
		undefined7 uVar52;
		int iVar53;
		ulong extraout_XMM0_Qb;
		ulong extraout_XMM0_Qb_00;
		byte[] auVar54 = new byte[16];
		float in_XMM1_Db;
		float fVar55;
		uint uVar56;
		float in_XMM1_Dc;
		float fVar57;
		uint uVar58;
		float in_XMM1_Dd;
		float fVar59;
		uint uVar60;
		byte[] auVar61 = new byte[16];
		float fVar62;
		float fVar63;
		float fVar64;
		float fVar65;
		Vector3 UVar66;
		Vector3 a;
		Vector3 value;
		Vector3 value_00;
		Quaternion value_01;
		Vector3 b;
		bool local_199;
		float local_198;
		byte local_191;
		ulong local_190;
		byte local_181;
		MapScriptBaseObject local_180;
		byte local_173;
		byte local_172;
		byte local_171;
		byte[] local_170 = new byte[16];
		MapObject local_160;
		bool local_157;
		bool local_156;
		byte local_155;
		uint local_154;
		uint local_150;
		uint local_14c;
		uint local_148;
		uint local_144;
		uint local_140;
		uint local_13c;
		uint local_138;
		uint local_134;
		uint local_130;
		uint local_12c;
		uint local_128;
		uint local_124;
		uint local_120;
		uint local_11c;
		uint local_118;
		uint local_114;
		uint local_110;
		uint local_10c;
		ulong local_108;
		float fStack_100;
		float fStack_fc;
		float local_f8;
		float fStack_f4;
		float fStack_f0;
		float fStack_ec;
		ulong local_e0;
		uint local_d8;
		uint local_d4;
		uint local_d0;
		uint local_cc;
		uint local_c8;
		int local_c4;
		List<MapObject> local_c0;
		List<MapObject> local_b8;
		List<MapObject> local_b0;
		ulong local_a8;
		ulong local_98;
		ulong local_88;
		ulong local_78;
		ulong uStack_70;
		ulong local_68;
		ulong uStack_60;
		byte[] local_58 = new byte[8];
		MapObject local_48;
		CancellationTokenSource local_40;
		float local_38;

		if (Il2CppMethodInitialized_07548031 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07548031 = true;
		}
		pSVar32 = "Name";
		local_199 = false;
		local_c4 = 0;
		local_198 = 0.0;
		local_58 = (byte[])0x0;
		local_48 = null;
		pSVar6 = this._name;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar6 == null) goto label_05d825d5;
		pSVar31 = pSVar6._value;
		local_170._0_8_ = null;
		pSVar7 = (Dictionary<object, object>)this._syncedSerialized;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar7 == null) goto label_05d825d5;
		bVar26 = pSVar7.TryGetValue((object)pSVar32, (object*)local_170);
		bVar27 = true;
		if (bVar26) {
			bVar27 = ((String)local_170._0_8_ != pSVar31);
		}
		pSVar8 = this._active;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar8 == null) goto label_05d825d5;
		local_199 = pSVar8._value;
		ppSVar47 = &this._syncedSerialized;
		pSVar31 = local_199.ToString();
		pSVar32 = "Active";
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		bVar28 = true;
		if (bVar26) {
			bVar28 = ((String)local_170._0_8_ != pSVar31);
		}
		pSVar8 = this._static;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar8 == null) goto label_05d825d5;
		local_199 = pSVar8._value;
		pSVar31 = local_199.ToString();
		pSVar32 = "Static";
		local_108._0_4_ = (float)CONCAT31(local_108._1_3_, bVar27);
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		bVar27 = true;
		if (bVar26) {
			bVar27 = ((String)local_170._0_8_ != pSVar31);
		}
		pSVar8 = this._networked;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar8 == null) goto label_05d825d5;
		local_199 = pSVar8._value;
		pSVar31 = local_199.ToString();
		pSVar32 = "Networked";
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		bVar29 = true;
		if (bVar26) {
			bVar29 = ((String)local_170._0_8_ != pSVar31);
		}
		local_180 = (MapScriptBaseObject)CONCAT71(local_180._1_7_, bVar29);
		pSVar8 = this._visible;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar8 == null) goto label_05d825d5;
		local_199 = pSVar8._value;
		pSVar31 = local_199.ToString();
		pSVar32 = "Visible";
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		bVar29 = true;
		if (bVar26) {
			bVar29 = ((String)local_170._0_8_ != pSVar31);
		}
		local_190 = CONCAT71(local_190._1_7_, bVar29);
		pSVar9 = this._parent;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar9 == null) goto label_05d825d5;
		local_c4 = pSVar9._value;
		pSVar31 = local_c4.ToString();
		pSVar32 = "Parent";
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		bVar29 = true;
		if (bVar26) {
			bVar29 = ((String)local_170._0_8_ != pSVar31);
		}
		local_e0 = CONCAT71(local_e0._1_7_, bVar29);
		local_f8 = (float)CONCAT31(local_f8._1_3_, bVar27);
		pSVar38 = this._positionX;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar38 == null) goto label_05d825d5;
		local_198 = pSVar38._value;
		pSVar31 = local_198.ToString("R");
		pSVar32 = "PositionX";
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		bVar27 = true;
		if (bVar26) {
			bVar27 = ((String)local_170._0_8_ != pSVar31);
		}
		local_c0 = (List<MapObject>)CONCAT71(local_c0._1_7_, bVar27);
		pSVar38 = this._positionY;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar38 == null) goto label_05d825d5;
		local_198 = pSVar38._value;
		pSVar31 = local_198.ToString("R");
		pSVar32 = "PositionY";
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		local_181 = true;
		if (bVar26) {
			local_181 = ((String)local_170._0_8_ != pSVar31);
		}
		pSVar38 = this._positionZ;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar38 == null) goto label_05d825d5;
		local_198 = pSVar38._value;
		pSVar31 = local_198.ToString("R");
		pSVar32 = "PositionZ";
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		local_171 = true;
		if (bVar26) {
			local_171 = ((String)local_170._0_8_ != pSVar31);
		}
		pSVar38 = this._rotationX;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar38 == null) goto label_05d825d5;
		local_198 = pSVar38._value;
		pSVar31 = local_198.ToString("R");
		pSVar32 = "RotationX";
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		local_172 = true;
		if (bVar26) {
			local_172 = ((String)local_170._0_8_ != pSVar31);
		}
		pSVar38 = this._rotationY;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar38 == null) goto label_05d825d5;
		local_198 = pSVar38._value;
		pSVar31 = local_198.ToString("R");
		pSVar32 = "RotationY";
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		local_191 = true;
		if (bVar26) {
			local_191 = ((String)local_170._0_8_ != pSVar31);
		}
		pSVar38 = this._rotationZ;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar38 == null) goto label_05d825d5;
		local_198 = pSVar38._value;
		pSVar31 = local_198.ToString("R");
		pSVar32 = "RotationZ";
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		bVar27 = true;
		if (bVar26) {
			bVar27 = ((String)local_170._0_8_ != pSVar31);
		}
		local_144 = CONCAT31(local_144._1_3_, bVar27);
		pSVar38 = this._scaleX;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar38 == null) goto label_05d825d5;
		local_198 = pSVar38._value;
		pSVar31 = local_198.ToString("R");
		pSVar32 = "ScaleX";
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		bVar27 = true;
		if (bVar26) {
			bVar27 = ((String)local_170._0_8_ != pSVar31);
		}
		local_148 = CONCAT31(local_148._1_3_, bVar27);
		pSVar38 = this._scaleY;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar38 == null) goto label_05d825d5;
		local_198 = pSVar38._value;
		pSVar31 = local_198.ToString("R");
		pSVar32 = "ScaleY";
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		bVar27 = true;
		if (bVar26) {
			bVar27 = ((String)local_170._0_8_ != pSVar31);
		}
		local_14c = CONCAT31(local_14c._1_3_, bVar27);
		pSVar38 = this._scaleZ;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar38 == null) goto label_05d825d5;
		local_198 = pSVar38._value;
		pSVar31 = local_198.ToString("R");
		pSVar32 = "ScaleZ";
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		bVar27 = true;
		if (bVar26) {
			bVar27 = ((String)local_170._0_8_ != pSVar31);
		}
		pSVar32 = "CollideMode";
		local_150 = CONCAT31(local_150._1_3_, bVar27);
		pSVar6 = this._collideMode;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar6 == null) goto label_05d825d5;
		pSVar31 = pSVar6._value;
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		bVar27 = true;
		if (bVar26) {
			bVar27 = ((String)local_170._0_8_ != pSVar31);
		}
		pSVar32 = "CollideWith";
		local_138 = CONCAT31(local_138._1_3_, bVar27);
		pSVar6 = this._collideWith;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar6 == null) goto label_05d825d5;
		pSVar31 = pSVar6._value;
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		bVar27 = true;
		if (bVar26) {
			bVar27 = ((String)local_170._0_8_ != pSVar31);
		}
		pSVar32 = "PhysicsMaterial";
		local_120 = CONCAT31(local_120._1_3_, bVar27);
		pSVar6 = this._physicsMaterial;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar6 == null) goto label_05d825d5;
		pSVar31 = pSVar6._value;
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		bVar27 = true;
		if (bVar26) {
			bVar27 = ((String)local_170._0_8_ != pSVar31);
		}
		pSVar32 = "Shader";
		local_124 = CONCAT31(local_124._1_3_, bVar27);
		pSVar6 = this._shader;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar6 == null) goto label_05d825d5;
		pSVar31 = pSVar6._value;
		local_170._0_8_ = null;
		pUVar48 = (MapEditorInspectPanel)*ppSVar47;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pUVar48 == null) goto label_05d825d5;
		bVar26 = pUVar48.TryGetValue((object)pSVar32, (object*)local_170);
		bVar27 = true;
		pMVar43 = extraout_RDX;
		if (bVar26) {
			pUVar48 = (MapEditorInspectPanel)local_170._0_8_;
			bVar27 = ((String)local_170._0_8_ != pSVar31);
			pMVar43 = extraout_RDX_00;
		}
		local_128 = CONCAT31(local_128._1_3_, bVar27);
		pSVar31 = pUVar48.SerializeSetting((BaseSetting)this._color);
		pSVar32 = "Color";
		local_170._0_8_ = null;
		pUVar48 = (MapEditorInspectPanel)*ppSVar47;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pUVar48 == null) goto label_05d825d5;
		bVar26 = pUVar48.TryGetValue((object)pSVar32, (object*)local_170);
		local_156 = true;
		pMVar43 = extraout_RDX_01;
		if (bVar26) {
			pUVar48 = (MapEditorInspectPanel)local_170._0_8_;
			local_156 = ((String)local_170._0_8_ != pSVar31);
			pMVar43 = extraout_RDX_02;
		}
		pSVar31 = pUVar48.SerializeSetting((BaseSetting)this._reflectColor);
		pSVar32 = "ReflectColor";
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		local_157 = true;
		if (bVar26) {
			local_157 = ((String)local_170._0_8_ != pSVar31);
		}
		pSVar32 = "Texture";
		pSVar6 = this._texture;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar6 == null) goto label_05d825d5;
		pSVar31 = pSVar6._value;
		local_13c = CONCAT31(local_13c._1_3_, bVar28);
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		bVar27 = true;
		if (bVar26) {
			bVar27 = ((String)local_170._0_8_ != pSVar31);
		}
		pSVar38 = this._tilingX;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar38 == null) goto label_05d825d5;
		local_198 = pSVar38._value;
		pSVar31 = local_198.ToString("R");
		pSVar32 = "TilingX";
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		bVar28 = true;
		if (bVar26) {
			bVar28 = ((String)local_170._0_8_ != pSVar31);
		}
		local_68 = CONCAT71(local_68._1_7_, bVar28);
		pSVar38 = this._tilingY;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar38 == null) goto label_05d825d5;
		local_198 = pSVar38._value;
		pSVar31 = local_198.ToString("R");
		pSVar32 = "TilingY";
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		bVar28 = true;
		if (bVar26) {
			bVar28 = ((String)local_170._0_8_ != pSVar31);
		}
		local_78 = CONCAT71(local_78._1_7_, bVar28);
		pSVar38 = this._offsetX;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar38 == null) goto label_05d825d5;
		local_198 = pSVar38._value;
		pSVar31 = local_198.ToString("R");
		pSVar32 = "OffsetX";
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		local_173 = true;
		if (bVar26) {
			local_173 = ((String)local_170._0_8_ != pSVar31);
		}
		pSVar38 = this._offsetY;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if (pSVar38 == null) goto label_05d825d5;
		local_198 = pSVar38._value;
		pSVar31 = local_198.ToString("R");
		pSVar32 = "OffsetY";
		material = &"OffsetY";
		local_170._0_8_ = null;
		local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
		if ((Dictionary<object, object>)*ppSVar47 ==null) goto label_05d825d5;
		bVar26 = (*ppSVar47).TryGetValue((object)pSVar32, (object*)local_170);
		bVar28 = true;
		if (bVar26) {
			bVar28 = ((String)local_170._0_8_ != pSVar31);
		}
		if ((char)local_108 == false) {
			local_c8 = 0;
			if (bVar27 == false) goto label_05d8013d;
	label_05d8050d: ;
			pSVar6 = this._texture;
			cVar45 = (char)local_13c;
			if (pSVar6 == null) goto label_05d825d5;
			bVar26 = (pSVar6._value == "--");
			local_118 = (uint)CONCAT71(extraout_var_11, bVar26) ^ 1;
			if ((char)local_138 != false) goto label_05d80158;
	label_05d8054f: ;
			local_cc = 0;
			if ((char)local_120 == false) goto label_05d80198;
	label_05d80568: ;
			pSVar6 = this._collideWith;
			if (pSVar6 == null) goto label_05d825d5;
			bVar26 = (pSVar6._value == "--");
			local_d0 = (uint)CONCAT71(extraout_var_12, bVar26) ^ 1;
			if ((char)local_124 != false) goto label_05d801b1;
	label_05d805a8: ;
			local_d4 = 0;
			if ((char)local_128 == false) goto label_05d801f1;
	label_05d805c1: ;
			pSVar6 = this._shader;
			if (pSVar6 == null) goto label_05d825d5;
			bVar26 = (pSVar6._value == "--");
			local_d8 = (uint)CONCAT71(extraout_var_13, bVar26) ^ 1;
			if (cVar45 != false) goto label_05d80204;
	label_05d805fb: ;
			local_120 = 0;
			if (local_f8._0_1_ == false) goto label_05d80248;
	label_05d80614: ;
			pSVar10 = (HashSet<object>)this._mixedFields;
			if (pSVar10 == null) goto label_05d825d5;
			bVar26 = pSVar10.Contains((Il2CppObject *)"Static");
			local_124 = (uint)CONCAT71(extraout_var_14, bVar26) ^ 1;
			if ((char)local_180 != false) goto label_05d8025e;
	label_05d80655: ;
			local_128 = 0;
			if ((char)local_190 == false) goto label_05d8029f;
	label_05d8066b: ;
			pSVar10 = (HashSet<object>)this._mixedFields;
			if (pSVar10 == null) goto label_05d825d5;
			bVar26 = pSVar10.Contains((Il2CppObject *)"Visible");
			local_13c = (uint)CONCAT71(extraout_var_15, bVar26) ^ 1;
			if ((char)local_e0 != false) goto label_05d802b5;
	label_05d806ac: ;
			local_138 = 0;
			if ((char)local_c0 == false) goto label_05d802f6;
	label_05d806c2: ;
			pSVar10 = (HashSet<object>)this._mixedFields;
			if (pSVar10 == null) goto label_05d825d5;
			bVar26 = pSVar10.Contains((Il2CppObject *)"PositionX");
			local_10c = (uint)CONCAT71(extraout_var_16, bVar26) ^ 1;
			if (local_181 != 0) goto label_05d8030c;
	label_05d80703: ;
			local_110 = 0;
			if (local_171 == 0) goto label_05d8034d;
	label_05d80719: ;
			pSVar10 = (HashSet<object>)this._mixedFields;
			if (pSVar10 == null) goto label_05d825d5;
			bVar26 = pSVar10.Contains((Il2CppObject *)"PositionZ");
			local_114 = (uint)CONCAT71(extraout_var_17, bVar26) ^ 1;
			if (local_172 != 0) goto label_05d80363;
	label_05d8075a: ;
			local_12c = 0;
			if (local_191 == 0) goto label_05d803a1;
	label_05d8076d: ;
			pSVar10 = (HashSet<object>)this._mixedFields;
			if (pSVar10 == null) goto label_05d825d5;
			bVar26 = pSVar10.Contains((Il2CppObject *)"RotationY");
			local_130 = (uint)CONCAT71(extraout_var_18, bVar26) ^ 1;
			if ((byte)local_144 != false) goto label_05d803b4;
	label_05d807ab: ;
			local_144 = 0;
			if ((byte)local_148 == false) goto label_05d803f2;
	label_05d807be: ;
			pSVar10 = (HashSet<object>)this._mixedFields;
			if (pSVar10 == null) goto label_05d825d5;
			bVar26 = pSVar10.Contains((Il2CppObject *)"ScaleX");
			local_148 = (uint)CONCAT71(extraout_var_19, bVar26) ^ 1;
			if ((byte)local_14c != false) goto label_05d80405;
	label_05d807fc: ;
			local_14c = 0;
			if ((byte)local_150 == false) goto label_05d80443;
	label_05d8080f: ;
			pSVar10 = (HashSet<object>)this._mixedFields;
			if (pSVar10 == null) goto label_05d825d5;
			bVar26 = pSVar10.Contains((Il2CppObject *)"ScaleZ");
			local_150 = (uint)CONCAT71(extraout_var_20, bVar26) ^ 1;
			if ((char)local_68 != false) goto label_05d80459;
	label_05d80850: ;
			local_140 = 0;
			if ((char)local_78 == false) goto label_05d8049a;
	label_05d80866: ;
			pSVar10 = (HashSet<object>)this._mixedFields;
			if (pSVar10 == null) goto label_05d825d5;
			bVar26 = pSVar10.Contains((Il2CppObject *)"TilingY");
			local_154 = (uint)CONCAT71(extraout_var_21, bVar26) ^ 1;
			if (local_173 != 0) goto label_05d804ad;
	label_05d808a4: ;
			local_11c = 0;
			if (bVar28 == false) goto label_05d804ec;
	label_05d808b8: ;
			pSVar10 = (HashSet<object>)this._mixedFields;
			if (pSVar10 == null) goto label_05d825d5;
			bVar26 = pSVar10.Contains((Il2CppObject *)"OffsetY");
			local_134 = (uint)CONCAT71(extraout_var_22, bVar26) ^ 1;
		}
		else {
			pSVar6 = this._name;
			local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(local_108._4_4_, (float)local_108);
			if (pSVar6 == null) goto label_05d825d5;
			bVar26 = (pSVar6._value == "--");
			local_c8 = (uint)CONCAT71(extraout_var, bVar26) ^ 1;
			if (bVar27 != false) goto label_05d8050d;
	label_05d8013d: ;
			local_118 = 0;
			cVar45 = (char)local_13c;
			if ((char)local_138 == false) goto label_05d8054f;
	label_05d80158: ;
			pSVar6 = this._collideMode;
			if (pSVar6 == null) goto label_05d825d5;
			bVar26 = (pSVar6._value == "--");
			local_cc = (uint)CONCAT71(extraout_var_00, bVar26) ^ 1;
			if ((char)local_120 != false) goto label_05d80568;
	label_05d80198: ;
			local_d0 = 0;
			if ((char)local_124 == false) goto label_05d805a8;
	label_05d801b1: ;
			pSVar6 = this._physicsMaterial;
			if (pSVar6 == null) goto label_05d825d5;
			bVar26 = (pSVar6._value == "--");
			local_d4 = (uint)CONCAT71(extraout_var_01, bVar26) ^ 1;
			if ((char)local_128 != false) goto label_05d805c1;
	label_05d801f1: ;
			local_d8 = 0;
			if (cVar45 == false) goto label_05d805fb;
	label_05d80204: ;
			pSVar10 = (HashSet<object>)this._mixedFields;
			if (pSVar10 == null) goto label_05d825d5;
			bVar26 = pSVar10.Contains((Il2CppObject *)"Active");
			local_120 = (uint)CONCAT71(extraout_var_02, bVar26) ^ 1;
			if (local_f8._0_1_ != false) goto label_05d80614;
	label_05d80248: ;
			local_124 = 0;
			if ((char)local_180 == false) goto label_05d80655;
	label_05d8025e: ;
			pSVar10 = (HashSet<object>)this._mixedFields;
			if (pSVar10 == null) goto label_05d825d5;
			bVar26 = pSVar10.Contains((Il2CppObject *)"Networked");
			local_128 = (uint)CONCAT71(extraout_var_03, bVar26) ^ 1;
			if ((char)local_190 != false) goto label_05d8066b;
	label_05d8029f: ;
			local_13c = 0;
			if ((char)local_e0 == false) goto label_05d806ac;
	label_05d802b5: ;
			pSVar10 = (HashSet<object>)this._mixedFields;
			if (pSVar10 == null) goto label_05d825d5;
			bVar26 = pSVar10.Contains((Il2CppObject *)"Parent");
			local_138 = (uint)CONCAT71(extraout_var_04, bVar26) ^ 1;
			if ((char)local_c0 != false) goto label_05d806c2;
	label_05d802f6: ;
			local_10c = 0;
			if (local_181 == 0) goto label_05d80703;
	label_05d8030c: ;
			pSVar10 = (HashSet<object>)this._mixedFields;
			if (pSVar10 == null) goto label_05d825d5;
			bVar26 = pSVar10.Contains((Il2CppObject *)"PositionY");
			local_110 = (uint)CONCAT71(extraout_var_05, bVar26) ^ 1;
			if (local_171 != 0) goto label_05d80719;
	label_05d8034d: ;
			local_114 = 0;
			if (local_172 == 0) goto label_05d8075a;
	label_05d80363: ;
			pSVar10 = (HashSet<object>)this._mixedFields;
			if (pSVar10 == null) goto label_05d825d5;
			bVar26 = pSVar10.Contains((Il2CppObject *)"RotationX");
			local_12c = (uint)CONCAT71(extraout_var_06, bVar26) ^ 1;
			if (local_191 != 0) goto label_05d8076d;
	label_05d803a1: ;
			local_130 = 0;
			if ((byte)local_144 == false) goto label_05d807ab;
	label_05d803b4: ;
			pSVar10 = (HashSet<object>)this._mixedFields;
			if (pSVar10 == null) goto label_05d825d5;
			bVar26 = pSVar10.Contains((Il2CppObject *)"RotationZ");
			local_144 = (uint)CONCAT71(extraout_var_07, bVar26) ^ 1;
			if ((byte)local_148 != false) goto label_05d807be;
	label_05d803f2: ;
			local_148 = 0;
			if ((byte)local_14c == false) goto label_05d807fc;
	label_05d80405: ;
			pSVar10 = (HashSet<object>)this._mixedFields;
			if (pSVar10 == null) goto label_05d825d5;
			bVar26 = pSVar10.Contains((Il2CppObject *)"ScaleY");
			local_14c = (uint)CONCAT71(extraout_var_08, bVar26) ^ 1;
			if ((byte)local_150 != false) goto label_05d8080f;
	label_05d80443: ;
			local_150 = 0;
			if ((char)local_68 == false) goto label_05d80850;
	label_05d80459: ;
			pSVar10 = (HashSet<object>)this._mixedFields;
			if (pSVar10 == null) goto label_05d825d5;
			bVar26 = pSVar10.Contains((Il2CppObject *)"TilingX");
			local_140 = (uint)CONCAT71(extraout_var_09, bVar26) ^ 1;
			if ((char)local_78 != false) goto label_05d80866;
	label_05d8049a: ;
			local_154 = 0;
			if (local_173 == 0) goto label_05d808a4;
	label_05d804ad: ;
			pSVar10 = (HashSet<object>)this._mixedFields;
			if (pSVar10 == null) goto label_05d825d5;
			bVar26 = pSVar10.Contains((Il2CppObject *)"OffsetX");
			local_11c = (uint)CONCAT71(extraout_var_10, bVar26) ^ 1;
			if (bVar28 != false) goto label_05d808b8;
	label_05d804ec: ;
			local_134 = 0;
		}
		local_181 = (byte)local_10c | (byte)local_110 | (byte)local_114;
		bVar46 = local_181 | (byte)local_12c | (byte)local_130 | (byte)local_144 | (byte)local_148 | (byte)local_14c | (byte)local_150;
		if ((bVar46 & 1) != 0) {
			pGVar50 = this._gameManager;
			if (pGVar50 == null) goto label_05d825d5;
			pGVar50.SetupTemporaryPhysicalParenting();
		}
		local_155 = bVar46;
		local_b0 = new List<MapObject>();
		local_b8 = new List<MapObject>();
		scaleObjects = new List<MapObject>();
		pSVar11 = this._mapObjects;
		if (pSVar11 == null) goto label_05d825d5;
		local_170.GetEnumerator((List<object>)pSVar11);
		local_48 = local_160;
		local_58 = (byte[])local_170._0_8_;
		local_170._0_8_ = null;
		local_170._8_8_ = local_58;
		local_171 = (byte)local_12c | (byte)local_130 | (byte)local_144;
		local_172 = (byte)local_148 | (byte)local_14c | (byte)local_150;
		local_191 = (byte)local_140 | (byte)local_154;
		local_173 = (byte)local_11c | (byte)local_134;
		local_e0 = 0;
		local_190 = 0;
		local_c0 = scaleObjects;
		while(true) {
			pUVar49 = (MapEditorInspectPanel)local_58;
			bVar26 = pUVar49.MoveNext();
			obj = local_48;
			if (!bVar26) break;
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			local_180 = local_48.ScriptObject;
			if (local_180 != null) {
				bVar46 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
				if (((local_180.klass._2).typeHierarchyDepth < bVar46) ||((local_180.klass._2).typeHierarchy[(ulong)bVar46 - 1] !=typeof(MapScriptSceneObject))) {
					throw new InvalidCastException();
				}
			}
			if ((char)local_c8 != false) {
				pSVar6 = this._name;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				pSVar32 = pUVar49.SanitizeName(pSVar6._value);
				pMVar25 = local_180;
				if (local_180 == null) {
					throw new NullReferenceException();
				}
				bVar26 = (local_180.Name != pSVar32);
				ppSVar1 = &pMVar25.Name;
				local_e0 = local_e0 & 0xff;
				if (bVar26) {
					local_e0 = 1;
				}
				*ppSVar1 = pSVar32;
			}
			if ((char)local_120 != false) {
				pSVar8 = this._active;
				if (pSVar8 == null) {
					throw new NullReferenceException();
				}
				if (local_180 == null) {
					throw new NullReferenceException();
				}
				local_180.Active = pSVar8._value;
			}
			if ((char)local_124 != false) {
				pSVar8 = this._static;
				if (pSVar8 == null) {
					throw new NullReferenceException();
				}
				if (local_180 == null) {
					throw new NullReferenceException();
				}
				local_180.Static = pSVar8._value;
			}
			if ((char)local_128 != false) {
				pSVar8 = this._networked;
				if (pSVar8 == null) {
					throw new NullReferenceException();
				}
				if (local_180 == null) {
					throw new NullReferenceException();
				}
				local_180.Networked = pSVar8._value;
			}
			if ((char)local_13c != false) {
				pSVar8 = this._visible;
				if (pSVar8 == null) {
					throw new NullReferenceException();
				}
				if (local_180 == null) {
					throw new NullReferenceException();
				}
				local_180.Visible = pSVar8._value;
			}
			if ((char)local_138 == false) {
				if (local_181 != 0) {
					fVar55 = in_XMM1_Db;
					fVar57 = in_XMM1_Dd;
					if (local_180 == null) {
						throw new NullReferenceException();
					}
					goto label_05d80da7;
				}
			}
			else {
				pSVar9 = this._parent;
				if (pSVar9 == null) {
					throw new NullReferenceException();
				}
				iVar30 = pSVar9._value;
				if (iVar30 < 1) {
	label_05d80d40: ;
					pMVar33 = null;
					uVar4 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
				}
				else {
					pSVar12 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar12 == null) {
						throw new NullReferenceException();
					}
					bVar26 = pSVar12.ContainsKey(iVar30);
					if (!bVar26) goto label_05d80d40;
					if (local_180 == null) {
						throw new NullReferenceException();
					}
					if (iVar30 == local_180.Id) goto label_05d80d40;
					pSVar12 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar12 == null) {
						throw new NullReferenceException();
					}
					pMVar33 = pSVar12.get_Item(iVar30);
					if (pMVar33 == null) {
						throw new NullReferenceException();
					}
					if (pMVar33.Parent == local_180.Id) goto label_05d80d40;
					pSVar12 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar12 == null) {
						throw new NullReferenceException();
					}
					pMVar33 = pSVar12.get_Item(iVar30);
					uVar4 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
				}
				if (uVar4 == 0) {
				}
				MapLoader.SetParentLogical(obj, pMVar33);
				if (local_180 == null) {
					throw new NullReferenceException();
				}
				local_180.Parent = obj.Parent;
				fVar55 = in_XMM1_Db;
				fVar57 = in_XMM1_Dd;
				if (local_181 != 0) {
	label_05d80da7: ;
					UVar66 = local_180.GetPosition();
					in_XMM1_Db = UVar66.x;
					in_XMM1_Dd = UVar66.y;
					fVar59 = in_XMM1_Db;
					if ((char)local_10c != false) {
						pSVar38 = this._positionX;
						if (pSVar38 == null) {
							throw new NullReferenceException();
						}
						fVar59 = pSVar38._value;
					}
					fVar22 = in_XMM1_Dd;
					if ((byte)local_110 != false) {
						pSVar38 = this._positionY;
						if (pSVar38 == null) {
							throw new NullReferenceException();
						}
						fVar22 = pSVar38._value;
					}
					fVar63 = UVar66.z;
					fVar64 = fVar55;
					fVar65 = in_XMM1_Dc;
					if ((byte)local_114 != false) {
						pSVar38 = this._positionZ;
						if (pSVar38 == null) {
							throw new NullReferenceException();
						}
						fVar57 = 0.0;
						fVar63 = pSVar38._value;
						fVar64 = 0.0;
						fVar65 = 0.0;
					}
					local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(fVar64, fVar63);
					local_88 = CONCAT44(fVar22, fVar59);
					fStack_f0 = 0.0;
					fStack_ec = 0.0;
					fVar62 = fVar63 - UVar66.z;
					in_XMM1_Dc = fVar55;
					fStack_100 = fVar65;
					fStack_fc = fVar57;
					local_f8 = fVar59;
					fStack_f4 = fVar22;
					if (9.9999994e-11 <=(fVar22 - in_XMM1_Dd) * (fVar22 - in_XMM1_Dd) + (fVar59 - in_XMM1_Db) * (fVar59 - in_XMM1_Db) + fVar62 * fVar62) {
						pUVar13 = obj.GameObject;
						local_108._0_4_ = fVar63;
						local_108._4_4_ = fVar64;
						if (pUVar13 == null) {
							throw new NullReferenceException();
						}
						pUVar34 = pUVar13.transform;
						if (pUVar34 == null) {
							throw new NullReferenceException();
						}
						UVar66.y = fStack_f4;
						UVar66.x = local_f8;
						UVar66.z = (float)local_108;
						in_XMM1_Db = local_108._4_4_;
						in_XMM1_Dc = fStack_100;
						in_XMM1_Dd = fStack_fc;
						pUVar34.position = UVar66;
						pMVar43 = MethodInfo_System_Collections_Generic_List_MapObject_Add;
						if (local_b0 == null) {
	label_05d82611: ;
							throw new NullReferenceException();
						}
						piVar2 = &local_b0._version;
						*piVar2 = *piVar2 + 1;
						pMVar14 = local_b0._items;
						if (pMVar14 == null) goto label_05d82611;
						uVar5 = local_b0._size;
						if (uVar5 < (uint)pMVar14.Length) {
							local_b0._size = uVar5 + 1;
							pMVar14[(int)uVar5] = obj;
						}
						else {
							local_b0.AddWithResize((object)obj);
						}
					}
				}
			}
			fVar55 = in_XMM1_Db;
			fVar57 = in_XMM1_Dc;
			fVar59 = in_XMM1_Dd;
			if (local_171 != 0) {
				if (local_180 == null) {
					throw new NullReferenceException();
				}
				UVar66 = local_180.GetRotation();
				fVar55 = UVar66.x;
				fVar59 = UVar66.y;
				fVar22 = fVar55;
				if ((byte)local_12c != false) {
					pSVar38 = this._rotationX;
					if (pSVar38 == null) {
						throw new NullReferenceException();
					}
					fVar22 = pSVar38._value;
				}
				fVar63 = fVar59;
				if ((byte)local_130 != false) {
					pSVar38 = this._rotationY;
					if (pSVar38 == null) {
						throw new NullReferenceException();
					}
					fVar63 = pSVar38._value;
				}
				fVar64 = UVar66.z;
				fVar65 = in_XMM1_Db;
				if ((byte)local_144 != false) {
					pSVar38 = this._rotationZ;
					if (pSVar38 == null) {
						throw new NullReferenceException();
					}
					in_XMM1_Dc = 0.0;
					in_XMM1_Dd = 0.0;
					fVar64 = pSVar38._value;
					fVar65 = 0.0;
				}
				local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(fVar65, fVar64);
				local_98 = CONCAT44(fVar63, fVar22);
				fStack_f0 = 0.0;
				fStack_ec = 0.0;
				fVar62 = fVar64 - UVar66.z;
				fVar57 = in_XMM1_Db;
				fStack_100 = in_XMM1_Dc;
				fStack_fc = in_XMM1_Dd;
				local_f8 = fVar22;
				fStack_f4 = fVar63;
				if (9.9999994e-11 <=(fVar63 - fVar59) * (fVar63 - fVar59) + (fVar22 - fVar55) * (fVar22 - fVar55) + fVar62 * fVar62) {
					pUVar13 = obj.GameObject;
					local_108._0_4_ = fVar64;
					local_108._4_4_ = fVar65;
					if (pUVar13 == null) {
						throw new NullReferenceException();
					}
					pUVar34 = pUVar13.transform;
					fVar57 = fStack_f0 * 0.0;
					fVar59 = fStack_ec * 0.0;
					local_38 = (float)local_108 * 0.017453292;
					local_40 = (CancellationTokenSource)CONCAT44(fStack_f4 * 0.017453292, local_f8 * 0.017453292);
					value_01 = Quaternion.Internal_FromEulerRad(ref local_40);
					fVar55 = value_01.w;
					if (pUVar34 == null) {
						throw new NullReferenceException();
					}
					pUVar34.rotation = value_01;
					pMVar43 = MethodInfo_System_Collections_Generic_List_MapObject_Add;
					if (local_b8 == null) {
	label_05d82634: ;
						throw new NullReferenceException();
					}
					piVar2 = &local_b8._version;
					*piVar2 = *piVar2 + 1;
					pMVar14 = local_b8._items;
					if (pMVar14 == null) goto label_05d82634;
					uVar5 = local_b8._size;
					if (uVar5 < (uint)pMVar14.Length) {
						local_b8._size = uVar5 + 1;
						pMVar14[(int)uVar5] = obj;
					}
					else {
						local_b8.AddWithResize((object)obj);
					}
				}
			}
			in_XMM1_Db = fVar55;
			in_XMM1_Dc = fVar57;
			in_XMM1_Dd = fVar59;
			if (local_172 != 0) {
				if (local_180 == null) {
					throw new NullReferenceException();
				}
				UVar66 = local_180.GetScale();
				in_XMM1_Db = UVar66.x;
				in_XMM1_Dd = UVar66.y;
				fVar22 = in_XMM1_Db;
				if ((byte)local_148 != false) {
					pSVar38 = this._scaleX;
					if (pSVar38 == null) {
						throw new NullReferenceException();
					}
					fVar22 = pSVar38._value;
				}
				fVar63 = in_XMM1_Dd;
				if ((byte)local_14c != false) {
					pSVar38 = this._scaleY;
					if (pSVar38 == null) {
						throw new NullReferenceException();
					}
					fVar63 = pSVar38._value;
				}
				fVar64 = UVar66.z;
				fVar65 = fVar55;
				if ((byte)local_150 != false) {
					pSVar38 = this._scaleZ;
					if (pSVar38 == null) {
						throw new NullReferenceException();
					}
					fVar57 = 0.0;
					fVar59 = 0.0;
					fVar64 = pSVar38._value;
					fVar65 = 0.0;
				}
				local_108 = (MapEditorInspectPanel.c__DisplayClass104_0)CONCAT44(fVar65, fVar64);
				local_a8 = CONCAT44(fVar63, fVar22);
				fStack_f0 = 0.0;
				fStack_ec = 0.0;
				fVar62 = fVar64 - UVar66.z;
				in_XMM1_Dc = fVar55;
				fStack_100 = fVar57;
				fStack_fc = fVar59;
				local_f8 = fVar22;
				fStack_f4 = fVar63;
				if (9.9999994e-11 <=(fVar63 - in_XMM1_Dd) * (fVar63 - in_XMM1_Dd) + (fVar22 - in_XMM1_Db) * (fVar22 - in_XMM1_Db) + fVar62 * fVar62) {
					local_68._0_4_ = obj.BaseScale.x;
					local_68._4_4_ = obj.BaseScale.y;
					local_78 = CONCAT44(local_78._4_4_, obj.BaseScale.z);
					local_108._0_4_ = fVar64;
					local_108._4_4_ = fVar65;
					uVar56 = 0;
					uVar58 = 0;
					uVar60 = 0;
					b.y = fStack_f4;
					b.x = local_f8;
					a.z = (float)local_78;
					a.x = (float)local_68;
					a.y = (float)local_68._4_4_;
					b.z = (float)local_108;
					UVar66 = Util.MultiplyVectors(a, b);
					local_108._0_4_ = UVar66.z;
					local_f8 = UVar66.x;
					fStack_f4 = UVar66.y;
					fStack_f0 = (float)extraout_XMM0_Qb;
					fStack_ec = (float)((ulong)extraout_XMM0_Qb >> 0x20);
					pUVar13 = obj.GameObject;
					if (pUVar13 == null) {
						throw new NullReferenceException();
					}
					pUVar34 = pUVar13.transform;
					if (pUVar34 == null) {
						throw new NullReferenceException();
					}
					pUVar34 = pUVar34.parent;
					bVar26 = ((Object)pUVar34 != null);
					if (bVar26) {
						if (pUVar34 == null) {
							throw new NullReferenceException();
						}
						UVar66 = pUVar34.lossyScale;
						local_78 = UVar66._0_8_;
						local_68 = CONCAT44(uVar56, UVar66.z);
						uStack_60 = CONCAT44(uVar60, uVar58);
						pUVar13 = obj.GameObject;
						if (pUVar13 == null) {
							throw new NullReferenceException();
						}
						uStack_70 = extraout_XMM0_Qb_00;
						pUVar34 = pUVar13.transform;
						if (pUVar34 == null) {
							throw new NullReferenceException();
						}
						auVar61._0_8_ = CONCAT44(-(uint)(local_78._4_4_ == 0.0), -(uint)((float)local_78 == 0.0)) & 0x3f8000003f800000;
						auVar61._8_8_ = 0;
						auVar54._4_4_ = ~-(uint)(local_78._4_4_ == 0.0) & (uint)local_78._4_4_;
						auVar54._0_4_ = ~-(uint)((float)local_78 == 0.0) & (uint)(float)local_78;
						auVar54._8_4_ = ~-(uint)((float)uStack_70 == 0.0) & (uint)(float)uStack_70;
						auVar54._12_4_ = ~-(uint)(uStack_70._4_4_ == 0.0) & (uint)uStack_70._4_4_;
						auVar21._4_4_ = fStack_f4;
						auVar21._0_4_ = local_f8;
						auVar21._8_4_ = fStack_f0;
						auVar21._12_4_ = fStack_ec;
						auVar54 = divps(auVar21, auVar61 | auVar54);
						in_XMM1_Db = 0.0;
						in_XMM1_Dc = 0.0;
						in_XMM1_Dd = 0.0;
						value.z =(float)local_108 /(float)(~-(uint)((float)local_68 == 0.0) & (uint)(float)local_68 | -(uint)((float)local_68 == 0.0) & 0x3f800000);
						value._0_8_ = auVar54._0_8_;
						pUVar34.localScale = value;
					}
					else {
						pUVar13 = obj.GameObject;
						if (pUVar13 == null) {
							throw new NullReferenceException();
						}
						pUVar34 = pUVar13.transform;
						if (pUVar34 == null) {
							throw new NullReferenceException();
						}
						value_00.y = fStack_f4;
						value_00.x = local_f8;
						in_XMM1_Db = 0.0;
						in_XMM1_Dc = 0.0;
						in_XMM1_Dd = 0.0;
						value_00.z = (float)local_108;
						pUVar34.localScale = value_00;
					}
					pMVar43 = MethodInfo_System_Collections_Generic_List_MapObject_Add;
					if (scaleObjects == null) {
	label_05d8267a: ;
						throw new NullReferenceException();
					}
					piVar2 = &scaleObjects._version;
					*piVar2 = *piVar2 + 1;
					pMVar14 = scaleObjects._items;
					if (pMVar14 == null) goto label_05d8267a;
					uVar5 = scaleObjects._size;
					if (uVar5 < (uint)pMVar14.Length) {
						scaleObjects._size = uVar5 + 1;
						pMVar14[(int)uVar5] = obj;
					}
					else {
						scaleObjects.AddWithResize((object)obj);
					}
				}
			}
			if ((char)local_cc != false) {
				pSVar6 = this._collideMode;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				if (local_180 == null) {
					throw new NullReferenceException();
				}
				(*(ulong)((sbyte)local_180 + 0x60)) = (MapScriptBaseObject)pSVar6._value;
			}
			if ((char)local_d0 != false) {
				pSVar6 = this._collideWith;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				if (local_180 == null) {
					throw new NullReferenceException();
				}
				(*(ulong)((sbyte)local_180 + 0x68)) = pSVar6._value;
			}
			if ((char)local_d4 != false) {
				pSVar6 = this._physicsMaterial;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				if (local_180 == null) {
					throw new NullReferenceException();
				}
				(*(ulong)((sbyte)local_180 + 0x70)) = pSVar6._value;
			}
			if ((char)local_d8 == false) {
	label_05d816f0: ;
				uVar51 = local_190 & 0xffffffff;
				if (local_156 != false) goto label_05d816a4;
	label_05d816ff: ;
				if (local_180 == null) {
					throw new NullReferenceException();
				}
			}
			else {
				pSVar6 = this._shader;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				if (local_180 == null) {
					throw new NullReferenceException();
				}
				pSVar32 = (*(ulong)((sbyte)local_180 + 0x78));
				if (pSVar32 == null) {
					throw new NullReferenceException();
				}
				bVar26 = (pSVar6._value != (String)pSVar32.fields);
				if (!bVar26) goto label_05d816f0;
				pSVar6 = this._shader;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				pSVar32 = pSVar6._value;
				bVar26 = (pSVar32 == MapObjectShader.Default);
				ppSVar1 = &(*(ulong)((sbyte)local_180 + 0x78));
				if (bVar26) {
	label_05d8163d: ;
					__this_01 = new MapScriptBaseMaterial();
					*ppSVar1 = (String)__this_01;
				}
				else {
					pSVar6 = this._shader;
					if (pSVar6 == null) {
						throw new NullReferenceException();
					}
					pSVar32 = pSVar6._value;
					bVar26 = (pSVar32 == MapObjectShader.DefaultNoTint);
					if (bVar26) goto label_05d8163d;
					pSVar6 = this._shader;
					if (pSVar6 == null) {
						throw new NullReferenceException();
					}
					pSVar32 = pSVar6._value;
					bVar26 = (pSVar32 == MapObjectShader.DefaultTiled);
					if (bVar26) {
						__this_02 = new MapScriptDefaultTiledMaterial();
						*ppSVar1 = (String)__this_02;
					}
					else {
						pSVar6 = this._shader;
						if (pSVar6 == null) {
							throw new NullReferenceException();
						}
						pSVar32 = pSVar6._value;
						bVar26 = (pSVar32 == MapObjectShader.Basic);
						if (!bVar26) {
							pSVar6 = this._shader;
							if (pSVar6 == null) {
								throw new NullReferenceException();
							}
							pSVar32 = pSVar6._value;
							bVar26 = (pSVar32 == MapObjectShader.Transparent);
							if (!bVar26) {
								pSVar6 = this._shader;
								if (pSVar6 == null) {
									throw new NullReferenceException();
								}
								pSVar32 = pSVar6._value;
								bVar26 = (pSVar32 == MapObjectShader.Reflective);
								if (bVar26) {
									__this_08 = il2cpp_codegen_object_new(typeof(MapScriptReflectiveMaterial)) ;
									__this_08 = new MapScriptReflectiveMaterial();
									*ppSVar1 = (String)__this_08;
								}
								else {
									__this_09 = new MapScriptLegacyMaterial();
									*ppSVar1 = (String)__this_09;
								}
								goto label_05d81668;
							}
						}
						__this_03 = new MapScriptBasicMaterial();
						*ppSVar1 = (String)__this_03;
					}
				}
	label_05d81668: ;
				pSVar6 = this._shader;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				pSVar32 = *ppSVar1;
				if (pSVar32 == null) {
					throw new NullReferenceException();
				}
				pSVar32.fields = (String)pSVar6._value;
				uVar51 = CONCAT71((int7)((ulong)material >> 8), 1);
				if (local_156 == false) goto label_05d816ff;
	label_05d816a4: ;
				if (local_180 == null) {
					throw new NullReferenceException();
				}
				pSVar15 = this._color;
				if (pSVar15 == null) {
					throw new NullReferenceException();
				}
				pSVar32 = (*(ulong)((sbyte)local_180 + 0x78));
				if (pSVar32 == null) {
					throw new NullReferenceException();
				}
				(*(ulong)((sbyte)pSVar32 + 0x18)) = (String)pSVar15._value;
			}
			handle = TypeRef_Map_MapScriptBasicMaterial;
			pSVar32 = (*(ulong)((sbyte)local_180 + 0x78));
			if (pSVar32 == null) {
	label_05d81770: ;
				pSVar35 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
				pSVar32 = (*(ulong)((sbyte)local_180 + 0x78));
				if (pSVar32 == null) {
					throw new NullReferenceException();
				}
				pSVar36 = pSVar32.GetType();
				if (pSVar35 == null) {
					throw new NullReferenceException();
				}
				bVar26 = pSVar35.IsAssignableFrom(pSVar36);
				if (bVar26) {
					pSVar32 = (*(ulong)((sbyte)local_180 + 0x78));
					if (pSVar32 == null) {
						if ((char)local_118 != false) {
							throw new NullReferenceException();
						}
					}
					else {
						bVar46 = (typeof(MapScriptBasicMaterial)._2).typeHierarchyDepth;
						if (((pSVar32.klass._2).typeHierarchyDepth < bVar46) ||((pSVar32.klass._2).typeHierarchy[(ulong)bVar46 - 1] !=typeof(MapScriptBasicMaterial))) {
							throw new InvalidCastException();
						}
						if ((char)local_118 != false) {
							pSVar6 = this._texture;
							if (pSVar6 == null) {
								throw new NullReferenceException();
							}
							targetAddress = &(*(ulong)((sbyte)pSVar32 + 0x20));
							bVar26 = (*targetAddress != pSVar6._value);
							if (bVar26) {
								pSVar6 = this._texture;
								if (pSVar6 == null) {
									throw new NullReferenceException();
								}
								*targetAddress = pSVar6._value;
								uVar51 = CONCAT71((int7)(uVar51 >> 8), 1);
							}
						}
					}
					if (local_191 != 0) {
						if ((char)local_140 == false) {
							if (pSVar32 == null) {
								throw new NullReferenceException();
							}
							fVar55 = (float)(*(uint)((sbyte)pSVar32 + 0x28));
							if ((byte)local_154 == false) goto label_05d8193f;
	label_05d81925: ;
							pSVar38 = this._tilingY;
							if (pSVar38 == null) {
								throw new NullReferenceException();
							}
							pfVar37 = &pSVar38._value;
						}
						else {
							pSVar38 = this._tilingX;
							if (pSVar38 == null) {
								throw new NullReferenceException();
							}
							fVar55 = pSVar38._value;
							if ((byte)local_154 != false) goto label_05d81925;
							if (pSVar32 == null) {
								throw new NullReferenceException();
							}
	label_05d8193f: ;
							pfVar37 = (float)&(*(ushort)((sbyte)pSVar32 + 0x2c));
						}
						if (pSVar32 == null) {
							throw new NullReferenceException();
						}
						fVar57 = *pfVar37;
						(*(uint)((sbyte)pSVar32 + 0x28)) = (int32_t)fVar55;
						*(float)&(*(ushort)((sbyte)pSVar32 + 0x2c)) = fVar57;
					}
					if (local_173 != 0) {
						if ((char)local_11c == false) {
							if (pSVar32 == null) {
								throw new NullReferenceException();
							}
							fVar55 = *(float)&(*(ulong)((sbyte)pSVar32 + 0x30));
							if ((byte)local_134 == false) goto label_05d819c0;
	label_05d819a6: ;
							pSVar38 = this._offsetY;
							if (pSVar38 == null) {
								throw new NullReferenceException();
							}
							pfVar37 = &pSVar38._value;
						}
						else {
							pSVar38 = this._offsetX;
							if (pSVar38 == null) {
								throw new NullReferenceException();
							}
							fVar55 = pSVar38._value;
							if ((byte)local_134 != false) goto label_05d819a6;
							if (pSVar32 == null) {
								throw new NullReferenceException();
							}
	label_05d819c0: ;
							pfVar37 = (float)((long)&(*(ulong)((sbyte)pSVar32 + 0x30)) + 4);
						}
						if (pSVar32 == null) {
							throw new NullReferenceException();
						}
						fVar57 = *pfVar37;
						*(float)&(*(ulong)((sbyte)pSVar32 + 0x30)) = fVar55;
						*(float)((long)&(*(ulong)((sbyte)pSVar32 + 0x30)) + 4) = fVar57;
					}
					pMVar23 = typeof(MapScriptReflectiveMaterial);
					if ((local_157 != false) && (pSVar32 != null)) {
						bVar46 = (typeof(MapScriptReflectiveMaterial)._2).typeHierarchyDepth;
						if ((bVar46 <= (pSVar32.klass._2).typeHierarchyDepth) &&(ppIVar17 = (pSVar32.klass._2).typeHierarchy, ppIVar17[(ulong)bVar46 - 1] == typeof(MapScriptReflectiveMaterial))) {
							pSVar15 = this._reflectColor;
							if (pSVar15 == null) {
								throw new NullReferenceException();
							}
							(*(ulong)((sbyte)pSVar32 + 0x38)) = pSVar15._value;
							if (ppIVar17[(ulong)bVar46 - 1] != (Il2CppClass)pMVar23) {
								throw new InvalidCastException();
							}
						}
					}
				}
			}
			else {
				pSVar16 = pSVar32.klass;
				bVar46 = (pSVar16._2).typeHierarchyDepth;
				bVar3 = (typeof(MapScriptLegacyMaterial)._2).typeHierarchyDepth;
				if ((bVar46 < bVar3) ||((pSVar16._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(MapScriptLegacyMaterial) )) {
					bVar3 = (typeof(MapScriptDefaultTiledMaterial)._2).typeHierarchyDepth;
					if ((bVar46 < bVar3) ||((pSVar16._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(MapScriptDefaultTiledMaterial))) goto label_05d81770;
					if (local_191 != 0) {
						if ((char)local_140 == false) {
							fVar55 = *(float)&(*(ulong)((sbyte)pSVar32 + 0x20));
						}
						else {
							pSVar38 = this._tilingX;
							if (pSVar38 == null) {
								throw new NullReferenceException();
							}
							fVar55 = pSVar38._value;
						}
						if ((byte)local_154 == false) goto label_05d81cae;
						pSVar38 = this._tilingY;
						if (pSVar38 == null) {
							throw new NullReferenceException();
						}
						goto label_05d81ca8;
					}
				}
				else if (local_191 != 0) {
					if ((char)local_140 == false) {
						fVar55 = *(float)&(*(ulong)((sbyte)pSVar32 + 0x20));
					}
					else {
						pSVar38 = this._tilingX;
						if (pSVar38 == null) {
							throw new NullReferenceException();
						}
						fVar55 = pSVar38._value;
					}
					if ((byte)local_154 == false) {
	label_05d81cae: ;
						pfVar37 = (float)((long)&(*(ulong)((sbyte)pSVar32 + 0x20)) + 4);
					}
					else {
						pSVar38 = this._tilingY;
						if (pSVar38 == null) {
							throw new NullReferenceException();
						}
	label_05d81ca8: ;
						pfVar37 = &pSVar38._value;
					}
					fVar57 = *pfVar37;
					*(float)&(*(ulong)((sbyte)pSVar32 + 0x20)) = fVar55;
					*(float)((long)&(*(ulong)((sbyte)pSVar32 + 0x20)) + 4) = fVar57;
				}
			}
			local_f8 = SUB84(obj, 0);
			fStack_f4 = (float)((ulong)obj >> 0x20);
			pSVar44 = this._componentNames;
			if (pSVar44 == null) {
	label_05d825a3: ;
				throw new NullReferenceException();
			}
			iVar53 = 0;
			local_190 = uVar51 & 0xffffffff;
			while (true) {
				scaleObjects = local_c0;
				if (!(iVar53 < pSVar44._size)) break;
				__this_04 = new MapEditorInspectPanel.c__DisplayClass104_0();
				if (__this_04 == null) {
					throw new NullReferenceException();
				}
				__this_04.__4__this = this;
				pSVar44 = this._componentNames;
				if (pSVar44 == null) {
					throw new NullReferenceException();
				}
				pSVar32 = pSVar44.get_Item(iVar53);
				local_108 = &__this_04.fields;
				__this_04.componentName = pSVar32;
				__this_00 = this._components;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				settings = (Dictionary<string, BaseSetting>)__this_00.get_Item(iVar53) ;
				source = this.SerializeComponentFields(settings);
				pSVar7 = (Dictionary<object, object>)this._syncedComponentFields;
				if (pSVar7 == null) {
					throw new NullReferenceException();
				}
				ppSVar47 = &__this_04.syncedFields;
				bVar26 = pSVar7.TryGetValue((object)local_108.componentName, (object*)ppSVar47);
				if (!bVar26) {
					__this_05 = new Dictionary<string, string>();
					*ppSVar47 = __this_05;
				}
				pSVar39 = (Func<T, TResult>)il2cpp_codegen_object_new(typeof(Func<KeyValuePair<string, string>, bool>)) ;
				pSVar39 = new Func<KeyValuePair<string, string>, string>((object)__this_04, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass104_0_OnChange_b__0);
				source_00 = Enumerable.Where<KeyValuePair<string, string>>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)pSVar39);
				if ((typeof(MapEditorInspectPanel.c)._2).cctor_finished_or_no_cctor == 0) {
					pUVar40 = typeof(MapEditorInspectPanel.c).static_fields;
					pSVar39 = (Func<T, TResult>)pUVar40.__9__104_1;
					if (pSVar39 != null) goto label_05d81e9f;
	label_05d81eef: ;
					if ((typeof(MapEditorInspectPanel.c)._2).cctor_finished_or_no_cctor == 0) {
						pUVar40 = typeof(MapEditorInspectPanel.c).static_fields;
					}
					pIVar18 = (object)pUVar40.__9;
					pSVar39 = new Func<KeyValuePair<string, string>, string>(pIVar18, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_OnChange_b__104_1);
					pUVar40 = typeof(MapEditorInspectPanel.c).static_fields;
					pUVar40.__9__104_1 = (Func<KeyValuePair<string, string>, string>)pSVar39;
					if ((typeof(MapEditorInspectPanel.c)._2).cctor_finished_or_no_cctor != 0) goto label_05d81eac;
	label_05d81f6d: ;
					pUVar40 = typeof(MapEditorInspectPanel.c).static_fields;
					__this_06 = (Func<T, TResult>)pUVar40.__9__104_2;
				}
				else {
					pUVar40 = typeof(MapEditorInspectPanel.c).static_fields;
					pSVar39 = (Func<T, TResult>)pUVar40.__9__104_1;
					if (pSVar39 == null) goto label_05d81eef;
	label_05d81e9f: ;
					if ((typeof(MapEditorInspectPanel.c)._2).cctor_finished_or_no_cctor == 0) goto label_05d81f6d;
	label_05d81eac: ;
					pUVar40 = typeof(MapEditorInspectPanel.c).static_fields;
					__this_06 = (Func<T, TResult>)pUVar40.__9__104_2;
				}
				if (__this_06 == null) {
					if (((typeof(MapEditorInspectPanel.c))._2).cctor_finished_or_no_cctor == 0) {
						pUVar40 = typeof(MapEditorInspectPanel.c).static_fields;
					}
					pIVar18 = (object)pUVar40.__9;
					__this_06 = new Func<KeyValuePair<string, string>, string>(pIVar18, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_OnChange_b__104_2);
					pUVar40 = typeof(MapEditorInspectPanel.c).static_fields;
					pUVar40.__9__104_2 = (Func<KeyValuePair<string, string>, string>)__this_06;
				}
				__this_07 = Enumerable.ToDictionary<KeyValuePair<string, string>, string, string>(source_00, (System_Func_TSource__TKey__o)pSVar39, (System_Func_TSource__TElement__o)__this_06);
				if (__this_07 == null) {
					throw new NullReferenceException();
				}
				iVar30 = __this_07.Count;
				if (iVar30 == 0) {
	label_05d81cf0: ;
					uVar51 = local_190 & 0xffffffff;
				}
				else {
					pUVar49 = *(MapEditorInspectPanel*)&(*(uint)((sbyte)local_180 + 0x80));
					match = new Predicate<MapScriptComponent>((object)__this_04, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass104_0_OnChange_b__3);
					if (pUVar49 == null) {
						throw new NullReferenceException();
					}
					iVar30 = pUVar49.FindIndex(match);
					if (iVar30 < 0) {
						pMVar41 = null;
					}
					else {
						pUVar49 = *(MapEditorInspectPanel*)&(*(uint)((sbyte)local_180 + 0x80));
						if (pUVar49 == null) {
							throw new NullReferenceException();
						}
						pMVar41 = pUVar49.get_Item(iVar30);
					}
					pMVar41 = pUVar49.MergeComponent(local_108.componentName, pMVar41, (Dictionary<string, string>)__this_07);
					pMVar43 = MethodInfo_System_Collections_Generic_List_MapScriptComponent_Add;
					pSVar42 = *(List<object>*)&(*(uint)((sbyte)local_180 + 0x80));
					if (-1 < iVar30) {
						if (pSVar42 == null) {
							throw new NullReferenceException();
						}
						pSVar42.set_Item(iVar30, (object)pMVar41);
						goto label_05d81cf0;
					}
					if (pSVar42 == null) {
	label_05d825c6: ;
						throw new NullReferenceException();
					}
					piVar2 = &pSVar42._version;
					*piVar2 = *piVar2 + 1;
					pSVar19 = pSVar42._items;
					if (pSVar19 == null) goto label_05d825c6;
					uVar5 = pSVar42._size;
					uVar52 = (undefined7)((ulong)__this_07 >> 8);
					if (uVar5 < (uint)pSVar19.Length) {
						pSVar42._size = uVar5 + 1;
						pSVar19[(int)uVar5] = (object)pMVar41;
						uVar51 = CONCAT71(uVar52, 1);
					}
					else {
						uVar51 = CONCAT71(uVar52, 1);
						pSVar42.AddWithResize((object)pMVar41);
					}
				}
				iVar53 = iVar53 + 1;
				pSVar44 = this._componentNames;
				local_190 = uVar51 & 0xffffffff;
				if (pSVar44 == null) goto label_05d825a3;
			}
			pUVar13 = *(GameObject*)(CONCAT44(fStack_f4, local_f8) + 0x18);
			pSVar32 = local_180.Asset;
			material = (String*)(*(ulong)((sbyte)local_180 + 0x78));
			bVar26 = local_180.Visible;
			MapLoader.SetMaterial(pUVar13, pSVar32, (MapScriptBaseMaterial)material, bVar26, true);
		}
		local_58.Dispose();
		if ((local_155 & 1) != 0) {
			pGVar50 = this._gameManager;
			if (pGVar50 == null) goto label_05d825d5;
			pGVar50.TeardownTemporaryPhysicalParenting();
			pGVar50 = this._gameManager;
			if (pGVar50 == null) goto label_05d825d5;
			if (pGVar50.HierarchyTreeViewEnabled != false) {
				this.PropagateTransformToDescendants(local_b0, local_b8, scaleObjects);
			}
		}
		pMVar43 = MethodInfo_System_Collections_Generic_List_BaseCommand_ctor;
		pSVar42 = new List<BaseCommand>();
		pSVar11 = local_b0;
		if (local_b0 == null) goto label_05d825d5;
		if (0 < local_b0._size) {
			pMVar43 = new CompositeCommand(pSVar11);
			if (pSVar42 == null) goto label_05d825d5;
			piVar2 = &pSVar42._version;
			*piVar2 = *piVar2 + 1;
			pSVar19 = pSVar42._items;
			if (pSVar19 == null) goto label_05d825d5;
			uVar5 = pSVar42._size;
			if (uVar5 < (uint)pSVar19.Length) {
				pSVar42._size = uVar5 + 1;
				pSVar19[(int)uVar5] = (object)pMVar43;
			}
			else {
				pSVar42.AddWithResize((object)pMVar43) ;
			}
		}
		pSVar11 = local_b8;
		if (local_b8 == null) goto label_05d825d5;
		if (0 < local_b8._size) {
			pMVar43 = new CompositeCommand(pSVar11);
			if (pSVar42 == null) goto label_05d825d5;
			piVar2 = &pSVar42._version;
			*piVar2 = *piVar2 + 1;
			pSVar19 = pSVar42._items;
			if (pSVar19 == null) goto label_05d825d5;
			uVar5 = pSVar42._size;
			if (uVar5 < (uint)pSVar19.Length) {
				pSVar42._size = uVar5 + 1;
				pSVar19[(int)uVar5] = (object)pMVar43;
			}
			else {
				pSVar42.AddWithResize((object)pMVar43) ;
			}
		}
		if (scaleObjects == null) goto label_05d825d5;
		if (scaleObjects._size < 1) {
			if (pSVar42 == null) goto label_05d825d5;
			iVar53 = pSVar42._size;
	joined_r0x05d8248a: ;
			bVar26 = false;
			if (iVar53 == 1) goto label_05d8248c;
	label_05d824de: ;
			if (!bVar26 && 0 < iVar53) {
				pGVar50 = this._gameManager;
				pMVar43 = new CompositeCommand((List<BaseCommand>)pSVar42);
				if (pGVar50 == null) goto label_05d825d5;
				goto label_05d82519;
			}
		}
		else {
			pMVar43 = (MethodInfo)il2cpp_codegen_object_new(typeof(TransformScaleCommand)) ;
			pMVar43 = new CompositeCommand(scaleObjects);
			if (pSVar42 == null) goto label_05d825d5;
			piVar2 = &pSVar42._version;
			*piVar2 = *piVar2 + 1;
			pSVar19 = pSVar42._items;
			if (pSVar19 == null) goto label_05d825d5;
			uVar5 = pSVar42._size;
			if ((uint)pSVar19.Length <= uVar5) {
				pSVar42.AddWithResize((object)pMVar43) ;
				iVar53 = pSVar42._size;
				goto joined_r0x05d8248a;
			}
			pSVar42._size = uVar5 + 1;
			pSVar19[(int)uVar5] = (object)pMVar43;
			iVar53 = pSVar42._size;
			bVar26 = iVar53 == 1;
			if (!bVar26) goto label_05d824de;
	label_05d8248c: ;
			pGVar50 = this._gameManager;
			pMVar43 = (MethodInfo)pSVar42.get_Item(0);
			if (pGVar50 == null) goto label_05d825d5;
	label_05d82519: ;
			pGVar50.NewCommand((BaseCommand)pMVar43, false);
		}
		this.CaptureSyncedValues();
		pGVar50 = this._gameManager;
		if (pGVar50 == null) {
	label_05d825d5: ;
			throw new NullReferenceException();
		}
		pGVar50.SyncGizmos();
		if ((local_190 & 1) != 0) {
			pUVar20 = this._menu;
			if (pUVar20 == null) goto label_05d825d5;
			pUVar20.RebuildInspectorPreservingScroll(this._mapObjects) ;
		}
		if ((local_e0 & 1) != 0 || (char)local_138 != false) {
			pUVar20 = this._menu;
			if (pUVar20 == null) goto label_05d825d5;
			pUVar20.SyncHierarchyPanel();
		}
		return;
	}

	[Token(Token = "0x6005316")]
	[Address(RVA = "0x5C8FC50", Offset = "0x5C8EC50", VA = "0x5C8FC50")]
	public string SerializeSetting(BaseSetting setting)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$SerializeSetting): 29 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseSetting pSVar3;
		Il2CppClass pIVar4;
		String* ppSVar5;
		object pIVar6;
		Func<int, int> __this_00;
		System_Linq_IOrderedEnumerable_TSource__o source;
		UI_MapEditorInspectPanel___c_StaticFields pUVar7;
		Func<int, string> __this_01;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		String[] pSVar8;
		String pSVar9;
		ulong local_38;
		float[] local_30 = new float[2];

		if (setting != null) {
			pSVar3 = setting.klass;
			bVar1 = (pSVar3._2).typeHierarchyDepth;
			bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(FloatSetting))) {
				local_38 = CONCAT44(local_38._4_4_, *(uint)((long)&(*(ulong)((sbyte)setting + 0x18)) + 4));
				pSVar9 = local_38.ToString();
				return pSVar9;
			}
			bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(IntSetting))) {
				local_38 = CONCAT44(local_38._4_4_, *(uint)((long)&(*(ulong)((sbyte)setting + 0x18)) + 4));
				pSVar9 = local_38.ToString();
				return pSVar9;
			}
			bVar2 = (typeof(BoolSetting)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BoolSetting))) {
				if (*(sbyte)((long)&(*(ulong)((sbyte)setting + 0x18)) + 1) == false) {
					ppSVar5 = &"false";
				}
				else {
					ppSVar5 = &"true";
				}
				goto label_05d8fef5;
			}
			bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(StringSetting))) {
				pSVar9 = (*(ulong)((sbyte)setting + 0x20));
				pSVar9 = MapScriptComponent.SanitizeParameter(pSVar9);
				return pSVar9;
			}
			bVar2 = (typeof(ColorSetting)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(ColorSetting))) {
				pIVar6 = il2cpp_codegen_is_inst_class((object)setting, typeof(ColorSetting));
				if (pIVar6 != null) {
					pIVar6 = il2cpp_codegen_is_inst_class((object)setting, typeof(ColorSetting));
					pIVar4 = pIVar6[2].klass;
					pSVar8 = (String[])new string[4];
					if ((pIVar4 != null) &&(pSVar9 = ((pIVar4._1).name).ToString(), pSVar8 != null)) {
						il2cpp_codegen_array_set_ref((Array)pSVar8, 0, (object)pSVar9);
						pSVar9 = (((long)&(pIVar4._1).name + 4)).ToString();
						il2cpp_codegen_array_set_ref((Array)pSVar8, 1, (object)pSVar9);
						pSVar9 = ((pIVar4._1).namespaze).ToString();
						il2cpp_codegen_array_set_ref((Array)pSVar8, 2, (object)pSVar9);
						pSVar9 = (((long)&(pIVar4._1).namespaze + 4)).ToString();
						il2cpp_codegen_array_set_ref((Array)pSVar8, 3, (object)pSVar9);
						pSVar9 = "/";
	label_05d90279: ;
						pSVar9 = String.Join(pSVar9, pSVar8);
						return pSVar9;
					}
				}
	label_05d90299: ;
				throw new NullReferenceException();
			}
			bVar2 = (typeof(Vector3Setting)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(Vector3Setting))) {
				pIVar6 = il2cpp_codegen_is_inst_class((object)setting, typeof(Vector3Setting));
				if (pIVar6 != null) {
					pIVar6 = il2cpp_codegen_is_inst_class((object)setting, typeof(Vector3Setting));
					local_38 = *(ulong)((long)&pIVar6[2].klass + 4);
					local_30[0] = *(float)((long)&pIVar6[2].monitor + 4);
					pSVar8 = (String[])new string[3];
					pSVar9 = local_38.ToString();
					if (pSVar8 != null) {
						il2cpp_codegen_array_set_ref((Array)pSVar8, 0, (object)pSVar9);
						pSVar9 = (((long)&local_38 + 4)).ToString();
						il2cpp_codegen_array_set_ref((Array)pSVar8, 1, (object)pSVar9);
						pSVar9 = local_30.ToString();
						il2cpp_codegen_array_set_ref((Array)pSVar8, 2, (object)pSVar9);
						pSVar9 = String.Join("/", pSVar8);
						return pSVar9;
					}
				}
				goto label_05d90299;
			}
			bVar2 = (typeof(HashSetSetting<int>)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(HashSetSetting<int>))) {
				pIVar6 = il2cpp_codegen_is_inst_class((object)setting, typeof(HashSetSetting<int>));
				if (pIVar6 != null) {
					pIVar6 = il2cpp_codegen_is_inst_class((object)setting, typeof(HashSetSetting<int>));
					pIVar4 = pIVar6[2].klass;
					pSVar9 = "/";
					pUVar7 = typeof(MapEditorInspectPanel.c).static_fields;
					__this_00 = pUVar7.__9__105_0;
					if (__this_00 == null) {
						if ((typeof(MapEditorInspectPanel.c)._2).cctor_finished_or_no_cctor == 0) {
							pUVar7 = typeof(MapEditorInspectPanel.c).static_fields;
						}
						pIVar6 = (object)pUVar7.__9;
						__this_00 = new Func<int, int>(pIVar6, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_SerializeSetting_b__105_0);
						pUVar7 = typeof(MapEditorInspectPanel.c).static_fields;
						pUVar7.__9__105_0 = __this_00;
					}
					source = Enumerable.OrderBy<int, int>((System_Collections_Generic_IEnumerable_TSource__o)pIVar4, (System_Func_TSource__TKey__o)__this_00);
					pUVar7 = typeof(MapEditorInspectPanel.c).static_fields;
					__this_01 = pUVar7.__9__105_1;
					if (__this_01 == null) {
						if ((typeof(MapEditorInspectPanel.c)._2).cctor_finished_or_no_cctor == 0) {
							pUVar7 = typeof(MapEditorInspectPanel.c).static_fields;
						}
						pIVar6 = (object)pUVar7.__9;
						__this_01 = new Func<int, string>(pIVar6, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_SerializeSetting_b__105_1);
						pUVar7 = typeof(MapEditorInspectPanel.c).static_fields;
						pUVar7.__9__105_1 = __this_01;
					}
					source_00 = Enumerable.Select<int, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_01);
					pSVar8 = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
					goto label_05d90279;
				}
				goto label_05d90299;
			}
		}
		ppSVar5 = *(String**)(g_data_07556758 + 0xb8);
	label_05d8fef5: ;
		return *ppSVar5;
	}

	[Token(Token = "0x6005317")]
	[Address(RVA = "0x5C90860", Offset = "0x5C8F860", VA = "0x5C90860")]
	private void PropagateTransformToDescendants(List<MapObject> posObjects, List<MapObject> rotObjects, List<MapObject> scaleObjects)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$PropagateTransformToDescendants): 85 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		object pIVar3;
		Dictionary<int, object> pSVar4;
		GameObject __this_00;
		MapScriptBaseObject pMVar5;
		MapObject[] pMVar6;
		int key;
		bool bVar7;
		HashSet<int> pSVar8;
		HashSet<int> __this_01;
		Func<MapObject, int> pSVar9;
		System_Collections_Generic_IEnumerable_TResult__o pSVar10;
		MapEditorInspectPanel pUVar11;
		UI_MapEditorInspectPanel___c_StaticFields pUVar12;
		HashSet<int> __this_02;
		MapObject item;
		Transform __this_03;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		float in_XMM1_Db;
		float in_XMM1_Dc;
		float in_XMM1_Dd;
		float fVar14;
		float fVar15;
		float fVar16;
		Vector3 UVar17;
		Vector3 euler;
		Vector3 b;
		byte[] local_f0 = new byte[16];
		object local_e0;
		byte[] local_d8 = new byte[8];
		object local_c8;
		List<MapObject> local_c0;
		byte[] local_b8 = new byte[8];
		object local_a8;
		List<MapObject> local_98;
		MapEditorInspectPanel local_90;
		float local_88;
		byte[] local_78 = new byte[16];
		List<MapObject> local_68;
		float local_5c;
		Quaternion local_58;
		ulong local_48;

		local_c0 = posObjects;
		local_98 = rotObjects;
		local_d8 = (byte[])0x0;
		local_c8 = null;
		local_b8 = (byte[])0x0;
		local_a8 = null;
		local_58 = (Quaternion)ZEXT816(0);
		pSVar8 = new HashSet<int>();
		if (local_c0 != null) {
			local_f0.GetEnumerator((List<object>)local_c0);
			local_c8 = local_e0;
			local_d8 = (byte[])local_f0._0_8_;
			local_f0._0_8_ = null;
			local_f0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_d8;
			local_90 = this;
			local_68 = scaleObjects;
			if (pSVar8 == null) {
				bVar7 = local_d8.MoveNext();
				if (bVar7) {
					if (local_c8 != null) {
						if (local_c8[2].klass != null) {
							throw new NullReferenceException();
						}
	label_05d91560: ;
						throw new NullReferenceException();
					}
	label_05d91536: ;
					throw new NullReferenceException();
				}
			}
			else {
				while (bVar7 = local_d8.MoveNext()) {
					if (local_c8 == null) goto label_05d91536;
					if (local_c8[2].klass == null) goto label_05d91560;
					pSVar8.Add(*(int)&((local_c8[2].klass)._1).byval_arg.data);
				}
			}
			local_d8.Dispose();
			if (local_98 != null) {
				local_f0.GetEnumerator((List<object>)local_98);
				local_c8 = local_e0;
				local_d8 = (byte[])local_f0._0_8_;
				local_f0._0_8_ = null;
				if (pSVar8 == null) {
					local_f0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_d8;
					bVar7 = local_d8.MoveNext();
					if (bVar7) {
						if (local_c8 != null) {
							if (local_c8[2].klass != null) {
								throw new NullReferenceException();
							}
	label_05d9156c: ;
							throw new NullReferenceException();
						}
	label_05d91545: ;
						throw new NullReferenceException();
					}
				}
				else {
					local_f0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_d8;
					while (bVar7 = local_d8.MoveNext()) {
						if (local_c8 == null) goto label_05d91545;
						if (local_c8[2].klass == null) goto label_05d9156c;
						pSVar8.Add(*(int)&((local_c8[2].klass)._1).byval_arg.data);
					}
				}
				local_d8.Dispose();
				if (local_68 != null) {
					local_f0.GetEnumerator((List<object>)local_68);
					local_c8 = local_e0;
					local_d8 = (byte[])local_f0._0_8_;
					local_f0._0_8_ = null;
					if (pSVar8 == null) {
						local_f0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_d8;
						bVar7 = local_d8.MoveNext();
						if (bVar7) {
							if (local_c8 != null) {
								if (local_c8[2].klass != null) {
									throw new NullReferenceException();
								}
	label_05d91578: ;
								throw new NullReferenceException();
							}
	label_05d91554: ;
							throw new NullReferenceException();
						}
					}
					else {
						local_f0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_d8;
						while (bVar7 = local_d8.MoveNext()) {
							if (local_c8 == null) goto label_05d91554;
							if (local_c8[2].klass == null) goto label_05d91578;
							pSVar8.Add(*(int)&((local_c8[2].klass)._1).byval_arg.data);
						}
					}
					local_d8.Dispose();
					__this_01 = new HashSet<int>();
					pUVar11 = local_90;
					if (pSVar8 != null) {
						local_f0.GetEnumerator(pSVar8);
						local_a8 = local_e0;
						local_b8 = (byte[])local_f0._0_8_;
						local_f0._0_8_ = null;
						local_f0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_b8;
						while (bVar7 = local_b8.MoveNext()) {
							pUVar11.CollectDescendantIds((int32_t)local_a8, __this_01);
						}
						local_b8.Dispose();
						if ((typeof(MapEditorInspectPanel.c)._2).cctor_finished_or_no_cctor == 0) {
							pUVar12 = typeof(MapEditorInspectPanel.c).static_fields;
							pSVar9 = pUVar12.__9__106_0;
						}
						else {
							pUVar12 = typeof(MapEditorInspectPanel.c).static_fields;
							pSVar9 = pUVar12.__9__106_0;
						}
						if (pSVar9 == null) {
							if (((typeof(MapEditorInspectPanel.c))._2).cctor_finished_or_no_cctor == 0) {
								pUVar12 = typeof(MapEditorInspectPanel.c).static_fields;
							}
							pIVar3 = (object)pUVar12.__9;
							pSVar9 = new Func<MapObject, int>(pIVar3, (intptr_t) MethodInfo_UI_MapEditorInspectPanel_c_PropagateTransformToDescendants_b__106_0);
							pUVar12 = typeof(MapEditorInspectPanel.c).static_fields;
							pUVar12.__9__106_0 = pSVar9;
						}
						pSVar10 = Enumerable.Select<MapObject, int>((System_Collections_Generic_IEnumerable_TSource__o)local_c0, (System_Func_TSource__TResult__o)pSVar9);
						pUVar11 = new HashSet<int>((IEnumerable<T>)pSVar10);
						pUVar12 = typeof(MapEditorInspectPanel.c).static_fields;
						pSVar9 = pUVar12.__9__106_1;
						local_90 = pUVar11;
						if (pSVar9 == null) {
							if ((typeof(MapEditorInspectPanel.c)._2).cctor_finished_or_no_cctor == 0) {
								pUVar12 = typeof(MapEditorInspectPanel.c).static_fields;
							}
							pIVar3 = (object)pUVar12.__9;
							pSVar9 = new Func<MapObject, int>(pIVar3, (intptr_t) MethodInfo_UI_MapEditorInspectPanel_c_PropagateTransformToDescendants_b__106_1);
							pUVar12 = typeof(MapEditorInspectPanel.c).static_fields;
							pUVar12.__9__106_1 = pSVar9;
						}
						pSVar10 = Enumerable.Select<MapObject, int>((System_Collections_Generic_IEnumerable_TSource__o)local_98, (System_Func_TSource__TResult__o)pSVar9);
						pSVar8 = new HashSet<int>((IEnumerable<T>)pSVar10);
						if ((typeof(MapEditorInspectPanel.c)._2).cctor_finished_or_no_cctor == 0) {
							pUVar12 = typeof(MapEditorInspectPanel.c).static_fields;
							pSVar9 = pUVar12.__9__106_2;
						}
						else {
							pUVar12 = typeof(MapEditorInspectPanel.c).static_fields;
							pSVar9 = pUVar12.__9__106_2;
						}
						if (pSVar9 == null) {
							if (((typeof(MapEditorInspectPanel.c))._2).cctor_finished_or_no_cctor == 0) {
								pUVar12 = typeof(MapEditorInspectPanel.c).static_fields;
							}
							pIVar3 = (object)pUVar12.__9;
							pSVar9 = new Func<MapObject, int>(pIVar3, (intptr_t) MethodInfo_UI_MapEditorInspectPanel_c_PropagateTransformToDescendants_b__106_2);
							pUVar12 = typeof(MapEditorInspectPanel.c).static_fields;
							pUVar12.__9__106_2 = pSVar9;
						}
						pSVar10 = Enumerable.Select<MapObject, int>((System_Collections_Generic_IEnumerable_TSource__o)local_68, (System_Func_TSource__TResult__o)pSVar9);
						__this_02 = new HashSet<int>((IEnumerable<T>)pSVar10);
						if (__this_01 != null) {
							local_f0.GetEnumerator(__this_01);
							local_a8 = local_e0;
							local_b8 = (byte[])local_f0._0_8_;
							local_f0._0_8_ = null;
							local_f0._8_8_ = local_b8;
							while(true) {
								do {
									bVar7 = local_b8.MoveNext();
									if (!bVar7) {
										local_b8.Dispose();
										return;
									}
									key = (int32_t)local_a8;
									pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
									if (pSVar4 == null) {
										throw new NullReferenceException();
									}
									bVar7 = pSVar4.ContainsKey(key) ;
								} while (!bVar7);
								fVar16 = in_XMM1_Db;
								if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
									fVar16 = in_XMM1_Db;
								}
								pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
								if (pSVar4 == null) {
									throw new NullReferenceException();
								}
								item = pSVar4.get_Item(key);
								if (item == null) {
									throw new NullReferenceException();
								}
								__this_00 = item.GameObject;
								if (__this_00 == null) break;
								__this_03 = __this_00.transform;
								if (local_90 == null) {
									throw new NullReferenceException();
								}
								bVar7 = local_90.Contains(key);
								in_XMM1_Db = fVar16;
								fVar14 = in_XMM1_Dc;
								if (!bVar7) {
									if (__this_03 == null) {
										throw new NullReferenceException();
									}
									UVar17 = __this_03.localPosition;
									local_88 = UVar17.z;
									local_78._8_4_ = extraout_XMM0_Dc;
									local_78._0_8_ = UVar17._0_8_;
									local_78._12_4_ = extraout_XMM0_Dd;
									pMVar5 = item.ScriptObject;
									if (pMVar5 == null) {
										throw new NullReferenceException();
									}
									UVar17 = pMVar5.GetPosition();
									in_XMM1_Db = UVar17.x;
									in_XMM1_Dd = UVar17.y;
									fVar15 = local_88 - UVar17.z;
									fVar14 = fVar16;
									if (1e-08 < ((float)local_78._4_4_ - in_XMM1_Dd) * ((float)local_78._4_4_ - in_XMM1_Dd) +((float)local_78._0_4_ - in_XMM1_Db) * ((float)local_78._0_4_ - in_XMM1_Db) + fVar15 * fVar15) {
										local_90.Add(key);
										piVar1 = &local_c0._version;
										*piVar1 = *piVar1 + 1;
										pMVar6 = local_c0._items;
										if (pMVar6 == null) {
											throw new NullReferenceException();
										}
										uVar2 = local_c0._size;
										if (uVar2 < (uint)pMVar6.Length) {
											local_c0._size = uVar2 + 1;
											pMVar6[(int)uVar2] = item;
											fVar14 = fVar16;
										}
										else {
											local_c0.AddWithResize((object)item);
											fVar14 = fVar16;
										}
									}
								}
								if (pSVar8 == null) {
									throw new NullReferenceException();
								}
								bVar7 = pSVar8.Contains(key);
								in_XMM1_Dc = fVar14;
								if (!bVar7) {
									if (__this_03 == null) {
										throw new NullReferenceException();
									}
									local_58 = (Quaternion)__this_03.localRotation;
									in_XMM1_Dc = local_58.w;
									UVar17 = Quaternion.Internal_ToEulerRad(ref local_58);
									euler.z = UVar17.z * 57.29578;
									euler.y = UVar17.y * 57.29578;
									euler.x = UVar17.x * 57.29578;
									UVar17 = Quaternion.Internal_MakePositive(euler);
									local_88 = UVar17.z;
									local_78._8_4_ = extraout_XMM0_Dc_00;
									local_78._0_8_ = UVar17._0_8_;
									local_78._12_4_ = extraout_XMM0_Dd_00;
									pMVar5 = item.ScriptObject;
									if (pMVar5 == null) {
										throw new NullReferenceException();
									}
									UVar17 = pMVar5.GetRotation();
									in_XMM1_Db = UVar17.x;
									in_XMM1_Dd = UVar17.y;
									fVar16 = local_88 - UVar17.z;
									if (1e-06 < ((float)local_78._4_4_ - in_XMM1_Dd) * ((float)local_78._4_4_ - in_XMM1_Dd) +((float)local_78._0_4_ - in_XMM1_Db) * ((float)local_78._0_4_ - in_XMM1_Db) + fVar16 * fVar16) {
										pSVar8.Add(key);
										piVar1 = &local_98._version;
										*piVar1 = *piVar1 + 1;
										pMVar6 = local_98._items;
										if (pMVar6 == null) {
											throw new NullReferenceException();
										}
										uVar2 = local_98._size;
										if (uVar2 < (uint)pMVar6.Length) {
											local_98._size = uVar2 + 1;
											pMVar6[(int)uVar2] = item;
										}
										else {
											local_98.AddWithResize((object)item);
										}
									}
								}
								if (__this_02 == null) {
									throw new NullReferenceException();
								}
								bVar7 = __this_02.Contains(key);
								if (!bVar7) {
									if (__this_03 == null) {
										throw new NullReferenceException();
									}
									UVar17 = __this_03.localScale;
									local_88 = UVar17.z;
									local_78._8_4_ = extraout_XMM0_Dc_01;
									local_78._0_8_ = UVar17._0_8_;
									local_78._12_4_ = extraout_XMM0_Dd_01;
									local_48._0_4_ = item.BaseScale.x;
									local_48._4_4_ = item.BaseScale.y;
									local_5c = item.BaseScale.z;
									in_XMM1_Dc = 0.0;
									fVar16 = 0.0;
									fVar14 = 0.0;
									UVar17.z = local_88;
									UVar17.x = (float)local_78._0_4_;
									UVar17.y = (float)local_78._4_4_;
									b.z = local_5c;
									b.x = (float)(undefined4)local_48;
									b.y = (float)local_48._4_4_;
									UVar17 = Util.DivideVectors(UVar17, b);
									local_88 = UVar17.z;
									local_78._8_4_ = extraout_XMM0_Dc_02;
									local_78._0_8_ = UVar17._0_8_;
									local_78._12_4_ = extraout_XMM0_Dd_02;
									pMVar5 = item.ScriptObject;
									if (pMVar5 == null) {
										throw new NullReferenceException();
									}
									UVar17 = pMVar5.GetScale();
									in_XMM1_Db = UVar17.x;
									in_XMM1_Dd = UVar17.y;
									fVar16 = local_88 - UVar17.z;
									if (1e-08 < ((float)local_78._4_4_ - in_XMM1_Dd) * ((float)local_78._4_4_ - in_XMM1_Dd) +((float)local_78._0_4_ - in_XMM1_Db) * ((float)local_78._0_4_ - in_XMM1_Db) + fVar16 * fVar16) {
										__this_02.Add(key);
										piVar1 = &local_68._version;
										*piVar1 = *piVar1 + 1;
										pMVar6 = local_68._items;
										if (pMVar6 == null) {
											throw new NullReferenceException();
										}
										uVar2 = local_68._size;
										if (uVar2 < (uint)pMVar6.Length) {
											local_68._size = uVar2 + 1;
											pMVar6[(int)uVar2] = item;
										}
										else {
											local_68.AddWithResize((object)item);
										}
									}
								}
							}
							throw new NullReferenceException();
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005318")]
	[Address(RVA = "0x5C91830", Offset = "0x5C90830", VA = "0x5C91830")]
	private void CollectDescendantIds(int id, HashSet<int> result)
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$CollectDescendantIds): 8 lines keep C-only constructs
		Dictionary<int, object> pSVar1;
		int id_00;
		System_Collections_Generic_HashSet_Enumerator_T__o pSVar2;
		bool bVar3;
		HashSet<int> __this_00;
		MethodInfo* method_00;
		System_Collections_Generic_HashSet_Enumerator_T__o local_58;
		byte local_38;

		local_58._set = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		pSVar1 = (Dictionary<int, object>)MapLoader.IdToChildren;
		if (pSVar1 != null) {
			bVar3 = pSVar1.ContainsKey(id);
			if (!bVar3) {
				return;
			}
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToChildren;
			if (pSVar1 != null) {
				__this_00 = (HashSet<int>)pSVar1.get_Item(id);
				local_38 = (byte)&local_58;
				if (__this_00 != null) {
					method_00 = &MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator;
					local_58 = __this_00.GetEnumerator();
					pSVar2 = &local_58;
					if (result == null) {
						bVar3 = local_58.MoveNext();
						if (bVar3) {
							throw new NullReferenceException();
						}
					}
					else {
						while (true) {
							local_38 = (byte)pSVar2;
							bVar3 = local_58.MoveNext();
							if (!(bVar3)) break;
							id_00 = (int32_t)local_58._current;
							bVar3 = result.Add((int32_t)local_58._current);
							pSVar2 = (System_Collections_Generic_HashSet_Enumerator_T__o)local_38;
							if (bVar3) {
								this.CollectDescendantIds(id_00, result);
								pSVar2 = (System_Collections_Generic_HashSet_Enumerator_T__o)local_38;
							}
						}
					}
					local_58.Dispose() ;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005319")]
	[Address(RVA = "0x5C91A80", Offset = "0x5C90A80", VA = "0x5C91A80")]
	public MapEditorInspectPanel()
	{
		// Lifted from source/cpp/UI/MapEditorInspectPanel.c (UI.MapEditorInspectPanel$$.ctor): 2 lines keep C-only constructs
		List<MapObject> __this_00;
		HashSet<string> __this_01;
		Dictionary<string, string> __this_02;
		List<GameObject> __this_03;
		IntSetting __this_04;
		StringSetting pSVar1;
		BoolSetting pSVar2;
		FloatSetting pSVar3;
		ColorSetting pSVar4;
		List<Dictionary<string, BaseSetting>> __this_05;
		List<string> __this_06;
		Dictionary<string, Dictionary<string, string>> __this_07;

		__this_00 = new List<MapObject>();
		this._mapObjects = __this_00;
		__this_01 = new HashSet<string>();
		this._mixedFields = __this_01;
		__this_02 = new Dictionary<string, string>();
		this._syncedSerialized = __this_02;
		__this_03 = new List<GameObject>();
		this._mixedNumericElements = __this_03;
		__this_04 = new IntSetting();
		this._parent = __this_04;
		pSVar1 = new StringSetting();
		this._name = pSVar1;
		pSVar2 = new BoolSetting();
		this._active = pSVar2;
		pSVar2 = new BoolSetting();
		this._static = pSVar2;
		pSVar2 = new BoolSetting();
		this._networked = pSVar2;
		pSVar2 = new BoolSetting();
		this._visible = pSVar2;
		pSVar3 = new FloatSetting();
		this._positionX = pSVar3;
		pSVar3 = new FloatSetting();
		this._positionY = pSVar3;
		pSVar3 = new FloatSetting();
		this._positionZ = pSVar3;
		pSVar3 = new FloatSetting();
		this._rotationX = pSVar3;
		pSVar3 = new FloatSetting();
		this._rotationY = pSVar3;
		pSVar3 = new FloatSetting();
		this._rotationZ = pSVar3;
		pSVar3 = new FloatSetting();
		this._scaleX = pSVar3;
		pSVar3 = new FloatSetting();
		this._scaleY = pSVar3;
		pSVar3 = new FloatSetting();
		this._scaleZ = pSVar3;
		pSVar1 = new StringSetting();
		this._collideMode = pSVar1;
		pSVar1 = new StringSetting();
		this._collideWith = pSVar1;
		pSVar1 = new StringSetting();
		this._physicsMaterial = pSVar1;
		pSVar1 = new StringSetting();
		this._shader = pSVar1;
		pSVar4 = new ColorSetting();
		this._color = pSVar4;
		pSVar4 = new ColorSetting();
		this._reflectColor = pSVar4;
		pSVar1 = new StringSetting("Misc/None", 0x7fffffff);
		this._texture = pSVar1;
		pSVar3 = new FloatSetting(1.0, -3.4028235e+38, 3.4028235e+38);
		this._tilingX = pSVar3;
		pSVar3 = new FloatSetting(1.0, -3.4028235e+38, 3.4028235e+38);
		this._tilingY = pSVar3;
		pSVar3 = new FloatSetting();
		this._offsetX = pSVar3;
		pSVar3 = new FloatSetting();
		this._offsetY = pSVar3;
		__this_05 = il2cpp_codegen_object_new(typeof(List<Dictionary<string, BaseSetting>>));
		__this_05 = new List<object>();
		this._components = __this_05;
		__this_06 = new List<string>();
		this._componentNames = __this_06;
		__this_07 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Dictionary<string, string>>));
		__this_07 = new Dictionary<object, object>();
		this._syncedComponentFields = __this_07;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorInspectPanel.c.

	// UI.MapEditorInspectPanel$$.cctor: clean
	static MapEditorInspectPanel()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		MapEditorInspectPanel.CollapsedSections = __this;
		return;
	}

	// UI.MapEditorInspectPanel$$<AddResizeHandle>b__77_0: clean
	private void AddResizeHandle_b__77_0(float w)
	{
		MapEditorSettings pSVar1;
		FloatSetting __this_00;
		MapEditorMenu __this_01;

		pSVar1 = SettingsManager.MapEditorSettings;
		if ((pSVar1 != null) &&(__this_00 = pSVar1.InspectorPanelWidth, __this_00 != null)) {
			__this_00.Value = w;
			pSVar1 = SettingsManager.MapEditorSettings;
			if (pSVar1 != null) {
				pSVar1.Save();
				__this_01 = this._menu;
				if (__this_01 != null) {
					__this_01.SyncInspector();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_30: clean
	private void Show_b__82_30()
	{
		MapObject pMVar1;
		MapScriptBaseObject pMVar2;
		String value;

		pMVar1 = this._mapObject;
		if ((pMVar1 == null) ||(pMVar2 = pMVar1.ScriptObject, pMVar2 == null)) {
			throw new NullReferenceException();
		}
		value = pMVar2.Serialize();
		if ((typeof(GUIUtility)._2).cctor_finished_or_no_cctor == 0) {
			GUIUtility.systemCopyBuffer = value;
			return;
		}
		GUIUtility.systemCopyBuffer = value;
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_31: clean
	private void Show_b__82_31()
	{
		MapObject pMVar1;
		MapScriptBaseObject pMVar2;
		String value;

		pMVar1 = this._mapObject;
		if ((pMVar1 == null) ||(pMVar2 = pMVar1.ScriptObject, pMVar2 == null)) {
			throw new NullReferenceException();
		}
		value = (pMVar2.Id).ToString();
		if ((typeof(GUIUtility)._2).cctor_finished_or_no_cctor == 0) {
			GUIUtility.systemCopyBuffer = value;
			return;
		}
		GUIUtility.systemCopyBuffer = value;
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_32: clean
	private void Show_b__82_32()
	{
		MapObject pMVar1;
		MapScriptBaseObject pMVar2;
		String value;

		pMVar1 = this._mapObject;
		if ((pMVar1 == null) ||(pMVar2 = pMVar1.ScriptObject, pMVar2 == null)) {
			throw new NullReferenceException();
		}
		value = pMVar2.Serialize();
		if ((typeof(GUIUtility)._2).cctor_finished_or_no_cctor == 0) {
			GUIUtility.systemCopyBuffer = value;
			return;
		}
		GUIUtility.systemCopyBuffer = value;
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_0: clean
	private void Show_b__82_0()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_1: clean
	private void Show_b__82_1()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_2: clean
	private void Show_b__82_2()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_3: clean
	private void Show_b__82_3()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_4: clean
	private void Show_b__82_4()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_5: clean
	private void Show_b__82_5()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_6: clean
	private void Show_b__82_6()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_7: clean
	private void Show_b__82_7()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_8: clean
	private void Show_b__82_8()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_9: clean
	private void Show_b__82_9()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_10: clean
	private void Show_b__82_10()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_11: clean
	private void Show_b__82_11()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_12: clean
	private void Show_b__82_12()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_13: clean
	private void Show_b__82_13()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_14: clean
	private void Show_b__82_14()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_15: clean
	private void Show_b__82_15()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_16: clean
	private void Show_b__82_16()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_17: clean
	private void Show_b__82_17()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_18: clean
	private void Show_b__82_18()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_24: clean
	private void Show_b__82_24()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_25: clean
	private void Show_b__82_25()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_26: clean
	private void Show_b__82_26()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_27: clean
	private void Show_b__82_27()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_28: clean
	private void Show_b__82_28()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_33: clean
	private void Show_b__82_33()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_34: clean
	private void Show_b__82_34()
	{


		this.OnButtonClick("Texture");
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_35: clean
	private void Show_b__82_35()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_36: clean
	private void Show_b__82_36()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_37: clean
	private void Show_b__82_37()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_38: clean
	private void Show_b__82_38()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_44: clean
	private void Show_b__82_44()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_45: clean
	private void Show_b__82_45()
	{
		this.OnChange();
		return;
	}

	// UI.MapEditorInspectPanel$$<Show>b__82_29: clean
	private void Show_b__82_29()
	{


		this.OnButtonClick("AddComponent");
		return;
	}

	// UI.MapEditorInspectPanel$$<OnButtonClick>b__91_0: clean
	private void OnButtonClick_b__91_0()
	{
		this.OnAddComponent();
		return;
	}

	// UI.MapEditorInspectPanel.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new MapEditorInspectPanel.c();
		MapEditorInspectPanel.c.__9 = (MapEditorInspectPanel.c)__this;
		return;
	}

	// UI.MapEditorInspectPanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorInspectPanel.<>c$$<PasteTransform>b__69_0: clean
	private bool c__PasteTransform_b__69_0(String key)
	{
		bool bVar1;

		if (key == null) {
			throw new NullReferenceException();
		}
		bVar1 = key.StartsWith("Position");
		if (!bVar1) {
			bVar1 = key.StartsWith("Rotation");
			if (!bVar1) {
				bVar1 = key.StartsWith("Scale");
				return bVar1;
			}
		}
		return true;
	}

	// UI.MapEditorInspectPanel.<>c$$<Show>b__82_19: 1 lines keep C-only constructs
	private bool c__Show_b__82_19(MapObject o)
	{
		byte bVar1;
		MapScriptBaseObject pMVar2;
		String pSVar3;
		String a;
		bool bVar4;

		if ((o != null) &&(pMVar2 = o.ScriptObject, pMVar2 != null)) {
			bVar1 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
			if (((pMVar2.klass._2).typeHierarchyDepth < bVar1) ||((pMVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapScriptSceneObject))) {
				throw new InvalidCastException();
			}
			pSVar3 = (*(ulong)((sbyte)pMVar2 + 0x78));
			if (pSVar3 != null) {
				a = pSVar3.fields;
				bVar4 = ((String)a != MapObjectShader.DefaultNoTint);
				return bVar4;
			}
		}
		throw new NullReferenceException();
	}

	// UI.MapEditorInspectPanel.<>c$$<Show>b__82_20: 1 lines keep C-only constructs
	private bool c__Show_b__82_20(MapObject o)
	{
		byte bVar1;
		MapScriptBaseObject pMVar2;
		String pSVar3;
		String shader;
		bool bVar4;

		if ((o != null) &&(pMVar2 = o.ScriptObject, pMVar2 != null)) {
			bVar1 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
			if (((pMVar2.klass._2).typeHierarchyDepth < bVar1) ||((pMVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapScriptSceneObject))) {
				throw new InvalidCastException();
			}
			pSVar3 = (*(ulong)((sbyte)pMVar2 + 0x78));
			if (pSVar3 != null) {
				shader = pSVar3.fields;
				if ((typeof(MapObjectShader)._2).cctor_finished_or_no_cctor == 0) {
					bVar4 = MapObjectShader.IsLegacyShader((String)shader);
					return bVar4;
				}
				bVar4 = MapObjectShader.IsLegacyShader((String)shader);
				return bVar4;
			}
		}
		throw new NullReferenceException();
	}

	// UI.MapEditorInspectPanel.<>c$$<Show>b__82_21: 1 lines keep C-only constructs
	private bool c__Show_b__82_21(MapObject o)
	{
		byte bVar1;
		MapScriptBaseObject pMVar2;
		String pSVar3;
		String a;
		bool bVar4;

		if ((o != null) &&(pMVar2 = o.ScriptObject, pMVar2 != null)) {
			bVar1 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
			if (((pMVar2.klass._2).typeHierarchyDepth < bVar1) ||((pMVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapScriptSceneObject))) {
				throw new InvalidCastException();
			}
			pSVar3 = (*(ulong)((sbyte)pMVar2 + 0x78));
			if (pSVar3 != null) {
				a = pSVar3.fields;
				bVar4 = ((String)a == MapObjectShader.DefaultTiled);
				return bVar4;
			}
		}
		throw new NullReferenceException();
	}

	// UI.MapEditorInspectPanel.<>c$$<Show>b__82_22: 1 lines keep C-only constructs
	private bool c__Show_b__82_22(MapObject o)
	{
		byte bVar1;
		MapScriptBaseObject pMVar2;
		String __this_00;
		Il2CppType handle;
		bool bVar3;
		Type pSVar4;

		handle = TypeRef_Map_MapScriptBasicMaterial;
		pSVar4 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if ((o != null) &&(pMVar2 = o.ScriptObject, pMVar2 != null)) {
			bVar1 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
			if (((pMVar2.klass._2).typeHierarchyDepth < bVar1) ||((pMVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapScriptSceneObject))) {
				throw new InvalidCastException();
			}
			__this_00 = (*(ulong)((sbyte)pMVar2 + 0x78));
			if (__this_00 != null) {
				if (pSVar4 != null) {
					return bVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	// UI.MapEditorInspectPanel.<>c$$<Show>b__82_23: 1 lines keep C-only constructs
	private bool c__Show_b__82_23(MapObject o)
	{
		byte bVar1;
		MapScriptBaseObject pMVar2;
		String pSVar3;
		String a;
		bool bVar4;

		if ((o != null) &&(pMVar2 = o.ScriptObject, pMVar2 != null)) {
			bVar1 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
			if (((pMVar2.klass._2).typeHierarchyDepth < bVar1) ||((pMVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapScriptSceneObject))) {
				throw new InvalidCastException();
			}
			pSVar3 = (*(ulong)((sbyte)pMVar2 + 0x78));
			if (pSVar3 != null) {
				a = pSVar3.fields;
				bVar4 = ((String)a == MapObjectShader.Reflective);
				return bVar4;
			}
		}
		throw new NullReferenceException();
	}

	// UI.MapEditorInspectPanel.<>c$$<SerializeMapObjectIds>b__86_0: clean
	private int c__SerializeMapObjectIds_b__86_0(int id)
	{
		return id;
	}

	// UI.MapEditorInspectPanel.<>c$$<SerializeMapObjectIds>b__86_1: clean
	private String c__SerializeMapObjectIds_b__86_1(int id)
	{
		String pSVar1;

		return pSVar1;
	}

	// UI.MapEditorInspectPanel.<>c$$<OnChange>b__104_1: clean
	private String c__OnChange_b__104_1(KeyValuePair<string, string> field)
	{
		return field.key;
	}

	// UI.MapEditorInspectPanel.<>c$$<OnChange>b__104_2: clean
	private String c__OnChange_b__104_2(KeyValuePair<string, string> field)
	{
		return field.value;
	}

	// UI.MapEditorInspectPanel.<>c$$<SerializeSetting>b__105_0: clean
	private int c__SerializeSetting_b__105_0(int value)
	{
		return value;
	}

	// UI.MapEditorInspectPanel.<>c$$<SerializeSetting>b__105_1: clean
	private String c__SerializeSetting_b__105_1(int value)
	{
		String pSVar1;

		return pSVar1;
	}

	// UI.MapEditorInspectPanel.<>c$$<PropagateTransformToDescendants>b__106_0: clean
	private int c__PropagateTransformToDescendants_b__106_0(MapObject o)
	{
		MapScriptBaseObject pMVar1;

		if ((o == null) ||(pMVar1 = o.ScriptObject, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return pMVar1.Id;
	}

	// UI.MapEditorInspectPanel.<>c$$<PropagateTransformToDescendants>b__106_1: clean
	private int c__PropagateTransformToDescendants_b__106_1(MapObject o)
	{
		MapScriptBaseObject pMVar1;

		if ((o == null) ||(pMVar1 = o.ScriptObject, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return pMVar1.Id;
	}

	// UI.MapEditorInspectPanel.<>c$$<PropagateTransformToDescendants>b__106_2: clean
	private int c__PropagateTransformToDescendants_b__106_2(MapObject o)
	{
		MapScriptBaseObject pMVar1;

		if ((o == null) ||(pMVar1 = o.ScriptObject, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return pMVar1.Id;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass100_0$$.ctor: clean
	private void c__DisplayClass100_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass100_0$$<MergeComponent>b__0: clean
	private bool c__DisplayClass100_0__MergeComponent_b__0(String parameter)
	{
		bool bVar1;
		String value;

		value = String.Concat(this.changed.key, ":");
		if (parameter == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass102_0$$.ctor: clean
	private void c__DisplayClass102_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass102_0$$<ApplyMixedIndicators>b__0: clean
	private void c__DisplayClass102_0__ApplyMixedIndicators_b__0(String val)
	{
		MapEditorInspectPanel pUVar1;
		HashSet<object> __this_00;
		bool bVar2;

		bVar2 = (val != "--");
		if (bVar2) {
			pUVar1 = this.__4__this;
			if ((pUVar1 != null) &&(__this_00 = (HashSet<object>)pUVar1._mixedFields, __this_00 != null)) {
				__this_00.Remove((object)this.capturedKey);
				pUVar1 = this.__4__this;
				if (pUVar1 != null) {
					pUVar1.OnChange();
					return;
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass102_1$$.ctor: clean
	private void c__DisplayClass102_1__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass102_1$$<ApplyMixedIndicators>b__1: clean
	private void c__DisplayClass102_1__ApplyMixedIndicators_b__1(bool __)
	{
		Object pUVar1;
		Image __this_00;
		MapEditorInspectPanel pUVar2;
		HashSet<object> __this_01;
		bool bVar3;

		pUVar1 = (Object)this.labelGO;
		bVar3 = (pUVar1 != null);
		if (bVar3) {
			pUVar1 = (Object)this.labelGO;
			Object.Destroy(pUVar1);
		}
		__this_00 = this.checkmark;
		if (__this_00 != null) {
			__this_00.enabled = true;
			pUVar2 = this.__4__this;
			if ((pUVar2 != null) &&(__this_01 = (HashSet<object>)pUVar2._mixedFields, __this_01 != null)) {
				__this_01.Remove((object)this.capturedKey);
				pUVar2 = this.__4__this;
				if (pUVar2 != null) {
					pUVar2.OnChange();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass104_0$$.ctor: clean
	private void c__DisplayClass104_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass104_0$$<OnChange>b__0: 1 lines keep C-only constructs
	private bool c__DisplayClass104_0__OnChange_b__0(KeyValuePair<string, string> field)
	{
		MapEditorInspectPanel pUVar1;
		HashSet<object> __this_00;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		String pSVar4;
		String pSVar5;

		pSVar5 = field.key;
		if (Il2CppMethodInitialized_07548046 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07548046 = true;
		}
		pUVar1 = this.__4__this;
		if (pUVar1 != null) {
			__this_00 = (HashSet<object>)pUVar1._mixedFields;
			pSVar4 = this.componentName;
			pSVar4 = MapEditorInspectPanel.GetComponentFieldKey(pSVar4, pSVar5);
			if (__this_00 != null) {
				bVar3 = __this_00.Contains((object)pSVar4);
				if (bVar3) {
					return false;
				}
				pSVar2 = (Dictionary<object, object>)this.syncedFields;
				if (pSVar2 != null) {
					bVar3 = pSVar2.ContainsKey((object)pSVar5);
					if (!bVar3) {
						return true;
					}
					pSVar2 = (Dictionary<object, object>)this.syncedFields;
					if (pSVar2 != null) {
						pSVar5 = pSVar2.get_Item((object)pSVar5);
						bVar3 = (pSVar5 != field.value);
						return bVar3;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass104_0$$<OnChange>b__3: clean
	private bool c__DisplayClass104_0__OnChange_b__3(MapScriptComponent item)
	{
		bool bVar1;

		if (item == null) {
			throw new NullReferenceException();
		}
		bVar1 = (item.ComponentName == this.componentName);
		return bVar1;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass63_0$$.ctor: clean
	private void c__DisplayClass63_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass63_0$$<CreateSection>b__0: clean
	private void c__DisplayClass63_0__CreateSection_b__0(bool expanded)
	{
		uint uVar1;
		HashSet<object> pSVar2;

		uVar1 = (typeof(MapEditorInspectPanel)._2).cctor_finished_or_no_cctor;
		if (expanded) {
			if (uVar1 == 0) {
			}
			pSVar2 = (HashSet<object>)MapEditorInspectPanel.CollapsedSections;
			if (pSVar2 != null) {
				pSVar2.Remove((object)this.key);
				return;
			}
		}
		else {
			if (uVar1 == 0) {
			}
			pSVar2 = (HashSet<object>)MapEditorInspectPanel.CollapsedSections;
			if (pSVar2 != null) {
				pSVar2.Add((object)this.key);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass63_0$$<CreateSection>b__1: clean
	private void c__DisplayClass63_0__CreateSection_b__1(PointerEventData eventData)
	{
		MapEditorInspectPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.ShowSectionContextMenu(this.key, eventData) ;
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass64_0$$.ctor: clean
	private void c__DisplayClass64_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass64_0$$<ShowSectionContextMenu>b__0: clean
	private void c__DisplayClass64_0__ShowSectionContextMenu_b__0()
	{
		MapEditorInspectPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.CopyComponent(this.componentName);
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass64_0$$<ShowSectionContextMenu>b__1: clean
	private void c__DisplayClass64_0__ShowSectionContextMenu_b__1()
	{
		MapEditorInspectPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.DeleteComponent(this.componentName);
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass70_0$$.ctor: clean
	private void c__DisplayClass70_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass70_0$$<CopyComponent>b__0: clean
	private bool c__DisplayClass70_0__CopyComponent_b__0(MapScriptComponent item)
	{
		bool bVar1;

		if (item == null) {
			throw new NullReferenceException();
		}
		bVar1 = (item.ComponentName == this.componentName);
		return bVar1;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass72_0$$.ctor: clean
	private void c__DisplayClass72_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass72_0$$<PasteComponent>b__0: clean
	private bool c__DisplayClass72_0__PasteComponent_b__0(MapScriptComponent item)
	{
		MapScriptComponent pMVar1;
		bool bVar2;

		if ((item == null) ||(pMVar1 = this.copied, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		bVar2 = (item.ComponentName == pMVar1.ComponentName);
		return bVar2;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass73_0$$.ctor: clean
	private void c__DisplayClass73_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass73_0$$<DeleteComponent>b__0: clean
	private bool c__DisplayClass73_0__DeleteComponent_b__0(MapScriptComponent item)
	{
		bool bVar1;

		if (item == null) {
			throw new NullReferenceException();
		}
		bVar1 = (item.ComponentName == this.componentName);
		return bVar1;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass82_0$$.ctor: clean
	private void c__DisplayClass82_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass82_0$$<Show>b__39: 1 lines keep C-only constructs
	private void c__DisplayClass82_0__Show_b__39()
	{
		uint uVar1;
		MapEditorInspectPanel pUVar2;
		MapEditorMenu pUVar3;
		ConfirmPopup __this_00;
		String pSVar4;
		UnityAction __this_01;

		pUVar2 = this.__4__this;
		if ((pUVar2 == null) ||(pUVar3 = pUVar2._menu, pUVar3 == null)) goto label_05d9346a;
		__this_00 = pUVar3.ConfirmPopup;
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07548101 != false) goto label_05d9336c;
	label_05d93424: ;
			pSVar4 = "DeleteWarning";
			g_data_07548101 = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_07548101 == false) goto label_05d93424;
	label_05d9336c: ;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			pSVar4 = "DeleteWarning";
		}
		if (uVar1 == 0) {
		}
		pSVar4 = UIManager.GetLocale("Common", pSVar4, "", "", "");
		__this_01 = this.__9__48;
		if (__this_01 == null) {
			__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_0_Show_b__48) ;
			this.__9__48 = __this_01;
		}
		if (__this_00 != null) {
			__this_00.Show(pSVar4, __this_01, null);
			return;
		}
	label_05d9346a: ;
		throw new NullReferenceException();
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass82_0$$<Show>b__48: clean
	private void c__DisplayClass82_0__Show_b__48()
	{
		MapEditorInspectPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.DeleteComponent(this.componentName);
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass82_1$$.ctor: clean
	private void c__DisplayClass82_1__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass82_1$$<Show>b__41: clean
	private void c__DisplayClass82_1__Show_b__41()
	{
		MapEditorInspectPanel.c__DisplayClass82_0 pUVar1;
		MapEditorInspectPanel __this_00;

		pUVar1 = this.CS___8__locals1;
		if ((pUVar1 == null) ||(__this_00 = pUVar1.__4__this, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.OnComponentFieldChanged(pUVar1.componentName, this.fieldName);
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass82_1$$<Show>b__40: clean
	private void c__DisplayClass82_1__Show_b__40()
	{
		MapEditorInspectPanel.c__DisplayClass82_0 pUVar1;
		MapEditorInspectPanel __this_00;

		pUVar1 = this.CS___8__locals1;
		if ((pUVar1 == null) ||(__this_00 = pUVar1.__4__this, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.OnComponentFieldChanged(pUVar1.componentName, this.fieldName);
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass82_1$$<Show>b__42: clean
	private void c__DisplayClass82_1__Show_b__42()
	{
		MapEditorInspectPanel.c__DisplayClass82_0 pUVar1;
		MapEditorInspectPanel __this_00;

		pUVar1 = this.CS___8__locals1;
		if ((pUVar1 == null) ||(__this_00 = pUVar1.__4__this, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.OnComponentFieldChanged(pUVar1.componentName, this.fieldName);
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass82_1$$<Show>b__43: clean
	private void c__DisplayClass82_1__Show_b__43()
	{
		MapEditorInspectPanel.c__DisplayClass82_0 pUVar1;
		MapEditorInspectPanel __this_00;

		pUVar1 = this.CS___8__locals1;
		if ((pUVar1 == null) ||(__this_00 = pUVar1.__4__this, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.OnComponentFieldChanged(pUVar1.componentName, this.fieldName);
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass82_1$$<Show>b__46: clean
	private void c__DisplayClass82_1__Show_b__46()
	{
		MapEditorInspectPanel.c__DisplayClass82_0 pUVar1;
		MapEditorInspectPanel __this_00;

		pUVar1 = this.CS___8__locals1;
		if ((pUVar1 == null) ||(__this_00 = pUVar1.__4__this, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.OnComponentFieldChanged(pUVar1.componentName, this.fieldName);
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass82_1$$<Show>b__47: clean
	private void c__DisplayClass82_1__Show_b__47()
	{
		MapEditorInspectPanel.c__DisplayClass82_0 pUVar1;
		MapEditorInspectPanel __this_00;

		pUVar1 = this.CS___8__locals1;
		if ((pUVar1 == null) ||(__this_00 = pUVar1.__4__this, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.OnComponentFieldChanged(pUVar1.componentName, this.fieldName);
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass83_0$$.ctor: clean
	private void c__DisplayClass83_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass83_0$$<CreateMapObjectSetting>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass83_0__CreateMapObjectSetting_b__0()
	{
		Action pSVar1;
		code *vtableDispatch;
		ulong in_RDX;

		pSVar1 = this.onChanged;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pSVar1.method,in_RDX,vtableDispatch);
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass83_0$$<CreateMapObjectSetting>b__1: 1 lines keep C-only constructs
	private void c__DisplayClass83_0__CreateMapObjectSetting_b__1()
	{
		MapEditorInspectPanel pUVar1;
		MapEditorMenu pUVar2;
		MapEditorMapObjectPickerPopup __this_00;
		Action<int> __this_01;

		pUVar1 = this.__4__this;
		if ((pUVar1 != null) &&(pUVar2 = pUVar1._menu, pUVar2 != null)) {
			__this_00 = pUVar2.MapObjectPickerPopup;
			__this_01 = this.__9__2;
			if (__this_01 == null) {
				__this_01 = new Action<int>((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0_CreateMapObjectSetting_b__2);
				this.__9__2 = __this_01;
			}
			if (__this_00 != null) {
				__this_00._multiple = false;
				__this_00._onSelect = __this_01;
				__this_00._onSelectMultiple = null;
				__this_00.PrepareAndShow();
				return;
			}
		}
		throw new NullReferenceException();
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass83_0$$<CreateMapObjectSetting>b__2: 2 lines keep C-only constructs
	private void c__DisplayClass83_0__CreateMapObjectSetting_b__2(int id)
	{
		IntSetting __this_00;
		InputSettingElement pUVar1;
		Action pSVar2;
		code *vtableDispatch;
		ulong extraout_RDX;

		__this_00 = this.setting;
		if (__this_00 != null) {
			__this_00.Value = id;
			pUVar1 = this.input;
			if (pUVar1 != null) {
				pUVar1.SyncElement();
				pSVar2 = this.onChanged;
				if (pSVar2 != null) {
					vtableDispatch = (code)pSVar2.invoke_impl;
					(*vtableDispatch)(pSVar2.method_code,pSVar2.method,extraout_RDX,vtableDispatch);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass84_0$$.ctor: clean
	private void c__DisplayClass84_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass84_0$$<CreateMapObjectListSetting>b__0: clean
	private void c__DisplayClass84_0__CreateMapObjectListSetting_b__0()
	{
		StringSetting pSVar1;
		HashSetSetting<int> pSVar2;
		Action pSVar3;
		HashSet<int> value;
		String pSVar4;

		pSVar1 = this.serialized;
		if (pSVar1 != null) {
			pSVar2 = this.setting;
			pSVar4 = pSVar1._value;
			value = MapEditorInspectPanel.ParseMapObjectIds(pSVar4);
			if (pSVar2 != null) {
				pSVar2.Value = (object)value;
				pSVar2 = this.setting;
				if (pSVar2 != null) {
					pSVar1 = this.serialized;
					pSVar4 = MapEditorInspectPanel.SerializeMapObjectIds((IEnumerable<int>)pSVar2._value);
					if (pSVar1 != null) {
						pSVar1.Value = (object)pSVar4;
						pSVar3 = this.onChanged;
						if (pSVar3 != null) {
							(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar3.method);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass84_0$$<CreateMapObjectListSetting>b__1: 2 lines keep C-only constructs
	private void c__DisplayClass84_0__CreateMapObjectListSetting_b__1()
	{
		MapEditorInspectPanel pUVar1;
		MapEditorMenu pUVar2;
		MapEditorMapObjectPickerPopup __this_00;
		Il2CppClass selectedIds;
		Action<HashSet<int>> __this_01;
		MethodInfo method_00;

		pUVar1 = this.__4__this;
		if (((pUVar1 != null) &&(pUVar2 = pUVar1._menu, pUVar2 != null)) &&(method_00 = (MethodInfo)this.setting, method_00 != null)) {
			__this_00 = pUVar2.MapObjectPickerPopup;
			selectedIds = method_00.klass;
			__this_01 = this.__9__2;
			if (__this_01 == null) {
				method_00 = null;
				__this_01 = new Action<HashSet<int>>((object)this, (intptr_t) MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass84_0_CreateMapObjectListSetting_b__2);
				this.__9__2 = __this_01;
			}
			if (__this_00 != null) {
				__this_00.Show((HashSet<int>)selectedIds, __this_01);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass84_0$$<CreateMapObjectListSetting>b__2: 2 lines keep C-only constructs
	private void c__DisplayClass84_0__CreateMapObjectListSetting_b__2(HashSet<int> ids)
	{
		HashSetSetting<int> __this_00;
		StringSetting __this_01;
		InputSettingElement pUVar1;
		Action pSVar2;
		code *vtableDispatch;
		String value;
		ulong extraout_RDX;

		__this_00 = this.setting;
		if (__this_00 != null) {
			__this_00.Value = (object)ids;
			__this_01 = this.serialized;
			value = MapEditorInspectPanel.SerializeMapObjectIds((IEnumerable<int>)ids);
			if (__this_01 != null) {
				__this_01.Value = (object)value;
				pUVar1 = this.input;
				if (pUVar1 != null) {
					pUVar1.SyncElement();
					pSVar2 = this.onChanged;
					if (pSVar2 != null) {
						vtableDispatch = (code)pSVar2.invoke_impl;
						(*vtableDispatch)(pSVar2.method_code,pSVar2.method,extraout_RDX,vtableDispatch);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass91_0$$.ctor: clean
	private void c__DisplayClass91_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass91_0$$<OnButtonClick>b__1: clean
	private void c__DisplayClass91_0__OnButtonClick_b__1()
	{
		MapEditorInspectPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnDeleteComponent(this.index);
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass95_0$$.ctor: clean
	private void c__DisplayClass95_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass95_0$$<SyncSettings>b__0: 6 lines keep C-only constructs
	private bool c__DisplayClass95_0__SyncSettings_b__0(MapObject mapObject)
	{
		byte bVar1;
		MapScriptBaseObject pMVar2;
		System_Collections_Generic_IEnumerable_TSource__o source;
		bool bVar3;
		System_Func_TSource__bool__o __this_00;

		if ((mapObject == null) ||(pMVar2 = mapObject.ScriptObject, pMVar2 == null)) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
		if (((pMVar2.klass._2).typeHierarchyDepth < bVar1) ||((pMVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(MapScriptSceneObject)) ) {
			throw new InvalidCastException();
		}
		source = *(System_Collections_Generic_IEnumerable_TSource__o*)&(*(uint)((sbyte)pMVar2 + 0x80));
		__this_00 = (System_Func_TSource__bool__o)this.__9__1;
		if (__this_00 == null) {
			__this_00 = new Func<MapScriptComponent, bool>((object)this, (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass95_0_SyncSettings_b__1);
			this.__9__1 = (Func<MapScriptComponent, bool>)__this_00;
		}
		bVar3 = Enumerable.Any<MapScriptComponent>(source, __this_00);
		return bVar3;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass95_0$$<SyncSettings>b__1: clean
	private bool c__DisplayClass95_0__SyncSettings_b__1(MapScriptComponent item)
	{
		MapScriptComponent pMVar1;
		bool bVar2;

		if ((item == null) ||(pMVar1 = this.component, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		bVar2 = (item.ComponentName == pMVar1.ComponentName);
		return bVar2;
	}

	// UI.MapEditorInspectPanel.<>c__DisplayClass95_0$$<SyncSettings>b__2: clean
	private bool c__DisplayClass95_0__SyncSettings_b__2(MapScriptComponent item)
	{
		MapScriptComponent pMVar1;
		bool bVar2;

		if ((item == null) ||(pMVar1 = this.component, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		bVar2 = (item.ComponentName == pMVar1.ComponentName);
		return bVar2;
	}
}
