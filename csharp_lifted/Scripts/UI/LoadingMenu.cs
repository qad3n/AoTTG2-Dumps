// ==================== AoTTG2 cross-reference ====================
// Type: UI.LoadingMenu
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/LoadingMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/LoadingMenu/LoadingMenu.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200087B")]
internal class LoadingMenu : BaseMenu
{
	[Token(Token = "0x200087C")]
	[CompilerGenerated]
	private sealed class _003CWaitAndHide_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002B02")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002B03")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002B04")]
		[FieldOffset(Offset = "0x20")]
		public LoadingMenu _003C_003E4__this;

		[Token(Token = "0x17000E1A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60050E5")]
			[Address(RVA = "0x5C56510", Offset = "0x5C55510", VA = "0x5C56510", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/LoadingMenu.c (UI.LoadingMenu.<WaitAndHide>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000E1B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60050E7")]
			[Address(RVA = "0x5C56560", Offset = "0x5C55560", VA = "0x5C56560", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/LoadingMenu.c (UI.LoadingMenu.<WaitAndHide>d__8$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60050E2")]
		[Address(RVA = "0x5C563B0", Offset = "0x5C553B0", VA = "0x5C563B0")]
		[DebuggerHidden]
		public _003CWaitAndHide_003Ed__8(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/LoadingMenu.c (UI.LoadingMenu.<WaitAndHide>d__8$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60050E3")]
		[Address(RVA = "0x5C563E0", Offset = "0x5C553E0", VA = "0x5C563E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/LoadingMenu.c (UI.LoadingMenu.<WaitAndHide>d__8$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60050E4")]
		[Address(RVA = "0x5C563F0", Offset = "0x5C553F0", VA = "0x5C563F0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/LoadingMenu.c (UI.LoadingMenu.<WaitAndHide>d__8$$MoveNext): clean
			LoadingMenu __this_00;
			object pIVar1;

			switch(this.__1__state) {
			case 0:
				this.__1__state = -1;
				pIVar1 = new WaitForEndOfFrame();
				this.__2__current = pIVar1;
				this.__1__state = 1;
				break;
			case 1:
				this.__1__state = -1;
				pIVar1 = new WaitForEndOfFrame();
				this.__2__current = pIVar1;
				this.__1__state = 2;
				break;
			case 2:
				this.__1__state = -1;
				pIVar1 = new WaitForEndOfFrame();
				this.__2__current = pIVar1;
				this.__1__state = 3;
				break;
			case 3:
				__this_00 = this.__4__this;
				this.__1__state = -1;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.Hide();
			default: ;
				return false;
			}
			return true;
		}

		[Token(Token = "0x60050E6")]
		[Address(RVA = "0x5C56520", Offset = "0x5C55520", VA = "0x5C56520", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/LoadingMenu.c (UI.LoadingMenu.<WaitAndHide>d__8$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_LoadingMenu_WaitAndHide_d__8_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4002AFF")]
	[FieldOffset(Offset = "0x98")]
	private LoadingBackgroundPanel _backgroundPanel;

	[Token(Token = "0x4002B00")]
	[FieldOffset(Offset = "0xA0")]
	private LoadingProgressPanel _progessPanel;

	[Token(Token = "0x4002B01")]
	[FieldOffset(Offset = "0xA8")]
	private TipPanel _tipPanel;

	[Token(Token = "0x60050DB")]
	[Address(RVA = "0x5C55D60", Offset = "0x5C54D60", VA = "0x5C55D60", Slot = "4")]
	public override void Setup()
	{
		// Lifted from source/cpp/UI/LoadingMenu.c (UI.LoadingMenu$$Setup): clean
		Transform pUVar1;
		LoadingBackgroundPanel pUVar2;
		LoadingProgressPanel pUVar3;
		TipPanel pUVar4;
		GameObject obj;

		pUVar1 = this.transform;
		pUVar2 = ElementFactory.CreateDefaultPopup<LoadingBackgroundPanel>(pUVar1, false);
		this._backgroundPanel = pUVar2;
		pUVar1 = this.transform;
		pUVar3 = ElementFactory.CreateDefaultPopup<LoadingProgressPanel>(pUVar1, false);
		this._progessPanel = pUVar3;
		pUVar1 = this.transform;
		pUVar4 = ElementFactory.CreateTipPanel(pUVar1, false);
		this._tipPanel = pUVar4;
		pUVar4 = this._tipPanel;
		if (pUVar4 == null) {
			throw new NullReferenceException();
		}
		obj = pUVar4.gameObject;
		ElementFactory.SetAnchor(obj, 8, 8, (Vector2)0xc120000041200000);
		return;
	}

	[Token(Token = "0x60050DC")]
	[Address(RVA = "0x5C55E60", Offset = "0x5C54E60", VA = "0x5C55E60", Slot = "6")]
	public override void RebuildPopups()
	{
		// Lifted from source/cpp/UI/LoadingMenu.c (UI.LoadingMenu$$RebuildPopups): 8 lines keep C-only constructs
		LoadingProgressPanel* targetAddress;
		bool value;
		int index;
		Transform pUVar1;
		GameObject pUVar2;
		Object obj;
		LoadingProgressPanel pUVar3;

		pUVar3 = this._progessPanel;
		if (pUVar3 != null) {
			pUVar1 = pUVar3.transform;
			if (pUVar1 != null) {
				targetAddress = &this._progessPanel;
				index = pUVar1.GetSiblingIndex();
				if (*targetAddress != null) {
					pUVar2 = (*targetAddress).gameObject;
					if (pUVar2 != null) {
						value = pUVar2.activeSelf;
						if (*targetAddress != null) {
							obj = (Object)(*targetAddress).gameObject;
							Object.Destroy(obj);
							pUVar1 = this.transform ;
							pUVar3 = ElementFactory.CreateDefaultPopup<LoadingProgressPanel>(pUVar1, false);
							this._progessPanel = pUVar3;
							pUVar3 = this._progessPanel;
							if (pUVar3 != null) {
								pUVar1 = pUVar3.transform;
								if (pUVar1 != null) {
									pUVar1.SetSiblingIndex(index);
									if (*targetAddress != null) {
										pUVar2 = (*targetAddress).gameObject;
										if (pUVar2 != null) {
											pUVar2.SetActive(value);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050DD")]
	[Address(RVA = "0x5C55FB0", Offset = "0x5C54FB0", VA = "0x5C55FB0")]
	public void Show(bool immediate = false)
	{
		// Lifted from source/cpp/UI/LoadingMenu.c (UI.LoadingMenu$$Show): 2 lines keep C-only constructs
		TipPanel pUVar1;
		Text pUVar2;
		LoadingBackgroundPanel pUVar3;
		bool bVar4;
		GameObject pUVar5;
		MethodInfo pMVar6;
		Text method_00;

		pUVar1 = this._tipPanel;
		if (pUVar1 != null) {
			pUVar5 = pUVar1.gameObject;
			if (pUVar5 != null) {
				pMVar6 = null;
				bVar4 = pUVar5.activeSelf;
				if (bVar4) {
					return;
				}
				pUVar1 = this._tipPanel;
				if (pUVar1 != null) {
					pUVar2 = pUVar1._label;
					pMVar6 = (MethodInfo)TipPanel.RandomTipText(ref pUVar1.currentTipIndex);
					if (pUVar2 != null) {
						method_00 = pUVar2.klass;
						pUVar2.set_text(pMVar6, (method_00.vtable)._75_set_text.method, (IntPtr)method_00);
						pUVar1 = this._tipPanel;
						if (pUVar1 != null) {
							pUVar5 = pUVar1.gameObject;
							if (pUVar5 != null) {
								pUVar5.SetActive(true);
								pUVar3 = this._backgroundPanel;
								if (pUVar3 != null) {
									pUVar3.SetRandomBackground(true, false);
									pUVar3 = this._backgroundPanel;
									if (immediate) {
										if (pUVar3 == null) goto label_05d560ad;
										pUVar3.ShowImmediate();
									}
									else {
										if (pUVar3 == null) goto label_05d560ad;
										pUVar3.Show();
									}
									this.UpdateLoading(0.0, false, immediate);
									return;
								}
							}
						}
					}
				}
			}
		}
	label_05d560ad: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050DE")]
	[Address(RVA = "0x5C56290", Offset = "0x5C55290", VA = "0x5C56290")]
	public void Hide()
	{
		// Lifted from source/cpp/UI/LoadingMenu.c (UI.LoadingMenu$$Hide): clean
		TipPanel __this_00;
		LoadingProgressPanel pUVar1;
		LoadingBackgroundPanel pUVar2;
		GameObject __this_01;

		__this_00 = this._tipPanel;
		if (__this_00 != null) {
			__this_01 = __this_00.gameObject;
			if (__this_01 != null) {
				__this_01.SetActive(false);
				pUVar1 = this._progessPanel;
				if (pUVar1 != null) {
					pUVar1.Hide();
					pUVar2 = this._backgroundPanel;
					if (pUVar2 != null) {
						pUVar2.Hide();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050DF")]
	[Address(RVA = "0x5C56100", Offset = "0x5C55100", VA = "0x5C56100")]
	public void UpdateLoading(float percentage, bool finished = false, bool immediate = false)
	{
		// Lifted from source/cpp/UI/LoadingMenu.c (UI.LoadingMenu$$UpdateLoading): 3 lines keep C-only constructs
		byte bVar1;
		LoadingProgressPanel __this_00;
		InGameMenu __this_01;
		LoadingMenu.d__8<WaitAndHide> __this_02;
		undefined7 in_register_00000031;
		MethodInfo method_00;
		float fVar2;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, finished);
		fVar2 = 1.0;
		if (percentage <= 1.0) {
			fVar2 = percentage;
		}
		fVar2 = (float)(-(uint)(0.0 <= percentage) & (uint)fVar2);
		__this_00 = this._progessPanel;
		if (immediate) {
			if (__this_00 == null) goto label_05d56279;
			__this_00.SetProgress(fVar2);
			__this_00.ShowImmediate();
		}
		else {
			if (__this_00 == null) goto label_05d56279;
			__this_00.SetProgress(fVar2);
			__this_00.Show();
		}
		if (!finished) {
			return;
		}
		if (((typeof(UIManager))._2).cctor_finished_or_no_cctor == 0) {
		}
		__this_01 = (InGameMenu)UIManager.CurrentMenu;
		if (__this_01 != null) {
			bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
			if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
				throw new InvalidCastException();
			}
			__this_01.OnFinishLoading();
			__this_02 = new LoadingMenu.d__8<WaitAndHide>();
			__this_02.__1__state = 0;
			__this_02.__4__this = this;
			this.StartCoroutine((IEnumerator)__this_02);
			return;
		}
	label_05d56279: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050E0")]
	[Address(RVA = "0x5C56340", Offset = "0x5C55340", VA = "0x5C56340")]
	[IteratorStateMachine(typeof(_003CWaitAndHide_003Ed__8))]
	private IEnumerator WaitAndHide()
	{
		// Lifted from source/cpp/UI/LoadingMenu.c (UI.LoadingMenu$$WaitAndHide): clean
		LoadingMenu.d__8<WaitAndHide> __this_00;

		__this_00 = new LoadingMenu.d__8<WaitAndHide>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60050E1")]
	[Address(RVA = "0x5C563D0", Offset = "0x5C553D0", VA = "0x5C563D0")]
	public LoadingMenu()
	{
		// Lifted from source/cpp/UI/LoadingMenu.c (UI.LoadingMenu$$.ctor): clean
		base();
		return;
	}
}
