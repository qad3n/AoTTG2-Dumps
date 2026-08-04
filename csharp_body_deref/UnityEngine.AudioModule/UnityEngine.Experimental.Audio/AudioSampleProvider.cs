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
[UnityEngine.Bindings.NativeType(Header = "Modules/Audio/Public/ScriptBindings/AudioSampleProvider.bindings.h")]
[UnityEngine.Bindings.StaticAccessor("AudioSampleProviderBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public class AudioSampleProvider
{
	[Token(Token = "0x2000017")]
	public delegate void SampleFramesHandler(AudioSampleProvider provider, uint sampleFrameCount);

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private SampleFramesHandler sampleFramesAvailable;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private SampleFramesHandler sampleFramesOverflow;

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4DAB3E0", Offset = "0x4DAB3E0", VA = "0x4DAB3E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokeSampleFramesAvailable(int sampleFrameCount)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4DAB400", Offset = "0x4DAB400", VA = "0x4DAB400")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokeSampleFramesOverflow(int droppedSampleFrameCount)
	{
	}
}
