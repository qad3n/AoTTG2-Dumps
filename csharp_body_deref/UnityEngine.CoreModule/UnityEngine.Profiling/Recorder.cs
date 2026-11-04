// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Profiling.Recorder
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/Recorder.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Profiling;
using Unity.Profiling.LowLevel.Unsafe;
using UnityEngine.Scripting;

namespace UnityEngine.Profiling;

[Token(Token = "0x20001EE")]
[UnityEngine.Scripting.UsedByNativeCode]
public sealed class Recorder
{
	[Token(Token = "0x40006BB")]
	private const ProfilerRecorderOptions s_RecorderDefaultOptions = (ProfilerRecorderOptions)153;

	[Token(Token = "0x40006BC")]
	[FieldOffset(Offset = "0x0")]
	internal static Recorder s_InvalidRecorder;

	[Token(Token = "0x40006BD")]
	[FieldOffset(Offset = "0x10")]
	private ProfilerRecorder m_RecorderCPU;

	[Token(Token = "0x40006BE")]
	[FieldOffset(Offset = "0x18")]
	private ProfilerRecorder m_RecorderGPU;

	[Token(Token = "0x170002B4")]
	public bool enabled
	{
		[Token(Token = "0x6001068")]
		[Address(RVA = "0x2F51F80", Offset = "0x2F50580", VA = "0x182F51F80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001069")]
		[Address(RVA = "0x2F51DB0", Offset = "0x2F503B0", VA = "0x182F51DB0")]
		set
		{
		}
	}

	[Token(Token = "0x170002B5")]
	public long elapsedNanoseconds
	{
		[Token(Token = "0x600106A")]
		[Address(RVA = "0x2F51F50", Offset = "0x2F50550", VA = "0x182F51F50")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170002B6")]
	public long gpuElapsedNanoseconds
	{
		[Token(Token = "0x600106B")]
		[Address(RVA = "0x2F51F90", Offset = "0x2F50590", VA = "0x182F51F90")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170002B7")]
	public int sampleBlockCount
	{
		[Token(Token = "0x600106C")]
		[Address(RVA = "0x2F52010", Offset = "0x2F50610", VA = "0x182F52010")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B8")]
	public int gpuSampleBlockCount
	{
		[Token(Token = "0x600106D")]
		[Address(RVA = "0x2F51FC0", Offset = "0x2F505C0", VA = "0x182F51FC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001065")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal Recorder()
	{
	}

	[Token(Token = "0x6001066")]
	[Address(RVA = "0x2F51E90", Offset = "0x2F50490", VA = "0x182F51E90")]
	internal Recorder(ProfilerRecorderHandle handle)
	{
	}

	[Token(Token = "0x6001067")]
	[Address(RVA = "0x2F51D40", Offset = "0x2F50340", VA = "0x182F51D40", Slot = "1")]
	~Recorder()
	{
	}

	[Token(Token = "0x600106E")]
	[Address(RVA = "0x2F51DB0", Offset = "0x2F503B0", VA = "0x182F51DB0")]
	private void SetEnabled(bool state)
	{
	}
}
