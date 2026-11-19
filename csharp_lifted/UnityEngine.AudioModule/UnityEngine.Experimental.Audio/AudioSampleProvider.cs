// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Audio.AudioSampleProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Experimental.Audio;

[Token(Token = "0x2000016")]
[UnityEngine.Bindings.StaticAccessor("AudioSampleProviderBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeType(Header = "Modules/Audio/Public/ScriptBindings/AudioSampleProvider.bindings.h")]
public class AudioSampleProvider
{
	[Token(Token = "0x2000017")]
	public delegate void SampleFramesHandler(AudioSampleProvider provider, uint sampleFrameCount);

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private SampleFramesHandler sampleFramesAvailable;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private SampleFramesHandler sampleFramesOverflow;

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x68B1850", Offset = "0x68B0850", VA = "0x68B1850")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokeSampleFramesAvailable(int sampleFrameCount)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x68B1870", Offset = "0x68B0870", VA = "0x68B1870")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokeSampleFramesOverflow(int droppedSampleFrameCount)
	{
	}
}
