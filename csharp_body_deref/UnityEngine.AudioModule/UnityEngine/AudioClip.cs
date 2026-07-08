using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000005")]
[UnityEngine.Bindings.StaticAccessor("AudioClipBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptBindings/Audio.bindings.h")]
public sealed class AudioClip : Object
{
	[Token(Token = "0x2000006")]
	public delegate void PCMReaderCallback(float[] data);

	[Token(Token = "0x2000007")]
	public delegate void PCMSetPositionCallback(int position);

	[Token(Token = "0x17000003")]
	[UnityEngine.Bindings.NativeProperty("LengthSec")]
	public float length
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x4A80C10", Offset = "0x4A80C10", VA = "0x4A80C10")]
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
		[Address(RVA = "0x4A80CE0", Offset = "0x4A80CE0", VA = "0x4A80CE0")]
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
		[Address(RVA = "0x4A80DB0", Offset = "0x4A80DB0", VA = "0x4A80DB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000006")]
	public int frequency
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x4A80E80", Offset = "0x4A80E80", VA = "0x4A80E80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000002")]
	private event PCMReaderCallback m_PCMReaderCallback
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x4A818D0", Offset = "0x4A818D0", VA = "0x4A818D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x4A819F0", Offset = "0x4A819F0", VA = "0x4A819F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	private event PCMSetPositionCallback m_PCMSetPositionCallback
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x4A81960", Offset = "0x4A81960", VA = "0x4A81960")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x4A81A80", Offset = "0x4A81A80", VA = "0x4A81A80")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4A80660", Offset = "0x4A80660", VA = "0x4A80660")]
	private AudioClip()
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4A806E0", Offset = "0x4A806E0", VA = "0x4A806E0")]
	private static bool GetData([UnityEngine.Bindings.NotNull("NullExceptionObject")] AudioClip clip, [Out] float[] data, int numSamples, int samplesOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4A80860", Offset = "0x4A80860", VA = "0x4A80860")]
	private static bool SetData([UnityEngine.Bindings.NotNull("NullExceptionObject")] AudioClip clip, float[] data, int numsamples, int samplesOffset)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000F")]
	[Address(RVA = "0x4A809E0", Offset = "0x4A809E0", VA = "0x4A809E0")]
	private static extern AudioClip Construct_Internal();

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4A80A10", Offset = "0x4A80A10", VA = "0x4A80A10")]
	private string GetName()
	{
		return null;
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4A80AE0", Offset = "0x4A80AE0", VA = "0x4A80AE0")]
	private void CreateUserSound(string name, int lengthSamples, int channels, int frequency, bool stream)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4A80F50", Offset = "0x4A80F50", VA = "0x4A80F50")]
	public bool GetData(float[] data, int offsetSamples)
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4A811F0", Offset = "0x4A811F0", VA = "0x4A811F0")]
	public bool SetData(float[] data, int offsetSamples)
	{
		return default(bool);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4A815B0", Offset = "0x4A815B0", VA = "0x4A815B0")]
	public static AudioClip Create(string name, int lengthSamples, int channels, int frequency, bool stream)
	{
		return null;
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4A815D0", Offset = "0x4A815D0", VA = "0x4A815D0")]
	public static AudioClip Create(string name, int lengthSamples, int channels, int frequency, bool stream, PCMReaderCallback pcmreadercallback, PCMSetPositionCallback pcmsetpositioncallback)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4A81B10", Offset = "0x4A81B10", VA = "0x4A81B10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokePCMReaderCallback_Internal(float[] data)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4A81B30", Offset = "0x4A81B30", VA = "0x4A81B30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokePCMSetPositionCallback_Internal(int position)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4A80810", Offset = "0x4A80810", VA = "0x4A80810")]
	private static extern bool GetData_Injected(IntPtr clip, out UnityEngine.Bindings.ManagedSpanWrapper data, int numSamples, int samplesOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4A80990", Offset = "0x4A80990", VA = "0x4A80990")]
	private static extern bool SetData_Injected(IntPtr clip, ref UnityEngine.Bindings.ManagedSpanWrapper data, int numsamples, int samplesOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4A80AB0", Offset = "0x4A80AB0", VA = "0x4A80AB0")]
	private static extern string GetName_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4A80BB0", Offset = "0x4A80BB0", VA = "0x4A80BB0")]
	private static extern void CreateUserSound_Injected(IntPtr _unity_self, string name, int lengthSamples, int channels, int frequency, bool stream);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4A80CB0", Offset = "0x4A80CB0", VA = "0x4A80CB0")]
	private static extern float get_length_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4A80D80", Offset = "0x4A80D80", VA = "0x4A80D80")]
	private static extern int get_samples_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4A80E50", Offset = "0x4A80E50", VA = "0x4A80E50")]
	private static extern int get_channels_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4A80F20", Offset = "0x4A80F20", VA = "0x4A80F20")]
	private static extern int get_frequency_Injected(IntPtr _unity_self);
}
