using Il2CppDummyDll;
using Unity.Profiling;
using Unity.Profiling.LowLevel.Unsafe;
using UnityEngine.Scripting;

namespace UnityEngine.Profiling;

[Token(Token = "0x20001B3")]
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

	[Token(Token = "0x17000239")]
	public bool enabled
	{
		[Token(Token = "0x6000CB3")]
		[Address(RVA = "0x4AE6D80", Offset = "0x4AE6D80", VA = "0x4AE6D80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000CB4")]
		[Address(RVA = "0x4AE6D90", Offset = "0x4AE6D90", VA = "0x4AE6D90")]
		set
		{
		}
	}

	[Token(Token = "0x1700023A")]
	public long elapsedNanoseconds
	{
		[Token(Token = "0x6000CB5")]
		[Address(RVA = "0x4AE6E50", Offset = "0x4AE6E50", VA = "0x4AE6E50")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700023B")]
	public long gpuElapsedNanoseconds
	{
		[Token(Token = "0x6000CB6")]
		[Address(RVA = "0x4AE6E80", Offset = "0x4AE6E80", VA = "0x4AE6E80")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700023C")]
	public int sampleBlockCount
	{
		[Token(Token = "0x6000CB7")]
		[Address(RVA = "0x4AE6EB0", Offset = "0x4AE6EB0", VA = "0x4AE6EB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023D")]
	public int gpuSampleBlockCount
	{
		[Token(Token = "0x6000CB8")]
		[Address(RVA = "0x4AE6F00", Offset = "0x4AE6F00", VA = "0x4AE6F00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x4AE6C20", Offset = "0x4AE6C20", VA = "0x4AE6C20")]
	internal Recorder()
	{
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x4AE6C30", Offset = "0x4AE6C30", VA = "0x4AE6C30")]
	internal Recorder(ProfilerRecorderHandle handle)
	{
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x4AE6CE0", Offset = "0x4AE6CE0", VA = "0x4AE6CE0", Slot = "1")]
	~Recorder()
	{
	}

	[Token(Token = "0x6000CB9")]
	[Address(RVA = "0x4AE6DF0", Offset = "0x4AE6DF0", VA = "0x4AE6DF0")]
	private void SetEnabled(bool state)
	{
	}
}
