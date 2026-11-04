// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AudioClip
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IntegerTime;
using UnityEngine.Audio;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000007")]
[UnityEngine.Bindings.StaticAccessor("AudioClipBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptBindings/Audio.bindings.h")]
public sealed class AudioClip : AudioResource, IAudioGenerator, GeneratorInstance.ICapabilities
{
	[Token(Token = "0x2000008")]
	public delegate void PCMReaderCallback(float[] data);

	[Token(Token = "0x2000009")]
	public delegate void PCMSetPositionCallback(int position);

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private PCMReaderCallback m_m_PCMReaderCallback;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private PCMSetPositionCallback m_m_PCMSetPositionCallback;

	[Token(Token = "0x17000003")]
	[UnityEngine.Bindings.NativeProperty("LengthSec")]
	public float length
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x2EB34E0", Offset = "0x2EB1AE0", VA = "0x182EB34E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000004")]
	[UnityEngine.Bindings.NativeProperty("SampleCount")]
	public int samples
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x2EB35A0", Offset = "0x2EB1BA0", VA = "0x182EB35A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000005")]
	[UnityEngine.Bindings.NativeProperty("ChannelCount")]
	public int channels
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x2EB3360", Offset = "0x2EB1960", VA = "0x182EB3360")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000006")]
	public int frequency
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x2EB3420", Offset = "0x2EB1A20", VA = "0x182EB3420")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000007")]
	private bool UnityEngine_002EAudio_002EGeneratorInstance_002EICapabilities_002EisRealtime
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x2EB30B0", Offset = "0x2EB16B0", VA = "0x182EB30B0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000008")]
	private bool UnityEngine_002EAudio_002EGeneratorInstance_002EICapabilities_002EisFinite
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x2EB3070", Offset = "0x2EB1670", VA = "0x182EB3070", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000009")]
	private DiscreteTime? UnityEngine_002EAudio_002EGeneratorInstance_002EICapabilities_002Elength
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x2EB30F0", Offset = "0x2EB16F0", VA = "0x182EB30F0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000002")]
	private event PCMReaderCallback m_PCMReaderCallback
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x2EB31E0", Offset = "0x2EB17E0", VA = "0x182EB31E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x2EB3620", Offset = "0x2EB1C20", VA = "0x182EB3620")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	private event PCMSetPositionCallback m_PCMSetPositionCallback
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x2EB3280", Offset = "0x2EB1880", VA = "0x182EB3280")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x2EB36C0", Offset = "0x2EB1CC0", VA = "0x182EB36C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x2EB3170", Offset = "0x2EB1770", VA = "0x182EB3170")]
	private AudioClip()
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x2EB28E0", Offset = "0x2EB0EE0", VA = "0x182EB28E0")]
	private static bool GetData([UnityEngine.Bindings.NotNull] AudioClip clip, Span<float> data, int samplesOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x2EB2F50", Offset = "0x2EB1550", VA = "0x182EB2F50")]
	private static bool SetData([UnityEngine.Bindings.NotNull] AudioClip clip, ReadOnlySpan<float> data, int samplesOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x2EB2030", Offset = "0x2EB0630", VA = "0x182EB2030")]
	private static AudioClip Construct_Internal()
	{
		return null;
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x2EB2A50", Offset = "0x2EB1050", VA = "0x182EB2A50")]
	private string GetName()
	{
		return null;
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x2EB20F0", Offset = "0x2EB06F0", VA = "0x182EB20F0")]
	private void CreateUserSound(string name, int lengthSamples, int channels, int frequency, bool stream)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x2EB26A0", Offset = "0x2EB0CA0", VA = "0x182EB26A0")]
	public bool GetData(float[] data, int offsetSamples)
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x2EB2C00", Offset = "0x2EB1200", VA = "0x182EB2C00")]
	public bool SetData(float[] data, int offsetSamples)
	{
		return default(bool);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x2EB2610", Offset = "0x2EB0C10", VA = "0x182EB2610")]
	public static AudioClip Create(string name, int lengthSamples, int channels, int frequency, bool stream)
	{
		return null;
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x2EB22D0", Offset = "0x2EB08D0", VA = "0x182EB22D0")]
	public static AudioClip Create(string name, int lengthSamples, int channels, int frequency, bool stream, PCMReaderCallback pcmreadercallback, PCMSetPositionCallback pcmsetpositioncallback)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x2EB2B60", Offset = "0x2EB1160", VA = "0x182EB2B60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokePCMReaderCallback_Internal(float[] data)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x2EB2B80", Offset = "0x2EB1180", VA = "0x182EB2B80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokePCMSetPositionCallback_Internal(int position)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x2EB3130", Offset = "0x2EB1730", VA = "0x182EB3130", Slot = "4")]
	private GeneratorInstance UnityEngine_002EAudio_002EIAudioGenerator_002ECreateInstance(ControlContext context, AudioFormat? nestedFormat, ProcessorInstance.CreationParameters parameters)
	{
		return default(GeneratorInstance);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x2EB2640", Offset = "0x2EB0C40", VA = "0x182EB2640")]
	private static extern bool GetData_Injected(IntPtr clip, ref UnityEngine.Bindings.ManagedSpanWrapper data, int samplesOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x2EB2BA0", Offset = "0x2EB11A0", VA = "0x182EB2BA0")]
	private static extern bool SetData_Injected(IntPtr clip, ref UnityEngine.Bindings.ManagedSpanWrapper data, int samplesOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x2EB2000", Offset = "0x2EB0600", VA = "0x182EB2000")]
	private static extern IntPtr Construct_Internal_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x2EB2A00", Offset = "0x2EB1000", VA = "0x182EB2A00")]
	private static extern void GetName_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x2EB2090", Offset = "0x2EB0690", VA = "0x182EB2090")]
	private static extern void CreateUserSound_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name, int lengthSamples, int channels, int frequency, bool stream);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x2EB34A0", Offset = "0x2EB1AA0", VA = "0x182EB34A0")]
	private static extern float get_length_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x2EB3560", Offset = "0x2EB1B60", VA = "0x182EB3560")]
	private static extern int get_samples_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x2EB3320", Offset = "0x2EB1920", VA = "0x182EB3320")]
	private static extern int get_channels_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x2EB33E0", Offset = "0x2EB19E0", VA = "0x182EB33E0")]
	private static extern int get_frequency_Injected(IntPtr _unity_self);
}
