// ==================== AoTTG2 cross-reference ====================
// Type: Weather.BaseWeatherEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/BaseWeatherEffect.c
// Prior real C# source (older reference): Assets/Scripts/Weather/BaseWeatherEffect.cs
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

[Token(Token = "0x200002B")]
internal class BaseWeatherEffect : MonoBehaviour
{
	[Token(Token = "0x200002D")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDisable_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000F9")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000FA")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40000FB")]
		[FieldOffset(Offset = "0x20")]
		public BaseWeatherEffect _003C_003E4__this;

		[Token(Token = "0x17000016")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000146")]
			[Address(RVA = "0x5753E00", Offset = "0x5752E00", VA = "0x5753E00", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000017")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000148")]
			[Address(RVA = "0x5753E50", Offset = "0x5752E50", VA = "0x5753E50", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6000143")]
		[Address(RVA = "0x5752980", Offset = "0x5751980", VA = "0x5752980")]
		[DebuggerHidden]
		public _003CWaitAndDisable_003Ed__17(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6000144")]
		[Address(RVA = "0x5753CD0", Offset = "0x5752CD0", VA = "0x5753CD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6000145")]
		[Address(RVA = "0x5753CE0", Offset = "0x5752CE0", VA = "0x5753CE0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$MoveNext): clean
			int iVar1;
			BaseWeatherEffect __this_00;
			GameObject __this_01;
			WaitForSeconds __this_02;
			float seconds;

			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 == 0) {
				this.__1__state = -1;
				if (__this_00 == null) goto label_05853df6;
				__this_00._isDisabling = true;
				__this_00.StopAllAudio(true);
				__this_00.StopAllParticleSystems();
				seconds = __this_00.get__audioFadeTime();
				__this_02 = new WaitForSeconds(seconds);
				this.__2__current = (object)__this_02;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				if (__this_00 != null) {
					__this_01 = __this_00.gameObject;
					if (__this_01 != null) {
						__this_01.SetActive(false);
						__this_00._isDisabling = false;
						goto label_05853de8;
					}
				}
		label_05853df6: ;
				throw new NullReferenceException();
			}
		label_05853de8: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x6000147")]
		[Address(RVA = "0x5753E10", Offset = "0x5752E10", VA = "0x5753E10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect.<WaitAndDisable>d__17$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Weather_BaseWeatherEffect_WaitAndDisable_d__17_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x20")]
	protected Transform _parent;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x28")]
	protected Transform _transform;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x30")]
	public float _level;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x34")]
	protected float _maxParticles;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x38")]
	protected float _particleMultiplier;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x40")]
	protected List<ParticleSystem> _particleSystems;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x48")]
	protected List<AudioSource> _audioSources;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x50")]
	protected Dictionary<AudioSource, float> _audioTargetVolumes;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x58")]
	protected Dictionary<AudioSource, float> _audioStartTimes;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x60")]
	protected Dictionary<AudioSource, float> _audioStartVolumes;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x68")]
	protected bool _isDisabling;

	[Token(Token = "0x17000014")]
	protected virtual Vector3 _positionOffset
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x5752770", Offset = "0x5751770", VA = "0x5752770", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$get__positionOffset): clean
			return (Vector3)(Vector3.zeroVector);
		}
	}

	[Token(Token = "0x17000015")]
	protected virtual float _audioFadeTime
	{
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x57527B0", Offset = "0x57517B0", VA = "0x57527B0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$get__audioFadeTime): clean
			return 2.0;
		}
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x57527C0", Offset = "0x57517C0", VA = "0x57527C0", Slot = "6")]
	public virtual void Disable(bool fadeOut = false)
	{
		// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$Disable): clean
		bool bVar1;
		GameObject pUVar2;
		BaseWeatherEffect.d__17<WaitAndDisable> __this_00;

		pUVar2 = this.gameObject;
		if (pUVar2 == null) {
	label_058528b2: ;
			throw new NullReferenceException();
		}
		bVar1 = pUVar2.activeSelf;
		if (bVar1) {
			if (!fadeOut) {
				this.StopAllCoroutines();
				this.StopAllAudio(false);
				this.StopAllParticleSystems();
				pUVar2 = this.gameObject;
				if (pUVar2 != null) {
					pUVar2.SetActive(false);
					this._isDisabling = false;
					return;
				}
				goto label_058528b2;
			}
			if (this._isDisabling == false) {
				__this_00 = new BaseWeatherEffect.d__17<WaitAndDisable>();
				__this_00.__1__state = 0;
				__this_00.__4__this = this;
				this.StartCoroutine((IEnumerator)__this_00);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x5752930", Offset = "0x5751930", VA = "0x5752930", Slot = "7")]
	public virtual void Enable()
	{
		// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$Enable): clean
		bool bVar1;
		GameObject pUVar2;

		pUVar2 = this.gameObject;
		if (pUVar2 == null) {
	label_05852972: ;
			throw new NullReferenceException();
		}
		bVar1 = pUVar2.activeSelf;
		if (!bVar1) {
			pUVar2 = this.gameObject;
			if (pUVar2 == null) goto label_05852972;
			pUVar2.SetActive(true);
			this._isDisabling = false;
		}
		return;
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x57528C0", Offset = "0x57518C0", VA = "0x57528C0")]
	[IteratorStateMachine(typeof(_003CWaitAndDisable_003Ed__17))]
	private IEnumerator WaitAndDisable()
	{
		// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$WaitAndDisable): clean
		BaseWeatherEffect.d__17<WaitAndDisable> __this_00;

		__this_00 = new BaseWeatherEffect.d__17<WaitAndDisable>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x57529A0", Offset = "0x57519A0", VA = "0x57529A0", Slot = "8")]
	public virtual void Randomize()
	{
		// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$Randomize): clean
		return;
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x57529B0", Offset = "0x57519B0", VA = "0x57529B0", Slot = "9")]
	public virtual void SetParent(Transform parent)
	{
		// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$SetParent): clean
		this._parent = parent;
		return;
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x57529C0", Offset = "0x57519C0", VA = "0x57529C0", Slot = "10")]
	public virtual void SetLevel(float level)
	{
		// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$SetLevel): clean
		this._level = level;
		return;
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x57529D0", Offset = "0x57519D0", VA = "0x57529D0", Slot = "11")]
	public virtual void Setup(Transform parent)
	{
		// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$Setup): 12 lines keep C-only constructs
		GraphicsSettings pSVar1;
		IntSetting pSVar2;
		object pIVar3;
		Transform pUVar4;
		Object[] pSVar5;
		Func<ParticleSystem, string> __this_00;
		System_Linq_IOrderedEnumerable_TSource__o pSVar6;
		List<ParticleSystem> pSVar7;
		Weather_BaseWeatherEffect___c_StaticFields pWVar8;
		Func<AudioSource, string> __this_01;
		List<AudioSource> pSVar9;
		bool bVar10;
		ulong uVar11;
		Vector3 value;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		byte[] local_48 = new byte[16];
		ParticleSystem local_38;

		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		pUVar4 = this.transform;
		this._transform = pUVar4;
		this._parent = parent;
		pSVar1 = SettingsManager.GraphicsSettings;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.WeatherEffects, pSVar2 != null)) {
			bVar10 = pSVar2._value == 3;
			uVar11 = CONCAT44((int)((uint)bVar10 << 0x1f) >> 0x1f, (int)((uint)bVar10 << 0x1f) >> 0x1f);
			uVar11 = uVar11 & (ulong)g_data_010058c0 | ~uVar11 & (ulong)g_data_01006130;
			this._maxParticles = (float)(int)uVar11;
			this._particleMultiplier = (float)(int)(uVar11 >> 0x20);
			pSVar5 = this.GetComponentsInChildren<ParticleSystem>();
			if ((typeof(BaseWeatherEffect.c)._2).cctor_finished_or_no_cctor == 0) {
				pWVar8 = typeof(BaseWeatherEffect.c).static_fields;
				__this_00 = pWVar8.__9__21_0;
			}
			else {
				pWVar8 = typeof(BaseWeatherEffect.c).static_fields;
				__this_00 = pWVar8.__9__21_0;
			}
			if (__this_00 == null) {
				if (((typeof(BaseWeatherEffect.c))._2).cctor_finished_or_no_cctor == 0) {
					pWVar8 = typeof(BaseWeatherEffect.c).static_fields;
				}
				pIVar3 = (object)pWVar8.__9;
				__this_00 = new Func<ParticleSystem, string>(pIVar3, (intptr_t)MethodInfo_Weather_BaseWeatherEffect_c_Setup_b__21_0);
				pWVar8 = typeof(BaseWeatherEffect.c).static_fields;
				pWVar8.__9__21_0 = __this_00;
			}
			pSVar6 = Enumerable.OrderBy<ParticleSystem, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar5, (System_Func_TSource__TKey__o)__this_00) ;
			pSVar7 = (List<ParticleSystem>)Enumerable.ToList<ParticleSystem>((System_Collections_Generic_IEnumerable_TSource__o)pSVar6);
			this._particleSystems = pSVar7;
			pSVar5 = this.GetComponentsInChildren<AudioSource>();
			if ((typeof(BaseWeatherEffect.c)._2).cctor_finished_or_no_cctor == 0) {
				pWVar8 = typeof(BaseWeatherEffect.c).static_fields;
				__this_01 = pWVar8.__9__21_1;
			}
			else {
				pWVar8 = typeof(BaseWeatherEffect.c).static_fields;
				__this_01 = pWVar8.__9__21_1;
			}
			if (__this_01 == null) {
				if (((typeof(BaseWeatherEffect.c))._2).cctor_finished_or_no_cctor == 0) {
					pWVar8 = typeof(BaseWeatherEffect.c).static_fields;
				}
				pIVar3 = (object)pWVar8.__9;
				__this_01 = new Func<AudioSource, string>(pIVar3, (intptr_t)MethodInfo_Weather_BaseWeatherEffect_c_Setup_b__21_1);
				pWVar8 = typeof(BaseWeatherEffect.c).static_fields;
				pWVar8.__9__21_1 = __this_01;
			}
			pSVar6 = Enumerable.OrderBy<AudioSource, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar5, (System_Func_TSource__TKey__o)__this_01);
			pSVar9 = (List<AudioSource>)Enumerable.ToList<AudioSource>((System_Collections_Generic_IEnumerable_TSource__o)pSVar6);
			this._audioSources = pSVar9;
			pSVar7 = this._particleSystems;
			if (pSVar7 != null) {
				local_48.GetEnumerator((List<object>)pSVar7);
				local_48._8_8_ = &local_68;
				local_68._current = (object)local_38;
				local_48._0_8_ = null;
				while(true) {
					bVar10 = local_68.MoveNext();
					pIVar3 = local_68._current;
					if (!bVar10) {
						local_68.Dispose();
						this.StopAllAudio(false);
						return;
					}
					if ((ParticleSystem)local_68._current == null) {
						throw new NullReferenceException();
					}
					local_68._current.Stop();
					pUVar4 = pIVar3.transform;
					value = this.get__positionOffset();
					if (pUVar4 == null) {
						throw new NullReferenceException();
					}
					pUVar4.localPosition = value;
					pUVar4 = pIVar3.transform;
					if (pUVar4 == null) break;
					pUVar4.localRotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x5752F00", Offset = "0x5751F00", VA = "0x5752F00", Slot = "12")]
	protected virtual void SetActiveParticleSystem(int index)
	{
		// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$SetActiveParticleSystem): clean
		bool bVar1;
		ParticleSystem pUVar2;
		int index_00;
		List<ParticleSystem> pSVar3;

		pSVar3 = this._particleSystems;
		if (pSVar3 != null) {
			index_00 = 0;
			do {
				if (pSVar3._size <= index_00) {
					return;
				}
				if (index == index_00) {
					pUVar2 = pSVar3.get_Item(index);
					if (pUVar2 == null) break;
					bVar1 = pUVar2.isPlaying;
					if (!bVar1) {
						pSVar3 = this._particleSystems;
						if (pSVar3 == null) break;
						pUVar2 = pSVar3.get_Item(index);
						if (pUVar2 == null) break;
						pUVar2.Play();
					}
				}
				else {
					pUVar2 = pSVar3.get_Item(index_00);
					if (pUVar2 == null) break;
					pUVar2.Stop();
				}
				index_00 = index_00 + 1;
				pSVar3 = this._particleSystems;
			} while (pSVar3 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x5752FE0", Offset = "0x5751FE0", VA = "0x5752FE0", Slot = "13")]
	protected virtual void StopAllParticleSystems()
	{
		// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$StopAllParticleSystems): 2 lines keep C-only constructs
		List<ParticleSystem> __this_00;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o SStack_38;
		byte puStack_18;

		SStack_38._list = null;
		SStack_38._index = 0;
		SStack_38._version = 0;
		SStack_38._current = null;
		__this_00 = this._particleSystems;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		SStack_38 = __this_00.GetEnumerator();
		puStack_18 = (byte)&SStack_38;
		while(true) {
			bVar1 = SStack_38.MoveNext();
			if (!bVar1) {
				SStack_38.Dispose();
				return;
			}
			if ((ParticleSystem)SStack_38._current == null) break;
			SStack_38._current.Stop();
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x5753120", Offset = "0x5752120", VA = "0x5753120", Slot = "14")]
	protected virtual void SetActiveAudio(int index, float volume)
	{
		// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$SetActiveAudio): clean
		List<AudioSource> pSVar1;
		int iVar2;
		int iVar3;
		float fVar4;

		pSVar1 = this._audioSources;
		if (pSVar1 != null) {
			iVar2 = 0;
			do {
				if (pSVar1._size <= iVar2) {
					return;
				}
				if (index == iVar2) {
					fVar4 = volume;
					iVar3 = index;
				}
				else {
					fVar4 = 0.0;
					iVar3 = iVar2;
				}
				this.SetAudioVolume(iVar3, fVar4);
				iVar2 = iVar2 + 1;
				pSVar1 = this._audioSources;
			} while (pSVar1 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x57531B0", Offset = "0x57521B0", VA = "0x57531B0", Slot = "15")]
	protected virtual void SetAudioVolume(int index, float volume)
	{
		// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$SetAudioVolume): clean
		List<AudioSource> __this_00;
		AudioSource pUVar1;

		__this_00 = this._audioSources;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pUVar1 = __this_00.get_Item(index);
		this.SetAudioVolume(pUVar1, volume);
		return;
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x5753220", Offset = "0x5752220", VA = "0x5753220", Slot = "16")]
	protected virtual void SetAudioVolume(AudioSource audio, float volume)
	{
		// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$SetAudioVolume): clean
		Dictionary<AudioSource, float> pSVar1;
		float fVar2;
		float fVar3;

		pSVar1 = this._audioTargetVolumes;
		if (pSVar1 != null) {
			fVar3 = 1.0;
			if (volume <= 1.0) {
				fVar3 = volume;
			}
			fVar3 = (float)(-(uint)(0.0 <= volume) & (uint)fVar3);
			fVar2 = pSVar1.get_Item((object)audio);
			if ((fVar2 == fVar3) && (!NAN(fVar2) && !NAN(fVar3))) {
				return;
			}
			pSVar1 = this._audioTargetVolumes;
			if (pSVar1 != null) {
				pSVar1.set_Item((object)audio, fVar3);
				pSVar1 = this._audioStartTimes;
				fVar3 = Time.time;
				if (pSVar1 != null) {
					pSVar1.set_Item((object)audio, fVar3);
					if (audio != null) {
						pSVar1 = this._audioStartVolumes;
						fVar3 = audio.volume;
						if (pSVar1 != null) {
							pSVar1.set_Item((object)audio, fVar3);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x5753330", Offset = "0x5752330", VA = "0x5753330", Slot = "17")]
	protected virtual void StopAllAudio(bool fadeOut = false)
	{
		// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$StopAllAudio): 11 lines keep C-only constructs
		List<AudioSource> pSVar1;
		Dictionary<AudioSource, float> pSVar2;
		object key;
		bool bVar3;
		System_Collections_Generic_List_Enumerator_object__o local_58;
		byte[] local_40 = new byte[16];
		AudioSource local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		if (fadeOut) {
			pSVar1 = this._audioSources;
			if (pSVar1 == null) {
	label_05853572: ;
				throw new NullReferenceException();
			}
			local_40.GetEnumerator((List<object>)pSVar1);
			local_58._current = (object)local_30;
			local_58._list = (List<T>)local_40._0_8_;
			local_58._index = local_40._8_4_;
			local_58._version = local_40._12_4_;
			local_40._0_8_ = null;
			local_40._8_8_ = &local_58;
			while(true) {
				bVar3 = local_58.MoveNext();
				if (!bVar3) break;
				this.SetAudioVolume((AudioSource)local_58._current, 0.0);
			}
		}
		else {
			pSVar1 = this._audioSources;
			if (pSVar1 == null) goto label_05853572;
			local_40.GetEnumerator((List<object>)pSVar1);
			local_58._current = (object)local_30;
			local_58._list = (List<T>)local_40._0_8_;
			local_58._index = local_40._8_4_;
			local_58._version = local_40._12_4_;
			local_40._0_8_ = null;
			local_40._8_8_ = &local_58;
			while(true) {
				bVar3 = local_58.MoveNext();
				key = local_58._current;
				if (!bVar3) break;
				if ((AudioSource)local_58._current == null) {
					throw new NullReferenceException();
				}
				local_58._current.Stop();
				pSVar2 = this._audioTargetVolumes;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				pSVar2.set_Item(key, 0.0);
				pSVar2 = this._audioStartTimes;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				pSVar2.set_Item(key, 0.0);
				pSVar2 = this._audioStartVolumes;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				pSVar2.set_Item(key, 0.0);
			}
		}
		local_58.Dispose();
		return;
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x57535F0", Offset = "0x57525F0", VA = "0x57535F0", Slot = "18")]
	protected virtual float ClampParticles(float count)
	{
		// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$ClampParticles): clean
		float fVar1;
		float fVar2;

		fVar2 = count * this._particleMultiplier;
		fVar1 = this._maxParticles;
		if (fVar1 <= fVar2) {
			fVar2 = fVar1;
		}
		return fVar2;
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x5753600", Offset = "0x5752600", VA = "0x5753600", Slot = "19")]
	protected virtual void LateUpdate()
	{
		// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$LateUpdate): clean
		Transform __this_00;
		Transform __this_01;
		Vector3 value;

		__this_00 = this._parent;
		if (__this_00 != null) {
			__this_01 = this._transform;
			value = __this_00.position;
			if (__this_01 != null) {
				__this_01.position = value;
				this.UpdateAudio();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x5753650", Offset = "0x5752650", VA = "0x5753650", Slot = "20")]
	protected virtual void UpdateAudio()
	{
		// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$UpdateAudio): 6 lines keep C-only constructs
		List<AudioSource> __this_00;
		Dictionary<AudioSource, float> pSVar1;
		object __this_01;
		bool bVar2;
		float fVar3;
		float fVar4;
		System_Collections_Generic_List_Enumerator_object__o SStack_68;
		byte[] auStack_48 = new byte[16];
		AudioSource pUStack_38;

		SStack_68._list = null;
		SStack_68._index = 0;
		SStack_68._version = 0;
		SStack_68._current = null;
		__this_00 = this._audioSources;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		auStack_48.GetEnumerator((List<object>)__this_00);
		SStack_68._current = (object)pUStack_38;
		SStack_68._list = (List<T>)auStack_48._0_8_;
		SStack_68._index = auStack_48._8_4_;
		SStack_68._version = auStack_48._12_4_;
		auStack_48._0_8_ = null;
		auStack_48._8_8_ = &SStack_68;
		while(true) {
			while(true) {
				while(true) {
					bVar2 = SStack_68.MoveNext();
					__this_01 = SStack_68._current;
					if (!bVar2) {
						SStack_68.Dispose();
						return;
					}
					pSVar1 = this._audioTargetVolumes;
					if (pSVar1 == null) {
						throw new NullReferenceException();
					}
					fVar3 = pSVar1.get_Item(SStack_68._current);
					if ((fVar3 != 0.0) || (NAN(fVar3))) break;
					if ((AudioSource)__this_01 == null) {
						throw new NullReferenceException();
					}
					bVar2 = __this_01.isPlaying;
					if (bVar2) {
						fVar3 = this.GetLerpedVolume((AudioSource)__this_01);
						__this_01.volume = fVar3;
						fVar3 = __this_01.volume;
						if ((fVar3 == 0.0) && (!NAN(fVar3))) {
							__this_01.Pause();
						}
					}
				}
				if ((AudioSource)__this_01 == null) {
					throw new NullReferenceException();
				}
				bVar2 = __this_01.isPlaying ;
				if (!bVar2) break;
				fVar3 = __this_01.volume;
				pSVar1 = this._audioTargetVolumes;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				fVar4 = pSVar1.get_Item(__this_01);
				if ((fVar3 != fVar4) || (NAN(fVar3) || NAN(fVar4))) {
					fVar3 = this.GetLerpedVolume((AudioSource)__this_01);
					__this_01.volume = fVar3;
				}
			}
			pSVar1 = this._audioStartTimes;
			fVar3 = Time.time;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			pSVar1.set_Item(__this_01, fVar3);
			pSVar1 = this._audioStartVolumes;
			if (pSVar1 == null) break;
			pSVar1.set_Item(__this_01, 0.0);
			fVar3 = this.GetLerpedVolume((AudioSource)__this_01);
			__this_01.volume = fVar3;
			__this_01.Play();
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x5753980", Offset = "0x5752980", VA = "0x5753980", Slot = "21")]
	protected virtual float GetLerpedVolume(AudioSource audio)
	{
		// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$GetLerpedVolume): clean
		Dictionary<AudioSource, float> pSVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;

		fVar2 = Time.time;
		pSVar1 = this._audioStartTimes;
		if (pSVar1 != null) {
			fVar3 = pSVar1.get_Item((object)audio);
			fVar4 = this.get__audioFadeTime();
			pSVar1 = this._audioStartVolumes;
			if (pSVar1 != null) {
				fVar5 = pSVar1.get_Item((object)audio);
				pSVar1 = this._audioTargetVolumes;
				if (pSVar1 != null) {
					fVar4 = (fVar2 - fVar3) / fVar4;
					fVar2 = 1.0;
					if (fVar4 <= 1.0) {
						fVar2 = fVar4;
					}
					fVar2 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar2);
					fVar4 = pSVar1.get_Item((object)audio);
					fVar3 = 0.0;
					if (0.0 <= fVar2) {
						fVar3 = fVar2;
					}
					return (fVar4 - fVar5) * fVar3 + fVar5;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x5753A80", Offset = "0x5752A80", VA = "0x5753A80")]
	public BaseWeatherEffect()
	{
		// Lifted from source/cpp/Weather/BaseWeatherEffect.c (Weather.BaseWeatherEffect$$.ctor): clean
		List<ParticleSystem> __this_00;
		List<AudioSource> __this_01;
		Dictionary<AudioSource, float> pSVar1;

		__this_00 = new List<ParticleSystem>();
		this._particleSystems = __this_00;
		__this_01 = new List<AudioSource>();
		this._audioSources = __this_01;
		pSVar1 = new Dictionary<AudioSource, float>();
		this._audioTargetVolumes = pSVar1;
		pSVar1 = new Dictionary<AudioSource, float>();
		this._audioStartTimes = pSVar1;
		pSVar1 = new Dictionary<AudioSource, float>();
		this._audioStartVolumes = pSVar1;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Weather/BaseWeatherEffect.c.

	// Weather.BaseWeatherEffect.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new BaseWeatherEffect.c();
		BaseWeatherEffect.c.__9 = (BaseWeatherEffect.c)__this;
		return;
	}

	// Weather.BaseWeatherEffect.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Weather.BaseWeatherEffect.<>c$$<Setup>b__21_0: clean
	private String c__Setup_b__21_0(ParticleSystem x)
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

	// Weather.BaseWeatherEffect.<>c$$<Setup>b__21_1: clean
	private String c__Setup_b__21_1(AudioSource x)
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
