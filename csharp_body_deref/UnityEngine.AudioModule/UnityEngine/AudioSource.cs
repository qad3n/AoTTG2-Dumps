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

[Token(Token = "0x200000C")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.StaticAccessor("AudioSourceBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public sealed class AudioSource : AudioBehaviour
{
	[Token(Token = "0x1700000B")]
	public float volume
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x2EB4C60", Offset = "0x2EB3260", VA = "0x182EB4C60")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x2EB56F0", Offset = "0x2EB3CF0", VA = "0x182EB56F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public float pitch
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x2EB3BD0", Offset = "0x2EB21D0", VA = "0x182EB3BD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x2EB4560", Offset = "0x2EB2B60", VA = "0x182EB4560")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	[UnityEngine.Bindings.NativeProperty("SecPosition")]
	public float time
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x2EB4BA0", Offset = "0x2EB31A0", VA = "0x182EB4BA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x2EB5610", Offset = "0x2EB3C10", VA = "0x182EB5610")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	[UnityEngine.Bindings.NativeProperty("SamplePosition")]
	public int timeSamples
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x2EB4AE0", Offset = "0x2EB30E0", VA = "0x182EB4AE0")]
		[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000F")]
	public AudioClip clip
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x2EB4830", Offset = "0x2EB2E30", VA = "0x182EB4830")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x2EB4CE0", Offset = "0x2EB32E0", VA = "0x182EB4CE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	internal Object generatorObject
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x2EB4940", Offset = "0x2EB2F40", VA = "0x182EB4940")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x2EB4CE0", Offset = "0x2EB32E0", VA = "0x182EB4CE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public bool isPlaying
	{
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x2EB4A20", Offset = "0x2EB3020", VA = "0x182EB4A20")]
		[UnityEngine.Bindings.NativeName("IsPlayingScripting")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000012")]
	public bool loop
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x2EB5000", Offset = "0x2EB3600", VA = "0x182EB5000")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public bool ignoreListenerVolume
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x2EB4F20", Offset = "0x2EB3520", VA = "0x182EB4F20")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public bool playOnAwake
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x2EB5380", Offset = "0x2EB3980", VA = "0x182EB5380")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	[UnityEngine.Bindings.NativeProperty("SpatialBlendMix")]
	public float spatialBlend
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x2EB5530", Offset = "0x2EB3B30", VA = "0x182EB5530")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public float dopplerLevel
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x2EB4DF0", Offset = "0x2EB33F0", VA = "0x182EB4DF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public bool mute
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x2EB52A0", Offset = "0x2EB38A0", VA = "0x182EB52A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public float minDistance
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x2EB51C0", Offset = "0x2EB37C0", VA = "0x182EB51C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public float maxDistance
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x2EB50E0", Offset = "0x2EB36E0", VA = "0x182EB50E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public AudioRolloffMode rolloffMode
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x2EB5450", Offset = "0x2EB3A50", VA = "0x182EB5450")]
		set
		{
		}
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x2EB3BD0", Offset = "0x2EB21D0", VA = "0x182EB3BD0")]
	private static float GetPitch([UnityEngine.Bindings.NotNull] AudioSource source)
	{
		return default(float);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x2EB4560", Offset = "0x2EB2B60", VA = "0x182EB4560")]
	private static void SetPitch([UnityEngine.Bindings.NotNull] AudioSource source, float pitch)
	{
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x2EB3E20", Offset = "0x2EB2420", VA = "0x182EB3E20")]
	private static void PlayHelper([UnityEngine.Bindings.NotNull] AudioSource source, ulong delay)
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x2EB43E0", Offset = "0x2EB29E0", VA = "0x182EB43E0")]
	private void Play(double delay)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x2EB3F30", Offset = "0x2EB2530", VA = "0x182EB3F30")]
	private static void PlayOneShotHelper([UnityEngine.Bindings.NotNull] AudioSource source, [UnityEngine.Bindings.NotNull] AudioClip clip, float volumeScale)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x2EB46E0", Offset = "0x2EB2CE0", VA = "0x182EB46E0")]
	private void Stop(bool stopOneShots)
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x2EB4470", Offset = "0x2EB2A70", VA = "0x182EB4470")]
	[ExcludeFromDocs]
	public void Play()
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x2EB3D30", Offset = "0x2EB2330", VA = "0x182EB3D30")]
	public void PlayDelayed(float delay)
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x2EB4040", Offset = "0x2EB2640", VA = "0x182EB4040")]
	[ExcludeFromDocs]
	public void PlayOneShot(AudioClip clip)
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x2EB41E0", Offset = "0x2EB27E0", VA = "0x182EB41E0")]
	public void PlayOneShot(AudioClip clip, [DefaultValue("1.0F")] float volumeScale)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x2EB4660", Offset = "0x2EB2C60", VA = "0x182EB4660")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x2EB3CB0", Offset = "0x2EB22B0", VA = "0x182EB3CB0")]
	public void Pause()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x2EB47B0", Offset = "0x2EB2DB0", VA = "0x182EB47B0")]
	public void UnPause()
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AudioSource()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x2EB3B90", Offset = "0x2EB2190", VA = "0x182EB3B90")]
	private static extern float GetPitch_Injected(IntPtr source);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x2EB4510", Offset = "0x2EB2B10", VA = "0x182EB4510")]
	private static extern void SetPitch_Injected(IntPtr source, float pitch);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x2EB3DD0", Offset = "0x2EB23D0", VA = "0x182EB3DD0")]
	private static extern void PlayHelper_Injected(IntPtr source, ulong delay);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x2EB4390", Offset = "0x2EB2990", VA = "0x182EB4390")]
	private static extern void Play_Injected(IntPtr _unity_self, double delay);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x2EB3ED0", Offset = "0x2EB24D0", VA = "0x182EB3ED0")]
	private static extern void PlayOneShotHelper_Injected(IntPtr source, IntPtr clip, float volumeScale);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005B")]
	[Address(RVA = "0x2EB4610", Offset = "0x2EB2C10", VA = "0x182EB4610")]
	private static extern void Stop_Injected(IntPtr _unity_self, bool stopOneShots);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005C")]
	[Address(RVA = "0x2EB4C20", Offset = "0x2EB3220", VA = "0x182EB4C20")]
	private static extern float get_volume_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x2EB56A0", Offset = "0x2EB3CA0", VA = "0x182EB56A0")]
	private static extern void set_volume_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x2EB4B60", Offset = "0x2EB3160", VA = "0x182EB4B60")]
	private static extern float get_time_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x2EB55C0", Offset = "0x2EB3BC0", VA = "0x182EB55C0")]
	private static extern void set_time_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000060")]
	[Address(RVA = "0x2EB4AA0", Offset = "0x2EB30A0", VA = "0x182EB4AA0")]
	private static extern int get_timeSamples_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000061")]
	[Address(RVA = "0x2EB4900", Offset = "0x2EB2F00", VA = "0x182EB4900")]
	private static extern IntPtr get_generatorObject_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x2EB4E80", Offset = "0x2EB3480", VA = "0x182EB4E80")]
	private static extern void set_generatorObject_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000063")]
	[Address(RVA = "0x2EB3C70", Offset = "0x2EB2270", VA = "0x182EB3C70")]
	private static extern void Pause_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000064")]
	[Address(RVA = "0x2EB4770", Offset = "0x2EB2D70", VA = "0x182EB4770")]
	private static extern void UnPause_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x2EB49E0", Offset = "0x2EB2FE0", VA = "0x182EB49E0")]
	private static extern bool get_isPlaying_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000066")]
	[Address(RVA = "0x2EB4FB0", Offset = "0x2EB35B0", VA = "0x182EB4FB0")]
	private static extern void set_loop_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000067")]
	[Address(RVA = "0x2EB4ED0", Offset = "0x2EB34D0", VA = "0x182EB4ED0")]
	private static extern void set_ignoreListenerVolume_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000068")]
	[Address(RVA = "0x2EB5330", Offset = "0x2EB3930", VA = "0x182EB5330")]
	private static extern void set_playOnAwake_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000069")]
	[Address(RVA = "0x2EB54E0", Offset = "0x2EB3AE0", VA = "0x182EB54E0")]
	private static extern void set_spatialBlend_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006A")]
	[Address(RVA = "0x2EB4DA0", Offset = "0x2EB33A0", VA = "0x182EB4DA0")]
	private static extern void set_dopplerLevel_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006B")]
	[Address(RVA = "0x2EB5250", Offset = "0x2EB3850", VA = "0x182EB5250")]
	private static extern void set_mute_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006C")]
	[Address(RVA = "0x2EB5170", Offset = "0x2EB3770", VA = "0x182EB5170")]
	private static extern void set_minDistance_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006D")]
	[Address(RVA = "0x2EB5090", Offset = "0x2EB3690", VA = "0x182EB5090")]
	private static extern void set_maxDistance_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006E")]
	[Address(RVA = "0x2EB5410", Offset = "0x2EB3A10", VA = "0x182EB5410")]
	private static extern void set_rolloffMode_Injected(IntPtr _unity_self, AudioRolloffMode value);
}
