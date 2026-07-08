using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;

namespace UnityEngine;

[Token(Token = "0x200000A")]
[UnityEngine.Bindings.StaticAccessor("AudioSourceBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[RequireComponent(typeof(Transform))]
public sealed class AudioSource : AudioBehaviour
{
	[Token(Token = "0x17000008")]
	public float volume
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4A82400", Offset = "0x4A82400", VA = "0x4A82400")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4A824D0", Offset = "0x4A824D0", VA = "0x4A824D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public float pitch
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x4A825D0", Offset = "0x4A825D0", VA = "0x4A825D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x4A825E0", Offset = "0x4A825E0", VA = "0x4A825E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	[UnityEngine.Bindings.NativeProperty("SecPosition")]
	public float time
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x4A825F0", Offset = "0x4A825F0", VA = "0x4A825F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x4A826C0", Offset = "0x4A826C0", VA = "0x4A826C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	[UnityEngine.Bindings.NativeProperty("SamplePosition")]
	public int timeSamples
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x4A827C0", Offset = "0x4A827C0", VA = "0x4A827C0")]
		[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000C")]
	[UnityEngine.Bindings.NativeProperty("AudioClip")]
	public AudioClip clip
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x4A82890", Offset = "0x4A82890", VA = "0x4A82890")]
		get
		{
			return null;
		}
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x4A82960", Offset = "0x4A82960", VA = "0x4A82960")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public bool isPlaying
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x4A82E90", Offset = "0x4A82E90", VA = "0x4A82E90")]
		[UnityEngine.Bindings.NativeName("IsPlayingScripting")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000E")]
	public bool loop
	{
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x4A82F60", Offset = "0x4A82F60", VA = "0x4A82F60")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool ignoreListenerVolume
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x4A83040", Offset = "0x4A83040", VA = "0x4A83040")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public bool playOnAwake
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x4A83120", Offset = "0x4A83120", VA = "0x4A83120")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	[UnityEngine.Bindings.NativeProperty("SpatialBlendMix")]
	public float spatialBlend
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x4A83200", Offset = "0x4A83200", VA = "0x4A83200")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public bool mute
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x4A83300", Offset = "0x4A83300", VA = "0x4A83300")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public float minDistance
	{
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x4A833E0", Offset = "0x4A833E0", VA = "0x4A833E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public float maxDistance
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x4A834E0", Offset = "0x4A834E0", VA = "0x4A834E0")]
		set
		{
		}
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4A81D20", Offset = "0x4A81D20", VA = "0x4A81D20")]
	private static float GetPitch([UnityEngine.Bindings.NotNull("ArgumentNullException")] AudioSource source)
	{
		return default(float);
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4A81E20", Offset = "0x4A81E20", VA = "0x4A81E20")]
	private static void SetPitch([UnityEngine.Bindings.NotNull("ArgumentNullException")] AudioSource source, float pitch)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4A81F60", Offset = "0x4A81F60", VA = "0x4A81F60")]
	private static void PlayHelper([UnityEngine.Bindings.NotNull("ArgumentNullException")] AudioSource source, ulong delay)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4A82080", Offset = "0x4A82080", VA = "0x4A82080")]
	private void Play(double delay)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4A82180", Offset = "0x4A82180", VA = "0x4A82180")]
	private static void PlayOneShotHelper([UnityEngine.Bindings.NotNull("ArgumentNullException")] AudioSource source, [UnityEngine.Bindings.NotNull("NullExceptionObject")] AudioClip clip, float volumeScale)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4A82320", Offset = "0x4A82320", VA = "0x4A82320")]
	private void Stop(bool stopOneShots)
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4A82AA0", Offset = "0x4A82AA0", VA = "0x4A82AA0")]
	[ExcludeFromDocs]
	public void Play()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4A82AB0", Offset = "0x4A82AB0", VA = "0x4A82AB0")]
	public void PlayDelayed(float delay)
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4A82B80", Offset = "0x4A82B80", VA = "0x4A82B80")]
	[ExcludeFromDocs]
	public void PlayOneShot(AudioClip clip)
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4A82B90", Offset = "0x4A82B90", VA = "0x4A82B90")]
	public void PlayOneShot(AudioClip clip, [DefaultValue("1.0F")] float volumeScale)
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4A82C50", Offset = "0x4A82C50", VA = "0x4A82C50")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4A82CF0", Offset = "0x4A82CF0", VA = "0x4A82CF0")]
	public void Pause()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4A82DC0", Offset = "0x4A82DC0", VA = "0x4A82DC0")]
	public void UnPause()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4A81DF0", Offset = "0x4A81DF0", VA = "0x4A81DF0")]
	private static extern float GetPitch_Injected(IntPtr source);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4A81F10", Offset = "0x4A81F10", VA = "0x4A81F10")]
	private static extern void SetPitch_Injected(IntPtr source, float pitch);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4A82040", Offset = "0x4A82040", VA = "0x4A82040")]
	private static extern void PlayHelper_Injected(IntPtr source, ulong delay);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4A82130", Offset = "0x4A82130", VA = "0x4A82130")]
	private static extern void Play_Injected(IntPtr _unity_self, double delay);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4A822D0", Offset = "0x4A822D0", VA = "0x4A822D0")]
	private static extern void PlayOneShotHelper_Injected(IntPtr source, IntPtr clip, float volumeScale);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4A823C0", Offset = "0x4A823C0", VA = "0x4A823C0")]
	private static extern void Stop_Injected(IntPtr _unity_self, bool stopOneShots);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4A824A0", Offset = "0x4A824A0", VA = "0x4A824A0")]
	private static extern float get_volume_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4A82580", Offset = "0x4A82580", VA = "0x4A82580")]
	private static extern void set_volume_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4A82690", Offset = "0x4A82690", VA = "0x4A82690")]
	private static extern float get_time_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4A82770", Offset = "0x4A82770", VA = "0x4A82770")]
	private static extern void set_time_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4A82860", Offset = "0x4A82860", VA = "0x4A82860")]
	private static extern int get_timeSamples_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4A82930", Offset = "0x4A82930", VA = "0x4A82930")]
	private static extern AudioClip get_clip_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4A82A60", Offset = "0x4A82A60", VA = "0x4A82A60")]
	private static extern void set_clip_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4A82D90", Offset = "0x4A82D90", VA = "0x4A82D90")]
	private static extern void Pause_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4A82E60", Offset = "0x4A82E60", VA = "0x4A82E60")]
	private static extern void UnPause_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4A82F30", Offset = "0x4A82F30", VA = "0x4A82F30")]
	private static extern bool get_isPlaying_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005B")]
	[Address(RVA = "0x4A83000", Offset = "0x4A83000", VA = "0x4A83000")]
	private static extern void set_loop_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4A830E0", Offset = "0x4A830E0", VA = "0x4A830E0")]
	private static extern void set_ignoreListenerVolume_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x4A831C0", Offset = "0x4A831C0", VA = "0x4A831C0")]
	private static extern void set_playOnAwake_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4A832B0", Offset = "0x4A832B0", VA = "0x4A832B0")]
	private static extern void set_spatialBlend_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4A833A0", Offset = "0x4A833A0", VA = "0x4A833A0")]
	private static extern void set_mute_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4A83490", Offset = "0x4A83490", VA = "0x4A83490")]
	private static extern void set_minDistance_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4A83590", Offset = "0x4A83590", VA = "0x4A83590")]
	private static extern void set_maxDistance_Injected(IntPtr _unity_self, float value);
}
