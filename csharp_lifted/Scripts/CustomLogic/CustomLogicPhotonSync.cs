// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicPhotonSync
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicPhotonSync.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicPhotonSync.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000635")]
internal class CustomLogicPhotonSync : MonoBehaviourPunCallbacks, IPunObservable, IOnPhotonViewOwnerChange, IPhotonViewCallback, IPunInstantiateMagicCallback
{
	[Token(Token = "0x2000636")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishDynamicInit_003Ed__45 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001ABB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001ABC")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001ABD")]
		[FieldOffset(Offset = "0x20")]
		public CustomLogicPhotonSync _003C_003E4__this;

		[Token(Token = "0x4001ABE")]
		[FieldOffset(Offset = "0x28")]
		public bool persistsOwnership;

		[Token(Token = "0x4001ABF")]
		[FieldOffset(Offset = "0x30")]
		public string csvScript;

		[Token(Token = "0x17000A66")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003B5C")]
			[Address(RVA = "0x5A71AA0", Offset = "0x5A70AA0", VA = "0x5A71AA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000A67")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003B5E")]
			[Address(RVA = "0x5A71AF0", Offset = "0x5A70AF0", VA = "0x5A71AF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6003B59")]
		[Address(RVA = "0x5A70310", Offset = "0x5A6F310", VA = "0x5A70310")]
		[DebuggerHidden]
		public _003CWaitAndFinishDynamicInit_003Ed__45(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6003B5A")]
		[Address(RVA = "0x5A719E0", Offset = "0x5A709E0", VA = "0x5A719E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6003B5B")]
		[Address(RVA = "0x5A719F0", Offset = "0x5A709F0", VA = "0x5A719F0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$MoveNext): clean
			CustomLogicPhotonSync __this_00;
			CustomLogicEvaluator pCVar1;

			if ((uint)this.__1__state < 2) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
					pCVar1 = CustomLogicManager.Evaluator;
				}
				else {
					pCVar1 = CustomLogicManager.Evaluator;
				}
				if (pCVar1 == null) {
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.CreateAndSetupObject(this.persistsOwnership, this.csvScript);
			}
			return false;
		}

		[Token(Token = "0x6003B5D")]
		[Address(RVA = "0x5A71AB0", Offset = "0x5A70AB0", VA = "0x5A71AB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishDynamicInit_d__45_System_Collections_IEnumerator);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000637")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishInit_003Ed__46 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001AC0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001AC1")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001AC2")]
		[FieldOffset(Offset = "0x20")]
		public int mapObjectId;

		[Token(Token = "0x4001AC3")]
		[FieldOffset(Offset = "0x28")]
		public CustomLogicPhotonSync _003C_003E4__this;

		[Token(Token = "0x17000A68")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003B62")]
			[Address(RVA = "0x5A71C20", Offset = "0x5A70C20", VA = "0x5A71C20", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000A69")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003B64")]
			[Address(RVA = "0x5A71C70", Offset = "0x5A70C70", VA = "0x5A71C70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6003B5F")]
		[Address(RVA = "0x5A70330", Offset = "0x5A6F330", VA = "0x5A70330")]
		[DebuggerHidden]
		public _003CWaitAndFinishInit_003Ed__46(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6003B60")]
		[Address(RVA = "0x5A71B00", Offset = "0x5A70B00", VA = "0x5A71B00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6003B61")]
		[Address(RVA = "0x5A71B10", Offset = "0x5A70B10", VA = "0x5A71B10", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$MoveNext): clean
			CustomLogicPhotonSync __this_00;
			Dictionary<int, object> __this_01;
			bool bVar1;
			CustomLogicEvaluator pCVar2;

			if (1 < (uint)this.__1__state) {
				return false;
			}
			__this_00 = this.__4__this;
			this.__1__state = -1;
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			else {
				pCVar2 = CustomLogicManager.Evaluator;
			}
			if (pCVar2 == null) {
		label_05b71bea: ;
				this.__2__current = null;
				this.__1__state = 1;
				return true;
			}
			if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicManager.Evaluator;
				if (pCVar2 == null) goto label_05b71c0c;
			}
			__this_01 = (Dictionary<int, object>)pCVar2.IdToNetworkView;
			if (__this_01 != null) {
				bVar1 = __this_01.ContainsKey(this.mapObjectId);
				if (!bVar1) goto label_05b71bea;
				if (__this_00 != null) {
					__this_00.FinishInit(this.mapObjectId);
					return false;
				}
			}
		label_05b71c0c: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6003B63")]
		[Address(RVA = "0x5A71C30", Offset = "0x5A70C30", VA = "0x5A71C30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishInit_d__46_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000638")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishSync_003Ed__54 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001AC4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001AC5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001AC6")]
		[FieldOffset(Offset = "0x20")]
		public CustomLogicPhotonSync _003C_003E4__this;

		[Token(Token = "0x4001AC7")]
		[FieldOffset(Offset = "0x28")]
		public Vector3 position;

		[Token(Token = "0x4001AC8")]
		[FieldOffset(Offset = "0x34")]
		public Quaternion rotation;

		[Token(Token = "0x17000A6A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003B68")]
			[Address(RVA = "0x5A71CF0", Offset = "0x5A70CF0", VA = "0x5A71CF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000A6B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003B6A")]
			[Address(RVA = "0x5A71D40", Offset = "0x5A70D40", VA = "0x5A71D40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6003B65")]
		[Address(RVA = "0x5A70CB0", Offset = "0x5A6FCB0", VA = "0x5A70CB0")]
		[DebuggerHidden]
		public _003CWaitAndFinishSync_003Ed__54(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6003B66")]
		[Address(RVA = "0x5A71C80", Offset = "0x5A70C80", VA = "0x5A71C80", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6003B67")]
		[Address(RVA = "0x5A71C90", Offset = "0x5A70C90", VA = "0x5A71C90", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$MoveNext): clean
			CustomLogicPhotonSync pCVar1;
			float fVar2;
			float fVar3;
			float fVar4;

			if ((uint)this.__1__state < 2) {
				pCVar1 = this.__4__this;
				this.__1__state = -1;
				if (pCVar1 == null) {
					throw new NullReferenceException();
				}
				if (pCVar1._inited == false) {
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
				fVar2 = this.position.x;
				fVar3 = this.position.y;
				pCVar1._correctPosition.z = this.position.z;
				pCVar1._correctPosition.x = fVar2;
				pCVar1._correctPosition.y = fVar3;
				fVar2 = this.rotation.y;
				fVar3 = this.rotation.z;
				fVar4 = this.rotation.w;
				pCVar1._correctRotation.x = this.rotation.x;
				pCVar1._correctRotation.y = fVar2;
				pCVar1._correctRotation.z = fVar3;
				pCVar1._correctRotation.w = fVar4;
			}
			return false;
		}

		[Token(Token = "0x6003B69")]
		[Address(RVA = "0x5A71D00", Offset = "0x5A70D00", VA = "0x5A71D00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishSync_d__54_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4001AAB")]
	[FieldOffset(Offset = "0x28")]
	protected bool _syncTransforms;

	[Token(Token = "0x4001AAC")]
	[FieldOffset(Offset = "0x29")]
	protected bool _syncVelocity;

	[Token(Token = "0x4001AAD")]
	[FieldOffset(Offset = "0x30")]
	private Rigidbody _rigidbody;

	[Token(Token = "0x4001AAE")]
	[FieldOffset(Offset = "0x38")]
	public int ObjectId;

	[Token(Token = "0x4001AAF")]
	[FieldOffset(Offset = "0x40")]
	public PhotonView PhotonView;

	[Token(Token = "0x4001AB3")]
	[FieldOffset(Offset = "0x60")]
	protected Vector3 _correctPosition;

	[Token(Token = "0x4001AB4")]
	[FieldOffset(Offset = "0x6C")]
	protected Quaternion _correctRotation;

	[Token(Token = "0x4001AB5")]
	[FieldOffset(Offset = "0x7C")]
	protected Vector3 _correctVelocity;

	[Token(Token = "0x4001AB6")]
	[FieldOffset(Offset = "0x88")]
	protected bool _inited;

	[Token(Token = "0x4001AB7")]
	[FieldOffset(Offset = "0x90")]
	protected object[] _streamObjs;

	[Token(Token = "0x4001AB8")]
	[FieldOffset(Offset = "0x98")]
	protected bool _synced;

	[Token(Token = "0x4001AB9")]
	[FieldOffset(Offset = "0x99")]
	protected bool _persistsOwnership;

	[Token(Token = "0x4001ABA")]
	[FieldOffset(Offset = "0x9C")]
	protected SpawnIntent _spawnIntent;

	[Token(Token = "0x17000A5F")]
	public bool SyncTransforms
	{
		[Token(Token = "0x6003B2D")]
		[Address(RVA = "0x5A6EE90", Offset = "0x5A6DE90", VA = "0x5A6EE90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$get_SyncTransforms): clean
			return this._syncTransforms;
		}
		[Token(Token = "0x6003B2E")]
		[Address(RVA = "0x5A6EEA0", Offset = "0x5A6DEA0", VA = "0x5A6EEA0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$set_SyncTransforms): clean
			PhotonView pPVar1;

			pPVar1 = this.PhotonView;
			if (pPVar1 == null) {
				throw new NullReferenceException();
			}
			if (pPVar1._IsMine_k__BackingField != false) {
				this._syncTransforms = value;
			}
			return;
		}
	}

	[Token(Token = "0x17000A60")]
	public bool SyncVelocity
	{
		[Token(Token = "0x6003B2F")]
		[Address(RVA = "0x5A6EEC0", Offset = "0x5A6DEC0", VA = "0x5A6EEC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$get_SyncVelocity): clean
			return this._syncVelocity;
		}
		[Token(Token = "0x6003B30")]
		[Address(RVA = "0x5A6EED0", Offset = "0x5A6DED0", VA = "0x5A6EED0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$set_SyncVelocity): clean
			PhotonView pPVar1;

			pPVar1 = this.PhotonView;
			if (pPVar1 == null) {
				throw new NullReferenceException();
			}
			if (pPVar1._IsMine_k__BackingField != false) {
				this._syncVelocity = value;
			}
			return;
		}
	}

	[Token(Token = "0x17000A61")]
	protected Rigidbody Rigidbody
	{
		[Token(Token = "0x6003B31")]
		[Address(RVA = "0x5A6EEF0", Offset = "0x5A6DEF0", VA = "0x5A6EEF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$get_Rigidbody): 2 lines keep C-only constructs
			Rigidbody* targetAddress;
			Object pUVar1;
			MapObject pMVar2;
			GameObject __this_00;
			bool bVar3;
			Rigidbody pUVar4;

			pUVar1 = (Object)this._rigidbody;
			targetAddress = &this._rigidbody;
			bVar3 = (pUVar1 == null);
			if ((bVar3) && (pMVar2 = this._MapObject_k__BackingField, pMVar2 != null)) {
				pUVar1 = (Object)pMVar2.GameObject;
				bVar3 = (pUVar1 != null);
				if (bVar3) {
					pMVar2 = this._MapObject_k__BackingField;
					if ((pMVar2 == null) ||(__this_00 = pMVar2.GameObject, __this_00 == null)) {
						throw new NullReferenceException();
					}
					pUVar4 = __this_00.GetComponent<Rigidbody>();
					*targetAddress = pUVar4;
				}
			}
			return *targetAddress;
		}
	}

	[Token(Token = "0x17000A62")]
	public MapObject MapObject
	{
		[Token(Token = "0x6003B32")]
		[Address(RVA = "0x5A6EFD0", Offset = "0x5A6DFD0", VA = "0x5A6EFD0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$get_MapObject): clean
			return this._MapObject_k__BackingField;
		}
		[Token(Token = "0x6003B33")]
		[Address(RVA = "0x5A6EFE0", Offset = "0x5A6DFE0", VA = "0x5A6EFE0")]
		[CompilerGenerated]
		protected set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$set_MapObject): clean
			this._MapObject_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000A63")]
	public CustomLogicMapObjectBuiltin CustomLogicMapObjectBuiltin
	{
		[Token(Token = "0x6003B34")]
		[Address(RVA = "0x5A6EFF0", Offset = "0x5A6DFF0", VA = "0x5A6EFF0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$get_CustomLogicMapObjectBuiltin): clean
			return this._CustomLogicMapObjectBuiltin_k__BackingField;
		}
		[Token(Token = "0x6003B35")]
		[Address(RVA = "0x5A6F000", Offset = "0x5A6E000", VA = "0x5A6F000")]
		[CompilerGenerated]
		protected set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$set_CustomLogicMapObjectBuiltin): clean
			this._CustomLogicMapObjectBuiltin_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000A64")]
	public CustomLogicNetworkViewBuiltin NetworkView
	{
		[Token(Token = "0x6003B36")]
		[Address(RVA = "0x5A6F010", Offset = "0x5A6E010", VA = "0x5A6F010")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$get_NetworkView): clean
			return this._NetworkView_k__BackingField;
		}
		[Token(Token = "0x6003B37")]
		[Address(RVA = "0x5A6F020", Offset = "0x5A6E020", VA = "0x5A6F020")]
		[CompilerGenerated]
		protected set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$set_NetworkView): clean
			this._NetworkView_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000A65")]
	public float SmoothingDelay
	{
		[Token(Token = "0x6003B38")]
		[Address(RVA = "0x5A6F030", Offset = "0x5A6E030", VA = "0x5A6F030")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$get_SmoothingDelay): clean
			return 5.0;
		}
	}

	[Token(Token = "0x6003B39")]
	[Address(RVA = "0x5A6F040", Offset = "0x5A6E040", VA = "0x5A6F040", Slot = "57")]
	protected virtual void Awake()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$Awake): clean
		PhotonView pPVar1;

		pPVar1 = this.photonView;
		this.PhotonView = pPVar1;
		return;
	}

	[Token(Token = "0x6003B3A")]
	[Address(RVA = "0x5A6F060", Offset = "0x5A6E060", VA = "0x5A6F060", Slot = "58")]
	public new virtual void OnEnable()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$OnEnable): clean
		PhotonView __this_00;

		__this_00 = this.PhotonView;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.AddCallbackTarget((IPhotonViewCallback)this);
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			PhotonNetwork.AddCallbackTarget((object)this);
			return;
		}
		PhotonNetwork.AddCallbackTarget((object)this);
		return;
	}

	[Token(Token = "0x6003B3B")]
	[Address(RVA = "0x5A6F0D0", Offset = "0x5A6E0D0", VA = "0x5A6F0D0", Slot = "59")]
	public new virtual void OnDisable()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$OnDisable): clean
		PhotonView __this_00;

		__this_00 = this.PhotonView;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.RemoveCallbackTarget((IPhotonViewCallback)this);
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			PhotonNetwork.RemoveCallbackTarget((object)this);
			return;
		}
		PhotonNetwork.RemoveCallbackTarget((object)this);
		return;
	}

	[Token(Token = "0x6003B3C")]
	[Address(RVA = "0x5A6F140", Offset = "0x5A6E140", VA = "0x5A6F140", Slot = "56")]
	public void OnPhotonInstantiate(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$OnPhotonInstantiate): 8 lines keep C-only constructs
		int iVar1;
		Object[] pSVar2;
		object pIVar3;
		int piVar4;
		int piVar5;
		byte puVar6;

		if ((info.photonView != null) &&(pSVar2 = ((info.photonView).fields).instantiationDataField, pSVar2 != null )) {
			if ((int)pSVar2.Length == 0) {
	label_05b6f234: ;
				throw new IndexOutOfRangeException();
			}
			pIVar3 = pSVar2[0];
			if (pIVar3 != null) {
				if ((pIVar3.klass._1).element_class == (typeof(SpawnIntent)._1).element_class) {
					piVar4 = il2cpp_vm_Object_Unbox(pIVar3);
					iVar1 = *piVar4;
					this._spawnIntent = iVar1;
					if (iVar1 != 1) {
						return;
					}
					if ((pSVar2.Length & 0xfffffffe) == 0) goto label_05b6f234;
					pIVar3 = pSVar2[1];
					if (pIVar3 == null) goto label_05b6f22f;
					if ((pIVar3.klass._1).element_class == *(Il2CppClass*)(g_data_07556710 + 0x40)) {
						piVar5 = il2cpp_vm_Object_Unbox(pIVar3);
						this.ObjectId = *piVar5;
						if ((uint)pSVar2.Length < 3) goto label_05b6f234;
						pIVar3 = pSVar2[2];
						if (pIVar3 == null) goto label_05b6f22f;
						if ((pIVar3.klass._1).element_class == *(Il2CppClass*)(g_data_075566f0 + 0x40)) {
							puVar6 = il2cpp_vm_Object_Unbox(pIVar3);
							this._syncVelocity = (bool)*puVar6;
							return;
						}
					}
				}
				throw new InvalidCastException();
			}
		}
	label_05b6f22f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003B3D")]
	[Address(RVA = "0x5A6F240", Offset = "0x5A6E240", VA = "0x5A6F240")]
	public void Init(int mapObjectId, bool rigidbody)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$Init): 2 lines keep C-only constructs
		Dictionary<int, object> __this_00;
		PhotonView __this_01;
		MapObject pMVar1;
		Object[] parameters;
		object pIVar2;
		object pIVar3;
		byte local_2d;
		int local_2c;

		if (Il2CppMethodInitialized_07547336 == false) {
			Il2CppMethodInitialized_07547336 = true;
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) goto label_05b6f2cf;
	label_05b6f271: ;
			__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		}
		else {
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor != 0) goto label_05b6f271;
	label_05b6f2cf: ;
			__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		}
		if (__this_00 != null) {
			pMVar1 = __this_00.get_Item(mapObjectId);
			this._MapObject_k__BackingField = pMVar1;
			__this_01 = this.PhotonView;
			parameters = (Object[])new object[2];
			local_2c = mapObjectId;
			pIVar2 = (object)local_2c;
			if (parameters != null) {
				if ((pIVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) {
	label_05b6f40c: ;
					pIVar2 = new ArrayTypeMismatchException();
					throw pIVar2;
				}
				if ((int)parameters.Length != 0) {
					parameters[0] = pIVar2;
					local_2d = rigidbody;
					pIVar2 = (object)local_2d;
					if ((pIVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) goto label_05b6f40c;
					if ((parameters.Length & 0xfffffffe) != 0) {
						parameters[1] = pIVar2;
						if (__this_01 != null) {
							__this_01.RPC("InitRPC", 3, parameters);
							return;
						}
						goto label_05b6f402;
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05b6f402: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003B3E")]
	[Address(RVA = "0x5A6F420", Offset = "0x5A6E420", VA = "0x5A6F420")]
	public void Init(int mapObjectId)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$Init): 2 lines keep C-only constructs
		Dictionary<int, object> __this_00;
		GameObject __this_01;
		PhotonView __this_02;
		bool bVar1;
		MapObject pMVar2;
		Object x;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		byte uStack_2d;
		int iStack_2c;

		if (Il2CppMethodInitialized_07547337 == false) {
			Il2CppMethodInitialized_07547337 = true;
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) goto label_05b6f4ca;
	label_05b6f44f: ;
			__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		}
		else {
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor != 0) goto label_05b6f44f;
	label_05b6f4ca: ;
			__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		}
		if (__this_00 != null) {
			pMVar2 = __this_00.get_Item(mapObjectId);
			this._MapObject_k__BackingField = pMVar2;
			pMVar2 = this._MapObject_k__BackingField;
			if ((pMVar2 != null) &&(__this_01 = pMVar2.GameObject, __this_01 != null)) {
				x = (Object)__this_01.GetComponent<Rigidbody>() ;
				bVar1 = (x != null);
				__this_02 = this.PhotonView;
				parameters = (Object[])new object[2];
				iStack_2c = mapObjectId;
				pIVar3 = (object)iStack_2c;
				if (parameters != null) {
					if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) {
	label_05b6f659: ;
						pIVar3 = new ArrayTypeMismatchException();
						throw pIVar3;
					}
					if ((int)parameters.Length != 0) {
						parameters[0] = pIVar3;
						uStack_2d = bVar1;
						pIVar3 = (object)uStack_2d;
						if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) goto label_05b6f659;
						if ((parameters.Length & 0xfffffffe) != 0) {
							parameters[1] = pIVar3;
							if (__this_02 != null) {
								__this_02.RPC("InitRPC", 3, parameters);
								return;
							}
							goto label_05b6f64f;
						}
					}
					throw new IndexOutOfRangeException();
				}
			}
		}
	label_05b6f64f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003B3F")]
	[Address(RVA = "0x5A6F670", Offset = "0x5A6E670", VA = "0x5A6F670")]
	public void InitDynamic(bool persistsOwnership, string csvScript)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$InitDynamic): 6 lines keep C-only constructs
		PhotonView __this_00;
		ulong in_RAX;
		Object[] parameters;
		object pIVar1;
		object pIVar2;
		ulong uStack_38;

		uStack_38 = in_RAX;
		__this_00 = this.PhotonView;
		parameters = (Object[])new object[2];
		uStack_38 = CONCAT17(persistsOwnership, (undefined7)uStack_38);
		pIVar1 = (object)(((long)&uStack_38 + 7));
		if (parameters == null) {
	label_05b6f7a0: ;
			throw new NullReferenceException();
		}
		if (pIVar1 != null) {
			pIVar2 = il2cpp_vm_Object_IsInst(pIVar1, (((parameters.obj).klass)._1).element_class);
			if (pIVar2 == null) goto label_05b6f7a5;
		}
		if ((int)parameters.Length != 0) {
			parameters[0] = pIVar1;
			if (csvScript != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)csvScript, (((parameters.obj).klass)._1).element_class);
				if (pIVar1 == null) {
	label_05b6f7a5: ;
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((parameters.Length & 0xfffffffe) != 0) {
				parameters[1] = (object)csvScript;
				if (__this_00 != null) {
					__this_00.RPC("InitDynamicRPC", 4, parameters);
					this.CreateAndSetupObject(persistsOwnership, csvScript);
					return;
				}
				goto label_05b6f7a0;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6003B40")]
	[Address(RVA = "0x5A6FCF0", Offset = "0x5A6ECF0", VA = "0x5A6FCF0")]
	[PunRPC]
	public void InitRPC(int mapObjectId, bool syncVelocity, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$InitRPC): clean
		PhotonView pPVar1;
		CustomLogicPhotonSync.d__46<WaitAndFinishInit> __this_00;

		pPVar1 = this.PhotonView;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		if (info.Sender != pPVar1._Owner_k__BackingField) {
			return;
		}
		this._syncVelocity = syncVelocity;
		__this_00 = new CustomLogicPhotonSync.d__46<WaitAndFinishInit>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.mapObjectId = mapObjectId;
		this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x6003B41")]
	[Address(RVA = "0x5A6FE00", Offset = "0x5A6EE00", VA = "0x5A6FE00")]
	[PunRPC]
	public void InitDynamicRPC(bool persistsOwnership, string csvScript, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$InitDynamicRPC): 13 lines keep C-only constructs
		PhotonView pPVar1;
		long lVar2;
		bool bVar3;
		MethodInfo pMVar4;
		Il2CppClass pIVar5;
		ArgumentException __this_00;
		String pSVar6;

		pPVar1 = this.PhotonView;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		if (info.Sender != pPVar1._Owner_k__BackingField) {
			return;
		}
		pMVar4 = (MethodInfo)il2cpp_codegen_object_new(typeof(CustomLogicPhotonSync.d__45<WaitAndFinishDynamicInit>));
		pMVar4 = new Object();
		*(uint)&pMVar4.invoker_method = 0;
		pMVar4.klass = (Il2CppClass)this;
		*(bool)&pMVar4.return_type = persistsOwnership;
		pMVar4.parameters = (Il2CppType*)csvScript;
		if (pMVar4 == null) {
			pIVar5 = il2cpp_codegen_get_runtime_metadata(&typeof(NullReferenceException));
			__this_00 = (ArgumentException)il2cpp_codegen_object_new(pIVar5);
			pSVar6 = il2cpp_codegen_get_runtime_metadata(&"routine is null");
			__this_00 = new NullReferenceException(pSVar6);
		}
		else {
			bVar3 = MonoBehaviour.IsObjectMonoBehaviour((Object)this);
			if (bVar3) {
				if (this == null) {
					throw new NullReferenceException();
				}
				lVar2 = this.m_CachedPtr;
				if (lVar2 == 0) {
					ThrowHelper.ThrowNullReferenceException((object)this);
				}
				if (g_data_0754ff20 == null) {
					g_data_0754ff20 = il2cpp_codegen_resolve_icall("UnityEngine.MonoBehaviour::StartCoroutineManaged2_Injected(System.IntPtr,System.Collections.IEnumerator)");
				}
				(*g_data_0754ff20)(lVar2,pMVar4);
				return;
			}
			pIVar5 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this_00 = (ArgumentException)il2cpp_codegen_object_new(pIVar5);
			pSVar6 = il2cpp_codegen_get_runtime_metadata(&"Coroutines can only be stopped on a MonoBehaviour");
			__this_00 = new ArgumentException(pSVar6);
		}
		pMVar4 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UnityEngine_MonoBehaviour_StartCoroutine);
		throw (object)__this_00;
	}

	[Token(Token = "0x6003B42")]
	[Address(RVA = "0x5A6F7C0", Offset = "0x5A6E7C0", VA = "0x5A6F7C0")]
	public void CreateAndSetupObject(bool persistsOwnership, string csvScript)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$CreateAndSetupObject): 11 lines keep C-only constructs
		MapObject* targetAddress;
		int iVar1;
		int iVar2;
		CustomLogicEvaluator pCVar3;
		Dictionary<int, object> pSVar4;
		GameObject pUVar5;
		bool bVar6;
		ulong in_RAX;
		PhotonView pPVar7;
		String[] value;
		String pSVar8;
		MapScriptSceneObject __this_00;
		MapObject pMVar9;
		CustomLogicNetworkViewBuiltin pCVar10;
		CustomLogicMapObjectBuiltin __this_01;
		object pIVar11;
		Transform pUVar12;
		MethodInfo method_00;
		Quaternion UVar13;
		Vector3 UVar14;
		ulong local_38;

		local_38 = in_RAX;
		bVar6 = String.IsNullOrEmpty(csvScript);
		if (bVar6) {
			return;
		}
		this._persistsOwnership = persistsOwnership;
		iVar1 = MapLoader.ROOT_OBJECT_ID;
		iVar2 = MapLoader.NETWORK_OFFSET;
		pPVar7 = this.photonView;
		if ((pPVar7 == null) ||(this.ObjectId = iVar1 - (iVar2 + pPVar7.viewIdField), csvScript == null)) goto label_05b6fce2;
		value = csvScript.Split(10, 0);
		pSVar8 = String.Join("", value);
		__this_00 = new MapScriptSceneObject();
		if (__this_00 == null) goto label_05b6fce2;
		__this_00.Deserialize(pSVar8);
		__this_00.Id = this.ObjectId;
		__this_00.Parent = MapLoader.ROOT_OBJECT_ID;
		__this_00.Networked = true;
		pMVar9 = MapLoader.LoadObject((MapScriptBaseObject)__this_00, false);
		if (pMVar9 == null) goto label_05b6fce2;
		pMVar9.RuntimeCreated = true;
		MapLoader.SetParent(pMVar9);
		pCVar10 = new CustomLogicNetworkViewBuiltin(pMVar9);
		this._NetworkView_k__BackingField = pCVar10;
		__this_01 = new CustomLogicMapObjectBuiltin(pMVar9);
		this._CustomLogicMapObjectBuiltin_k__BackingField = __this_01;
		targetAddress = &this._MapObject_k__BackingField;
		this._MapObject_k__BackingField = pMVar9;
		pCVar3 = CustomLogicManager.Evaluator;
		if ((pCVar3 == null) ||(pSVar4 = (Dictionary<int, object>)pCVar3.IdToMapObjectBuiltin, pSVar4 == null)) goto label_05b6fce2;
		bVar6 = pSVar4.ContainsKey(this.ObjectId);
		if (bVar6) {
			local_38 = CONCAT44(this.ObjectId, (undefined4)local_38);
			pIVar11 = (object)(((long)&local_38 + 4));
			pSVar8 = String.Format("PhotonSync: MapObject for id {0} already exists, overwriting.", pIVar11);
			Debug.LogWarning((object)pSVar8);
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor != 0) goto label_05b6fa6d;
	label_05b6fae9: ;
			pCVar3 = CustomLogicManager.Evaluator;
		}
		else {
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) goto label_05b6fae9;
	label_05b6fa6d: ;
			pCVar3 = CustomLogicManager.Evaluator;
		}
		if (pCVar3 == null) goto label_05b6fce2;
		pSVar4 = (Dictionary<int, object>)pCVar3.IdToMapObjectBuiltin;
		if (pSVar4 == null) goto label_05b6fce2;
		pSVar4.set_Item(this.ObjectId, (object)this._CustomLogicMapObjectBuiltin_k__BackingField);
		pCVar3 = CustomLogicManager.Evaluator;
		if ((pCVar3 == null) ||(pSVar4 = (Dictionary<int, object>)pCVar3.IdToNetworkView, pSVar4 == null)) goto label_05b6fce2;
		bVar6 = pSVar4.ContainsKey(this.ObjectId);
		if (bVar6) {
			local_38 = CONCAT44(local_38._4_4_, this.ObjectId);
			pIVar11 = (object)local_38;
			pSVar8 = String.Format("PhotonSync: NetworkView for id {0} already exists, overwriting.", pIVar11);
			Debug.LogWarning((object)pSVar8);
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor != 0) goto label_05b6fb73;
	label_05b6fbec: ;
			pCVar3 = CustomLogicManager.Evaluator;
			method_00 = MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_set_Item;
		}
		else {
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) goto label_05b6fbec;
	label_05b6fb73: ;
			pCVar3 = CustomLogicManager.Evaluator;
			method_00 = MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_set_Item;
		}
		MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_set_Item = method_00;
		if ((pCVar3 != null) &&(pSVar4 = (Dictionary<int, object>)pCVar3.IdToNetworkView, pSVar4 != null)) {
			pSVar4.set_Item(this.ObjectId, (object)this._NetworkView_k__BackingField);
			pCVar10 = this._NetworkView_k__BackingField;
			if (pCVar10 != null) {
				pCVar10.SetSyncDynamic(this);
				pCVar3 = CustomLogicManager.Evaluator;
				if (pCVar3 != null) {
					pCVar3.LoadRuntimeMapObjectComponents(pMVar9, true);
					pMVar9 = *targetAddress;
					if (((pMVar9 != null) &&(pUVar5 = pMVar9.GameObject, pUVar5 != null)) &&(pUVar12 = pUVar5.transform, pUVar12 != null)) {
						UVar14 = (Vector3)pUVar12.position;
						this._correctPosition = UVar14;
						pMVar9 = this._MapObject_k__BackingField;
						if (((pMVar9 != null) &&(pUVar5 = pMVar9.GameObject, pUVar5 != null)) &&(pUVar12 = pUVar5.transform, pUVar12 != null)) {
							UVar13 = (Quaternion)pUVar12.rotation;
							this._correctRotation = UVar13;
							this._inited = true;
							return;
						}
					}
				}
			}
		}
	label_05b6fce2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003B43")]
	[Address(RVA = "0x5A6FEC0", Offset = "0x5A6EEC0", VA = "0x5A6FEC0")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishDynamicInit_003Ed__45))]
	public IEnumerator WaitAndFinishDynamicInit(bool persistsOwnership, string csvScript)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$WaitAndFinishDynamicInit): 5 lines keep C-only constructs
		object __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicPhotonSync.d__45<WaitAndFinishDynamicInit>));
		__this_00 = new Object();
		*(uint)&__this_00[1].klass = 0;
		__this_00[2].klass = (Il2CppClass)this;
		*(bool)&__this_00[2].monitor = persistsOwnership;
		__this_00[3].klass = (Il2CppClass)csvScript;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6003B44")]
	[Address(RVA = "0x5A6FD90", Offset = "0x5A6ED90", VA = "0x5A6FD90")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishInit_003Ed__46))]
	public IEnumerator WaitAndFinishInit(int mapObjectId)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$WaitAndFinishInit): clean
		CustomLogicPhotonSync.d__46<WaitAndFinishInit> __this_00;

		__this_00 = new CustomLogicPhotonSync.d__46<WaitAndFinishInit>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.mapObjectId = mapObjectId;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6003B45")]
	[Address(RVA = "0x5A70350", Offset = "0x5A6F350", VA = "0x5A70350")]
	private void FinishInit(int mapObjectId)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$FinishInit): clean
		uint uVar1;
		Dictionary<int, object> pSVar2;
		CustomLogicEvaluator pCVar3;
		GameObject pUVar4;
		MapObject pMVar5;
		CustomLogicNetworkViewBuiltin pCVar6;
		Transform pUVar7;
		Quaternion UVar8;
		Vector3 UVar9;

		if (Il2CppMethodInitialized_0754733c == false) {
			Il2CppMethodInitialized_0754733c = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		}
		else {
			pSVar2 = *(Dictionary<int, object>*)(typeof(MapLoader)).static_fields;
		}
		if (pSVar2 != null) {
			pMVar5 = pSVar2.get_Item(mapObjectId);
			this._MapObject_k__BackingField = pMVar5;
			pCVar3 = CustomLogicManager.Evaluator;
			if ((pCVar3 != null) &&(pSVar2 = (Dictionary<int, object>)pCVar3.IdToNetworkView, pSVar2 != null)) {
				pCVar6 = pSVar2.get_Item(mapObjectId);
				this._NetworkView_k__BackingField = pCVar6;
				pCVar6 = this._NetworkView_k__BackingField;
				if (pCVar6 != null) {
					pCVar6.SetSync(this);
					pMVar5 = this._MapObject_k__BackingField;
					if (((pMVar5 != null) &&(pUVar4 = pMVar5.GameObject, pUVar4 != null)) &&(pUVar7 = pUVar4.transform, pUVar7 != null)) {
						UVar9 = (Vector3)pUVar7.position;
						this._correctPosition = UVar9;
						pMVar5 = this._MapObject_k__BackingField;
						if (((pMVar5 != null) &&(pUVar4 = pMVar5.GameObject, pUVar4 != null)) &&(pUVar7 = pUVar4.transform, pUVar7 != null)) {
							UVar8 = (Quaternion)pUVar7.rotation;
							this._correctRotation = UVar8;
							this._inited = true;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003B46")]
	[Address(RVA = "0x5A70500", Offset = "0x5A6F500", VA = "0x5A70500")]
	[PunRPC]
	public void SendMessageRPC(string message, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$SendMessageRPC): clean
		CustomLogicNetworkViewBuiltin __this_00;
		Player player;
		CustomLogicPlayerBuiltin __this_01;
		double sentServerTime;

		player = info.Sender;
		__this_00 = this._NetworkView_k__BackingField;
		if (__this_00 != null) {
			__this_01 = new CustomLogicPlayerBuiltin(player);
			sentServerTime = info.SentServerTime;
			__this_00.OnNetworkMessage(__this_01, message, sentServerTime);
		}
		return;
	}

	[Token(Token = "0x6003B47")]
	[Address(RVA = "0x5A70580", Offset = "0x5A6F580", VA = "0x5A70580")]
	public void SendMessage(Player player, string message)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$SendMessage): 1 lines keep C-only constructs
		PhotonView __this_00;
		Object[] parameters;
		object pIVar1;

		__this_00 = this.PhotonView;
		parameters = (Object[])new object[1];
		if (parameters != null) {
			if (message != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)message, (((parameters.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)parameters.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameters[0] = (object)message;
			if (__this_00 != null) {
				__this_00.RPC("SendMessageRPC", player, parameters);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003B48")]
	[Address(RVA = "0x5A70650", Offset = "0x5A6F650", VA = "0x5A70650")]
	public void SendMessageAll(string message)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$SendMessageAll): 1 lines keep C-only constructs
		PhotonView __this_00;
		Object[] parameters;
		object pIVar1;

		__this_00 = this.PhotonView;
		parameters = (Object[])new object[1];
		if (parameters != null) {
			if (message != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)message, (((parameters.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)parameters.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameters[0] = (object)message;
			if (__this_00 != null) {
				__this_00.RPC("SendMessageRPC", 0, parameters);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003B49")]
	[Address(RVA = "0x5A70720", Offset = "0x5A6F720", VA = "0x5A70720")]
	public void SendMessageOthers(string message)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$SendMessageOthers): 1 lines keep C-only constructs
		PhotonView __this_00;
		Object[] parameters;
		object pIVar1;

		__this_00 = this.PhotonView;
		parameters = (Object[])new object[1];
		if (parameters != null) {
			if (message != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)message, (((parameters.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)parameters.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameters[0] = (object)message;
			if (__this_00 != null) {
				__this_00.RPC("SendMessageRPC", 1, parameters);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003B4A")]
	[Address(RVA = "0x5A707F0", Offset = "0x5A6F7F0", VA = "0x5A707F0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player newPlayer)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$OnPlayerEnteredRoom): 2 lines keep C-only constructs
		PhotonView __this_00;
		Object[] parameters;
		object pIVar1;
		object pIVar2;
		MethodInfo pMVar3;
		Vector3 local_48;
		Quaternion local_38;

		if ((this._inited == false) || (this._syncTransforms == false)) {
			return;
		}
		__this_00 = this.PhotonView;
		pMVar3 = (MethodInfo)0x2;
		parameters = (Object[])new object[2];
		local_48 = this.GetPosition();
		pMVar3 = (MethodInfo)(object)local_48;
		if (parameters == null) {
	label_05b70976: ;
			throw new NullReferenceException();
		}
		if ((pMVar3 != null) &&(pIVar1 = il2cpp_vm_Object_IsInst((object)pMVar3, (((parameters.obj).klass)._1).element_class), pIVar1 == null)) {
	label_05b7097b: ;
			pIVar1 = new ArrayTypeMismatchException();
			throw pIVar1;
		}
		if ((int)parameters.Length != 0) {
			parameters[0] = (object)pMVar3;
			local_38 = this.GetRotation();
			pIVar1 = (object)local_38;
			if ((pIVar1 != null) &&(pIVar2 = il2cpp_vm_Object_IsInst(pIVar1, (((parameters.obj).klass)._1).element_class), pIVar2 == null)) goto label_05b7097b;
			if ((parameters.Length & 0xfffffffe) != 0) {
				parameters[1] = pIVar1;
				if (__this_00 != null) {
					__this_00.RPC("SyncRPC", newPlayer, parameters);
					return;
				}
				goto label_05b70976;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6003B4B")]
	[Address(RVA = "0x5A70B30", Offset = "0x5A6FB30", VA = "0x5A70B30")]
	[PunRPC]
	public void SyncRPC(Vector3 position, Quaternion rotation, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$SyncRPC): clean
		PhotonView pPVar1;
		CustomLogicPhotonSync.d__54<WaitAndFinishSync> __this_00;
		float fStack_38;
		float fStack_34;

		pPVar1 = this.PhotonView;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		if (info.Sender != pPVar1._Owner_k__BackingField) {
			return;
		}
		__this_00 = new CustomLogicPhotonSync.d__54<WaitAndFinishSync>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.position.x = position.x;
		__this_00.position.y = position.y;
		__this_00.position.z = position.z;
		fStack_38 = rotation.x;
		fStack_34 = rotation.y;
		__this_00.rotation.x = fStack_38;
		__this_00.rotation.y = fStack_34;
		__this_00.rotation.z = rotation.z;
		__this_00.rotation.w = rotation.w;
		this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x6003B4C")]
	[Address(RVA = "0x5A70C10", Offset = "0x5A6FC10", VA = "0x5A70C10")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishSync_003Ed__54))]
	public IEnumerator WaitAndFinishSync(Vector3 position, Quaternion rotation)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$WaitAndFinishSync): clean
		CustomLogicPhotonSync.d__54<WaitAndFinishSync> __this_00;
		float fStack_38;
		float fStack_34;

		__this_00 = new CustomLogicPhotonSync.d__54<WaitAndFinishSync>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.position.x = position.x;
		__this_00.position.y = position.y;
		__this_00.position.z = position.z;
		fStack_38 = rotation.x;
		fStack_34 = rotation.y;
		__this_00.rotation.x = fStack_38;
		__this_00.rotation.y = fStack_34;
		__this_00.rotation.z = rotation.z;
		__this_00.rotation.w = rotation.w;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6003B4D")]
	[Address(RVA = "0x5A70CD0", Offset = "0x5A6FCD0", VA = "0x5A70CD0", Slot = "60")]
	protected virtual void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$OnPhotonSerializeView): 24 lines keep C-only constructs
		float pfVar1;
		float pfVar2;
		float pfVar3;
		uint uVar4;
		MapObject pMVar5;
		Object x;
		CustomLogicNetworkViewBuiltin pCVar6;
		ulong uVar7;
		bool bVar8;
		MethodInfo pMVar9;
		object pIVar10;
		sbyte pcVar11;
		ulong puVar12;
		uint puVar13;
		Object[] pSVar14;
		object pIVar15;
		uint uVar16;
		Object[]* targetAddress;
		Quaternion pUVar17;
		uint uVar18;
		float fVar20;
		float fVar21;
		Vector3 UVar22;
		ulong uStack_60;
		uint uStack_50;
		uint uStack_4c;
		Quaternion UStack_48;

		UStack_48 = (Quaternion)ZEXT816(0);
		if (stream == null) goto label_05b7124d;
		if (stream._IsWriting_k__BackingField != false) {
			if ((this._inited == false) ||(pMVar5 = this._MapObject_k__BackingField, pMVar5 == null)) {
				uStack_60 = uStack_60 & 0xffffffffffffff00;
				pIVar10 = (object)uStack_60;
			}
			else {
				x = (Object)pMVar5.GameObject;
				bVar8 = (x != null);
				uStack_60 = CONCAT71(uStack_60._1_7_, bVar8);
				pMVar9 = (MethodInfo)(object)uStack_60;
				stream.SendNext((object)pMVar9);
				if (!bVar8) {
					return;
				}
				if (this._syncTransforms != false) {
					UVar22 = this.GetPosition();
					uStack_60 = UVar22._0_8_;
					pMVar9 = (MethodInfo)(object)uStack_60;
					stream.SendNext((object)pMVar9);
					UStack_48 = this.GetRotation();
					uStack_4c = il2cpp_runtime_helper_05b8cfd0(&UStack_48, 0);
					pMVar9 = (MethodInfo)(object)uStack_4c;
					stream.SendNext((object)pMVar9);
					if (this._syncVelocity != false) {
						UVar22 = this.GetVelocity();
						uStack_60 = UVar22._0_8_;
						pIVar10 = (object)uStack_60;
						stream.SendNext(pIVar10);
					}
				}
				pCVar6 = this._NetworkView_k__BackingField;
				if (pCVar6 != null) {
					pCVar6.SendNetworkStream(stream);
					return;
				}
				pIVar10 = new object[0];
			}
			stream.SendNext(pIVar10);
			return;
		}
		pIVar10 = stream.ReceiveNext();
		if (pIVar10 == null) goto label_05b7124d;
		if ((pIVar10.klass._1).element_class != (g_data_075566f0._1).element_class) goto label_05b71252;
		pcVar11 = il2cpp_vm_Object_Unbox(pIVar10);
		if (*pcVar11 == false) {
			return;
		}
		pIVar10 = stream.PeekNext();
		pIVar10 = (pIVar10 as object[]);
		this._syncTransforms = pIVar10 == null;
		if (pIVar10 == null) {
			pIVar10 = stream.ReceiveNext();
			if (pIVar10 == null) goto label_05b7124d;
			if ((pIVar10.klass._1).element_class != (typeof(Vector3)._1).element_class) goto label_05b71252;
			puVar12 = il2cpp_vm_Object_Unbox(pIVar10);
			uVar7 = *puVar12;
			this._correctPosition.x = (float)(int)uVar7;
			this._correctPosition.y = (float)(int)((ulong)uVar7 >> 0x20);
			this._correctPosition.z = *(float)(puVar12 + 1);
			pIVar10 = stream.ReceiveNext();
			if (pIVar10 == null) goto label_05b7124d;
			if ((pIVar10.klass._1).element_class != (g_data_07556710._1).element_class) {
				throw new InvalidCastException();
			}
			puVar13 = il2cpp_vm_Object_Unbox(pIVar10);
			uVar4 = *puVar13;
			uVar18 = uVar4 >> 0x1e;
			pfVar1 = &this._correctRotation.w;
			pfVar2 = &this._correctRotation.z;
			pfVar3 = &this._correctRotation.y;
			fVar20 = 0.0;
			uVar16 = uVar4;
			if (uVar18 == 3) {
	label_05b71014: ;
				fVar21 = (float)(uVar16 & 0x1ff) * 0.0013837706;
				if ((uVar16 & 0x200) != 0) {
					fVar21 = -fVar21;
				}
				*pfVar2 = fVar21;
				fVar20 = fVar20 + fVar21 * fVar21;
				uVar16 = uVar16 >> 10;
				if (uVar18 != 1) goto label_05b7104e;
			}
			else {
				fVar20 = (float)(uVar4 & 0x1ff) * 0.0013837706;
				if ((uVar4 & 0x200) != 0) {
					fVar20 = -fVar20;
				}
				*pfVar1 = fVar20;
				fVar20 = fVar20 * fVar20 + 0.0;
				uVar16 = uVar4 >> 10;
				if (uVar18 != 2) goto label_05b71014;
	label_05b7104e: ;
				fVar21 = (float)(uVar16 & 0x1ff) * 0.0013837706;
				if ((uVar16 & 0x200) != 0) {
					fVar21 = -fVar21;
				}
				*pfVar3 = fVar21;
				fVar20 = fVar20 + fVar21 * fVar21;
				uVar16 = uVar16 >> 10;
			}
			pUVar17 = &this._correctRotation;
			if (0x3fffffff < uVar4) {
				fVar21 = (float)(uVar16 & 0x1ff) * 0.0013837706;
				if ((uVar16 & 0x200) != 0) {
					fVar21 = -fVar21;
				}
				pUVar17.x = fVar21;
				fVar20 = fVar20 + fVar21 * fVar21;
			}
			fVar20 = 1.0 - fVar20;
			if (fVar20 < 0.0) {
				uStack_50 = uVar18;
				fVar20 = sqrtf(fVar20);
				uVar18 = uStack_50;
			}
			else {
				fVar20 = SQRT(fVar20);
			}
			switch((long)&switchD_05b7111b::switchdataD_010a58e0 +(long)(int)(&switchD_05b7111b::switchdataD_010a58e0)[uVar18]) {
			case 0x5b7111d:
				pUVar17 = (Quaternion)pfVar3;
				break;
			case 0x5b71122:
				pUVar17 = (Quaternion)pfVar2;
				break;
			case 0x5b71127:
				pUVar17 = (Quaternion)pfVar1;
			}
			pUVar17.x = fVar20;
			pIVar10 = stream.PeekNext();
			pIVar10 = (pIVar10 as object[]);
			this._syncVelocity = pIVar10 == null;
			if (pIVar10 == null) {
				pIVar10 = stream.ReceiveNext();
				if (pIVar10 == null) {
	label_05b7124d: ;
					throw new NullReferenceException();
				}
				if ((pIVar10.klass._1).element_class != (typeof(Vector3)._1).element_class) {
	label_05b71252: ;
					throw new InvalidCastException();
				}
				puVar12 = il2cpp_vm_Object_Unbox(pIVar10);
				uVar7 = *puVar12;
				this._correctVelocity.x = (float)(int)uVar7;
				this._correctVelocity.y = (float)(int)((ulong)uVar7 >> 0x20);
				this._correctVelocity.z = *(float)(puVar12 + 1);
			}
		}
		if (this._inited != false) {
			pIVar10 = stream.ReceiveNext();
			if (pIVar10 == null) {
				this._streamObjs = null;
			}
			else {
				pSVar14 = (Object[])(pIVar10 as object[]);
				if (pSVar14 == null) {
	label_05b7125a: ;
					throw new InvalidCastException();
				}
				this._streamObjs = pSVar14;
				pIVar15 = (pIVar10 as object[]);
				if (pIVar15 == null) goto label_05b7125a;
			}
			targetAddress = &this._streamObjs;
			pCVar6 = this._NetworkView_k__BackingField;
			if (((pCVar6 != null) &&(pSVar14 = *targetAddress, pSVar14 != null)) && (pSVar14.Length != 0)) {
				pCVar6.OnNetworkStream(pSVar14);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6003B4E")]
	[Address(RVA = "0x5A71380", Offset = "0x5A70380", VA = "0x5A71380", Slot = "61")]
	protected virtual void Update()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$Update): 6 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		PhotonView pPVar3;
		MapObject pMVar4;
		GameObject __this_00;
		ulong uVar5;
		ulong uVar6;
		bool bVar7;
		Transform __this_01;
		Object pUVar8;
		Rigidbody __this_02;
		float fVar10;
		float fVar11;
		float fVar12;
		Quaternion UVar13;
		Vector3 UVar14;
		Vector3 value;
		float fStack_78;
		float fStack_74;
		float fStack_68;
		float fStack_64;
		Quaternion UStack_38;
		Quaternion UStack_28;

		pPVar3 = this.PhotonView;
		if (pPVar3 != null) {
			if ((pPVar3._IsMine_k__BackingField != false) || (this._inited == false)) {
				return;
			}
			pMVar4 = this._MapObject_k__BackingField;
			if (pMVar4 != null) {
				pUVar8 = (Object)pMVar4.GameObject;
				bVar7 = (pUVar8 == null);
				if (bVar7) {
					return;
				}
				if (this._syncTransforms == false) {
					return;
				}
				pMVar4 = this._MapObject_k__BackingField;
				if (((pMVar4 != null) &&(__this_00 = pMVar4.GameObject, __this_00 != null)) &&(__this_01 = __this_00.transform, __this_01 != null)) {
					UVar14 = __this_01.position;
					uVar1 = this._correctPosition.x;
					uVar2 = this._correctPosition.y;
					fVar11 = this._correctPosition.z;
					fVar10 = Time.deltaTime;
					fVar10 = fVar10 * 5.0;
					fVar12 = 1.0;
					if (fVar10 <= 1.0) {
						fVar12 = fVar10;
					}
					fVar12 = (float)((uint)fVar12 & -(uint)(0.0 <= fVar10));
					fStack_78 = UVar14.x;
					fStack_74 = UVar14.y;
					value.x = fVar12 * ((float)uVar1 - fStack_78) + fStack_78;
					value.y = fVar12 * ((float)uVar2 - fStack_74) + fStack_74;
					value.z = (fVar11 - UVar14.z) * fVar12 + UVar14.z;
					__this_01.position = value;
					UVar13 = __this_01.rotation;
					uVar5._0_4_ = this._correctRotation.x;
					uVar5._4_4_ = this._correctRotation.y;
					uVar6._0_4_ = this._correctRotation.z;
					uVar6._4_4_ = this._correctRotation.w;
					fVar11 = Time.deltaTime;
					fStack_68 = UVar13.x;
					fStack_64 = UVar13.y;
					UStack_28.z = UVar13.z;
					UStack_28.w = UVar13.w;
					UStack_28.x = fStack_68;
					UStack_28.y = fStack_64;
					UStack_38._0_8_ = uVar5;
					UStack_38._8_8_ = uVar6;
					UVar13 = Quaternion.Internal_Lerp(ref UStack_28, ref UStack_38, fVar11 * 5.0);
					__this_01.rotation = UVar13;
					if (this._syncVelocity == false) {
						return;
					}
					pUVar8 = (Object)this.Rigidbody;
					bVar7 = (pUVar8 != null);
					if (!bVar7) {
						return;
					}
					__this_02 = this.Rigidbody;
					if (__this_02 != null) {
						__this_02.linearVelocity = (Vector3)this._correctVelocity;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003B4F")]
	[Address(RVA = "0x5A70990", Offset = "0x5A6F990", VA = "0x5A70990")]
	private Vector3 GetPosition()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$GetPosition): clean
		MapObject pMVar1;
		Object x;
		GameObject __this_00;
		bool bVar2;
		Transform __this_01;
		Vector3 UVar3;

		pMVar1 = this._MapObject_k__BackingField;
		if (pMVar1 != null) {
			x = (Object)pMVar1.GameObject;
			bVar2 = (x != null);
			if (!bVar2) {
				return (Vector3)(Vector3.zeroVector);
			}
			pMVar1 = this._MapObject_k__BackingField;
			if ((pMVar1 != null) &&(__this_00 = pMVar1.GameObject, __this_00 != null)) {
				__this_01 = __this_00.transform;
				if (__this_01 != null) {
					UVar3 = (Vector3)__this_01.position;
					return (Vector3)UVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003B50")]
	[Address(RVA = "0x5A70A60", Offset = "0x5A6FA60", VA = "0x5A70A60")]
	private Quaternion GetRotation()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$GetRotation): 1 lines keep C-only constructs
		MapObject pMVar1;
		Object x;
		GameObject __this_00;
		bool bVar2;
		Transform __this_01;
		Quaternion UVar3;

		pMVar1 = this._MapObject_k__BackingField;
		if (pMVar1 != null) {
			x = (Object)pMVar1.GameObject;
			bVar2 = (x != null);
			if (!bVar2) {
				return (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
			}
			pMVar1 = this._MapObject_k__BackingField;
			if ((pMVar1 != null) &&(__this_00 = pMVar1.GameObject, __this_00 != null)) {
				__this_01 = __this_00.transform;
				if (__this_01 != null) {
					UVar3 = (Quaternion)__this_01.rotation;
					return (Quaternion)UVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003B51")]
	[Address(RVA = "0x5A71270", Offset = "0x5A70270", VA = "0x5A71270")]
	private Vector3 GetVelocity()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$GetVelocity): clean
		MapObject pMVar1;
		GameObject __this_00;
		bool bVar2;
		Object pUVar3;
		Vector3 UVar4;

		pMVar1 = this._MapObject_k__BackingField;
		if (pMVar1 != null) {
			pUVar3 = (Object)pMVar1.GameObject;
			bVar2 = (pUVar3 != null);
			if (bVar2) {
				pMVar1 = this._MapObject_k__BackingField;
				if ((pMVar1 != null) &&(__this_00 = pMVar1.GameObject, __this_00 != null)) {
					pUVar3 = (Object)__this_00.GetComponent<Rigidbody>();
					bVar2 = (pUVar3 != null);
					if (!bVar2) goto label_05b7133b;
					if (pUVar3 != null) {
						UVar4 = (Vector3)pUVar3.linearVelocity;
						return (Vector3)UVar4;
					}
				}
				throw new NullReferenceException();
			}
		}
	label_05b7133b: ;
		return (Vector3)(Vector3.zeroVector);
	}

	[Token(Token = "0x6003B52")]
	[Address(RVA = "0x5A71590", Offset = "0x5A70590", VA = "0x5A71590", Slot = "54")]
	private void Photon_002EPun_002EIPunObservable_002EOnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$Photon.Pun.IPunObservable.OnPhotonSerializeView): clean
		this.OnPhotonSerializeView(stream, info);
		return;
	}

	[Token(Token = "0x6003B53")]
	[Address(RVA = "0x5A715B0", Offset = "0x5A705B0", VA = "0x5A715B0")]
	public void Transfer(CustomLogicPlayerBuiltin player)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$Transfer): clean
		PhotonView pPVar1;
		Player pPVar2;
		Player pPVar3;

		pPVar1 = this.PhotonView;
		if (pPVar1 != null) {
			if (pPVar1._IsMine_k__BackingField == false) {
				return;
			}
			if (player != null) {
				pPVar2 = player.Player;
				if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
					pPVar3 = PhotonNetwork.LocalPlayer;
				}
				else {
					pPVar3 = PhotonNetwork.LocalPlayer;
				}
				if (pPVar2 == pPVar3) {
					return;
				}
				pPVar2 = player.Player;
				if ((pPVar2 != null) &&(pPVar1 = this.PhotonView, pPVar1 != null)) {
					pPVar1.TransferOwnership(pPVar2.actorNumber);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003B54")]
	[Address(RVA = "0x5A71650", Offset = "0x5A70650", VA = "0x5A71650", Slot = "55")]
	private void Photon_002EPun_002EIOnPhotonViewOwnerChange_002EOnOwnerChange(Player newOwner, Player previousOwner)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$Photon.Pun.IOnPhotonViewOwnerChange.OnOwnerChange): clean
		CustomLogicNetworkViewBuiltin __this_00;
		CustomLogicPlayerBuiltin __this_01;
		CustomLogicPlayerBuiltin __this_02;

		if (previousOwner == null) {
			__this_01 = null;
		}
		else {
			__this_01 = new CustomLogicPlayerBuiltin(previousOwner);
		}
		__this_02 = new CustomLogicPlayerBuiltin(newOwner);
		__this_00 = this._NetworkView_k__BackingField;
		if (__this_00 == null) {
			return;
		}
		__this_00.OnNetworkTransfer(__this_01, __this_02);
		return;
	}

	[Token(Token = "0x6003B55")]
	[Address(RVA = "0x5A71700", Offset = "0x5A70700", VA = "0x5A71700", Slot = "43")]
	public override void OnPlayerLeftRoom(Player otherPlayer)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$OnPlayerLeftRoom): clean
		PhotonView pPVar1;
		bool bVar2;
		Player newOwner;

		pPVar1 = this.PhotonView;
		if (pPVar1 == null) {
	label_05b7179f: ;
			throw new NullReferenceException();
		}
		if ((pPVar1._Owner_k__BackingField == otherPlayer) &&(this._persistsOwnership != false)) {
			bVar2 = PhotonNetwork.IsMasterClient;
			if (bVar2) {
				pPVar1 = this.PhotonView;
				newOwner = PhotonNetwork.MasterClient;
				if (pPVar1 != null) {
					pPVar1.TransferOwnership(newOwner);
					return;
				}
				goto label_05b7179f;
			}
		}
		return;
	}

	[Token(Token = "0x6003B56")]
	[Address(RVA = "0x5A717B0", Offset = "0x5A707B0", VA = "0x5A717B0")]
	public void DestroyMe()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$DestroyMe): clean
		PhotonView pPVar1;
		GameObject targetGo;

		pPVar1 = this.PhotonView;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		if (pPVar1._IsMine_k__BackingField == false) {
			return;
		}
		targetGo = this.gameObject;
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			PhotonNetwork.Destroy(targetGo);
			return;
		}
		PhotonNetwork.Destroy(targetGo);
		return;
	}

	[Token(Token = "0x6003B57")]
	[Address(RVA = "0x5A71830", Offset = "0x5A70830", VA = "0x5A71830")]
	public void OnDestroy()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$OnDestroy): clean
		uint uVar1;
		CustomLogicEvaluator pCVar2;
		CustomLogicMapObjectBuiltin obj;

		if (Il2CppMethodInitialized_0754734c == false) {
			Il2CppMethodInitialized_0754734c = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pCVar2 = CustomLogicManager.Evaluator;
		}
		else {
			pCVar2 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
		}
		if (pCVar2 == null) {
			return;
		}
		obj = this._CustomLogicMapObjectBuiltin_k__BackingField;
		if (((typeof(CustomLogicMapBuiltin))._2).cctor_finished_or_no_cctor == 0) {
		}
		CustomLogicMapBuiltin.DestroyMapObjectBuiltin((object)obj, true);
		return;
	}

	[Token(Token = "0x6003B58")]
	[Address(RVA = "0x5A718F0", Offset = "0x5A708F0", VA = "0x5A718F0")]
	public CustomLogicPhotonSync()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhotonSync.c (CustomLogic.CustomLogicPhotonSync$$.ctor): clean
		float fVar1;
		UnityEngine_Vector3_StaticFields pUVar2;
		UnityEngine_Quaternion_StaticFields pUVar3;
		float fVar4;
		float fVar5;
		bool bVar6;

		this._syncTransforms = true;
		this._syncVelocity = true;
		pUVar2 = typeof(Vector3).static_fields;
		fVar4 = (pUVar2.zeroVector).y;
		fVar1 = (pUVar2.zeroVector).z;
		this._correctPosition.x = (pUVar2.zeroVector).x;
		this._correctPosition.y = fVar4;
		this._correctPosition.z = fVar1;
		if (Il2CppMethodInitialized_0753e72b == false) {
			Il2CppMethodInitialized_0753e72b = true;
			bVar6 = Il2CppMethodInitialized_0753e4b6 == false;
			pUVar3 = typeof(Quaternion).static_fields;
			fVar1 = (pUVar3.identityQuaternion).y;
			fVar4 = (pUVar3.identityQuaternion).z;
			fVar5 = (pUVar3.identityQuaternion).w;
			this._correctRotation.x = (pUVar3.identityQuaternion).x;
			this._correctRotation.y = fVar1;
			this._correctRotation.z = fVar4;
			this._correctRotation.w = fVar5;
			if (bVar6) {
				Il2CppMethodInitialized_0753e4b6 = true;
			}
		}
		else {
			pUVar3 = typeof(Quaternion).static_fields;
			fVar1 = (pUVar3.identityQuaternion).y;
			fVar4 = (pUVar3.identityQuaternion).z;
			fVar5 = (pUVar3.identityQuaternion).w;
			this._correctRotation.x = (pUVar3.identityQuaternion).x;
			this._correctRotation.y = fVar1;
			this._correctRotation.z = fVar4;
			this._correctRotation.w = fVar5;
		}
		pUVar2 = typeof(Vector3).static_fields;
		fVar4 = (pUVar2.zeroVector).y;
		fVar1 = (pUVar2.zeroVector).z;
		this._correctVelocity.x = (pUVar2.zeroVector).x;
		this._correctVelocity.y = fVar4;
		this._correctVelocity.z = fVar1;
		base();
		return;
	}
}
