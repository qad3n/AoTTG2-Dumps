// ==================== AoTTG2 cross-reference ====================
// Type: Weather.BaseWeatherEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/BaseWeatherEffect.c
// Prior real C# source (older reference): Assets/Scripts/Weather/BaseWeatherEffect.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
				return null;
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
				return null;
			}
		}

		[Token(Token = "0x6000143")]
		[Address(RVA = "0x5752980", Offset = "0x5751980", VA = "0x5752980")]
		[DebuggerHidden]
		public _003CWaitAndDisable_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000144")]
		[Address(RVA = "0x5753CD0", Offset = "0x5752CD0", VA = "0x5753CD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000145")]
		[Address(RVA = "0x5753CE0", Offset = "0x5752CE0", VA = "0x5753CE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000147")]
		[Address(RVA = "0x5753E10", Offset = "0x5752E10", VA = "0x5753E10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
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
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000015")]
	protected virtual float _audioFadeTime
	{
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x57527B0", Offset = "0x57517B0", VA = "0x57527B0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x57527C0", Offset = "0x57517C0", VA = "0x57527C0", Slot = "6")]
	public virtual void Disable(bool fadeOut = false)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x5752930", Offset = "0x5751930", VA = "0x5752930", Slot = "7")]
	public virtual void Enable()
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x57528C0", Offset = "0x57518C0", VA = "0x57528C0")]
	[IteratorStateMachine(typeof(_003CWaitAndDisable_003Ed__17))]
	private IEnumerator WaitAndDisable()
	{
		return null;
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x57529A0", Offset = "0x57519A0", VA = "0x57529A0", Slot = "8")]
	public virtual void Randomize()
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x57529B0", Offset = "0x57519B0", VA = "0x57529B0", Slot = "9")]
	public virtual void SetParent(Transform parent)
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x57529C0", Offset = "0x57519C0", VA = "0x57529C0", Slot = "10")]
	public virtual void SetLevel(float level)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x57529D0", Offset = "0x57519D0", VA = "0x57529D0", Slot = "11")]
	public virtual void Setup(Transform parent)
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x5752F00", Offset = "0x5751F00", VA = "0x5752F00", Slot = "12")]
	protected virtual void SetActiveParticleSystem(int index)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x5752FE0", Offset = "0x5751FE0", VA = "0x5752FE0", Slot = "13")]
	protected virtual void StopAllParticleSystems()
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x5753120", Offset = "0x5752120", VA = "0x5753120", Slot = "14")]
	protected virtual void SetActiveAudio(int index, float volume)
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x57531B0", Offset = "0x57521B0", VA = "0x57531B0", Slot = "15")]
	protected virtual void SetAudioVolume(int index, float volume)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x5753220", Offset = "0x5752220", VA = "0x5753220", Slot = "16")]
	protected virtual void SetAudioVolume(AudioSource audio, float volume)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x5753330", Offset = "0x5752330", VA = "0x5753330", Slot = "17")]
	protected virtual void StopAllAudio(bool fadeOut = false)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x57535F0", Offset = "0x57525F0", VA = "0x57535F0", Slot = "18")]
	protected virtual float ClampParticles(float count)
	{
		return default(float);
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x5753600", Offset = "0x5752600", VA = "0x5753600", Slot = "19")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x5753650", Offset = "0x5752650", VA = "0x5753650", Slot = "20")]
	protected virtual void UpdateAudio()
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x5753980", Offset = "0x5752980", VA = "0x5753980", Slot = "21")]
	protected virtual float GetLerpedVolume(AudioSource audio)
	{
		return default(float);
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x5753A80", Offset = "0x5752A80", VA = "0x5753A80")]
	public BaseWeatherEffect()
	{
	}
}
