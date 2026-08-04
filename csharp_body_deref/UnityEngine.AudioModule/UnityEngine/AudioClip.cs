// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AudioClip
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4DA8430", Offset = "0x4DA8430", VA = "0x4DA8430")]
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
		[Address(RVA = "0x4DA8500", Offset = "0x4DA8500", VA = "0x4DA8500")]
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
		[Address(RVA = "0x4DA85D0", Offset = "0x4DA85D0", VA = "0x4DA85D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000006")]
	public int frequency
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x4DA86A0", Offset = "0x4DA86A0", VA = "0x4DA86A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000002")]
	private event PCMReaderCallback m_PCMReaderCallback
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x4DA90F0", Offset = "0x4DA90F0", VA = "0x4DA90F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x4DA9210", Offset = "0x4DA9210", VA = "0x4DA9210")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	private event PCMSetPositionCallback m_PCMSetPositionCallback
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x4DA9180", Offset = "0x4DA9180", VA = "0x4DA9180")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x4DA92A0", Offset = "0x4DA92A0", VA = "0x4DA92A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4DA7E80", Offset = "0x4DA7E80", VA = "0x4DA7E80")]
	private AudioClip()
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4DA7F00", Offset = "0x4DA7F00", VA = "0x4DA7F00")]
	private static bool GetData([UnityEngine.Bindings.NotNull("NullExceptionObject")] AudioClip clip, [Out] float[] data, int numSamples, int samplesOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4DA8080", Offset = "0x4DA8080", VA = "0x4DA8080")]
	private static bool SetData([UnityEngine.Bindings.NotNull("NullExceptionObject")] AudioClip clip, float[] data, int numsamples, int samplesOffset)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000F")]
	[Address(RVA = "0x4DA8200", Offset = "0x4DA8200", VA = "0x4DA8200")]
	private static extern AudioClip Construct_Internal();

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4DA8230", Offset = "0x4DA8230", VA = "0x4DA8230")]
	private string GetName()
	{
		return null;
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4DA8300", Offset = "0x4DA8300", VA = "0x4DA8300")]
	private void CreateUserSound(string name, int lengthSamples, int channels, int frequency, bool stream)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4DA8770", Offset = "0x4DA8770", VA = "0x4DA8770")]
	public bool GetData(float[] data, int offsetSamples)
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4DA8A10", Offset = "0x4DA8A10", VA = "0x4DA8A10")]
	public bool SetData(float[] data, int offsetSamples)
	{
		return default(bool);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4DA8DD0", Offset = "0x4DA8DD0", VA = "0x4DA8DD0")]
	public static AudioClip Create(string name, int lengthSamples, int channels, int frequency, bool stream)
	{
		return null;
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4DA8DF0", Offset = "0x4DA8DF0", VA = "0x4DA8DF0")]
	public static AudioClip Create(string name, int lengthSamples, int channels, int frequency, bool stream, PCMReaderCallback pcmreadercallback, PCMSetPositionCallback pcmsetpositioncallback)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4DA9330", Offset = "0x4DA9330", VA = "0x4DA9330")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokePCMReaderCallback_Internal(float[] data)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4DA9350", Offset = "0x4DA9350", VA = "0x4DA9350")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokePCMSetPositionCallback_Internal(int position)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4DA8030", Offset = "0x4DA8030", VA = "0x4DA8030")]
	private static extern bool GetData_Injected(IntPtr clip, out UnityEngine.Bindings.ManagedSpanWrapper data, int numSamples, int samplesOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4DA81B0", Offset = "0x4DA81B0", VA = "0x4DA81B0")]
	private static extern bool SetData_Injected(IntPtr clip, ref UnityEngine.Bindings.ManagedSpanWrapper data, int numsamples, int samplesOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4DA82D0", Offset = "0x4DA82D0", VA = "0x4DA82D0")]
	private static extern string GetName_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4DA83D0", Offset = "0x4DA83D0", VA = "0x4DA83D0")]
	private static extern void CreateUserSound_Injected(IntPtr _unity_self, string name, int lengthSamples, int channels, int frequency, bool stream);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4DA84D0", Offset = "0x4DA84D0", VA = "0x4DA84D0")]
	private static extern float get_length_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4DA85A0", Offset = "0x4DA85A0", VA = "0x4DA85A0")]
	private static extern int get_samples_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4DA8670", Offset = "0x4DA8670", VA = "0x4DA8670")]
	private static extern int get_channels_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4DA8740", Offset = "0x4DA8740", VA = "0x4DA8740")]
	private static extern int get_frequency_Injected(IntPtr _unity_self);
}
