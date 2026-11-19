// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.State;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002E6")]
internal sealed class AottgBadgeIconRowRuntime : MonoBehaviour
{
	[Token(Token = "0x20002E7")]
	[CompilerGenerated]
	private sealed class _003CBadgeIds_003Ed__27 : IEnumerable<string>, IEnumerable, IEnumerator<string>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000EAF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000EB0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private string _003C_003E2__current;

		[Token(Token = "0x4000EB1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000EB2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private JSONNode badges;

		[Token(Token = "0x4000EB3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public JSONNode _003C_003E3__badges;

		[Token(Token = "0x4000EB4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private IEnumerator<JSONNode> _003C_003E7__wrap1;

		[Token(Token = "0x170001FB")]
		private string System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EString_003E_002ECurrent
		{
			[Token(Token = "0x60011B2")]
			[Address(RVA = "0x57D8A90", Offset = "0x57D7A90", VA = "0x57D8A90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.Generic.IEnumerator<System.String>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170001FC")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60011B4")]
			[Address(RVA = "0x57D8AE0", Offset = "0x57D7AE0", VA = "0x57D8AE0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.IEnumerator.get_Current): clean
				return (object)this.__2__current;
			}
		}

		[Token(Token = "0x60011AE")]
		[Address(RVA = "0x57D84C0", Offset = "0x57D74C0", VA = "0x57D84C0")]
		[DebuggerHidden]
		public _003CBadgeIds_003Ed__27(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x60011AF")]
		[Address(RVA = "0x57D8510", Offset = "0x57D7510", VA = "0x57D8510", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.IDisposable.Dispose): clean
			int iVar1;
			object obj;

			iVar1 = this.__1__state;
			if ((iVar1 == 1) || (iVar1 == -3)) {
				this.__1__state = -1;
				obj = (object)this.__7__wrap1;
				if (obj != null) {
					obj.Dispose();
					return;
				}
			}
			return;
		}

		[Token(Token = "0x60011B0")]
		[Address(RVA = "0x57D85C0", Offset = "0x57D75C0", VA = "0x57D85C0", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$MoveNext): 9 lines keep C-only constructs
			int iVar1;
			JSONNode pSVar2;
			Il2CppClass pIVar3;
			Il2CppRuntimeInterfaceOffsetPair pIVar4;
			AottgBadgeIconRowRuntime.d__27<BadgeIds> pGVar5;
			bool bVar6;
			object pIVar7;
			VirtualInvokeData pVVar8;
			String pSVar9;
			ulong uVar10;
			long lVar11;
			AottgBadgeIconRowRuntime.d__27<BadgeIds> local_30;
			AottgBadgeIconRowRuntime.d__27<BadgeIds>* local_20;

			local_30 = this;
			local_20 = &local_30;
			iVar1 = this.__1__state;
			if (iVar1 == 1) {
		label_058d8724: ;
				this.__1__state = -3;
				do {
					pIVar7 = (object)local_30.__7__wrap1;
					if (pIVar7 == null) {
						throw new NullReferenceException();
					}
					pIVar3 = pIVar7.klass;
					uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
					bVar6 = pIVar7.Dispose();
					pGVar5 = local_30;
					if (!bVar6) {
						pGVar5.__1__state = -1;
						pIVar7 = (object)pGVar5.__7__wrap1;
						if (pIVar7 == null) goto label_058d8936;
						pIVar3 = pIVar7.klass;
						uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
						if (uVar10 == 0) goto label_058d890f;
						pIVar4 = (pIVar3._1).interfaceOffsets;
						lVar11 = 0;
						goto label_058d8900;
					}
					pIVar7 = (object)local_30.__7__wrap1;
					if (pIVar7 == null) {
						throw new NullReferenceException();
					}
					pIVar3 = pIVar7.klass;
					uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
					pIVar7 = pIVar7.Dispose();
					if (pIVar7 == null) {
						throw new NullReferenceException();
					}
					pSVar9 = (String)(*pIVar7.klass.vtable[9].methodPtr)(pIVar7);
					bVar6 = String.IsNullOrWhiteSpace(pSVar9);
				} while (bVar6);
				pSVar9 = (String)(*pIVar7.klass.vtable[9].methodPtr)(pIVar7,pIVar7.klass.vtable[9].method);
				local_30.__2__current = pSVar9;
				local_30.__1__state = 1;
				bVar6 = true;
			}
			else {
				if (iVar1 == 0) {
					this.__1__state = -1;
					pSVar2 = this.badges;
					bVar6 = (pSVar2 == null);
					if (!bVar6) {
						pSVar2 = local_30.badges;
						if (pSVar2 == null) {
							throw new NullReferenceException();
						}
						pIVar7 = (object)pSVar2.get_Children();
						if (pIVar7 == null) {
							throw new NullReferenceException();
						}
						pIVar3 = pIVar7.klass;
						uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
						pIVar7 = pIVar7.Dispose();
						local_30.__7__wrap1 = (IEnumerator<JSONNode>)pIVar7;
						this = local_30;
						goto label_058d8724;
					}
				}
				bVar6 = false;
			}
			return bVar6;
			while (true) {
				lVar11 = lVar11 + 0x10;
				if (!(uVar10 * 0x10 != lVar11)) break;
		label_058d8900: ;
				if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar11) == typeof(IDisposable)) {
					pVVar8 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar11);
					goto label_058d892d;
				}
			}
		label_058d890f: ;
		label_058d892d: ;
			pIVar7.Dispose();
		label_058d8936: ;
			local_30.__7__wrap1 = null;
			return false;
		}

		[Token(Token = "0x60011B1")]
		[Address(RVA = "0x57D89F0", Offset = "0x57D79F0", VA = "0x57D89F0")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$<>m__Finally1): clean
			object obj;

			this.__1__state = -1;
			obj = (object)this.__7__wrap1;
			if (obj == null) {
				return;
			}
			obj.Dispose();
			return;
		}

		[Token(Token = "0x60011B3")]
		[Address(RVA = "0x57D8AA0", Offset = "0x57D7AA0", VA = "0x57D8AA0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_BadgeIds_d__27_System_Collections_IEnumerator_Re);
			throw (object)__this_00;
		}

		[Token(Token = "0x60011B5")]
		[Address(RVA = "0x57D8AF0", Offset = "0x57D7AF0", VA = "0x57D8AF0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<string> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EString_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator): 1 lines keep C-only constructs
			int iVar1;
			int iVar2;
			AottgBadgeIconRowRuntime.d__27<BadgeIds> __this_00;

			if (this.__1__state == -2) {
				iVar1 = this.__l__initialThreadId;
				iVar2 = Environment.CurrentManagedThreadId;
				if (iVar1 == iVar2) {
					this.__1__state = 0;
					__this_00 = this;
					goto label_058d8b63;
				}
			}
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgBadgeIconRowRuntime.d__27<BadgeIds>));
			__this_00 = new Object();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
		label_058d8b63: ;
			__this_00.badges = this.__3__badges;
			return (IEnumerator)__this_00;
		}

		[Token(Token = "0x60011B6")]
		[Address(RVA = "0x57D8B80", Offset = "0x57D7B80", VA = "0x57D8B80", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.IEnumerable.GetEnumerator): clean
			IEnumerator pSVar1;

			pSVar1 = this.System.Collections.Generic.IEnumerable<System.String>.GetEnumerator();
			return pSVar1;
		}
	}

	[Token(Token = "0x4000EA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private float _size;

	[Token(Token = "0x4000EA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GisketchUIState _state;

	[Token(Token = "0x4000EA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _stateKey;

	[Token(Token = "0x4000EAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string[] _last;

	[Token(Token = "0x4000EAB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private bool _controlsActive;

	[Token(Token = "0x4000EAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
	private bool _setupComplete;

	[Token(Token = "0x4000EAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x42")]
	private bool _subscribed;

	[Token(Token = "0x170001FA")]
	public bool HasBadges
	{
		[Token(Token = "0x600119A")]
		[Address(RVA = "0x57D7560", Offset = "0x57D6560", VA = "0x57D7560")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$get_HasBadges): clean
			return this._HasBadges_k__BackingField;
		}
		[Token(Token = "0x600119B")]
		[Address(RVA = "0x57D7570", Offset = "0x57D6570", VA = "0x57D7570")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$set_HasBadges): clean
			this._HasBadges_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x57D72F0", Offset = "0x57D62F0", VA = "0x57D72F0")]
	public void Setup(float size, float gap, [Optional] GisketchUIState state, [Optional] string stateKey, bool controlsActive = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Setup): clean
		GameObject pUVar1;
		HorizontalLayoutGroup __this_00;
		ContentSizeFitter __this_01;
		LayoutElement pUVar2;
		float fVar3;

		fVar3 = 1.0;
		if (1.0 <= size) {
			fVar3 = size;
		}
		this._size = fVar3;
		this._state = state;
		this._stateKey = stateKey;
		this._controlsActive = controlsActive;
		pUVar1 = this.gameObject;
		if (pUVar1 == null) goto label_058d7551;
		__this_00 = pUVar1.GetComponent<HorizontalLayoutGroup>();
		if (__this_00 == null) {
			pUVar1 = this.gameObject;
			if (pUVar1 == null) goto label_058d7551;
			__this_00 = pUVar1.AddComponent<HorizontalLayoutGroup>();
			if (__this_00 == null) goto label_058d7551;
		}
		__this_00.childAlignment = 4;
		__this_00.childControlWidth = true;
		__this_00.childControlHeight = true;
		__this_00.childForceExpandWidth = false;
		__this_00.childForceExpandHeight = false;
		__this_00.spacing = gap;
		pUVar1 = this.gameObject;
		if (pUVar1 == null) goto label_058d7551;
		__this_01 = pUVar1.GetComponent<ContentSizeFitter>();
		if (__this_01 == null) {
			pUVar1 = this.gameObject;
			if (pUVar1 == null) goto label_058d7551;
			__this_01 = pUVar1.AddComponent<ContentSizeFitter>();
			if (__this_01 == null) goto label_058d7551;
		}
		__this_01.horizontalFit = 2;
		__this_01.verticalFit = 2;
		pUVar1 = this.gameObject;
		if (pUVar1 != null) {
			pUVar2 = pUVar1.GetComponent<LayoutElement>();
			if (pUVar2 != null) {
	label_058d751b: ;
				pUVar2.set_preferredHeight(this._size);
				this._setupComplete = true;
				this.Subscribe();
				this.Refresh();
				return;
			}
			pUVar1 = this.gameObject;
			if (pUVar1 != null) {
				pUVar2 = pUVar1.AddComponent<LayoutElement>();
				if (pUVar2 != null) goto label_058d751b;
			}
		}
	label_058d7551: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600119D")]
	[Address(RVA = "0x57D76E0", Offset = "0x57D66E0", VA = "0x57D76E0")]
	public void SetBadges(IEnumerable<string> ids)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetBadges): 1 lines keep C-only constructs
		String[] first;
		bool bVar1;
		String[] ids_00;

		bVar1 = ((Object)this == null);
		if (bVar1) {
			return;
		}
		ids_00 = AottgProfileEntitlementCatalog.OrderedBadgeIds(ids);
		first = this._last;
		if (first != null) {
			bVar1 = Enumerable.SequenceEqual<string>((System_Collections_Generic_IEnumerable_TSource__o)first, (System_Collections_Generic_IEnumerable_TSource__o)ids_00);
			if (bVar1) {
				this.SetActive(this._HasBadges_k__BackingField);
				return;
			}
		}
		this._last = ids_00;
		this.Rebuild(ids_00);
		return;
	}

	[Token(Token = "0x600119E")]
	[Address(RVA = "0x57D79B0", Offset = "0x57D69B0", VA = "0x57D79B0")]
	public void SetFromCharacterInfo(JSONNode info)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetFromCharacterInfo): 1 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		JSONNode pSVar3;
		AottgBadgeIconRowRuntime.d__27<BadgeIds> __this_00;

		pSVar3 = null;
		bVar1 = (info != null);
		if (bVar1) {
			if (info == null) goto label_058d7aa5;
			pSVar3 = info.get_Item("badges");
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgBadgeIconRowRuntime.d__27<BadgeIds>));
		__this_00 = new Object();
		__this_00.__1__state = -2;
		iVar2 = Environment.CurrentManagedThreadId;
		__this_00.__l__initialThreadId = iVar2;
		__this_00.__3__badges = pSVar3;
		if (this != null) {
			this.SetBadges((IEnumerable<string>)__this_00);
			return;
		}
	label_058d7aa5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x57D7B20", Offset = "0x57D6B20", VA = "0x57D7B20")]
	public void SetFromCharacterInfoJson(string json, IEnumerable<string> roles)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetFromCharacterInfoJson): 1 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		JSONNode a;
		JSONNode requested;
		JSONArray pSVar3;
		AottgBadgeIconRowRuntime.d__27<BadgeIds> __this_00;

		a = AottgBadgeIconRowRuntime.Parse(json);
		requested = null;
		bVar1 = (a != null);
		if (bVar1) {
			if (a == null) {
				throw new NullReferenceException();
			}
			requested = a.get_Item("badges");
		}
		pSVar3 = AottgProfileEntitlementCatalog.AllowedBadges(requested, roles);
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgBadgeIconRowRuntime.d__27<BadgeIds>));
		__this_00 = new Object();
		__this_00.__1__state = -2;
		iVar2 = Environment.CurrentManagedThreadId;
		__this_00.__l__initialThreadId = iVar2;
		__this_00.__3__badges = (JSONNode)pSVar3;
		this.SetBadges((IEnumerable<string>)__this_00);
		return;
	}

	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x57D7630", Offset = "0x57D6630", VA = "0x57D7630")]
	public void Refresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Refresh): clean
		GisketchUIState __this_00;
		bool bVar1;
		String json;
		JSONNode info;
		MethodInfo method_01;

		bVar1 = ((Object)this == null);
		if (((!bVar1) && (this._setupComplete != false)) &&(this._state != null)) {
			bVar1 = String.IsNullOrEmpty(this._stateKey);
			if (!bVar1) {
				__this_00 = this._state;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				method_01 = (MethodInfo)this._stateKey;
				json = __this_00.Get((String)method_01, (String)**(ulong*)(g_data_07556758 + 0xb8));
				info = AottgBadgeIconRowRuntime.Parse(json);
				this.SetFromCharacterInfo(info);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x57D7CE0", Offset = "0x57D6CE0", VA = "0x57D7CE0")]
	private void OnEnable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$OnEnable): clean
		this.Subscribe();
		this.Refresh();
		return;
	}

	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x57D7D00", Offset = "0x57D6D00", VA = "0x57D7D00")]
	private void OnDisable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$OnDisable): 1 lines keep C-only constructs
		GisketchUIState __this_00;
		Action<string> __this_01;

		if ((this._subscribed != false) &&(__this_00 = this._state, __this_00 != null)) {
			__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged);
			__this_00.remove_Changed(__this_01);
			this._subscribed = false;
		}
		return;
	}

	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x57D7E00", Offset = "0x57D6E00", VA = "0x57D7E00")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$OnDestroy): 1 lines keep C-only constructs
		GisketchUIState __this_00;
		Action<string> __this_01;

		if ((this._subscribed != false) &&(__this_00 = this._state, __this_00 != null)) {
			__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged);
			__this_00.remove_Changed(__this_01);
			this._subscribed = false;
		}
		return;
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x57D7E80", Offset = "0x57D6E80", VA = "0x57D7E80")]
	private void OnStateChanged(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$OnStateChanged): 1 lines keep C-only constructs
		GisketchUIState __this_00;
		bool bVar1;
		Action<string> __this_01;
		MethodInfo method_00;

		bVar1 = ((Object)this == null);
		if ((bVar1) || (this._setupComplete == false)) {
			if ((this._subscribed != false) &&(__this_00 = this._state, __this_00 != null)) {
				__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged);
				__this_00.remove_Changed(__this_01);
				this._subscribed = false;
			}
		}
		else {
			method_00 = (MethodInfo)this._stateKey;
			bVar1 = (key == (String)method_00);
			if (bVar1) {
				this.Refresh();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60011A5")]
	[Address(RVA = "0x57D7840", Offset = "0x57D6840", VA = "0x57D7840")]
	private void Rebuild(string[] ids)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Rebuild): 3 lines keep C-only constructs
		uint uVar1;
		String id;
		bool bVar2;
		ulong uVar3;
		String resourcePath;
		Object x;
		MethodInfo in_RCX;
		int iVar5;
		ulong uVar6;

		bVar2 = ((Object)this == null);
		if (bVar2) {
			return;
		}
		this.Clear();
		if (ids == null) {
			throw new NullReferenceException();
		}
		if ((int)ids.Length < 1) {
			iVar5 = 0;
		}
		else {
			uVar3 = ids.Length & 0xffffffff;
			uVar6 = 0;
			iVar5 = 0;
			do {
				if (uVar3 <= uVar6) {
					throw new IndexOutOfRangeException();
				}
				id = ids[uVar6];
				resourcePath = AottgProfileEntitlementCatalog.BadgeIcon(id);
				x = (Object)GisketchSpriteLoader.Load(resourcePath);
				bVar2 = (x == null);
				if (!bVar2) {
					this.AddIcon(id, (Sprite)x);
					iVar5 = iVar5 + 1;
				}
				uVar6 = uVar6 + 1;
				uVar1 = (uint)ids.Length;
				uVar3 = (ulong)uVar1;
				in_RCX = (MethodInfo)(long)(int)uVar1;
			} while ((long)uVar6 < (long)in_RCX);
		}
		this._HasBadges_k__BackingField = 0 < iVar5;
		this.SetActive(0 < iVar5);
		return;
	}

	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x57D77B0", Offset = "0x57D67B0", VA = "0x57D77B0")]
	private void SetActive(bool active)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetActive): clean
		bool bVar1;
		GameObject __this_00;

		bVar1 = ((Object)this != null);
		if ((bVar1) && (this._controlsActive != false)) {
			__this_00 = this.gameObject;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.SetActive(active);
			return;
		}
		return;
	}

	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x57D80D0", Offset = "0x57D70D0", VA = "0x57D80D0")]
	private void AddIcon(string id, Sprite sprite)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$AddIcon): 4 lines keep C-only constructs
		Il2CppType handle;
		bool bVar1;
		String pSVar2;
		Type[] components;
		Type pSVar3;
		object pIVar4;
		GameObject __this_00;
		Transform __this_01;
		Transform parent;
		Image __this_02;
		GisketchTooltipTrigger __this_03;
		LayoutElement pUVar5;
		Color UVar6;

		bVar1 = ((Object)this == null);
		if (bVar1) {
			return;
		}
		pSVar2 = String.Concat("AoTTG Badge ", id);
		components = (Type[])new Type[4];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_058d849a: ;
			throw new NullReferenceException();
		}
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((components.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_058d84a4;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar3;
			pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CanvasRenderer);
			if (pSVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((components.obj).klass)._1).element_class);
				if (pIVar4 == null) goto label_058d84a4;
			}
			if ((components.Length & 0xfffffffe) == 0) goto label_058d849f;
			components[1] = pSVar3;
			pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
			if (pSVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((components.obj).klass)._1).element_class);
				if (pIVar4 == null) goto label_058d84a4;
			}
			if (2 < (uint)components.Length) {
				components[2] = pSVar3;
				pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
				if (pSVar3 != null) {
					pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((components.obj).klass)._1).element_class) ;
					if (pIVar4 == null) {
	label_058d84a4: ;
						pIVar4 = new ArrayTypeMismatchException();
						throw pIVar4;
					}
				}
				if ((components.Length & 0xfffffffc) != 0) {
					components[3] = pSVar3;
					__this_00 = new GameObject(pSVar2, components);
					if (__this_00 != null) {
						__this_01 = __this_00.transform;
						parent = this.transform;
						if (__this_01 != null) {
							__this_01.SetParent(parent, false);
							__this_02 = __this_00.GetComponent<Image>() ;
							if (__this_02 != null) {
								__this_02.sprite = sprite;
								__this_02.preserveAspect = true;
								__this_02.set_raycastTarget(true);
								UVar6.b = 1.0;
								UVar6.a = 1.0;
								UVar6.r = 1.0;
								UVar6.g = 1.0;
								__this_02.set_color(UVar6);
								__this_03 = __this_00.AddComponent<GisketchTooltipTrigger>();
								pSVar2 = AottgProfileEntitlementCatalog.BadgeLabel(id) ;
								if (__this_03 != null) {
									__this_03.Setup(pSVar2, null, null);
									pUVar5 = __this_00.GetComponent<LayoutElement>();
									if (pUVar5 != null) {
										pUVar5.set_preferredWidth(this._size);
										pUVar5.set_preferredHeight(this._size);
										return;
									}
								}
							}
						}
					}
					goto label_058d849a;
				}
			}
		}
	label_058d849f: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60011A8")]
	[Address(RVA = "0x57D7F70", Offset = "0x57D6F70", VA = "0x57D7F70")]
	private void Clear()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Clear): clean
		bool bVar1;
		int index;
		Transform pUVar2;
		Object pUVar3;

		bVar1 = ((Object)this == null);
		if (!bVar1) {
			pUVar2 = this.transform;
			if (pUVar2 == null) {
	label_058d80c5: ;
				throw new NullReferenceException();
			}
			index = pUVar2.childCount;
			while (true) {
				index = index + -1;
				if (!(-1 < index)) break;
				while(true) {
					pUVar2 = this.transform;
					if (pUVar2 == null) goto label_058d80c5;
					pUVar2 = pUVar2.GetChild(index);
					if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
						bVar1 = Application.isPlaying;
					}
					else {
						bVar1 = Application.isPlaying;
					}
					if (!bVar1) break;
					if (pUVar2 == null) goto label_058d80c5;
					pUVar3 = (Object)pUVar2.gameObject;
					Object.Destroy(pUVar3);
					index = index + -1;
					if (index < 0) {
						return;
					}
				}
				if (pUVar2 == null) goto label_058d80c5;
				pUVar3 = (Object)pUVar2.gameObject;
				Object.DestroyImmediate(pUVar3);
			}
		}
		return;
	}

	[Token(Token = "0x60011A9")]
	[Address(RVA = "0x57D7580", Offset = "0x57D6580", VA = "0x57D7580")]
	private void Subscribe()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Subscribe): 1 lines keep C-only constructs
		GisketchUIState __this_00;
		bool bVar1;
		Action<string> __this_01;

		if (((this._setupComplete != false) && (this._subscribed == false)) &&(this._state != null)) {
			bVar1 = String.IsNullOrEmpty(this._stateKey);
			if (!bVar1) {
				__this_00 = this._state;
				__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged);
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.add_Changed(__this_01);
				this._subscribed = true;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60011AA")]
	[Address(RVA = "0x57D7D80", Offset = "0x57D6D80", VA = "0x57D7D80")]
	private void Unsubscribe()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Unsubscribe): 1 lines keep C-only constructs
		GisketchUIState __this_00;
		Action<string> __this_01;

		if ((this._subscribed != false) &&(__this_00 = this._state, __this_00 != null)) {
			__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged);
			__this_00.remove_Changed(__this_01);
			this._subscribed = false;
		}
		return;
	}

	[Token(Token = "0x60011AB")]
	[Address(RVA = "0x57D7C40", Offset = "0x57D6C40", VA = "0x57D7C40")]
	private static JSONNode Parse(string json)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Parse): clean
		bool bVar1;
		JSONNode pSVar2;

		bVar1 = String.IsNullOrWhiteSpace(json);
		if (!bVar1) {
		}
		return pSVar2;
	}

	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x57D7AB0", Offset = "0x57D6AB0", VA = "0x57D7AB0")]
	[IteratorStateMachine(typeof(_003CBadgeIds_003Ed__27))]
	private static IEnumerable<string> BadgeIds(JSONNode badges)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$BadgeIds): clean
		int iVar1;
		AottgBadgeIconRowRuntime.d__27<BadgeIds> __this;

		__this = new AottgBadgeIconRowRuntime.d__27<BadgeIds>();
		__this.__1__state = -2;
		iVar1 = Environment.CurrentManagedThreadId;
		__this.__l__initialThreadId = iVar1;
		__this.__3__badges = badges;
		return (IEnumerable<string>)__this;
	}

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x57D84F0", Offset = "0x57D74F0", VA = "0x57D84F0")]
	public AottgBadgeIconRowRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRowRuntime.c (Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$.ctor): clean
		this._size = 20.0;
		this._controlsActive = true;
		base();
		return;
	}
}
