// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Search;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000CD")]
public sealed class AottgSearchPaletteControl : MonoBehaviour
{
	[Token(Token = "0x20000D0")]
	[CompilerGenerated]
	private sealed class _003CScopedScreens_003Ed__39 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000438")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000439")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private string _003C_003E2__current;

		[Token(Token = "0x400043A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400043B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AottgSearchPaletteControl _003C_003E4__this;

		[Token(Token = "0x400043C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private IEnumerator<string> _003C_003E7__wrap1;

		[Token(Token = "0x170000A5")]
		private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
		{
			[Token(Token = "0x600067C")]
			[Address(RVA = "0x529B3D0", Offset = "0x529A3D0", VA = "0x529B3D0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$System.Collections.Generic.IEnumerator<System.String>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170000A6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600067E")]
			[Address(RVA = "0x529B420", Offset = "0x529A420", VA = "0x529B420", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$System.Collections.IEnumerator.get_Current): clean
				return (object)this.__2__current;
			}
		}

		[Token(Token = "0x6000678")]
		[Address(RVA = "0x529AC50", Offset = "0x5299C50", VA = "0x529AC50")]
		[DebuggerHidden]
		public _003CScopedScreens_003Ed__39(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x6000679")]
		[Address(RVA = "0x529AE00", Offset = "0x5299E00", VA = "0x529AE00", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$System.IDisposable.Dispose): clean
			int iVar1;
			object obj;

			iVar1 = this.__1__state;
			if ((iVar1 == 2) || (iVar1 == -3)) {
				this.__1__state = -1;
				obj = (object)this.__7__wrap1;
				if (obj != null) {
					obj.Dispose();
					return;
				}
			}
			return;
		}

		[Token(Token = "0x600067A")]
		[Address(RVA = "0x529AEB0", Offset = "0x5299EB0", VA = "0x529AEB0", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$MoveNext): 20 lines keep C-only constructs
			int iVar1;
			uint uVar2;
			AottgSearchPaletteControl pGVar3;
			Il2CppRuntimeInterfaceOffsetPair pIVar4;
			MethodInfo pMVar5;
			AottgSearchPaletteControl.d__39<ScopedScreens> pGVar6;
			AottgSearchPaletteControl.d__39<ScopedScreens>* ppGVar7;
			bool bVar8;
			Il2CppClass pIVar9;
			VirtualInvokeData pVVar10;
			object pIVar11;
			String value;
			ulong uVar12;
			AottgSearchPaletteControl.d__39<ScopedScreens> pGVar13;
			String[] obj;
			int iVar14;
			long lVar15;
			AottgSearchPaletteControl.d__39<ScopedScreens> pGStack_38;
			byte puStack_28;

			pGStack_38 = this;
			puStack_28 = (byte)&pGStack_38;
			pGVar13 = &this.fields;
			iVar1 = this.__1__state;
			ppGVar7 = &pGStack_38;
			if (iVar1 != 2) {
				pGVar3 = this.__4__this;
				if (iVar1 == 1) {
					pGVar13.__1__state = -1;
					ppGVar7 = &pGStack_38;
					if (pGVar3 == null) {
						throw new NullReferenceException();
					}
				}
				else {
					if (iVar1 != 0) {
						return false;
					}
					pGVar13.__1__state = -1;
					if (pGVar3 == null) {
						puStack_28 = (byte)&pGStack_38;
						throw new NullReferenceException();
					}
					puStack_28 = (byte)&pGStack_38;
					bVar8 = String.IsNullOrEmpty(pGVar3._scopeScreenId);
					ppGVar7 = (AottgSearchPaletteControl.d__39<ScopedScreens>*)puStack_28;
					if (!bVar8) {
						pGStack_38.__2__current = pGVar3._scopeScreenId;
						iVar14 = 1;
						goto label_0539b1da;
					}
				}
				puStack_28 = (byte)ppGVar7;
				pGVar6 = pGStack_38;
				pMVar5 = MethodInfo_System_Linq_Enumerable_Empty_string;
				obj = pGVar3._extraScopeScreenIds;
				if (obj == null) {
					if ((MethodInfo_System_Linq_Enumerable_Empty_string.field7_0x38).methodMetadataHandle == null) {
						il2cpp_codegen_rgctx_method_init(MethodInfo_System_Linq_Enumerable_Empty_string);
						pIVar9 = *(Il2CppClass*)((long)(pMVar5.field7_0x38).methodMetadataHandle + 0x10);
						if (((pIVar9._2).bitflags1 & 1) == 0) goto label_0539afb0;
		label_0539afdc: ;
						uVar2 = (pIVar9._2).cctor_finished_or_no_cctor;
					}
					else {
						pIVar9 = *(Il2CppClass*)((long)(MethodInfo_System_Linq_Enumerable_Empty_string.field7_0x38).methodMetadataHandle + 0x10);
						if (((pIVar9._2).bitflags1 & 1) != 0) goto label_0539afdc;
		label_0539afb0: ;
						pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
						uVar2 = (pIVar9._2).cctor_finished_or_no_cctor;
					}
					if (uVar2 == 0) {
					}
					pIVar9 = (pMVar5.field7_0x38).rgctx_data[2].klass;
					if (((pIVar9._2).bitflags1 & 1) == 0) {
						pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
					}
					obj = *(String[]*)pIVar9.static_fields;
					if (obj == null) {
						throw new NullReferenceException();
					}
				}
				pIVar9 = (obj.obj).klass;
				uVar12 = (ulong)(pIVar9._2).interface_offsets_count;
				pIVar11 = (obj.obj).Dispose();
				if (pGVar6 == null) {
					throw new NullReferenceException();
				}
				pGVar6.__7__wrap1 = (IEnumerator<string>)pIVar11;
				pGVar13 = &pGStack_38.fields;
				ppGVar7 = (AottgSearchPaletteControl.d__39<ScopedScreens>*)puStack_28;
			}
			puStack_28 = (byte)ppGVar7;
			pGVar13.__1__state = -3;
			do {
				pIVar11 = (object)pGStack_38.__7__wrap1;
				if (pIVar11 == null) {
					throw new NullReferenceException();
				}
				pIVar9 = pIVar11.klass;
				uVar12 = (ulong)(pIVar9._2).interface_offsets_count;
				bVar8 = pIVar11.Dispose();
				pGVar6 = pGStack_38;
				if (!bVar8) {
					pGVar6.__1__state = -1;
					pIVar11 = (object)pGVar6.__7__wrap1;
					if (pIVar11 == null) goto label_0539b276;
					pIVar9 = pIVar11.klass;
					uVar12 = (ulong)(pIVar9._2).interface_offsets_count;
					if (uVar12 == 0) goto label_0539b24f;
					pIVar4 = (pIVar9._1).interfaceOffsets;
					lVar15 = 0;
					goto label_0539b240;
				}
				pIVar11 = (object)pGStack_38.__7__wrap1;
				if (pIVar11 == null) {
					throw new NullReferenceException();
				}
				pIVar9 = pIVar11.klass;
				uVar12 = (ulong)(pIVar9._2).interface_offsets_count;
				value = pIVar11.Dispose();
				bVar8 = String.IsNullOrEmpty(value);
			} while (bVar8);
			pGStack_38.__2__current = value;
			iVar14 = 2;
		label_0539b1da: ;
			pGStack_38.__1__state = iVar14;
			return true;
			while (true) {
				lVar15 = lVar15 + 0x10;
				if (!(uVar12 * 0x10 != lVar15)) break;
		label_0539b240: ;
				if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar15) == typeof(IDisposable)) {
					pVVar10 = pIVar9.vtable + *(int)((long)&pIVar4.offset + lVar15);
					goto label_0539b26d;
				}
			}
		label_0539b24f: ;
		label_0539b26d: ;
			pIVar11.Dispose();
		label_0539b276: ;
			pGStack_38.__7__wrap1 = null;
			return false;
		}

		[Token(Token = "0x600067B")]
		[Address(RVA = "0x529B330", Offset = "0x529A330", VA = "0x529B330")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$<>m__Finally1): clean
			object obj;

			this.__1__state = -1;
			obj = (object)this.__7__wrap1;
			if (obj == null) {
				return;
			}
			obj.Dispose();
			return;
		}

		[Token(Token = "0x600067D")]
		[Address(RVA = "0x529B3E0", Offset = "0x529A3E0", VA = "0x529B3E0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ScopedScreens_d__39_System_Collections_IEnum);
			throw (object)__this_00;
		}

		[Token(Token = "0x600067F")]
		[Address(RVA = "0x529B430", Offset = "0x529A430", VA = "0x529B430", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator): 1 lines keep C-only constructs
			int iVar1;
			int iVar2;
			AottgSearchPaletteControl.d__39<ScopedScreens> __this_00;

			if ((this.__1__state == -2) &&(iVar1 = this.__l__initialThreadId, iVar2 = Environment.CurrentManagedThreadId, iVar1 == iVar2)) {
				this.__1__state = 0;
				return (IEnumerator)this;
			}
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSearchPaletteControl.d__39<ScopedScreens>));
			__this_00 = new Object();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
			__this_00.__4__this = this.__4__this;
			return (IEnumerator)__this_00;
		}

		[Token(Token = "0x6000680")]
		[Address(RVA = "0x529B4D0", Offset = "0x529A4D0", VA = "0x529B4D0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<ScopedScreens>d__39$$System.Collections.IEnumerable.GetEnumerator): clean
			IEnumerator pSVar1;

			pSVar1 = this.System.Collections.Generic.IEnumerable<System.String>.GetEnumerator();
			return pSVar1;
		}
	}

	[Token(Token = "0x4000424")]
	private const int VisibleRows = 8;

	[Token(Token = "0x4000425")]
	private const float PointerUnlockDistance = 2f;

	[Token(Token = "0x4000426")]
	private const float PointerUnlockDistanceSqr = 4f;

	[Token(Token = "0x4000427")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private TMP_InputField _input;

	[Token(Token = "0x4000428")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Button _submit;

	[Token(Token = "0x4000429")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private List<GisketchSearchEntry> _results;

	[Token(Token = "0x400042A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private List<GisketchDropdownItemFeedback> _feedback;

	[Token(Token = "0x400042B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private GameObject _popoverContent;

	[Token(Token = "0x400042C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _scopeScreenId;

	[Token(Token = "0x400042D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string[] _extraScopeScreenIds;

	[Token(Token = "0x400042E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool _showFullPath;

	[Token(Token = "0x400042F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
	private bool _hasAnimatedResults;

	[Token(Token = "0x4000430")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5A")]
	private bool _pointerSelectionLocked;

	[Token(Token = "0x4000431")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private Vector2 _pointerLockPosition;

	[Token(Token = "0x4000432")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private int _selectedIndex;

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x5298660", Offset = "0x5297660", VA = "0x5298660")]
	public void Setup(TMP_InputField input, Button submit, [Optional] string scopeScreenId, [Optional][DefaultParameterValue(false)] bool showFullPath, [Optional] string[] extraScopeScreenIds)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Setup): 14 lines keep C-only constructs
		TMP_InputField* targetAddress;
		Button* targetAddress_00;
		TMP_InputField x;
		TMP_InputField.OnChangeEvent __this_00;
		TMP_InputField.SubmitEvent __this_01;
		Button x_00;
		UnityEvent __this_02;
		bool bVar1;
		UnityAction<T0> pUVar2;
		UnityAction __this_03;

		targetAddress = &this._input;
		this._input = input;
		targetAddress_00 = &this._submit;
		this._submit = submit;
		this._scopeScreenId = scopeScreenId;
		this._extraScopeScreenIds = extraScopeScreenIds;
		this._showFullPath = showFullPath;
		x = this._input;
		bVar1 = ((Object)x != null);
		if (bVar1) {
			if (*targetAddress == null) goto label_053988a6;
			__this_00 = ((*targetAddress).fields).m_OnValueChanged;
			pUVar2 = new UnityAction<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_Setup_b__15_0);
			if (__this_00 == null) goto label_053988a6;
			__this_00.AddListener(pUVar2);
			if (*targetAddress == null) goto label_053988a6;
			__this_01 = ((*targetAddress).fields).m_OnSubmit;
			pUVar2 = new UnityAction<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_Setup_b__15_1);
			if (__this_01 == null) goto label_053988a6;
			__this_01.AddListener(pUVar2);
		}
		x_00 = *targetAddress_00;
		bVar1 = ((Object)x_00 != null);
		if (!bVar1) {
			return;
		}
		if (*targetAddress_00 != null) {
			__this_02 = (UnityEvent)((*targetAddress_00).fields).m_OnClick;
			__this_03 = new UnityAction((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_ActivateSelected);
			if (__this_02 != null) {
				__this_02.AddListener(__this_03);
				return;
			}
		}
	label_053988a6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x52988B0", Offset = "0x52978B0", VA = "0x52988B0")]
	private void Start()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Start): clean
		this.FocusInput();
		return;
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x52988C0", Offset = "0x52978C0", VA = "0x52988C0")]
	private void FocusInput()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$FocusInput): 2 lines keep C-only constructs
		TMP_InputField pTVar1;
		Action pSVar2;
		bool bVar3;
		EventSystem pUVar4;
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar5;
		GameObject selected;

		pTVar1 = this._input;
		bVar3 = ((Object)pTVar1 == null);
		if (!bVar3) {
			pUVar4 = EventSystem.current;
			bVar3 = ((Object)pUVar4 == null);
			if (!bVar3) {
				if (Il2CppMethodInitialized_07542bac == false) {
					il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchFocusInputMode)) ;
					Il2CppMethodInitialized_07542bac = true;
				}
				if (Il2CppMethodInitialized_07542884 == false) {
					il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchFocusInputMode)) ;
					Il2CppMethodInitialized_07542884 = true;
				}
				pGVar5 = typeof(GisketchFocusInputMode).static_fields;
				if (pGVar5._Mode_k__BackingField != 0) {
					if (Il2CppMethodInitialized_07542bea == false) {
						Il2CppMethodInitialized_07542bea = true;
						pGVar5 = typeof(GisketchFocusInputMode).static_fields;
					}
					pGVar5._Mode_k__BackingField = 0;
					pSVar2 = pGVar5.Changed;
					if (pSVar2 != null) {
						(*(code)pSVar2.invoke_impl)(pSVar2.method_code);
					}
				}
				pUVar4 = EventSystem.current;
				pTVar1 = this._input;
				if (pTVar1 != null) {
					selected = pTVar1.gameObject;
					if (pUVar4 != null) {
						pUVar4.SetSelectedGameObject(selected);
						pTVar1 = this._input;
						if (pTVar1 != null) {
							pTVar1.Select();
							pTVar1 = this._input;
							if (pTVar1 != null) {
								pTVar1.ActivateInputField();
								return;
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x5298A80", Offset = "0x5297A80", VA = "0x5298A80")]
	private void Update()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Update): clean
		int iVar1;
		TMP_InputField pTVar2;
		Object x;
		List<GisketchSearchEntry> pSVar3;
		bool bVar4;
		EventSystem pUVar5;
		Object y;
		int iVar6;
		int iVar7;

		pTVar2 = this._input;
		bVar4 = ((Object)pTVar2 == null);
		if (!bVar4) {
			pUVar5 = EventSystem.current;
			bVar4 = ((Object)pUVar5 == null);
			if (!bVar4) {
				pUVar5 = EventSystem.current;
				if ((pUVar5 == null) ||(pTVar2 = this._input, pTVar2 == null)) {
	label_05398c5e: ;
					throw new NullReferenceException();
				}
				x = (Object)pUVar5.m_CurrentSelected;
				y = (Object)pTVar2.gameObject;
				bVar4 = (x != y);
				if (!bVar4) {
					bVar4 = Input.GetKeyDown(0x112);
					if (bVar4) {
						iVar7 = this._selectedIndex;
						pSVar3 = this._results;
						if (pSVar3 == null) goto label_05398c5e;
						iVar1 = pSVar3._size;
						iVar6 = 8;
						if (iVar1 < 8) {
							iVar6 = iVar1;
						}
						if (iVar6 != 0) {
							iVar7 = iVar7 + 1;
	label_05398c35: ;
							this._selectedIndex = (iVar7 % iVar6 + iVar6) % iVar6;
							this.RefreshSelection();
							this.RevealSelectedResult();
							return;
						}
					}
					else {
						bVar4 = Input.GetKeyDown(0x111);
						if (bVar4) {
							iVar7 = this._selectedIndex;
							pSVar3 = this._results;
							if (pSVar3 == null) goto label_05398c5e;
							iVar1 = pSVar3._size;
							iVar6 = 8;
							if (iVar1 < 8) {
								iVar6 = iVar1;
							}
							if (iVar6 != 0) {
								iVar7 = iVar7 + -1;
								goto label_05398c35;
							}
						}
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x5298CE0", Offset = "0x5297CE0", VA = "0x5298CE0")]
	internal void OnInputChanged()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$OnInputChanged): 1 lines keep C-only constructs
		Vector3 UVar1;

		this._selectedIndex = 0;
		UVar1 = Input.mousePosition;
		this._pointerSelectionLocked = true;
		this._pointerLockPosition = UVar1._0_8_;
		this.Refresh();
		return;
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x5298D20", Offset = "0x5297D20", VA = "0x5298D20")]
	private void Refresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Refresh): 9 lines keep C-only constructs
		List<GisketchSearchEntry>* targetAddress;
		int iVar1;
		TMP_InputField pTVar2;
		String value;
		GisketchScreenRouter pGVar3;
		GisketchOverlayManager __this_00;
		bool bVar4;
		GisketchUIRoot root;
		String* ppSVar5;
		List<GisketchSearchEntry> pSVar6;
		GisketchNodeDefinition root_00;
		MethodInfo pMVar7;
		GameObject pUVar8;
		int iVar9;
		int iVar10;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;

		root = this.GetComponentInParent<GisketchUIRoot>();
		bVar4 = ((Object)root == null);
		if (!bVar4) {
			if (root == null) goto label_05398f95;
			if ((root._Screens_k__BackingField != null) && (root._Overlays_k__BackingField !=null)) {
				pTVar2 = this._input;
				bVar4 = ((Object)pTVar2 != null);
				if (bVar4) {
					pTVar2 = this._input;
					if (pTVar2 == null) goto label_05398f95;
					ppSVar5 = &pTVar2.m_Text;
				}
				else {
					ppSVar5 = *(String**)(g_data_07556758 + 0xb8);
				}
				value = *ppSVar5;
				bVar4 = String.IsNullOrEmpty(value);
				if (bVar4) {
	label_05398f72: ;
					this.CloseResults(root, false);
					this.FocusInput();
					return;
				}
				pSVar6 = this.Entries(root);
				pSVar6 = GisketchSearchService.Query((IEnumerable<GisketchSearchEntry>)pSVar6, value);
				targetAddress = &this._results;
				this._results = pSVar6;
				pSVar6 = this._results;
				if (pSVar6 != null) {
					if (pSVar6._size == 0) goto label_05398f72;
					iVar1 = this._selectedIndex;
					pMVar7 = extraout_RDX;
					if (Il2CppMethodInitialized_07542b6a == false) {
						Il2CppMethodInitialized_07542b6a = true;
						pSVar6 = *targetAddress;
						pMVar7 = extraout_RDX_00;
						if (pSVar6 == null) goto label_05398f95;
					}
					iVar10 = pSVar6._size;
					iVar9 = 8;
					if (iVar10 < 8) {
						iVar9 = iVar10;
					}
					iVar10 = iVar9 + -1;
					if (iVar1 < iVar9 + -1) {
						iVar10 = iVar1;
					}
					iVar9 = 0;
					if (-1 < iVar1) {
						iVar9 = iVar10;
					}
					this._selectedIndex = iVar9;
					bVar4 = this._hasAnimatedResults;
					this._hasAnimatedResults = true;
					pGVar3 = root._Screens_k__BackingField;
					if (pGVar3 != null) {
						__this_00 = root._Overlays_k__BackingField;
						root_00 = this.ResultsNode(pGVar3._activeId);
						pMVar7 = (MethodInfo)this.gameObject;
						if (__this_00 != null) {
							pUVar8 = __this_00.ShowDynamicPopover("search-palette-results", root_00, (GameObject)pMVar7, false, true, 0.0, bVar4 == false, 0);
							this._popoverContent = pUVar8;
							this.WireResults(this._popoverContent, root);
							return;
						}
					}
				}
	label_05398f95: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x5299F00", Offset = "0x5298F00", VA = "0x5299F00")]
	private void ActivateSelected()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ActivateSelected): clean
		int iVar1;
		uint uVar2;
		uint uVar3;
		GisketchSearchEntry result;
		GisketchUIRoot root;
		uint index;
		List<GisketchSearchEntry> __this_00;

		__this_00 = this._results;
		if (__this_00 == null) {
	label_05399fb4: ;
			throw new NullReferenceException();
		}
		if (__this_00._size == 0) {
			this.Refresh();
			__this_00 = this._results;
			if (__this_00 == null) goto label_05399fb4;
		}
		iVar1 = __this_00._size;
		if (iVar1 < 1) {
			return;
		}
		uVar2 = this._selectedIndex;
		uVar3 = iVar1 - 1;
		if ((int)uVar2 < (int)uVar3) {
			uVar3 = uVar2;
		}
		index = 0;
		if (-1 < (int)uVar2) {
			index = uVar3;
		}
		result = __this_00.get_Item(index);
		root = this.GetComponentInParent<GisketchUIRoot>();
		this.Activate(result, root);
		return;
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x5299250", Offset = "0x5298250", VA = "0x5299250")]
	private GisketchNodeDefinition ResultsNode(string activeScreenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ResultsNode): 5 lines keep C-only constructs
		uint uVar1;
		List<GisketchSearchEntry> pSVar2;
		GisketchNodeDefinition[] pGVar3;
		GisketchNodeDefinition pGVar4;
		GisketchLayoutDefinition __this_00;
		MethodInfo in_RCX;
		uint length;
		MethodInfo pMVar5;
		MethodInfo pMVar6;
		GisketchNodeDefinition* targetAddress;

		if (Il2CppMethodInitialized_07542b6a == false) {
			Il2CppMethodInitialized_07542b6a = true;
			pSVar2 = this._results;
		}
		else {
			pSVar2 = this._results;
		}
		if (pSVar2 != null) {
			uVar1 = pSVar2._size;
			length = 8;
			if ((int)uVar1 < 8) {
				length = uVar1;
			}
			pGVar3 = (GisketchNodeDefinition[])new GisketchNodeDefinition[length];
			if (0 < (int)uVar1) {
				if (pGVar3 == null) {
					this.ResultNode(0, activeScreenId);
					throw new NullReferenceException();
				}
				targetAddress = pGVar3.m_Items;
				pMVar6 = (MethodInfo)0x1;
				if (1 < (int)length) {
					pMVar6 = (MethodInfo)(ulong)length;
				}
				pMVar5 = null;
				do {
					pGVar4 = this.ResultNode((int32_t)pMVar5, activeScreenId);
					in_RCX = (MethodInfo)(ulong)(uint)pGVar3.Length;
					if (in_RCX <= pMVar5) {
						throw new IndexOutOfRangeException();
					}
					*targetAddress = pGVar4;
					pMVar5 = (MethodInfo)((long)&pMVar5.methodPointer + 1);
					targetAddress = targetAddress + 1;
				} while (pMVar6 != pMVar5);
			}
			pGVar4 = new GisketchNodeDefinition();
			if (pGVar4 != null) {
				pGVar4.type = "Panel";
				pGVar4.id = "search-palette-results";
				pGVar4.style = "popover";
				__this_00 = new GisketchLayoutDefinition();
				if (__this_00 != null) {
					__this_00.direction = "Column";
					__this_00.alignItems = "Stretch";
					__this_00.gap = 0.0;
					pGVar4.layout = __this_00;
					pGVar4.children = pGVar3;
					return pGVar4;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x529A070", Offset = "0x5299070", VA = "0x529A070")]
	private GisketchNodeDefinition ResultNode(int index, string activeScreenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ResultNode): clean
		List<GisketchSearchEntry> __this_00;
		GisketchSearchEntry __this_01;
		GisketchNodeDefinition __this_02;
		String pSVar1;
		GisketchMotionDefinition __this_03;
		GisketchLayoutDefinition __this_04;
		GisketchLength __this_05;
		GisketchSearchDefinition __this_06;
		int local_2c;

		local_2c = index;
		__this_00 = this._results;
		if (__this_00 != null) {
			__this_01 = __this_00.get_Item(index);
			__this_02 = new GisketchNodeDefinition();
			if (__this_02 != null) {
				__this_02.type = "Button";
				pSVar1 = local_2c.ToString();
				pSVar1 = String.Concat("search-result-", pSVar1);
				__this_02.id = pSVar1;
				if (__this_01 == null) {
					__this_02.text = (String)**(ulong*)(g_data_07556758 + 0xb8);
					throw new NullReferenceException();
				}
				if (this._showFullPath == false) {
					pSVar1 = __this_01.DisplayTitleFor(activeScreenId);
				}
				else {
					pSVar1 = __this_01.DisplayTitle;
				}
				__this_02.text = pSVar1;
				__this_02.icon = __this_01._Icon_k__BackingField;
				__this_02.hasIcon = true;
				__this_02.style = "searchResultItem";
				__this_03 = new GisketchMotionDefinition();
				if (__this_03 != null) {
					__this_03.preset = "slideDown";
					__this_03.group = "search-results";
					__this_03.duration = 0.12;
					__this_03.stagger = 0.025;
					__this_03.order = local_2c;
					__this_02.enter = __this_03;
					__this_04 = new GisketchLayoutDefinition();
					__this_05 = new GisketchLength();
					if (__this_05 != null) {
						__this_05.value = 100.0;
						__this_05.unit = "percent";
						if (__this_04 != null) {
							__this_04.width = __this_05;
							__this_02.layout = __this_04;
							__this_06 = new GisketchSearchDefinition();
							if (__this_06 != null) {
								__this_06.hidden = true;
								__this_02.search = __this_06;
								return __this_02;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x52994D0", Offset = "0x52984D0", VA = "0x52994D0")]
	private void WireResults(GameObject content, GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$WireResults): 44 lines keep C-only constructs
		int piVar1;
		AottgSearchPaletteControl.c__DisplayClass24_0* targetAddress;
		int length;
		uint uVar2;
		uint uVar3;
		List<GisketchDropdownItemFeedback> pSVar4;
		TMP_InputField pTVar5;
		GisketchUIRoot pGVar6;
		GisketchTheme pGVar7;
		List<GisketchSearchEntry> pSVar8;
		UnityEvent __this_00;
		GisketchScreenRouter pGVar9;
		GisketchDropdownItemFeedback[] pGVar10;
		String query;
		bool bVar11;
		AottgSearchPaletteControl.c__DisplayClass24_0 pGVar12;
		String* ppSVar13;
		AottgSearchPaletteControl.c__DisplayClass24_1 pGVar14;
		GisketchSearchEntry pGVar15;
		Transform pUVar16;
		String pSVar17;
		UnityAction __this_01;
		Func<bool> __this_02;
		String pSVar18;
		MethodInfo pMVar19;
		GameObject __this_03;
		AottgSearchResultSelection pGVar20;
		GisketchUIRoot* targetAddress_00;
		Button x;
		AottgSearchPaletteControl.c__DisplayClass24_1 targetAddress_01;
		GisketchDropdownItemFeedback __this_04;
		float fVar21;
		uint extraout_XMM0_Dc;
		uint uVar22;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint uVar23;
		uint extraout_XMM0_Dd_00;
		float fVar24;
		float fVar25;
		uint uVar26;
		uint uVar27;
		Color UVar28;
		Color fallback;
		Color UStack_c0;
		Object pUStack_b0;
		float fStack_a8;
		float fStack_a4;
		float fStack_a0;
		float fStack_9c;
		ulong uStack_98;
		float fStack_88;
		float fStack_84;
		float fStack_78;
		float fStack_74;
		String pSStack_60;
		String pSStack_58;
		String pSStack_50;
		String pSStack_48;
		String pSStack_40;
		AottgSearchPaletteControl.c__DisplayClass24_0 pGStack_38;

		pUStack_b0 = (Object)content;
		pGVar12 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSearchPaletteControl.c__DisplayClass24_0));
		pGVar12 = new Object();
		if (pGVar12 == null) goto label_05399ecb;
		pGVar12.__4__this = this;
		targetAddress_00 = &pGVar12.root;
		pGVar12.root = root;
		bVar11 = (pUStack_b0 == null);
		if (bVar11) {
			return;
		}
		pSVar4 = this._feedback;
		if (pSVar4 == null) goto label_05399ecb;
		piVar1 = &pSVar4._version;
		*piVar1 = *piVar1 + 1;
		length = pSVar4._size;
		pSVar4._size = 0;
		if (0 < length) {
			Array.Clear((Array)pSVar4._items, 0, length);
		}
		pTVar5 = this._input;
		bVar11 = ((Object)pTVar5 != null);
		pSVar17 = "text";
		if (bVar11) {
			pTVar5 = this._input;
			if (pTVar5 == null) goto label_05399ecb;
			ppSVar13 = &pTVar5.m_Text;
		}
		else {
			ppSVar13 = *(String**)(g_data_07556758 + 0xb8);
		}
		pSStack_40 = *ppSVar13;
		pGVar6 = *targetAddress_00;
		bVar11 = ((Object)pGVar6 != null);
		fVar21 = 1.0;
		UVar28.g = 1.0;
		uVar22 = 0;
		uVar23 = 0;
		fVar24 = fVar21;
		fVar25 = UVar28.g;
		uVar26 = uVar22;
		uVar27 = uVar23;
		if (bVar11) {
			if (pGVar6 == null) goto label_05399ecb;
			pGVar7 = pGVar6._Theme_k__BackingField;
			if (pGVar7 != null) {
				uVar26 = g_data_01005870._8_4_;
				uVar27 = g_data_01005870._12_4_;
				UVar28.b = (float)(int)g_data_01005870;
				UVar28.a = (float)g_data_01005870._4_4_;
				UVar28.r = (float)(int)g_data_01005870;
				UVar28.g = (float)g_data_01005870._4_4_;
				UVar28 = pGVar7.GetColor(pSVar17, UVar28);
				fVar21 = UVar28.r;
				UVar28.g = UVar28.g;
				uVar22 = extraout_XMM0_Dc;
				uVar23 = extraout_XMM0_Dd;
				fVar24 = UVar28.b;
				fVar25 = UVar28.a;
			}
		}
		pSVar17 = "negativeText";
		pGVar6 = *targetAddress_00;
		if (pGVar6 == null) goto label_05399ecb;
		pGVar7 = pGVar6._Theme_k__BackingField;
		uStack_98 = (Transform)CONCAT44(UVar28.g, fVar21);
		fStack_a8 = fVar24;
		fStack_a4 = fVar25;
		fStack_a0 = (float)uVar26;
		fStack_9c = (float)uVar27;
		if (pGVar7 == null) {
	label_05399793: ;
			bVar11 = ((Object)pGVar6 != null);
			fVar21 = 1.0;
			UVar28.g = 1.0;
			uVar22 = 0;
			uVar23 = 0;
			fStack_78 = fVar21;
			fStack_74 = UVar28.g;
			if (bVar11) {
				pGVar7 = pGVar6._Theme_k__BackingField;
				UStack_c0.r = (float)uStack_98;
				UStack_c0.g = uStack_98._4_4_;
				if (pGVar7 == null) goto label_05399828;
				uVar26 = g_data_01005870._8_4_;
				uVar27 = g_data_01005870._12_4_;
				fallback.b = (float)(int)g_data_01005870;
				fallback.a = (float)g_data_01005870._4_4_;
				fallback.r = (float)(int)g_data_01005870;
				fallback.g = (float)g_data_01005870._4_4_;
				UVar28 = pGVar7.GetColor(pSVar17, fallback);
				fVar21 = UVar28.r;
				UVar28.g = UVar28.g;
				uVar22 = extraout_XMM0_Dc_00;
				uVar23 = extraout_XMM0_Dd_00;
				fStack_78 = UVar28.b;
				fStack_74 = UVar28.a;
			}
			UStack_c0.r = (float)uStack_98;
			UStack_c0.g = uStack_98._4_4_;
		}
		else {
			UStack_c0.r = fVar21;
			UStack_c0.g = UVar28.g;
			fStack_78 = fVar24;
			fStack_74 = fVar25;
			if (pGVar7._IsDarkMode_k__BackingField == false) goto label_05399793;
		}
	label_05399828: ;
		UStack_c0.b = fStack_a8;
		UStack_c0.a = fStack_a4;
		fStack_88 = fVar21;
		fStack_84 = UVar28.g;
		pSStack_48 = ColorUtility.ToHtmlStringRGBA(ref UStack_c0);
		fVar21 = fStack_a4 * 0.75;
		UStack_c0.a = 1.0;
		if (fVar21 <= 1.0) {
			UStack_c0.a = fVar21;
		}
		UStack_c0.a = (float)(-(uint)(0.0 <= fVar21) & (uint)UStack_c0.a);
		UStack_c0.r = (float)uStack_98;
		UStack_c0.g = uStack_98._4_4_;
		UStack_c0.b = fStack_a8;
		pSStack_50 = ColorUtility.ToHtmlStringRGBA(ref UStack_c0);
		fStack_a8 = fStack_88;
		fStack_a4 = fStack_84;
		fStack_a0 = fStack_78;
		fStack_9c = fStack_74;
		UStack_c0.r = fStack_88;
		UStack_c0.g = fStack_84;
		UStack_c0.b = fStack_78;
		UStack_c0.a = fStack_74;
		pSStack_58 = ColorUtility.ToHtmlStringRGBA(ref UStack_c0);
		fVar21 = fStack_74 * 0.75;
		UStack_c0.a = 1.0;
		if (fVar21 <= 1.0) {
			UStack_c0.a = fVar21;
		}
		UStack_c0.a = (float)(-(uint)(0.0 <= fVar21) & (uint)UStack_c0.a);
		UStack_c0.r = fStack_88;
		UStack_c0.g = fStack_84;
		UStack_c0.b = fStack_78;
		pSStack_60 = ColorUtility.ToHtmlStringRGBA(ref UStack_c0);
		pSVar8 = this._results;
		if (pSVar8 == null) {
	label_05399ecb: ;
			throw new NullReferenceException();
		}
		fVar21 = (float)pSVar8._size;
		fStack_78 = 1.12104e-44;
		if ((int)fVar21 < 8) {
			fStack_78 = fVar21;
		}
		UStack_c0.r = 0.0;
		if (0 < (int)fVar21) {
			if (pUStack_b0 == null) {
				pGVar14 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSearchPaletteControl.c__DisplayClass24_1));
				pGVar14 = new Object();
				if (pGVar14 != null) {
					pGVar14.CS___8__locals1 = pGVar12;
					pSVar8 = this._results;
					if (pSVar8 != null) {
						pGVar15 = pSVar8.get_Item((int32_t)UStack_c0.r);
						pGVar14.result = pGVar15;
						throw new NullReferenceException();
					}
				}
				goto label_05399ecb;
			}
			pGStack_38 = pGVar12;
			do {
				pGVar12 = pGStack_38;
				pGVar14 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSearchPaletteControl.c__DisplayClass24_1));
				pGVar14 = new Object();
				if (pGVar14 == null) goto label_05399ecb;
				targetAddress = &pGVar14.CS___8__locals1;
				pGVar14.CS___8__locals1 = pGVar12;
				pSVar8 = this._results;
				if (pSVar8 == null) goto label_05399ecb;
				fStack_88 = UStack_c0.r;
				pGVar15 = pSVar8.get_Item((int32_t)UStack_c0.r);
				targetAddress_01 = &pGVar14.fields;
				pGVar14.result = pGVar15;
				pUVar16 = pUStack_b0.transform;
				pSVar17 = UStack_c0.ToString();
				pSVar17 = String.Concat("search-result-", pSVar17);
				pUVar16 = GisketchTransformSearch.FindDeep(pUVar16, pSVar17) ;
				bVar11 = ((Object)pUVar16 != null);
				x = null;
				if (bVar11) {
					if (pUVar16 == null) goto label_05399ecb;
					x = pUVar16.GetComponent<Button>();
				}
				bVar11 = ((Object)x != null);
				if (bVar11) {
					if (x == null) goto label_05399ecb;
					__this_00 = (UnityEvent)x.m_OnClick;
					__this_01 = new UnityAction((object)pGVar14, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_c__DisplayClass24_1_WireResults_b__0);
					if (__this_00 == null) goto label_05399ecb;
					__this_00.AddListener(__this_01);
				}
				bVar11 = ((Object)pUVar16 != null);
				__this_04 = null;
				if (bVar11) {
					if (pUVar16 == null) goto label_05399ecb;
					__this_04 = pUVar16.GetComponent<GisketchDropdownItemFeedback>();
				}
				pMVar19 = null;
				bVar11 = ((Object)__this_04 != null);
				if (bVar11) {
					if (*targetAddress ==null) goto label_05399ecb;
					pGVar6 = ((*targetAddress).fields).root;
					if (pGVar6 == null) goto label_05399ecb;
					pGVar9 = pGVar6._Screens_k__BackingField;
					if (pGVar9 == null) goto label_05399ecb;
					pGVar15 = targetAddress_01.result;
					if (pGVar15 == null) {
						pSVar17 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					else if (this._showFullPath == false) {
						pMVar19 = (MethodInfo)pGVar9._activeId;
						pSVar17 = pGVar15.DisplayTitleFor((String)pMVar19);
					}
					else {
						pMVar19 = null;
						pSVar17 = pGVar15.DisplayTitle;
					}
					uStack_98 = pUVar16;
					if (__this_04 == null) goto label_05399ecb;
					__this_04._hoverText.r = fStack_a8;
					__this_04._hoverText.g = fStack_a4;
					__this_04._hoverText.b = fStack_a0;
					__this_04._hoverText.a = fStack_9c;
					__this_04.Refresh();
					pGVar12 = *targetAddress;
					if (pGVar12 == null) goto label_05399ecb;
					__this_02 = pGVar12.__9__1;
					if (__this_02 == null) {
						__this_02 = new Func<bool>((object)pGVar12, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_c__DisplayClass24_0_WireResults_b__1);
						pGVar12.__9__1 = __this_02;
					}
					__this_04._pointerHoverAllowed = __this_02;
					query = pSStack_40;
					pSVar18 = GisketchSearchService.Markup(targetAddress_01.result, pSStack_40, false, pSStack_48, pSVar17, pSStack_50);
					pMVar19 = (MethodInfo)GisketchSearchService.Markup(targetAddress_01.result, query, true, pSStack_58, pSVar17, pSStack_60);
					if (pSVar18 == null) {
						pSVar18 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					ppSVar13 = &__this_04._normalLabelText;
					__this_04._normalLabelText = pSVar18;
					pUVar16 = uStack_98;
					if (pMVar19 == null) {
						pMVar19 = (MethodInfo)*ppSVar13;
					}
					__this_04._activeLabelText = (String)pMVar19;
					__this_04._normalLabelOwnsColor = true;
					__this_04.Refresh();
					__this_04._forced = fStack_88 == (float)this._selectedIndex;
					__this_04.Refresh();
				}
				pMVar19 = MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_Add;
				pSVar4 = this._feedback;
				if (pSVar4 == null) goto label_05399ecb;
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				pGVar10 = pSVar4._items;
				if (pGVar10 == null) goto label_05399ecb;
				uVar2 = pSVar4._size;
				if (uVar2 < (uint)pGVar10.Length) {
					pSVar4._size = uVar2 + 1;
					pGVar10[(int)uVar2] = __this_04;
					uVar3 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					pSVar4.AddWithResize((object)__this_04);
					uVar3 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				if (uVar3 == 0) {
				}
				bVar11 = ((Object)pUVar16 != null);
				if (bVar11) {
					if (pUVar16 == null) goto label_05399ecb;
					__this_03 = pUVar16.gameObject;
					if (__this_03 == null) goto label_05399ecb;
					pGVar20 = __this_03.AddComponent<AottgSearchResultSelection>();
					if (pGVar20 == null) goto label_05399ecb;
					pGVar20._owner = this;
					pGVar20._index = (int32_t)fStack_88;
				}
				UStack_c0.r = (float)((int)UStack_c0.r + 1);
			} while ((int)UStack_c0.r < (int)fStack_78);
		}
		return;
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x5298C70", Offset = "0x5297C70", VA = "0x5298C70")]
	internal void SelectFromNavigation(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$SelectFromNavigation): clean
		int iVar1;
		List<GisketchSearchEntry> pSVar2;
		int iVar3;

		pSVar2 = this._results;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		iVar1 = pSVar2._size;
		iVar3 = 8;
		if (iVar1 < 8) {
			iVar3 = iVar1;
		}
		if (iVar3 == 0) {
			return;
		}
		this._selectedIndex = (index % iVar3 + iVar3) % iVar3;
		this.RefreshSelection();
		this.RevealSelectedResult();
		return;
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x529A760", Offset = "0x5299760", VA = "0x529A760")]
	internal void SelectFromPointer(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$SelectFromPointer): clean
		Vector2 UVar1;
		int iVar2;
		List<GisketchSearchEntry> pSVar3;
		int iVar4;
		float fVar6;
		float fVar7;
		Vector3 UVar8;

		UVar8 = Input.mousePosition;
		if (this._pointerSelectionLocked != false) {
			UVar1 = this._pointerLockPosition;
			fVar6 = UVar8.x - UVar1.x;
			fVar7 = UVar8.y - UVar1.y;
			if (fVar7 * fVar7 + fVar6 * fVar6 < 4.0) {
				return;
			}
			this._pointerSelectionLocked = false;
		}
		pSVar3 = this._results;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		iVar2 = pSVar3._size;
		iVar4 = 8;
		if (iVar2 < 8) {
			iVar4 = iVar2;
		}
		if (iVar4 == 0) {
			return;
		}
		this._selectedIndex = (index % iVar4 + iVar4) % iVar4;
		this.RefreshSelection();
		this.RevealSelectedResult();
		return;
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x529A810", Offset = "0x5299810", VA = "0x529A810")]
	internal void SelectFromPointer(int index, Vector2 pointerPosition)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$SelectFromPointer): clean
		Vector2 UVar1;
		int iVar2;
		List<GisketchSearchEntry> pSVar3;
		int iVar4;
		float fVar6;
		float fVar7;

		if (this._pointerSelectionLocked != false) {
			UVar1 = this._pointerLockPosition;
			fVar6 = pointerPosition.x - UVar1.x;
			fVar7 = pointerPosition.y - UVar1.y;
			if (fVar7 * fVar7 + fVar6 * fVar6 < 4.0) {
				return;
			}
			this._pointerSelectionLocked = false;
		}
		pSVar3 = this._results;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		iVar2 = pSVar3._size;
		iVar4 = 8;
		if (iVar2 < 8) {
			iVar4 = iVar2;
		}
		if (iVar4 == 0) {
			return;
		}
		this._selectedIndex = (index % iVar4 + iVar4) % iVar4;
		this.RefreshSelection();
		this.RevealSelectedResult();
		return;
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x529A8B0", Offset = "0x52998B0", VA = "0x529A8B0")]
	internal bool CanUsePointerSelection(Vector2 pointerPosition)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$CanUsePointerSelection): clean
		Vector2 UVar1;
		float fVar2;
		float fVar3;

		if (this._pointerSelectionLocked != false) {
			UVar1 = this._pointerLockPosition;
			fVar2 = pointerPosition.x - UVar1.x;
			fVar3 = pointerPosition.y - UVar1.y;
			if (fVar3 * fVar3 + fVar2 * fVar2 < 4.0) {
				return false;
			}
			this._pointerSelectionLocked = false;
		}
		return true;
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x5298D10", Offset = "0x5297D10", VA = "0x5298D10")]
	internal void LockPointerSelection(Vector2 pointerPosition)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$LockPointerSelection): clean
		this._pointerSelectionLocked = true;
		this._pointerLockPosition = pointerPosition;
		return;
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x529A410", Offset = "0x5299410", VA = "0x529A410")]
	private static Color ThemeColor(GisketchUIRoot root, string token, Color fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ThemeColor): clean
		GisketchTheme __this;
		bool bVar1;
		float fVar2;
		Color UVar3;

		bVar1 = ((Object)root != null);
		if (bVar1) {
			UVar3.b = fallback.b;
			UVar3.a = fallback.a;
			fVar2 = fallback.r;
			UVar3.g = fallback.g;
			if (root == null) {
				throw new NullReferenceException();
			}
			__this = root._Theme_k__BackingField;
			if (__this != null) {
				UVar3 = __this.GetColor(token, fallback);
				UVar3.b = UVar3.b;
				UVar3.a = UVar3.a;
				fVar2 = UVar3.r;
				UVar3.g = UVar3.g;
			}
			UVar3.g = UVar3.g;
			UVar3.r = fVar2;
			UVar3.a = UVar3.a;
			UVar3.b = UVar3.b;
			return (Color)UVar3;
		}
		return (Color)fallback;
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x529A4B0", Offset = "0x52994B0", VA = "0x529A4B0")]
	private static Color WithAlpha(Color color, float alpha)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$WithAlpha): 1 lines keep C-only constructs
		float fVar1;
		Color UVar2;

		UVar2._0_8_ = color._0_8_;
		fVar1 = 1.0;
		if (alpha <= 1.0) {
			fVar1 = alpha;
		}
		UVar2.a = (float)((uint)fVar1 & -(uint)(0.0 <= alpha));
		UVar2.b = color.b;
		return (Color)UVar2;
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x5299210", Offset = "0x5298210", VA = "0x5299210")]
	private int VisibleResultCount()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$VisibleResultCount): clean
		int iVar1;
		List<GisketchSearchEntry> pSVar2;
		int iVar3;

		pSVar2 = this._results;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		iVar1 = pSVar2._size;
		if (iVar1 < 8) {
		}
		return iVar3;
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x529A5B0", Offset = "0x52995B0", VA = "0x529A5B0")]
	private void RefreshSelection()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$RefreshSelection): clean
		bool bVar1;
		GisketchDropdownItemFeedback pGVar2;
		uint index;
		List<GisketchDropdownItemFeedback> pSVar3;

		pSVar3 = this._feedback;
		if (pSVar3 != null) {
			index = 0;
			do {
				if (pSVar3._size <= (int)index) {
					return;
				}
				pGVar2 = pSVar3.get_Item(index);
				bVar1 = ((Object)pGVar2 != null);
				if (bVar1) {
					pSVar3 = this._feedback;
					if (pSVar3 == null) break;
					pGVar2 = pSVar3.get_Item(index);
					if (pGVar2 == null) break;
					pGVar2._forced = index == this._selectedIndex;
					pGVar2.Refresh();
				}
				index = index + 1;
				pSVar3 = this._feedback;
			} while (pSVar3 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x529A690", Offset = "0x5299690", VA = "0x529A690")]
	private void RevealSelectedResult()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$RevealSelectedResult): clean
		int index;
		List<GisketchDropdownItemFeedback> pSVar1;
		bool bVar2;
		GisketchDropdownItemFeedback pGVar3;
		GameObject focused;

		index = this._selectedIndex;
		if (-1 < index) {
			pSVar1 = this._feedback;
			if (pSVar1 == null) {
	label_0539a759: ;
				throw new NullReferenceException();
			}
			if (index < pSVar1._size) {
				pGVar3 = pSVar1.get_Item(index);
				bVar2 = ((Object)pGVar3 == null);
				if (!bVar2) {
					pSVar1 = this._feedback;
					if (pSVar1 != null) {
						pGVar3 = pSVar1.get_Item(this._selectedIndex);
						if (pGVar3 != null) {
							focused = pGVar3.gameObject;
							GisketchScrollFocus.Reveal(focused, 12.0);
							return;
						}
					}
					goto label_0539a759;
				}
			}
		}
		return;
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x5299FC0", Offset = "0x5298FC0", VA = "0x5299FC0")]
	private void Activate(GisketchSearchEntry result, GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Activate): clean
		GisketchOverlayManager __this_00;
		bool bVar1;

		if (result != null) {
			bVar1 = ((Object)root == null);
			if (!bVar1) {
				if (root != null) {
					if (root._Overlays_k__BackingField ==null) {
						return;
					}
					this.CloseResults(root, false);
					__this_00 = root._Overlays_k__BackingField;
					if (__this_00 != null) {
						__this_00.CloseTop(false);
						GisketchSearchActivator.Activate(result, root);
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x5298FA0", Offset = "0x5297FA0", VA = "0x5298FA0")]
	private void CloseResults(GisketchUIRoot root, bool restoreFocus = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$CloseResults): 2 lines keep C-only constructs
		Object x;
		GisketchOverlayManager __this_00;
		bool bVar1;
		GameObject* targetAddress;

		x = (Object)this._popoverContent;
		bVar1 = (x == null);
		if (!bVar1) {
			bVar1 = ((Object)root == null);
			if (!bVar1) {
				if (root != null) {
					if (root._Overlays_k__BackingField ==null) {
						return;
					}
					targetAddress = &this._popoverContent;
					*targetAddress = null;
					__this_00 = root._Overlays_k__BackingField;
					if (__this_00 != null) {
						__this_00.CloseTop(restoreFocus);
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x529A3C0", Offset = "0x52993C0", VA = "0x529A3C0")]
	private string TitleFor(GisketchSearchEntry result, string activeScreenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$TitleFor): clean
		String pSVar1;

		if (result == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (this._showFullPath == false) {
			return pSVar1;
		}
		return pSVar1;
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x5299070", Offset = "0x5298070", VA = "0x5299070")]
	private List<GisketchSearchEntry> Entries(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Entries): 1 lines keep C-only constructs
		String[] pSVar1;
		GisketchManifestDefinition manifest;
		GisketchScreenRouter pGVar2;
		String activeScreenId;
		GisketchView pGVar3;
		bool bVar4;
		int iVar5;
		AottgSearchPaletteControl.d__39<ScopedScreens> __this_00;
		List<GisketchSearchEntry> pSVar6;
		List<GisketchSearchEntry> live;

		bVar4 = ((Object)root == null);
		if (bVar4) {
	label_0539918d: ;
			pSVar6 = new List<GisketchSearchEntry>();
			return pSVar6;
		}
		if (root != null) {
			if (root._Screens_k__BackingField == null) goto label_0539918d;
			bVar4 = String.IsNullOrEmpty(this._scopeScreenId);
			if ((!bVar4) ||((pSVar1 = this._extraScopeScreenIds, pSVar1 != null &&(pSVar1.Length != 0)))) {
				manifest = root._Manifest_k__BackingField;
				__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSearchPaletteControl.d__39<ScopedScreens>)) ;
				__this_00 = new Object();
				__this_00.__1__state = -2;
				iVar5 = Environment.CurrentManagedThreadId;
				__this_00.__l__initialThreadId = iVar5;
				__this_00.__4__this = this;
				pSVar6 = GisketchSearchIndex.EntriesForScreens(manifest, (IEnumerable<string>)__this_00, false);
				return pSVar6;
			}
			pGVar2 = root._Screens_k__BackingField;
			if (pGVar2 != null) {
				activeScreenId = pGVar2._activeId;
				pSVar6 = GisketchSearchIndex.EntriesFor(root._Manifest_k__BackingField, activeScreenId);
				pGVar2 = root._Screens_k__BackingField;
				if (pGVar2 != null) {
					pGVar3 = pGVar2._active;
					if (pGVar3 == null) {
						live = null;
					}
					else {
						live = pGVar3._SearchEntries_k__BackingField;
					}
					pSVar6 = GisketchSearchResults.Merge((IEnumerable<GisketchSearchEntry>)pSVar6, (IEnumerable<GisketchSearchEntry>)live, activeScreenId);
					return pSVar6;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x529ABE0", Offset = "0x5299BE0", VA = "0x529ABE0")]
	[IteratorStateMachine(typeof(_003CScopedScreens_003Ed__39))]
	private IEnumerable<string> ScopedScreens()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ScopedScreens): 1 lines keep C-only constructs
		int iVar1;
		AottgSearchPaletteControl.d__39<ScopedScreens> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSearchPaletteControl.d__39<ScopedScreens>));
		__this_00 = new Object();
		__this_00.__1__state = -2;
		iVar1 = Environment.CurrentManagedThreadId;
		__this_00.__l__initialThreadId = iVar1;
		__this_00.__4__this = this;
		return (IEnumerable<string>)__this_00;
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x529AC80", Offset = "0x5299C80", VA = "0x529AC80")]
	public AottgSearchPaletteControl()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c (Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$.ctor): 1 lines keep C-only constructs
		List<GisketchSearchEntry> __this_00;
		List<GisketchDropdownItemFeedback> __this_01;

		__this_00 = new List<GisketchSearchEntry>();
		this._results = __this_00;
		__this_01 = il2cpp_codegen_object_new(typeof(List<GisketchDropdownItemFeedback>)) ;
		__this_01 = new List<object>();
		this._feedback = __this_01;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchPaletteControl.c.

	// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass24_0$$.ctor: clean
	private void c__DisplayClass24_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass24_1$$.ctor: clean
	private void c__DisplayClass24_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$<Setup>b__15_0: 1 lines keep C-only constructs
	private void Setup_b__15_0(String __)
	{
		Vector3 UVar1;

		this._selectedIndex = 0;
		UVar1 = Input.mousePosition;
		this._pointerSelectionLocked = true;
		this._pointerLockPosition = UVar1._0_8_;
		this.Refresh();
		return;
	}

	// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$<Setup>b__15_1: clean
	private void Setup_b__15_1(String __)
	{
		this.ActivateSelected(__);
		return;
	}

	// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass24_0$$<WireResults>b__1: clean
	private bool c__DisplayClass24_0__WireResults_b__1()
	{
		Vector2 UVar1;
		AottgSearchPaletteControl pGVar2;
		float fVar3;
		float fVar4;
		Vector3 UVar5;

		pGVar2 = this.__4__this;
		UVar5 = Input.mousePosition;
		if (pGVar2 == null) {
			throw new NullReferenceException();
		}
		if (pGVar2._pointerSelectionLocked != false) {
			UVar1 = pGVar2._pointerLockPosition;
			fVar3 = UVar5.x - UVar1.x;
			fVar4 = UVar5.y - UVar1.y;
			if (fVar4 * fVar4 + fVar3 * fVar3 < 4.0) {
				return false;
			}
			pGVar2._pointerSelectionLocked = false;
		}
		return true;
	}

	// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass24_1$$<WireResults>b__0: clean
	private void c__DisplayClass24_1__WireResults_b__0()
	{
		MethodInfo method_00;

		method_00 = (MethodInfo)this.CS___8__locals1;
		if ((method_00 == null) ||((AottgSearchPaletteControl)method_00.invoker_method ==null)) {
			throw new NullReferenceException();
		}
		(method_00.invoker_method).Activate(this.result, (GisketchUIRoot)method_00.name);
		return;
	}
}
