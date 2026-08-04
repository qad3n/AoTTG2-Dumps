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

[Token(Token = "0x2000003")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptBindings/Audio.bindings.h")]
[UnityEngine.Bindings.StaticAccessor("GetAudioManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public sealed class AudioSettings
{
	[Token(Token = "0x2000004")]
	public delegate void AudioConfigurationChangeHandler(bool deviceWasChanged);

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action OnAudioSystemShuttingDown;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action OnAudioSystemStartedUp;

	[Token(Token = "0x17000001")]
	public static AudioSpeakerMode speakerMode
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x4DA7B30", Offset = "0x4DA7B30", VA = "0x4DA7B30")]
		get
		{
			return default(AudioSpeakerMode);
		}
	}

	[Token(Token = "0x17000002")]
	public static int outputSampleRate
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4DA7B60", Offset = "0x4DA7B60", VA = "0x4DA7B60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000001")]
	public static event AudioConfigurationChangeHandler OnAudioConfigurationChanged
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4DA7B90", Offset = "0x4DA7B90", VA = "0x4DA7B90")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4DA7C30", Offset = "0x4DA7C30", VA = "0x4DA7C30")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4DA7AD0", Offset = "0x4DA7AD0", VA = "0x4DA7AD0")]
	private static extern AudioSpeakerMode GetSpeakerMode();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4DA7B00", Offset = "0x4DA7B00", VA = "0x4DA7B00")]
	[UnityEngine.Bindings.NativeMethod(Name = "AudioSettings::GetSampleRate", IsFreeFunction = true)]
	private static extern int GetSampleRate();

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4DA7CD0", Offset = "0x4DA7CD0", VA = "0x4DA7CD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeOnAudioConfigurationChanged(bool deviceWasChanged)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4DA7D20", Offset = "0x4DA7D20", VA = "0x4DA7D20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeOnAudioSystemShuttingDown()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4DA7D70", Offset = "0x4DA7D70", VA = "0x4DA7D70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeOnAudioSystemStartedUp()
	{
	}
}
