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

[Token(Token = "0x200002C")]
internal class BaseWeatherEffect : MonoBehaviour
{
	[Token(Token = "0x200002E")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDisable_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000F2")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000F3")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40000F4")]
		[FieldOffset(Offset = "0x20")]
		public BaseWeatherEffect _003C_003E4__this;

		[Token(Token = "0x1700001D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000141")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700001E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000143")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600013E")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndDisable_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600013F")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000140")]
		[Address(RVA = "0x1DB1500", Offset = "0x1DAFB00", VA = "0x181DB1500", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000142")]
		[Address(RVA = "0x1DB1620", Offset = "0x1DAFC20", VA = "0x181DB1620", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x20")]
	protected Transform _parent;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x28")]
	protected Transform _transform;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x30")]
	public float _level;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x34")]
	protected float _maxParticles;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x38")]
	protected float _particleMultiplier;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x40")]
	protected List<ParticleSystem> _particleSystems;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x48")]
	protected List<AudioSource> _audioSources;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x50")]
	protected Dictionary<AudioSource, float> _audioTargetVolumes;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x58")]
	protected Dictionary<AudioSource, float> _audioStartTimes;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x60")]
	protected Dictionary<AudioSource, float> _audioStartVolumes;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x68")]
	protected bool _isDisabling;

	[Token(Token = "0x1700001B")]
	protected virtual Vector3 _positionOffset
	{
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x528050", Offset = "0x526650", VA = "0x180528050", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700001C")]
	protected virtual float _audioFadeTime
	{
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x1D9F790", Offset = "0x1D9DD90", VA = "0x181D9F790", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x1D9E3D0", Offset = "0x1D9C9D0", VA = "0x181D9E3D0", Slot = "6")]
	public virtual void Disable(bool fadeOut = false)
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x1D9E4E0", Offset = "0x1D9CAE0", VA = "0x181D9E4E0", Slot = "7")]
	public virtual void Enable()
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x1D9F5C0", Offset = "0x1D9DBC0", VA = "0x181D9F5C0")]
	[IteratorStateMachine(typeof(_003CWaitAndDisable_003Ed__17))]
	private IEnumerator WaitAndDisable()
	{
		return null;
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public virtual void Randomize()
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0", Slot = "9")]
	public virtual void SetParent(Transform parent)
	{
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x584CB0", Offset = "0x5832B0", VA = "0x180584CB0", Slot = "10")]
	public virtual void SetLevel(float level)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x1D9EA30", Offset = "0x1D9D030", VA = "0x181D9EA30", Slot = "11")]
	public virtual void Setup(Transform parent)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x1D9E770", Offset = "0x1D9CD70", VA = "0x181D9E770", Slot = "12")]
	protected virtual void SetActiveParticleSystem(int index)
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x1D9F1D0", Offset = "0x1D9D7D0", VA = "0x181D9F1D0", Slot = "13")]
	protected virtual void StopAllParticleSystems()
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x1D9E6D0", Offset = "0x1D9CCD0", VA = "0x181D9E6D0", Slot = "14")]
	protected virtual void SetActiveAudio(int index, float volume)
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x1D9E870", Offset = "0x1D9CE70", VA = "0x181D9E870", Slot = "15")]
	protected virtual void SetAudioVolume(int index, float volume)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x1D9E8F0", Offset = "0x1D9CEF0", VA = "0x181D9E8F0", Slot = "16")]
	protected virtual void SetAudioVolume(AudioSource audio, float volume)
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x1D9EF60", Offset = "0x1D9D560", VA = "0x181D9EF60", Slot = "17")]
	protected virtual void StopAllAudio(bool fadeOut = false)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x1D9E3C0", Offset = "0x1D9C9C0", VA = "0x181D9E3C0", Slot = "18")]
	protected virtual float ClampParticles(float count)
	{
		return default(float);
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x1D9E650", Offset = "0x1D9CC50", VA = "0x181D9E650", Slot = "19")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x1D9F2E0", Offset = "0x1D9D8E0", VA = "0x181D9F2E0", Slot = "20")]
	protected virtual void UpdateAudio()
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x1D9E530", Offset = "0x1D9CB30", VA = "0x181D9E530", Slot = "21")]
	protected virtual float GetLerpedVolume(AudioSource audio)
	{
		return default(float);
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x1D9F630", Offset = "0x1D9DC30", VA = "0x181D9F630")]
	public BaseWeatherEffect()
	{
	}
}
