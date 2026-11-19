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

[Token(Token = "0x20001EF")]
[UnityEngine.Scripting.UsedByNativeCode]
public sealed class Recorder
{
	[Token(Token = "0x40006C0")]
	private const ProfilerRecorderOptions s_RecorderDefaultOptions = (ProfilerRecorderOptions)153;

	[Token(Token = "0x40006C1")]
	[FieldOffset(Offset = "0x0")]
	internal static Recorder s_InvalidRecorder;

	[Token(Token = "0x40006C2")]
	[FieldOffset(Offset = "0x10")]
	private ProfilerRecorder m_RecorderCPU;

	[Token(Token = "0x40006C3")]
	[FieldOffset(Offset = "0x18")]
	private ProfilerRecorder m_RecorderGPU;

	[Token(Token = "0x170002BB")]
	public bool enabled
	{
		[Token(Token = "0x6001085")]
		[Address(RVA = "0x69300F0", Offset = "0x692F0F0", VA = "0x69300F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001086")]
		[Address(RVA = "0x6930100", Offset = "0x692F100", VA = "0x6930100")]
		set
		{
		}
	}

	[Token(Token = "0x170002BC")]
	public long elapsedNanoseconds
	{
		[Token(Token = "0x6001087")]
		[Address(RVA = "0x69301C0", Offset = "0x692F1C0", VA = "0x69301C0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170002BD")]
	public long gpuElapsedNanoseconds
	{
		[Token(Token = "0x6001088")]
		[Address(RVA = "0x69301F0", Offset = "0x692F1F0", VA = "0x69301F0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170002BE")]
	public int sampleBlockCount
	{
		[Token(Token = "0x6001089")]
		[Address(RVA = "0x6930220", Offset = "0x692F220", VA = "0x6930220")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002BF")]
	public int gpuSampleBlockCount
	{
		[Token(Token = "0x600108A")]
		[Address(RVA = "0x6930270", Offset = "0x692F270", VA = "0x6930270")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001082")]
	[Address(RVA = "0x692FF90", Offset = "0x692EF90", VA = "0x692FF90")]
	internal Recorder()
	{
	}

	[Token(Token = "0x6001083")]
	[Address(RVA = "0x692FFA0", Offset = "0x692EFA0", VA = "0x692FFA0")]
	internal Recorder(ProfilerRecorderHandle handle)
	{
	}

	[Token(Token = "0x6001084")]
	[Address(RVA = "0x6930050", Offset = "0x692F050", VA = "0x6930050", Slot = "1")]
	~Recorder()
	{
	}

	[Token(Token = "0x600108B")]
	[Address(RVA = "0x6930160", Offset = "0x692F160", VA = "0x6930160")]
	private void SetEnabled(bool state)
	{
	}
}
