// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AudioSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000006")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptBindings/Audio.bindings.h")]
[UnityEngine.Bindings.StaticAccessor("GetAudioManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public sealed class AudioSettings
{
	[Token(Token = "0x2000007")]
	public delegate void AudioConfigurationChangeHandler(bool deviceWasChanged);

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static AudioConfigurationChangeHandler m_OnAudioConfigurationChanged;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action OnAudioSystemShuttingDown;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action OnAudioSystemStartedUp;

	[Token(Token = "0x17000001")]
	public static AudioSpeakerMode speakerMode
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x68AE090", Offset = "0x68AD090", VA = "0x68AE090")]
		get
		{
			return default(AudioSpeakerMode);
		}
	}

	[Token(Token = "0x17000002")]
	public static int outputSampleRate
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x68AE0C0", Offset = "0x68AD0C0", VA = "0x68AE0C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000001")]
	public static event AudioConfigurationChangeHandler OnAudioConfigurationChanged
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x68AE0F0", Offset = "0x68AD0F0", VA = "0x68AE0F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x68AE190", Offset = "0x68AD190", VA = "0x68AE190")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x68AE030", Offset = "0x68AD030", VA = "0x68AE030")]
	private static extern AudioSpeakerMode GetSpeakerMode();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000002")]
	[Address(RVA = "0x68AE060", Offset = "0x68AD060", VA = "0x68AE060")]
	[UnityEngine.Bindings.NativeMethod(Name = "AudioSettings::GetSampleRate", IsFreeFunction = true)]
	private static extern int GetSampleRate();

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x68AE230", Offset = "0x68AD230", VA = "0x68AE230")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeOnAudioConfigurationChanged(bool deviceWasChanged)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x68AE280", Offset = "0x68AD280", VA = "0x68AE280")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeOnAudioSystemShuttingDown()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x68AE2D0", Offset = "0x68AD2D0", VA = "0x68AE2D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeOnAudioSystemStartedUp()
	{
	}
}
