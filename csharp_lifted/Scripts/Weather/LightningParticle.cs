// ==================== AoTTG2 cross-reference ====================
// Type: Weather.LightningParticle
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/LightningParticle.c
// Prior real C# source (older reference): Assets/Scripts/Weather/LightningParticle.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Weather;

[Token(Token = "0x200002F")]
public class LightningParticle : MonoBehaviour
{
	[Token(Token = "0x2000031")]
	[CompilerGenerated]
	private sealed class _003CStrikeCoroutine_003Ed__20 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400010A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400010B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400010C")]
		[FieldOffset(Offset = "0x20")]
		public LightningParticle _003C_003E4__this;

		[Token(Token = "0x400010D")]
		[FieldOffset(Offset = "0x28")]
		public bool sound;

		[Token(Token = "0x400010E")]
		[FieldOffset(Offset = "0x2C")]
		private Color _003Ccolor_003E5__2;

		[Token(Token = "0x400010F")]
		[FieldOffset(Offset = "0x3C")]
		private float _003CmaxAlpha_003E5__3;

		[Token(Token = "0x4000110")]
		[FieldOffset(Offset = "0x40")]
		private float _003CstartTime_003E5__4;

		[Token(Token = "0x17000019")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000162")]
			[Address(RVA = "0x5755F70", Offset = "0x5754F70", VA = "0x5755F70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Weather/LightningParticle.c (Weather.LightningParticle.<StrikeCoroutine>d__20$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700001A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000164")]
			[Address(RVA = "0x5755FC0", Offset = "0x5754FC0", VA = "0x5755FC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Weather/LightningParticle.c (Weather.LightningParticle.<StrikeCoroutine>d__20$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600015F")]
		[Address(RVA = "0x5755A20", Offset = "0x5754A20", VA = "0x5755A20")]
		[DebuggerHidden]
		public _003CStrikeCoroutine_003Ed__20(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Weather/LightningParticle.c (Weather.LightningParticle.<StrikeCoroutine>d__20$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6000160")]
		[Address(RVA = "0x5755BE0", Offset = "0x5754BE0", VA = "0x5755BE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Weather/LightningParticle.c (Weather.LightningParticle.<StrikeCoroutine>d__20$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6000161")]
		[Address(RVA = "0x5755BF0", Offset = "0x5754BF0", VA = "0x5755BF0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Weather/LightningParticle.c (Weather.LightningParticle.<StrikeCoroutine>d__20$$MoveNext): 5 lines keep C-only constructs
			Color pUVar1;
			uint uVar2;
			LightningParticle __this_00;
			LineRenderer pUVar3;
			float fVar4;
			int iVar5;
			object pIVar6;
			WaitForSeconds __this_01;
			float fVar7;
			float fVar8;

			uVar2 = this.__1__state;
			if (3 < uVar2) {
				return false;
			}
			__this_00 = this.__4__this;
			switch(uVar2) {
			case 0:
				this.__1__state = -1;
				if (__this_00 == null) goto label_05855f5d;
				fVar7 = __this_00.LightningColor.g;
				fVar8 = __this_00.LightningColor.b;
				fVar4 = __this_00.LightningColor.a;
				this._color_5__2.r = __this_00.LightningColor.r;
				this._color_5__2.g = fVar7;
				this._color_5__2.b = fVar8;
				this._color_5__2.a = fVar4;
				iVar5 = Application.loadedLevel;
				this._maxAlpha_5__3 = *(float)(&g_data_0100ad00 + (ulong)(iVar5 == 0) * 4);
				this._color_5__2.a = 0.0;
				pUVar3 = __this_00._lineRenderer;
				if (pUVar3 == null) goto label_05855f5d;
				pUVar1 = &this._color_5__2;
				pUVar3.SetColors((Color)pUVar1.fields, (Color)pUVar1.fields);
				pUVar3 = __this_00._lineRenderer;
				if (pUVar3 == null) goto label_05855f5d;
				pUVar3.SetWidth(2.0, 2.0);
				fVar7 = Time.time;
				this._startTime_5__4 = fVar7;
				break;
			case 1:
				this.__1__state = -1;
				break;
			case 2:
				this.__1__state = -1;
				fVar7 = Time.time;
				this._startTime_5__4 = fVar7;
				goto label_05855dcd;
			case 3:
				this.__1__state = -1;
		label_05855dcd: ;
				fVar7 = Time.time;
				if (1.0 <= fVar7 - this._startTime_5__4) {
					if (__this_00 != null) {
						__this_00.Disable();
						return false;
					}
				}
				else {
					fVar8 = Time.time;
					fVar8 = fVar8 - this._startTime_5__4;
					fVar7 = 1.0;
					if (fVar8 <= 1.0) {
						fVar7 = fVar8;
					}
					fVar7 = (float)(~-(uint)(0.0 <= fVar8) & 0x3f800000 | (uint)(1.0 - fVar7) & -(uint)(0.0 <= fVar8));
					this._color_5__2.a = fVar7 * fVar7 * this._maxAlpha_5__3;
					if ((__this_00 != null) &&(pUVar3 = __this_00._lineRenderer, pUVar3 != null)) {
						pUVar1 = &this._color_5__2;
						pUVar3.SetColors((Color)pUVar1.fields, (Color)pUVar1.fields);
						__this_00.SetVolume(fVar7 * 0.3);
						pIVar6 = new WaitForEndOfFrame();
						this.__2__current = pIVar6;
						this.__1__state = 3;
						return true;
					}
				}
				goto label_05855f5d;
			}
			fVar7 = Time.time;
			if (0.5 <= fVar7 - this._startTime_5__4) {
				if (this.sound == false) {
					this._color_5__2.a = this._maxAlpha_5__3;
					if (__this_00 == null) goto label_05855f5d;
				}
				else {
					if (__this_00 == null) goto label_05855f5d;
					__this_00.PlayAudio();
					this._color_5__2.a = this._maxAlpha_5__3;
				}
				pUVar3 = __this_00._lineRenderer;
				if (pUVar3 == null) {
		label_05855f5d: ;
					throw new NullReferenceException();
				}
				pUVar1 = &this._color_5__2;
				pUVar3.SetColors((Color)pUVar1.fields, (Color)pUVar1.fields);
				__this_01 = new WaitForSeconds(0.3);
				this.__2__current = (object)__this_01;
				this.__1__state = 2;
			}
			else {
				fVar8 = Time.time;
				fVar8 = fVar8 - this._startTime_5__4;
				fVar8 = fVar8 + fVar8;
				fVar7 = 1.0;
				if (fVar8 <= 1.0) {
					fVar7 = fVar8;
				}
				this._color_5__2.a =(float)(-(uint)(0.0 <= fVar8) & (uint)fVar7) * this._maxAlpha_5__3;
				if ((__this_00 == null) ||(pUVar3 = __this_00._lineRenderer, pUVar3 == null)) goto label_05855f5d;
				pUVar1 = &this._color_5__2;
				pUVar3.SetColors((Color)pUVar1.fields, (Color)pUVar1.fields);
				pIVar6 = new WaitForEndOfFrame();
				this.__2__current = pIVar6;
				this.__1__state = 1;
			}
			return true;
		}

		[Token(Token = "0x6000163")]
		[Address(RVA = "0x5755F80", Offset = "0x5754F80", VA = "0x5755F80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Weather/LightningParticle.c (Weather.LightningParticle.<StrikeCoroutine>d__20$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Weather_LightningParticle_StrikeCoroutine_d__20_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40000FD")]
	private const float FadeInTime = 0.5f;

	[Token(Token = "0x40000FE")]
	private const float StayTime = 0.3f;

	[Token(Token = "0x40000FF")]
	private const float FadeOutTime = 1f;

	[Token(Token = "0x4000100")]
	private const float ChaosFactor = 0.2f;

	[Token(Token = "0x4000101")]
	private const float StartWidth = 2f;

	[Token(Token = "0x4000102")]
	private const float EndWidth = 2f;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x20")]
	protected Color LightningColor;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x0")]
	private static System.Random _random;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x30")]
	protected LineRenderer _lineRenderer;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x38")]
	protected int _startIndex;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x40")]
	protected List<AudioSource> _audioSources;

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x5754170", Offset = "0x5753170", VA = "0x5754170")]
	private static void GetPerpendicularVector(ref Vector3 directionNormalized, out Vector3 side)
	{
		// Lifted from source/cpp/Weather/LightningParticle.c (Weather.LightningParticle$$GetPerpendicularVector): 29 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		UnityEngine_Vector3_StaticFields pUVar12;
		uint extraout_XMM0_Db;
		byte[] auVar13 = new byte[16];
		float fVar14;
		byte[] local_48 = new byte[12];
		float local_38;
		uint uStack_34;
		ulong local_20;

		uVar1 = directionNormalized.x;
		uVar6 = directionNormalized.y;
		fVar14 = directionNormalized.z;
		pUVar12 = typeof(Vector3).static_fields;
		uVar2 = (pUVar12.zeroVector).x;
		uVar7 = (pUVar12.zeroVector).y;
		fVar14 = fVar14 - (pUVar12.zeroVector).z;
		if (((float)uVar6 - (float)uVar7) * ((float)uVar6 - (float)uVar7) +((float)uVar1 - (float)uVar2) * ((float)uVar1 - (float)uVar2) + fVar14 * fVar14 < 9.9999994e-11) {
			if (Il2CppMethodInitialized_07544d56 == false) {
				Il2CppMethodInitialized_07544d56 = true;
				pUVar12 = typeof(Vector3).static_fields;
			}
			uVar3 = (pUVar12.rightVector).x;
			uVar8 = (pUVar12.rightVector).y;
			local_38 = (pUVar12.rightVector).z;
			goto label_05854389;
		}
		local_48._0_4_ = directionNormalized.x;
		uVar4 = directionNormalized.y;
		uVar9 = directionNormalized.z;
		fVar14 = ABS((float)uVar4);
		if ((ABS((float)local_48._0_4_) < fVar14) || (fVar14 < ABS((float)uVar9))) {
			if (ABS((float)uVar9) <= fVar14) {
				local_48._4_4_ = -((float)local_48._0_4_ + (float)uVar9) / (float)uVar4;
				local_48._0_4_ = 1.0;
				goto label_058542cc;
			}
			uVar3 = 0x80000000;
			local_38 = -((float)local_48._0_4_ + (float)uVar4) / (float)uVar9;
			_local_48 = ZEXT816(0x3f8000003f800000);
			uStack_34 = 0x80000000;
			if (g_data_0753e72d == false) goto label_0585439d;
	label_058542ea: ;
			local_20._0_4_ = 0.0;
			local_20._4_4_ = 0.0;
			if (Il2CppMethodInitialized_0753e729 != false) goto label_05854300;
	label_058543cb: ;
			local_20._0_4_ = 0.0;
			local_20._4_4_ = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
			uVar11 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			uVar3 = uStack_34;
		}
		else {
			local_48._0_4_ = -((float)uVar9 + (float)uVar4) / (float)local_48._0_4_;
			local_48._4_4_ = 1.0;
	label_058542cc: ;
			local_48._8_4_ = 0;
			uVar3 = 0;
			local_38 = 1.0;
			uStack_34 = 0;
			if (g_data_0753e72d != false) goto label_058542ea;
	label_0585439d: ;
			g_data_0753e72d = true;
			local_20._0_4_ = 0.0;
			local_20._4_4_ = 0.0;
			uVar3 = uStack_34;
			if (Il2CppMethodInitialized_0753e729 == false) goto label_058543cb;
	label_05854300: ;
			local_20._0_4_ = 0.0;
			local_20._4_4_ = 0.0;
			uVar11 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar11 == 0) {
			uVar3 = uStack_34;
		}
		fVar14 = local_38 * local_38 +(float)local_48._4_4_ * (float)local_48._4_4_ + (float)local_48._0_4_ * (float)local_48._0_4_;
		if (fVar14 < 0.0) {
			fVar14 = sqrtf(fVar14);
			uVar3 = extraout_XMM0_Db;
			if (1e-05 < fVar14) goto label_0585436d;
	label_05854349: ;
			pUVar12 = typeof(Vector3).static_fields;
			local_38 = (pUVar12.zeroVector).z;
		}
		else {
			fVar14 = SQRT(fVar14);
			if (fVar14 <= 1e-05) goto label_05854349;
	label_0585436d: ;
			local_38 = local_38 / fVar14;
			auVar13._4_4_ = fVar14;
			auVar13._0_4_ = fVar14;
			auVar13._8_4_ = uVar3;
			auVar13._12_4_ = uVar3;
			auVar13 = divps(_local_48, auVar13);
			local_20._0_4_ = auVar13._0_4_;
			local_20._4_4_ = auVar13._4_4_;
			pUVar12 = (UnityEngine_Vector3_StaticFields)&local_20;
		}
		uVar5 = (pUVar12.zeroVector).x;
		uVar10 = (pUVar12.zeroVector).y;
		uVar3 = uVar5;
		uVar8 = uVar10;
	label_05854389: ;
		side.x = (float)uVar3;
		side.y = (float)uVar8;
		side.z = local_38;
		return;
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x5754410", Offset = "0x5753410", VA = "0x5754410")]
	public static List<Vector3> GenerateLightningBoltPositions(Vector3 start, Vector3 end, int generation, float offsetAmount = 0f)
	{
		// Lifted from source/cpp/Weather/LightningParticle.c (Weather.LightningParticle$$GenerateLightningBoltPositions): 119 lines keep C-only constructs
		int piVar1;
		System_Collections_Generic_KeyValuePair_Vector3__Vector3__Fields pSVar2;
		float fVar3;
		uint uVar4;
		float fVar5;
		uint uVar6;
		float fVar7;
		uint uVar8;
		float fVar9;
		uint uVar10;
		uint uVar11;
		System_Collections_Generic_KeyValuePair_Vector3__Vector3__array pSVar12;
		Random pSVar13;
		Vector3[] pUVar14;
		byte[] auVar15 = new byte[16];
		byte[] auVar16 = new byte[16];
		double dVar17;
		int iVar18;
		System_Collections_Generic_KeyValuePair_Vector3__Vector3__o item;
		System_Collections_Generic_KeyValuePair_Vector3__Vector3__o item_00;
		System_Collections_Generic_KeyValuePair_Vector3__Vector3__o item_01;
		Vector3 item_02;
		Vector3 item_03;
		byte[] auVar19 = new byte[16];
		List<KeyValuePair<Vector3, Vector3>> __this;
		UnityEngine_Vector3_StaticFields pUVar21;
		List<Vector3> __this_00;
		int index;
		int iVar22;
		uint uVar23;
		uint extraout_XMM0_Db;
		float extraout_XMM0_Db_00;
		uint in_XMM0_Dc;
		float extraout_XMM0_Dc;
		uint in_XMM0_Dd;
		float extraout_XMM0_Dd;
		float fVar24;
		float in_XMM1_Db;
		float fVar26;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		byte[] auVar25 = new byte[16];
		ulong in_XMM2_Qb;
		byte[] auVar27 = new byte[16];
		byte[] auVar28 = new byte[16];
		float in_XMM3_Db;
		float fVar29;
		float in_XMM3_Dc;
		float in_XMM3_Dd;
		float fVar30;
		uint uVar31;
		Quaternion rotation;
		Vector3 UVar32;
		Vector3 key;
		Vector3 key_00;
		Vector3 value;
		Vector3 point;
		Vector3 value_00;
		Vector3 value_01;
		UnityEngine_Vector3_StaticFields local_128;
		uint uStack_b0;
		uint uStack_ac;
		byte[] local_a8 = new byte[16];
		ulong local_90;
		System_Collections_Generic_KeyValuePair_Vector3__Vector3__o local_88;
		byte[] local_68 = new byte[8];
		float local_58;
		float fStack_54;
		float fStack_50;
		float fStack_4c;
		float local_48;
		uint uStack_44;

		local_128.upVector.z = end.z;
		local_128.leftVector._0_8_ = end._0_8_;
		local_128.rightVector.z = in_XMM1_Db;
		local_128.rightVector.y = start.z;
		local_128.forwardVector.x = (float)in_XMM1_Dc;
		local_128.forwardVector.y = (float)in_XMM1_Dd;
		local_128.positiveInfinityVector.z = (float)in_XMM0_Dc;
		local_128.positiveInfinityVector._0_8_ = start._0_8_;
		local_128.negativeInfinityVector.x = (float)in_XMM0_Dd;
		local_128.upVector.x = offsetAmount;
		local_128.downVector.x = in_XMM3_Db;
		local_128.downVector.y = in_XMM3_Dc;
		local_128.downVector.z = in_XMM3_Dd;
		local_128._56_8_ = in_XMM2_Qb;
		__this = new List<KeyValuePair<Vector3, Vector3>>();
		local_128.zeroVector.x = 0.0;
		local_128.zeroVector.y = 0.0;
		local_128.zeroVector.z = 0.0;
		local_128.oneVector.x = 0.0;
		local_128.oneVector.y = 0.0;
		local_128.oneVector.z = 0.0;
		UVar32.z = local_128.rightVector.y;
		UVar32.x = local_128.positiveInfinityVector.x;
		UVar32.y = local_128.positiveInfinityVector.y;
		value.z = local_128.upVector.z;
		value.x = local_128.leftVector.x;
		value.y = local_128.leftVector.y;
		local_128 = new KeyValuePair<Vector3, Vector3>(UVar32, value);
		if (__this != null) {
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar12 = __this._items;
			if (pSVar12 != null) {
				uVar31 = __this._size;
				if (uVar31 < (uint)pSVar12.Length) {
					__this._size = uVar31 + 1;
					pSVar12[(int)uVar31].value.y = local_128.oneVector.y;
					pSVar12[(int)uVar31].value.z = local_128.oneVector.z;
					pSVar2 = &pSVar12[(int)uVar31];
					(pSVar2.key).x = local_128.zeroVector.x;
					(pSVar2.key).y = local_128.zeroVector.y;
					*(ulong)&(pSVar2.key).z = CONCAT44(local_128.oneVector.x, local_128.zeroVector.z);
				}
				else {
					item.value.z = local_128.oneVector.z;
					item.value.y = local_128.oneVector.y;
					item.value.x = local_128.oneVector.x;
					item.key.z = local_128.zeroVector.z;
					item.key.x = local_128.zeroVector.x;
					item.key.y = local_128.zeroVector.y;
					__this.AddWithResize(item);
				}
				fVar5 = local_128.downVector.x;
				auVar25._0_8_ = local_128.rightVector._4_8_;
				fVar26 = local_128.upVector.x;
				if (local_128.upVector.x <= 0.0) {
					auVar25._8_4_ = local_128.rightVector.z;
					auVar25._12_4_ = local_128.positiveInfinityVector.y;
					auVar27._8_8_ = auVar25._8_8_;
					auVar27._0_4_ = local_128.rightVector.y;
					auVar27._4_4_ = local_128.positiveInfinityVector.x;
					fVar26 = local_128.leftVector.x;
					fVar29 = local_128.leftVector.y;
					if (Il2CppMethodInitialized_0753e729 == false) {
						local_128.downVector.x = local_128.leftVector.x;
						local_128.downVector.y = fVar5;
						local_128.downVector.z = local_128.leftVector.y;
						local_128._64_16_ = auVar27;
						Il2CppMethodInitialized_0753e729 = true;
						auVar27 = (byte[])local_128._64_16_;
						fVar26 = local_128.downVector.x;
						fVar5 = local_128.downVector.y;
						fVar29 = local_128.downVector.z;
					}
					fVar24 = local_128.upVector.z - auVar27._0_4_;
					fVar26 = fVar26 - auVar27._4_4_;
					fVar9 = local_128.leftVector.y - local_128.positiveInfinityVector.y;
					if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
						local_128.leftVector.y = local_128.leftVector.y - local_128.positiveInfinityVector.y;
						local_128.leftVector.x = local_128.leftVector.x - local_128.positiveInfinityVector.x;
						local_128.rightVector.x = local_128.rightVector.x - local_128.negativeInfinityVector.x;
						local_128.leftVector.z = local_128.leftVector.z - local_128.positiveInfinityVector.z;
						local_128.upVector.z = fVar24;
						local_128.downVector.x = fVar26;
						local_128.downVector.y = fVar5 - auVar27._8_4_;
						local_128.downVector.z = fVar29 - auVar27._12_4_;
						fVar9 = local_128.leftVector.y;
						fVar24 = local_128.upVector.z;
						fVar26 = local_128.downVector.x;
					}
					fVar26 = fVar9 * fVar9 + fVar26 * fVar26 + fVar24 * fVar24;
					if (fVar26 < 0.0) {
						fVar26 = sqrtf(fVar26);
					}
					else {
						fVar26 = SQRT(fVar26);
					}
					fVar26 = fVar26 * 0.2;
				}
				if (generation < 1) {
					index = 0;
				}
				else {
					iVar22 = 0;
					local_90 = (ulong)(uint)generation;
					do {
						index = __this._size;
						local_128.upVector.x = fVar26;
						if (iVar22 < index) {
	label_05854728: ;
							do {
								local_128 = __this.get_Item(iVar22);
								local_128.forwardVector.x = 0.0;
								local_128.forwardVector.y = 0.0;
								local_128.rightVector.y = local_128.zeroVector.x;
								local_128.rightVector.z = local_128.zeroVector.y;
								local_128.upVector.z = local_128.zeroVector.z;
								local_128 = __this.get_Item(iVar22);
								local_58 = local_128.oneVector.x;
								fStack_54 = local_128.oneVector.y;
								fStack_50 = 0.0;
								fStack_4c = 0.0;
								local_128.upVector.y = local_128.oneVector.z;
								local_128.positiveInfinityVector.y =(local_128.rightVector.z + local_128.oneVector.y) * 0.5;
								local_128.positiveInfinityVector.x =(local_128.rightVector.y + local_128.oneVector.x) * 0.5;
								local_128.positiveInfinityVector.z = (local_128.forwardVector.x + 0.0) * 0.0;
								local_128.negativeInfinityVector.x = (local_128.forwardVector.y + 0.0) * 0.0;
								local_128.leftVector.x =(local_128.upVector.z + local_128.oneVector.z) * 0.5;
								if ((typeof(LightningParticle)._2).cctor_finished_or_no_cctor == 0) {
									if (Il2CppMethodInitialized_0754506d != false) goto label_058547ec;
	label_05854a1c: ;
									Il2CppMethodInitialized_0754506d = true;
									if (g_data_0753e72d != false) goto label_058547fc;
	label_05854a3b: ;
									g_data_0753e72d = true;
									local_128.zeroVector.x = 0.0;
									local_128.zeroVector.y = 0.0;
									if (Il2CppMethodInitialized_0753e729 != false) goto label_05854812;
	label_05854a60: ;
									local_128.zeroVector.x = 0.0;
									local_128.zeroVector.y = 0.0;
									Il2CppMethodInitialized_0753e729 = true;
									uVar11 = (typeof(Math)._2).cctor_finished_or_no_cctor;
								}
								else {
									if (Il2CppMethodInitialized_0754506d == false) goto label_05854a1c;
	label_058547ec: ;
									if (g_data_0753e72d == false) goto label_05854a3b;
	label_058547fc: ;
									local_128.zeroVector.x = 0.0;
									local_128.zeroVector.y = 0.0;
									if (Il2CppMethodInitialized_0753e729 == false) goto label_05854a60;
	label_05854812: ;
									local_128.zeroVector.x = 0.0;
									local_128.zeroVector.y = 0.0;
									uVar11 = (typeof(Math)._2).cctor_finished_or_no_cctor;
								}
								if (uVar11 == 0) {
								}
								auVar28._0_4_ = local_58 - local_128.rightVector.y;
								auVar28._4_4_ = fStack_54 - local_128.rightVector.z;
								auVar28._8_4_ = fStack_50 - local_128.forwardVector.x;
								auVar28._12_4_ = fStack_4c - local_128.forwardVector.y;
								local_a8._4_4_ = 0;
								local_a8._8_4_ = 0;
								local_a8._12_4_ = 0;
								local_a8._0_4_ = local_128.upVector.y - local_128.upVector.z;
								uVar23 = 0;
								fVar5 = (float)local_a8._0_4_ * (float)local_a8._0_4_ + auVar28._4_4_ * auVar28._4_4_ + auVar28._0_4_ * auVar28._0_4_;
								if (fVar5 < 0.0) {
									local_a8 = ZEXT416((uint)local_a8._0_4_);
									local_128._80_16_ = auVar28;
									fVar5 = sqrtf(fVar5);
									uVar23 = extraout_XMM0_Db;
									auVar28 = (byte[])local_128._80_16_;
									if (fVar5 <= 1e-05) goto label_05854874;
	label_058548b8: ;
									fVar26 = (float)local_a8._0_4_ / fVar5;
									auVar16._4_4_ = fVar5;
									auVar16._0_4_ = fVar5;
									auVar16._8_4_ = uVar23;
									auVar16._12_4_ = uVar23;
									auVar25 = divps(auVar28, auVar16);
									local_128.zeroVector.x = (float)auVar25._0_4_;
									local_128.zeroVector.y = (float)auVar25._4_4_;
									pUVar21 = &local_128;
								}
								else {
									fVar5 = SQRT(fVar5);
									if (1e-05 < fVar5) goto label_058548b8;
	label_05854874: ;
									pUVar21 = typeof(Vector3).static_fields;
									fVar26 = (pUVar21.zeroVector).z;
									local_a8._4_4_ = 0;
									local_a8._8_4_ = 0;
									local_a8._12_4_ = 0;
								}
								fVar3 = (pUVar21.zeroVector).x;
								fVar7 = (pUVar21.zeroVector).y;
								local_a8._0_4_ = fVar26;
								local_68._0_4_ = fVar3;
								local_68._4_4_ = fVar7;
								fVar5 = fVar3;
								fVar29 = fVar7;
								uVar31 = local_a8._4_4_;
								if ((typeof(LightningParticle)._2).cctor_finished_or_no_cctor == 0) {
									fVar5 = (float)local_68._0_4_;
									fVar29 = (float)local_68._4_4_;
									fVar26 = (float)local_a8._0_4_;
									uVar31 = local_a8._4_4_;
								}
								if (Il2CppMethodInitialized_0753e4b6 == false) {
									Il2CppMethodInitialized_0753e4b6 = true;
									fVar26 = (float)local_a8._0_4_;
									uVar31 = local_a8._4_4_;
									fVar5 = (float)local_68._0_4_;
									fVar29 = (float)local_68._4_4_;
								}
								pUVar21 = typeof(Vector3).static_fields;
								uVar4 = (pUVar21.zeroVector).x;
								uVar8 = (pUVar21.zeroVector).y;
								fVar9 = fVar26 - (pUVar21.zeroVector).z;
								if (9.9999994e-11 <=(fVar29 - (float)uVar8) * (fVar29 - (float)uVar8) +(fVar5 - (float)uVar4) * (fVar5 - (float)uVar4) + fVar9 * fVar9) {
									fVar9 = ABS(fVar29);
									if ((ABS(fVar5) < fVar9) || (fVar9 < ABS(fVar26))) {
										if (ABS(fVar26) <= fVar9) {
											local_128.negativeInfinityVector.y = 1.0;
											local_128.negativeInfinityVector.z = -(fVar26 + fVar5) / fVar29;
											uStack_b0 = 0;
											uStack_ac = uVar31 ^ 0x80000000;
											fVar26 = 1.0;
											fVar9 = 0.0;
											fVar24 = 0.0;
											fVar30 = 0.0;
											local_128._80_16_ = ZEXT816(0x3f800000);
										}
										else {
											fVar9 = -fVar29;
											fVar24 = -fVar29;
											fVar30 = -fVar29;
											fVar26 = -(fVar29 + fVar5) / fVar26;
											local_128.negativeInfinityVector.y = 1.0;
											local_128.negativeInfinityVector.z = 1.0;
											uStack_b0 = 0;
											uStack_ac = 0;
											local_128._80_8_ = CONCAT44(fVar29, fVar26) ^ 0x8000000000000000;
											local_128.backVector.y = fVar24;
											local_128.backVector.z = fVar30;
										}
										local_128.negativeInfinityVector.y = 1.0;
									}
									else {
										local_128.negativeInfinityVector.y = -(fVar29 + fVar26) / fVar5;
										local_128.negativeInfinityVector.z = 1.0;
										uStack_b0 = 0;
										uStack_ac = 0;
										fVar26 = 1.0;
										fVar9 = 0.0;
										fVar24 = 0.0;
										fVar30 = 0.0;
										local_128._80_16_ = ZEXT816(0x3f800000);
									}
									uStack_b0 = 0;
									if (g_data_0753e72d == false) {
										uStack_b0 = 0;
										g_data_0753e72d = true;
										fVar26 = local_128.forwardVector.z;
										fVar9 = local_128.backVector.x;
										fVar24 = local_128.backVector.y;
										fVar30 = local_128.backVector.z;
									}
									local_128.zeroVector.x = 0.0;
									local_128.zeroVector.y = 0.0;
									if (Il2CppMethodInitialized_0753e729 == false) {
										Il2CppMethodInitialized_0753e729 = true;
										uVar11 = (typeof(Math)._2).cctor_finished_or_no_cctor;
										fVar26 = local_128.forwardVector.z;
										fVar9 = local_128.backVector.x;
										fVar24 = local_128.backVector.y;
										fVar30 = local_128.backVector.z;
									}
									else {
										uVar11 = (typeof(Math)._2).cctor_finished_or_no_cctor;
									}
									if (uVar11 == 0) {
										fVar26 = local_128.forwardVector.z;
										fVar9 = local_128.backVector.x;
										fVar24 = local_128.backVector.y;
										fVar30 = local_128.backVector.z;
									}
									fVar5 = fVar26 * fVar26 + local_128.negativeInfinityVector.z * local_128.negativeInfinityVector.z + local_128.negativeInfinityVector.y * local_128.negativeInfinityVector.y;
									if (fVar5 < 0.0) {
										fVar5 = sqrtf(fVar5);
										fVar9 = extraout_XMM0_Db_00;
										fVar26 = local_128.forwardVector.z;
										fVar29 = local_128.backVector.x;
										fVar24 = local_128.backVector.y;
										fVar30 = local_128.backVector.z;
										if (fVar5 <= 1e-05) goto label_05854bd5;
	label_05854c03: ;
										fVar26 = fVar26 / fVar5;
										auVar19._4_4_ = local_128.negativeInfinityVector.z;
										auVar19._0_4_ = local_128.negativeInfinityVector.y;
										auVar19._8_4_ = uStack_b0;
										auVar19._12_4_ = uStack_ac;
										auVar15._4_4_ = fVar5;
										auVar15._0_4_ = fVar5;
										auVar15._8_4_ = fVar9;
										auVar15._12_4_ = fVar9;
										auVar25 = divps(auVar19, auVar15);
										local_128.zeroVector.x = (float)auVar25._0_4_;
										local_128.zeroVector.y = (float)auVar25._4_4_;
										pUVar21 = &local_128;
									}
									else {
										fVar5 = SQRT(fVar5);
										fVar29 = fVar9;
										if (1e-05 < fVar5) goto label_05854c03;
	label_05854bd5: ;
										pUVar21 = typeof(Vector3).static_fields;
										fVar26 = (pUVar21.zeroVector).z;
										fVar29 = 0.0;
										fVar24 = 0.0;
										fVar30 = 0.0;
									}
									uVar6 = (pUVar21.zeroVector).x;
									uVar10 = (pUVar21.zeroVector).y;
									fVar5 = (float)uVar6;
									fVar9 = (float)uVar10;
								}
								else {
									if (Il2CppMethodInitialized_07544d56 == false) {
										Il2CppMethodInitialized_07544d56 = true;
										pUVar21 = typeof(Vector3).static_fields;
									}
									fVar5 = (pUVar21.rightVector).x;
									fVar9 = (pUVar21.rightVector).y;
									fVar26 = (pUVar21.rightVector).z;
									fVar29 = 0.0;
									fVar24 = 0.0;
									fVar30 = 0.0;
								}
								pSVar13 = LightningParticle._random;
								if (pSVar13 == null) goto label_05854fff;
								uStack_b0 = 0;
								uStack_ac = 0;
								local_128.backVector.x = fVar29;
								local_128.forwardVector.z = fVar26;
								local_128.backVector.y = fVar24;
								local_128.backVector.z = fVar30;
								local_128.negativeInfinityVector.y = fVar5;
								local_128.negativeInfinityVector.z = fVar9;
								dVar17 = pSVar13.NextDouble();
								pSVar13 = LightningParticle._random;
								if (pSVar13 == null) goto label_05854fff;
								local_48 = ((float)dVar17 + 0.1) * local_128.upVector.x;
								uStack_44 = (int)((ulong)dVar17 >> 0x20);
								dVar17 = pSVar13.NextDouble();
								local_128.zeroVector.x = (float)local_68._0_4_;
								local_128.zeroVector.y = (float)local_68._4_4_;
								local_128.zeroVector.z = (float)local_a8._0_4_;
								rotation = Quaternion.Internal_AngleAxis((float)dVar17 * 360.0, ref local_128.zeroVector);
								point.y = local_128.negativeInfinityVector.z;
								point.x = local_128.negativeInfinityVector.y;
								point.z = local_128.forwardVector.z;
								UVar32 = (rotation * point);
								value_00.z = local_128.leftVector.x + UVar32.z * local_48;
								local_128.positiveInfinityVector.x = local_128.positiveInfinityVector.x + local_48 * UVar32.x;
								local_128.positiveInfinityVector.y = local_128.positiveInfinityVector.y + local_48 * UVar32.y;
								local_128._96_16_ = CONCAT412(local_128.negativeInfinityVector.x + local_48 * extraout_XMM0_Dd, CONCAT48(local_128.positiveInfinityVector.z + local_48 * extraout_XMM0_Dc, CONCAT44(local_128.positiveInfinityVector.y, local_128.positiveInfinityVector.x)));
								local_128.zeroVector.x = 0.0;
								local_128.zeroVector.y = 0.0;
								local_128.zeroVector.z = 0.0;
								local_128.oneVector.x = 0.0;
								local_128.oneVector.y = 0.0;
								local_128.oneVector.z = 0.0;
								local_128.leftVector.x = value_00.z;
								key.z = local_128.upVector.z;
								key.x = local_128.rightVector.y;
								key.y = local_128.rightVector.z;
								value_00.x = local_128.positiveInfinityVector.x;
								value_00.y = local_128.positiveInfinityVector.y;
								local_128 = new KeyValuePair<Vector3, Vector3>(key, value_00);
								piVar1 = &__this._version;
								*piVar1 = *piVar1 + 1;
								pSVar12 = __this._items;
								if (pSVar12 == null) goto label_05854fff;
								uVar31 = __this._size;
								if (uVar31 < (uint)pSVar12.Length) {
									__this._size = uVar31 + 1;
									pSVar12[(int)uVar31].value.y = local_128.oneVector.y;
									pSVar12[(int)uVar31].value.z = local_128.oneVector.z;
									pSVar2 = &pSVar12[(int)uVar31];
									(pSVar2.key).x = local_128.zeroVector.x;
									(pSVar2.key).y = local_128.zeroVector.y;
									*(ulong)&(pSVar2.key).z = CONCAT44(local_128.oneVector.x, local_128.zeroVector.z);
								}
								else {
									item_01.value.z = local_128.oneVector.z;
									item_01.value.y = local_128.oneVector.y;
									item_01.value.x = local_128.oneVector.x;
									item_01.key.z = local_128.zeroVector.z;
									item_01.key.x = local_128.zeroVector.x;
									item_01.key.y = local_128.zeroVector.y;
									__this.AddWithResize(item_01);
								}
								local_88.key.x = 0.0;
								local_88.key.y = 0.0;
								local_88.key.z = 0.0;
								local_88.value.x = 0.0;
								local_88.value.y = 0.0;
								local_88.value.z = 0.0;
								value_01.y = fStack_54;
								value_01.x = local_58;
								key_00.z = local_128.leftVector.x;
								key_00.x = local_128.positiveInfinityVector.x;
								key_00.y = local_128.positiveInfinityVector.y;
								value_01.z = local_128.upVector.y;
								local_88 = new KeyValuePair<Vector3, Vector3>(key_00, value_01);
								piVar1 = &__this._version;
								*piVar1 = *piVar1 + 1;
								pSVar12 = __this._items;
								if (pSVar12 == null) goto label_05854fff;
								uVar31 = __this._size;
								if ((uint)pSVar12.Length <= uVar31) {
									item_00.key.z = local_88.key.z;
									item_00.value.x = local_88.value.x;
									item_00.key.x = local_88.key.x;
									item_00.key.y = local_88.key.y;
									item_00.value.y = local_88.value.y;
									item_00.value.z = local_88.value.z;
									__this.AddWithResize(item_00);
									iVar22 = iVar22 + 1;
									if (index == iVar22) break;
									goto label_05854728;
								}
								__this._size = uVar31 + 1;
								pSVar12[(int)uVar31].value.y = local_88.value.y;
								pSVar12[(int)uVar31].value.z = local_88.value.z;
								pSVar2 = &pSVar12[(int)uVar31];
								(pSVar2.key).x = local_88.key.x;
								(pSVar2.key).y = local_88.key.y;
								*(ulong)&(pSVar2.key).z = local_88._8_8_;
								iVar22 = iVar22 + 1;
							} while (index != iVar22);
						}
						iVar18 = (int)local_90;
						local_90 = (ulong)(iVar18 - 1);
						fVar26 = local_128.upVector.x * 0.5;
						iVar22 = index;
					} while (1 < iVar18);
				}
				__this_00 = new List<Vector3>();
				local_128 = __this.get_Item(index);
				if (__this_00 != null) {
					item_02.z = local_128.zeroVector.z;
					item_02.x = local_128.zeroVector.x;
					item_02.y = local_128.zeroVector.y;
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pUVar14 = __this_00._items;
					if (pUVar14 != null) {
						uVar31 = __this_00._size;
						if (uVar31 < (uint)pUVar14.Length) {
							__this_00._size = uVar31 + 1;
							pUVar14[(int)uVar31].x = local_128.zeroVector.x;
							pUVar14[(int)uVar31].y = local_128.zeroVector.y;
							pUVar14[(int)uVar31].z = local_128.zeroVector.z;
							iVar22 = __this._size;
						}
						else {
							__this_00.AddWithResize(item_02);
							iVar22 = __this._size;
						}
						if (index < iVar22) {
							do {
								while(true) {
									local_128 = __this.get_Item(index);
									item_03.y = local_128.oneVector.y;
									item_03.x = local_128.oneVector.x;
									item_03.z = local_128.oneVector.z;
									piVar1 = &__this_00._version;
									*piVar1 = *piVar1 + 1;
									pUVar14 = __this_00._items;
									if (pUVar14 == null) goto label_05854fff;
									uVar31 = __this_00._size;
									if ((uint)pUVar14.Length <= uVar31) break;
									__this_00._size = uVar31 + 1;
									pUVar14[(int)uVar31].x = local_128.oneVector.x;
									pUVar14[(int)uVar31].y = local_128.oneVector.y;
									pUVar14[(int)uVar31].z = local_128.oneVector.z;
									index = index + 1;
									if (__this._size <= index) {
										return __this_00;
									}
								}
								__this_00.AddWithResize(item_03);
								index = index + 1;
							} while (index < __this._size);
						}
						return __this_00;
					}
				}
			}
		}
	label_05854fff: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x5755010", Offset = "0x5754010", VA = "0x5755010")]
	private static void RandomVector(ref Vector3 start, ref Vector3 end, float offsetAmount, out Vector3 result)
	{
		// Lifted from source/cpp/Weather/LightningParticle.c (Weather.LightningParticle$$RandomVector): 35 lines keep C-only constructs
		ulong uVar1;
		ulong uVar2;
		Random pSVar3;
		byte[] auVar4 = new byte[16];
		double dVar5;
		float fVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		UnityEngine_Vector3_StaticFields pUVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		uint extraout_XMM0_Db;
		float fVar14;
		float fVar15;
		float fVar16;
		byte[] auVar17 = new byte[16];
		Quaternion rotation;
		Vector3 UVar18;
		Vector3 UStack_68;
		Vector3 UStack_58;
		Vector3 UStack_48;
		byte[] auStack_38 = new byte[12];
		float fStack_2c;
		float fStack_28;
		float fStack_24;

		fStack_28 = offsetAmount;
		UStack_48.z = 0.0;
		UStack_48.x = 0.0;
		UStack_48.y = 0.0;
		UStack_58.z = 0.0;
		UStack_58.x = 0.0;
		UStack_58.y = 0.0;
		fVar12 = end.x;
		fVar6 = end.y;
		uVar8 = end.x;
		uVar9 = end.y;
		uVar1._0_4_ = start.x;
		uVar1._4_4_ = start.y;
		fVar14 = 0.0;
		fVar15 = 0.0;
		fVar16 = end.z - start.z;
		if (g_data_0753e72d == false) {
			auStack_38._8_4_ = 0.0;
			fStack_2c = 0.0;
			auStack_38._0_8_ = uVar1;
			g_data_0753e72d = true;
			UStack_68.x = 0.0;
			UStack_68.y = 0.0;
			fVar11 = (float)auStack_38._0_4_;
			fVar13 = (float)auStack_38._4_4_;
			fVar14 = (float)auStack_38._8_4_;
			fVar15 = fStack_2c;
			fVar12 = (float)uVar8;
			fVar6 = (float)uVar9;
		}
		else {
			UStack_68.x = 0.0;
			UStack_68.y = 0.0;
			fVar11 = (float)uVar1;
			fVar13 = uVar1._4_4_;
		}
		UStack_68.x = 0.0;
		UStack_68.y = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			UStack_68.x = 0.0;
			UStack_68.y = 0.0;
			auStack_38._4_4_ = fVar13;
			auStack_38._0_4_ = fVar11;
			fStack_2c = fVar15;
			auStack_38._8_4_ = fVar14;
			Il2CppMethodInitialized_0753e729 = true;
			fVar11 = (float)auStack_38._0_4_;
			fVar13 = (float)auStack_38._4_4_;
			fVar14 = (float)auStack_38._8_4_;
			fVar15 = fStack_2c;
		}
		auVar17._0_4_ = fVar12 - fVar11;
		auVar17._4_4_ = fVar6 - fVar13;
		auVar17._8_4_ = 0.0 - fVar14;
		auVar17._12_4_ = 0.0 - fVar15;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
		}
		uVar7 = 0;
		fVar12 = fVar16 * fVar16 + auVar17._4_4_ * auVar17._4_4_ + auVar17._0_4_ * auVar17._0_4_;
		if (fVar12 < 0.0) {
			fVar12 = sqrtf(fVar12);
			uVar7 = extraout_XMM0_Db;
		}
		else {
			fVar12 = SQRT(fVar12);
		}
		if (1e-05 < fVar12) {
			fVar16 = fVar16 / fVar12;
			auVar4._4_4_ = fVar12;
			auVar4._0_4_ = fVar12;
			auVar4._8_4_ = uVar7;
			auVar4._12_4_ = uVar7;
			auVar17 = divps(auVar17, auVar4);
			UStack_68.x = auVar17._0_4_;
			UStack_68.y = auVar17._4_4_;
			pUVar10 = (UnityEngine_Vector3_StaticFields)&UStack_68;
		}
		else {
			pUVar10 = typeof(Vector3).static_fields;
			fVar16 = (pUVar10.zeroVector).z;
		}
		uVar2._0_4_ = (pUVar10.zeroVector).x;
		uVar2._4_4_ = (pUVar10.zeroVector).y;
		UStack_48._0_8_ = uVar2;
		UStack_48.z = fVar16;
		if (((typeof(LightningParticle))._2).cctor_finished_or_no_cctor == 0) {
		}
		LightningParticle.GetPerpendicularVector(ref UStack_48, ref UStack_58);
		pSVar3 = LightningParticle._random;
		if (pSVar3 != null) {
			dVar5 = pSVar3.NextDouble();
			fStack_24 = (float)((ulong)dVar5 >> 0x20);
			pSVar3 = LightningParticle._random;
			if (pSVar3 != null) {
				fStack_28 = ((float)dVar5 + 0.1) * fStack_28;
				dVar5 = pSVar3.NextDouble();
				UStack_68._0_8_ = uVar2;
				UStack_68.z = fVar16;
				rotation = Quaternion.Internal_AngleAxis((float)dVar5 * 360.0, ref UStack_68);
				UVar18.z = UStack_58.z;
				UVar18.x = UStack_58.x;
				UVar18.y = UStack_58.y;
				UVar18 = (rotation * UVar18);
				result.x = fStack_28 * UVar18.x;
				result.y = fStack_28 * UVar18.y;
				result.z = UVar18.z * fStack_28;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x57552D0", Offset = "0x57542D0", VA = "0x57552D0")]
	private void Awake()
	{
		// Lifted from source/cpp/Weather/LightningParticle.c (Weather.LightningParticle$$Awake): 4 lines keep C-only constructs
		object @object;
		LineRenderer pUVar1;
		Object[] source;
		Weather_LightningParticle___c_StaticFields pWVar2;
		Func<AudioSource, string> __this_00;
		System_Linq_IOrderedEnumerable_TSource__o source_00;
		List<AudioSource> pSVar3;

		pUVar1 = this.GetComponent<LineRenderer>();
		this._lineRenderer = pUVar1;
		pUVar1 = this._lineRenderer;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.SetVertexCount(0);
		source = this.GetComponentsInChildren<AudioSource>();
		if ((typeof(LightningParticle.c)._2).cctor_finished_or_no_cctor == 0) {
			pWVar2 = typeof(LightningParticle.c).static_fields;
			__this_00 = pWVar2.__9__14_0;
		}
		else {
			pWVar2 = typeof(LightningParticle.c).static_fields;
			__this_00 = pWVar2.__9__14_0;
		}
		if (__this_00 == null) {
			if (((typeof(LightningParticle.c))._2).cctor_finished_or_no_cctor == 0) {
				pWVar2 = typeof(LightningParticle.c).static_fields;
			}
			@object = (object)pWVar2.__9;
			__this_00 = new Func<AudioSource, string>(@object, (intptr_t)MethodInfo_Weather_LightningParticle_c_Awake_b__14_0);
			pWVar2 = typeof(LightningParticle.c).static_fields;
			pWVar2.__9__14_0 = __this_00;
		}
		source_00 = Enumerable.OrderBy<AudioSource, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TKey__o)__this_00);
		pSVar3 = (List<AudioSource>)Enumerable.ToList<AudioSource>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
		this._audioSources = pSVar3;
		return;
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x5755480", Offset = "0x5754480", VA = "0x5755480")]
	public void Disable()
	{
		// Lifted from source/cpp/Weather/LightningParticle.c (Weather.LightningParticle$$Disable): 3 lines keep C-only constructs
		List<AudioSource> __this_00;
		LineRenderer __this_01;
		bool bVar1;
		GameObject __this_02;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_20;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		__this_00 = this._audioSources;
		if (__this_00 != null) {
			local_48 = __this_00.GetEnumerator();
			local_20 = (byte)&local_48;
			while(true) {
				bVar1 = local_48.MoveNext();
				if (!bVar1) break;
				if ((AudioSource)local_48._current == null) {
					throw new NullReferenceException();
				}
				local_48._current.Stop();
			}
			local_48.Dispose();
			__this_01 = this._lineRenderer;
			if (__this_01 != null) {
				__this_01.SetColors((Color)ZEXT416(0), (Color)ZEXT816(0));
				__this_02 = this.gameObject;
				if (__this_02 != null) {
					__this_02.SetActive(false);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x5755600", Offset = "0x5754600", VA = "0x5755600")]
	public void Enable()
	{
		// Lifted from source/cpp/Weather/LightningParticle.c (Weather.LightningParticle$$Enable): 1 lines keep C-only constructs
		LineRenderer __this_00;
		GameObject __this_01;

		__this_00 = this._lineRenderer;
		if (__this_00 != null) {
			__this_00.SetColors((Color)ZEXT816(0), (Color)ZEXT816(0));
			__this_01 = this.gameObject;
			if (__this_01 != null) {
				__this_01.SetActive(true);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x5755650", Offset = "0x5754650", VA = "0x5755650")]
	public void Strike(bool sound)
	{
		// Lifted from source/cpp/Weather/LightningParticle.c (Weather.LightningParticle$$Strike): clean
		LightningParticle.d__20<StrikeCoroutine> __this_00;

		__this_00 = new LightningParticle.d__20<StrikeCoroutine>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.sound = sound;
		this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x5755730", Offset = "0x5754730", VA = "0x5755730")]
	public void PlayAudio()
	{
		// Lifted from source/cpp/Weather/LightningParticle.c (Weather.LightningParticle$$PlayAudio): clean
		List<AudioSource> __this_00;
		int index;
		AudioSource __this_01;

		this.SetVolume(0.3);
		index = Random.Range(0, 2);
		__this_00 = this._audioSources;
		if (__this_00 != null) {
			__this_01 = __this_00.get_Item(index);
			if (__this_01 != null) {
				__this_01.Play();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x57558F0", Offset = "0x57548F0", VA = "0x57558F0")]
	public void Setup(Vector3 start, Vector3 end, int generation)
	{
		// Lifted from source/cpp/Weather/LightningParticle.c (Weather.LightningParticle$$Setup): 2 lines keep C-only constructs
		LineRenderer pUVar1;
		List<Vector3> __this_00;
		int index;
		uint in_register_00000034;
		MethodInfo method_00;
		Vector3 position;

		method_00 = (MethodInfo)CONCAT44(in_register_00000034, generation);
		__this_00 = LightningParticle.GenerateLightningBoltPositions(start, end, generation, 0.0);
		if ((__this_00 == null) ||(pUVar1 = this._lineRenderer, pUVar1 == null)) {
	label_05855a19: ;
			throw new NullReferenceException();
		}
		index = 0;
		pUVar1.SetVertexCount(__this_00._size);
		if (0 < __this_00._size) {
			do {
				pUVar1 = this._lineRenderer;
				position = __this_00.get_Item(index) ;
				if (pUVar1 == null) goto label_05855a19;
				pUVar1.SetPosition(index, position);
				index = index + 1;
			} while (index < __this_00._size);
		}
		return;
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x57556C0", Offset = "0x57546C0", VA = "0x57556C0")]
	[IteratorStateMachine(typeof(_003CStrikeCoroutine_003Ed__20))]
	private IEnumerator StrikeCoroutine(bool sound)
	{
		// Lifted from source/cpp/Weather/LightningParticle.c (Weather.LightningParticle$$StrikeCoroutine): clean
		LightningParticle.d__20<StrikeCoroutine> __this_00;

		__this_00 = new LightningParticle.d__20<StrikeCoroutine>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.sound = sound;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x57557A0", Offset = "0x57547A0", VA = "0x57557A0")]
	private void SetVolume(float volume)
	{
		// Lifted from source/cpp/Weather/LightningParticle.c (Weather.LightningParticle$$SetVolume): 3 lines keep C-only constructs
		List<AudioSource> __this_00;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o local_38;
		System_Collections_Generic_List_Enumerator_T__o local_18;

		local_38._list = null;
		local_38._index = 0;
		local_38._version = 0;
		local_38._current = null;
		__this_00 = this._audioSources;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_38 = __this_00.GetEnumerator();
		local_18 = &local_38;
		while(true) {
			bVar1 = local_38.MoveNext();
			if (!bVar1) {
				local_38.Dispose();
				return;
			}
			if ((AudioSource)local_38._current == null) break;
			local_38._current.volume = volume;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x5755A40", Offset = "0x5754A40", VA = "0x5755A40")]
	public LightningParticle()
	{
		// Lifted from source/cpp/Weather/LightningParticle.c (Weather.LightningParticle$$.ctor): clean
		List<AudioSource> __this_00;

		this.LightningColor.r = 228.0;
		this.LightningColor.g = 245.0;
		this.LightningColor.b = 255.0;
		this.LightningColor.a = 1.0;
		__this_00 = new List<AudioSource>();
		this._audioSources = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Weather/LightningParticle.c.

	// Weather.LightningParticle$$.cctor: clean
	static LightningParticle()
	{
		Random __this;

		__this = new Random();
		LightningParticle._random = __this;
		return;
	}

	// Weather.LightningParticle.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new LightningParticle.c();
		LightningParticle.c.__9 = (LightningParticle.c)__this;
		return;
	}

	// Weather.LightningParticle.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Weather.LightningParticle.<>c$$<Awake>b__14_0: clean
	private String c__Awake_b__14_0(AudioSource x)
	{
		Object __this_00;
		String pSVar1;

		if (x != null) {
			__this_00 = (Object)x.gameObject;
			if (__this_00 != null) {
				return pSVar1;
			}
		}
		throw new NullReferenceException();
	}
}
