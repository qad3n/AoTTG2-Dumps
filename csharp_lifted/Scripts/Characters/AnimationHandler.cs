// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AnimationHandler
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/AnimationHandler.c
// Prior real C# source (older reference): Assets/Scripts/Characters/AnimationHandler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000688")]
internal class AnimationHandler
{
	[Token(Token = "0x4001D4B")]
	[FieldOffset(Offset = "0x10")]
	private Animation Animation;

	[Token(Token = "0x4001D4C")]
	[FieldOffset(Offset = "0x18")]
	private Animator Animator;

	[Token(Token = "0x4001D4D")]
	[FieldOffset(Offset = "0x20")]
	private BaseCharacter Owner;

	[Token(Token = "0x4001D4E")]
	[FieldOffset(Offset = "0x28")]
	private GameObject OwnerObject;

	[Token(Token = "0x4001D4F")]
	[FieldOffset(Offset = "0x30")]
	private Renderer[] Renderers;

	[Token(Token = "0x4001D50")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<string, float> _animationSpeed;

	[Token(Token = "0x4001D51")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<string, float> _speedMultipliers;

	[Token(Token = "0x4001D52")]
	[FieldOffset(Offset = "0x48")]
	private string _currentAnimation;

	[Token(Token = "0x4001D53")]
	[FieldOffset(Offset = "0x50")]
	private float _currentAnimationStartTime;

	[Token(Token = "0x4001D54")]
	[FieldOffset(Offset = "0x54")]
	private bool _isLegacy;

	[Token(Token = "0x4001D55")]
	[FieldOffset(Offset = "0x55")]
	public bool LegacyCrossFadeTiming;

	[Token(Token = "0x4001D56")]
	[FieldOffset(Offset = "0x58")]
	private Dictionary<string, AnimationClip> _animatorClips;

	[Token(Token = "0x4001D57")]
	[FieldOffset(Offset = "0x60")]
	private Dictionary<string, string> _animatorStateNames;

	[Token(Token = "0x4001D58")]
	[FieldOffset(Offset = "0x68")]
	private bool _shadowsEnabled;

	[Token(Token = "0x4001D59")]
	[FieldOffset(Offset = "0x69")]
	private bool _visible;

	[Token(Token = "0x4001D5A")]
	[FieldOffset(Offset = "0x70")]
	private Dictionary<Renderer, bool> _shadowCasters;

	[Token(Token = "0x4001D5B")]
	[FieldOffset(Offset = "0x78")]
	private SkinQuality _skinQuality;

	[Token(Token = "0x4001D5C")]
	[FieldOffset(Offset = "0x7C")]
	private int _renderStateVersion;

	[Token(Token = "0x17000AF9")]
	public int RenderStateVersion
	{
		[Token(Token = "0x6003F3A")]
		[Address(RVA = "0x5AB2680", Offset = "0x5AB1680", VA = "0x5AB2680")]
		get
		{
			// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$get_RenderStateVersion): clean
			return this._renderStateVersion;
		}
	}

	[Token(Token = "0x6003F22")]
	[Address(RVA = "0x5AB0750", Offset = "0x5AAF750", VA = "0x5AB0750")]
	public AnimationHandler(GameObject owner)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$.ctor): 26 lines keep C-only constructs
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		AnimationClip __this_00;
		Dictionary<object, object> pSVar3;
		bool bVar4;
		uint uVar5;
		Dictionary<string, float> pSVar6;
		Dictionary<string, AnimationClip> __this_01;
		Dictionary<string, string> __this_02;
		Dictionary<Renderer, bool> __this_03;
		BaseCharacter pCVar7;
		Animation pUVar8;
		Animator pUVar9;
		VirtualInvokeData pVVar10;
		AnimationState __this_04;
		String pSVar11;
		object pIVar12;
		RuntimeAnimatorController __this_05;
		AnimationClip[] pUVar13;
		String pSVar14;
		ulong uVar15;
		uint uVar16;
		long lVar17;
		float value;
		PlayableGraph UVar18;
		object local_a8;
		Animator* local_a0;
		Dictionary<string, float>* local_98;
		object local_90;
		PlayableGraph local_88;
		AnimationHandler local_70;
		AnimationHandler local_68;
		BaseCharacter* local_60;
		Dictionary<string, AnimationClip>* local_58;
		Dictionary<string, string>* local_50;
		byte local_40;
		object* local_38;

		local_a8 = null;
		local_90 = null;
		local_88.m_Handle = 0;
		local_88.m_Version = 0;
		local_88._12_4_ = 0;
		pSVar6 = new Dictionary<string, float>();
		local_98 = &this._animationSpeed;
		this._animationSpeed = pSVar6;
		pSVar6 = new Dictionary<string, float>();
		this._speedMultipliers = pSVar6;
		this._currentAnimation = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_01 = new Dictionary<string, AnimationClip>() ;
		local_58 = &this._animatorClips;
		this._animatorClips = __this_01;
		__this_02 = new Dictionary<string, string>();
		local_50 = &this._animatorStateNames;
		this._animatorStateNames = __this_02;
		this._shadowsEnabled = true;
		this._visible = true;
		__this_03 = new Dictionary<Renderer, bool>();
		this._shadowCasters = __this_03;
		this._skinQuality = 4;
		base();
		if (owner == null) goto label_05bb0eeb;
		pCVar7 = owner.GetComponent<BaseCharacter>();
		local_60 = &this.Owner;
		this.Owner = pCVar7;
		this.OwnerObject = owner;
		pUVar8 = owner.GetComponent<Animation>();
		local_70 = &this.fields;
		this.Animation = pUVar8;
		pUVar9 = owner.GetComponent<Animator>();
		local_a0 = &this.Animator;
		this.Animator = pUVar9;
		pUVar8 = this.Animation;
		bVar4 = ((Object)pUVar8 != null);
		if (bVar4) {
			this._isLegacy = true;
			pUVar8 = this.Animation;
			if (pUVar8 != null) {
				local_a8 = (object)pUVar8.GetEnumerator();
				local_40 = (byte)&local_a8;
				local_38 = &local_90;
				do {
					pIVar12 = local_a8;
					if (local_a8 == null) {
						throw new NullReferenceException();
					}
					pIVar1 = local_a8.klass;
					uVar15 = (ulong)(pIVar1._2).interface_offsets_count;
					bVar4 = pIVar12.Dispose();
					pIVar12 = local_a8;
					if (!bVar4) {
						pIVar12 = (local_a8 as IDisposable);
						local_90 = pIVar12;
						if (pIVar12 == null) goto label_05bb0e50;
						pIVar1 = pIVar12.klass;
						uVar15 = (ulong)(pIVar1._2).interface_offsets_count;
						if (uVar15 == 0) goto label_05bb0c8f;
						pIVar2 = (pIVar1._1).interfaceOffsets;
						lVar17 = 0;
						goto label_05bb0c80;
					}
					if (local_a8 == null) {
						throw new NullReferenceException();
					}
					pIVar1 = local_a8.klass;
					uVar15 = (ulong)(pIVar1._2).interface_offsets_count;
					__this_04 = (AnimationState)pIVar12.Dispose();
					if (__this_04 == null) {
						throw new NullReferenceException();
					}
					if (__this_04.klass != typeof(AnimationState)) {
						throw new InvalidCastException();
					}
					pSVar6 = *local_98;
					pSVar11 = __this_04.name;
					value = __this_04.speed;
					if (pSVar6 == null) {
						throw new NullReferenceException();
					}
					pSVar6.set_Item((object)pSVar11, value);
				} while(true);
			}
			goto label_05bb0eeb;
		}
		if (((*local_a0 == null) ||(__this_05 = (*local_a0).runtimeAnimatorController, __this_05 == null)) ||(local_68 = this, pUVar13 = __this_05.animationClips, pUVar13 == null)) goto label_05bb0eeb;
		uVar5 = (uint)pUVar13.Length;
		if (0 < (int)uVar5) {
			uVar16 = 0;
			do {
				if (uVar5 <= uVar16) {
					throw new IndexOutOfRangeException();
				}
				__this_00 = pUVar13[(int)uVar16];
				if (__this_00 == null) goto label_05bb0eeb;
				pSVar3 = (Dictionary<object, object>)*local_50;
				pSVar11 = __this_00.name;
				pSVar14 = __this_00.name;
				if ((pSVar14 == null) ||(pSVar14 = pSVar14.Replace(0x2e, 0x5f), pSVar3 == null)) goto label_05bb0eeb;
				pSVar3.set_Item((object)pSVar11, (object)pSVar14);
				pSVar3 = (Dictionary<object, object>)*local_58;
				pSVar11 = __this_00.name;
				if (pSVar3 == null) goto label_05bb0eeb;
				pSVar3.set_Item((object)pSVar11, (object)__this_00);
				pSVar6 = *local_98;
				pSVar11 = __this_00.name;
				if (pSVar6 == null) goto label_05bb0eeb;
				pSVar6.set_Item((object)pSVar11, 1.0) ;
				uVar16 = uVar16 + 1;
				uVar5 = (uint)pUVar13.Length;
			} while ((int)uVar16 < (int)uVar5);
		}
		if (*local_a0 == null) goto label_05bb0eeb;
		UVar18 = (*local_a0).playableGraph;
		local_88.m_Handle = UVar18.m_Handle;
		local_88.m_Version = UVar18.m_Version;
		local_88.SetTimeUpdateMode(1);
		this = local_68;
		goto label_05bb0e50;
		while (true) {
			lVar17 = lVar17 + 0x10;
			if (!(uVar15 * 0x10 != lVar17)) break;
	label_05bb0c80: ;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar17) == typeof(IDisposable)) {
				pVVar10 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar17);
				goto label_05bb0cad;
			}
		}
	label_05bb0c8f: ;
	label_05bb0cad: ;
		pIVar12.Dispose();
	label_05bb0e50: ;
		this.RefreshRenderers();
		pCVar7 = this.Owner;
		bVar4 = ((Object)pCVar7 != null);
		if (bVar4) {
			pCVar7 = *local_60;
			if (pCVar7 == null) goto label_05bb0eeb;
			bVar4 = pCVar7.AlwaysAnimate();
			if (bVar4) {
				if (this._isLegacy == false) {
					if (*local_a0 == null) goto label_05bb0eeb;
					(*local_a0).cullingMode = 0;
				}
				else {
					if (local_70.Animation == null) {
	label_05bb0eeb: ;
						throw new NullReferenceException();
					}
					(local_70.Animation).cullingType = 0;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6003F23")]
	[Address(RVA = "0x5AB0F70", Offset = "0x5AAFF70", VA = "0x5AB0F70")]
	public void RefreshRenderers()
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$RefreshRenderers): 9 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		GameObject __this_00;
		object pIVar3;
		Object[] source;
		Func<Renderer, bool> pSVar4;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		Renderer[] pUVar5;
		Characters_AnimationHandler___c_StaticFields pCVar6;
		Func<Renderer, Renderer> __this_01;
		System_Collections_Generic_Dictionary_TKey__TElement__o pSVar7;
		ulong uVar8;
		ulong uVar9;

		__this_00 = this.OwnerObject;
		if (__this_00 != null) {
			source = __this_00.GetComponentsInChildren<Renderer>(true);
			if ((typeof(AnimationHandler.c)._2).cctor_finished_or_no_cctor == 0) {
				pCVar6 = typeof(AnimationHandler.c).static_fields;
				pSVar4 = pCVar6.__9__19_0;
			}
			else {
				pCVar6 = typeof(AnimationHandler.c).static_fields;
				pSVar4 = pCVar6.__9__19_0;
			}
			if (pSVar4 == null) {
				if (((typeof(AnimationHandler.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar6 = typeof(AnimationHandler.c).static_fields;
				}
				pIVar3 = (object)pCVar6.__9;
				pSVar4 = new Func<Renderer, bool>(pIVar3, (intptr_t)MethodInfo_Characters_AnimationHandler_c_RefreshRenderers_b__19_0);
				pCVar6 = typeof(AnimationHandler.c).static_fields;
				pCVar6.__9__19_0 = pSVar4;
			}
			source_00 = Enumerable.Where<Renderer>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)pSVar4);
			pUVar5 = (Renderer[])Enumerable.ToArray<Renderer>(source_00);
			this.Renderers = pUVar5;
			pUVar5 = this.Renderers;
			if ((typeof(AnimationHandler.c)._2).cctor_finished_or_no_cctor == 0) {
				pCVar6 = typeof(AnimationHandler.c).static_fields;
				__this_01 = pCVar6.__9__19_1;
			}
			else {
				pCVar6 = typeof(AnimationHandler.c).static_fields;
				__this_01 = pCVar6.__9__19_1;
			}
			if (__this_01 == null) {
				if (((typeof(AnimationHandler.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar6 = typeof(AnimationHandler.c).static_fields;
				}
				pIVar3 = (object)pCVar6.__9;
				__this_01 = new Func<Renderer, Renderer>(pIVar3, (intptr_t)MethodInfo_Characters_AnimationHandler_c_RefreshRenderers_b__19_1);
				pCVar6 = typeof(AnimationHandler.c).static_fields;
				pCVar6.__9__19_1 = __this_01;
			}
			pSVar4 = new Func<Renderer, bool>((object)this, (intptr_t)MethodInfo_Characters_AnimationHandler_RefreshRenderers_b__19_2);
			pSVar7 = Enumerable.ToDictionary<Renderer, Renderer, bool>((System_Collections_Generic_IEnumerable_TSource__o)pUVar5, (System_Func_TSource__TKey__o)__this_01, (System_Func_TSource__TElement__o)pSVar4);
			this._shadowCasters = (Dictionary<Renderer, bool>)pSVar7;
			piVar1 = &this._renderStateVersion;
			*piVar1 = *piVar1 + 1;
			pUVar5 = this.Renderers;
			if (pUVar5 != null) {
				if (0 < (int)pUVar5.Length) {
					uVar8 = pUVar5.Length & 0xffffffff;
					uVar9 = 0;
					do {
						if (uVar8 <= uVar9) {
							throw new IndexOutOfRangeException();
						}
						this.ApplyRenderState(pUVar5[uVar9]);
						uVar9 = uVar9 + 1;
						uVar2 = (uint)pUVar5.Length;
						uVar8 = (ulong)uVar2;
					} while ((long)uVar9 < (long)(int)uVar2);
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F24")]
	[Address(RVA = "0x5AB1300", Offset = "0x5AB0300", VA = "0x5AB1300")]
	public void RestoreDefaultShadows(Transform root)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$RestoreDefaultShadows): 4 lines keep C-only constructs
		Renderer __this_00;
		Dictionary<Renderer, bool> __this_01;
		bool bVar1;
		uint uVar2;
		ulong in_RAX;
		Object[] pSVar3;
		uint uVar4;
		ulong uStack_38;

		uStack_38 = in_RAX;
		if (root != null) {
			pSVar3 = root.GetComponentsInChildren<Renderer>(true);
			if (pSVar3 != null) {
				uVar2 = (uint)pSVar3.Length;
				if (0 < (int)uVar2) {
					uVar4 = 0;
					do {
						if (uVar2 <= uVar4) {
							throw new IndexOutOfRangeException();
						}
						__this_00 = (Renderer)pSVar3[(int)uVar4];
						uStack_38 = uStack_38 & 0xffffffffffffff;
						__this_01 = this._shadowCasters;
						if (__this_01 == null) goto label_05bb13f7;
						bVar1 = __this_01.TryGetValue((object)__this_00, (bool)((long)&uStack_38 + 7));
						if (__this_00 == null) goto label_05bb13f7;
						__this_00.shadowCastingMode = (uint)(uStack_38._7_1_ != false || !bVar1);
						uVar4 = uVar4 + 1;
						uVar2 = (uint)pSVar3.Length;
					} while ((int)uVar4 < (int)uVar2);
				}
				return;
			}
		}
	label_05bb13f7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F25")]
	[Address(RVA = "0x5AB1410", Offset = "0x5AB0410", VA = "0x5AB1410")]
	private bool CastsShadows(Renderer renderer, bool fallback = true)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$CastsShadows): clean
		Dictionary<Renderer, bool> __this_00;
		bool bVar1;
		bool bVar2;
		bool bStack_19;

		bStack_19 = false;
		__this_00 = this._shadowCasters;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.TryGetValue((object)renderer, ref bStack_19);
		bVar2 = bStack_19 != false;
		if (!bVar1) {
		}
		return bVar2;
	}

	[Token(Token = "0x6003F26")]
	[Address(RVA = "0x5AB1490", Offset = "0x5AB0490", VA = "0x5AB1490")]
	public string GetCurrentAnimation()
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$GetCurrentAnimation): 4 lines keep C-only constructs
		Animation pUVar1;
		bool bVar4;
		AnimationState __this_00;
		String pSVar6;
		object pIVar7;
		int iVar10;
		object local_58;
		object local_50;
		byte local_40;
		object* local_38;

		local_50 = null;
		if (this._isLegacy != false) {
			pUVar1 = this.Animation;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			local_58 = (object)pUVar1.GetEnumerator();
			local_40 = (byte)&local_58;
			local_38 = &local_50;
			do {
				pIVar7 = local_58;
				if (local_58 == null) {
					throw new NullReferenceException();
				}
				bVar4 = pIVar7.Dispose();
				pIVar7 = local_58;
				if (!bVar4) {
					iVar10 = 6;
					pSVar6 = null;
					goto label_05bb16a7;
				}
				if (local_58 == null) {
					throw new NullReferenceException();
				}
				__this_00 = (AnimationState)pIVar7.Dispose();
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				if (__this_00.klass != typeof(AnimationState)) {
					throw new InvalidCastException();
				}
				pUVar1 = this.Animation;
				pSVar6 = __this_00.name;
				if (pUVar1 == null) {
					throw new NullReferenceException();
				}
				bVar4 = pUVar1.IsPlaying(pSVar6);
			} while (!bVar4);
			pSVar6 = __this_00.name;
			iVar10 = 5;
	label_05bb16a7: ;
			pIVar7 = (local_58 as IDisposable);
			if (pIVar7 != null) {
				local_50 = pIVar7;
				pIVar7.Dispose();
			}
			if (iVar10 == 6) {
				return "";
			}
			if (iVar10 != 0) {
				return pSVar6;
			}
		}
		return this._currentAnimation;
	}

	[Token(Token = "0x6003F27")]
	[Address(RVA = "0x5AB17E0", Offset = "0x5AB07E0", VA = "0x5AB17E0")]
	public float GetLength(string name)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$GetLength): clean
		Animation __this_00;
		Dictionary<object, object> __this_01;
		AnimationState __this_02;
		AnimationClip __this_03;
		float fVar1;

		if (this._isLegacy == false) {
			__this_01 = (Dictionary<object, object>)this._animatorClips;
			if (__this_01 != null) {
				__this_03 = __this_01.get_Item((object)name);
				if (__this_03 != null) {
					return fVar1;
				}
			}
		}
		else {
			__this_00 = this.Animation;
			if (__this_00 != null) {
				__this_02 = __this_00.get_Item(name);
				if (__this_02 != null) {
					return fVar1;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F28")]
	[Address(RVA = "0x5AB1870", Offset = "0x5AB0870", VA = "0x5AB1870")]
	public float GetSpeed(string name)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$GetSpeed): 4 lines keep C-only constructs
		Dictionary<string, float> pSVar1;
		bool bVar2;
		uint in_EAX;
		float fVar3;
		ulong uStack_18;

		uStack_18._0_4_ = in_EAX;
		uStack_18 = (ulong)(uint)uStack_18;
		pSVar1 = this._speedMultipliers;
		if (pSVar1 != null) {
			bVar2 = pSVar1.TryGetValue((object)name, (float)((long)&uStack_18 + 4));
			pSVar1 = this._animationSpeed;
			if (bVar2) {
				if (pSVar1 != null) {
					fVar3 = pSVar1.get_Item((object)name);
					return fVar3 * uStack_18._4_4_;
				}
			}
			else if (pSVar1 != null) {
				fVar3 = pSVar1.get_Item((object)name);
				return fVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F29")]
	[Address(RVA = "0x5AB1920", Offset = "0x5AB0920", VA = "0x5AB1920")]
	public float GetBaseSpeed(string name)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$GetBaseSpeed): clean
		Dictionary<string, float> __this_00;
		float fVar1;

		__this_00 = this._animationSpeed;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar1 = __this_00.get_Item((object)name);
		return fVar1;
	}

	[Token(Token = "0x6003F2A")]
	[Address(RVA = "0x5AB1970", Offset = "0x5AB0970", VA = "0x5AB1970")]
	public float GetTotalTime(string name)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$GetTotalTime): clean
		float fVar1;
		float fVar2;

		fVar1 = this.GetLength(name);
		fVar2 = this.GetSpeed(name);
		return fVar1 / fVar2;
	}

	[Token(Token = "0x6003F2B")]
	[Address(RVA = "0x5AB19B0", Offset = "0x5AB09B0", VA = "0x5AB19B0")]
	public float GetNormalizedTime(string name)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$GetNormalizedTime): 5 lines keep C-only constructs
		Animation __this_00;
		AnimationState __this_01;
		Il2CppClass klass;
		Exception __this_02;
		String message;
		MethodInfo lastManagedFrame;
		float fVar1;

		if (this._isLegacy == false) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_02 = (Exception)il2cpp_codegen_object_new(klass);
			message = il2cpp_codegen_get_runtime_metadata(&"GetNormalizedTime only available for legacy animations.");
			__this_02 = new Exception(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Characters_AnimationHandler_GetNormalizedTime);
			throw (object)__this_02;
		}
		__this_00 = this.Animation;
		if (__this_00 != null) {
			__this_01 = __this_00.get_Item(name);
			if (__this_01 != null) {
				return fVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F2C")]
	[Address(RVA = "0x5AB1A30", Offset = "0x5AB0A30", VA = "0x5AB1A30")]
	public float GetCurrentNormalizedTime()
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$GetCurrentNormalizedTime): clean
		Animation __this_00;
		String name;
		AnimationState __this_01;
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;

		if (this._isLegacy == false) {
			fVar2 = Time.time;
			name = this._currentAnimation;
			fVar1 = this._currentAnimationStartTime;
			fVar3 = this.GetLength(name);
			fVar4 = this.GetSpeed(name);
			return (fVar2 - fVar1) / (fVar3 / fVar4);
		}
		__this_00 = this.Animation;
		if (__this_00 != null) {
			__this_01 = __this_00.get_Item(this._currentAnimation);
			if (__this_01 != null) {
				fVar1 = __this_01.normalizedTime;
				return fVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F2D")]
	[Address(RVA = "0x5AA8860", Offset = "0x5AA7860", VA = "0x5AA8860")]
	public bool IsPlaying(string name)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$IsPlaying): clean
		Animation __this_00;
		bool bVar1;

		if (this._isLegacy == false) {
			bVar1 = (this._currentAnimation == name);
			return bVar1;
		}
		__this_00 = this.Animation;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	[Token(Token = "0x6003F2E")]
	[Address(RVA = "0x5AB1AC0", Offset = "0x5AB0AC0", VA = "0x5AB1AC0")]
	public void Play(string name, float startTime, bool reset = false)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$Play): clean
		Animation pUVar1;
		Dictionary<object, object> __this_00;
		Animator pUVar2;
		AnimationState __this_01;
		String stateName;
		float fVar3;

		if (this._isLegacy == false) {
			__this_00 = (Dictionary<object, object>)this._animatorStateNames;
			if (__this_00 != null) {
				pUVar2 = this.Animator;
				stateName = __this_00.get_Item((object)name);
				if (pUVar2 != null) {
					pUVar2.Play(stateName, 0, startTime);
					pUVar2 = this.Animator;
					fVar3 = this.GetSpeed(name);
					if (pUVar2 != null) {
						pUVar2.speed = fVar3;
						goto label_05bb1baf;
					}
				}
			}
		}
		else {
			pUVar1 = this.Animation;
			if (pUVar1 != null) {
				pUVar1.Play(name);
				if ((startTime <= 0.0) && (!reset)) {
	label_05bb1baf: ;
					this._currentAnimation = name;
					fVar3 = Time.time;
					this._currentAnimationStartTime = fVar3;
					return;
				}
				pUVar1 = this.Animation;
				if (pUVar1 != null) {
					__this_01 = pUVar1.get_Item(name);
					if (__this_01 != null) {
						__this_01.normalizedTime = startTime;
						goto label_05bb1baf;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F2F")]
	[Address(RVA = "0x5AB1BE0", Offset = "0x5AB0BE0", VA = "0x5AB1BE0")]
	public void CrossFade(string name, float fade, float startTime)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$CrossFade): clean
		Animation pUVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		AnimationState __this_00;
		String stateName;
		Animator pUVar4;
		float fVar5;

		if (this._isLegacy != false) {
			pUVar1 = this.Animation;
			if (pUVar1 == null) goto label_05bb1d9f;
			pUVar1.CrossFade(name, fade);
			if (0.0 < startTime) {
				pUVar1 = this.Animation;
				if ((pUVar1 == null) ||(__this_00 = pUVar1.get_Item(name), __this_00 == null)) goto label_05bb1d9f;
				__this_00.normalizedTime = startTime;
			}
			goto label_05bb1d77;
		}
		bVar3 = (this._currentAnimation == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar3) {
			pSVar2 = (Dictionary<object, object>)this._animatorStateNames;
			if (pSVar2 == null) goto label_05bb1d9f;
			pUVar4 = this.Animator;
			stateName = pSVar2.get_Item((object)name);
			if (pUVar4 == null) goto label_05bb1d9f;
	label_05bb1d4a: ;
			pUVar4.CrossFade(stateName, fade, 0, startTime);
		}
		else {
			if (this.LegacyCrossFadeTiming == false) {
				pSVar2 = (Dictionary<object, object>)this._animatorStateNames ;
				if (pSVar2 == null) goto label_05bb1d9f;
				pUVar4 = this.Animator;
				stateName = pSVar2.get_Item((object)name);
				fVar5 = this.GetLength(this._currentAnimation);
				if (pUVar4 == null) goto label_05bb1d9f;
				fade = fade / fVar5;
				goto label_05bb1d4a;
			}
			this.LegacyCrossFade(name, fade, startTime);
		}
		pUVar4 = this.Animator;
		fVar5 = this.GetSpeed(name);
		if (pUVar4 == null) {
	label_05bb1d9f: ;
			throw new NullReferenceException();
		}
		pUVar4.speed = fVar5;
	label_05bb1d77: ;
		this._currentAnimation = name;
		fVar5 = Time.time;
		this._currentAnimationStartTime = fVar5;
		return;
	}

	[Token(Token = "0x6003F30")]
	[Address(RVA = "0x5AB1DB0", Offset = "0x5AB0DB0", VA = "0x5AB1DB0")]
	private void LegacyCrossFade(string name, float fade, float startTime)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$LegacyCrossFade): clean
		Animator __this_00;
		Dictionary<object, object> __this_01;
		String pSVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;

		fVar2 = Time.deltaTime;
		fVar2 = fade - fVar2;
		__this_00 = this.Animator;
		__this_01 = (Dictionary<object, object>)this._animatorStateNames;
		if (fVar2 <= 0.0) {
			if (__this_01 != null) {
				pSVar1 = __this_01.get_Item((object)name);
				if (__this_00 != null) {
					__this_00.Play(pSVar1, 0, startTime);
					return;
				}
			}
		}
		else if (__this_01 != null) {
			pSVar1 = __this_01.get_Item((object)name);
			fVar3 = this.GetSpeed(name);
			fVar4 = this.GetLength(this._currentAnimation);
			fVar5 = Time.deltaTime;
			if (__this_00 != null) {
				__this_00.CrossFade(pSVar1, (fVar3 * fVar2) / fVar4, 0, startTime, -fVar5 / fVar2);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F31")]
	[Address(RVA = "0x5AB1EF0", Offset = "0x5AB0EF0", VA = "0x5AB1EF0")]
	public void SetSpeed(string name, float speed)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$SetSpeed): clean
		Dictionary<string, float> __this_00;

		__this_00 = this._animationSpeed;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.set_Item((object)name, speed);
		this.ApplySpeed(name);
		return;
	}

	[Token(Token = "0x6003F32")]
	[Address(RVA = "0x5AB1FF0", Offset = "0x5AB0FF0", VA = "0x5AB1FF0")]
	public void SetSpeedMultiplier(string name, float multiplier)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$SetSpeedMultiplier): clean
		Dictionary<string, float> __this_00;

		__this_00 = this._speedMultipliers;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.set_Item((object)name, multiplier);
		this.ApplySpeed(name);
		return;
	}

	[Token(Token = "0x6003F33")]
	[Address(RVA = "0x5AB1F60", Offset = "0x5AB0F60", VA = "0x5AB1F60")]
	private void ApplySpeed(string name)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$ApplySpeed): clean
		Animation __this_00;
		Animator __this_01;
		bool bVar1;
		AnimationState __this_02;
		float fVar2;

		if (this._isLegacy == false) {
			bVar1 = (this._currentAnimation == name);
			if (!bVar1) {
				return;
			}
			__this_01 = this.Animator;
			fVar2 = this.GetSpeed(name);
			if (__this_01 != null) {
				__this_01.speed = fVar2;
				return;
			}
		}
		else {
			__this_00 = this.Animation;
			if (__this_00 != null) {
				__this_02 = __this_00.get_Item(name);
				fVar2 = this.GetSpeed(name);
				if (__this_02 != null) {
					__this_02.speed = fVar2;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F34")]
	[Address(RVA = "0x5AB2060", Offset = "0x5AB1060", VA = "0x5AB2060")]
	public void SetSpeedAll(float speed)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$SetSpeedAll): 6 lines keep C-only constructs
		Dictionary<string, float> pSVar1;
		object name;
		bool bVar2;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o source;
		System_Collections_Generic_List_TSource__o __this_00;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		System_Collections_Generic_List_Enumerator_T__o local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		pSVar1 = this._animationSpeed;
		if (pSVar1 != null) {
			source = pSVar1.Keys;
			__this_00 = Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
			if (__this_00 != null) {
				local_58 = __this_00.GetEnumerator();
				local_30 = &local_58;
				while(true) {
					bVar2 = local_58.MoveNext();
					name = local_58._current;
					if (!bVar2) {
						local_58.Dispose();
						return;
					}
					pSVar1 = this._animationSpeed;
					if (pSVar1 == null) break;
					pSVar1.set_Item(name, speed);
					this.ApplySpeed((String)name);
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F35")]
	[Address(RVA = "0x5AB1240", Offset = "0x5AB0240", VA = "0x5AB1240")]
	public void SetCullingType(bool alwaysAnimate)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$SetCullingType): clean
		Animation __this_00;
		Animator __this_01;

		if (this._isLegacy == false) {
			__this_01 = this.Animator;
			if (alwaysAnimate) {
				if (__this_01 != null) {
					__this_01.cullingMode = 0;
					return;
				}
			}
			else if (__this_01 != null) {
				__this_01.cullingMode = 2;
				return;
			}
		}
		else {
			__this_00 = this.Animation;
			if (alwaysAnimate) {
				if (__this_00 != null) {
					__this_00.cullingType = 0;
					return;
				}
			}
			else if (__this_00 != null) {
				__this_00.cullingType = 1;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F36")]
	[Address(RVA = "0x5AB2230", Offset = "0x5AB1230", VA = "0x5AB2230")]
	public void OnDistanceUpdate(float distance)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$OnDistanceUpdate): 10 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		int iVar3;
		BaseCharacter pCVar4;
		Renderer[] pUVar5;
		bool bVar6;
		sbyte cVar7;
		ulong uVar8;
		ulong uVar10;
		float fVar11;

		pCVar4 = this.Owner;
		bVar6 = ((Object)pCVar4 == null);
		if (!bVar6) {
			pCVar4 = this.Owner;
			if (pCVar4 == null) goto label_05bb2512;
			fVar11 = pCVar4.get_CullRendererDistance();
			cVar7 = distance < fVar11;
			if (this._visible != (bool)cVar7) {
				this._visible = (bool)cVar7;
				pCVar4 = this.Owner;
				if (pCVar4 == null) goto label_05bb2512;
				pCVar4.IsVisible = (bool)cVar7;
				piVar1 = &this._renderStateVersion;
				*piVar1 = *piVar1 + 1;
				pUVar5 = this.Renderers;
				if (pUVar5 == null) goto label_05bb2512;
				if (0 < (int)pUVar5.Length) {
					uVar8 = pUVar5.Length & 0xffffffff;
					uVar10 = 0;
					do {
						if (uVar8 <= uVar10) goto label_05bb250d;
						this.ApplyRenderState(pUVar5[uVar10]);
						uVar10 = uVar10 + 1;
						uVar2 = (uint)pUVar5.Length;
						uVar8 = (ulong)uVar2;
					} while ((long)uVar10 < (long)(int)uVar2);
					cVar7 = this._visible;
				}
			}
			if (cVar7 != false) {
				pCVar4 = this.Owner;
				if (pCVar4 != null) {
					fVar11 = pCVar4.get_CullShadowsDistance();
					if (this._shadowsEnabled != distance < fVar11) {
						this._shadowsEnabled = distance < fVar11;
						piVar1 = &this._renderStateVersion;
						*piVar1 = *piVar1 + 1;
						pUVar5 = this.Renderers;
						if (pUVar5 == null) goto label_05bb2512;
						if (0 < (int)pUVar5.Length) {
							uVar8 = pUVar5.Length & 0xffffffff;
							uVar10 = 0;
							do {
								if (uVar8 <= uVar10) goto label_05bb250d;
								this.ApplyRenderState(pUVar5[uVar10]);
								uVar10 = uVar10 + 1;
								uVar2 = (uint)pUVar5.Length;
								uVar8 = (ulong)uVar2;
							} while ((long)uVar10 < (long)(int)uVar2);
						}
					}
					pCVar4 = this.Owner;
					if (pCVar4 != null) {
						fVar11 = pCVar4.get_LODQualityLowDistance();
						if (distance <= fVar11) {
							pCVar4 = this.Owner;
							if (pCVar4 != null) {
								fVar11 = pCVar4.get_LODQualityMediumDistance();
								iVar3 = this._skinQuality;
								if (distance <= fVar11) {
									if (iVar3 == 4) {
										return;
									}
									this._skinQuality = 4;
									piVar1 = &this._renderStateVersion;
									*piVar1 = *piVar1 + 1;
									pUVar5 = this.Renderers;
									if (pUVar5 != null) {
										if ((int)pUVar5.Length < 1) {
											return;
										}
										uVar8 = pUVar5.Length & 0xffffffff;
										uVar10 = 0;
										while (uVar10 < uVar8) {
											this.ApplyRenderState(pUVar5[uVar10]);
											uVar10 = uVar10 + 1;
											uVar2 = (uint)pUVar5.Length;
											uVar8 = (ulong)uVar2;
											if ((long)(int)uVar2 <= (long)uVar10) {
												return;
											}
										}
										goto label_05bb250d;
									}
								}
								else {
									if (iVar3 == 2) {
										return;
									}
									this._skinQuality = 2;
									piVar1 = &this._renderStateVersion;
									*piVar1 = *piVar1 + 1;
									pUVar5 = this.Renderers;
									if (pUVar5 != null) {
										if ((int)pUVar5.Length < 1) {
											return;
										}
										uVar8 = pUVar5.Length & 0xffffffff;
										uVar10 = 0;
										while (uVar10 < uVar8) {
											this.ApplyRenderState(pUVar5[uVar10]);
											uVar10 = uVar10 + 1;
											uVar2 = (uint)pUVar5.Length;
											uVar8 = (ulong)uVar2;
											if ((long)(int)uVar2 <= (long)uVar10) {
												return;
											}
										}
	label_05bb250d: ;
										throw new IndexOutOfRangeException();
									}
								}
							}
						}
						else {
							if (this._skinQuality == 1) {
								return;
							}
							this._skinQuality = 1;
							piVar1 = &this._renderStateVersion;
							*piVar1 = *piVar1 + 1;
							pUVar5 = this.Renderers;
							if (pUVar5 != null) {
								if ((int)pUVar5.Length < 1) {
									return;
								}
								uVar8 = pUVar5.Length & 0xffffffff;
								uVar10 = 0;
								while (uVar10 < uVar8) {
									this.ApplyRenderState(pUVar5[uVar10]);
									uVar10 = uVar10 + 1;
									uVar2 = (uint)pUVar5.Length;
									uVar8 = (ulong)uVar2;
									if ((long)(int)uVar2 <= (long)uVar10) {
										return;
									}
								}
								goto label_05bb250d;
							}
						}
					}
				}
	label_05bb2512: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6003F37")]
	[Address(RVA = "0x5AB2520", Offset = "0x5AB1520", VA = "0x5AB2520")]
	private void SetVisible(bool visible)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$SetVisible): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		BaseCharacter pCVar3;
		Renderer[] pUVar4;
		ulong uVar5;
		ulong uVar6;

		if (this._visible == visible) {
			return;
		}
		this._visible = visible;
		pCVar3 = this.Owner;
		if (pCVar3 != null) {
			pCVar3.IsVisible = visible;
			piVar1 = &this._renderStateVersion;
			*piVar1 = *piVar1 + 1;
			pUVar4 = this.Renderers;
			if (pUVar4 != null) {
				if ((int)pUVar4.Length < 1) {
					return;
				}
				uVar5 = pUVar4.Length & 0xffffffff;
				uVar6 = 0;
				do {
					if (uVar5 <= uVar6) {
						throw new IndexOutOfRangeException();
					}
					this.ApplyRenderState(pUVar4[uVar6]);
					uVar6 = uVar6 + 1;
					uVar2 = (uint)pUVar4.Length;
					uVar5 = (ulong)uVar2;
				} while ((long)uVar6 < (long)(int)uVar2);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003F38")]
	[Address(RVA = "0x5AB2610", Offset = "0x5AB1610", VA = "0x5AB2610")]
	private void SetQuality(SkinQuality quality)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$SetQuality): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Renderer[] pUVar3;
		ulong uVar4;
		ulong uVar5;

		if (this._skinQuality != quality) {
			this._skinQuality = quality;
			piVar1 = &this._renderStateVersion;
			*piVar1 = *piVar1 + 1;
			pUVar3 = this.Renderers;
			if (pUVar3 == null) {
				throw new NullReferenceException();
			}
			if (0 < (int)pUVar3.Length) {
				uVar4 = pUVar3.Length & 0xffffffff;
				uVar5 = 0;
				do {
					if (uVar4 <= uVar5) {
						throw new IndexOutOfRangeException();
					}
					this.ApplyRenderState(pUVar3[uVar5]);
					uVar5 = uVar5 + 1;
					uVar2 = (uint)pUVar3.Length;
					uVar4 = (ulong)uVar2;
				} while ((long)uVar5 < (long)(int)uVar2);
			}
		}
		return;
	}

	[Token(Token = "0x6003F39")]
	[Address(RVA = "0x5AB25A0", Offset = "0x5AB15A0", VA = "0x5AB25A0")]
	private void SetShadows(bool shadows)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$SetShadows): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Renderer[] pUVar3;
		ulong uVar4;
		ulong uVar5;

		if (this._shadowsEnabled != shadows) {
			this._shadowsEnabled = shadows;
			piVar1 = &this._renderStateVersion;
			*piVar1 = *piVar1 + 1;
			pUVar3 = this.Renderers;
			if (pUVar3 == null) {
				throw new NullReferenceException();
			}
			if (0 < (int)pUVar3.Length) {
				uVar4 = pUVar3.Length & 0xffffffff;
				uVar5 = 0;
				do {
					if (uVar4 <= uVar5) {
						throw new IndexOutOfRangeException();
					}
					this.ApplyRenderState(pUVar3[uVar5]);
					uVar5 = uVar5 + 1;
					uVar2 = (uint)pUVar3.Length;
					uVar4 = (ulong)uVar2;
				} while ((long)uVar5 < (long)(int)uVar2);
			}
		}
		return;
	}

	[Token(Token = "0x6003F3B")]
	[Address(RVA = "0x5AB12A0", Offset = "0x5AB02A0", VA = "0x5AB12A0")]
	private void ApplyRenderState()
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$ApplyRenderState): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Renderer[] pUVar3;
		ulong uVar4;
		ulong uVar5;

		piVar1 = &this._renderStateVersion;
		*piVar1 = *piVar1 + 1;
		pUVar3 = this.Renderers;
		if (pUVar3 == null) {
			throw new NullReferenceException();
		}
		if (0 < (int)pUVar3.Length) {
			uVar4 = pUVar3.Length & 0xffffffff;
			uVar5 = 0;
			do {
				if (uVar4 <= uVar5) {
					throw new IndexOutOfRangeException();
				}
				this.ApplyRenderState(pUVar3[uVar5]);
				uVar5 = uVar5 + 1;
				uVar2 = (uint)pUVar3.Length;
				uVar4 = (ulong)uVar2;
			} while ((long)uVar5 < (long)(int)uVar2);
		}
		return;
	}

	[Token(Token = "0x6003F3C")]
	[Address(RVA = "0x5AB2690", Offset = "0x5AB1690", VA = "0x5AB2690")]
	public void ApplyRenderState(Renderer renderer)
	{
		// Lifted from source/cpp/Characters/AnimationHandler.c (Characters.AnimationHandler$$ApplyRenderState): 5 lines keep C-only constructs
		byte bVar1;
		int value;
		Dictionary<Renderer, bool> __this_00;
		bool bVar2;
		bool bVar3;
		int iVar4;
		uint uVar5;
		ulong in_RAX;
		sbyte value_00;
		uint value_01;
		ulong uStack_28;

		uStack_28 = in_RAX;
		bVar2 = ((Object)renderer == null);
		if (!bVar2) {
			if (renderer == null) {
	label_05bb2811: ;
				throw new NullReferenceException();
			}
			bVar2 = this._visible;
			bVar3 = renderer.forceRenderingOff;
			if ((bool)(bVar2 ^ 1U) != bVar3) {
				renderer.forceRenderingOff = bVar2 == false;
			}
			bVar1 = (typeof(SkinnedMeshRenderer)._2).typeHierarchyDepth;
			if ((bVar1 <= (renderer.klass._2).typeHierarchyDepth) &&((renderer.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(SkinnedMeshRenderer))) {
				iVar4 = renderer.quality;
				value = this._skinQuality;
				if (iVar4 != value) {
					renderer.quality = value;
				}
			}
			value_01 = 0;
			bVar2 = renderer.receiveShadows;
			value_00 = this._shadowsEnabled;
			if ((bool)value_00 != bVar2) {
				renderer.receiveShadows = (bool)value_00;
				value_00 = this._shadowsEnabled;
			}
			if (value_00 != false) {
				uStack_28 = uStack_28 & 0xffffffffffffff;
				__this_00 = this._shadowCasters;
				if (__this_00 == null) goto label_05bb2811;
				bVar2 = __this_00.TryGetValue((object)renderer, (bool)((long)&uStack_28 + 7));
				value_01 = (uint)(!bVar2 || uStack_28._7_1_ != false);
			}
			uVar5 = renderer.shadowCastingMode;
			if (uVar5 != value_01) {
				renderer.shadowCastingMode = value_01;
			}
		}
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/AnimationHandler.c.

	// Characters.AnimationHandler$$<RefreshRenderers>b__19_2: 4 lines keep C-only constructs
	private bool RefreshRenderers_b__19_2(Renderer renderer)
	{
		Dictionary<Renderer, bool> __this_00;
		bool bVar1;
		int iVar2;
		ulong in_RAX;
		bool bVar3;
		ulong uStack_28;

		uStack_28 = in_RAX;
		if (renderer != null) {
			iVar2 = renderer.shadowCastingMode;
			uStack_28 = uStack_28 & 0xffffffffffffff;
			__this_00 = this._shadowCasters;
			if (__this_00 != null) {
				bVar1 = __this_00.TryGetValue((object)renderer, (bool)((long)&uStack_28 + 7));
				bVar3 = uStack_28._7_1_ != false;
				if (!bVar1) {
					bVar3 = iVar2 != 0;
				}
				return bVar3;
			}
		}
		throw new NullReferenceException();
	}

	// Characters.AnimationHandler.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AnimationHandler.c();
		AnimationHandler.c.__9 = (AnimationHandler.c)__this;
		return;
	}

	// Characters.AnimationHandler.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Characters.AnimationHandler.<>c$$<RefreshRenderers>b__19_0: 1 lines keep C-only constructs
	private bool c__RefreshRenderers_b__19_0(Renderer renderer)
	{
		byte bVar1;
		byte bVar2;
		Renderer pUVar3;

		if (renderer != null) {
			pUVar3 = renderer.klass;
			bVar1 = (pUVar3._2).typeHierarchyDepth;
			bVar2 = (typeof(SkinnedMeshRenderer)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pUVar3._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(SkinnedMeshRenderer))) {
				return true;
			}
			bVar2 = (typeof(MeshRenderer)._2).typeHierarchyDepth;
			if (bVar2 <= bVar1) {
				return (pUVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(MeshRenderer);
			}
		}
		return false;
	}

	// Characters.AnimationHandler.<>c$$<RefreshRenderers>b__19_1: clean
	private Renderer c__RefreshRenderers_b__19_1(Renderer renderer)
	{
		return renderer;
	}
}
