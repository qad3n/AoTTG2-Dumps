// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.BaseProjectile
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Projectiles/BaseProjectile.c
// Prior real C# source (older reference): Assets/Scripts/Projectiles/BaseProjectile.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Characters;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Projectiles;

[Token(Token = "0x2000072")]
internal class BaseProjectile : BaseMovementSync
{
	[Token(Token = "0x2000073")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishDestroyCoroutine_003Ed__23 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400023A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400023B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400023C")]
		[FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x400023D")]
		[FieldOffset(Offset = "0x28")]
		public BaseProjectile _003C_003E4__this;

		[Token(Token = "0x17000081")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600033F")]
			[Address(RVA = "0x57700C0", Offset = "0x576F0C0", VA = "0x57700C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__23$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000082")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000341")]
			[Address(RVA = "0x5770110", Offset = "0x576F110", VA = "0x5770110", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__23$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600033C")]
		[Address(RVA = "0x576F850", Offset = "0x576E850", VA = "0x576F850")]
		[DebuggerHidden]
		public _003CWaitAndFinishDestroyCoroutine_003Ed__23(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__23$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600033D")]
		[Address(RVA = "0x576FFC0", Offset = "0x576EFC0", VA = "0x576FFC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__23$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600033E")]
		[Address(RVA = "0x576FFD0", Offset = "0x576EFD0", VA = "0x576FFD0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__23$$MoveNext): clean
			float seconds;
			int iVar1;
			BaseProjectile __this_00;
			GameObject targetGo;
			WaitForSeconds __this_01;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				seconds = this.time;
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
				targetGo = __this_00.gameObject;
				PhotonNetwork.Destroy(targetGo);
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x6000340")]
		[Address(RVA = "0x57700D0", Offset = "0x576F0D0", VA = "0x57700D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__23$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Projectiles_BaseProjectile_WaitAndFinishDestroyCoroutine_d__23_System_Collections_IEnumerator_Re);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x98")]
	protected BaseCharacter _owner;

	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0xA0")]
	protected float _timeLeft;

	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0xA8")]
	protected string _team;

	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0xB0")]
	protected Vector3 _velocity;

	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0xC0")]
	protected List<GameObject> _hideObjects;

	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0xC8")]
	protected List<Collider> _colliders;

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0xD0")]
	protected List<ParticleSystem> _fadeTrails;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0xD8")]
	protected ConstantForce _force;

	[Token(Token = "0x1700007F")]
	protected virtual float TrailFadeMultiplier
	{
		[Token(Token = "0x600032B")]
		[Address(RVA = "0x576E9E0", Offset = "0x576D9E0", VA = "0x576E9E0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile$$get_TrailFadeMultiplier): clean
			return 0.6;
		}
	}

	[Token(Token = "0x17000080")]
	protected virtual float DestroyDelay
	{
		[Token(Token = "0x600032C")]
		[Address(RVA = "0x576E9F0", Offset = "0x576D9F0", VA = "0x576E9F0", Slot = "11")]
		get
		{
			// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile$$get_DestroyDelay): clean
			return 1.5;
		}
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x576EA00", Offset = "0x576DA00", VA = "0x576EA00", Slot = "12")]
	public virtual void Setup(float liveTime, Vector3 velocity, Vector3 gravity, int charViewId, string team, object[] settings)
	{
		// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile$$Setup): 20 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		Rigidbody __this_00;
		GameObject __this_01;
		ConstantForce pUVar4;
		PhotonView __this_02;
		Object[] parameters;
		object pIVar5;
		object pIVar6;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		float fVar7;
		uint in_XMM3_Dc;
		uint in_XMM3_Dd;
		Vector3 value;
		Vector3 value_00;
		int iStack_5c;
		byte[] auStack_58 = new byte[16];
		float fStack_48;
		byte[] auStack_38 = new byte[16];

		fStack_48 = gravity.z;
		auStack_58._8_4_ = in_XMM3_Dc;
		auStack_58._0_8_ = gravity._0_8_;
		auStack_58._12_4_ = in_XMM3_Dd;
		auStack_38._8_4_ = in_XMM1_Dc;
		auStack_38._0_8_ = velocity._0_8_;
		auStack_38._12_4_ = in_XMM1_Dd;
		this._timeLeft = liveTime;
		__this_00 = this._rigidbody;
		if (__this_00 == null) goto label_0586ec6b;
		value.z = velocity.z;
		value.x = (float)auStack_38._0_4_;
		value.y = (float)auStack_38._4_4_;
		__this_00.linearVelocity = value;
		this._team = team;
		this._velocity.x = (float)auStack_38._0_4_;
		this._velocity.y = (float)auStack_38._4_4_;
		this._velocity.z = velocity.z;
		uVar1 = (Vector3.zeroVector).x;
		uVar2 = (Vector3.zeroVector).y;
		fVar7 = fStack_48 - (Vector3.zeroVector).z;
		if (9.9999994e-11 <=((float)auStack_58._4_4_ - (float)uVar2) * ((float)auStack_58._4_4_ - (float)uVar2) +((float)auStack_58._0_4_ - (float)uVar1) * ((float)auStack_58._0_4_ - (float)uVar1) + fVar7 * fVar7) {
			__this_01 = this.gameObject;
			if (__this_01 == null) goto label_0586ec6b;
			pUVar4 = __this_01.AddComponent<ConstantForce>();
			this._force = pUVar4;
			pUVar4 = this._force;
			if (pUVar4 == null) goto label_0586ec6b;
			value_00.z = fStack_48;
			value_00.x = (float)auStack_58._0_4_;
			value_00.y = (float)auStack_58._4_4_;
			pUVar4.force = value_00;
		}
		__this_02 = this.photonView;
		parameters = (Object[])new object[2];
		iStack_5c = charViewId;
		pIVar5 = (object)iStack_5c;
		if (parameters == null) {
	label_0586ec6b: ;
			throw new NullReferenceException();
		}
		if (pIVar5 != null) {
			pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((parameters.obj).klass)._1).element_class);
			if (pIVar6 == null) goto label_0586ec75;
		}
		if ((int)parameters.Length != 0) {
			parameters[0] = pIVar5;
			if (settings != null) {
				pIVar5 = il2cpp_vm_Object_IsInst(&settings.obj, (((parameters.obj).klass)._1).element_class);
				if (pIVar5 == null) {
	label_0586ec75: ;
					pIVar5 = new ArrayTypeMismatchException();
					throw pIVar5;
				}
			}
			if ((parameters.Length & 0xfffffffe) != 0) {
				parameters[1] = &settings.obj;
				if (__this_02 != null) {
					__this_02.RPC("SetupRPC", 0, parameters);
					return;
				}
				goto label_0586ec6b;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x576EC90", Offset = "0x576DC90", VA = "0x576EC90")]
	protected string GetOwnerName(string fallback)
	{
		// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile$$GetOwnerName): clean
		BaseCharacter pCVar1;
		bool bVar2;

		pCVar1 = this._owner;
		bVar2 = ((Object)pCVar1 != null);
		if (bVar2) {
			pCVar1 = this._owner;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
		}
		return fallback;
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x576ED10", Offset = "0x576DD10", VA = "0x576ED10", Slot = "13")]
	[PunRPC]
	public virtual void SetupRPC(int charViewId, object[] settings, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile$$SetupRPC): 10 lines keep C-only constructs
		byte bVar1;
		BaseComponentCache pUVar2;
		List<Collider> pSVar3;
		Object x;
		long lVar4;
		List<object> __this_00;
		Collider pUVar5;
		Collider pUVar6;
		bool bVar7;
		PhotonView pPVar8;
		BaseCharacter pCVar9;
		BaseProjectile pPVar10;
		byte[] auStack_90 = new byte[16];
		Collider pUStack_80;
		byte[] auStack_78 = new byte[8];
		Collider pUStack_68;
		BaseProjectile pPStack_60;
		ulong uStack_58;
		byte[] auStack_48 = new byte[8];
		Collider pUStack_38;

		auStack_78 = (byte[])0x0;
		pUStack_68 = null;
		auStack_48 = (byte[])0x0;
		pUStack_38 = null;
		pPVar8 = this.photonView;
		if (pPVar8 == null) {
	label_0586f2e6: ;
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar8._Owner_k__BackingField) {
			if (charViewId != -1) {
				pPVar8 = PhotonView.Find(charViewId);
				bVar7 = ((Object)pPVar8 != null);
				if (bVar7) {
					if (pPVar8 == null) goto label_0586f2e6;
					pCVar9 = pPVar8.GetComponent<BaseCharacter>() ;
					this._owner = pCVar9;
				}
				pCVar9 = this._owner;
				bVar7 = ((Object)pCVar9 != null);
				if (bVar7) {
					pCVar9 = this._owner;
					if (pCVar9 == null) goto label_0586f2e6;
					this._team = pCVar9.Team;
				}
			}
			this.SetupSettings(settings);
			this.RegisterObjects();
			this.RegisterColliders();
			pCVar9 = this._owner;
			bVar7 = ((Object)pCVar9 != null);
			if (bVar7) {
				pCVar9 = this._owner;
				if (((pCVar9 == null) ||(pUVar2 = pCVar9.Cache, pUVar2 == null)) ||(pSVar3 = pUVar2.Colliders, pPStack_60 = this, pSVar3 == null)) goto label_0586f2e6;
				auStack_90.GetEnumerator((List<object>)pSVar3);
				pUStack_68 = pUStack_80;
				auStack_78 = (byte[])auStack_90._0_8_;
				uStack_58 = 0;
				while (true) {
					bVar7 = auStack_78.MoveNext();
					pPVar10 = pPStack_60;
					pUVar5 = pUStack_68;
					if (!(bVar7)) break;
					pSVar3 = pPStack_60._colliders;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					auStack_90.GetEnumerator((List<object>)pSVar3);
					pUStack_38 = pUStack_80;
					auStack_48 = (byte[])auStack_90._0_8_;
					auStack_90._0_8_ = null;
					auStack_90._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_48;
					while (true) {
						bVar7 = auStack_48.MoveNext();
						pUVar6 = pUStack_38;
						if (!(bVar7)) break;
						Physics.IgnoreCollision(pUVar5, pUVar6);
					}
					auStack_48.Dispose();
				}
				auStack_78.Dispose() ;
				pCVar9 = pPVar10._owner;
				if (pCVar9 != null) {
					bVar1 = (typeof(Human)._2).typeHierarchyDepth;
					if (((bVar1 <= (pCVar9.klass._2).typeHierarchyDepth) &&((pCVar9.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human))) && (*(int)&(*(ulong)((sbyte)pCVar9 + 0x138)) == 1)) {
						x = *(Object*)&(*(byte)((sbyte)pCVar9 + 0x140));
						bVar7 = (x != null);
						if (bVar7) {
							lVar4 = *(long)&(*(byte)((sbyte)pCVar9 + 0x140));
							if (((lVar4 == 0) || (lVar4 = *(long)(lVar4 + 0x80), lVar4 == 0)) ||(__this_00 = *(List<object>*)(lVar4 + 0x28), __this_00 == null)) goto label_0586f2e6;
							auStack_90.GetEnumerator(__this_00);
							pUStack_68 = pUStack_80;
							auStack_78 = (byte[])auStack_90._0_8_;
							uStack_58 = 0;
							while (true) {
								bVar7 = auStack_78.MoveNext();
								pUVar5 = pUStack_68;
								if (!(bVar7)) break;
								pSVar3 = pPVar10._colliders;
								if (pSVar3 == null) {
									throw new NullReferenceException();
								}
								auStack_90.GetEnumerator((List<object>)pSVar3);
								pUStack_38 = pUStack_80;
								auStack_48 = (byte[])auStack_90._0_8_;
								auStack_90._0_8_ = null;
								auStack_90._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_48;
								while (true) {
									bVar7 = auStack_48.MoveNext();
									pUVar6 = pUStack_38;
									if (!(bVar7)) break;
									Physics.IgnoreCollision(pUVar5, pUVar6);
								}
								auStack_48.Dispose();
								pPVar10 = pPStack_60;
							}
							il2cpp_runtime_helper_02fcf5d0(&uStack_58);
						}
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x576F550", Offset = "0x576E550", VA = "0x576F550")]
	protected static BaseCharacter GetHitCharacter(Collider collider)
	{
		// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile$$GetHitCharacter): 1 lines keep C-only constructs
		byte bVar1;
		Transform pUVar2;
		Human __this;
		Human pCVar3;

		if (collider != null) {
			pUVar2 = collider.transform;
			if (pUVar2 != null) {
				pUVar2 = pUVar2.root;
				if (pUVar2 != null) {
					__this = (Human)pUVar2.GetComponent<BaseCharacter>() ;
					if (__this == null) {
						return null;
					}
					bVar1 = (typeof(Horse)._2).typeHierarchyDepth;
					if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Horse))) {
						return (BaseCharacter)__this;
					}
					pCVar3 = __this.FindSaddledHuman();
					if (pCVar3 != null) {
						__this = pCVar3;
					}
					return (BaseCharacter)__this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x576F610", Offset = "0x576E610", VA = "0x576F610", Slot = "14")]
	protected virtual void SetupSettings(object[] settings)
	{
		// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile$$SetupSettings): clean
		return;
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x576F3E0", Offset = "0x576E3E0", VA = "0x576F3E0")]
	protected void RegisterColliders()
	{
		// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile$$RegisterColliders): 2 lines keep C-only constructs
		int piVar1;
		Component __this_00;
		List<Collider> __this_01;
		Collider[] pUVar2;
		uint uVar4;
		Object[] pSVar5;
		GameObject __this_02;
		uint uVar6;

		pSVar5 = this.GetComponentsInChildren<Collider>() ;
		if (pSVar5 == null) {
	label_0586f541: ;
			throw new NullReferenceException();
		}
		uVar4 = (uint)pSVar5.Length;
		if (0 < (int)uVar4) {
			uVar6 = 0;
			do {
				while(true) {
					if (uVar4 <= uVar6) {
						throw new IndexOutOfRangeException();
					}
					__this_00 = (Component)pSVar5[(int)uVar6];
					if (__this_00 == null) goto label_0586f541;
					__this_02 = __this_00.gameObject;
					if (__this_02 == null) goto label_0586f541;
					__this_02.layer = PhysicsLayer.Projectile;
					__this_01 = this._colliders;
					if (__this_01 == null) goto label_0586f541;
					piVar1 = &__this_01._version;
					*piVar1 = *piVar1 + 1;
					pUVar2 = __this_01._items;
					if (pUVar2 == null) goto label_0586f541;
					uVar4 = __this_01._size;
					if ((uint)pUVar2.Length <= uVar4) break;
					__this_01._size = uVar4 + 1;
					pUVar2[(int)uVar4] = (Collider)__this_00;
					uVar6 = uVar6 + 1;
					uVar4 = (uint)pSVar5.Length;
					if ((int)uVar4 <= (int)uVar6) {
						return;
					}
				}
				__this_01.AddWithResize((object)__this_00);
				uVar6 = uVar6 + 1;
				uVar4 = (uint)pSVar5.Length;
			} while ((int)uVar6 < (int)uVar4);
		}
		return;
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x576F620", Offset = "0x576E620", VA = "0x576F620")]
	public bool IsMine()
	{
		// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile$$IsMine): clean
		PhotonView pPVar1;

		pPVar1 = this.photonView;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		return pPVar1._IsMine_k__BackingField;
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x576F640", Offset = "0x576E640", VA = "0x576F640", Slot = "9")]
	protected override void Update()
	{
		// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile$$Update): clean
		PhotonView pPVar1;
		float fVar2;
		float fVar3;

		this.Update();
		pPVar1 = this._photonView;
		if (pPVar1 == null) {
			throw new NullReferenceException();
		}
		if (pPVar1._IsMine_k__BackingField != false) {
			fVar3 = this._timeLeft;
			fVar2 = Time.deltaTime;
			fVar3 = fVar3 - fVar2;
			this._timeLeft = fVar3;
			if (fVar3 <= 0.0) {
				this.OnExceedLiveTime();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x576F6C0", Offset = "0x576E6C0", VA = "0x576F6C0", Slot = "15")]
	protected virtual void RegisterObjects()
	{
		// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile$$RegisterObjects): clean
		return;
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x576F6D0", Offset = "0x576E6D0", VA = "0x576F6D0", Slot = "16")]
	protected virtual void OnExceedLiveTime()
	{
		// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile$$OnExceedLiveTime): clean
		this.DestroySelf();
		return;
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x576F6F0", Offset = "0x576E6F0", VA = "0x576F6F0", Slot = "17")]
	public virtual void DestroySelf()
	{
		// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile$$DestroySelf): clean
		PhotonView pPVar1;
		Object[] parameters;
		IEnumerator routine;
		float fVar2;

		pPVar1 = this.photonView;
		if (pPVar1 != null) {
			if ((pPVar1._IsMine_k__BackingField == false) || (this.Disabled != false)) {
				return;
			}
			pPVar1 = this.photonView;
			parameters = (Object[])new object[0];
			if (pPVar1 != null) {
				pPVar1.RPC("DisableRPC", 0, parameters);
				fVar2 = this.get_DestroyDelay();
				routine = this.WaitAndFinishDestroyCoroutine(fVar2);
				this.StartCoroutine(routine);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x576F7D0", Offset = "0x576E7D0", VA = "0x576F7D0", Slot = "18")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishDestroyCoroutine_003Ed__23))]
	protected virtual IEnumerator WaitAndFinishDestroyCoroutine(float time)
	{
		// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile$$WaitAndFinishDestroyCoroutine): 1 lines keep C-only constructs
		BaseProjectile.d__23<WaitAndFinishDestroyCoroutine> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(BaseProjectile.d__23<WaitAndFinishDestroyCoroutine>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.time = time;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x576F870", Offset = "0x576E870", VA = "0x576F870", Slot = "19")]
	[PunRPC]
	public virtual void DisableRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile$$DisableRPC): 9 lines keep C-only constructs
		List<GameObject> __this_00;
		List<Collider> __this_01;
		List<ParticleSystem> __this_02;
		Object x;
		ConstantForce __this_03;
		bool bVar1;
		PhotonView pPVar2;
		Rigidbody __this_04;
		byte[] local_90 = new byte[16];
		Collider local_80;
		byte[] local_78 = new byte[8];
		Collider local_68;
		byte[] local_58 = new byte[8];
		GameObject local_48;
		System_Collections_Generic_List_Enumerator_T__o local_38;

		local_58 = (byte[])0x0;
		local_48 = null;
		local_78 = (byte[])0x0;
		local_68 = null;
		local_38._list = null;
		local_38._index = 0;
		local_38._version = 0;
		local_38._current = null;
		if (this.Disabled != false) {
			return;
		}
		pPVar2 = this.photonView;
		if (pPVar2 != null) {
			if (info.Sender != pPVar2._Owner_k__BackingField) {
				return;
			}
			__this_00 = this._hideObjects;
			if (__this_00 != null) {
				local_90.GetEnumerator((List<object>)__this_00);
				local_48 = (GameObject)local_80;
				local_58 = (byte[])local_90._0_8_;
				local_90._0_8_ = null;
				local_90._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_58;
				while (bVar1 = local_58.MoveNext()) {
					if (local_48 == null) {
						throw new NullReferenceException();
					}
					local_48.SetActive(false);
				}
				local_58.Dispose();
				__this_01 = this._colliders;
				if (__this_01 != null) {
					local_90.GetEnumerator((List<object>)__this_01);
					local_68 = local_80;
					local_78 = (byte[])local_90._0_8_;
					local_90._0_8_ = null;
					local_90._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_78;
					while (bVar1 = local_78.MoveNext()) {
						if (local_68 == null) {
							throw new NullReferenceException();
						}
						local_68.enabled = false;
					}
					local_78.Dispose();
					__this_02 = this._fadeTrails;
					if (__this_02 != null) {
						local_38 = __this_02.GetEnumerator();
						local_90._0_8_ = null;
						local_90._8_8_ = &local_38;
						while (bVar1 = local_38.MoveNext()) {
							this.SetDisabledTrailFade((ParticleSystem)local_38._current);
						}
						local_38.Dispose();
						__this_04 = this.GetComponent<Rigidbody>();
						if (__this_04 != null) {
							__this_04.linearVelocity = (Vector3)(Vector3.zeroVector);
							x = (Object)this._force;
							bVar1 = (x != null);
							if (bVar1) {
								__this_03 = this._force;
								if (__this_03 == null) goto label_0586fc30;
								__this_03.force = (Vector3)(Vector3.zeroVector);
							}
							this.Disabled = true;
							return;
						}
					}
				}
			}
		}
	label_0586fc30: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x576FD40", Offset = "0x576ED40", VA = "0x576FD40")]
	protected void SetDisabledTrailFade(ParticleSystem particleSystem)
	{
		// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile$$SetDisabledTrailFade): clean
		uint length;
		ParticleSystem.Particle[] particles;
		ParticleSystem.Particle __this_00;
		ulong uVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;

		if (particleSystem == null) {
	label_0586fe97: ;
			throw new NullReferenceException();
		}
		length = particleSystem.particleCount;
		fVar2 = particleSystem.startLifetime;
		fVar3 = this.get_TrailFadeMultiplier();
		particles = (ParticleSystem.Particle[])new ParticleSystem.Particle[length];
		particleSystem.GetParticles(particles);
		if (0 < (int)length) {
			if (particles == null) goto label_0586fe97;
			__this_00 = particles.m_Items;
			uVar1 = 0;
			do {
				if ((uint)particles.Length <= uVar1) {
	label_0586fe92: ;
					throw new IndexOutOfRangeException();
				}
				fVar4 = __this_00.remainingLifetime;
				fVar5 = this.get_TrailFadeMultiplier();
				__this_00.remainingLifetime = fVar5 * fVar4;
				if ((uint)particles.Length <= uVar1) goto label_0586fe92;
				__this_00.startLifetime = fVar2 * fVar3;
				uVar1 = uVar1 + 1;
				__this_00 = __this_00 + 1;
			} while (length != uVar1);
		}
		particleSystem.SetParticles(particles, length);
		return;
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x576FEA0", Offset = "0x576EEA0", VA = "0x576FEA0")]
	public BaseProjectile()
	{
		// Lifted from source/cpp/Projectiles/BaseProjectile.c (Projectiles.BaseProjectile$$.ctor): clean
		List<GameObject> __this_00;
		List<Collider> __this_01;
		List<ParticleSystem> __this_02;

		__this_00 = new List<GameObject>();
		this._hideObjects = __this_00;
		__this_01 = new List<Collider>();
		this._colliders = __this_01;
		__this_02 = new List<ParticleSystem>();
		this._fadeTrails = __this_02;
		base();
		return;
	}
}
