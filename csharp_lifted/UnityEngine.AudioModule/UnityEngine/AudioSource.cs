// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AudioSource
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;

namespace UnityEngine;

[Token(Token = "0x200000D")]
[UnityEngine.Bindings.StaticAccessor("AudioSourceBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[RequireComponent(typeof(Transform))]
public sealed class AudioSource : AudioBehaviour
{
	[Token(Token = "0x1700000C")]
	public float volume
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x68B0190", Offset = "0x68AF190", VA = "0x68B0190")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x68B0240", Offset = "0x68AF240", VA = "0x68B0240")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public float pitch
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x68B0320", Offset = "0x68AF320", VA = "0x68B0320")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x68B0330", Offset = "0x68AF330", VA = "0x68B0330")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	[UnityEngine.Bindings.NativeProperty("SecPosition")]
	public float time
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x68B0340", Offset = "0x68AF340", VA = "0x68B0340")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x68B03F0", Offset = "0x68AF3F0", VA = "0x68B03F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	[UnityEngine.Bindings.NativeProperty("SamplePosition")]
	public int timeSamples
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x68B04D0", Offset = "0x68AF4D0", VA = "0x68B04D0")]
		[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000010")]
	public AudioClip clip
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x68B0580", Offset = "0x68AF580", VA = "0x68B0580")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	internal Object generatorObject
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x68B0590", Offset = "0x68AF590", VA = "0x68B0590")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public bool isPlaying
	{
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x68B0A30", Offset = "0x68AFA30", VA = "0x68B0A30")]
		[UnityEngine.Bindings.NativeName("IsPlayingScripting")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000013")]
	public bool loop
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x68B0AE0", Offset = "0x68AFAE0", VA = "0x68B0AE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public bool ignoreListenerVolume
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x68B0BA0", Offset = "0x68AFBA0", VA = "0x68B0BA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public bool playOnAwake
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x68B0C60", Offset = "0x68AFC60", VA = "0x68B0C60")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	[UnityEngine.Bindings.NativeProperty("SpatialBlendMix")]
	public float spatialBlend
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x68B0D20", Offset = "0x68AFD20", VA = "0x68B0D20")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public float dopplerLevel
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x68B0E00", Offset = "0x68AFE00", VA = "0x68B0E00")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public bool mute
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x68B0EE0", Offset = "0x68AFEE0", VA = "0x68B0EE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public float minDistance
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x68B0FA0", Offset = "0x68AFFA0", VA = "0x68B0FA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public float maxDistance
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x68B1080", Offset = "0x68B0080", VA = "0x68B1080")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public AudioRolloffMode rolloffMode
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x68B1160", Offset = "0x68B0160", VA = "0x68B1160")]
		set
		{
		}
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x68AFBA0", Offset = "0x68AEBA0", VA = "0x68AFBA0")]
	private static float GetPitch([UnityEngine.Bindings.NotNull] AudioSource source)
	{
		return default(float);
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x68AFC80", Offset = "0x68AEC80", VA = "0x68AFC80")]
	private static void SetPitch([UnityEngine.Bindings.NotNull] AudioSource source, float pitch)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x68AFD80", Offset = "0x68AED80", VA = "0x68AFD80")]
	private static void PlayHelper([UnityEngine.Bindings.NotNull] AudioSource source, ulong delay)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x68AFE70", Offset = "0x68AEE70", VA = "0x68AFE70")]
	private void Play(double delay)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x68AFF50", Offset = "0x68AEF50", VA = "0x68AFF50")]
	private static void PlayOneShotHelper([UnityEngine.Bindings.NotNull] AudioSource source, [UnityEngine.Bindings.NotNull] AudioClip clip, float volumeScale)
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x68B00D0", Offset = "0x68AF0D0", VA = "0x68B00D0")]
	private void Stop(bool stopOneShots)
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x68B06A0", Offset = "0x68AF6A0", VA = "0x68B06A0")]
	[ExcludeFromDocs]
	public void Play()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x68B06B0", Offset = "0x68AF6B0", VA = "0x68B06B0")]
	public void PlayDelayed(float delay)
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x68B0780", Offset = "0x68AF780", VA = "0x68B0780")]
	[ExcludeFromDocs]
	public void PlayOneShot(AudioClip clip)
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x68B0790", Offset = "0x68AF790", VA = "0x68B0790")]
	public void PlayOneShot(AudioClip clip, [DefaultValue("1.0F")] float volumeScale)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x68B0850", Offset = "0x68AF850", VA = "0x68B0850")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x68B08D0", Offset = "0x68AF8D0", VA = "0x68B08D0")]
	public void Pause()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x68B0980", Offset = "0x68AF980", VA = "0x68B0980")]
	public void UnPause()
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x68B1220", Offset = "0x68B0220", VA = "0x68B1220")]
	public AudioSource()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x68AFC50", Offset = "0x68AEC50", VA = "0x68AFC50")]
	private static extern float GetPitch_Injected(IntPtr source);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x68AFD30", Offset = "0x68AED30", VA = "0x68AFD30")]
	private static extern void SetPitch_Injected(IntPtr source, float pitch);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x68AFE30", Offset = "0x68AEE30", VA = "0x68AFE30")]
	private static extern void PlayHelper_Injected(IntPtr source, ulong delay);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x68AFF00", Offset = "0x68AEF00", VA = "0x68AFF00")]
	private static extern void Play_Injected(IntPtr _unity_self, double delay);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x68B0080", Offset = "0x68AF080", VA = "0x68B0080")]
	private static extern void PlayOneShotHelper_Injected(IntPtr source, IntPtr clip, float volumeScale);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005B")]
	[Address(RVA = "0x68B0150", Offset = "0x68AF150", VA = "0x68B0150")]
	private static extern void Stop_Injected(IntPtr _unity_self, bool stopOneShots);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005C")]
	[Address(RVA = "0x68B0210", Offset = "0x68AF210", VA = "0x68B0210")]
	private static extern float get_volume_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x68B02D0", Offset = "0x68AF2D0", VA = "0x68B02D0")]
	private static extern void set_volume_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x68B03C0", Offset = "0x68AF3C0", VA = "0x68B03C0")]
	private static extern float get_time_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x68B0480", Offset = "0x68AF480", VA = "0x68B0480")]
	private static extern void set_time_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000060")]
	[Address(RVA = "0x68B0550", Offset = "0x68AF550", VA = "0x68B0550")]
	private static extern int get_timeSamples_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000061")]
	[Address(RVA = "0x68B0660", Offset = "0x68AF660", VA = "0x68B0660")]
	private static extern void set_generatorObject_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x68B0950", Offset = "0x68AF950", VA = "0x68B0950")]
	private static extern void Pause_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000063")]
	[Address(RVA = "0x68B0A00", Offset = "0x68AFA00", VA = "0x68B0A00")]
	private static extern void UnPause_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000064")]
	[Address(RVA = "0x68B0AB0", Offset = "0x68AFAB0", VA = "0x68B0AB0")]
	private static extern bool get_isPlaying_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x68B0B60", Offset = "0x68AFB60", VA = "0x68B0B60")]
	private static extern void set_loop_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000066")]
	[Address(RVA = "0x68B0C20", Offset = "0x68AFC20", VA = "0x68B0C20")]
	private static extern void set_ignoreListenerVolume_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000067")]
	[Address(RVA = "0x68B0CE0", Offset = "0x68AFCE0", VA = "0x68B0CE0")]
	private static extern void set_playOnAwake_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000068")]
	[Address(RVA = "0x68B0DB0", Offset = "0x68AFDB0", VA = "0x68B0DB0")]
	private static extern void set_spatialBlend_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000069")]
	[Address(RVA = "0x68B0E90", Offset = "0x68AFE90", VA = "0x68B0E90")]
	private static extern void set_dopplerLevel_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006A")]
	[Address(RVA = "0x68B0F60", Offset = "0x68AFF60", VA = "0x68B0F60")]
	private static extern void set_mute_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006B")]
	[Address(RVA = "0x68B1030", Offset = "0x68B0030", VA = "0x68B1030")]
	private static extern void set_minDistance_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006C")]
	[Address(RVA = "0x68B1110", Offset = "0x68B0110", VA = "0x68B1110")]
	private static extern void set_maxDistance_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006D")]
	[Address(RVA = "0x68B11E0", Offset = "0x68B01E0", VA = "0x68B11E0")]
	private static extern void set_rolloffMode_Injected(IntPtr _unity_self, AudioRolloffMode value);
}
