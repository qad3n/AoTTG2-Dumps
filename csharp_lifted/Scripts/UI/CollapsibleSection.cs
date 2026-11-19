// ==================== AoTTG2 cross-reference ====================
// Type: UI.CollapsibleSection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CollapsibleSection.c
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

[Token(Token = "0x20007D7")]
internal class CollapsibleSection : MonoBehaviour
{
	[Token(Token = "0x4002764")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Text _headerText;

	[Token(Token = "0x4002765")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string _title;

	[Token(Token = "0x4002766")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool _expanded;

	[Token(Token = "0x4002767")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Action<bool> _onExpandedChanged;

	[Token(Token = "0x4002768")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly List<GameObject> _children;

	[Token(Token = "0x17000D40")]
	public bool IsExpanded
	{
		[Token(Token = "0x6004BA7")]
		[Address(RVA = "0x5BE77E0", Offset = "0x5BE67E0", VA = "0x5BE77E0")]
		get
		{
			// Lifted from source/cpp/UI/CollapsibleSection.c (UI.CollapsibleSection$$get_IsExpanded): clean
			return this._expanded;
		}
	}

	[Token(Token = "0x6004BA8")]
	[Address(RVA = "0x5BE77F0", Offset = "0x5BE67F0", VA = "0x5BE77F0")]
	public void Setup(string title, ElementStyle style, [Optional][DefaultParameterValue(true)] bool startExpanded, [Optional] Action<bool> onExpandedChanged)
	{
		// Lifted from source/cpp/UI/CollapsibleSection.c (UI.CollapsibleSection$$Setup): 4 lines keep C-only constructs
		Text* targetAddress;
		uint value;
		UnityEvent __this_00;
		bool bVar1;
		Button x;
		UnityAction __this_01;
		Text pUVar2;

		this._title = title;
		this._expanded = startExpanded;
		this._onExpandedChanged = onExpandedChanged;
		x = this.GetComponent<Button>();
		bVar1 = ((Object)x != null);
		if (bVar1) {
			if (x == null) goto label_05ce7977;
			__this_00 = (UnityEvent)x.m_OnClick;
			__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CollapsibleSection_Toggle);
			if (__this_00 == null) goto label_05ce7977;
			__this_00.AddListener(__this_01);
		}
		pUVar2 = this.GetComponent<Text>();
		targetAddress = &this._headerText;
		this._headerText = pUVar2;
		pUVar2 = this._headerText;
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			if ((style == null) ||(pUVar2 = *targetAddress, pUVar2 == null)) {
	label_05ce7977: ;
				throw new NullReferenceException();
			}
			value = style.FontSize;
			pUVar2.fontSize = value;
		}
		this.UpdateHeader();
		return;
	}

	[Token(Token = "0x6004BA9")]
	[Address(RVA = "0x5BE7A40", Offset = "0x5BE6A40", VA = "0x5BE7A40")]
	public void AddChild(GameObject child)
	{
		// Lifted from source/cpp/UI/CollapsibleSection.c (UI.CollapsibleSection$$AddChild): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<GameObject> __this_00;
		GameObject[] pUVar3;
		bool bVar5;

		bVar5 = ((Object)child != null);
		if (bVar5) {
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
		return;
	}

	[Token(Token = "0x6004BAA")]
	[Address(RVA = "0x5BE7B20", Offset = "0x5BE6B20", VA = "0x5BE7B20")]
	public void Toggle()
	{
		// Lifted from source/cpp/UI/CollapsibleSection.c (UI.CollapsibleSection$$Toggle): 4 lines keep C-only constructs
		bool pbVar1;
		List<GameObject> __this_00;
		Action<bool> pSVar2;
		object x;
		bool bVar3;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		pbVar1 = &this._expanded;
		*pbVar1 = (bool)(*pbVar1 ^ 1);
		this.UpdateHeader();
		__this_00 = this._children;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_58 = __this_00.GetEnumerator();
		local_30 = (byte)&local_58;
		while(true) {
			do {
				bVar3 = local_58.MoveNext();
				x = local_58._current;
				if (!bVar3) {
					local_58.Dispose();
					pSVar2 = this._onExpandedChanged;
					if (pSVar2 != null) {
						(*(code)pSVar2.invoke_impl)(pSVar2.method_code,this._expanded,pSVar2.method);
					}
					return;
				}
				bVar3 = ((Object)x != null);
			} while (!bVar3);
			if ((Object)x == null) break;
			x.SetActive(this._expanded);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BAB")]
	[Address(RVA = "0x5BE7CE0", Offset = "0x5BE6CE0", VA = "0x5BE7CE0")]
	public void SetExpanded(bool expanded)
	{
		// Lifted from source/cpp/UI/CollapsibleSection.c (UI.CollapsibleSection$$SetExpanded): 4 lines keep C-only constructs
		List<GameObject> __this_00;
		Action<bool> pSVar1;
		object x;
		bool bVar2;
		undefined7 in_register_00000031;
		MethodInfo method_00;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_30;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, expanded);
		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		if (this._expanded != expanded) {
			this._expanded = expanded;
			this.UpdateHeader();
			__this_00 = this._children;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			local_58 = __this_00.GetEnumerator();
			local_30 = (byte)&local_58;
			while(true) {
				bVar2 = local_58.MoveNext();
				x = local_58._current;
				if (!bVar2) break;
				bVar2 = ((Object)x != null);
				if (bVar2) {
					if ((Object)x == null) {
						throw new NullReferenceException();
					}
					x.SetActive(this._expanded);
				}
			}
			local_58.Dispose() ;
			pSVar1 = this._onExpandedChanged;
			if (pSVar1 != null) {
				(*(code)pSVar1.invoke_impl)(pSVar1.method_code,this._expanded,pSVar1.method);
			}
		}
		return;
	}

	[Token(Token = "0x6004BAC")]
	[Address(RVA = "0x5BE7980", Offset = "0x5BE6980", VA = "0x5BE7980")]
	private void UpdateHeader()
	{
		// Lifted from source/cpp/UI/CollapsibleSection.c (UI.CollapsibleSection$$UpdateHeader): 2 lines keep C-only constructs
		Text pUVar1;
		bool bVar2;
		String* ppSVar3;
		String pSVar4;

		pUVar1 = this._headerText;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._headerText;
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

	[Token(Token = "0x6004BAD")]
	[Address(RVA = "0x5BE7EB0", Offset = "0x5BE6EB0", VA = "0x5BE7EB0")]
	public CollapsibleSection()
	{
		// Lifted from source/cpp/UI/CollapsibleSection.c (UI.CollapsibleSection$$.ctor): clean
		List<GameObject> __this_00;

		this._expanded = true;
		__this_00 = new List<GameObject>();
		this._children = __this_00;
		base();
		return;
	}
}
