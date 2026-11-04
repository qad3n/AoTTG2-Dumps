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

[Token(Token = "0x2000005")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptBindings/Audio.bindings.h")]
[UnityEngine.Bindings.StaticAccessor("GetAudioManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public sealed class AudioSettings
{
	[Token(Token = "0x2000006")]
	public delegate void AudioConfigurationChangeHandler(bool deviceWasChanged);

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static AudioConfigurationChangeHandler m_OnAudioConfigurationChanged;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action OnAudioSystemShuttingDown;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action OnAudioSystemStartedUp;

	[Token(Token = "0x17000001")]
	public static AudioSpeakerMode speakerMode
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x2EB38E0", Offset = "0x2EB1EE0", VA = "0x182EB38E0")]
		get
		{
			return default(AudioSpeakerMode);
		}
	}

	[Token(Token = "0x17000002")]
	public static int outputSampleRate
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x2EB38B0", Offset = "0x2EB1EB0", VA = "0x182EB38B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000001")]
	public static event AudioConfigurationChangeHandler OnAudioConfigurationChanged
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x2EB3A10", Offset = "0x2EB2010", VA = "0x182EB3A10")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x2EB3AD0", Offset = "0x2EB20D0", VA = "0x182EB3AD0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x2EB38E0", Offset = "0x2EB1EE0", VA = "0x182EB38E0")]
	private static extern AudioSpeakerMode GetSpeakerMode();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000002")]
	[Address(RVA = "0x2EB38B0", Offset = "0x2EB1EB0", VA = "0x182EB38B0")]
	[UnityEngine.Bindings.NativeMethod(Name = "AudioSettings::GetSampleRate", IsFreeFunction = true)]
	private static extern int GetSampleRate();

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x2EB3910", Offset = "0x2EB1F10", VA = "0x182EB3910")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeOnAudioConfigurationChanged(bool deviceWasChanged)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x2EB3970", Offset = "0x2EB1F70", VA = "0x182EB3970")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeOnAudioSystemShuttingDown()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x2EB39C0", Offset = "0x2EB1FC0", VA = "0x182EB39C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InvokeOnAudioSystemStartedUp()
	{
	}
}
