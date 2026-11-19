// ==================== AoTTG2 cross-reference ====================
// Type: UI.ItemHandler
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ItemHandler.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ItemHandler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GameManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000847")]
internal class ItemHandler : MonoBehaviour
{
	[Token(Token = "0x2000848")]
	[CompilerGenerated]
	private sealed class _003CUpdateForever_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40029C6")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40029C7")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40029C8")]
		[FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x40029C9")]
		[FieldOffset(Offset = "0x28")]
		public ItemHandler _003C_003E4__this;

		[Token(Token = "0x17000DBA")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004F22")]
			[Address(RVA = "0x5C31FD0", Offset = "0x5C30FD0", VA = "0x5C31FD0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/ItemHandler.c (UI.ItemHandler.<UpdateForever>d__7$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000DBB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004F24")]
			[Address(RVA = "0x5C32020", Offset = "0x5C31020", VA = "0x5C32020", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/ItemHandler.c (UI.ItemHandler.<UpdateForever>d__7$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004F1F")]
		[Address(RVA = "0x5C31BB0", Offset = "0x5C30BB0", VA = "0x5C31BB0")]
		[DebuggerHidden]
		public _003CUpdateForever_003Ed__7(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/ItemHandler.c (UI.ItemHandler.<UpdateForever>d__7$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004F20")]
		[Address(RVA = "0x5C31DA0", Offset = "0x5C30DA0", VA = "0x5C31DA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/ItemHandler.c (UI.ItemHandler.<UpdateForever>d__7$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004F21")]
		[Address(RVA = "0x5C31DB0", Offset = "0x5C30DB0", VA = "0x5C31DB0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/ItemHandler.c (UI.ItemHandler.<UpdateForever>d__7$$MoveNext): 2 lines keep C-only constructs
			float seconds;
			byte bVar1;
			int iVar2;
			ItemHandler __this_00;
			InputSettings pSVar3;
			InteractionInputSettings pSVar4;
			KeybindSetting pSVar5;
			WheelPopup __this_01;
			String openKey;
			List<string> options;
			UnityAction __this_02;
			String title;
			WaitForSeconds __this_03;

			iVar2 = this.__1__state;
			if (iVar2 != 1) {
				if (iVar2 != 0) {
					return false;
				}
				this.__1__state = -1;
		label_05d31f61: ;
				seconds = this.delay;
				__this_03 = new WaitForSeconds(seconds);
				this.__2__current = (object)__this_03;
				this.__1__state = 1;
				return true;
			}
			__this_00 = this.__4__this;
			this.__1__state = -1;
			if (__this_00 != null) {
				if (__this_00.IsActive == false) goto label_05d31f61;
				pSVar3 = SettingsManager.InputSettings;
				if (((pSVar3 != null) &&(pSVar4 = pSVar3.Interaction, pSVar4 != null)) &&(pSVar5 = pSVar4.ItemMenu, pSVar5 != null)) {
					__this_01 = (WheelPopup)__this_00._itemWheelPopup;
					openKey = pSVar5.ToString();
					options = __this_00.GetItemWheelOptions();
					__this_02 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_ItemHandler_UpdateForever_b__7_0);
					title = Aottg2GisketchLocale.Text("InGameMenu.Wheel.Items");
					if (__this_01 != null) {
						bVar1 = (typeof(WheelPopup)._2).typeHierarchyDepth;
						if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(WheelPopup))) {
							throw new InvalidCastException();
						}
						__this_01.Show(openKey, options, __this_02, title, false);
						goto label_05d31f61;
					}
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x6004F23")]
		[Address(RVA = "0x5C31FE0", Offset = "0x5C30FE0", VA = "0x5C31FE0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/ItemHandler.c (UI.ItemHandler.<UpdateForever>d__7$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_ItemHandler_UpdateForever_d__7_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40029C3")]
	[FieldOffset(Offset = "0x20")]
	private BasePopup _itemWheelPopup;

	[Token(Token = "0x40029C4")]
	[FieldOffset(Offset = "0x28")]
	public bool IsActive;

	[Token(Token = "0x40029C5")]
	[FieldOffset(Offset = "0x30")]
	private InGameManager _inGameManager;

	[Token(Token = "0x6004F14")]
	[Address(RVA = "0x5C314A0", Offset = "0x5C304A0", VA = "0x5C314A0")]
	private void Awake()
	{
		// Lifted from source/cpp/UI/ItemHandler.c (UI.ItemHandler$$Awake): 5 lines keep C-only constructs
		byte bVar1;
		Il2CppClass* ppIVar2;
		InGameManager pGVar3;
		InGameManager pGVar4;
		WheelPopup pUVar5;
		Transform parent;
		GameObject __this_00;
		BasePopup pUVar6;
		UnityAction __this_01;

		parent = this.transform;
		__this_00 = ElementFactory.InstantiateAndSetupPanel<WheelPopup>(parent, "Prefabs/InGame/WheelMenu", false);
		if (__this_00 != null) {
			pUVar6 = __this_00.GetComponent<BasePopup>();
			this._itemWheelPopup = pUVar6;
			pUVar6 = this._itemWheelPopup;
			__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ItemHandler_Awake_b__3_0);
			pUVar5 = typeof(WheelPopup);
			if (pUVar6 != null) {
				bVar1 = (typeof(WheelPopup)._2).typeHierarchyDepth;
				if ((((pUVar6.klass._2).typeHierarchyDepth < bVar1) ||(ppIVar2 = (pUVar6.klass._2).typeHierarchy, ppIVar2[(ulong)bVar1 - 1] != typeof(WheelPopup))) ||((*(ulong)((sbyte)pUVar6 + 0xc0)) = (CancellationTokenSource)__this_01 , ppIVar2[(ulong)bVar1 - 1] != (Il2CppClass)pUVar5)) {
					throw new InvalidCastException();
				}
				pGVar4 = typeof(InGameManager);
				pGVar3 = (InGameManager)SceneLoader.CurrentGameManager;
				if (pGVar3 == null) {
					this._inGameManager = null;
	label_05d3166b: ;
					return;
				}
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if ((bVar1 <= (pGVar3.klass._2).typeHierarchyDepth) &&((pGVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(InGameManager))) {
					this._inGameManager = pGVar3;
					if ((bVar1 <= (pGVar3.klass._2).typeHierarchyDepth) &&((pGVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass)pGVar4)) goto label_05d3166b;
				}
				throw new InvalidCastException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F15")]
	[Address(RVA = "0x5C31690", Offset = "0x5C30690", VA = "0x5C31690")]
	private void Start()
	{
		// Lifted from source/cpp/UI/ItemHandler.c (UI.ItemHandler$$Start): clean
		ItemHandler.d__7<UpdateForever> __this_00;

		__this_00 = new ItemHandler.d__7<UpdateForever>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.delay = 1.0;
		this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x6004F16")]
	[Address(RVA = "0x5C31790", Offset = "0x5C30790", VA = "0x5C31790")]
	public void ToggleItemWheel()
	{
		// Lifted from source/cpp/UI/ItemHandler.c (UI.ItemHandler$$ToggleItemWheel): clean


		this.SetItemWheel(this.IsActive == false);
		return;
	}

	[Token(Token = "0x6004F17")]
	[Address(RVA = "0x5C30820", Offset = "0x5C2F820", VA = "0x5C30820")]
	public void SetItemWheel(bool enable)
	{
		// Lifted from source/cpp/UI/ItemHandler.c (UI.ItemHandler$$SetItemWheel): 3 lines keep C-only constructs
		byte bVar1;
		InputSettings pSVar2;
		InteractionInputSettings pSVar3;
		KeybindSetting pSVar4;
		WheelPopup __this_00;
		BasePopup pUVar5;
		bool bVar6;
		String openKey;
		List<string> options;
		UnityAction __this_01;
		String title;
		String* method_01;

		if (Il2CppMethodInitialized_07547e28 == false) {
			method_01 = &"InGameMenu.Wheel.Items";
			Il2CppMethodInitialized_07547e28 = true;
		}
		if (enable) {
			bVar6 = InGameMenu.InMenu();
			if (bVar6) {
				return;
			}
			pSVar2 = SettingsManager.InputSettings;
			if (((pSVar2 != null) &&(pSVar3 = pSVar2.Interaction, pSVar3 != null)) &&(pSVar4 = pSVar3.ItemMenu, pSVar4 != null)) {
				__this_00 = (WheelPopup)this._itemWheelPopup;
				openKey = pSVar4.ToString();
				options = this.GetItemWheelOptions();
				__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_ItemHandler_SetItemWheel_b__6_0);
				title = Aottg2GisketchLocale.Text("InGameMenu.Wheel.Items");
				if (__this_00 != null) {
					bVar1 = (typeof(WheelPopup)._2).typeHierarchyDepth;
					if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(WheelPopup))) {
						throw new InvalidCastException();
					}
					__this_00.Show(openKey, options, __this_01, title, false);
					bVar6 = true;
					goto label_05d309b7;
				}
			}
		}
		else {
			pUVar5 = this._itemWheelPopup;
			if (pUVar5 != null) {
				pUVar5.Hide();
				bVar6 = false;
	label_05d309b7: ;
				this.IsActive = bVar6;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F18")]
	[Address(RVA = "0x5C31710", Offset = "0x5C30710", VA = "0x5C31710")]
	[IteratorStateMachine(typeof(_003CUpdateForever_003Ed__7))]
	private IEnumerator UpdateForever(float delay)
	{
		// Lifted from source/cpp/UI/ItemHandler.c (UI.ItemHandler$$UpdateForever): clean
		ItemHandler.d__7<UpdateForever> __this_00;

		__this_00 = new ItemHandler.d__7<UpdateForever>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.delay = delay;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004F19")]
	[Address(RVA = "0x5C31BD0", Offset = "0x5C30BD0", VA = "0x5C31BD0")]
	private void OnItemWheelSelect()
	{
		// Lifted from source/cpp/UI/ItemHandler.c (UI.ItemHandler$$OnItemWheelSelect): 2 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		InGameManager pGVar3;
		BasePopup pUVar4;
		BaseCharacter x;
		List<BaseUseable> pSVar5;
		BaseMenu pUVar6;
		bool bVar7;

		pGVar3 = this._inGameManager;
		if ((pGVar3 != null) &&(pUVar4 = this._itemWheelPopup, pUVar4 != null)) {
			bVar1 = (typeof(WheelPopup)._2).typeHierarchyDepth;
			if (((pUVar4.klass._2).typeHierarchyDepth < bVar1) ||((pUVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(WheelPopup))) {
	label_05d31d5b: ;
				throw new InvalidCastException();
			}
			x = pGVar3.CurrentCharacter;
			iVar2 = *(int)((long)&(*(ulong)((sbyte)pUVar4 + 0xb0)) + 4);
			bVar7 = ((Object)x != null);
			if (bVar7) {
				if ((x == null) ||(pSVar5 = x.Items, pSVar5 == null)) goto label_05d31d56;
				if (iVar2 < pSVar5._size) {
					x.UseItem(iVar2);
				}
			}
			pUVar4 = this._itemWheelPopup;
			if (pUVar4 != null) {
				pUVar4.Hide();
				this.IsActive = false;
				pUVar6 = UIManager.CurrentMenu;
				if (pUVar6 != null) {
					bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
					if ((bVar1 <= (pUVar6.klass._2).typeHierarchyDepth) &&((pUVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(InGameMenu))) {
						*(byte)&(*(ulong)((sbyte)pUVar6 + 0x158)) = 1;
						return;
					}
					goto label_05d31d5b;
				}
			}
		}
	label_05d31d56: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F1A")]
	[Address(RVA = "0x5C317A0", Offset = "0x5C307A0", VA = "0x5C317A0")]
	private List<string> GetItemWheelOptions()
	{
		// Lifted from source/cpp/UI/ItemHandler.c (UI.ItemHandler$$GetItemWheelOptions): 8 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		InGameManager pGVar3;
		BaseCharacter x;
		List<BaseUseable> __this_00;
		String[] pSVar4;
		object pIVar6;
		bool bVar7;
		List<string> __this_01;
		String pSVar8;
		String pSVar9;
		float fVar10;
		int local_6c;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		byte[] local_48 = new byte[16];
		BaseUseable local_38;

		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		local_6c = 0;
		pGVar3 = this._inGameManager;
		if (pGVar3 == null) {
	label_05d31a8a: ;
			throw new NullReferenceException();
		}
		x = pGVar3.CurrentCharacter;
		__this_01 = new List<string>();
		bVar7 = ((Object)x != null);
		if (bVar7) {
			if ((x == null) ||(__this_00 = x.Items, __this_00 == null)) goto label_05d31a8a;
			local_48.GetEnumerator((List<object>)__this_00);
			local_68._current = (object)local_38;
			local_68._list = (List<T>)local_48._0_8_;
			local_68._index = local_48._8_4_;
			local_68._version = local_48._12_4_;
			local_48._0_8_ = null;
			local_48._8_8_ = &local_68;
			if (__this_01 == null) {
				bVar7 = local_68.MoveNext();
				pIVar6 = local_68._current;
				if (bVar7) {
					if ((BaseUseable)local_68._current != null) {
						pSVar9 = ((BaseUseable)((long)local_68._current + 0x10)).Name;
						if (((BaseUseable)((long)local_68._current + 0x10)).MaxUses == -1) {
							fVar10 = local_68._current.GetCooldownLeft();
							if (0.0 < fVar10) {
								fVar10 = pIVar6.GetCooldownLeft();
								local_6c = (int32_t)fVar10;
								pSVar8 = local_6c.ToString();
								String.Concat(pSVar9, " (", pSVar8, ")");
							}
						}
						else {
							pSVar8 = (((BaseUseable)((long)local_68._current + 0x10)). UsesLeft).ToString();
							String.Concat(pSVar9, " (", pSVar8, ")");
						}
	label_05d31b2c: ;
						throw new NullReferenceException();
					}
	label_05d31a99: ;
					throw new NullReferenceException();
				}
			}
			else {
				while(true) {
					bVar7 = local_68.MoveNext();
					pIVar6 = local_68._current;
					if (!bVar7) break;
					if ((BaseUseable)local_68._current == null) goto label_05d31a99;
					pSVar9 = ((BaseUseable)((long)local_68._current + 0x10)).Name;
					if (((BaseUseable)((long)local_68._current + 0x10)).MaxUses == -1) {
						fVar10 = local_68._current.GetCooldownLeft();
						if (0.0 < fVar10) {
							fVar10 = pIVar6.GetCooldownLeft();
							local_6c = (int32_t)fVar10;
							pSVar8 = local_6c.ToString();
							pSVar9 = String.Concat(pSVar9, " (", pSVar8, ")");
						}
					}
					else {
						pSVar8 = (((BaseUseable)((long)local_68._current + 0x10)). UsesLeft).ToString();
						pSVar9 = String.Concat(pSVar9, " (", pSVar8, ")");
					}
					piVar1 = &__this_01._version;
					*piVar1 = *piVar1 + 1;
					pSVar4 = __this_01._items;
					if (pSVar4 == null) goto label_05d31b2c;
					uVar2 = __this_01._size;
					if (uVar2 < (uint)pSVar4.Length) {
						__this_01._size = uVar2 + 1;
						pSVar4[(int)uVar2] = pSVar9;
					}
					else {
						__this_01.AddWithResize((object)pSVar9);
					}
				}
			}
			local_68.Dispose();
		}
		return __this_01;
	}

	[Token(Token = "0x6004F1B")]
	[Address(RVA = "0x5C31D60", Offset = "0x5C30D60", VA = "0x5C31D60")]
	public ItemHandler()
	{
		// Lifted from source/cpp/UI/ItemHandler.c (UI.ItemHandler$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ItemHandler.c.

	// UI.ItemHandler$$<Awake>b__3_0: clean
	private void Awake_b__3_0()
	{


		this.SetItemWheel(false);
		return;
	}

	// UI.ItemHandler$$<SetItemWheel>b__6_0: clean
	private void SetItemWheel_b__6_0()
	{
		this.OnItemWheelSelect();
		return;
	}

	// UI.ItemHandler$$<UpdateForever>b__7_0: clean
	private void UpdateForever_b__7_0()
	{
		this.OnItemWheelSelect();
		return;
	}
}
