using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.Profiling;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000100")]
[IgnoredByDeepProfiler]
public class ProfilingSampler
{
	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x28")]
	private Recorder m_Recorder;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x30")]
	private Recorder m_InlineRecorder;

	[Token(Token = "0x170000D4")]
	internal CustomSampler sampler
	{
		[Token(Token = "0x6000852")]
		[Address(RVA = "0x4888640", Offset = "0x4888640", VA = "0x4888640")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000853")]
		[Address(RVA = "0x4888650", Offset = "0x4888650", VA = "0x4888650")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D5")]
	internal CustomSampler inlineSampler
	{
		[Token(Token = "0x6000854")]
		[Address(RVA = "0x4888660", Offset = "0x4888660", VA = "0x4888660")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000855")]
		[Address(RVA = "0x4888670", Offset = "0x4888670", VA = "0x4888670")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D6")]
	public string name
	{
		[Token(Token = "0x6000856")]
		[Address(RVA = "0x4888680", Offset = "0x4888680", VA = "0x4888680")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000857")]
		[Address(RVA = "0x4888690", Offset = "0x4888690", VA = "0x4888690")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D7")]
	public bool enableRecording
	{
		[Token(Token = "0x6000858")]
		[Address(RVA = "0x48886A0", Offset = "0x48886A0", VA = "0x48886A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D8")]
	public float gpuElapsedTime
	{
		[Token(Token = "0x6000859")]
		[Address(RVA = "0x48886E0", Offset = "0x48886E0", VA = "0x48886E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000D9")]
	public int gpuSampleCount
	{
		[Token(Token = "0x600085A")]
		[Address(RVA = "0x4888730", Offset = "0x4888730", VA = "0x4888730")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000DA")]
	public float cpuElapsedTime
	{
		[Token(Token = "0x600085B")]
		[Address(RVA = "0x4888770", Offset = "0x4888770", VA = "0x4888770")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000DB")]
	public int cpuSampleCount
	{
		[Token(Token = "0x600085C")]
		[Address(RVA = "0x48887C0", Offset = "0x48887C0", VA = "0x48887C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000DC")]
	public float inlineCpuElapsedTime
	{
		[Token(Token = "0x600085D")]
		[Address(RVA = "0x4888800", Offset = "0x4888800", VA = "0x4888800")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000DD")]
	public int inlineCpuSampleCount
	{
		[Token(Token = "0x600085E")]
		[Address(RVA = "0x4888850", Offset = "0x4888850", VA = "0x4888850")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600084D")]
	public static ProfilingSampler Get<TEnum>(TEnum marker) where TEnum : Enum
	{
		return null;
	}

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x4888430", Offset = "0x4888430", VA = "0x4888430")]
	public ProfilingSampler(string name)
	{
	}

	[Token(Token = "0x600084F")]
	[Address(RVA = "0x4888560", Offset = "0x4888560", VA = "0x4888560")]
	public void Begin(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000850")]
	[Address(RVA = "0x48885C0", Offset = "0x48885C0", VA = "0x48885C0")]
	public void End(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000851")]
	[Address(RVA = "0x4888620", Offset = "0x4888620", VA = "0x4888620")]
	internal bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x4888890", Offset = "0x4888890", VA = "0x4888890")]
	private ProfilingSampler()
	{
	}
}
