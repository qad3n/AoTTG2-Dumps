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
		[Token(Token = "0x40000E7")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000E8")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40000E9")]
		[FieldOffset(Offset = "0x20")]
		public BaseWeatherEffect _003C_003E4__this;

		[Token(Token = "0x1700001B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000131")]
			[Address(RVA = "0x3F6A490", Offset = "0x3F6A490", VA = "0x3F6A490", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700001C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000133")]
			[Address(RVA = "0x3F6A4E0", Offset = "0x3F6A4E0", VA = "0x3F6A4E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600012E")]
		[Address(RVA = "0x3F68E20", Offset = "0x3F68E20", VA = "0x3F68E20")]
		[DebuggerHidden]
		public _003CWaitAndDisable_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600012F")]
		[Address(RVA = "0x3F6A360", Offset = "0x3F6A360", VA = "0x3F6A360", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000130")]
		[Address(RVA = "0x3F6A370", Offset = "0x3F6A370", VA = "0x3F6A370", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000132")]
		[Address(RVA = "0x3F6A4A0", Offset = "0x3F6A4A0", VA = "0x3F6A4A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x20")]
	protected Transform _parent;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x28")]
	protected Transform _transform;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x30")]
	public float _level;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x34")]
	protected float _maxParticles;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x38")]
	protected float _particleMultiplier;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x40")]
	protected List<ParticleSystem> _particleSystems;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x48")]
	protected List<AudioSource> _audioSources;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x50")]
	protected Dictionary<AudioSource, float> _audioTargetVolumes;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x58")]
	protected Dictionary<AudioSource, float> _audioStartTimes;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x60")]
	protected Dictionary<AudioSource, float> _audioStartVolumes;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x68")]
	protected bool _isDisabling;

	[Token(Token = "0x17000019")]
	protected virtual Vector3 _positionOffset
	{
		[Token(Token = "0x6000116")]
		[Address(RVA = "0x3F68C00", Offset = "0x3F68C00", VA = "0x3F68C00", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700001A")]
	protected virtual float _audioFadeTime
	{
		[Token(Token = "0x6000117")]
		[Address(RVA = "0x3F68C40", Offset = "0x3F68C40", VA = "0x3F68C40", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x3F68C50", Offset = "0x3F68C50", VA = "0x3F68C50", Slot = "6")]
	public virtual void Disable(bool fadeOut = false)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x3F68DD0", Offset = "0x3F68DD0", VA = "0x3F68DD0", Slot = "7")]
	public virtual void Enable()
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x3F68D60", Offset = "0x3F68D60", VA = "0x3F68D60")]
	[IteratorStateMachine(typeof(_003CWaitAndDisable_003Ed__17))]
	private IEnumerator WaitAndDisable()
	{
		return null;
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x3F68E40", Offset = "0x3F68E40", VA = "0x3F68E40", Slot = "8")]
	public virtual void Randomize()
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x3F68E50", Offset = "0x3F68E50", VA = "0x3F68E50", Slot = "9")]
	public virtual void SetParent(Transform parent)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x3F68E60", Offset = "0x3F68E60", VA = "0x3F68E60", Slot = "10")]
	public virtual void SetLevel(float level)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x3F68E70", Offset = "0x3F68E70", VA = "0x3F68E70", Slot = "11")]
	public virtual void Setup(Transform parent)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x3F693F0", Offset = "0x3F693F0", VA = "0x3F693F0", Slot = "12")]
	protected virtual void SetActiveParticleSystem(int index)
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x3F694E0", Offset = "0x3F694E0", VA = "0x3F694E0", Slot = "13")]
	protected virtual void StopAllParticleSystems()
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x3F69630", Offset = "0x3F69630", VA = "0x3F69630", Slot = "14")]
	protected virtual void SetActiveAudio(int index, float volume)
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x3F696D0", Offset = "0x3F696D0", VA = "0x3F696D0", Slot = "15")]
	protected virtual void SetAudioVolume(int index, float volume)
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x3F69740", Offset = "0x3F69740", VA = "0x3F69740", Slot = "16")]
	protected virtual void SetAudioVolume(AudioSource audio, float volume)
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x3F69860", Offset = "0x3F69860", VA = "0x3F69860", Slot = "17")]
	protected virtual void StopAllAudio(bool fadeOut = false)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x3F69B90", Offset = "0x3F69B90", VA = "0x3F69B90", Slot = "18")]
	protected virtual float ClampParticles(float count)
	{
		return default(float);
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x3F69BA0", Offset = "0x3F69BA0", VA = "0x3F69BA0", Slot = "19")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x3F69BF0", Offset = "0x3F69BF0", VA = "0x3F69BF0", Slot = "20")]
	protected virtual void UpdateAudio()
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x3F6A010", Offset = "0x3F6A010", VA = "0x3F6A010", Slot = "21")]
	protected virtual float GetLerpedVolume(AudioSource audio)
	{
		return default(float);
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x3F6A110", Offset = "0x3F6A110", VA = "0x3F6A110")]
	public BaseWeatherEffect()
	{
	}
}
