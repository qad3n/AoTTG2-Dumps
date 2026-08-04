// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Profiling.Recorder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/Recorder.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Profiling;
using Unity.Profiling.LowLevel.Unsafe;
using UnityEngine.Scripting;

namespace UnityEngine.Profiling;

[Token(Token = "0x20001B6")]
[UnityEngine.Scripting.UsedByNativeCode]
public sealed class Recorder
{
	[Token(Token = "0x400062A")]
	[FieldOffset(Offset = "0x0")]
	internal static Recorder s_InvalidRecorder;

	[Token(Token = "0x400062B")]
	[FieldOffset(Offset = "0x10")]
	private ProfilerRecorder m_RecorderCPU;

	[Token(Token = "0x400062C")]
	[FieldOffset(Offset = "0x18")]
	private ProfilerRecorder m_RecorderGPU;

	[Token(Token = "0x1700023A")]
	public bool enabled
	{
		[Token(Token = "0x6000CB5")]
		[Address(RVA = "0x4E0E6B0", Offset = "0x4E0E6B0", VA = "0x4E0E6B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000CB6")]
		[Address(RVA = "0x4E0E6C0", Offset = "0x4E0E6C0", VA = "0x4E0E6C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700023B")]
	public long elapsedNanoseconds
	{
		[Token(Token = "0x6000CB7")]
		[Address(RVA = "0x4E0E780", Offset = "0x4E0E780", VA = "0x4E0E780")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700023C")]
	public long gpuElapsedNanoseconds
	{
		[Token(Token = "0x6000CB8")]
		[Address(RVA = "0x4E0E7B0", Offset = "0x4E0E7B0", VA = "0x4E0E7B0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700023D")]
	public int sampleBlockCount
	{
		[Token(Token = "0x6000CB9")]
		[Address(RVA = "0x4E0E7E0", Offset = "0x4E0E7E0", VA = "0x4E0E7E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023E")]
	public int gpuSampleBlockCount
	{
		[Token(Token = "0x6000CBA")]
		[Address(RVA = "0x4E0E830", Offset = "0x4E0E830", VA = "0x4E0E830")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x4E0E550", Offset = "0x4E0E550", VA = "0x4E0E550")]
	internal Recorder()
	{
	}

	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x4E0E560", Offset = "0x4E0E560", VA = "0x4E0E560")]
	internal Recorder(ProfilerRecorderHandle handle)
	{
	}

	[Token(Token = "0x6000CB4")]
	[Address(RVA = "0x4E0E610", Offset = "0x4E0E610", VA = "0x4E0E610", Slot = "1")]
	~Recorder()
	{
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x4E0E720", Offset = "0x4E0E720", VA = "0x4E0E720")]
	private void SetEnabled(bool state)
	{
	}
}
