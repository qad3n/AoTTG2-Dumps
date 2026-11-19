// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanelController.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002B1")]
public sealed class AottgMainMenuTipPanelController : MonoBehaviour
{
	[Token(Token = "0x20002B2")]
	[CompilerGenerated]
	private sealed class _003CRevealText_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000DC6")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000DC7")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000DC8")]
		[FieldOffset(Offset = "0x20")]
		public AottgMainMenuTipPanelController _003C_003E4__this;

		[Token(Token = "0x4000DC9")]
		[FieldOffset(Offset = "0x28")]
		public string text;

		[Token(Token = "0x4000DCA")]
		[FieldOffset(Offset = "0x30")]
		private float _003Celapsed_003E5__2;

		[Token(Token = "0x170001C9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600105D")]
			[Address(RVA = "0x57C2940", Offset = "0x57C1940", VA = "0x57C2940", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanelController.c (Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170001CA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600105F")]
			[Address(RVA = "0x57C2990", Offset = "0x57C1990", VA = "0x57C2990", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanelController.c (Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__8$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600105A")]
		[Address(RVA = "0x57C2710", Offset = "0x57C1710", VA = "0x57C2710")]
		[DebuggerHidden]
		public _003CRevealText_003Ed__8(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanelController.c (Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__8$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600105B")]
		[Address(RVA = "0x57C2740", Offset = "0x57C1740", VA = "0x57C2740", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanelController.c (Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__8$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600105C")]
		[Address(RVA = "0x57C2750", Offset = "0x57C1750", VA = "0x57C2750", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanelController.c (Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__8$$MoveNext): clean
			AottgMainMenuTipPanelController __this_00;
			int iVar1;
			String pSVar2;
			int iVar3;
			float fVar4;
			float fVar5;

			iVar3 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar3 == 1) {
				this.__1__state = -1;
				fVar5 = this._elapsed_5__2;
				if (0.45 <= fVar5) {
					if (__this_00 != null) {
						__this_00.SetStateText(this.text);
						__this_00._reveal = null;
						return false;
					}
					goto label_058c2933;
				}
			}
			else {
				if (iVar3 != 0) {
					return false;
				}
				this.__1__state = -1;
				if (__this_00 == null) goto label_058c2933;
				__this_00.SetStateText((String)**(ulong*)(g_data_07556758 + 0xb8));
				this._elapsed_5__2 = 0.0;
				fVar5 = 0.0;
			}
			fVar4 = Time.unscaledDeltaTime;
			this._elapsed_5__2 = fVar4 + fVar5;
			pSVar2 = this.text;
			if (pSVar2 == null) goto label_058c2933;
			iVar3 = pSVar2._stringLength;
			if (Il2CppMethodInitialized_0753e7f9 == false) {
				Il2CppMethodInitialized_0753e7f9 = true;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_058c280f;
		label_058c2860: ;
				pSVar2 = this.text;
			}
			else {
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_058c2860;
		label_058c280f: ;
				pSVar2 = this.text;
			}
			if (pSVar2 != null) {
				fVar4 = (fVar4 + fVar5) / 0.45;
				fVar5 = 1.0;
				if (fVar4 <= 1.0) {
					fVar5 = fVar4;
				}
				fVar5 = ceilf((float)(-(uint)(0.0 <= fVar4) & (uint)fVar5) * (float)iVar3);
				iVar1 = (int)fVar5;
				iVar3 = pSVar2._stringLength;
				if (iVar1 < iVar3) {
					iVar3 = iVar1;
				}
				if (iVar1 < 0) {
					iVar3 = 0;
				}
				pSVar2 = pSVar2.Substring(0, iVar3);
				if (__this_00 != null) {
					__this_00.SetStateText(pSVar2);
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
			}
		label_058c2933: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x600105E")]
		[Address(RVA = "0x57C2950", Offset = "0x57C1950", VA = "0x57C2950", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanelController.c (Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController.<RevealText>d__8$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_RevealText_d__8_System_Collections_IEnume);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4000DC2")]
	private const float RevealSeconds = 0.45f;

	[Token(Token = "0x4000DC3")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIRoot _root;

	[Token(Token = "0x4000DC4")]
	[FieldOffset(Offset = "0x28")]
	private Coroutine _reveal;

	[Token(Token = "0x4000DC5")]
	[FieldOffset(Offset = "0x30")]
	private int _currentTipIndex;

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x57C23D0", Offset = "0x57C13D0", VA = "0x57C23D0")]
	public void Setup(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanelController.c (Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$Setup): clean


		this._root = root;
		this.ShowRandomTip(false);
		return;
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x57C2490", Offset = "0x57C1490", VA = "0x57C2490")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanelController.c (Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$OnDestroy): clean
		Coroutine routine;

		routine = this._reveal;
		if (routine == null) {
			return;
		}
		this.StopCoroutine(routine);
		return;
	}

	[Token(Token = "0x6001055")]
	[Address(RVA = "0x57C23F0", Offset = "0x57C13F0", VA = "0x57C23F0")]
	public void ShowRandomTip(bool animate)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanelController.c (Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$ShowRandomTip): clean
		GisketchUIRoot pGVar1;
		bool bVar2;
		String value;

		pGVar1 = this._root;
		bVar2 = ((Object)pGVar1 == null);
		if (!bVar2) {
			pGVar1 = this._root;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			if (pGVar1._State_k__BackingField != null) {
				value = TipPanel.RandomTipText(ref this._currentTipIndex);
				bVar2 = String.IsNullOrEmpty(value);
				if (!bVar2) {
					this.SetTipText(value, animate);
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6001056")]
	[Address(RVA = "0x57C24B0", Offset = "0x57C14B0", VA = "0x57C24B0")]
	private void SetTipText(string text, bool animate)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanelController.c (Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$SetTipText): 5 lines keep C-only constructs
		Coroutine* targetAddress;
		bool bVar1;
		AottgMainMenuTipPanelController.d__8<RevealText> __this_00;
		Coroutine pUVar2;
		undefined7 in_register_00000011;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000011, animate);
		targetAddress = &this._reveal;
		pUVar2 = this._reveal;
		if (pUVar2 != null) {
			this.StopCoroutine(pUVar2);
			this._reveal = null;
		}
		if (animate) {
			if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
				bVar1 = Application.isPlaying;
			}
			else {
				bVar1 = Application.isPlaying;
			}
			if (bVar1) {
				__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgMainMenuTipPanelController.d__8<RevealText>));
				__this_00 = new Object();
				__this_00.__1__state = 0;
				__this_00.__4__this = this;
				__this_00.text = text;
				pUVar2 = this.StartCoroutine((IEnumerator)__this_00);
				this._reveal = pUVar2;
				return;
			}
		}
		this.SetStateText(text);
		return;
	}

	[Token(Token = "0x6001057")]
	[Address(RVA = "0x57C2690", Offset = "0x57C1690", VA = "0x57C2690")]
	[IteratorStateMachine(typeof(_003CRevealText_003Ed__8))]
	private IEnumerator RevealText(string text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanelController.c (Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$RevealText): 1 lines keep C-only constructs
		AottgMainMenuTipPanelController.d__8<RevealText> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgMainMenuTipPanelController.d__8<RevealText>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.text = text;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6001058")]
	[Address(RVA = "0x57C25F0", Offset = "0x57C15F0", VA = "0x57C25F0")]
	private void SetStateText(string text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanelController.c (Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$SetStateText): clean
		GisketchUIRoot pGVar1;
		GisketchUIState __this_00;
		bool bVar2;

		pGVar1 = this._root;
		bVar2 = ((Object)pGVar1 != null);
		if (bVar2) {
			pGVar1 = this._root;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			__this_00 = pGVar1._State_k__BackingField;
			if (__this_00 != null) {
				__this_00.Set("mainMenu.tipText", text);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6001059")]
	[Address(RVA = "0x57C2730", Offset = "0x57C1730", VA = "0x57C2730")]
	public AottgMainMenuTipPanelController()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanelController.c (Gisketch.Aottg2UI.Game.AottgMainMenuTipPanelController$$.ctor): clean
		this._currentTipIndex = -1;
		base();
		return;
	}
}
