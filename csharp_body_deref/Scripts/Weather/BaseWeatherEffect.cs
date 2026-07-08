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
			[Address(RVA = "0x3C74B40", Offset = "0x3C74B40", VA = "0x3C74B40", Slot = "4")]
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
			[Address(RVA = "0x3C74B90", Offset = "0x3C74B90", VA = "0x3C74B90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600012E")]
		[Address(RVA = "0x3C734D0", Offset = "0x3C734D0", VA = "0x3C734D0")]
		[DebuggerHidden]
		public _003CWaitAndDisable_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600012F")]
		[Address(RVA = "0x3C74A10", Offset = "0x3C74A10", VA = "0x3C74A10", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000130")]
		[Address(RVA = "0x3C74A20", Offset = "0x3C74A20", VA = "0x3C74A20", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000132")]
		[Address(RVA = "0x3C74B50", Offset = "0x3C74B50", VA = "0x3C74B50", Slot = "8")]
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
		[Address(RVA = "0x3C732B0", Offset = "0x3C732B0", VA = "0x3C732B0", Slot = "4")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700001A")]
	protected virtual float _audioFadeTime
	{
		[Token(Token = "0x6000117")]
		[Address(RVA = "0x3C732F0", Offset = "0x3C732F0", VA = "0x3C732F0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x3C73300", Offset = "0x3C73300", VA = "0x3C73300", Slot = "6")]
	public virtual void Disable(bool fadeOut = false)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x3C73480", Offset = "0x3C73480", VA = "0x3C73480", Slot = "7")]
	public virtual void Enable()
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x3C73410", Offset = "0x3C73410", VA = "0x3C73410")]
	[IteratorStateMachine(typeof(_003CWaitAndDisable_003Ed__17))]
	private IEnumerator WaitAndDisable()
	{
		return null;
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x3C734F0", Offset = "0x3C734F0", VA = "0x3C734F0", Slot = "8")]
	public virtual void Randomize()
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x3C73500", Offset = "0x3C73500", VA = "0x3C73500", Slot = "9")]
	public virtual void SetParent(Transform parent)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x3C73510", Offset = "0x3C73510", VA = "0x3C73510", Slot = "10")]
	public virtual void SetLevel(float level)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x3C73520", Offset = "0x3C73520", VA = "0x3C73520", Slot = "11")]
	public virtual void Setup(Transform parent)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x3C73AA0", Offset = "0x3C73AA0", VA = "0x3C73AA0", Slot = "12")]
	protected virtual void SetActiveParticleSystem(int index)
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x3C73B90", Offset = "0x3C73B90", VA = "0x3C73B90", Slot = "13")]
	protected virtual void StopAllParticleSystems()
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x3C73CE0", Offset = "0x3C73CE0", VA = "0x3C73CE0", Slot = "14")]
	protected virtual void SetActiveAudio(int index, float volume)
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x3C73D80", Offset = "0x3C73D80", VA = "0x3C73D80", Slot = "15")]
	protected virtual void SetAudioVolume(int index, float volume)
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x3C73DF0", Offset = "0x3C73DF0", VA = "0x3C73DF0", Slot = "16")]
	protected virtual void SetAudioVolume(AudioSource audio, float volume)
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x3C73F10", Offset = "0x3C73F10", VA = "0x3C73F10", Slot = "17")]
	protected virtual void StopAllAudio(bool fadeOut = false)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x3C74240", Offset = "0x3C74240", VA = "0x3C74240", Slot = "18")]
	protected virtual float ClampParticles(float count)
	{
		return default(float);
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x3C74250", Offset = "0x3C74250", VA = "0x3C74250", Slot = "19")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x3C742A0", Offset = "0x3C742A0", VA = "0x3C742A0", Slot = "20")]
	protected virtual void UpdateAudio()
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x3C746C0", Offset = "0x3C746C0", VA = "0x3C746C0", Slot = "21")]
	protected virtual float GetLerpedVolume(AudioSource audio)
	{
		return default(float);
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x3C747C0", Offset = "0x3C747C0", VA = "0x3C747C0")]
	public BaseWeatherEffect()
	{
	}
}
