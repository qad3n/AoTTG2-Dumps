// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseCharacter
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/BaseCharacter.c
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseCharacter.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ExitGames.Client.Photon;
using GameManagers;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x200068A")]
internal class BaseCharacter : MonoBehaviourPunCallbacks, ITargetable
{
	[Token(Token = "0x200068B")]
	[CompilerGenerated]
	private sealed class _003CFadeSoundOverTime_003Ed__129 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D86")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D87")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D88")]
		[FieldOffset(Offset = "0x20")]
		public AudioSource source;

		[Token(Token = "0x4001D89")]
		[FieldOffset(Offset = "0x28")]
		public float volume;

		[Token(Token = "0x4001D8A")]
		[FieldOffset(Offset = "0x2C")]
		public float time;

		[Token(Token = "0x4001D8B")]
		[FieldOffset(Offset = "0x30")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x4001D8C")]
		[FieldOffset(Offset = "0x38")]
		private float _003CstartVolume_003E5__2;

		[Token(Token = "0x4001D8D")]
		[FieldOffset(Offset = "0x3C")]
		private float _003Celapsed_003E5__3;

		[Token(Token = "0x17000B07")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003FC1")]
			[Address(RVA = "0x5AB9D30", Offset = "0x5AB8D30", VA = "0x5AB9D30", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<FadeSoundOverTime>d__129$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000B08")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003FC3")]
			[Address(RVA = "0x5AB9D80", Offset = "0x5AB8D80", VA = "0x5AB9D80", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<FadeSoundOverTime>d__129$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6003FBE")]
		[Address(RVA = "0x5AB5A90", Offset = "0x5AB4A90", VA = "0x5AB5A90")]
		[DebuggerHidden]
		public _003CFadeSoundOverTime_003Ed__129(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<FadeSoundOverTime>d__129$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6003FBF")]
		[Address(RVA = "0x5AB9BE0", Offset = "0x5AB8BE0", VA = "0x5AB9BE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<FadeSoundOverTime>d__129$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6003FC0")]
		[Address(RVA = "0x5AB9BF0", Offset = "0x5AB8BF0", VA = "0x5AB9BF0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<FadeSoundOverTime>d__129$$MoveNext): clean
			int iVar1;
			BaseCharacter pCVar2;
			AudioSource pUVar3;
			Dictionary<object, object> __this_00;
			float fVar4;
			float fVar5;
			float fVar6;

			iVar1 = this.__1__state;
			pCVar2 = this.__4__this;
			if (iVar1 == 1) {
				this.__1__state = -1;
				fVar4 = this._elapsed_5__3;
				fVar5 = Time.deltaTime;
				fVar5 = fVar5 + fVar4;
				this._elapsed_5__3 = fVar5;
				pUVar3 = this.source;
				if (pUVar3 == null) goto label_05bb9d2b;
				fVar4 = this._startVolume_5__2;
				fVar5 = fVar5 / this.time;
				fVar6 = 1.0;
				if (fVar5 <= 1.0) {
					fVar6 = fVar5;
				}
				pUVar3.volume = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar6) * (this.volume - fVar4) + fVar4;
				if (this._elapsed_5__3 < this.time) goto label_05bb9d07;
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				pUVar3 = this.source;
				if (pUVar3 == null) goto label_05bb9d2b;
				fVar4 = pUVar3.volume;
				this._startVolume_5__2 = fVar4;
				this._elapsed_5__3 = 0.0;
				if (0.0 < this.time) {
		label_05bb9d07: ;
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
			}
			if ((pCVar2 != null) &&(__this_00 = (Dictionary<object, object>)pCVar2._soundFades, __this_00 != null)) {
				__this_00.Remove((object)this.source);
				return false;
			}
		label_05bb9d2b: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6003FC2")]
		[Address(RVA = "0x5AB9D40", Offset = "0x5AB8D40", VA = "0x5AB9D40", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<FadeSoundOverTime>d__129$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Characters_BaseCharacter_FadeSoundOverTime_d__129_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x200068C")]
	[CompilerGenerated]
	private sealed class _003CRevealAndRemove_003Ed__81 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D8E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D8F")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D90")]
		[FieldOffset(Offset = "0x20")]
		public float startDelay;

		[Token(Token = "0x4001D91")]
		[FieldOffset(Offset = "0x28")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x4001D92")]
		[FieldOffset(Offset = "0x30")]
		public float seconds;

		[Token(Token = "0x17000B09")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003FC7")]
			[Address(RVA = "0x5AB9F30", Offset = "0x5AB8F30", VA = "0x5AB9F30", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<RevealAndRemove>d__81$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000B0A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003FC9")]
			[Address(RVA = "0x5AB9F80", Offset = "0x5AB8F80", VA = "0x5AB9F80", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<RevealAndRemove>d__81$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6003FC4")]
		[Address(RVA = "0x5AB33B0", Offset = "0x5AB23B0", VA = "0x5AB33B0")]
		[DebuggerHidden]
		public _003CRevealAndRemove_003Ed__81(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<RevealAndRemove>d__81$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6003FC5")]
		[Address(RVA = "0x5AB9D90", Offset = "0x5AB8D90", VA = "0x5AB9D90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<RevealAndRemove>d__81$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6003FC6")]
		[Address(RVA = "0x5AB9DA0", Offset = "0x5AB8DA0", VA = "0x5AB9DA0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<RevealAndRemove>d__81$$MoveNext): clean
			float fVar1;
			int iVar2;
			BaseCharacter __this_00;
			Outline pOVar3;
			bool bVar4;
			WaitForSeconds pUVar5;
			bool bVar6;
			Color color;

			iVar2 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar2 == 2) {
				this.__1__state = -1;
				if (__this_00 == null) {
		label_05bb9f2b: ;
					throw new NullReferenceException();
				}
				pOVar3 = __this_00.OutlineComponent;
				bVar4 = ((Object)pOVar3 != null);
				if (bVar4) {
					pOVar3 = __this_00.OutlineComponent;
					if (pOVar3 == null) goto label_05bb9f2b;
					pOVar3.enabled = false;
				}
			}
			else if (iVar2 == 1) {
				this.__1__state = -1;
				if (__this_00 == null) goto label_05bb9f2b;
				color.b = 1.0;
				color.a = 1.0;
				color.r = 1.0;
				color.g = 1.0;
				__this_00.AddOutlineWithColor(color, 0);
				fVar1 = this.seconds;
				pUVar5 = new WaitForSeconds(fVar1);
				this.__2__current = (object)pUVar5;
				this.__1__state = 2;
			}
			else if (iVar2 == 0) {
				this.__1__state = -1;
				fVar1 = this.startDelay;
				pUVar5 = new WaitForSeconds(fVar1);
				this.__2__current = (object)pUVar5;
				this.__1__state = 1;
			}
			else {
			}
			return bVar6;
		}

		[Token(Token = "0x6003FC8")]
		[Address(RVA = "0x5AB9F40", Offset = "0x5AB8F40", VA = "0x5AB9F40", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<RevealAndRemove>d__81$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Characters_BaseCharacter_RevealAndRemove_d__81_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x200068D")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__103 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D93")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D94")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D95")]
		[FieldOffset(Offset = "0x20")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x17000B0B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003FCD")]
			[Address(RVA = "0x5ABA010", Offset = "0x5AB9010", VA = "0x5ABA010", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndDie>d__103$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000B0C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003FCF")]
			[Address(RVA = "0x5ABA060", Offset = "0x5AB9060", VA = "0x5ABA060", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndDie>d__103$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6003FCA")]
		[Address(RVA = "0x5AB4090", Offset = "0x5AB3090", VA = "0x5AB4090")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__103(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndDie>d__103$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6003FCB")]
		[Address(RVA = "0x5AB9F90", Offset = "0x5AB8F90", VA = "0x5AB9F90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndDie>d__103$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6003FCC")]
		[Address(RVA = "0x5AB9FA0", Offset = "0x5AB8FA0", VA = "0x5AB9FA0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndDie>d__103$$MoveNext): clean
			BaseCharacter __this_00;
			GameObject targetGo;

			if (this.__1__state != 0) {
				return false;
			}
			__this_00 = this.__4__this;
			this.__1__state = -1;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			targetGo = __this_00.gameObject;
			PhotonNetwork.Destroy(targetGo);
			return false;
		}

		[Token(Token = "0x6003FCE")]
		[Address(RVA = "0x5ABA020", Offset = "0x5AB9020", VA = "0x5ABA020", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndDie>d__103$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Characters_BaseCharacter_WaitAndDie_d__103_System_Collections_IEnumerator_Reset) ;
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x200068E")]
	[CompilerGenerated]
	private sealed class _003CWaitAndNotifyReloaded_003Ed__152 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D96")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D97")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D98")]
		[FieldOffset(Offset = "0x20")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x17000B0D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003FD3")]
			[Address(RVA = "0x5ABA220", Offset = "0x5AB9220", VA = "0x5ABA220", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndNotifyReloaded>d__152$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000B0E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003FD5")]
			[Address(RVA = "0x5ABA270", Offset = "0x5AB9270", VA = "0x5ABA270", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndNotifyReloaded>d__152$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6003FD0")]
		[Address(RVA = "0x5AB8790", Offset = "0x5AB7790", VA = "0x5AB8790")]
		[DebuggerHidden]
		public _003CWaitAndNotifyReloaded_003Ed__152(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndNotifyReloaded>d__152$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6003FD1")]
		[Address(RVA = "0x5ABA070", Offset = "0x5AB9070", VA = "0x5ABA070", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndNotifyReloaded>d__152$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6003FD2")]
		[Address(RVA = "0x5ABA080", Offset = "0x5AB9080", VA = "0x5ABA080", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndNotifyReloaded>d__152$$MoveNext): clean
			uint uVar1;
			BaseCharacter character;
			CustomLogicEvaluator pCVar2;
			object pIVar3;
			bool bVar4;

			uVar1 = this.__1__state;
			if (uVar1 < 2) {
				this.__1__state = -1;
				pCVar2 = CustomLogicManager.Evaluator;
				pIVar3 = new WaitForEndOfFrame();
				this.__2__current = pIVar3;
				if (pCVar2 == null) {
					this.__1__state = 1;
				}
				else {
					this.__1__state = 2;
				}
			}
			else if (uVar1 == 2) {
				this.__1__state = -1;
				pIVar3 = new WaitForEndOfFrame();
				this.__2__current = pIVar3;
				this.__1__state = 3;
			}
			else if (uVar1 == 3) {
				character = this.__4__this;
				this.__1__state = -1;
				if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicManager.Evaluator;
				}
				else {
					pCVar2 = CustomLogicManager.Evaluator;
				}
				if (pCVar2 == null) {
				}
				else {
					if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
						pCVar2 = CustomLogicManager.Evaluator;
						if (pCVar2 == null) {
							throw new NullReferenceException();
						}
					}
					pCVar2.OnCharacterReloaded(character);
				}
			}
			return bVar4;
		}

		[Token(Token = "0x6003FD4")]
		[Address(RVA = "0x5ABA230", Offset = "0x5AB9230", VA = "0x5ABA230", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndNotifyReloaded>d__152$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Characters_BaseCharacter_WaitAndNotifyReloaded_d__152_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x200068F")]
	[CompilerGenerated]
	private sealed class _003CWaitAndNotifySpawn_003Ed__151 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D99")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D9A")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D9B")]
		[FieldOffset(Offset = "0x20")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x17000B0F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003FD9")]
			[Address(RVA = "0x5ABA490", Offset = "0x5AB9490", VA = "0x5ABA490", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndNotifySpawn>d__151$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000B10")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003FDB")]
			[Address(RVA = "0x5ABA4E0", Offset = "0x5AB94E0", VA = "0x5ABA4E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndNotifySpawn>d__151$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6003FD6")]
		[Address(RVA = "0x5AB8700", Offset = "0x5AB7700", VA = "0x5AB8700")]
		[DebuggerHidden]
		public _003CWaitAndNotifySpawn_003Ed__151(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndNotifySpawn>d__151$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6003FD7")]
		[Address(RVA = "0x5ABA280", Offset = "0x5AB9280", VA = "0x5ABA280", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndNotifySpawn>d__151$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6003FD8")]
		[Address(RVA = "0x5ABA290", Offset = "0x5AB9290", VA = "0x5ABA290", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndNotifySpawn>d__151$$MoveNext): clean
			uint uVar1;
			BaseCharacter character;
			BaseComponentCache pUVar2;
			PhotonView pPVar3;
			object pIVar4;
			CustomLogicEvaluator pCVar5;
			bool bVar6;

			uVar1 = this.__1__state;
			if (uVar1 < 2) {
				this.__1__state = -1;
				pCVar5 = CustomLogicManager.Evaluator;
				pIVar4 = new WaitForEndOfFrame();
				this.__2__current = pIVar4;
				if (pCVar5 == null) {
					this.__1__state = 1;
				}
				else {
					this.__1__state = 2;
				}
			}
			else {
				if (uVar1 == 2) {
					this.__1__state = -1;
					pIVar4 = new WaitForEndOfFrame();
					this.__2__current = pIVar4;
					this.__1__state = 3;
					return true;
				}
				if (uVar1 != 3) {
					return false;
				}
				character = this.__4__this;
				this.__1__state = -1;
				if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
					pCVar5 = CustomLogicManager.Evaluator;
				}
				else {
					pCVar5 = CustomLogicManager.Evaluator;
				}
				if (pCVar5 != null) {
					if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
						pCVar5 = CustomLogicManager.Evaluator;
						if (pCVar5 == null) goto label_05bba483;
					}
					pCVar5.OnCharacterSpawn(character);
					if (character == null) {
		label_05bba483: ;
						throw new NullReferenceException();
					}
					if (character.AI == false) {
						pUVar2 = character.Cache;
						if (((pUVar2 != null) &&(pPVar3 = pUVar2.PhotonView, pPVar3 != null)) &&(pCVar5 = CustomLogicManager.Evaluator, pCVar5 != null)) {
							pCVar5.OnPlayerSpawn(pPVar3._Owner_k__BackingField, character);
							return false;
						}
						goto label_05bba483;
					}
				}
			}
			return bVar6;
		}

		[Token(Token = "0x6003FDA")]
		[Address(RVA = "0x5ABA4A0", Offset = "0x5AB94A0", VA = "0x5ABA4A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndNotifySpawn>d__151$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Characters_BaseCharacter_WaitAndNotifySpawn_d__151_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000690")]
	[CompilerGenerated]
	private sealed class _003CWaitAndPlaySound_003Ed__124 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D9C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D9D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D9E")]
		[FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x4001D9F")]
		[FieldOffset(Offset = "0x28")]
		public BaseCharacter _003C_003E4__this;

		[Token(Token = "0x4001DA0")]
		[FieldOffset(Offset = "0x30")]
		public string sound;

		[Token(Token = "0x17000B11")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003FDF")]
			[Address(RVA = "0x5ABA5B0", Offset = "0x5AB95B0", VA = "0x5ABA5B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndPlaySound>d__124$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000B12")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003FE1")]
			[Address(RVA = "0x5ABA600", Offset = "0x5AB9600", VA = "0x5ABA600", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndPlaySound>d__124$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6003FDC")]
		[Address(RVA = "0x5AB5310", Offset = "0x5AB4310", VA = "0x5AB5310")]
		[DebuggerHidden]
		public _003CWaitAndPlaySound_003Ed__124(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndPlaySound>d__124$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6003FDD")]
		[Address(RVA = "0x5ABA4F0", Offset = "0x5AB94F0", VA = "0x5ABA4F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndPlaySound>d__124$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6003FDE")]
		[Address(RVA = "0x5ABA500", Offset = "0x5AB9500", VA = "0x5ABA500", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndPlaySound>d__124$$MoveNext): clean
			float seconds;
			int iVar1;
			BaseCharacter __this_00;
			WaitForSeconds __this_01;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				seconds = this.delay;
				__this_01 = new WaitForSeconds(seconds);
				this.__2__current = (object)__this_01;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.PlaySound(this.sound);
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x6003FE0")]
		[Address(RVA = "0x5ABA5C0", Offset = "0x5AB95C0", VA = "0x5ABA5C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter.<WaitAndPlaySound>d__124$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Characters_BaseCharacter_WaitAndPlaySound_d__124_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4001D60")]
	[FieldOffset(Offset = "0x28")]
	public bool FootstepsEnabled;

	[Token(Token = "0x4001D61")]
	[FieldOffset(Offset = "0x29")]
	public bool SoundsEnabled;

	[Token(Token = "0x4001D62")]
	[FieldOffset(Offset = "0x2A")]
	public bool EffectsEnabled;

	[Token(Token = "0x4001D63")]
	[FieldOffset(Offset = "0x30")]
	private HashSet<string> _activeSoundLoops;

	[Token(Token = "0x4001D64")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<AudioSource, Coroutine> _soundFades;

	[Token(Token = "0x4001D65")]
	[FieldOffset(Offset = "0x40")]
	public bool IsVisible;

	[Token(Token = "0x4001D66")]
	[FieldOffset(Offset = "0x44")]
	protected float _disableKinematicTimeLeft;

	[Token(Token = "0x4001D67")]
	[FieldOffset(Offset = "0x48")]
	public string RichTextName;

	[Token(Token = "0x4001D68")]
	[FieldOffset(Offset = "0x50")]
	public string VisibleName;

	[Token(Token = "0x4001D69")]
	[FieldOffset(Offset = "0x58")]
	public bool HasExplicitNameTag;

	[Token(Token = "0x4001D6A")]
	[FieldOffset(Offset = "0x60")]
	public string Guild;

	[Token(Token = "0x4001D6B")]
	[FieldOffset(Offset = "0x68")]
	public string FeedKillerName;

	[Token(Token = "0x4001D6C")]
	[FieldOffset(Offset = "0x70")]
	public string FeedVictimName;

	[Token(Token = "0x4001D6D")]
	[FieldOffset(Offset = "0x78")]
	public bool Dead;

	[Token(Token = "0x4001D6E")]
	[FieldOffset(Offset = "0x79")]
	public bool CustomDamageEnabled;

	[Token(Token = "0x4001D6F")]
	[FieldOffset(Offset = "0x7C")]
	public int CustomDamage;

	[Token(Token = "0x4001D70")]
	[FieldOffset(Offset = "0x80")]
	public BaseComponentCache Cache;

	[Token(Token = "0x4001D71")]
	[FieldOffset(Offset = "0x88")]
	public bool AI;

	[Token(Token = "0x4001D72")]
	[FieldOffset(Offset = "0x8C")]
	public int MaxHealth;

	[Token(Token = "0x4001D73")]
	[FieldOffset(Offset = "0x90")]
	public int CurrentHealth;

	[Token(Token = "0x4001D74")]
	[FieldOffset(Offset = "0x98")]
	public string Team;

	[Token(Token = "0x4001D75")]
	[FieldOffset(Offset = "0xA0")]
	public List<BaseUseable> Items;

	[Token(Token = "0x4001D76")]
	[FieldOffset(Offset = "0xA8")]
	protected InGameManager _inGameManager;

	[Token(Token = "0x4001D77")]
	[FieldOffset(Offset = "0xB0")]
	protected bool _cameraFPS;

	[Token(Token = "0x4001D78")]
	[FieldOffset(Offset = "0xB1")]
	protected bool _wasMainCharacter;

	[Token(Token = "0x4001D79")]
	[FieldOffset(Offset = "0xB8")]
	public BaseMovementSync MovementSync;

	[Token(Token = "0x4001D7A")]
	[FieldOffset(Offset = "0xC0")]
	public AnimationHandler Animation;

	[Token(Token = "0x4001D7B")]
	[FieldOffset(Offset = "0xC8")]
	public BaseDetection Detection;

	[Token(Token = "0x4001D7C")]
	[FieldOffset(Offset = "0xD0")]
	public float CurrentSpeed;

	[Token(Token = "0x4001D7D")]
	[FieldOffset(Offset = "0xD4")]
	public bool Grounded;

	[Token(Token = "0x4001D7E")]
	[FieldOffset(Offset = "0xD5")]
	public bool JustGrounded;

	[Token(Token = "0x4001D7F")]
	[FieldOffset(Offset = "0xD8")]
	public float TargetAngle;

	[Token(Token = "0x4001D80")]
	[FieldOffset(Offset = "0xDC")]
	public bool HasDirection;

	[Token(Token = "0x4001D81")]
	[FieldOffset(Offset = "0xE0")]
	protected int _stepPhase;

	[Token(Token = "0x4001D82")]
	[FieldOffset(Offset = "0xE4")]
	private LayerMask GroundMaskLayers;

	[Token(Token = "0x4001D83")]
	[FieldOffset(Offset = "0xE8")]
	protected Outline OutlineComponent;

	[Token(Token = "0x4001D84")]
	[FieldOffset(Offset = "0xF0")]
	[CompilerGenerated]
	private Action<ExitGames.Client.Photon.Hashtable> m_OnPlayerPropertiesChanged;

	[Token(Token = "0x4001D85")]
	[FieldOffset(Offset = "0xF8")]
	private object[] crossfadeCache;

	[Token(Token = "0x17000AFA")]
	protected virtual int DefaultMaxHealth
	{
		[Token(Token = "0x6003F42")]
		[Address(RVA = "0x5AB29D0", Offset = "0x5AB19D0", VA = "0x5AB29D0", Slot = "57")]
		get
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$get_DefaultMaxHealth): clean
			return 1;
		}
	}

	[Token(Token = "0x17000AFB")]
	protected virtual Vector3 Gravity
	{
		[Token(Token = "0x6003F43")]
		[Address(RVA = "0x5AB29E0", Offset = "0x5AB19E0", VA = "0x5AB29E0", Slot = "58")]
		get
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$get_Gravity): clean
			uint uVar1;
			uint uVar2;
			Vector3 UVar4;

			uVar1 = (Vector3.downVector).x;
			uVar2 = (Vector3.downVector).y;
			UVar4.x = (float)uVar1 * 20.0;
			UVar4.y = (float)uVar2 * 20.0;
			UVar4.z = (Vector3.downVector).z * 20.0;
			return (Vector3)UVar4;
		}
	}

	[Token(Token = "0x17000AFC")]
	public virtual List<string> EmoteActions
	{
		[Token(Token = "0x6003F44")]
		[Address(RVA = "0x5AB2A30", Offset = "0x5AB1A30", VA = "0x5AB2A30", Slot = "59")]
		get
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$get_EmoteActions): clean
			List<string> __this_00;

			__this_00 = new List<string>();
			return __this_00;
		}
	}

	[Token(Token = "0x17000AFD")]
	public virtual float MaxFootstepDistance
	{
		[Token(Token = "0x6003F45")]
		[Address(RVA = "0x5AB2A90", Offset = "0x5AB1A90", VA = "0x5AB2A90", Slot = "60")]
		get
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$get_MaxFootstepDistance): clean
			return 200.0;
		}
	}

	[Token(Token = "0x17000AFE")]
	public virtual float MaxSoundDistance
	{
		[Token(Token = "0x6003F46")]
		[Address(RVA = "0x5AB2AA0", Offset = "0x5AB1AA0", VA = "0x5AB2AA0", Slot = "61")]
		get
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$get_MaxSoundDistance): clean
			return 500.0;
		}
	}

	[Token(Token = "0x17000AFF")]
	public virtual float LODQualityMediumDistance
	{
		[Token(Token = "0x6003F47")]
		[Address(RVA = "0x5AB2AB0", Offset = "0x5AB1AB0", VA = "0x5AB2AB0", Slot = "62")]
		get
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$get_LODQualityMediumDistance): clean
			return 500.0;
		}
	}

	[Token(Token = "0x17000B00")]
	public virtual float LODQualityLowDistance
	{
		[Token(Token = "0x6003F48")]
		[Address(RVA = "0x5AB2AC0", Offset = "0x5AB1AC0", VA = "0x5AB2AC0", Slot = "63")]
		get
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$get_LODQualityLowDistance): clean
			return 1000.0;
		}
	}

	[Token(Token = "0x17000B01")]
	public virtual float CullShadowsDistance
	{
		[Token(Token = "0x6003F49")]
		[Address(RVA = "0x5AB2AD0", Offset = "0x5AB1AD0", VA = "0x5AB2AD0", Slot = "64")]
		get
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$get_CullShadowsDistance): clean
			return 1000.0;
		}
	}

	[Token(Token = "0x17000B02")]
	public virtual float CullRendererDistance
	{
		[Token(Token = "0x6003F4A")]
		[Address(RVA = "0x5AB2AE0", Offset = "0x5AB1AE0", VA = "0x5AB2AE0", Slot = "65")]
		get
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$get_CullRendererDistance): clean
			return 5000.0;
		}
	}

	[Token(Token = "0x17000B03")]
	public virtual float CullEffectsDistance
	{
		[Token(Token = "0x6003F4B")]
		[Address(RVA = "0x5AB2AF0", Offset = "0x5AB1AF0", VA = "0x5AB2AF0", Slot = "66")]
		get
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$get_CullEffectsDistance): clean
			return 1000.0;
		}
	}

	[Token(Token = "0x17000B04")]
	public string Name
	{
		[Token(Token = "0x6003F4C")]
		[Address(RVA = "0x5AB2B00", Offset = "0x5AB1B00", VA = "0x5AB2B00")]
		get
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$get_Name): clean
			return this.RichTextName;
		}
		[Token(Token = "0x6003F4D")]
		[Address(RVA = "0x5AB2B10", Offset = "0x5AB1B10", VA = "0x5AB2B10")]
		set
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$set_Name): clean
			String pSVar1;

			this.RichTextName = value;
			pSVar1 = this.RichTextName;
			pSVar1 = MiscExtensions.StripColor(pSVar1);
			this.VisibleName = pSVar1;
			return;
		}
	}

	[Token(Token = "0x17000B05")]
	public virtual LayerMask GroundMask
	{
		[Token(Token = "0x6003F4E")]
		[Address(RVA = "0x5AB2B90", Offset = "0x5AB1B90", VA = "0x5AB2B90", Slot = "67")]
		get
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$get_GroundMask): clean
			return (LayerMask)(LayerMask)this.GroundMaskLayers.m_Mask;
		}
	}

	[Token(Token = "0x17000B06")]
	protected virtual float GroundDistance
	{
		[Token(Token = "0x6003F4F")]
		[Address(RVA = "0x5AB2BA0", Offset = "0x5AB1BA0", VA = "0x5AB2BA0", Slot = "68")]
		get
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$get_GroundDistance): clean
			return 0.3;
		}
	}

	[Token(Token = "0x14000004")]
	public event Action<ExitGames.Client.Photon.Hashtable> OnPlayerPropertiesChanged
	{
		[Token(Token = "0x6003F50")]
		[Address(RVA = "0x5AB2BB0", Offset = "0x5AB1BB0", VA = "0x5AB2BB0")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$add_OnPlayerPropertiesChanged): 1 lines keep C-only constructs
			Action<Hashtable> pSVar2;
			Delegate obj;
			object value_00;
			Action<Hashtable> a;
			bool bVar3;

			a = this.OnPlayerPropertiesChanged;
			do {
				obj = Delegate.Combine((Delegate)a, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<Hashtable>);
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&this.OnPlayerPropertiesChanged, value_00, a);
				bVar3 = pSVar2 != a;
				a = pSVar2;
			} while (bVar3);
			return;
		}
		[Token(Token = "0x6003F51")]
		[Address(RVA = "0x5AB2C60", Offset = "0x5AB1C60", VA = "0x5AB2C60")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$remove_OnPlayerPropertiesChanged): 1 lines keep C-only constructs
			Action<Hashtable> pSVar2;
			Delegate obj;
			object value_00;
			Action<Hashtable> source;
			bool bVar3;

			source = this.OnPlayerPropertiesChanged;
			do {
				obj = Delegate.Remove((Delegate)source, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<Hashtable>);
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&this.OnPlayerPropertiesChanged, value_00, source);
				bVar3 = pSVar2 != source;
				source = pSVar2;
			} while (bVar3);
			return;
		}
	}

	[Token(Token = "0x6003F52")]
	[Address(RVA = "0x5AB2D10", Offset = "0x5AB1D10", VA = "0x5AB2D10", Slot = "69")]
	public virtual bool AlwaysAnimate()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$AlwaysAnimate): clean
		return false;
	}

	[Token(Token = "0x6003F53")]
	[Address(RVA = "0x5AB2D20", Offset = "0x5AB1D20", VA = "0x5AB2D20")]
	public void RefreshRenderers()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$RefreshRenderers): clean
		AnimationHandler __this_00;

		__this_00 = this.Animation;
		if (__this_00 == null) {
			return;
		}
		__this_00.RefreshRenderers();
		return;
	}

	[Token(Token = "0x6003F54")]
	[Address(RVA = "0x5AB2D40", Offset = "0x5AB1D40", VA = "0x5AB2D40")]
	protected void ToggleParticles(ParticleSystem system, bool toggle)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$ToggleParticles): clean
		bool bVar1;

		if (system == null) {
			throw new NullReferenceException();
		}
		bVar1 = system.isEmitting;
		if (bVar1 == toggle) {
			return;
		}
		if (toggle) {
			system.Play();
			return;
		}
		system.Stop();
		return;
	}

	[Token(Token = "0x6003F55")]
	[Address(RVA = "0x5AB2D90", Offset = "0x5AB1D90", VA = "0x5AB2D90", Slot = "70")]
	public virtual void OnDistanceUpdate(float distance, float soundDistance)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$OnDistanceUpdate): clean
		AnimationHandler __this_00;
		float fVar1;

		fVar1 = this.get_MaxFootstepDistance();
		this.FootstepsEnabled = soundDistance < fVar1;
		fVar1 = this.get_MaxSoundDistance();
		this.SoundsEnabled = soundDistance < fVar1;
		fVar1 = this.get_CullEffectsDistance();
		this.EffectsEnabled = distance < fVar1;
		__this_00 = this.Animation;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnDistanceUpdate(distance);
		return;
	}

	[Token(Token = "0x6003F56")]
	[Address(RVA = "0x5AB2E20", Offset = "0x5AB1E20", VA = "0x5AB2E20", Slot = "47")]
	public override void OnPlayerPropertiesUpdate(Player targetPlayer, ExitGames.Client.Photon.Hashtable changedProps)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$OnPlayerPropertiesUpdate): 1 lines keep C-only constructs
		Action<Hashtable> pSVar1;
		code *vtableDispatch;
		PhotonView pPVar2;

		pPVar2 = this.photonView;
		if (pPVar2 == null) {
			throw new NullReferenceException();
		}
		if ((pPVar2._Owner_k__BackingField == targetPlayer) &&(pSVar1 = this.OnPlayerPropertiesChanged, pSVar1 != null)) {
			vtableDispatch = (code)pSVar1.invoke_impl;
			(*vtableDispatch)(pSVar1.method_code,changedProps,pSVar1.method,vtableDispatch);
			return;
		}
		return;
	}

	[Token(Token = "0x6003F57")]
	[Address(RVA = "0x5AB2E70", Offset = "0x5AB1E70", VA = "0x5AB2E70")]
	public void SetKinematic(bool kinematic, float forTime = 0f)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$SetKinematic): clean
		BaseComponentCache pUVar1;
		Rigidbody __this_00;

		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.Rigidbody;
			if (__this_00 != null) {
				__this_00.isKinematic = kinematic;
				this._disableKinematicTimeLeft = forTime;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F58")]
	[Address(RVA = "0x5AB2EC0", Offset = "0x5AB1EC0", VA = "0x5AB2EC0")]
	public Vector3 GetVelocity()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetVelocity): clean
		BaseMovementSync pCVar1;
		BaseComponentCache pUVar2;
		Rigidbody __this_00;
		bool bVar3;
		Vector3 UVar4;

		bVar3 = this.IsMine();
		if (!bVar3) {
			pCVar1 = this.MovementSync;
			bVar3 = ((Object)pCVar1 != null);
			if (bVar3) {
				pCVar1 = this.MovementSync;
				if (pCVar1 != null) {
					return (Vector3)pCVar1._correctVelocity;
				}
				goto label_05bb2f6b;
			}
		}
		pUVar2 = this.Cache;
		if ((pUVar2 != null) &&(__this_00 = pUVar2.Rigidbody, __this_00 != null)) {
			UVar4 = (Vector3)__this_00.linearVelocity ;
			return (Vector3)UVar4;
		}
	label_05bb2f6b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F59")]
	[Address(RVA = "0x5AB2F70", Offset = "0x5AB1F70", VA = "0x5AB2F70")]
	public void Reveal(float startDelay, float activeTime)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$Reveal): clean
		BaseCharacter.d__81<RevealAndRemove> __this_00;

		__this_00 = new BaseCharacter.d__81<RevealAndRemove>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.startDelay = startDelay;
		__this_00.seconds = activeTime;
		this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x6003F5A")]
	[Address(RVA = "0x5AB3090", Offset = "0x5AB2090", VA = "0x5AB3090")]
	public void AddOutline()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$AddOutline): clean
		Color color;

		color.b = 1.0;
		color.a = 1.0;
		color.r = 1.0;
		color.g = 1.0;
		this.AddOutlineWithColor(color, 0);
		return;
	}

	[Token(Token = "0x6003F5B")]
	[Address(RVA = "0x5AB3180", Offset = "0x5AB2180", VA = "0x5AB3180")]
	public void AddVisibleOutlineWithColor(Color color)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$AddVisibleOutlineWithColor): clean


		this.AddOutlineWithColor(color, 1);
		return;
	}

	[Token(Token = "0x6003F5C")]
	[Address(RVA = "0x5AB30B0", Offset = "0x5AB20B0", VA = "0x5AB30B0")]
	public void AddOutlineWithColor(Color color, Outline.Mode mode)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$AddOutlineWithColor): clean
		Outline pOVar1;
		bool bVar2;

		pOVar1 = this.OutlineComponent;
		bVar2 = ((Object)pOVar1 != null);
		if (bVar2) {
			pOVar1 = this.OutlineComponent;
			if (pOVar1 != null) {
				pOVar1.OutlineMode = mode;
				pOVar1 = this.OutlineComponent;
				if (pOVar1 != null) {
					pOVar1.OutlineColor = color;
					pOVar1 = this.OutlineComponent;
					if (pOVar1 != null) {
						pOVar1.enabled = true;
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x6003F5D")]
	[Address(RVA = "0x5AB3190", Offset = "0x5AB2190", VA = "0x5AB3190")]
	public void ChangeOutlineColor(Color color)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$ChangeOutlineColor): clean
		Outline pOVar1;
		bool bVar2;

		pOVar1 = this.OutlineComponent;
		bVar2 = ((Object)pOVar1 != null);
		if (bVar2) {
			pOVar1 = this.OutlineComponent;
			if (pOVar1 == null) {
				throw new NullReferenceException();
			}
			pOVar1.OutlineColor = color;
			return;
		}
		return;
	}

	[Token(Token = "0x6003F5E")]
	[Address(RVA = "0x5AB3220", Offset = "0x5AB2220", VA = "0x5AB3220")]
	public void ChangeOutlineMode(Outline.Mode mode)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$ChangeOutlineMode): clean
		Outline pOVar1;
		bool bVar2;

		pOVar1 = this.OutlineComponent;
		bVar2 = ((Object)pOVar1 != null);
		if (bVar2) {
			pOVar1 = this.OutlineComponent;
			if (pOVar1 == null) {
				throw new NullReferenceException();
			}
			pOVar1.OutlineMode = mode;
			return;
		}
		return;
	}

	[Token(Token = "0x6003F5F")]
	[Address(RVA = "0x5AB32A0", Offset = "0x5AB22A0", VA = "0x5AB32A0")]
	public void ChangeOutlineWidth(float width)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$ChangeOutlineWidth): clean
		Outline pOVar1;
		bool bVar2;

		pOVar1 = this.OutlineComponent;
		bVar2 = ((Object)pOVar1 != null);
		if (bVar2) {
			pOVar1 = this.OutlineComponent;
			if (pOVar1 == null) {
				throw new NullReferenceException();
			}
			pOVar1.OutlineWidth = width;
			return;
		}
		return;
	}

	[Token(Token = "0x6003F60")]
	[Address(RVA = "0x5AB3330", Offset = "0x5AB2330", VA = "0x5AB3330")]
	public void RemoveOutline()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$RemoveOutline): clean
		Outline pOVar1;
		bool bVar2;

		pOVar1 = this.OutlineComponent;
		bVar2 = ((Object)pOVar1 != null);
		if (bVar2) {
			pOVar1 = this.OutlineComponent;
			if (pOVar1 == null) {
				throw new NullReferenceException();
			}
			pOVar1.enabled = false;
			return;
		}
		return;
	}

	[Token(Token = "0x6003F61")]
	[Address(RVA = "0x5AB3000", Offset = "0x5AB2000", VA = "0x5AB3000")]
	[IteratorStateMachine(typeof(_003CRevealAndRemove_003Ed__81))]
	private IEnumerator RevealAndRemove(float startDelay, float seconds)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$RevealAndRemove): clean
		BaseCharacter.d__81<RevealAndRemove> __this_00;

		__this_00 = new BaseCharacter.d__81<RevealAndRemove>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.startDelay = startDelay;
		__this_00.seconds = seconds;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6003F62")]
	[Address(RVA = "0x5AB33D0", Offset = "0x5AB23D0", VA = "0x5AB33D0", Slot = "71")]
	public virtual string GetTeam()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetTeam): clean
		return this.Team;
	}

	[Token(Token = "0x6003F63")]
	[Address(RVA = "0x5AB33E0", Offset = "0x5AB23E0", VA = "0x5AB33E0", Slot = "72")]
	public virtual Vector3 GetPosition()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetPosition): clean
		BaseComponentCache pUVar1;
		Transform pUVar2;
		bool bVar3;
		Vector3 UVar4;

		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			pUVar2 = pUVar1.Transform;
			bVar3 = ((Object)pUVar2 != null);
			if (bVar3) {
				pUVar1 = this.Cache;
				if ((pUVar1 == null) ||(pUVar2 = pUVar1.Transform, pUVar2 == null)) {
					throw new NullReferenceException();
				}
				UVar4 = (Vector3)pUVar2.position;
				return (Vector3)UVar4;
			}
		}
		return (Vector3)(Vector3.zeroVector);
	}

	[Token(Token = "0x6003F64")]
	[Address(RVA = "0x5AB34B0", Offset = "0x5AB24B0", VA = "0x5AB34B0", Slot = "73")]
	public virtual bool ValidTarget()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$ValidTarget): clean
		bool bVar1;
		bool bVar2;

		bVar1 = ((Object)this == null);
		if (!bVar1) {
			bVar2 = this.Dead == false;
		}
		return bVar2;
	}

	[Token(Token = "0x6003F65")]
	[Address(RVA = "0x5AB3510", Offset = "0x5AB2510", VA = "0x5AB3510", Slot = "74")]
	public virtual bool IsMine()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$IsMine): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;

		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) {
			throw new NullReferenceException();
		}
		return pPVar2._IsMine_k__BackingField;
	}

	[Token(Token = "0x6003F66")]
	[Address(RVA = "0x5AB3540", Offset = "0x5AB2540", VA = "0x5AB3540")]
	public bool IsMainCharacter()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$IsMainCharacter): clean
		InGameManager pGVar1;
		BaseCharacter x;
		bool bVar2;

		pGVar1 = this._inGameManager;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		x = pGVar1.CurrentCharacter;
		bVar2 = ((Object)x == (Object)this);
		return bVar2;
	}

	[Token(Token = "0x6003F67")]
	[Address(RVA = "0x5AB35B0", Offset = "0x5AB25B0", VA = "0x5AB35B0", Slot = "75")]
	public virtual void Init(bool ai, string team)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$Init): 7 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		ulong in_RAX;
		Player pPVar2;
		String pSVar3;
		Object[] parameters;
		object pIVar4;
		object pIVar5;
		ulong uStack_38;

		uStack_38 = in_RAX;
		if (Il2CppMethodInitialized_075474e2 == false) {
			Il2CppMethodInitialized_075474e2 = true;
			this.AI = ai;
			this.HasExplicitNameTag = false;
			if (!ai) goto label_05bb3655;
	label_05bb35de: ;
			pUVar1 = this.Cache;
		}
		else {
			this.AI = ai;
			this.HasExplicitNameTag = false;
			if (ai) goto label_05bb35de;
	label_05bb3655: ;
			pPVar2 = PhotonNetwork.LocalPlayer;
			pSVar3 = PhotonExtensions.GetStringProperty(pPVar2, PlayerProperty.Name, "");
			pSVar3 = MiscExtensions.StripIllegalRichText(pSVar3);
			this.RichTextName = pSVar3;
			pSVar3 = this.RichTextName;
			pSVar3 = MiscExtensions.StripColor(pSVar3);
			this.VisibleName = pSVar3;
			pPVar2 = PhotonNetwork.LocalPlayer;
			pSVar3 = PhotonExtensions.GetStringProperty(pPVar2, PlayerProperty.Guild, "");
			pSVar3 = MiscExtensions.StripIllegalRichText(pSVar3);
			this.Guild = pSVar3;
			pUVar1 = this.Cache;
		}
		if (pUVar1 != null) {
			__this_00 = pUVar1.PhotonView;
			parameters = (Object[])new object[3];
			uStack_38 = CONCAT17(this.AI, (undefined7)uStack_38);
			pIVar4 = (object)(((long)&uStack_38 + 7));
			if (parameters != null) {
				if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((parameters.obj).klass)._1).element_class), pIVar5 == null)) {
	label_05bb38c7: ;
					pIVar4 = new ArrayTypeMismatchException();
					throw pIVar4;
				}
				if ((int)parameters.Length != 0) {
					parameters[0] = pIVar4;
					pSVar3 = this.RichTextName;
					if ((pSVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) goto label_05bb38c7;
					if ((parameters.Length & 0xfffffffe) != 0) {
						parameters[1] = (object)pSVar3;
						pSVar3 = this.Guild;
						if ((pSVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) goto label_05bb38c7;
						if (2 < (uint)parameters.Length) {
							parameters[2] = (object)pSVar3;
							if (__this_00 != null) {
								__this_00.RPC("InitRPC", 3, parameters);
								this.SetTeam(team);
								return;
							}
							goto label_05bb38c2;
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05bb38c2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F68")]
	[Address(RVA = "0x5AB39B0", Offset = "0x5AB29B0", VA = "0x5AB39B0", Slot = "76")]
	public virtual Vector3 GetAimPoint()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetAimPoint): clean
		BaseCamera pCVar1;
		Camera __this_00;
		Vector3 UVar2;
		Ray local_20;

		pCVar1 = SceneLoader.CurrentCamera;
		if (pCVar1 != null) {
			__this_00 = pCVar1.Camera;
			UVar2 = CursorManager.GetInGameMousePosition();
			if (__this_00 != null) {
				local_20 = __this_00.ScreenPointToRay(UVar2);
				UVar2.z = local_20.m_Direction.z * 1000.0 + local_20.m_Origin.z;
				UVar2.x = local_20.m_Direction.x * 1000.0 + local_20.m_Origin.x;
				UVar2.y = local_20.m_Direction.y * 1000.0 + local_20.m_Origin.y;
				return (Vector3)UVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F69")]
	[Address(RVA = "0x5AB38E0", Offset = "0x5AB28E0", VA = "0x5AB38E0")]
	public void SetTeam(string team)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$SetTeam): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		Object[] parameters;
		object pIVar2;

		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.PhotonView;
			parameters = (Object[])new object[1];
			if (parameters != null) {
				if (team != null) {
					pIVar2 = il2cpp_vm_Object_IsInst((object)team, (((parameters.obj).klass)._1).element_class);
					if (pIVar2 == null) {
						pIVar2 = new ArrayTypeMismatchException();
						throw pIVar2;
					}
				}
				if ((int)parameters.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				parameters[0] = (object)team;
				if (__this_00 != null) {
					__this_00.RPC("SetTeamRPC", 0, parameters);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F6A")]
	[Address(RVA = "0x5AB3A70", Offset = "0x5AB2A70", VA = "0x5AB3A70", Slot = "77")]
	public virtual Transform GetCameraAnchor()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetCameraAnchor): clean
		BaseComponentCache pUVar1;

		pUVar1 = this.Cache;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		return pUVar1.Transform;
	}

	[Token(Token = "0x6003F6B")]
	[Address(RVA = "0x5AB3A90", Offset = "0x5AB2A90", VA = "0x5AB3A90", Slot = "78")]
	protected virtual void CreateCache(BaseComponentCache cache)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$CreateCache): 2 lines keep C-only constructs
		BaseComponentCache* targetAddress;
		GameObject owner;
		BaseComponentCache __this_00;

		targetAddress = &this.Cache;
		this.Cache = cache;
		if (cache == null) {
			owner = this.gameObject;
			__this_00 = new BaseComponentCache(owner);
			this.Cache = __this_00;
			return;
		}
		return;
	}

	[Token(Token = "0x6003F6C")]
	[Address(RVA = "0x5AB3B30", Offset = "0x5AB2B30", VA = "0x5AB3B30", Slot = "79")]
	protected virtual void CreateDetection()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$CreateDetection): clean
		this.Detection = null;
		return;
	}

	[Token(Token = "0x6003F6D")]
	[Address(RVA = "0x5AB3B50", Offset = "0x5AB2B50", VA = "0x5AB3B50", Slot = "80")]
	public virtual void Emote(string emote)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$Emote): clean
		return;
	}

	[Token(Token = "0x6003F6E")]
	[Address(RVA = "0x5AB3B60", Offset = "0x5AB2B60", VA = "0x5AB3B60", Slot = "81")]
	public virtual void ForceAnimation(string animation, float fade)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$ForceAnimation): clean
		return;
	}

	[Token(Token = "0x6003F6F")]
	[Address(RVA = "0x5AB3B70", Offset = "0x5AB2B70", VA = "0x5AB3B70")]
	[PunRPC]
	public void InitRPC(bool ai, string name, string guild, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$InitRPC): clean
		PhotonView pPVar1;
		String pSVar2;

		if (info.Sender != null) {
			pPVar1 = this.photonView;
			if (pPVar1 == null) {
				throw new NullReferenceException();
			}
			if (info.Sender != pPVar1._Owner_k__BackingField) {
				return;
			}
		}
		this.AI = ai;
		pSVar2 = RoleSpriteHelpers.SanitizePlayerText(info.Sender, name);
		pSVar2 = MiscExtensions.StripIllegalRichText(pSVar2);
		this.RichTextName = pSVar2;
		pSVar2 = this.RichTextName;
		pSVar2 = MiscExtensions.StripColor(pSVar2);
		this.VisibleName = pSVar2;
		pSVar2 = RoleSpriteHelpers.SanitizePlayerText(info.Sender, guild);
		pSVar2 = MiscExtensions.StripIllegalRichText(pSVar2);
		this.Guild = pSVar2;
		return;
	}

	[Token(Token = "0x6003F70")]
	[Address(RVA = "0x5AB3CD0", Offset = "0x5AB2CD0", VA = "0x5AB3CD0")]
	[PunRPC]
	public void SetHealthRPC(int currentHealth, int maxHealth, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$SetHealthRPC): clean
		PhotonView pPVar1;

		pPVar1 = this.photonView;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar1._Owner_k__BackingField) {
			this.CurrentHealth = currentHealth;
			this.MaxHealth = maxHealth;
		}
		return;
	}

	[Token(Token = "0x6003F71")]
	[Address(RVA = "0x5AB3D20", Offset = "0x5AB2D20", VA = "0x5AB3D20")]
	[PunRPC]
	public void SetTeamRPC(string team, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$SetTeamRPC): clean
		String b;
		BaseDetection __this_00;
		bool bVar1;
		PhotonView pPVar2;

		pPVar2 = this.photonView;
		if (pPVar2 == null) {
	label_05bb3d9b: ;
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar2._Owner_k__BackingField) {
			b = this.Team;
			this.Team = team;
			if (this.Detection != null) {
				bVar1 = (team != b);
				if (bVar1) {
					__this_00 = this.Detection;
					if (__this_00 != null) {
						__this_00.OnTeamChanged();
						return;
					}
					goto label_05bb3d9b;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6003F72")]
	[Address(RVA = "0x5AB3DA0", Offset = "0x5AB2DA0", VA = "0x5AB3DA0")]
	public void SetCurrentHealth(int currentHealth)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$SetCurrentHealth): clean
		int iVar1;
		int iVar2;

		iVar1 = this.MaxHealth;
		if (currentHealth < iVar1) {
			iVar1 = currentHealth;
		}
		iVar2 = 0;
		if (0 < iVar1) {
			iVar2 = iVar1;
		}
		this.CurrentHealth = iVar2;
		this.OnHealthChange();
		if (this.CurrentHealth < 1) {
			this.Die();
			return;
		}
		return;
	}

	[Token(Token = "0x6003F73")]
	[Address(RVA = "0x5AB3DF0", Offset = "0x5AB2DF0", VA = "0x5AB3DF0")]
	public void SetMaxHealth(int maxHealth)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$SetMaxHealth): clean
		int iVar1;

		this.MaxHealth = maxHealth;
		iVar1 = this.CurrentHealth;
		if (iVar1 < maxHealth) {
			maxHealth = iVar1;
		}
		iVar1 = 0;
		if (0 < maxHealth) {
			iVar1 = maxHealth;
		}
		this.CurrentHealth = iVar1;
		this.OnHealthChange();
		if (this.CurrentHealth < 1) {
			this.Die();
			return;
		}
		return;
	}

	[Token(Token = "0x6003F74")]
	[Address(RVA = "0x5AB3E50", Offset = "0x5AB2E50", VA = "0x5AB3E50")]
	public void SetHealth(int health)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$SetHealth): clean
		int iVar1;

		iVar1 = 0;
		if (0 < health) {
			iVar1 = health;
		}
		this.MaxHealth = health;
		this.CurrentHealth = iVar1;
		this.OnHealthChange();
		if (this.CurrentHealth < 1) {
			this.Die();
			return;
		}
		return;
	}

	[Token(Token = "0x6003F75")]
	[Address(RVA = "0x5AB3EA0", Offset = "0x5AB2EA0", VA = "0x5AB3EA0", Slot = "82")]
	public virtual void TakeDamage(int damage)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$TakeDamage): clean
		int iVar1;
		int iVar2;

		iVar2 = this.CurrentHealth - damage;
		iVar1 = this.MaxHealth;
		if (iVar1 <= iVar2) {
			iVar2 = iVar1;
		}
		iVar1 = 0;
		if (0 < iVar2) {
			iVar1 = iVar2;
		}
		this.CurrentHealth = iVar1;
		this.OnHealthChange();
		if (this.CurrentHealth < 1) {
			this.Die();
			return;
		}
		return;
	}

	[Token(Token = "0x6003F76")]
	[Address(RVA = "0x5AB3F00", Offset = "0x5AB2F00", VA = "0x5AB3F00", Slot = "83")]
	public virtual void Die()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$Die): clean
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		InGameManager pGVar2;
		BaseCharacter x;
		bool bVar3;
		Object[] parameters;
		IEnumerator routine;

		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.PhotonView;
			parameters = (Object[])new object[0];
			if (__this_00 != null) {
				__this_00.RPC("MarkDeadRPC", 3, parameters);
				pGVar2 = this._inGameManager;
				if (pGVar2 != null) {
					x = pGVar2.CurrentCharacter;
					bVar3 = ((Object)x == (Object)this);
					if (bVar3) {
						pGVar2 = this._inGameManager;
						if (pGVar2 == null) goto label_05bb400c;
						pGVar2.RegisterMainCharacterDie();
					}
					routine = this.WaitAndDie();
					this.StartCoroutine(routine);
					return;
				}
			}
		}
	label_05bb400c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F77")]
	[Address(RVA = "0x5AB4020", Offset = "0x5AB3020", VA = "0x5AB4020", Slot = "84")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__103))]
	protected virtual IEnumerator WaitAndDie()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$WaitAndDie): clean
		BaseCharacter.d__103<WaitAndDie> __this_00;

		__this_00 = new BaseCharacter.d__103<WaitAndDie>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6003F78")]
	[Address(RVA = "0x5AB40B0", Offset = "0x5AB30B0", VA = "0x5AB40B0", Slot = "85")]
	public virtual void UseItem(int item)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$UseItem): clean
		List<BaseUseable> __this_00;
		BaseUseable pCVar1;

		__this_00 = this.Items;
		if (__this_00 != null) {
			pCVar1 = __this_00.get_Item(item) ;
			if (pCVar1 != null) {
				pCVar1.SetInput(true);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F79")]
	[Address(RVA = "0x5AB4120", Offset = "0x5AB3120", VA = "0x5AB4120", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$OnPlayerEnteredRoom): 5 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		String obj;
		AnimationHandler pCVar3;
		bool bVar4;
		Object[] pSVar5;
		object pIVar6;
		object pIVar7;
		MethodInfo pMVar8;
		float local_3c;
		int local_38;
		int local_34;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if (pPVar2._IsMine_k__BackingField == false) {
				return;
			}
			pSVar5 = (Object[])new object[2];
			local_34 = this.CurrentHealth;
			pIVar6 = (object)local_34;
			if (pSVar5 != null) {
				if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) {
	label_05bb4471: ;
					pIVar6 = new ArrayTypeMismatchException();
					throw pIVar6;
				}
				if ((int)pSVar5.Length != 0) {
					pSVar5[0] = pIVar6;
					local_38 = this.MaxHealth;
					pIVar6 = (object)local_38;
					if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class), pIVar7 == null)) goto label_05bb4471;
					if ((pSVar5.Length & 0xfffffffe) != 0) {
						pSVar5[1] = pIVar6;
						pPVar2.RPC("SetHealthRPC", player, pSVar5);
						pUVar1 = this.Cache;
						if (pUVar1 != null) {
							pPVar2 = pUVar1.PhotonView;
							pSVar5 = (Object[])new object[1];
							if (pSVar5 != null) {
								obj = this.Team;
								if ((obj != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)obj, (((pSVar5.obj).klass)._1).element_class), pIVar6 == null)) goto label_05bb4471;
								if ((int)pSVar5.Length == 0) goto label_05bb446c;
								pSVar5[0] = (object)obj;
								if (pPVar2 != null) {
									pMVar8 = (MethodInfo *)"SetTeamRPC";
									pPVar2.RPC("SetTeamRPC", player, pSVar5);
									pCVar3 = this.Animation;
									if (pCVar3 != null) {
										pMVar8 = (MethodInfo)pCVar3.GetCurrentAnimation();
										bVar4 = ((String)pMVar8 != "");
										if (!bVar4) {
											return;
										}
										pUVar1 = this.Cache;
										if (pUVar1 != null) {
											pPVar2 = pUVar1.PhotonView;
											pSVar5 = (Object[])new object[2];
											if (pSVar5 != null) {
												if ((pMVar8 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)pMVar8, (((pSVar5.obj).klass)._1).element_class), pIVar6 == null)) goto label_05bb4471;
												if ((int)pSVar5.Length == 0) goto label_05bb446c;
												pSVar5[0] = (object)pMVar8;
												pCVar3 = this.Animation;
												if (pCVar3 != null) {
													local_3c = pCVar3.GetCurrentNormalizedTime();
													pIVar6 = (object)local_3c;
													if ((pIVar6 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pSVar5.obj).klass)._1).element_class) , pIVar7 == null)) goto label_05bb4471;
													if ((pSVar5.Length & 0xfffffffe) == 0) goto label_05bb446c;
													pSVar5[1] = pIVar6;
													if (pPVar2 != null) {
														pPVar2.RPC("PlayAnimationRPC", player, pSVar5);
														return;
													}
												}
											}
										}
									}
								}
							}
						}
						goto label_05bb4467;
					}
				}
	label_05bb446c: ;
				throw new IndexOutOfRangeException();
			}
		}
	label_05bb4467: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F7A")]
	[Address(RVA = "0x5AB44A0", Offset = "0x5AB34A0", VA = "0x5AB44A0")]
	public void PlayAnimation(string animation, float startTime = 0f)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$PlayAnimation): 2 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		bool bVar2;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		float local_1c;

		bVar2 = this.IsMine();
		if (!bVar2) {
			return;
		}
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.PhotonView;
			parameters = (Object[])new object[2];
			if (parameters != null) {
				if ((animation != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)animation, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) {
	label_05bb45ef: ;
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
				if ((int)parameters.Length != 0) {
					parameters[0] = (object)animation;
					local_1c = startTime;
					pIVar3 = (object)local_1c;
					if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) goto label_05bb45ef;
					if ((parameters.Length & 0xfffffffe) != 0) {
						parameters[1] = pIVar3;
						if (__this_00 != null) {
							__this_00.RPC("PlayAnimationRPC", 0, parameters);
							return;
						}
						goto label_05bb45e5;
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05bb45e5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F7B")]
	[Address(RVA = "0x5AB4600", Offset = "0x5AB3600", VA = "0x5AB4600")]
	public void PlayAnimationReset(string animation)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$PlayAnimationReset): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		bool bVar2;
		Object[] parameters;
		object pIVar3;

		bVar2 = this.IsMine();
		if (!bVar2) {
			return;
		}
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.PhotonView;
			parameters = (Object[])new object[1];
			if (parameters != null) {
				if (animation != null) {
					pIVar3 = il2cpp_vm_Object_IsInst((object)animation, (((parameters.obj).klass)._1).element_class);
					if (pIVar3 == null) {
						pIVar3 = new ArrayTypeMismatchException();
						throw pIVar3;
					}
				}
				if ((int)parameters.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				parameters[0] = (object)animation;
				if (__this_00 != null) {
					__this_00.RPC("PlayAnimationResetRPC", 0, parameters);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F7C")]
	[Address(RVA = "0x5AB46F0", Offset = "0x5AB36F0", VA = "0x5AB46F0")]
	[PunRPC]
	public void PlayAnimationRPC(string animation, float startTime, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$PlayAnimationRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		AnimationHandler __this_00;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if (info.Sender != pPVar2._Owner_k__BackingField) {
				return;
			}
			__this_00 = this.Animation;
			if (__this_00 != null) {
				__this_00.Play(animation, startTime, false);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F7D")]
	[Address(RVA = "0x5AB4730", Offset = "0x5AB3730", VA = "0x5AB4730")]
	[PunRPC]
	public void PlayAnimationResetRPC(string animation, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$PlayAnimationResetRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		AnimationHandler __this_00;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if (info.Sender != pPVar2._Owner_k__BackingField) {
				return;
			}
			__this_00 = this.Animation;
			if (__this_00 != null) {
				__this_00.Play(animation, 0.0, true);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F7E")]
	[Address(RVA = "0x5AB4780", Offset = "0x5AB3780", VA = "0x5AB4780")]
	public void PlayAnimationIfNotPlaying(string animation, float startTime = 0f)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$PlayAnimationIfNotPlaying): clean
		AnimationHandler pCVar1;
		Animation __this_00;
		bool bVar2;

		pCVar1 = this.Animation;
		if (pCVar1 == null) {
	label_05bb47eb: ;
			throw new NullReferenceException();
		}
		if (pCVar1._isLegacy == false) {
			bVar2 = (pCVar1._currentAnimation == animation);
		}
		else {
			__this_00 = pCVar1.Animation;
			if (__this_00 == null) goto label_05bb47eb;
			bVar2 = __this_00.IsPlaying(animation);
		}
		if (bVar2) {
			return;
		}
		this.PlayAnimation(animation, startTime);
		return;
	}

	[Token(Token = "0x6003F7F")]
	[Address(RVA = "0x5AB47F0", Offset = "0x5AB37F0", VA = "0x5AB47F0")]
	public void CrossFade(string animation, float fadeTime = 0f, float startTime = 0f)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$CrossFade): 3 lines keep C-only constructs
		Object[] pSVar1;
		BaseComponentCache pUVar2;
		PhotonView __this_00;
		bool bVar3;
		object pIVar4;
		object pIVar5;
		float local_28;
		float local_24;

		bVar3 = this.IsMine();
		if (!bVar3) {
			return;
		}
		pSVar1 = this.crossfadeCache;
		if (pSVar1 != null) {
			if ((animation != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)animation, (((pSVar1.obj).klass)._1).element_class), pIVar4 == null)) {
	label_05bb49a2: ;
				pIVar4 = new ArrayTypeMismatchException();
				throw pIVar4;
			}
			if ((int)pSVar1.Length == 0) {
	label_05bb499d: ;
				throw new IndexOutOfRangeException();
			}
			pSVar1[0] = (object)animation;
			pSVar1 = this.crossfadeCache;
			local_24 = fadeTime;
			pIVar4 = (object)local_24;
			if (pSVar1 != null) {
				if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pSVar1.obj).klass)._1).element_class), pIVar5 == null)) goto label_05bb49a2;
				if ((pSVar1.Length & 0xfffffffe) == 0) goto label_05bb499d;
				pSVar1[1] = pIVar4;
				pSVar1 = this.crossfadeCache;
				local_28 = startTime;
				pIVar4 = (object)local_28;
				if (pSVar1 != null) {
					if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pSVar1.obj).klass)._1).element_class), pIVar5 == null)) goto label_05bb49a2;
					if ((uint)pSVar1.Length < 3) goto label_05bb499d;
					pSVar1[2] = pIVar4;
					pUVar2 = this.Cache;
					if ((pUVar2 != null) &&(__this_00 = pUVar2.PhotonView, __this_00 != null)) {
						__this_00.RPC("CrossFadeRPC", 0, this.crossfadeCache);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F80")]
	[Address(RVA = "0x5AB49C0", Offset = "0x5AB39C0", VA = "0x5AB49C0")]
	public void CrossFadeWithSpeed(string animation, float speed, float fadeTime = 0f, float startTime = 0f)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$CrossFadeWithSpeed): 4 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		bool bVar2;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		float local_2c;
		float local_28;
		float local_24;

		bVar2 = this.IsMine();
		if (!bVar2) {
			return;
		}
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.PhotonView;
			parameters = (Object[])new object[4];
			if (parameters != null) {
				if ((animation != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)animation, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) {
	label_05bb4bcb: ;
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
				if ((int)parameters.Length != 0) {
					parameters[0] = (object)animation;
					local_24 = speed;
					pIVar3 = (object)local_24;
					if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) goto label_05bb4bcb;
					if ((parameters.Length & 0xfffffffe) != 0) {
						parameters[1] = pIVar3;
						local_28 = fadeTime;
						pIVar3 = (object)local_28;
						if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) goto label_05bb4bcb;
						if (2 < (uint)parameters.Length) {
							parameters[2] = pIVar3;
							local_2c = startTime;
							pIVar3 = (object)local_2c;
							if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) goto label_05bb4bcb;
							if ((parameters.Length & 0xfffffffc) != 0) {
								parameters[3] = pIVar3;
								if (__this_00 != null) {
									__this_00.RPC("CrossFadeWithSpeedRPC", 0, parameters);
									return;
								}
								goto label_05bb4bc6;
							}
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05bb4bc6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F81")]
	[Address(RVA = "0x5AB4BE0", Offset = "0x5AB3BE0", VA = "0x5AB4BE0")]
	public void CrossFadeIfNotPlaying(string animation, float fadeTime = 0f, float startTime = 0f)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$CrossFadeIfNotPlaying): clean
		AnimationHandler pCVar1;
		Animation __this_00;
		bool bVar2;

		pCVar1 = this.Animation;
		if (pCVar1 == null) {
	label_05bb4c55: ;
			throw new NullReferenceException();
		}
		if (pCVar1._isLegacy == false) {
			bVar2 = (pCVar1._currentAnimation == animation);
		}
		else {
			__this_00 = pCVar1.Animation;
			if (__this_00 == null) goto label_05bb4c55;
			bVar2 = __this_00.IsPlaying(animation);
		}
		if (bVar2) {
			return;
		}
		this.CrossFade(animation, fadeTime, startTime);
		return;
	}

	[Token(Token = "0x6003F82")]
	[Address(RVA = "0x5AB4C60", Offset = "0x5AB3C60", VA = "0x5AB4C60")]
	public float GetAnimationSpeed(string animation)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetAnimationSpeed): clean
		AnimationHandler pCVar1;
		Dictionary<string, float> __this_00;
		float fVar2;

		pCVar1 = this.Animation;
		if (pCVar1 != null) {
			__this_00 = pCVar1._animationSpeed;
			if (__this_00 != null) {
				fVar2 = __this_00.get_Item((object)animation);
				return fVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F83")]
	[Address(RVA = "0x5AB4CC0", Offset = "0x5AB3CC0", VA = "0x5AB4CC0")]
	public void SetAnimationSpeed(string animation, float speed)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$SetAnimationSpeed): 2 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		Object[] parameters;
		object pIVar2;
		object pIVar3;
		float local_1c;

		pUVar1 = this.Cache;
		if (pUVar1 == null) {
	label_05bb4dea: ;
			throw new NullReferenceException();
		}
		__this_00 = pUVar1.PhotonView;
		parameters = (Object[])new object[2];
		if (parameters == null) goto label_05bb4dea;
		if (animation != null) {
			pIVar2 = il2cpp_vm_Object_IsInst((object)animation, (((parameters.obj).klass)._1).element_class);
			if (pIVar2 == null) goto label_05bb4df4;
		}
		if ((int)parameters.Length != 0) {
			parameters[0] = (object)animation;
			local_1c = speed;
			pIVar2 = (object)local_1c;
			if (pIVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class);
				if (pIVar3 == null) {
	label_05bb4df4: ;
					pIVar2 = new ArrayTypeMismatchException();
					throw pIVar2;
				}
			}
			if ((parameters.Length & 0xfffffffe) != 0) {
				parameters[1] = pIVar2;
				if (__this_00 != null) {
					__this_00.RPC("SetAnimationSpeedRPC", 0, parameters);
					return;
				}
				goto label_05bb4dea;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6003F84")]
	[Address(RVA = "0x5AB4E10", Offset = "0x5AB3E10", VA = "0x5AB4E10")]
	public void SetAnimationSpeedNonRPC(string animation, float speed)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$SetAnimationSpeedNonRPC): clean
		AnimationHandler __this_00;
		Dictionary<string, float> __this_01;

		__this_00 = this.Animation;
		if (__this_00 != null) {
			__this_01 = __this_00._animationSpeed;
			if (__this_01 != null) {
				__this_01.set_Item((object)animation, speed);
				__this_00.ApplySpeed(animation);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F85")]
	[Address(RVA = "0x5AB4E80", Offset = "0x5AB3E80", VA = "0x5AB4E80")]
	[PunRPC]
	public void SetAnimationSpeedRPC(string animation, float speed, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$SetAnimationSpeedRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		AnimationHandler __this_00;
		Dictionary<string, float> __this_01;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if (info.Sender != pPVar2._Owner_k__BackingField) {
				return;
			}
			__this_00 = this.Animation;
			if (__this_00 != null) {
				__this_01 = __this_00._animationSpeed;
				if (__this_01 != null) {
					__this_01.set_Item((object)animation, speed);
					__this_00.ApplySpeed(animation);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F86")]
	[Address(RVA = "0x5AB4F20", Offset = "0x5AB3F20", VA = "0x5AB4F20")]
	[PunRPC]
	public void CrossFadeRPC(string animation, float fadeTime, float startTime, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$CrossFadeRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		AnimationHandler __this_00;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if (info.Sender != pPVar2._Owner_k__BackingField) {
				return;
			}
			__this_00 = this.Animation;
			if (__this_00 != null) {
				__this_00.CrossFade(animation, fadeTime, startTime);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F87")]
	[Address(RVA = "0x5AB4F60", Offset = "0x5AB3F60", VA = "0x5AB4F60")]
	[PunRPC]
	public void CrossFadeWithSpeedRPC(string animation, float speed, float fadeTime, float startTime, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$CrossFadeWithSpeedRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		AnimationHandler pCVar3;
		Dictionary<string, float> __this_00;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if (info.Sender != pPVar2._Owner_k__BackingField) {
				return;
			}
			pCVar3 = this.Animation;
			if (pCVar3 != null) {
				__this_00 = pCVar3._animationSpeed;
				if (__this_00 != null) {
					__this_00.set_Item((object)animation, speed);
					pCVar3.ApplySpeed(animation);
					pCVar3 = this.Animation;
					if (pCVar3 != null) {
						pCVar3.CrossFade(animation, fadeTime, startTime);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F88")]
	[Address(RVA = "0x5AB5040", Offset = "0x5AB4040", VA = "0x5AB5040")]
	public void PlaySound(string sound)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$PlaySound): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		Dictionary<object, object> __this_00;
		PhotonView __this_01;
		bool bVar2;
		Object[] parameters;
		object pIVar3;

		bVar2 = this.IsMine();
		if (!bVar2) {
			return;
		}
		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(__this_00 = (Dictionary<object, object>)pUVar1.AudioSources, __this_00 != null)) {
			bVar2 = __this_00.ContainsKey((object)sound);
			if (!bVar2) {
				return;
			}
			pUVar1 = this.Cache;
			if (pUVar1 != null) {
				__this_01 = pUVar1.PhotonView;
				parameters = (Object[])new object[1];
				if (parameters != null) {
					if ((sound != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)sound, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) {
						pIVar3 = new ArrayTypeMismatchException();
						throw pIVar3;
					}
					if ((int)parameters.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[0] = (object)sound;
					if (__this_01 != null) {
						__this_01.RPC("PlaySoundRPC", 0, parameters);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F89")]
	[Address(RVA = "0x5AB5190", Offset = "0x5AB4190", VA = "0x5AB5190")]
	public bool HasSound(string sound)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$HasSound): clean
		BaseComponentCache pUVar1;
		Dictionary<object, object> __this_00;
		bool bVar2;

		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(__this_00 = (Dictionary<object, object>)pUVar1.AudioSources, __this_00 == null)) {
			throw new NullReferenceException();
		}
		bVar2 = __this_00.ContainsKey((object)sound);
		return bVar2;
	}

	[Token(Token = "0x6003F8A")]
	[Address(RVA = "0x5AB51F0", Offset = "0x5AB41F0", VA = "0x5AB51F0")]
	public bool IsPlayingSound(string sound)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$IsPlayingSound): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		Dictionary<object, object> __this_00;
		bool bVar2;
		AudioSource local_18;

		local_18 = null;
		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(__this_00 = (Dictionary<object, object>)pUVar1.AudioSources, __this_00 != null)) {
			bVar2 = __this_00.TryGetValue((object)sound, (object*)&local_18);
			if (!bVar2) {
				return false;
			}
			if (local_18 != null) {
				bVar2 = local_18.isPlaying;
				return bVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F8B")]
	[Address(RVA = "0x5AB5280", Offset = "0x5AB4280", VA = "0x5AB5280")]
	[IteratorStateMachine(typeof(_003CWaitAndPlaySound_003Ed__124))]
	protected IEnumerator WaitAndPlaySound(string sound, float delay)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$WaitAndPlaySound): clean
		BaseCharacter.d__124<WaitAndPlaySound> __this_00;

		__this_00 = new BaseCharacter.d__124<WaitAndPlaySound>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.sound = sound;
		__this_00.delay = delay;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6003F8C")]
	[Address(RVA = "0x5AB5330", Offset = "0x5AB4330", VA = "0x5AB5330", Slot = "86")]
	[PunRPC]
	public virtual void PlaySoundRPC(string sound, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$PlaySoundRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		Dictionary<object, object> pSVar3;
		bool bVar4;
		AudioSource __this_00;

		if (info.Sender != null) {
			pUVar1 = this.Cache;
			if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) goto label_05bb5405;
			if (info.Sender != pPVar2._Owner_k__BackingField) {
				return;
			}
		}
		if (this.SoundsEnabled == false) {
			return;
		}
		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pSVar3 = (Dictionary<object, object>)pUVar1.AudioSources, pSVar3 != null)) {
			bVar4 = pSVar3.ContainsKey((object)sound);
			if (!bVar4) {
				return;
			}
			pUVar1 = this.Cache;
			if (((pUVar1 != null) &&(pSVar3 = (Dictionary<object, object>)pUVar1.AudioSources, pSVar3 != null)) &&(__this_00 = pSVar3.get_Item((object)sound), __this_00 != null)) {
				__this_00.Play();
				return;
			}
		}
	label_05bb5405: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F8D")]
	[Address(RVA = "0x5AB5410", Offset = "0x5AB4410", VA = "0x5AB5410")]
	public void StopSound(string sound)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$StopSound): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		Dictionary<object, object> __this_00;
		PhotonView __this_01;
		bool bVar2;
		Object[] parameters;
		object pIVar3;

		bVar2 = this.IsMine();
		if (!bVar2) {
			return;
		}
		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(__this_00 = (Dictionary<object, object>)pUVar1.AudioSources, __this_00 != null)) {
			bVar2 = __this_00.ContainsKey((object)sound);
			if (!bVar2) {
				return;
			}
			pUVar1 = this.Cache;
			if (pUVar1 != null) {
				__this_01 = pUVar1.PhotonView;
				parameters = (Object[])new object[1];
				if (parameters != null) {
					if ((sound != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)sound, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) {
						pIVar3 = new ArrayTypeMismatchException();
						throw pIVar3;
					}
					if ((int)parameters.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[0] = (object)sound;
					if (__this_01 != null) {
						__this_01.RPC("StopSoundRPC", 0, parameters);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F8E")]
	[Address(RVA = "0x5AB5560", Offset = "0x5AB4560", VA = "0x5AB5560")]
	public void FadeSound(string sound, float volume, float time)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$FadeSound): 3 lines keep C-only constructs
		BaseComponentCache pUVar1;
		Dictionary<object, object> __this_00;
		PhotonView __this_01;
		bool bVar2;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		float local_28;
		float fStack_24;

		bVar2 = this.IsMine();
		if (!bVar2) {
			return;
		}
		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(__this_00 = (Dictionary<object, object>)pUVar1.AudioSources, __this_00 != null)) {
			bVar2 = __this_00.ContainsKey((object)sound);
			if (!bVar2) {
				return;
			}
			pUVar1 = this.Cache;
			if (pUVar1 != null) {
				__this_01 = pUVar1.PhotonView;
				parameters = (Object[])new object[3];
				if (parameters != null) {
					if ((sound != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)sound, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) {
	label_05bb5762: ;
						pIVar3 = new ArrayTypeMismatchException();
						throw pIVar3;
					}
					if ((int)parameters.Length != 0) {
						parameters[0] = (object)sound;
						fStack_24 = volume;
						pIVar3 = (object)fStack_24;
						if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) goto label_05bb5762;
						if ((parameters.Length & 0xfffffffe) != 0) {
							parameters[1] = pIVar3;
							local_28 = time;
							pIVar3 = (object)local_28;
							if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) goto label_05bb5762;
							if (2 < (uint)parameters.Length) {
								parameters[2] = pIVar3;
								if (__this_01 != null) {
									__this_01.RPC("FadeSoundRPC", 0, parameters);
									return;
								}
								goto label_05bb5758;
							}
						}
					}
					throw new IndexOutOfRangeException();
				}
			}
		}
	label_05bb5758: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F8F")]
	[Address(RVA = "0x5AB5780", Offset = "0x5AB4780", VA = "0x5AB5780", Slot = "87")]
	[PunRPC]
	public virtual void FadeSoundRPC(string sound, float volume, float time, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$FadeSoundRPC): 6 lines keep C-only constructs
		Dictionary<AudioSource, Coroutine>* targetAddress;
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		Dictionary<object, object> pSVar3;
		AudioSource key;
		bool bVar4;
		Dictionary<AudioSource, Coroutine> pSVar5;
		BaseCharacter.d__129<FadeSoundOverTime> __this_00;
		Coroutine value;
		AudioSource pUStack_38;
		float fStack_30;
		float fStack_2c;
		Coroutine pUStack_28;

		fStack_30 = volume;
		fStack_2c = time;
		pUStack_38 = null;
		pUStack_28 = null;
		pUVar1 = this.Cache;
		if (info.Sender == null) {
			if (pUVar1 == null) goto label_05bb59e8;
		}
		else {
			if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) goto label_05bb59e8;
			if (info.Sender != pPVar2._Owner_k__BackingField) {
				return;
			}
		}
		pSVar3 = (Dictionary<object, object>)pUVar1.AudioSources;
		if (pSVar3 == null) goto label_05bb59e8;
		bVar4 = pSVar3.TryGetValue((object)sound, (object*)&pUStack_38);
		if (bVar4) {
			pSVar3 = (Dictionary<object, object>)this._soundFades;
			if ((pSVar3 != null) &&(bVar4 = pSVar3.TryGetValue((object)pUStack_38, (object*)&pUStack_28))) {
				this.StopCoroutine(pUStack_28);
				pSVar3 = (Dictionary<object, object>)this._soundFades;
				if (pSVar3 == null) goto label_05bb59e8;
				pSVar3.Remove((object)pUStack_38);
			}
			if ((fStack_2c <= 0.0) || (this.SoundsEnabled == false)) {
				if (pUStack_38 == null) goto label_05bb59e8;
				pUStack_38.volume = fStack_30;
			}
			else {
				targetAddress = &this._soundFades;
				pSVar5 = *targetAddress;
				if (pSVar5 == null) {
					pSVar5 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<AudioSource, Coroutine>));
					pSVar5 = new Dictionary<object, object>();
					*targetAddress = pSVar5;
					pSVar5 = *targetAddress;
				}
				key = pUStack_38;
				__this_00 = new BaseCharacter.d__129<FadeSoundOverTime>();
				__this_00.__1__state = 0;
				__this_00.__4__this = this;
				__this_00.source = key;
				__this_00.volume = fStack_30;
				__this_00.time = fStack_2c;
				value = this.StartCoroutine((IEnumerator)__this_00);
				if (pSVar5 == null) {
	label_05bb59e8: ;
					throw new NullReferenceException();
				}
				pSVar5.set_Item((object)key, (object)value);
			}
		}
		return;
	}

	[Token(Token = "0x6003F90")]
	[Address(RVA = "0x5AB59F0", Offset = "0x5AB49F0", VA = "0x5AB59F0")]
	[IteratorStateMachine(typeof(_003CFadeSoundOverTime_003Ed__129))]
	private IEnumerator FadeSoundOverTime(AudioSource source, float volume, float time)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$FadeSoundOverTime): clean
		BaseCharacter.d__129<FadeSoundOverTime> __this_00;

		__this_00 = new BaseCharacter.d__129<FadeSoundOverTime>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.source = source;
		__this_00.volume = volume;
		__this_00.time = time;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6003F91")]
	[Address(RVA = "0x5AB5AB0", Offset = "0x5AB4AB0", VA = "0x5AB5AB0")]
	[PunRPC]
	public void StopSoundRPC(string sound, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$StopSoundRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		Dictionary<object, object> pSVar3;
		bool bVar4;
		AudioSource __this_00;

		pUVar1 = this.Cache;
		if (info.Sender == null) {
			if (pUVar1 == null) goto label_05bb5b76;
		}
		else {
			if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) goto label_05bb5b76;
			if (info.Sender != pPVar2._Owner_k__BackingField) {
				return;
			}
		}
		pSVar3 = (Dictionary<object, object>)pUVar1.AudioSources;
		if (pSVar3 != null) {
			bVar4 = pSVar3.ContainsKey((object)sound);
			if (!bVar4) {
				return;
			}
			pUVar1 = this.Cache;
			if (((pUVar1 != null) &&(pSVar3 = (Dictionary<object, object>)pUVar1.AudioSources, pSVar3 != null)) &&(__this_00 = pSVar3.get_Item((object)sound), __this_00 != null)) {
				__this_00.Stop();
				return;
			}
		}
	label_05bb5b76: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F92")]
	[Address(RVA = "0x5AB5B80", Offset = "0x5AB4B80", VA = "0x5AB5B80", Slot = "88")]
	protected virtual void OnHealthChange()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$OnHealthChange): 2 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		bool bVar2;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		int local_30;
		int local_2c;

		bVar2 = this.IsMine();
		if (!bVar2) {
			return;
		}
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.PhotonView;
			parameters = (Object[])new object[2];
			local_2c = this.CurrentHealth;
			pIVar3 = (object)local_2c;
			if (parameters != null) {
				if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) {
	label_05bb5ced: ;
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
				if ((int)parameters.Length != 0) {
					parameters[0] = pIVar3;
					local_30 = this.MaxHealth;
					pIVar3 = (object)local_30;
					if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) goto label_05bb5ced;
					if ((parameters.Length & 0xfffffffe) != 0) {
						parameters[1] = pIVar3;
						if (__this_00 != null) {
							__this_00.RPC("SetHealthRPC", 0, parameters);
							return;
						}
						goto label_05bb5ce3;
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05bb5ce3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F93")]
	[Address(RVA = "0x5AB5D00", Offset = "0x5AB4D00", VA = "0x5AB5D00", Slot = "89")]
	public virtual void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$OnHit): clean
		return;
	}

	[Token(Token = "0x6003F94")]
	[Address(RVA = "0x5AB5D10", Offset = "0x5AB4D10", VA = "0x5AB5D10", Slot = "90")]
	[PunRPC]
	public virtual void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetHitRPC): 11 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		String obj;
		bool bVar3;
		BaseCharacter x;
		Object[] pSVar4;
		object pIVar5;
		object pIVar6;
		CustomLogicEvaluator pCVar7;
		MethodInfo pMVar8;
		int local_58;
		int local_54;
		int local_50;
		int local_4c;
		PhotonView local_48;
		BaseCharacter local_40;
		MethodInfo local_38;

		local_38 = (MethodInfo)type;
		if ((damage == 0) || (this.Dead != false)) {
			return;
		}
		x = Util.FindCharacterByViewId(viewId);
		bVar3 = (name == "");
		if (bVar3) {
			bVar3 = ((Object)x != null);
			if (bVar3) {
				if (x == null) goto label_05bb6318;
				name = x.RichTextName;
			}
		}
		local_40 = x;
		this.TakeDamage(damage);
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			pPVar2 = pUVar1.PhotonView;
			pSVar4 = (Object[])new object[3];
			local_58 = viewId;
			local_50 = viewId;
			pIVar5 = (object)local_58;
			if (pSVar4 != null) {
				if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) {
	label_05bb6322: ;
					pIVar5 = new ArrayTypeMismatchException();
					throw pIVar5;
				}
				if ((int)pSVar4.Length != 0) {
					pSVar4[0] = pIVar5;
					if ((name != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)name, (((pSVar4.obj).klass)._1).element_class), pIVar5 == null)) goto label_05bb6322;
					if ((pSVar4.Length & 0xfffffffe) != 0) {
						pSVar4[1] = (object)name;
						local_54 = damage;
						pIVar5 = (object)local_54;
						if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05bb6322;
						if (2 < (uint)pSVar4.Length) {
							pSVar4[2] = pIVar5;
							if (pPVar2 == null) goto label_05bb6318;
							pPVar2.RPC("NotifyDamagedRPC", 0, pSVar4);
							if (0 < this.CurrentHealth) {
								return;
							}
							if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
								pCVar7 = CustomLogicManager.Evaluator;
							}
							else {
								pCVar7 = CustomLogicManager.Evaluator;
							}
							if (pCVar7 != null) {
								if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
									pCVar7 = CustomLogicManager.Evaluator;
									if (pCVar7 == null) goto label_05bb6318;
								}
								if (pCVar7.DefaultShowKillFeed != false) {
									pPVar2 = RPCManager.PhotonView;
									pSVar4 = (Object[])new object[6];
									if (pSVar4 == null) goto label_05bb6318;
									if ((name != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)name, (((pSVar4.obj).klass)._1).element_class), pIVar5 == null)) goto label_05bb6322;
									local_48 = pPVar2;
									if ((int)pSVar4.Length == 0) goto label_05bb631d;
									pSVar4[0] = (object)name;
									obj = this.RichTextName;
									if ((obj != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)obj, (((pSVar4.obj).klass)._1).element_class), pIVar5 == null)) goto label_05bb6322;
									if ((pSVar4.Length & 0xfffffffe) == 0) goto label_05bb631d;
									pSVar4[1] = (object)obj;
									local_58 = damage;
									pIVar5 = (object)local_58;
									if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05bb6322;
									pMVar8 = local_38;
									if ((uint)pSVar4.Length < 3) goto label_05bb631d;
									pSVar4[2] = pIVar5;
									if ((pMVar8 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)pMVar8, (((pSVar4.obj).klass)._1).element_class), pIVar5 == null)) goto label_05bb6322;
									if ((pSVar4.Length & 0xfffffffc) == 0) goto label_05bb631d;
									pSVar4[3] = (object)pMVar8;
									local_54 = BaseCharacter.KillFeedActorNumber(local_40);
									pMVar8 = (MethodInfo)(object)local_54;
									if ((pMVar8 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)pMVar8, (((pSVar4.obj).klass)._1).element_class), pIVar5 == null)) goto label_05bb6322;
									if ((uint)pSVar4.Length < 5) goto label_05bb631d;
									pSVar4[4] = (object)pMVar8;
									local_4c = BaseCharacter.KillFeedActorNumber(this);
									pIVar5 = (object)local_4c;
									if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05bb6322;
									if ((uint)pSVar4.Length < 6) goto label_05bb631d;
									pSVar4[5] = pIVar5;
									if (local_48 == null) goto label_05bb6318;
									local_48.RPC("ShowKillFeedWithPlayersRPC", 0, pSVar4);
								}
							}
							pUVar1 = this.Cache;
							if (pUVar1 != null) {
								pPVar2 = pUVar1.PhotonView;
								pSVar4 = (Object[])new object[2];
								local_58 = local_50;
								pIVar5 = (object)local_58;
								if (pSVar4 != null) {
									if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05bb6322;
									if ((int)pSVar4.Length != 0) {
										pSVar4[0] = pIVar5;
										if ((name != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)name, (((pSVar4.obj).klass)._1).element_class), pIVar5 == null)) goto label_05bb6322;
										if ((pSVar4.Length & 0xfffffffe) != 0) {
											pSVar4[1] = (object)name;
											if (pPVar2 != null) {
												pPVar2.RPC("NotifyDieRPC", 0, pSVar4);
												return;
											}
											goto label_05bb6318;
										}
									}
									goto label_05bb631d;
								}
							}
							goto label_05bb6318;
						}
					}
				}
	label_05bb631d: ;
				throw new IndexOutOfRangeException();
			}
		}
	label_05bb6318: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F95")]
	[Address(RVA = "0x5AB6410", Offset = "0x5AB5410", VA = "0x5AB6410", Slot = "91")]
	[PunRPC]
	public virtual void GetDamagedRPC(string name, int damage)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetDamagedRPC): 11 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		String obj;
		Object[] pSVar3;
		object pIVar4;
		object pIVar5;
		CustomLogicEvaluator pCVar6;
		MethodInfo method_00;
		int iStack_3c;
		int iStack_38;
		int iStack_34;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if ((pPVar2._IsMine_k__BackingField == false) || (this.Dead != false)) {
				return;
			}
			this.TakeDamage(damage);
			pUVar1 = this.Cache;
			if (pUVar1 != null) {
				pPVar2 = pUVar1.PhotonView;
				pSVar3 = (Object[])new object[3];
				iStack_3c = -1;
				pIVar4 = (object)iStack_3c;
				if (pSVar3 != null) {
					if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pSVar3.obj).klass)._1).element_class), pIVar5 == null)) {
	label_05bb6999: ;
						pIVar4 = new ArrayTypeMismatchException();
						throw pIVar4;
					}
					if ((int)pSVar3.Length != 0) {
						pSVar3[0] = pIVar4;
						if ((name != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)name, (((pSVar3.obj).klass)._1).element_class) , pIVar4 == null)) goto label_05bb6999;
						if ((pSVar3.Length & 0xfffffffe) != 0) {
							pSVar3[1] = (object)name;
							iStack_38 = damage;
							pIVar4 = (object)iStack_38;
							if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pSVar3.obj).klass)._1).element_class), pIVar5 == null)) goto label_05bb6999;
							if (2 < (uint)pSVar3.Length) {
								pSVar3[2] = pIVar4;
								if (pPVar2 == null) goto label_05bb698f;
								pPVar2.RPC("NotifyDamagedRPC", 0, pSVar3);
								if (0 < this.CurrentHealth) {
									return;
								}
								pCVar6 = CustomLogicManager.Evaluator;
								if (pCVar6 != null) {
									if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
										pCVar6 = CustomLogicManager.Evaluator;
										if (pCVar6 == null) goto label_05bb698f;
									}
									if (pCVar6.DefaultShowKillFeed != false) {
										pPVar2 = RPCManager.PhotonView;
										pSVar3 = (Object[])new object[6];
										if (pSVar3 == null) goto label_05bb698f;
										if ((name != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)name, (((pSVar3.obj).klass)._1).element_class), pIVar4 == null)) goto label_05bb6999;
										if ((int)pSVar3.Length == 0) goto label_05bb6994;
										pSVar3[0] = (object)name;
										obj = this.RichTextName;
										if ((obj != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)obj, (((pSVar3.obj).klass)._1).element_class), pIVar4 == null)) goto label_05bb6999;
										if ((pSVar3.Length & 0xfffffffe) == 0) goto label_05bb6994;
										pSVar3[1] = (object)obj;
										iStack_3c = damage;
										pIVar4 = (object)iStack_3c;
										if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pSVar3.obj).klass)._1).element_class), pIVar5 == null)) goto label_05bb6999;
										if ((uint)pSVar3.Length < 3) goto label_05bb6994;
										pSVar3[2] = pIVar4;
										if (("" != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)"", (((pSVar3.obj).klass)._1).element_class), pIVar4 == null)) goto label_05bb6999;
										if ((pSVar3.Length & 0xfffffffc) == 0) goto label_05bb6994;
										pSVar3[3] = (Il2CppObject *)"";
										iStack_38 = -1;
										method_00 = (MethodInfo)(object)iStack_38;
										if ((method_00 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)method_00, (((pSVar3.obj).klass)._1).element_class) , pIVar4 == null)) goto label_05bb6999;
										if ((uint)pSVar3.Length < 5) goto label_05bb6994;
										pSVar3[4] = (object)method_00;
										iStack_34 = BaseCharacter.KillFeedActorNumber(this);
										pIVar4 = (object)iStack_34;
										if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pSVar3.obj).klass)._1).element_class), pIVar5 == null)) goto label_05bb6999;
										if ((uint)pSVar3.Length < 6) goto label_05bb6994;
										pSVar3[5] = pIVar4;
										if (pPVar2 == null) goto label_05bb698f;
										pPVar2.RPC("ShowKillFeedWithPlayersRPC", 0, pSVar3);
									}
								}
								pUVar1 = this.Cache;
								if (pUVar1 != null) {
									pPVar2 = pUVar1.PhotonView;
									pSVar3 = (Object[])new object[2];
									iStack_3c = -1;
									pIVar4 = (object)iStack_3c;
									if (pSVar3 != null) {
										if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pSVar3.obj).klass)._1).element_class), pIVar5 == null)) goto label_05bb6999;
										if ((int)pSVar3.Length != 0) {
											pSVar3[0] = pIVar4;
											if ((name != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)name, (((pSVar3.obj).klass)._1).element_class), pIVar4 == null)) goto label_05bb6999;
											if ((pSVar3.Length & 0xfffffffe) != 0) {
												pSVar3[1] = (object)name;
												if (pPVar2 != null) {
													pPVar2.RPC("NotifyDieRPC", 0, pSVar3);
													return;
												}
												goto label_05bb698f;
											}
										}
										goto label_05bb6994;
									}
								}
								goto label_05bb698f;
							}
						}
					}
	label_05bb6994: ;
					throw new IndexOutOfRangeException();
				}
			}
		}
	label_05bb698f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F96")]
	[Address(RVA = "0x5AB69B0", Offset = "0x5AB59B0", VA = "0x5AB69B0", Slot = "92")]
	[PunRPC]
	public virtual void GetKilledRPC(string name)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetKilledRPC): 8 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		String obj;
		CustomLogicEvaluator pCVar3;
		MethodInfo method_00;
		Object[] pSVar4;
		object pIVar5;
		object pIVar6;
		uint uStack_44;
		int iStack_40;
		int iStack_3c;
		PhotonView pPStack_38;

		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) goto label_05bb6e31;
		if (pPVar2._IsMine_k__BackingField == false) {
			return;
		}
		if (this.Dead != false) {
			return;
		}
		this.CurrentHealth = 0;
		this.OnHealthChange();
		if (this.CurrentHealth < 1) {
			this.Die();
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor != 0) goto label_05bb6a87;
	label_05bb6ac3: ;
			pCVar3 = CustomLogicManager.Evaluator;
		}
		else {
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) goto label_05bb6ac3;
	label_05bb6a87: ;
			pCVar3 = CustomLogicManager.Evaluator;
		}
		if (pCVar3 != null) {
			if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
				pCVar3 = CustomLogicManager.Evaluator;
				if (pCVar3 == null) goto label_05bb6e31;
			}
			if (pCVar3.DefaultShowKillFeed != false) {
				pPVar2 = RPCManager.PhotonView;
				pSVar4 = (Object[])new object[6];
				if (pSVar4 == null) goto label_05bb6e31;
				if ((name != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)name, (((pSVar4.obj).klass)._1).element_class), pIVar5 == null)) goto label_05bb6e3b;
				if ((int)pSVar4.Length == 0) goto label_05bb6e36;
				pSVar4[0] = (object)name;
				obj = this.RichTextName;
				if ((obj != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)obj, (((pSVar4.obj).klass)._1).element_class), pIVar5 == null)) goto label_05bb6e3b;
				pPStack_38 = pPVar2;
				if ((pSVar4.Length & 0xfffffffe) == 0) goto label_05bb6e36;
				pSVar4[1] = (object)obj;
				uStack_44 = 0;
				pIVar5 = (object)uStack_44;
				if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05bb6e3b;
				if ((uint)pSVar4.Length < 3) goto label_05bb6e36;
				pSVar4[2] = pIVar5;
				if (("" != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)"", (((pSVar4.obj).klass)._1).element_class) , pIVar5 == null)) goto label_05bb6e3b;
				if ((pSVar4.Length & 0xfffffffc) == 0) goto label_05bb6e36;
				pSVar4[3] = (Il2CppObject *)"";
				iStack_3c = -1;
				method_00 = (MethodInfo)(object)iStack_3c;
				if ((method_00 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)method_00, (((pSVar4.obj).klass)._1).element_class), pIVar5 == null)) goto label_05bb6e3b;
				if ((uint)pSVar4.Length < 5) goto label_05bb6e36;
				pSVar4[4] = (object)method_00;
				iStack_40 = BaseCharacter.KillFeedActorNumber(this);
				pIVar5 = (object)iStack_40;
				if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) goto label_05bb6e3b;
				pPVar2 = pPStack_38;
				if ((uint)pSVar4.Length < 6) goto label_05bb6e36;
				pSVar4[5] = pIVar5;
				if (pPVar2 == null) goto label_05bb6e31;
				pPVar2.RPC("ShowKillFeedWithPlayersRPC", 0, pSVar4);
			}
		}
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			pPVar2 = pUVar1.PhotonView;
			pSVar4 = (Object[])new object[2];
			uStack_44 = 0xffffffff;
			pIVar5 = (object)uStack_44;
			if (pSVar4 != null) {
				if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class), pIVar6 == null)) {
	label_05bb6e3b: ;
					pIVar5 = new ArrayTypeMismatchException();
					throw pIVar5;
				}
				if ((int)pSVar4.Length != 0) {
					pSVar4[0] = pIVar5;
					if ((name != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)name, (((pSVar4.obj).klass)._1).element_class), pIVar5 == null)) goto label_05bb6e3b;
					if ((pSVar4.Length & 0xfffffffe) != 0) {
						pSVar4[1] = (object)name;
						if (pPVar2 != null) {
							pPVar2.RPC("NotifyDieRPC", 0, pSVar4);
							return;
						}
						goto label_05bb6e31;
					}
				}
	label_05bb6e36: ;
				throw new IndexOutOfRangeException();
			}
		}
	label_05bb6e31: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F97")]
	[Address(RVA = "0x5AB6340", Offset = "0x5AB5340", VA = "0x5AB6340")]
	private static int KillFeedActorNumber(BaseCharacter character)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$KillFeedActorNumber): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		Player pPVar3;
		bool bVar4;
		int iVar5;

		bVar4 = ((Object)character == null);
		if (!bVar4) {
			if (character == null) {
	label_05bb6405: ;
				throw new NullReferenceException();
			}
			if ((character.AI == false) &&(pUVar1 = character.Cache, pUVar1 != null)) {
				pPVar2 = pUVar1.PhotonView;
				bVar4 = ((Object)pPVar2 == null);
				if (!bVar4) {
					pUVar1 = character.Cache;
					if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) goto label_05bb6405;
					pPVar3 = pPVar2._Owner_k__BackingField;
					if (pPVar3 != null) {
					}
				}
			}
		}
		return iVar5;
	}

	[Token(Token = "0x6003F98")]
	[Address(RVA = "0x5AB6E50", Offset = "0x5AB5E50", VA = "0x5AB6E50", Slot = "93")]
	[PunRPC]
	public virtual void MarkDeadRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$MarkDeadRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;

		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) {
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar2._Owner_k__BackingField) {
			this.Dead = true;
			return;
		}
		return;
	}

	[Token(Token = "0x6003F99")]
	[Address(RVA = "0x5AB6E90", Offset = "0x5AB5E90", VA = "0x5AB6E90", Slot = "94")]
	protected virtual void OnNotifyDie(BaseCharacter killer)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$OnNotifyDie): clean
		return;
	}

	[Token(Token = "0x6003F9A")]
	[Address(RVA = "0x5AB6EA0", Offset = "0x5AB5EA0", VA = "0x5AB6EA0")]
	[PunRPC]
	public void NotifyDieRPC(int viewId, string name, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$NotifyDieRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		InGameManager pGVar3;
		BaseCharacter x;
		Player player;
		bool bVar4;
		BaseCharacter pCVar5;
		CustomLogicEvaluator pCVar6;

		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) goto label_05bb7181;
		if (info.Sender != pPVar2._Owner_k__BackingField) {
			return;
		}
		pCVar5 = Util.FindCharacterByViewId(viewId);
		bVar4 = ((Object)pCVar5 != null);
		if (bVar4) {
			if (pCVar5 == null) goto label_05bb7181;
			name = pCVar5.RichTextName;
		}
		this.OnNotifyDie(pCVar5);
		bVar4 = ((Object)pCVar5 != null);
		if (bVar4) {
			if (pCVar5 == null) goto label_05bb7181;
			pGVar3 = pCVar5._inGameManager;
			if (pGVar3 == null) goto label_05bb7181;
			x = pGVar3.CurrentCharacter;
			bVar4 = ((Object)x == (Object)pCVar5);
			if (bVar4) {
				pCVar6 = CustomLogicManager.Evaluator;
				if (pCVar6 != null) {
					if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
						pCVar6 = CustomLogicManager.Evaluator;
						if (pCVar6 == null) goto label_05bb7181;
					}
					if (pCVar6.DefaultAddKillScore != false) {
						pGVar3 = this._inGameManager;
						if (pGVar3 == null) goto label_05bb7181;
						pGVar3.RegisterMainCharacterKill(this);
					}
				}
			}
		}
		pCVar6 = CustomLogicManager.Evaluator;
		if (pCVar6 == null) {
			return;
		}
		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			pCVar6 = CustomLogicManager.Evaluator;
			if (pCVar6 == null) goto label_05bb7181;
		}
		pCVar6.OnCharacterDie(this, pCVar5, name);
		pGVar3 = this._inGameManager;
		if (pGVar3 != null) {
			pCVar5 = pGVar3.CurrentCharacter;
			bVar4 = ((Object)pCVar5 == (Object)this);
			if (!bVar4) {
				return;
			}
			pUVar1 = this.Cache;
			if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
				player = pPVar2._Owner_k__BackingField;
				InGameManager.OnLocalPlayerDied(player);
				return;
			}
		}
	label_05bb7181: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F9B")]
	[Address(RVA = "0x5AB7190", Offset = "0x5AB6190", VA = "0x5AB7190")]
	[PunRPC]
	public void NotifyDamagedRPC(int viewId, string name, int damage, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$NotifyDamagedRPC): 2 lines keep C-only constructs
		float num;
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		InGameManager pGVar3;
		BaseCharacter x;
		UISettings pSVar4;
		BoolSetting pSVar5;
		bool bVar6;
		BaseCharacter killer;
		CustomLogicEvaluator pCVar7;
		String* ppSVar8;
		String[] values;
		String pSVar9;
		String pSVar10;
		int iStack_34;

		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) goto label_05bb765e;
		if (info.Sender != pPVar2._Owner_k__BackingField) {
			return;
		}
		killer = Util.FindCharacterByViewId(viewId);
		bVar6 = ((Object)killer != null);
		if (bVar6) {
			if (killer == null) goto label_05bb765e;
			name = killer.RichTextName;
		}
		bVar6 = ((Object)killer != null);
		if (bVar6) {
			if (killer == null) goto label_05bb765e;
			pGVar3 = killer._inGameManager;
			if (pGVar3 == null) goto label_05bb765e;
			x = pGVar3.CurrentCharacter;
			bVar6 = ((Object)x == (Object)killer);
			if (bVar6) {
				pCVar7 = CustomLogicManager.Evaluator;
				if (pCVar7 != null) {
					if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
						pCVar7 = CustomLogicManager.Evaluator;
						if (pCVar7 == null) goto label_05bb765e;
					}
					if (pCVar7.DefaultAddKillScore != false) {
						pGVar3 = this._inGameManager;
						if (pGVar3 == null) goto label_05bb765e;
						pGVar3.RegisterMainCharacterDamage(this, damage);
					}
				}
			}
		}
		pCVar7 = CustomLogicManager.Evaluator;
		if (pCVar7 == null) {
			return;
		}
		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			pCVar7 = CustomLogicManager.Evaluator;
			if (pCVar7 == null) goto label_05bb765e;
		}
		pCVar7.OnCharacterDamaged(this, killer, name, damage);
		pSVar4 = SettingsManager.UISettings;
		if ((pSVar4 != null) &&(pSVar5 = pSVar4.GameFeed, pSVar5 != null)) {
			if (pSVar5._value == false) {
				return;
			}
			if (this.CurrentHealth < 1) {
				ppSVar8 = &" killed ";
			}
			else {
				ppSVar8 = &" damaged ";
			}
			pSVar10 = *ppSVar8;
			values = (String[])new string[7];
			pCVar7 = CustomLogicManager.Evaluator;
			if (pCVar7 != null) {
				num = pCVar7.CurrentTime;
				pSVar9 = Util.FormatFloat(num, 2);
				pSVar9 = String.Concat("(", pSVar9, ") ");
				pSVar9 = ChatManager.GetColorString(pSVar9, 3, false);
				if (values != null) {
					if ((int)values.Length != 0) {
						values[0] = pSVar9;
						if ((values.Length & 0xfffffffe) != 0) {
							values[1] = name;
							if (2 < (uint)values.Length) {
								values[2] = pSVar10;
								if ((values.Length & 0xfffffffc) != 0) {
									values[3] = this.RichTextName;
									if (4 < (uint)values.Length) {
										values[4] = " (";
										pSVar10 = iStack_34.ToString();
										if (5 < (uint)values.Length) {
											values[5] = pSVar10;
											if (6 < (uint)values.Length) {
												values[6] = ")";
												pSVar10 = String.Concat(values);
												ChatManager.AddFeed(pSVar10);
												return;
											}
										}
									}
								}
							}
						}
					}
					throw new IndexOutOfRangeException();
				}
			}
		}
	label_05bb765e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F9C")]
	[Address(RVA = "0x5AB7670", Offset = "0x5AB6670", VA = "0x5AB7670", Slot = "95")]
	public virtual void GetHit(BaseCharacter enemy, int damage, string type, string collider)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetHit): 5 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		String pSVar3;
		bool bVar4;
		Object[] parameters;
		object pIVar5;
		object pIVar6;
		int iVar7;
		int iStack_48;
		int iStack_44;
		Player pPStack_40;
		String pSStack_38;

		pSStack_38 = collider;
		bVar4 = ((Object)enemy != null);
		iVar7 = -1;
		if (bVar4) {
			if (((enemy == null) ||(pUVar1 = enemy.Cache, pUVar1 == null)) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) goto label_05bb78f2;
			iVar7 = pPVar2.viewIdField;
		}
		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) {
	label_05bb78f2: ;
			throw new NullReferenceException();
		}
		pPStack_40 = pPVar2._Owner_k__BackingField;
		parameters = (Object[])new object[5];
		iStack_44 = iVar7;
		pIVar5 = (object)iStack_44;
		if (parameters == null) goto label_05bb78f2;
		if (pIVar5 != null) {
			pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((parameters.obj).klass)._1).element_class);
			if (pIVar6 == null) goto label_05bb78f7;
		}
		if ((int)parameters.Length != 0) {
			parameters[0] = pIVar5;
			if ("" != null) {
				pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)"", (((parameters.obj).klass)._1).element_class) ;
				if (pIVar5 == null) goto label_05bb78f7;
			}
			if ((parameters.Length & 0xfffffffe) == 0) goto label_05bb78ed;
			parameters[1] = (Il2CppObject *)"";
			iStack_48 = damage;
			pIVar5 = (object)iStack_48;
			if (pIVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((parameters.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05bb78f7;
			}
			if ((uint)parameters.Length < 3) goto label_05bb78ed;
			parameters[2] = pIVar5;
			if (type != null) {
				pIVar5 = il2cpp_vm_Object_IsInst((object)type, (((parameters.obj).klass)._1).element_class);
				if (pIVar5 == null) goto label_05bb78f7;
			}
			if ((parameters.Length & 0xfffffffc) != 0) {
				parameters[3] = (object)type;
				pSVar3 = pSStack_38;
				if (pSStack_38 != null) {
					pIVar5 = il2cpp_vm_Object_IsInst((object)pSStack_38, (((parameters.obj).klass)._1).element_class);
					if (pIVar5 == null) {
	label_05bb78f7: ;
						pIVar5 = new ArrayTypeMismatchException();
						throw pIVar5;
					}
				}
				if (4 < (uint)parameters.Length) {
					parameters[4] = (object)pSVar3;
					pPVar2.RPC("GetHitRPC", pPStack_40, parameters);
					return;
				}
			}
		}
	label_05bb78ed: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6003F9D")]
	[Address(RVA = "0x5AB7910", Offset = "0x5AB6910", VA = "0x5AB7910", Slot = "96")]
	public virtual void GetHit(string name, int damage, string type, string collider)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetHit): 5 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		int[] aiStack_48 = new int[2];
		Player pPStack_40;
		PhotonView pPStack_38;

		if (this.Dead != false) {
			return;
		}
		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			pPStack_40 = pPVar2._Owner_k__BackingField;
			pPStack_38 = pPVar2;
			parameters = (Object[])new object[5];
			aiStack_48[1] = 0xffffffff;
			pIVar3 = (object)(aiStack_48 + 1);
			if (parameters != null) {
				if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) {
	label_05bb7b2d: ;
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
				if ((int)parameters.Length != 0) {
					parameters[0] = pIVar3;
					if ((name != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)name, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) goto label_05bb7b2d;
					if ((parameters.Length & 0xfffffffe) != 0) {
						parameters[1] = (object)name;
						aiStack_48[0] = damage;
						pIVar3 = (object)aiStack_48;
						if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) goto label_05bb7b2d;
						if (2 < (uint)parameters.Length) {
							parameters[2] = pIVar3;
							if ((type != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)type, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) goto label_05bb7b2d;
							if ((parameters.Length & 0xfffffffc) != 0) {
								parameters[3] = (object)type;
								if ((collider != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)collider, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) goto label_05bb7b2d;
								if (4 < (uint)parameters.Length) {
									parameters[4] = (object)collider;
									pPStack_38.RPC("GetHitRPC", pPStack_40, parameters);
									return;
								}
							}
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F9E")]
	[Address(RVA = "0x5AB7B40", Offset = "0x5AB6B40", VA = "0x5AB7B40", Slot = "97")]
	public virtual void GetDamaged(string name, int damage)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetDamaged): 2 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		Player targetPlayer;
		Object[] parameters;
		object pIVar2;
		object pIVar3;
		int iStack_2c;

		if (this.Dead != false) {
			return;
		}
		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(__this_00 = pUVar1.PhotonView, __this_00 != null)) {
			targetPlayer = __this_00._Owner_k__BackingField;
			parameters = (Object[])new object[2];
			if (parameters != null) {
				if ((name != null) &&(pIVar2 = il2cpp_vm_Object_IsInst((object)name, (((parameters.obj).klass)._1).element_class) , pIVar2 == null)) {
	label_05bb7c86: ;
					pIVar2 = new ArrayTypeMismatchException();
					throw pIVar2;
				}
				if ((int)parameters.Length != 0) {
					parameters[0] = (object)name;
					iStack_2c = damage;
					pIVar2 = (object)iStack_2c;
					if ((pIVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) goto label_05bb7c86;
					if ((parameters.Length & 0xfffffffe) != 0) {
						parameters[1] = pIVar2;
						__this_00.RPC("GetDamagedRPC", targetPlayer, parameters);
						return;
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F9F")]
	[Address(RVA = "0x5AB7CA0", Offset = "0x5AB6CA0", VA = "0x5AB7CA0", Slot = "98")]
	public virtual void GetKilled(string name)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetKilled): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		Player targetPlayer;
		Object[] parameters;
		object pIVar2;

		if (this.Dead != false) {
			return;
		}
		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(__this_00 = pUVar1.PhotonView, __this_00 != null)) {
			targetPlayer = __this_00._Owner_k__BackingField;
			parameters = (Object[])new object[1];
			if (parameters != null) {
				if (name != null) {
					pIVar2 = il2cpp_vm_Object_IsInst((object)name, (((parameters.obj).klass)._1).element_class);
					if (pIVar2 == null) {
						pIVar2 = new ArrayTypeMismatchException();
						throw pIVar2;
					}
				}
				if ((int)parameters.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				parameters[0] = (object)name;
				__this_00.RPC("GetKilledRPC", targetPlayer, parameters);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003FA0")]
	[Address(RVA = "0x5AB7DA0", Offset = "0x5AB6DA0", VA = "0x5AB7DA0", Slot = "99")]
	public virtual void BlowAway(Vector3 source, float force, float maxDistance)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$BlowAway): 9 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		Player targetPlayer;
		Object[] parameters;
		object pIVar2;
		object pIVar3;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		float local_50;
		float local_4c;
		ulong local_48;
		byte[] local_38 = new byte[16];

		local_38._8_4_ = in_XMM0_Dc;
		local_38._0_8_ = source._0_8_;
		local_38._12_4_ = in_XMM0_Dd;
		if (this.Dead != false) {
			return;
		}
		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(__this_00 = pUVar1.PhotonView, __this_00 != null)) {
			targetPlayer = __this_00._Owner_k__BackingField;
			parameters = (Object[])new object[3];
			local_48 = local_38._0_8_;
			pIVar2 = (object)local_48;
			if (parameters != null) {
				if ((pIVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) {
	label_05bb7f95: ;
					pIVar2 = new ArrayTypeMismatchException();
					throw pIVar2;
				}
				if ((int)parameters.Length != 0) {
					parameters[0] = pIVar2;
					local_4c = force;
					pIVar2 = (object)local_4c;
					if ((pIVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) goto label_05bb7f95;
					if ((parameters.Length & 0xfffffffe) != 0) {
						parameters[1] = pIVar2;
						local_50 = maxDistance;
						pIVar2 = (object)local_50;
						if ((pIVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) goto label_05bb7f95;
						if (2 < (uint)parameters.Length) {
							parameters[2] = pIVar2;
							__this_00.RPC("BlowAwayRPC", targetPlayer, parameters);
							return;
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003FA1")]
	[Address(RVA = "0x5AB7FB0", Offset = "0x5AB6FB0", VA = "0x5AB7FB0", Slot = "100")]
	[PunRPC]
	public virtual void BlowAwayRPC(Vector3 source, float force, float maxDistance)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$BlowAwayRPC): 20 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		float fVar3;
		uint uVar4;
		sbyte cVar5;
		uint uVar6;
		BaseComponentCache pUVar7;
		Transform pUVar8;
		UnityEngine_Vector3_StaticFields pUVar9;
		Rigidbody pUVar10;
		byte[] auVar11 = new byte[16];
		bool bVar12;
		float fVar13;
		float fVar14;
		uint extraout_XMM0_Db;
		float in_XMM0_Dc;
		float extraout_XMM0_Dc;
		float in_XMM0_Dd;
		float extraout_XMM0_Dd;
		uint uVar15;
		byte[] auVar16 = new byte[16];
		Vector3 UVar17;
		Vector3 force_00;
		float fStack_28;
		float fStack_24;

		if ((this.Dead != false) ||(bVar12 = this.IsMine(), !bVar12)) {
			return;
		}
		pUVar7 = this.Cache;
		if ((pUVar7 == null) ||(pUVar8 = pUVar7.Transform, pUVar8 == null)) goto label_05bb834c;
		UVar17 = pUVar8.position;
		if (Il2CppMethodInitialized_0753e7b7 == false) {
			Il2CppMethodInitialized_0753e7b7 = true;
			uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar6 == 0) {
		}
		fStack_28 = source.x;
		fStack_24 = source.y;
		fVar14 = UVar17.y - fStack_24;
		fVar1 = UVar17.z - source.z;
		fVar3 = UVar17.x - fStack_28;
		fVar14 = fVar14 * fVar14 + fVar3 * fVar3 + fVar1 * fVar1;
		if (fVar14 < 0.0) {
			fVar14 = sqrtf(fVar14);
		}
		else {
			fVar14 = SQRT(fVar14);
		}
		if (maxDistance < fVar14) {
			return;
		}
		uVar15 = 0;
		pUVar7 = this.Cache;
		if ((pUVar7 == null) ||(pUVar8 = pUVar7.Transform, pUVar8 == null)) goto label_05bb834c;
		UVar17 = pUVar8.position;
		if (Il2CppMethodInitialized_0753e72d == false) {
			uVar15 = 0;
			Il2CppMethodInitialized_0753e72d = true;
		}
		if (Il2CppMethodInitialized_0753e729 == false) {
			uVar15 = 0;
			Il2CppMethodInitialized_0753e729 = true;
		}
		auVar16._0_4_ = UVar17.x - fStack_28;
		auVar16._4_4_ = UVar17.y - fStack_24;
		auVar16._8_4_ = extraout_XMM0_Dc - in_XMM0_Dc;
		auVar16._12_4_ = extraout_XMM0_Dd - in_XMM0_Dd;
		fVar14 = UVar17.z - source.z;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			uVar15 = 0;
		}
		fVar1 = fVar14 * fVar14 + auVar16._4_4_ * auVar16._4_4_ + auVar16._0_4_ * auVar16._0_4_;
		if (fVar1 < 0.0) {
			fVar1 = sqrtf(fVar1);
			uVar15 = extraout_XMM0_Db;
			if (1e-05 < fVar1) goto label_05bb824a;
	label_05bb817e: ;
			pUVar9 = typeof(Vector3).static_fields;
			fVar14 = (pUVar9.zeroVector).z;
			fVar1 = (pUVar9.zeroVector).x;
			fVar3 = (pUVar9.zeroVector).y;
			cVar5 = this.Grounded;
		}
		else {
			fVar1 = SQRT(fVar1);
			if (fVar1 <= 1e-05) goto label_05bb817e;
	label_05bb824a: ;
			fVar14 = fVar14 / fVar1;
			auVar11._4_4_ = fVar1;
			auVar11._0_4_ = fVar1;
			auVar11._8_4_ = uVar15;
			auVar11._12_4_ = uVar15;
			auVar16 = divps(auVar16, auVar11);
			fVar1 = auVar16._0_4_;
			fVar3 = auVar16._4_4_;
			cVar5 = this.Grounded;
		}
		if ((cVar5 != false) && (0.0 <= fVar3)) {
			pUVar7 = this.Cache;
			if (pUVar7 == null) goto label_05bb834c;
			pUVar10 = pUVar7.Rigidbody;
			if (pUVar10 == null) goto label_05bb834c;
			pUVar9 = typeof(Vector3).static_fields;
			fVar13 = 10.0;
			if (force <= 10.0) {
				fVar13 = force;
			}
			UVar17.z = (pUVar9.upVector).z * fVar13;
			uVar2 = (pUVar9.upVector).x;
			uVar4 = (pUVar9.upVector).y;
			UVar17.x = fVar13 * (float)uVar2;
			UVar17.y = fVar13 * (float)uVar4;
			pUVar10.AddForce(UVar17, 2);
		}
		pUVar7 = this.Cache;
		if ((pUVar7 != null) &&(pUVar10 = pUVar7.Rigidbody, pUVar10 != null)) {
			force_00.z = fVar14 * force;
			force_00.x = fVar1 * force;
			force_00.y = fVar3 * force;
			pUVar10.AddForce(force_00, 2);
			return;
		}
	label_05bb834c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003FA2")]
	[Address(RVA = "0x5AB8360", Offset = "0x5AB7360", VA = "0x5AB8360", Slot = "101")]
	protected virtual void Awake()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$Awake): 2 lines keep C-only constructs
		byte bVar1;
		InGameManager pGVar2;
		BaseComponentCache pUVar3;
		Rigidbody __this_00;
		InGameManager pGVar4;
		bool bVar5;
		int iVar6;
		BaseMovementSync pCVar7;
		GameObject pUVar8;
		Outline pOVar9;
		AnimationHandler __this_01;

		pGVar4 = typeof(InGameManager);
		pGVar2 = (InGameManager)SceneLoader.CurrentGameManager;
		if (pGVar2 != null) {
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if ((bVar1 <= (pGVar2.klass._2).typeHierarchyDepth) &&((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(InGameManager))) {
				this._inGameManager = pGVar2;
				if (((pGVar2.klass._2).typeHierarchyDepth < bVar1) ||((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass)pGVar4)) {
					throw new InvalidCastException();
				}
			}
		}
		this.CreateCache(null);
		this.SetColliders();
		iVar6 = this.get_DefaultMaxHealth();
		this.MaxHealth = iVar6;
		this.CurrentHealth = iVar6;
		pCVar7 = this.GetComponent<BaseMovementSync>();
		this.MovementSync = pCVar7;
		pUVar8 = this.gameObject;
		if (pUVar8 != null) {
			pOVar9 = pUVar8.AddComponent<Outline>();
			this.OutlineComponent = pOVar9;
			pOVar9 = this.OutlineComponent;
			if (pOVar9 != null) {
				pOVar9.enabled = false;
				pUVar8 = this.gameObject;
				__this_01 = new AnimationHandler(pUVar8);
				this.Animation = __this_01;
				bVar5 = this.IsMine();
				if (!bVar5) {
					pUVar3 = this.Cache;
					if ((pUVar3 == null) ||(__this_00 = pUVar3.Rigidbody, __this_00 == null)) goto label_05bb8577;
					__this_00.isKinematic = true;
					this._disableKinematicTimeLeft = 0.0;
				}
				return;
			}
		}
	label_05bb8577: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003FA3")]
	[Address(RVA = "0x5AB8590", Offset = "0x5AB7590", VA = "0x5AB8590", Slot = "102")]
	protected virtual void CreateCharacterIcon()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$CreateCharacterIcon): clean
		return;
	}

	[Token(Token = "0x6003FA4")]
	[Address(RVA = "0x5AB85A0", Offset = "0x5AB75A0", VA = "0x5AB85A0", Slot = "103")]
	protected virtual void SetColliders()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$SetColliders): clean
		return;
	}

	[Token(Token = "0x6003FA5")]
	[Address(RVA = "0x5AB85B0", Offset = "0x5AB75B0", VA = "0x5AB85B0", Slot = "104")]
	protected virtual void Start()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$Start): clean
		bool bVar1;
		BaseCharacter.d__151<WaitAndNotifySpawn> __this_00;

		MinimapHandler.CreateMinimapIcon(this);
		__this_00 = new BaseCharacter.d__151<WaitAndNotifySpawn>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		this.StartCoroutine((IEnumerator)__this_00);
		bVar1 = this.IsMine();
		if (bVar1) {
			this.CreateDetection();
			return;
		}
		return;
	}

	[Token(Token = "0x6003FA6")]
	[Address(RVA = "0x5AB8690", Offset = "0x5AB7690", VA = "0x5AB8690")]
	[IteratorStateMachine(typeof(_003CWaitAndNotifySpawn_003Ed__151))]
	protected IEnumerator WaitAndNotifySpawn()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$WaitAndNotifySpawn): clean
		BaseCharacter.d__151<WaitAndNotifySpawn> __this_00;

		__this_00 = new BaseCharacter.d__151<WaitAndNotifySpawn>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6003FA7")]
	[Address(RVA = "0x5AB8720", Offset = "0x5AB7720", VA = "0x5AB8720")]
	[IteratorStateMachine(typeof(_003CWaitAndNotifyReloaded_003Ed__152))]
	protected IEnumerator WaitAndNotifyReloaded()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$WaitAndNotifyReloaded): clean
		BaseCharacter.d__152<WaitAndNotifyReloaded> __this_00;

		__this_00 = new BaseCharacter.d__152<WaitAndNotifyReloaded>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6003FA8")]
	[Address(RVA = "0x5AB4480", Offset = "0x5AB3480", VA = "0x5AB4480")]
	public string GetCurrentAnimation()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetCurrentAnimation): clean
		AnimationHandler __this_00;
		String pSVar1;

		__this_00 = this.Animation;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return pSVar1;
	}

	[Token(Token = "0x6003FA9")]
	[Address(RVA = "0x5AB87B0", Offset = "0x5AB77B0", VA = "0x5AB87B0", Slot = "105")]
	public virtual Quaternion GetTargetRotation()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetTargetRotation): clean
		Quaternion UVar1;
		Vector3 local_10;

		local_10.x = 0.0;
		local_10.y = this.TargetAngle * 0.017453292;
		local_10.z = 0.0;
		UVar1 = (Quaternion)Quaternion.Internal_FromEulerRad(ref local_10);
		return (Quaternion)UVar1;
	}

	[Token(Token = "0x6003FAA")]
	[Address(RVA = "0x5AB87F0", Offset = "0x5AB77F0", VA = "0x5AB87F0", Slot = "106")]
	public virtual Vector3 GetTargetDirection()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetTargetDirection): 12 lines keep C-only constructs
		uint uVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Db_00;
		byte[] auVar5 = new byte[16];
		uint uVar6;
		Vector3 UVar7;

		fVar2 = (90.0 - this.TargetAngle) * 0.017453292;
		fVar3 = cosf(fVar2);
		fVar2 = sinf(fVar2);
		uVar6 = extraout_XMM0_Db;
		if (Il2CppMethodInitialized_0753e72d == false) {
			uVar6 = 0;
			Il2CppMethodInitialized_0753e72d = true;
		}
		if (Il2CppMethodInitialized_0753e729 == false) {
			uVar6 = 0;
			Il2CppMethodInitialized_0753e729 = true;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			uVar6 = 0;
		}
		fVar4 = fVar2 * fVar2 + fVar3 * fVar3 + 0.0;
		if (fVar4 < 0.0) {
			fVar4 = sqrtf(fVar4);
			uVar6 = extraout_XMM0_Db_00;
		}
		else {
			fVar4 = SQRT(fVar4);
		}
		if (fVar4 <= 1e-05) {
			return (Vector3)(Vector3.zeroVector);
		}
		auVar5._4_4_ = fVar4;
		auVar5._0_4_ = fVar4;
		auVar5._8_4_ = uVar6;
		auVar5._12_4_ = uVar6;
		auVar5 = divps(ZEXT416((uint)fVar3), auVar5);
		UVar7.z = fVar2 / fVar4;
		UVar7.x = (float)auVar5._0_4_;
		UVar7.y = (float)auVar5._4_4_;
		return (Vector3)UVar7;
	}

	[Token(Token = "0x6003FAB")]
	[Address(RVA = "0x5AB8970", Offset = "0x5AB7970", VA = "0x5AB8970")]
	protected float GetAngleToTarget(Vector3 targetDirection)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetAngleToTarget): clean
		BaseComponentCache pUVar1;
		Transform __this_00;
		float fVar2;
		float fVar3;
		Vector3 UVar4;
		Vector3 euler;
		Quaternion local_18;

		fVar2 = atan2f(targetDirection.z, targetDirection.x);
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.Transform;
			if (__this_00 != null) {
				local_18 = __this_00.rotation;
				UVar4 = Quaternion.Internal_ToEulerRad(ref local_18);
				euler.x = UVar4.x * 57.29578;
				euler.y = UVar4.y * 57.29578;
				euler.z = UVar4.z * 57.29578;
				UVar4 = Quaternion.Internal_MakePositive(euler);
				fVar3 = UVar4.y + -90.0 + fVar2 * 57.29578;
				fVar2 = floorf(fVar3 / 360.0);
				fVar3 = fVar2 * -360.0 + fVar3;
				fVar2 = 360.0;
				if (fVar3 <= 360.0) {
					fVar2 = fVar3;
				}
				fVar2 = (float)(-(uint)(0.0 <= fVar3) & (uint)fVar2);
				return -(float)(~-(uint)(180.0 < fVar2) & (uint)fVar2 | (uint)(fVar2 + -360.0) & -(uint)(180.0 < fVar2)) ;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003FAC")]
	[Address(RVA = "0x5AB8A70", Offset = "0x5AB7A70", VA = "0x5AB8A70", Slot = "107")]
	protected virtual void CheckGround()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$CheckGround): 11 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		BaseComponentCache pUVar3;
		Transform __this_00;
		bool bVar5;
		int iVar6;
		bool bVar7;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dd;
		Vector3 UVar8;
		Vector3 UVar9;
		LayerMask UStack_50;
		float fStack_4c;
		byte[] auStack_48 = new byte[8];
		float fStack_40;
		float fStack_3c;
		float fStack_38;
		float fStack_28;
		float fStack_24;

		this.JustGrounded = false;
		pUVar3 = this.Cache;
		if ((pUVar3 == null) ||(__this_00 = pUVar3.Transform, __this_00 == null)) {
			throw new NullReferenceException();
		}
		UVar8 = __this_00.position;
		auStack_48._0_4_ = UVar8.x;
		auStack_48._4_4_ = UVar8.y;
		fStack_40 = extraout_XMM0_Dc;
		fStack_3c = extraout_XMM0_Dd;
		if (Il2CppMethodInitialized_0753e72c == false) {
			auStack_48 = (byte[])UVar8._0_8_;
			Il2CppMethodInitialized_0753e72c = true;
		}
		uVar1 = (Vector3.upVector).x;
		uVar2 = (Vector3.upVector).y;
		fStack_38 = (Vector3.upVector).z;
		auStack_48._4_4_ = (float)auStack_48._4_4_ + (float)uVar2 * 0.1;
		auStack_48._0_4_ = (float)auStack_48._0_4_ + (float)uVar1 * 0.1;
		fStack_40 = fStack_40 + 0.0;
		fStack_3c = fStack_3c + 0.0;
		UVar8.z = UVar8.z + fStack_38 * 0.1;
		fStack_28 = -(float)uVar1;
		fStack_24 = -(float)uVar2;
		fStack_38 = -fStack_38;
		fStack_4c = this.get_GroundDistance();
		UStack_50 = this.get_GroundMask();
		bVar7 = false;
		iVar6 = UStack_50.value;
		UVar9.y = fStack_24;
		UVar9.x = fStack_28;
		UVar8.x = (float)auStack_48._0_4_;
		UVar8.y = (float)auStack_48._4_4_;
		UVar9.z = fStack_38;
		bVar5 = this.CheckRaycastIgnoreTriggers(UVar8, UVar9, fStack_4c, iVar6);
		if (bVar5) {
			if (this.Grounded != false) {
				return;
			}
			this.JustGrounded = true;
			bVar7 = true;
		}
		this.Grounded = bVar7;
		return;
	}

	[Token(Token = "0x6003FAD")]
	[Address(RVA = "0x5AB8BE0", Offset = "0x5AB7BE0", VA = "0x5AB8BE0", Slot = "108")]
	public virtual bool CheckRaycastIgnoreTriggers(Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$CheckRaycastIgnoreTriggers): 1 lines keep C-only constructs
		System_Nullable_RaycastHit__o SStack_40;

		SStack_40.RaycastIgnoreTriggers(this, origin, direction, distance, layerMask);
		return SStack_40.hasValue != false;
	}

	[Token(Token = "0x6003FAE")]
	[Address(RVA = "0x5AB8C70", Offset = "0x5AB7C70", VA = "0x5AB8C70", Slot = "109")]
	protected virtual RaycastHit? RaycastIgnoreTriggers(Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$RaycastIgnoreTriggers): 5 lines keep C-only constructs
		RaycastHit value;
		RaycastHit pUVar1;
		bool bVar2;
		RaycastHit UStack_48;

		UStack_48.m_UV.x = 0.0;
		UStack_48.m_UV.y = 0.0;
		UStack_48.m_Collider.m_Data = (EntityId)0x0;
		UStack_48.m_Normal.y = 0.0;
		UStack_48.m_Normal.z = 0.0;
		UStack_48.m_FaceID = 0;
		UStack_48.m_Distance = 0.0;
		UStack_48.m_Point.x = 0.0;
		UStack_48.m_Point.y = 0.0;
		UStack_48.m_Point.z = 0.0;
		UStack_48.m_Normal.x = 0.0;
		bVar2 = Physics.Raycast(origin, direction, ref UStack_48, distance, layerMask, 1);
		__return_storage_ptr__.hasValue = false;
		*(undefined3)&__return_storage_ptr__.field_0x1 = 0;
		__return_storage_ptr__.value.m_Point.x = 0.0;
		pUVar1 = &__return_storage_ptr__.value;
		pUVar1.m_Point.y = 0.0;
		pUVar1.m_Point.z = 0.0;
		pUVar1 = &__return_storage_ptr__.value;
		pUVar1.m_Normal.x = 0.0;
		pUVar1.m_Normal.y = 0.0;
		*(ulong)&__return_storage_ptr__.value.m_Normal.z = 0;
		__return_storage_ptr__.value.m_Distance = 0.0;
		__return_storage_ptr__.value.m_UV.x = 0.0;
		*(ulong)&__return_storage_ptr__.value.m_UV.y = 0;
		if (bVar2) {
			value.m_Point.z = UStack_48.m_Point.z;
			value.m_Normal.x = UStack_48.m_Normal.x;
			value.m_Point.x = UStack_48.m_Point.x;
			value.m_Point.y = UStack_48.m_Point.y;
			value.m_Normal.y = UStack_48.m_Normal.y;
			value.m_Normal.z = UStack_48.m_Normal.z;
			value.m_FaceID = UStack_48.m_FaceID;
			value.m_Distance = UStack_48.m_Distance;
			value.m_UV.x = UStack_48.m_UV.x;
			value.m_UV.y = UStack_48.m_UV.y;
			value.m_Collider.m_Data = UStack_48.m_Collider.m_Data;
			__return_storage_ptr__ = new Nullable<RaycastHit>(value);
		}
		return __return_storage_ptr__;
	}

	[Token(Token = "0x6003FAF")]
	[Address(RVA = "0x5AB8DB0", Offset = "0x5AB7DB0", VA = "0x5AB8DB0")]
	protected bool IsSoundLoopActive(string sound)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$IsSoundLoopActive): 1 lines keep C-only constructs
		HashSet<object> __this_00;
		bool bVar1;

		if (Il2CppMethodInitialized_0754750c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_0754750c = true;
		}
		__this_00 = (HashSet<object>)this._activeSoundLoops;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.Contains((object)sound);
		return bVar1;
	}

	[Token(Token = "0x6003FB0")]
	[Address(RVA = "0x5AB8E00", Offset = "0x5AB7E00", VA = "0x5AB8E00")]
	protected void ToggleSoundLoop(string sound, bool toggle)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$ToggleSoundLoop): 1 lines keep C-only constructs
		HashSet<object> pSVar1;
		bool bVar2;

		if (Il2CppMethodInitialized_0754750d == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_0754750d = true;
		}
		pSVar1 = (HashSet<object>)this._activeSoundLoops;
		if (pSVar1 != null) {
			bVar2 = pSVar1.Contains((object)sound);
			if (bVar2 == toggle) {
				return;
			}
			pSVar1 = (HashSet<object>)this._activeSoundLoops;
			if (toggle) {
				if (pSVar1 != null) {
					pSVar1.Add((object)sound);
					this.PlaySound(sound);
					return;
				}
			}
			else if (pSVar1 != null) {
				pSVar1.Remove((object)sound);
				this.StopSound(sound);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003FB1")]
	[Address(RVA = "0x5AB8EC0", Offset = "0x5AB7EC0", VA = "0x5AB8EC0", Slot = "110")]
	protected virtual void ToggleSound(string sound, bool toggle)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$ToggleSound): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		Dictionary<object, object> __this_00;
		bool bVar2;
		AudioSource pUStack_20;

		pUStack_20 = null;
		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(__this_00 = (Dictionary<object, object>)pUVar1.AudioSources, __this_00 == null)) {
	label_05bb8f5b: ;
			throw new NullReferenceException();
		}
		bVar2 = __this_00.TryGetValue((object)sound, (object*)&pUStack_20);
		if (bVar2) {
			if (pUStack_20 == null) goto label_05bb8f5b;
			bVar2 = pUStack_20.isPlaying;
			if (bVar2 != toggle) {
				if (toggle) {
					this.PlaySound(sound);
				}
				else {
					this.StopSound(sound);
				}
			}
		}
		return;
	}

	[Token(Token = "0x6003FB2")]
	[Address(RVA = "0x5AB8F60", Offset = "0x5AB7F60", VA = "0x5AB8F60", Slot = "111")]
	protected virtual void ToggleSoundLocal(string sound, bool toggle)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$ToggleSoundLocal): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		Dictionary<object, object> __this_00;
		bool bVar2;
		bool bVar3;
		AudioSource pUStack_20;

		pUStack_20 = null;
		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(__this_00 = (Dictionary<object, object>)pUVar1.AudioSources, __this_00 == null)) {
	label_05bb9014: ;
			throw new NullReferenceException();
		}
		bVar2 = __this_00.TryGetValue((object)sound, (object*)&pUStack_20);
		if (bVar2) {
			if (pUStack_20 == null) goto label_05bb9014;
			bVar2 = (bool)(this.SoundsEnabled & toggle);
			bVar3 = pUStack_20.isPlaying;
			if (bVar2 != bVar3) {
				if (bVar2 == false) {
					if (pUStack_20 == null) goto label_05bb9014;
					pUStack_20.Stop();
				}
				else {
					if (pUStack_20 == null) goto label_05bb9014;
					pUStack_20.Play();
				}
			}
		}
		return;
	}

	[Token(Token = "0x6003FB3")]
	[Address(RVA = "0x5AB9020", Offset = "0x5AB8020", VA = "0x5AB9020", Slot = "112")]
	protected virtual void OnDestroy()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$OnDestroy): clean
		return;
	}

	[Token(Token = "0x6003FB4")]
	[Address(RVA = "0x5AB9030", Offset = "0x5AB8030", VA = "0x5AB9030", Slot = "113")]
	protected virtual void FixedUpdate()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$FixedUpdate): clean
		uint uVar1;
		BaseDetection pCVar2;
		float fVar3;
		float fVar4;
		Vector3 UVar5;

		UVar5 = this.GetVelocity();
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		fVar4 = UVar5.z * UVar5.z + UVar5.y * UVar5.y + UVar5.x * UVar5.x;
		if (fVar4 < 0.0) {
			fVar4 = sqrtf(fVar4);
			this.CurrentSpeed = fVar4;
			pCVar2 = this.Detection;
		}
		else {
			this.CurrentSpeed = SQRT(fVar4);
			pCVar2 = this.Detection;
		}
		if (pCVar2 != null) {
			pCVar2.OnFixedUpdate();
		}
		fVar4 = this._disableKinematicTimeLeft;
		fVar3 = Time.deltaTime;
		this._disableKinematicTimeLeft = fVar4 - fVar3;
		return;
	}

	[Token(Token = "0x6003FB5")]
	[Address(RVA = "0x5AB9150", Offset = "0x5AB8150", VA = "0x5AB9150", Slot = "114")]
	protected virtual void LateUpdate()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$LateUpdate): clean
		this.LateUpdateFootstep();
		this.LateUpdateFPS();
		return;
	}

	[Token(Token = "0x6003FB6")]
	[Address(RVA = "0x5AB9180", Offset = "0x5AB8180", VA = "0x5AB9180", Slot = "115")]
	protected virtual void LateUpdateFootstep()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$LateUpdateFootstep): 3 lines keep C-only constructs
		int iVar1;
		PhotonMessageInfo info;
		PhotonMessageInfo PVar2;
		bool bVar3;
		int iVar4;
		String a;
		PhotonMessageInfo PStack_50;
		PhotonMessageInfo PStack_38;

		if (this.FootstepsEnabled != false) {
			iVar4 = this.GetFootstepPhase();
			iVar1 = this._stepPhase;
			if (iVar1 != iVar4) {
				a = this.GetFootstepAudio(iVar1);
				bVar3 = (a != (String)**(ulong*)(g_data_07556758 + 0xb8));
				if (bVar3) {
					this._stepPhase = iVar4;
					PStack_50 = Util.CreateLocalPhotonInfo();
					PStack_38.photonView = PStack_50.photonView;
					PStack_38.timeInt = PStack_50.timeInt;
					PStack_38._4_4_ = PStack_50._4_4_;
					PStack_38.Sender = PStack_50.Sender;
					info.Sender = PStack_50.Sender;
					info.timeInt = PStack_50.timeInt;
					info._4_4_ = PStack_50._4_4_;
					info.photonView = PStack_50.photonView;
					this.StopSoundRPC(a, info);
					PVar2.Sender = PStack_38.Sender;
					PVar2.timeInt = PStack_38.timeInt;
					PVar2._4_4_ = PStack_38._4_4_;
					PVar2.photonView = PStack_38.photonView;
					this.PlaySoundRPC(a, PVar2);
				}
			}
		}
		return;
	}

	[Token(Token = "0x6003FB7")]
	[Address(RVA = "0x5AB92B0", Offset = "0x5AB82B0", VA = "0x5AB92B0", Slot = "116")]
	protected virtual void LateUpdateFPS()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$LateUpdateFPS): 14 lines keep C-only constructs
		byte bVar1;
		InGameCamera __this_00;
		BaseCharacter x;
		bool bVar2;
		List<Renderer> pSVar3;
		BaseCharacter pCVar4;
		float fVar5;
		System_Collections_Generic_List_Enumerator_object__o local_48;
		byte[] local_30 = new byte[16];
		Renderer local_20;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		bVar2 = this.IsMine();
		if (!bVar2) {
			return;
		}
		__this_00 = (InGameCamera)SceneLoader.CurrentCamera ;
		if (__this_00 != null) {
			bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera) )) {
				throw new InvalidCastException();
			}
			x = __this_00._follow;
			bVar2 = ((Object)x == (Object)this);
			if (bVar2) {
				fVar5 = __this_00.GetCameraDistance();
				if ((fVar5 == 0.0) && (!NAN(fVar5))) {
					if (this._cameraFPS != false) {
						return;
					}
					this._cameraFPS = true;
					pSVar3 = this.GetFPSDisabledRenderers();
					if (pSVar3 == null) goto label_05bb95d8;
					local_30.GetEnumerator((List<object>)pSVar3);
					local_48._current = (object)local_20;
					local_48._list = (List<T>)local_30._0_8_;
					local_48._index = local_30._8_4_;
					local_48._version = local_30._12_4_;
					local_30._0_8_ = null;
					local_30._8_8_ = &local_48;
					while (bVar2 = local_48.MoveNext()) {
						if ((Renderer)local_48._current == null) {
							throw new NullReferenceException();
						}
						local_48._current.enabled = false;
					}
					goto label_05bb95b7;
				}
			}
			if (this._cameraFPS == false) {
				return;
			}
			this._cameraFPS = false;
			if (this.Dead == false) {
				pCVar4 = this.klass;
			}
			else {
				pCVar4 = this.klass;
				bVar1 = (typeof(Human)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar4._2).typeHierarchyDepth) &&((pCVar4._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human))) {
					return;
				}
			}
			pSVar3 = this.GetFPSDisabledRenderers();
			if (pSVar3 != null) {
				local_30.GetEnumerator((List<object>)pSVar3);
				local_48._current = (object)local_20;
				local_48._list = (List<T>)local_30._0_8_;
				local_48._index = local_30._8_4_;
				local_48._version = local_30._12_4_;
				local_30._0_8_ = null;
				local_30._8_8_ = &local_48;
				while (bVar2 = local_48.MoveNext()) {
					if ((Renderer)local_48._current == null) {
						throw new NullReferenceException();
					}
					local_48._current.enabled = true;
				}
	label_05bb95b7: ;
				local_48.Dispose() ;
				return;
			}
		}
	label_05bb95d8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003FB8")]
	[Address(RVA = "0x5AB9650", Offset = "0x5AB8650", VA = "0x5AB9650", Slot = "117")]
	protected virtual int GetFootstepPhase()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetFootstepPhase): clean
		return 0;
	}

	[Token(Token = "0x6003FB9")]
	[Address(RVA = "0x5AB9660", Offset = "0x5AB8660", VA = "0x5AB9660", Slot = "118")]
	protected virtual string GetFootstepAudio(int phase)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetFootstepAudio): clean
		return "";
	}

	[Token(Token = "0x6003FBA")]
	[Address(RVA = "0x5AB9690", Offset = "0x5AB8690", VA = "0x5AB9690", Slot = "119")]
	protected virtual List<Renderer> GetFPSDisabledRenderers()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetFPSDisabledRenderers): clean
		List<Renderer> __this_00;

		__this_00 = new List<Renderer>();
		return __this_00;
	}

	[Token(Token = "0x6003FBB")]
	[Address(RVA = "0x5AB96F0", Offset = "0x5AB86F0", VA = "0x5AB96F0")]
	protected void AddRendererIfExists(List<Renderer> renderers, GameObject go, bool multiple = false)
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$AddRendererIfExists): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Renderer[] pUVar3;
		bool bVar5;
		Object[] pSVar6;
		ulong uVar7;
		Object pUVar8;
		int iVar9;
		ulong uVar10;

		bVar5 = ((Object)go != null);
		if (!bVar5) {
			return;
		}
		if (multiple) {
			if ((go != null) &&(pSVar6 = go.GetComponentsInChildren<Renderer>(), pSVar6 != null)) {
				iVar9 = (int)pSVar6.Length;
				uVar7 = pSVar6.Length & 0xffffffff;
				if (renderers == null) {
					if (iVar9 < 1) {
						return;
					}
					uVar10 = 0;
					while (uVar10 < uVar7) {
						pUVar8 = (Object)pSVar6[uVar10];
						bVar5 = (pUVar8 != null);
						if (bVar5) goto label_05bb9989;
						uVar10 = uVar10 + 1;
						uVar2 = (uint)pSVar6.Length;
						uVar7 = (ulong)uVar2;
						if ((long)(int)uVar2 <= (long)uVar10) {
							return;
						}
					}
				}
				else {
					if (iVar9 < 1) {
						return;
					}
					uVar10 = 0;
					while (uVar10 < uVar7) {
						pUVar8 = (Object)pSVar6[uVar10];
						bVar5 = (pUVar8 != null);
						if (bVar5) {
							piVar1 = &renderers._version;
							*piVar1 = *piVar1 + 1;
							pUVar3 = renderers._items;
							if (pUVar3 == null) goto label_05bb9989;
							uVar2 = renderers._size;
							if (uVar2 < (uint)pUVar3.Length) {
								renderers._size = uVar2 + 1;
								pUVar3[(int)uVar2] = (Renderer)pUVar8;
							}
							else {
								renderers.AddWithResize((object)pUVar8);
							}
						}
						uVar10 = uVar10 + 1;
						uVar2 = (uint)pSVar6.Length;
						uVar7 = (ulong)uVar2;
						if ((long)(int)uVar2 <= (long)uVar10) {
							return;
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
		else if (go != null) {
			pUVar8 = (Object)go.GetComponentInChildren<Renderer>();
			bVar5 = (pUVar8 != null);
			if (!bVar5) {
				return;
			}
			if (renderers != null) {
				piVar1 = &renderers._version;
				*piVar1 = *piVar1 + 1;
				pUVar3 = renderers._items;
				if (pUVar3 != null) {
					uVar2 = renderers._size;
					if (uVar2 < (uint)pUVar3.Length) {
						renderers._size = uVar2 + 1;
						pUVar3[(int)uVar2] = (Renderer)pUVar8;
						return;
					}
					renderers.AddWithResize((object)pUVar8);
					return;
				}
			}
		}
	label_05bb9989: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003FBC")]
	[Address(RVA = "0x5AB9990", Offset = "0x5AB8990", VA = "0x5AB9990", Slot = "120")]
	public virtual Vector3 GetCenterPosition()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$GetCenterPosition): clean
		BaseComponentCache pUVar1;
		Transform __this_00;
		Vector3 UVar2;

		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(__this_00 = pUVar1.Transform, __this_00 == null)) {
			throw new NullReferenceException();
		}
		UVar2 = (Vector3)__this_00.position;
		return (Vector3)UVar2;
	}

	[Token(Token = "0x6003FBD")]
	[Address(RVA = "0x5AB99C0", Offset = "0x5AB89C0", VA = "0x5AB99C0")]
	public BaseCharacter()
	{
		// Lifted from source/cpp/Characters/BaseCharacter.c (Characters.BaseCharacter$$.ctor): clean
		uint uVar1;
		LayerMask UVar3;
		HashSet<string> __this_00;
		List<BaseUseable> __this_01;
		Int32[] layers;
		Object[] pSVar4;

		this.FootstepsEnabled = true;
		this.SoundsEnabled = true;
		this.EffectsEnabled = true;
		__this_00 = new HashSet<string>();
		this._activeSoundLoops = __this_00;
		this.IsVisible = true;
		this.RichTextName = "";
		this.VisibleName = "";
		this.Guild = "";
		this.FeedKillerName = "";
		this.FeedVictimName = "";
		__this_01 = new List<BaseUseable>();
		this.Items = __this_01;
		layers = (Int32[])new int[4];
		if (layers == null) {
			throw new NullReferenceException();
		}
		uVar1 = (uint)layers.Length;
		if (uVar1 != 0) {
			layers[0] = PhysicsLayer.TitanMovebox;
			if (((uVar1 != 1) && (layers[1] = PhysicsLayer.MapObjectEntities, 2 < uVar1)) &&(layers[2] = PhysicsLayer.MapObjectCharacters, uVar1 != 3)) {
				layers[3] = PhysicsLayer.MapObjectAll;
				UVar3 = PhysicsLayer.GetMask(layers);
				this.GroundMaskLayers.m_Mask = (int32_t)UVar3.m_Mask;
				pSVar4 = (Object[])new object[3];
				this.crossfadeCache = pSVar4;
				base();
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}
}
