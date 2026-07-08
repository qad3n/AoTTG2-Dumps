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
		[Address(RVA = "0x4A80310", Offset = "0x4A80310", VA = "0x4A80310")]
		get
		{
			return default(AudioSpeakerMode);
		}
	}

	[Token(Token = "0x17000002")]
	public static int outputSampleRate
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4A80340", Offset = "0x4A80340", VA = "0x4A80340")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000001")]
	public static event AudioConfigurationChangeHandler OnAudioConfigurationChanged
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4A80370", Offset = "0x4A80370", VA = "0x4A80370")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4A80410", Offset = "0x4A80410", VA = "0x4A80410")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4A802B0", Offset = "0x4A802B0", VA = "0x4A802B0")]
	private static extern AudioSpeakerMode GetSpeakerMode();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4A802E0", Offset = "0x4A802E0", VA = "0x4A802E0")]
	[UnityEngine.Bindings.NativeMethod(Name = "AudioSettings::GetSampleRate", IsFreeFunction = true)]
	private static extern int GetSampleRate();

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4A804B0", Offset = "0x4A804B0", VA = "0x4A804B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeOnAudioConfigurationChanged(bool deviceWasChanged)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4A80500", Offset = "0x4A80500", VA = "0x4A80500")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeOnAudioSystemShuttingDown()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4A80550", Offset = "0x4A80550", VA = "0x4A80550")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeOnAudioSystemStartedUp()
	{
	}
}
