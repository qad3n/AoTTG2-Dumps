// ==================== AoTTG2 cross-reference ====================
// Type: UI.CollapsibleToggleSection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CollapsibleToggleSection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007D8")]
internal class CollapsibleToggleSection : MonoBehaviour
{
	[Token(Token = "0x4002769")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Text _arrowText;

	[Token(Token = "0x400276A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Toggle _enableToggle;

	[Token(Token = "0x400276B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _title;

	[Token(Token = "0x400276C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool _expanded;

	[Token(Token = "0x400276D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly List<GameObject> _children;

	[Token(Token = "0x17000D41")]
	public bool IsExpanded
	{
		[Token(Token = "0x6004BAE")]
		[Address(RVA = "0x5BE7F30", Offset = "0x5BE6F30", VA = "0x5BE7F30")]
		get
		{
			// Lifted from source/cpp/UI/CollapsibleToggleSection.c (UI.CollapsibleToggleSection$$get_IsExpanded): clean
			return this._expanded;
		}
	}

	[Token(Token = "0x17000D42")]
	public bool IsEnabled
	{
		[Token(Token = "0x6004BAF")]
		[Address(RVA = "0x5BE7F40", Offset = "0x5BE6F40", VA = "0x5BE7F40")]
		get
		{
			// Lifted from source/cpp/UI/CollapsibleToggleSection.c (UI.CollapsibleToggleSection$$get_IsEnabled): clean
			Toggle pUVar1;
			bool bVar2;
			bool bVar3;

			pUVar1 = this._enableToggle;
			bVar2 = ((Object)pUVar1 != null);
			if (bVar2) {
				pUVar1 = this._enableToggle;
				if (pUVar1 == null) {
					throw new NullReferenceException();
				}
				bVar3 = pUVar1.m_IsOn != false;
			}
			return bVar3;
		}
	}

	[Token(Token = "0x6004BB0")]
	[Address(RVA = "0x5BE7FC0", Offset = "0x5BE6FC0", VA = "0x5BE7FC0")]
	public void Setup(Text arrowButtonText, Button arrowButton, Toggle enableToggle, string title, bool startEnabled, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onToggleChanged)
	{
		// Lifted from source/cpp/UI/CollapsibleToggleSection.c (UI.CollapsibleToggleSection$$Setup): 10 lines keep C-only constructs
		Toggle* targetAddress;
		UnityEvent __this_00;
		Toggle x;
		UnityEngine_Events_UnityEvent_bool__o __this_01;
		bool bVar1;
		CollapsibleToggleSection.c__DisplayClass9_0 __this_02;
		UnityAction __this_03;
		UnityAction<T0> call;

		__this_02 = new CollapsibleToggleSection.c__DisplayClass9_0();
		if (__this_02 == null) goto label_05ce81ea;
		__this_02.onToggleChanged = onToggleChanged;
		this._arrowText = arrowButtonText;
		targetAddress = &this._enableToggle;
		this._enableToggle = enableToggle;
		this._title = title;
		this._expanded = startExpanded;
		bVar1 = ((Object)arrowButton != null);
		if (bVar1) {
			if (arrowButton == null) goto label_05ce81ea;
			__this_00 = (UnityEvent)arrowButton.m_OnClick;
			__this_03 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CollapsibleToggleSection_ToggleExpand);
			if (__this_00 == null) goto label_05ce81ea;
			__this_00.AddListener(__this_03);
		}
		x = *targetAddress;
		call = null;
		bVar1 = ((Object)x != null);
		if (bVar1) {
			if (*targetAddress != null) {
				(*targetAddress).isOn = startEnabled;
				if (*targetAddress != null) {
					__this_01 = (UnityEngine_Events_UnityEvent_bool__o)((*targetAddress).fields).onValueChanged;
					call = new UnityAction<bool>((object)__this_02, (intptr_t)MethodInfo_UI_CollapsibleToggleSection_c__DisplayClass9_0_Setup_b__0);
					if (__this_01 != null) {
						__this_01.AddListener(call);
						goto label_05ce81d4;
					}
				}
			}
	label_05ce81ea: ;
			throw new NullReferenceException();
		}
	label_05ce81d4: ;
		this.UpdateArrow();
		return;
	}

	[Token(Token = "0x6004BB1")]
	[Address(RVA = "0x5BE82C0", Offset = "0x5BE72C0", VA = "0x5BE82C0")]
	public void AddChild(GameObject child)
	{
		// Lifted from source/cpp/UI/CollapsibleToggleSection.c (UI.CollapsibleToggleSection$$AddChild): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<GameObject> __this_00;
		GameObject[] pUVar3;
		bool bVar5;

		bVar5 = ((Object)child == null);
		if (bVar5) {
			return;
		}
		__this_00 = this._children;
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pUVar3 = __this_00._items;
			if (pUVar3 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pUVar3.Length) {
					__this_00._size = uVar2 + 1;
					pUVar3[(int)uVar2] = child;
				}
				else {
					__this_00.AddWithResize((object)child);
				}
				if (child != null) {
					child.SetActive(this._expanded);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BB2")]
	[Address(RVA = "0x5BE83A0", Offset = "0x5BE73A0", VA = "0x5BE83A0")]
	public void ToggleExpand()
	{
		// Lifted from source/cpp/UI/CollapsibleToggleSection.c (UI.CollapsibleToggleSection$$ToggleExpand): 4 lines keep C-only constructs
		bool pbVar1;
		List<GameObject> __this_00;
		object x;
		bool bVar2;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		pbVar1 = &this._expanded;
		*pbVar1 = (bool)(*pbVar1 ^ 1);
		this.UpdateArrow();
		__this_00 = this._children;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_58 = __this_00.GetEnumerator();
		local_30 = (byte)&local_58;
		while(true) {
			do {
				bVar2 = local_58.MoveNext();
				x = local_58._current;
				if (!bVar2) {
					local_58.Dispose();
					return;
				}
				bVar2 = ((Object)x != null);
			} while (!bVar2);
			if ((Object)x == null) break;
			x.SetActive(this._expanded);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BB3")]
	[Address(RVA = "0x5BE8540", Offset = "0x5BE7540", VA = "0x5BE8540")]
	public void SetEnabled(bool enabled)
	{
		// Lifted from source/cpp/UI/CollapsibleToggleSection.c (UI.CollapsibleToggleSection$$SetEnabled): clean
		Toggle pUVar1;
		bool bVar2;

		pUVar1 = this._enableToggle;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._enableToggle;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.isOn = enabled;
			return;
		}
		return;
	}

	[Token(Token = "0x6004BB4")]
	[Address(RVA = "0x5BE8200", Offset = "0x5BE7200", VA = "0x5BE8200")]
	private void UpdateArrow()
	{
		// Lifted from source/cpp/UI/CollapsibleToggleSection.c (UI.CollapsibleToggleSection$$UpdateArrow): 2 lines keep C-only constructs
		Text pUVar1;
		bool bVar2;
		String* ppSVar3;
		String pSVar4;

		pUVar1 = this._arrowText;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._arrowText;
			if (this._expanded == false) {
				ppSVar3 = &"\xe2\x96\xba ";
			}
			else {
				ppSVar3 = &"\xe2\x96\xbc ";
			}
			pSVar4 = String.Concat(*ppSVar3, this._title);
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.set_text(pSVar4);
			return;
		}
		return;
	}

	[Token(Token = "0x6004BB5")]
	[Address(RVA = "0x5BE85C0", Offset = "0x5BE75C0", VA = "0x5BE85C0")]
	public CollapsibleToggleSection()
	{
		// Lifted from source/cpp/UI/CollapsibleToggleSection.c (UI.CollapsibleToggleSection$$.ctor): clean
		List<GameObject> __this_00;

		this._expanded = true;
		__this_00 = new List<GameObject>();
		this._children = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CollapsibleToggleSection.c.

	// UI.CollapsibleToggleSection.<>c__DisplayClass9_0$$.ctor: clean
	private void c__DisplayClass9_0__ctor()
	{
		base();
		return;
	}

	// UI.CollapsibleToggleSection.<>c__DisplayClass9_0$$<Setup>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass9_0__Setup_b__0(bool val)
	{
		Action<bool> pSVar1;
		code *vtableDispatch;

		pSVar1 = this.onToggleChanged;
		if (pSVar1 == null) {
			return;
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,val,pSVar1.method,vtableDispatch);
		return;
	}
}
