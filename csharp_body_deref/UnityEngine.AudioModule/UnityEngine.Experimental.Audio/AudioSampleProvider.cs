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
	[Address(RVA = "0x4A83BC0", Offset = "0x4A83BC0", VA = "0x4A83BC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokeSampleFramesAvailable(int sampleFrameCount)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4A83BE0", Offset = "0x4A83BE0", VA = "0x4A83BE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokeSampleFramesOverflow(int droppedSampleFrameCount)
	{
	}
}
