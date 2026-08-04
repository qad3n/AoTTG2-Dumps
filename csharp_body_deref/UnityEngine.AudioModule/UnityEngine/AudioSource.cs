// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AudioSource
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200000A")]
[UnityEngine.Bindings.StaticAccessor("AudioSourceBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[RequireComponent(typeof(Transform))]
public sealed class AudioSource : AudioBehaviour
{
	[Token(Token = "0x17000008")]
	public float volume
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4DA9C20", Offset = "0x4DA9C20", VA = "0x4DA9C20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4DA9CF0", Offset = "0x4DA9CF0", VA = "0x4DA9CF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public float pitch
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x4DA9DF0", Offset = "0x4DA9DF0", VA = "0x4DA9DF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x4DA9E00", Offset = "0x4DA9E00", VA = "0x4DA9E00")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	[UnityEngine.Bindings.NativeProperty("SecPosition")]
	public float time
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x4DA9E10", Offset = "0x4DA9E10", VA = "0x4DA9E10")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x4DA9EE0", Offset = "0x4DA9EE0", VA = "0x4DA9EE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	[UnityEngine.Bindings.NativeProperty("SamplePosition")]
	public int timeSamples
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x4DA9FE0", Offset = "0x4DA9FE0", VA = "0x4DA9FE0")]
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
		[Address(RVA = "0x4DAA0B0", Offset = "0x4DAA0B0", VA = "0x4DAA0B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x4DAA180", Offset = "0x4DAA180", VA = "0x4DAA180")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public bool isPlaying
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x4DAA6B0", Offset = "0x4DAA6B0", VA = "0x4DAA6B0")]
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
		[Address(RVA = "0x4DAA780", Offset = "0x4DAA780", VA = "0x4DAA780")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool ignoreListenerVolume
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x4DAA860", Offset = "0x4DAA860", VA = "0x4DAA860")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public bool playOnAwake
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x4DAA940", Offset = "0x4DAA940", VA = "0x4DAA940")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	[UnityEngine.Bindings.NativeProperty("SpatialBlendMix")]
	public float spatialBlend
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x4DAAA20", Offset = "0x4DAAA20", VA = "0x4DAAA20")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public bool mute
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x4DAAB20", Offset = "0x4DAAB20", VA = "0x4DAAB20")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public float minDistance
	{
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x4DAAC00", Offset = "0x4DAAC00", VA = "0x4DAAC00")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public float maxDistance
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x4DAAD00", Offset = "0x4DAAD00", VA = "0x4DAAD00")]
		set
		{
		}
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4DA9540", Offset = "0x4DA9540", VA = "0x4DA9540")]
	private static float GetPitch([UnityEngine.Bindings.NotNull("ArgumentNullException")] AudioSource source)
	{
		return default(float);
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4DA9640", Offset = "0x4DA9640", VA = "0x4DA9640")]
	private static void SetPitch([UnityEngine.Bindings.NotNull("ArgumentNullException")] AudioSource source, float pitch)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4DA9780", Offset = "0x4DA9780", VA = "0x4DA9780")]
	private static void PlayHelper([UnityEngine.Bindings.NotNull("ArgumentNullException")] AudioSource source, ulong delay)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4DA98A0", Offset = "0x4DA98A0", VA = "0x4DA98A0")]
	private void Play(double delay)
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4DA99A0", Offset = "0x4DA99A0", VA = "0x4DA99A0")]
	private static void PlayOneShotHelper([UnityEngine.Bindings.NotNull("ArgumentNullException")] AudioSource source, [UnityEngine.Bindings.NotNull("NullExceptionObject")] AudioClip clip, float volumeScale)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4DA9B40", Offset = "0x4DA9B40", VA = "0x4DA9B40")]
	private void Stop(bool stopOneShots)
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4DAA2C0", Offset = "0x4DAA2C0", VA = "0x4DAA2C0")]
	[ExcludeFromDocs]
	public void Play()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4DAA2D0", Offset = "0x4DAA2D0", VA = "0x4DAA2D0")]
	public void PlayDelayed(float delay)
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4DAA3A0", Offset = "0x4DAA3A0", VA = "0x4DAA3A0")]
	[ExcludeFromDocs]
	public void PlayOneShot(AudioClip clip)
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4DAA3B0", Offset = "0x4DAA3B0", VA = "0x4DAA3B0")]
	public void PlayOneShot(AudioClip clip, [DefaultValue("1.0F")] float volumeScale)
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4DAA470", Offset = "0x4DAA470", VA = "0x4DAA470")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4DAA510", Offset = "0x4DAA510", VA = "0x4DAA510")]
	public void Pause()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4DAA5E0", Offset = "0x4DAA5E0", VA = "0x4DAA5E0")]
	public void UnPause()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4DA9610", Offset = "0x4DA9610", VA = "0x4DA9610")]
	private static extern float GetPitch_Injected(IntPtr source);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4DA9730", Offset = "0x4DA9730", VA = "0x4DA9730")]
	private static extern void SetPitch_Injected(IntPtr source, float pitch);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4DA9860", Offset = "0x4DA9860", VA = "0x4DA9860")]
	private static extern void PlayHelper_Injected(IntPtr source, ulong delay);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4DA9950", Offset = "0x4DA9950", VA = "0x4DA9950")]
	private static extern void Play_Injected(IntPtr _unity_self, double delay);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4DA9AF0", Offset = "0x4DA9AF0", VA = "0x4DA9AF0")]
	private static extern void PlayOneShotHelper_Injected(IntPtr source, IntPtr clip, float volumeScale);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4DA9BE0", Offset = "0x4DA9BE0", VA = "0x4DA9BE0")]
	private static extern void Stop_Injected(IntPtr _unity_self, bool stopOneShots);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4DA9CC0", Offset = "0x4DA9CC0", VA = "0x4DA9CC0")]
	private static extern float get_volume_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4DA9DA0", Offset = "0x4DA9DA0", VA = "0x4DA9DA0")]
	private static extern void set_volume_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4DA9EB0", Offset = "0x4DA9EB0", VA = "0x4DA9EB0")]
	private static extern float get_time_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4DA9F90", Offset = "0x4DA9F90", VA = "0x4DA9F90")]
	private static extern void set_time_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4DAA080", Offset = "0x4DAA080", VA = "0x4DAA080")]
	private static extern int get_timeSamples_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4DAA150", Offset = "0x4DAA150", VA = "0x4DAA150")]
	private static extern AudioClip get_clip_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4DAA280", Offset = "0x4DAA280", VA = "0x4DAA280")]
	private static extern void set_clip_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4DAA5B0", Offset = "0x4DAA5B0", VA = "0x4DAA5B0")]
	private static extern void Pause_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4DAA680", Offset = "0x4DAA680", VA = "0x4DAA680")]
	private static extern void UnPause_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4DAA750", Offset = "0x4DAA750", VA = "0x4DAA750")]
	private static extern bool get_isPlaying_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005B")]
	[Address(RVA = "0x4DAA820", Offset = "0x4DAA820", VA = "0x4DAA820")]
	private static extern void set_loop_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4DAA900", Offset = "0x4DAA900", VA = "0x4DAA900")]
	private static extern void set_ignoreListenerVolume_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x4DAA9E0", Offset = "0x4DAA9E0", VA = "0x4DAA9E0")]
	private static extern void set_playOnAwake_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4DAAAD0", Offset = "0x4DAAAD0", VA = "0x4DAAAD0")]
	private static extern void set_spatialBlend_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4DAABC0", Offset = "0x4DAABC0", VA = "0x4DAABC0")]
	private static extern void set_mute_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4DAACB0", Offset = "0x4DAACB0", VA = "0x4DAACB0")]
	private static extern void set_minDistance_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4DAADB0", Offset = "0x4DAADB0", VA = "0x4DAADB0")]
	private static extern void set_maxDistance_Injected(IntPtr _unity_self, float value);
}
