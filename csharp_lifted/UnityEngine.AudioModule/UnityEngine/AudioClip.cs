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

[Token(Token = "0x2000008")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptBindings/Audio.bindings.h")]
[UnityEngine.Bindings.StaticAccessor("AudioClipBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public sealed class AudioClip : AudioResource, IAudioGenerator, GeneratorInstance.ICapabilities
{
	[Token(Token = "0x2000009")]
	public delegate void PCMReaderCallback(float[] data);

	[Token(Token = "0x200000A")]
	public delegate void PCMSetPositionCallback(int position);

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private PCMReaderCallback m_m_PCMReaderCallback;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private PCMSetPositionCallback m_m_PCMSetPositionCallback;

	[Token(Token = "0x17000003")]
	[UnityEngine.Bindings.NativeProperty("LengthSec")]
	public float length
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x68AEBB0", Offset = "0x68ADBB0", VA = "0x68AEBB0")]
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
		[Address(RVA = "0x68AEC60", Offset = "0x68ADC60", VA = "0x68AEC60")]
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
		[Address(RVA = "0x68AED10", Offset = "0x68ADD10", VA = "0x68AED10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000006")]
	public int frequency
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x68AEDC0", Offset = "0x68ADDC0", VA = "0x68AEDC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000007")]
	public AudioDataLoadState loadState
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x68AEE70", Offset = "0x68ADE70", VA = "0x68AEE70")]
		[UnityEngine.Bindings.NativeMethod(Name = "AudioClipBindings::GetLoadState", HasExplicitThis = true)]
		get
		{
			return default(AudioDataLoadState);
		}
	}

	[Token(Token = "0x17000008")]
	private bool UnityEngine_002EAudio_002EGeneratorInstance_002EICapabilities_002EisRealtime
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x68AF8C0", Offset = "0x68AE8C0", VA = "0x68AF8C0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000009")]
	private bool UnityEngine_002EAudio_002EGeneratorInstance_002EICapabilities_002EisFinite
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x68AF900", Offset = "0x68AE900", VA = "0x68AF900", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000A")]
	private DiscreteTime? UnityEngine_002EAudio_002EGeneratorInstance_002EICapabilities_002Elength
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x68AF940", Offset = "0x68AE940", VA = "0x68AF940", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000002")]
	private event PCMReaderCallback m_PCMReaderCallback
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x68AF640", Offset = "0x68AE640", VA = "0x68AF640")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x68AF760", Offset = "0x68AE760", VA = "0x68AF760")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	private event PCMSetPositionCallback m_PCMSetPositionCallback
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x68AF6D0", Offset = "0x68AE6D0", VA = "0x68AF6D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x68AF7F0", Offset = "0x68AE7F0", VA = "0x68AF7F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x68AE3E0", Offset = "0x68AD3E0", VA = "0x68AE3E0")]
	private AudioClip()
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x68AE4E0", Offset = "0x68AD4E0", VA = "0x68AE4E0")]
	private static bool GetData([UnityEngine.Bindings.NotNull] AudioClip clip, Span<float> data, int samplesOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x68AE640", Offset = "0x68AD640", VA = "0x68AE640")]
	private static bool SetData([UnityEngine.Bindings.NotNull] AudioClip clip, ReadOnlySpan<float> data, int samplesOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x68AE7A0", Offset = "0x68AD7A0", VA = "0x68AE7A0")]
	private static AudioClip Construct_Internal()
	{
		return null;
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x68AE830", Offset = "0x68AD830", VA = "0x68AE830")]
	private string GetName()
	{
		return null;
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x68AE980", Offset = "0x68AD980", VA = "0x68AE980")]
	private void CreateUserSound(string name, int lengthSamples, int channels, int frequency, bool stream)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x68AEF20", Offset = "0x68ADF20", VA = "0x68AEF20")]
	public bool GetData(float[] data, int offsetSamples)
	{
		return default(bool);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x68AF0D0", Offset = "0x68AE0D0", VA = "0x68AF0D0")]
	public bool SetData(float[] data, int offsetSamples)
	{
		return default(bool);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x68AF3A0", Offset = "0x68AE3A0", VA = "0x68AF3A0")]
	public static AudioClip Create(string name, int lengthSamples, int channels, int frequency, bool stream)
	{
		return null;
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x68AF3C0", Offset = "0x68AE3C0", VA = "0x68AF3C0")]
	public static AudioClip Create(string name, int lengthSamples, int channels, int frequency, bool stream, PCMReaderCallback pcmreadercallback, PCMSetPositionCallback pcmsetpositioncallback)
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x68AF880", Offset = "0x68AE880", VA = "0x68AF880")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokePCMReaderCallback_Internal(float[] data)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x68AF8A0", Offset = "0x68AE8A0", VA = "0x68AF8A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokePCMSetPositionCallback_Internal(int position)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x68AF980", Offset = "0x68AE980", VA = "0x68AF980", Slot = "4")]
	private GeneratorInstance UnityEngine_002EAudio_002EIAudioGenerator_002ECreateInstance(ControlContext context, AudioFormat? nestedFormat, ProcessorInstance.CreationParameters parameters)
	{
		return default(GeneratorInstance);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x68AE600", Offset = "0x68AD600", VA = "0x68AE600")]
	private static extern bool GetData_Injected(IntPtr clip, ref UnityEngine.Bindings.ManagedSpanWrapper data, int samplesOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x68AE760", Offset = "0x68AD760", VA = "0x68AE760")]
	private static extern bool SetData_Injected(IntPtr clip, ref UnityEngine.Bindings.ManagedSpanWrapper data, int samplesOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x68AE800", Offset = "0x68AD800", VA = "0x68AE800")]
	private static extern IntPtr Construct_Internal_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x68AE940", Offset = "0x68AD940", VA = "0x68AE940")]
	private static extern void GetName_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x68AEB50", Offset = "0x68ADB50", VA = "0x68AEB50")]
	private static extern void CreateUserSound_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name, int lengthSamples, int channels, int frequency, bool stream);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x68AEC30", Offset = "0x68ADC30", VA = "0x68AEC30")]
	private static extern float get_length_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x68AECE0", Offset = "0x68ADCE0", VA = "0x68AECE0")]
	private static extern int get_samples_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x68AED90", Offset = "0x68ADD90", VA = "0x68AED90")]
	private static extern int get_channels_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x68AEE40", Offset = "0x68ADE40", VA = "0x68AEE40")]
	private static extern int get_frequency_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x68AEEF0", Offset = "0x68ADEF0", VA = "0x68AEEF0")]
	private static extern AudioDataLoadState get_loadState_Injected(IntPtr _unity_self);
}
