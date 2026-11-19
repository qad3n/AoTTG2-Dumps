// ==================== AoTTG2 cross-reference ====================
// Type: UI.SnapshotHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SnapshotHandler.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/SnapshotHandler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Cameras;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000735")]
internal class SnapshotHandler : MonoBehaviour
{
	[Token(Token = "0x2000736")]
	[CompilerGenerated]
	private sealed class _003CTakeSnapshotCoroutine_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400243B")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400243C")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400243D")]
		[FieldOffset(Offset = "0x20")]
		public SnapshotHandler _003C_003E4__this;

		[Token(Token = "0x400243E")]
		[FieldOffset(Offset = "0x28")]
		public Vector3 position;

		[Token(Token = "0x400243F")]
		[FieldOffset(Offset = "0x34")]
		public int damage;

		[Token(Token = "0x4002440")]
		[FieldOffset(Offset = "0x38")]
		private Texture2D _003Csnapshot_003E5__2;

		[Token(Token = "0x17000C06")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60045EA")]
			[Address(RVA = "0x5B63500", Offset = "0x5B62500", VA = "0x5B63500", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/SnapshotHandler.c (UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000C07")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60045EC")]
			[Address(RVA = "0x5B63550", Offset = "0x5B62550", VA = "0x5B63550", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/SnapshotHandler.c (UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60045E7")]
		[Address(RVA = "0x5B62B90", Offset = "0x5B61B90", VA = "0x5B62B90")]
		[DebuggerHidden]
		public _003CTakeSnapshotCoroutine_003Ed__4(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/SnapshotHandler.c (UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60045E8")]
		[Address(RVA = "0x5B63150", Offset = "0x5B62150", VA = "0x5B63150", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/SnapshotHandler.c (UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60045E9")]
		[Address(RVA = "0x5B63160", Offset = "0x5B62160", VA = "0x5B63160", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/SnapshotHandler.c (UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$MoveNext): 1 lines keep C-only constructs
			byte bVar1;
			int damage;
			SnapshotHandler __this_00;
			BaseCamera pCVar2;
			GeneralSettings pSVar3;
			BoolSetting pSVar4;
			InGameMenu __this_01;
			GameObject pUVar5;
			Texture2D pUVar6;
			object pIVar7;
			WaitForSeconds pUVar8;
			bool bVar9;

			switch(this.__1__state) {
			case 0:
				this.__1__state = -1;
				pIVar7 = new WaitForEndOfFrame();
				this.__2__current = pIVar7;
				this.__1__state = 1;
				break;
			case 1:
				__this_00 = this.__4__this;
				this.__1__state = -1;
				if (((__this_00 != null) &&(pCVar2 = __this_00.SnapshotCamera, pCVar2 != null)) &&(pUVar5 = pCVar2.gameObject, pUVar5 != null)) {
					pUVar5.SetActive(true);
					__this_00.SetSnapshotPosition((Vector3)this.position);
					pUVar6 = __this_00.RTImage();
					this._snapshot_5__2 = pUVar6;
					pCVar2 = __this_00.SnapshotCamera;
					if ((pCVar2 != null) &&(pUVar5 = pCVar2.gameObject, pUVar5 != null)) {
						pUVar5.SetActive(false);
						pIVar7 = new WaitForEndOfFrame();
						this.__2__current = pIVar7;
						this.__1__state = 2;
						return true;
					}
				}
				goto label_05c634e9;
			case 2:
				this.__1__state = -1;
				pIVar7 = new WaitForEndOfFrame();
				this.__2__current = pIVar7;
				this.__1__state = 3;
				break;
			case 3:
				this.__1__state = -1;
				pUVar6 = this._snapshot_5__2;
				if (pUVar6 != null) {
					pUVar6.Apply();
					pSVar3 = SettingsManager.GeneralSettings;
					if ((pSVar3 != null) &&(pSVar4 = pSVar3.SnapshotsShowInGame, pSVar4 != null)) {
						if (pSVar4._value != false) {
							__this_01 = (InGameMenu)UIManager.CurrentMenu;
							if (__this_01 == null) goto label_05c634e9;
							bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
							if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu)) ) {
								throw new InvalidCastException();
							}
							__this_01.ShowSnapshot(this._snapshot_5__2);
						}
						pUVar8 = new WaitForSeconds(0.5);
						this.__2__current = (object)pUVar8;
						this.__1__state = 4;
						return true;
					}
				}
		label_05c634e9: ;
				throw new NullReferenceException();
			case 4:
				this.__1__state = -1;
				pUVar6 = this._snapshot_5__2;
				damage = this.damage;
				SnapshotManager.AddSnapshot(pUVar6, damage);
				pUVar8 = new WaitForSeconds(2.0);
				this.__2__current = (object)pUVar8;
				this.__1__state = 5;
				break;
			case 5:
				this.__1__state = -1;
				pUVar6 = this._snapshot_5__2;
				Object.Destroy((Object)pUVar6);
				break;
			default: ;
			}
			return bVar9;
		}

		[Token(Token = "0x60045EB")]
		[Address(RVA = "0x5B63510", Offset = "0x5B62510", VA = "0x5B63510", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/SnapshotHandler.c (UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_SnapshotHandler_TakeSnapshotCoroutine_d__4_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4002439")]
	[FieldOffset(Offset = "0x20")]
	public BaseCamera SnapshotCamera;

	[Token(Token = "0x400243A")]
	[FieldOffset(Offset = "0x28")]
	public InGameCamera InGameCamera;

	[Token(Token = "0x60045E1")]
	[Address(RVA = "0x5B628C0", Offset = "0x5B618C0", VA = "0x5B628C0")]
	public void Awake()
	{
		// Lifted from source/cpp/UI/SnapshotHandler.c (UI.SnapshotHandler$$Awake): clean
		String path;
		GameObject pUVar1;
		BaseCamera pCVar2;
		InGameCamera pCVar3;

		path = ResourcePaths.UI;
		pUVar1 = ResourceManager.InstantiateAsset<GameObject>(path, "Prefabs/Snapshot/SnapshotCamera", false, false);
		if (pUVar1 != null) {
			pCVar2 = pUVar1.AddComponent<BaseCamera>();
			this.SnapshotCamera = pCVar2;
			pCVar3 = this.GetComponent<InGameCamera>();
			this.InGameCamera = pCVar3;
			pCVar2 = this.SnapshotCamera;
			if (pCVar2 != null) {
				pUVar1 = pCVar2.gameObject;
				if (pUVar1 != null) {
					pUVar1.SetActive(false);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045E2")]
	[Address(RVA = "0x5B62A00", Offset = "0x5B61A00", VA = "0x5B62A00")]
	public void TakeSnapshot(Vector3 position, int damage)
	{
		// Lifted from source/cpp/UI/SnapshotHandler.c (UI.SnapshotHandler$$TakeSnapshot): 1 lines keep C-only constructs
		GeneralSettings pSVar1;
		IntSetting pSVar2;
		SnapshotHandler.d__4<TakeSnapshotCoroutine> __this_00;

		pSVar1 = SettingsManager.GeneralSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.SnapshotsMinimumDamage, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		if (damage < pSVar2._value) {
			return;
		}
		__this_00 = il2cpp_codegen_object_new(typeof(SnapshotHandler.d__4<TakeSnapshotCoroutine>)) ;
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.position.x = position.x;
		__this_00.position.y = position.y;
		__this_00.position.z = position.z;
		__this_00.damage = damage;
		this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x60045E3")]
	[Address(RVA = "0x5B62B00", Offset = "0x5B61B00", VA = "0x5B62B00")]
	[IteratorStateMachine(typeof(_003CTakeSnapshotCoroutine_003Ed__4))]
	private IEnumerator TakeSnapshotCoroutine(Vector3 position, int damage)
	{
		// Lifted from source/cpp/UI/SnapshotHandler.c (UI.SnapshotHandler$$TakeSnapshotCoroutine): 1 lines keep C-only constructs
		SnapshotHandler.d__4<TakeSnapshotCoroutine> __this_00;

		__this_00 = il2cpp_codegen_object_new(typeof(SnapshotHandler.d__4<TakeSnapshotCoroutine>)) ;
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.position.x = position.x;
		__this_00.position.y = position.y;
		__this_00.position.z = position.z;
		__this_00.damage = damage;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60045E4")]
	[Address(RVA = "0x5B62BB0", Offset = "0x5B61BB0", VA = "0x5B62BB0")]
	private void SetSnapshotPosition(Vector3 position)
	{
		// Lifted from source/cpp/UI/SnapshotHandler.c (UI.SnapshotHandler$$SetSnapshotPosition): 30 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		BaseCamera pCVar4;
		BaseComponentCache pUVar5;
		InGameCamera pCVar6;
		Camera __this_00;
		Transform __this_01;
		Skybox __this_02;
		Skybox __this_03;
		Transform __this_04;
		UnityEngine_Vector3_StaticFields pUVar7;
		Material value;
		float fVar8;
		uint uVar9;
		uint extraout_XMM0_Db;
		uint in_XMM0_Dc;
		float extraout_XMM0_Dc;
		uint in_XMM0_Dd;
		float extraout_XMM0_Dd;
		float fVar10;
		float fVar11;
		byte[] auVar12 = new byte[16];
		Vector3 UVar13;
		Vector3 worldPosition;
		byte[] local_40 = new byte[12];
		float fStack_34;
		float fStack_30;
		float fStack_2c;
		byte[] local_28 = new byte[8];
		float fStack_20;
		float fStack_1c;

		worldPosition.z = position.z;
		fStack_20 = (float)in_XMM0_Dc;
		local_28 = position._0_8_;
		fStack_1c = (float)in_XMM0_Dd;
		pCVar4 = this.SnapshotCamera;
		if ((((pCVar4 == null) ||(pUVar5 = pCVar4.Cache, pUVar5 == null)) ||(pCVar6 = this.InGameCamera, pCVar6 == null)) ||(__this_00 = pCVar6.Camera, __this_00 == null)) goto label_05c62e37;
		__this_01 = pUVar5.Transform;
		__this_04 = __this_00.transform;
		if (__this_04 == null) goto label_05c62e37;
		UVar13 = __this_04.position;
		local_40._8_4_ = UVar13.x;
		fStack_34 = UVar13.y;
		fStack_30 = extraout_XMM0_Dc;
		fStack_2c = extraout_XMM0_Dd;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
		}
		local_40._8_4_ = (float)local_40._8_4_ - (float)local_28._0_4_;
		fStack_34 = fStack_34 - (float)local_28._4_4_;
		fVar10 = UVar13.z - worldPosition.z;
		fStack_30 = fStack_30 - fStack_20;
		fStack_2c = fStack_2c - fStack_1c;
		fVar11 = (float)local_40._8_4_;
		fVar8 = fStack_34;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			fVar11 = (float)local_40._8_4_;
			fVar8 = fStack_34;
		}
		fVar11 = fVar10 * fVar10 + fVar8 * fVar8 + fVar11 * fVar11;
		if (fVar11 < 0.0) {
			fVar8 = sqrtf(fVar11);
		}
		else {
			fVar8 = SQRT(fVar11);
		}
		local_40._0_4_ = 0.0;
		local_40._4_4_ = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		uVar9 = 0;
		if (fVar11 < 0.0) {
			fVar11 = sqrtf(fVar11);
			uVar9 = extraout_XMM0_Db;
			if (fVar11 <= 1e-05) goto label_05c62d34;
	label_05c62d60: ;
			fVar10 = fVar10 / fVar11;
			auVar12._4_4_ = fVar11;
			auVar12._0_4_ = fVar11;
			auVar12._8_4_ = uVar9;
			auVar12._12_4_ = uVar9;
			auVar12 = divps(stack0xffffffffffffffc8, auVar12);
			local_40._0_4_ = auVar12._0_4_;
			local_40._4_4_ = auVar12._4_4_;
			pUVar7 = (UnityEngine_Vector3_StaticFields)local_40;
		}
		else {
			fVar11 = SQRT(fVar11);
			if (1e-05 < fVar11) goto label_05c62d60;
	label_05c62d34: ;
			pUVar7 = typeof(Vector3).static_fields;
			fVar10 = (pUVar7.zeroVector).z;
		}
		if (__this_01 != null) {
			fVar11 = 20.0;
			if (20.0 <= fVar8) {
				fVar11 = fVar8;
			}
			uVar1 = (pUVar7.zeroVector).x;
			uVar2 = (pUVar7.zeroVector).y;
			UVar13.z = fVar10 * fVar11 + worldPosition.z;
			UVar13.x = fVar11 * (float)uVar1 + (float)local_28._0_4_;
			UVar13.y = fVar11 * (float)uVar2 + (float)local_28._4_4_;
			__this_01.position = UVar13;
			worldPosition.x = (float)local_28._0_4_;
			worldPosition.y = (float)local_28._4_4_;
			__this_01.LookAt(worldPosition);
			pCVar4 = this.SnapshotCamera;
			if (((pCVar4 != null) &&(pCVar6 = this.InGameCamera, pCVar6 != null)) &&(__this_02 = pCVar6.Skybox, __this_02 != null)) {
				__this_03 = pCVar4.Skybox;
				value = __this_02.material;
				if (__this_03 != null) {
					__this_03.material = value;
					return;
				}
			}
		}
	label_05c62e37: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045E5")]
	[Address(RVA = "0x5B62E40", Offset = "0x5B61E40", VA = "0x5B62E40")]
	private Texture2D RTImage()
	{
		// Lifted from source/cpp/UI/SnapshotHandler.c (UI.SnapshotHandler$$RTImage): clean
		BaseCamera pCVar1;
		Camera __this_00;
		int iVar2;
		int iVar3;
		int iVar4;
		int iVar5;
		RenderTexture value;
		RenderTexture pUVar6;
		Texture2D __this_01;
		int iVar7;
		Color color;
		Rect source;

		pCVar1 = this.SnapshotCamera;
		if (pCVar1 != null) {
			__this_00 = pCVar1.Camera;
			value = RenderTexture.active;
			if (__this_00 != null) {
				pUVar6 = __this_00.targetTexture;
				RenderTexture.active = pUVar6;
				__this_00.Render();
				pUVar6 = __this_00.targetTexture;
				if (pUVar6 != null) {
					iVar2 = pUVar6.get_width();
					pUVar6 = __this_00.targetTexture;
					if (pUVar6 != null) {
						iVar3 = pUVar6.get_height();
						__this_01 = new Texture2D(iVar2, iVar3, 3, false);
						pUVar6 = __this_00.targetTexture;
						if (pUVar6 != null) {
							iVar2 = pUVar6.get_width();
							pUVar6 = __this_00.targetTexture;
							if (pUVar6 != null) {
								iVar3 = pUVar6.get_width();
								if (__this_01 == null) {
									throw new NullReferenceException();
								}
								color.b = 1.0;
								color.a = 1.0;
								color.r = 1.0;
								color.g = 1.0;
								__this_01.SetPixel(0, 0, color);
								pUVar6 = __this_00.targetTexture;
								if (pUVar6 == null) {
									throw new NullReferenceException();
								}
								iVar4 = pUVar6.get_width();
								pUVar6 = __this_00.targetTexture;
								if (pUVar6 == null) {
									throw new NullReferenceException();
								}
								iVar5 = pUVar6.get_height();
								iVar7 = (int)((float)iVar2 * 0.04);
								source.m_XMin = (float)iVar7;
								source.m_Width = (float)(iVar4 - iVar7);
								source.m_Height = (float)(iVar5 - iVar7);
								source.m_YMin = source.m_XMin;
								__this_01.ReadPixels(source, (int)((float)iVar3 * 0.02), (int)((float)iVar3 * 0.02));
								RenderTexture.active = value;
								return __this_01;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60045E6")]
	[Address(RVA = "0x5B63140", Offset = "0x5B62140", VA = "0x5B63140")]
	public SnapshotHandler()
	{
		// Lifted from source/cpp/UI/SnapshotHandler.c (UI.SnapshotHandler$$.ctor): clean
		base();
		return;
	}
}
