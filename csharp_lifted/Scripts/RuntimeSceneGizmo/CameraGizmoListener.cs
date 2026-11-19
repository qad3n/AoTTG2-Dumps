// ==================== AoTTG2 cross-reference ====================
// Type: RuntimeSceneGizmo.CameraGizmoListener
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/CameraGizmoListener.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace RuntimeSceneGizmo;

[Token(Token = "0x2000057")]
public class CameraGizmoListener : MonoBehaviour
{
	[Token(Token = "0x2000058")]
	[CompilerGenerated]
	private sealed class _003CSetCameraRotation_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001D8")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001D9")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40001DA")]
		[FieldOffset(Offset = "0x20")]
		public CameraGizmoListener _003C_003E4__this;

		[Token(Token = "0x40001DB")]
		[FieldOffset(Offset = "0x28")]
		public Vector3 targetForward;

		[Token(Token = "0x40001DC")]
		[FieldOffset(Offset = "0x34")]
		private Quaternion _003CinitialRotation_003E5__2;

		[Token(Token = "0x40001DD")]
		[FieldOffset(Offset = "0x44")]
		private Quaternion _003CtargetRotation_003E5__3;

		[Token(Token = "0x40001DE")]
		[FieldOffset(Offset = "0x54")]
		private float _003Ct_003E5__4;

		[Token(Token = "0x17000077")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60002E2")]
			[Address(RVA = "0x576B8B0", Offset = "0x576A8B0", VA = "0x576B8B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000078")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002E4")]
			[Address(RVA = "0x576B900", Offset = "0x576A900", VA = "0x576B900", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60002DF")]
		[Address(RVA = "0x576B5C0", Offset = "0x576A5C0", VA = "0x576B5C0")]
		[DebuggerHidden]
		public _003CSetCameraRotation_003Ed__12(int _003C_003E1__state)
		{
			// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x576B600", Offset = "0x576A600", VA = "0x576B600", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x576B610", Offset = "0x576A610", VA = "0x576B610", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$MoveNext): 2 lines keep C-only constructs
			float fVar1;
			int iVar2;
			CameraGizmoListener pRVar3;
			Transform pUVar4;
			uint uVar6;
			float fVar7;
			float fVar8;
			float fVar9;
			Quaternion UVar10;
			Quaternion value;
			Vector3 UVar11;
			Quaternion UStack_38;
			Quaternion UStack_28;
			float fStack_14;

			iVar2 = this.__1__state;
			pRVar3 = this.__4__this;
			if (iVar2 == 1) {
				this.__1__state = -1;
				fStack_14 = this._t_5__4;
				fVar8 = Time.unscaledDeltaTime;
				if (pRVar3 == null) goto label_0586b8a2;
				fVar8 = fStack_14 + fVar8 * pRVar3.cameraAdjustmentSpeed;
				this._t_5__4 = fVar8;
				if (1.0 <= fVar8) {
					pUVar4 = pRVar3.mainCamParent;
					if (pUVar4 != null) {
						pUVar4.localRotation = (Quaternion)this._targetRotation_5__3;
						pRVar3.cameraRotateCoroutine = null;
						return false;
					}
					goto label_0586b8a2;
				}
			}
			else {
				if (iVar2 != 0) {
					return false;
				}
				this.__1__state = -1;
				if ((pRVar3 == null) ||(pUVar4 = pRVar3.mainCamParent, pUVar4 == null)) goto label_0586b8a2;
				UVar10 = (Quaternion)pUVar4.localRotation ;
				this._initialRotation_5__2 = UVar10;
				if (0.99 <= ABS(this.targetForward.y)) {
					pUVar4 = pRVar3.mainCamParent;
					if (pUVar4 == null) goto label_0586b8a2;
					UVar11 = pUVar4.forward;
					fVar7 = UVar11.z;
					fVar8 = UVar11.x;
					if ((((fVar8 != 0.0) || (NAN(fVar8))) || (fVar7 != 0.0)) || (NAN(fVar7))) {
						if (ABS(fVar8) <= ABS(fVar7)) {
							fVar7 = *(float)(&g_data_0100ad30 + (ulong)(0.0 <= fVar7) * 4);
							fVar8 = 0.0;
							fVar9 = 0.0;
						}
						else {
							fVar7 = 0.0;
							fVar8 = *(float)(&g_data_0100ad30 + (ulong)(0.0 <= fVar8) * 4);
							fVar9 = 0.0;
						}
					}
					else {
						fVar9 = 1.0;
					}
					fVar1 = this.targetForward.y;
					if (0.0 < fVar1) {
						fVar8 = -fVar8;
						fVar9 = -fVar9;
					}
					uVar6 = -(uint)(0.0 < fVar1);
					UStack_28.x = this.targetForward.x;
					UStack_28.y = this.targetForward.y;
					UStack_28.z = this.targetForward.z;
					UStack_38.y = fVar9;
					UStack_38.x = fVar8;
					UStack_38.z = (float)(~uVar6 & (uint)fVar7 | (uint)-fVar7 & uVar6);
				}
				else {
					UStack_28.x = this.targetForward.x;
					UStack_28.y = this.targetForward.y;
					UStack_28.z = this.targetForward.z;
					UStack_38.x = (Vector3.upVector).x;
					UStack_38.y = (Vector3.upVector).y;
					UStack_38.z = (Vector3.upVector).z;
				}
				UVar10 = (Quaternion)Quaternion.Internal_LookRotation(ref UStack_28, ref UStack_38);
				this._targetRotation_5__3 = UVar10;
				this._t_5__4 = 0.0;
				fVar8 = 0.0;
			}
			pUVar4 = pRVar3.mainCamParent;
			UStack_28.x = this._initialRotation_5__2.x;
			UStack_28.y = this._initialRotation_5__2.y;
			UStack_28.z = this._initialRotation_5__2.z;
			UStack_28.w = this._initialRotation_5__2.w;
			UStack_38.x = this._targetRotation_5__3.x;
			UStack_38.y = this._targetRotation_5__3.y;
			UStack_38.z = this._targetRotation_5__3.z;
			UStack_38.w = this._targetRotation_5__3.w;
			value = Quaternion.Internal_LerpUnclamped(ref UStack_28, ref UStack_38, fVar8);
			if (pUVar4 != null) {
				pUVar4.localRotation = value;
				this.__2__current = null;
				this.__1__state = 1;
				return true;
			}
		label_0586b8a2: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x576B8C0", Offset = "0x576A8C0", VA = "0x576B8C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_RuntimeSceneGizmo_CameraGizmoListener_SetCameraRotation_d__12_System_Collections_IEnumerator_Res);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000059")]
	[CompilerGenerated]
	private sealed class _003CSwitchProjection_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001DF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001E0")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40001E1")]
		[FieldOffset(Offset = "0x20")]
		public CameraGizmoListener _003C_003E4__this;

		[Token(Token = "0x40001E2")]
		[FieldOffset(Offset = "0x28")]
		private bool _003CisOrthographic_003E5__2;

		[Token(Token = "0x40001E3")]
		[FieldOffset(Offset = "0x2C")]
		private Matrix4x4 _003Cdest_003E5__3;

		[Token(Token = "0x40001E4")]
		[FieldOffset(Offset = "0x6C")]
		private Matrix4x4 _003Csrc_003E5__4;

		[Token(Token = "0x40001E5")]
		[FieldOffset(Offset = "0xAC")]
		private float _003Ct_003E5__5;

		[Token(Token = "0x17000079")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60002E8")]
			[Address(RVA = "0x576C180", Offset = "0x576B180", VA = "0x576C180", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700007A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002EA")]
			[Address(RVA = "0x576C1D0", Offset = "0x576B1D0", VA = "0x576C1D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60002E5")]
		[Address(RVA = "0x576B5A0", Offset = "0x576A5A0", VA = "0x576B5A0")]
		[DebuggerHidden]
		public _003CSwitchProjection_003Ed__11(int _003C_003E1__state)
		{
			// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60002E6")]
		[Address(RVA = "0x576B910", Offset = "0x576A910", VA = "0x576B910", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x576B920", Offset = "0x576A920", VA = "0x576B920", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$MoveNext): 71 lines keep C-only constructs
			CameraGizmoListener pRVar1;
			Camera pUVar2;
			Matrix4x4 value;
			bool bVar3;
			Il2CppClass klass;
			IndexOutOfRangeException __this_00;
			String message;
			MethodInfo lastManagedFrame;
			Matrix4x4 pUVar4;
			Matrix4x4 pUVar5;
			CustomLogicMathBuiltin __this_01;
			int iVar6;
			float pfVar7;
			float fVar8;
			float fVar9;
			float fVar10;
			uint extraout_XMM0_Db;
			float fStack_1b0;
			float fStack_1ac;
			float fStack_1a8;
			float fStack_1a4;
			float fStack_1a0;
			float fStack_19c;
			float fStack_198;
			float fStack_194;
			float fStack_190;
			float fStack_18c;
			float fStack_188;
			float fStack_184;
			float fStack_180;
			float fStack_17c;
			ulong uStack_178;
			float fStack_15c;
			byte[] auStack_118 = new byte[16];
			CustomLogicMathBuiltin CStack_108;
			float fStack_e8;
			float fStack_e4;
			float fStack_e0;
			float fStack_dc;
			CameraGizmoListener pRStack_d8;
			float pfStack_c8;
			float pfStack_c0;
			float pfStack_b8;
			float pfStack_b0;
			float pfStack_a8;
			float pfStack_a0;
			float pfStack_98;
			float pfStack_90;
			float pfStack_88;
			float pfStack_80;
			float pfStack_78;
			float pfStack_70;
			float pfStack_68;
			float pfStack_60;
			float pfStack_58;
			float pfStack_50;
			float pfStack_48;
			float pfStack_40;
			float pfStack_38;

			iVar6 = this.__1__state;
			pRVar1 = this.__4__this;
			if (iVar6 == 1) {
				this.__1__state = -1;
				uStack_178 = (Matrix4x4)CONCAT44(uStack_178._4_4_, this._t_5__5);
				__this_01 = null;
				fVar8 = Time.unscaledDeltaTime;
				if (pRVar1 != null) {
					fVar8 = (float)uStack_178 + fVar8 * pRVar1.projectionTransitionSpeed;
					this._t_5__5 = fVar8;
					if (fVar8 < 1.0) goto label_0586bbe7;
					pUVar2 = pRVar1.mainCamera;
					if (pUVar2 != null) {
						pUVar2.orthographic = this._isOrthographic_5__2 == false;
						pUVar2 = pRVar1.mainCamera;
						if (pUVar2 != null) {
							pUVar2.ResetProjectionMatrix();
							pRVar1.projectionChangeCoroutine = null;
							return false;
						}
					}
				}
			}
			else {
				if (iVar6 != 0) {
					return false;
				}
				this.__1__state = -1;
				if ((pRVar1 != null) &&(pUVar2 = pRVar1.mainCamera, pUVar2 != null)) {
					bVar3 = pUVar2.orthographic;
					this._isOrthographic_5__2 = bVar3;
					pUVar2 = pRVar1.mainCamera;
					if (pUVar2 != null) {
						auStack_118.get_projectionMatrix(pUVar2);
						this._src_5__4.m03 = fStack_e8;
						this._src_5__4.m13 = fStack_e4;
						this._src_5__4.m23 = fStack_e0;
						this._src_5__4.m33 = fStack_dc;
						*(ulong)&this._src_5__4.m02 = CStack_108._16_8_;
						*(ulong)&this._src_5__4.m22 = CStack_108._24_8_;
						*(ulong)&this._src_5__4.m01 = CStack_108._0_8_;
						*(Dictionary<string, object>*)&this._src_5__4.m21 = CStack_108.Variables;
						this._src_5__4.m00 = (float)auStack_118._0_4_;
						this._src_5__4.m10 = (float)auStack_118._4_4_;
						this._src_5__4.m20 = (float)auStack_118._8_4_;
						this._src_5__4.m30 = (float)auStack_118._12_4_;
						pUVar2 = pRVar1.mainCamera;
						if (this._isOrthographic_5__2 == false) {
							if (pUVar2 == null) goto label_0586c17a;
							fVar8 = pUVar2.orthographicSize;
							uStack_178 = (Matrix4x4)CONCAT44(extraout_XMM0_Db, fVar8);
							pUVar2 = pRVar1.mainCamera;
							if (pUVar2 == null) goto label_0586c17a;
							fVar8 = pUVar2.aspect;
							pUVar2 = pRVar1.mainCamera;
							if (pUVar2 == null) goto label_0586c17a;
							fVar9 = pUVar2.nearClipPlane;
							pUVar2 = pRVar1.mainCamera;
							if (pUVar2 == null) goto label_0586c17a;
							fVar10 = pUVar2.farClipPlane;
							__this_01 = (CustomLogicMathBuiltin)auStack_118;
							method = null;
							Matrix4x4.Ortho((Matrix4x4)__this_01, -(float)uStack_178 * fVar8, (float)uStack_178 * fVar8, -(float)uStack_178, (float)uStack_178, fVar9, fVar10);
						}
						else {
							if (pUVar2 == null) goto label_0586c17a;
							fVar8 = pUVar2.fieldOfView;
							uStack_178 = (Matrix4x4)CONCAT44(uStack_178._4_4_, fVar8);
							pUVar2 = pRVar1.mainCamera;
							if (pUVar2 == null) goto label_0586c17a;
							fVar8 = pUVar2.aspect;
							pUVar2 = pRVar1.mainCamera;
							if (pUVar2 == null) goto label_0586c17a;
							fVar9 = pUVar2.nearClipPlane;
							pUVar2 = pRVar1.mainCamera;
							if (pUVar2 == null) goto label_0586c17a;
							fVar10 = pUVar2.farClipPlane;
							__this_01 = (CustomLogicMathBuiltin)auStack_118;
							method = null;
							Matrix4x4.Perspective((Matrix4x4)__this_01, (float)uStack_178, fVar8, fVar9, fVar10);
						}
						this._dest_5__3.m03 = fStack_e8;
						this._dest_5__3.m13 = fStack_e4;
						this._dest_5__3.m23 = fStack_e0;
						this._dest_5__3.m33 = fStack_dc;
						*(ulong)&this._dest_5__3.m02 = CStack_108._16_8_;
						*(ulong)&this._dest_5__3.m22 = CStack_108._24_8_;
						*(ulong)&this._dest_5__3.m01 = CStack_108._0_8_;
						*(Dictionary<string, object>*)&this._dest_5__3.m21 = CStack_108.Variables;
						this._dest_5__3.m00 = (float)auStack_118._0_4_;
						this._dest_5__3.m10 = (float)auStack_118._4_4_;
						this._dest_5__3.m20 = (float)auStack_118._8_4_;
						this._dest_5__3.m30 = (float)auStack_118._12_4_;
						this._t_5__5 = 0.0;
						fVar8 = 0.0;
		label_0586bbe7: ;
						pRStack_d8 = pRVar1;
						if (this._isOrthographic_5__2 == false) {
							fVar8 = powf(__this_01, fVar8, 0.2, method);
						}
						else {
							fVar8 = fVar8 * fVar8;
						}
						auStack_118._0_4_ = 0.0;
						fStack_17c = 0.0;
						fStack_180 = 0.0;
						fStack_184 = 0.0;
						fStack_188 = 0.0;
						fStack_18c = 0.0;
						fStack_190 = 0.0;
						fStack_194 = 0.0;
						fStack_198 = 0.0;
						fStack_19c = 0.0;
						fStack_1a0 = 0.0;
						fStack_1a4 = 0.0;
						fStack_1a8 = 0.0;
						fStack_1ac = 0.0;
						fStack_1b0 = 0.0;
						uStack_178 = (Matrix4x4)&this._src_5__4.m23;
						pfStack_38 = &this._dest_5__3.m13;
						pfStack_40 = &this._src_5__4.m03;
						pfStack_48 = &this._dest_5__3.m03;
						pfStack_50 = &this._src_5__4.m32;
						pfStack_58 = &this._dest_5__3.m32;
						pfStack_60 = &this._src_5__4.m22;
						pfStack_68 = &this._dest_5__3.m22;
						pfStack_70 = &this._src_5__4.m12;
						pfStack_78 = &this._dest_5__3.m12;
						pfStack_80 = &this._src_5__4.m02;
						pfStack_88 = &this._dest_5__3.m02;
						pfStack_90 = &this._src_5__4.m31;
						pfStack_98 = &this._dest_5__3.m31;
						pfStack_a0 = &this._src_5__4.m21;
						pfStack_a8 = &this._dest_5__3.m21;
						pfStack_b0 = &this._src_5__4.m11;
						pfStack_b8 = &this._dest_5__3.m11;
						pfStack_c0 = &this._src_5__4.m01;
						pfStack_c8 = &this._dest_5__3.m01;
						iVar6 = 0;
						do {
							pUVar4 = &this._src_5__4;
							pUVar5 = &this._dest_5__3;
							pfVar7 = (float)auStack_118;
							switch(iVar6) {
							case 0:
								break;
							case 1:
								pfVar7 = &fStack_17c;
								pUVar4 = (Matrix4x4)&this._src_5__4.m10;
								pUVar5 = (Matrix4x4)&this._dest_5__3.m10;
								break;
							case 2:
								pfVar7 = &fStack_180;
								pUVar4 = (Matrix4x4)&this._src_5__4.m20;
								pUVar5 = (Matrix4x4)&this._dest_5__3.m20;
								break;
							case 3:
								pfVar7 = &fStack_184;
								pUVar4 = (Matrix4x4)&this._src_5__4.m30;
								pUVar5 = (Matrix4x4)&this._dest_5__3.m30;
								break;
							case 4:
								pfVar7 = &fStack_188;
								pUVar4 = (Matrix4x4)pfStack_c0;
								pUVar5 = (Matrix4x4)pfStack_c8;
								break;
							case 5:
								pfVar7 = &fStack_18c;
								pUVar4 = (Matrix4x4)pfStack_b0;
								pUVar5 = (Matrix4x4)pfStack_b8;
								break;
							case 6:
								pfVar7 = &fStack_190;
								pUVar4 = (Matrix4x4)pfStack_a0;
								pUVar5 = (Matrix4x4)pfStack_a8;
								break;
							case 7:
								pfVar7 = &fStack_194;
								pUVar4 = (Matrix4x4)pfStack_90;
								pUVar5 = (Matrix4x4)pfStack_98;
								break;
							case 8:
								pfVar7 = &fStack_198;
								pUVar4 = (Matrix4x4)pfStack_80;
								pUVar5 = (Matrix4x4)pfStack_88;
								break;
							case 9:
								pfVar7 = &fStack_19c;
								pUVar4 = (Matrix4x4)pfStack_70;
								pUVar5 = (Matrix4x4)pfStack_78;
								break;
							case 10:
								pfVar7 = &fStack_1a0;
								pUVar4 = (Matrix4x4)pfStack_60;
								pUVar5 = (Matrix4x4)pfStack_68;
								break;
							case 0xb:
								pfVar7 = &fStack_1a4;
								pUVar4 = (Matrix4x4)pfStack_50;
								pUVar5 = (Matrix4x4)pfStack_58;
								break;
							case 0xc:
								pfVar7 = &fStack_1a8;
								pUVar4 = (Matrix4x4)pfStack_40;
								pUVar5 = (Matrix4x4)pfStack_48;
								break;
							case 0xd:
								pfVar7 = &fStack_1ac;
								pUVar4 = (Matrix4x4)&this._src_5__4.m13;
								pUVar5 = (Matrix4x4)pfStack_38;
								break;
							case 0xe:
								pfVar7 = &fStack_1b0;
								pUVar4 = uStack_178;
								pUVar5 = (Matrix4x4)&this._dest_5__3.m23;
								break;
							case 0xf:
								goto switchD_0586be39_caseD_f;
							default: ;
								klass = il2cpp_codegen_get_runtime_metadata(&typeof(IndexOutOfRangeException));
								__this_00 = (IndexOutOfRangeException)il2cpp_codegen_object_new(klass);
								message = il2cpp_codegen_get_runtime_metadata(&"Invalid matrix index!");
								__this_00 = new IndexOutOfRangeException(message);
								lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UnityEngine_Matrix4x4_get_Item) ;
								throw (object)__this_00;
							}
							fVar9 = pUVar4.m00;
							*pfVar7 = (pUVar5.m00 - fVar9) * fVar8 + fVar9;
							iVar6 = iVar6 + 1;
						} while(true);
					}
				}
			}
		label_0586c17a: ;
			throw new NullReferenceException();
		switchD_0586be39_caseD_f: ;
			fStack_15c = this._src_5__4.m33;
			fStack_15c = fVar8 * (this._dest_5__3.m33 - fStack_15c) + fStack_15c;
			if ((pRStack_d8 != null) &&(pUVar2 = pRStack_d8.mainCamera, pUVar2 != null)) {
				value.m10 = fStack_17c;
				value.m00 = (float)auStack_118._0_4_;
				value.m30 = fStack_184;
				value.m20 = fStack_180;
				value.m11 = fStack_18c;
				value.m01 = fStack_188;
				value.m31 = fStack_194;
				value.m21 = fStack_190;
				value.m12 = fStack_19c;
				value.m02 = fStack_198;
				value.m32 = fStack_1a4;
				value.m22 = fStack_1a0;
				value.m13 = fStack_1ac;
				value.m03 = fStack_1a8;
				value.m33 = fStack_15c;
				value.m23 = fStack_1b0;
				pUVar2.projectionMatrix = value;
				this.__2__current = null;
				this.__1__state = 1;
				return true;
			}
			goto label_0586c17a;
		}

		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x576C190", Offset = "0x576B190", VA = "0x576C190", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_RuntimeSceneGizmo_CameraGizmoListener_SwitchProjection_d__11_System_Collections_IEnumerator_Rese);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40001D2")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private float cameraAdjustmentSpeed;

	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private float projectionTransitionSpeed;

	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x28")]
	private Camera mainCamera;

	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x30")]
	private Transform mainCamParent;

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x38")]
	private IEnumerator cameraRotateCoroutine;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x40")]
	private IEnumerator projectionChangeCoroutine;

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x576B0F0", Offset = "0x576A0F0", VA = "0x576B0F0")]
	private void Awake()
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener$$Awake): clean
		Camera pUVar1;
		Transform pUVar2;

		pUVar1 = Camera.main;
		this.mainCamera = pUVar1;
		pUVar1 = this.mainCamera;
		if (pUVar1 != null) {
			pUVar2 = pUVar1.transform;
			if (pUVar2 != null) {
				pUVar2 = pUVar2.parent;
				this.mainCamParent = pUVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x576B150", Offset = "0x576A150", VA = "0x576B150")]
	private void OnDisable()
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener$$OnDisable): clean
		this.projectionChangeCoroutine = null;
		this.cameraRotateCoroutine = null;
		return;
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x576B180", Offset = "0x576A180", VA = "0x576B180")]
	public void OnGizmoComponentClicked(GizmoComponent component)
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener$$OnGizmoComponentClicked): 9 lines keep C-only constructs
		ulong uVar1;
		ulong uVar2;
		ulong uVar3;
		UnityEngine_Vector3_StaticFields pUVar4;
		Vector3 direction;
		Vector3 direction_00;
		Vector3 direction_01;

		switch(component) {
		case 0:
			this.SwitchOrthographicMode();
			return;
		case 1:
			this.RotateCameraInDirection((Vector3)(Vector3.rightVector));
			return;
		case 2:
			break;
		case 3:
			this.RotateCameraInDirection((Vector3)(Vector3.upVector));
			return;
		case 4:
			pUVar4 = typeof(Vector3).static_fields;
			uVar3._0_4_ = (pUVar4.upVector).x;
			uVar3._4_4_ = (pUVar4.upVector).y;
			direction_01._0_8_ = uVar3 ^ 0x8000000080000000;
			direction_01.z = -(pUVar4.upVector).z;
			this.RotateCameraInDirection(direction_01);
			return;
		case 5:
			this.RotateCameraInDirection((Vector3)(Vector3.forwardVector));
			return;
		default: ;
			pUVar4 = typeof(Vector3).static_fields;
			uVar1._0_4_ = (pUVar4.forwardVector).x;
			uVar1._4_4_ = (pUVar4.forwardVector).y;
			direction._0_8_ = uVar1 ^ 0x8000000080000000;
			direction.z = -(pUVar4.forwardVector).z;
			this.RotateCameraInDirection(direction);
			return;
		}
		pUVar4 = typeof(Vector3).static_fields;
		uVar2._0_4_ = (pUVar4.rightVector).x;
		uVar2._4_4_ = (pUVar4.rightVector).y;
		direction_00._0_8_ = uVar2 ^ 0x8000000080000000;
		direction_00.z = -(pUVar4.rightVector).z;
		this.RotateCameraInDirection(direction_00);
		return;
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x576B350", Offset = "0x576A350", VA = "0x576B350")]
	public void SwitchOrthographicMode()
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener$$SwitchOrthographicMode): 1 lines keep C-only constructs
		CameraGizmoListener.d__11<SwitchProjection> __this_00;

		if (this.projectionChangeCoroutine != null) {
			return;
		}
		__this_00 = il2cpp_codegen_object_new(typeof(CameraGizmoListener.d__11<SwitchProjection>)) ;
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		this.projectionChangeCoroutine = (IEnumerator)__this_00;
		this.StartCoroutine(this.projectionChangeCoroutine);
		return;
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x576B3E0", Offset = "0x576A3E0", VA = "0x576B3E0")]
	public void RotateCameraInDirection(Vector3 direction)
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener$$RotateCameraInDirection): 1 lines keep C-only constructs
		CameraGizmoListener.d__12<SetCameraRotation> __this_00;

		if (this.cameraRotateCoroutine != null) {
			return;
		}
		__this_00 = il2cpp_codegen_object_new(typeof(CameraGizmoListener.d__12<SetCameraRotation>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.targetForward.x = direction.x;
		__this_00.targetForward.y = direction.y;
		__this_00.targetForward.z = direction.z;
		this.cameraRotateCoroutine = (IEnumerator)__this_00;
		this.StartCoroutine(this.cameraRotateCoroutine);
		return;
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x576B4A0", Offset = "0x576A4A0", VA = "0x576B4A0")]
	[IteratorStateMachine(typeof(_003CSwitchProjection_003Ed__11))]
	private IEnumerator SwitchProjection()
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener$$SwitchProjection): 1 lines keep C-only constructs
		CameraGizmoListener.d__11<SwitchProjection> __this_00;

		__this_00 = il2cpp_codegen_object_new(typeof(CameraGizmoListener.d__11<SwitchProjection>)) ;
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x576B510", Offset = "0x576A510", VA = "0x576B510")]
	[IteratorStateMachine(typeof(_003CSetCameraRotation_003Ed__12))]
	private IEnumerator SetCameraRotation(Vector3 targetForward)
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener$$SetCameraRotation): 1 lines keep C-only constructs
		CameraGizmoListener.d__12<SetCameraRotation> __this_00;

		__this_00 = il2cpp_codegen_object_new(typeof(CameraGizmoListener.d__12<SetCameraRotation>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.targetForward.x = targetForward.x;
		__this_00.targetForward.y = targetForward.y;
		__this_00.targetForward.z = targetForward.z;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x576B5E0", Offset = "0x576A5E0", VA = "0x576B5E0")]
	public CameraGizmoListener()
	{
		// Lifted from source/cpp/RuntimeSceneGizmo/CameraGizmoListener.c (RuntimeSceneGizmo.CameraGizmoListener$$.ctor): clean
		this.cameraAdjustmentSpeed = 3.0;
		this.projectionTransitionSpeed = 2.0;
		base();
		return;
	}
}
