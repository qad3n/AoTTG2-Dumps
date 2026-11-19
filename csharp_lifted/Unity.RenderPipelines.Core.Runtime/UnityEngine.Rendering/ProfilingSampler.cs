// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProfilingSampler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.Profiling;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000D6")]
[IgnoredByDeepProfiler]
public class ProfilingSampler
{
	[Token(Token = "0x40002B0")]
	[FieldOffset(Offset = "0x28")]
	private Recorder m_Recorder;

	[Token(Token = "0x40002B1")]
	[FieldOffset(Offset = "0x30")]
	private Recorder m_InlineRecorder;

	[Token(Token = "0x170000BD")]
	internal CustomSampler sampler
	{
		[Token(Token = "0x60007B3")]
		[Address(RVA = "0x64D88F0", Offset = "0x64D78F0", VA = "0x64D88F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007B4")]
		[Address(RVA = "0x64D8900", Offset = "0x64D7900", VA = "0x64D8900")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000BE")]
	internal CustomSampler inlineSampler
	{
		[Token(Token = "0x60007B5")]
		[Address(RVA = "0x64D8910", Offset = "0x64D7910", VA = "0x64D8910")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007B6")]
		[Address(RVA = "0x64D8920", Offset = "0x64D7920", VA = "0x64D8920")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000BF")]
	public string name
	{
		[Token(Token = "0x60007B7")]
		[Address(RVA = "0x64D8930", Offset = "0x64D7930", VA = "0x64D8930")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007B8")]
		[Address(RVA = "0x64D8940", Offset = "0x64D7940", VA = "0x64D8940")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000C0")]
	public bool enableRecording
	{
		[Token(Token = "0x60007B9")]
		[Address(RVA = "0x64D8950", Offset = "0x64D7950", VA = "0x64D8950")]
		set
		{
		}
	}

	[Token(Token = "0x170000C1")]
	public float gpuElapsedTime
	{
		[Token(Token = "0x60007BA")]
		[Address(RVA = "0x64D8990", Offset = "0x64D7990", VA = "0x64D8990")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000C2")]
	public int gpuSampleCount
	{
		[Token(Token = "0x60007BB")]
		[Address(RVA = "0x64D89E0", Offset = "0x64D79E0", VA = "0x64D89E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C3")]
	public float cpuElapsedTime
	{
		[Token(Token = "0x60007BC")]
		[Address(RVA = "0x64D8A20", Offset = "0x64D7A20", VA = "0x64D8A20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000C4")]
	public int cpuSampleCount
	{
		[Token(Token = "0x60007BD")]
		[Address(RVA = "0x64D8A70", Offset = "0x64D7A70", VA = "0x64D8A70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C5")]
	public float inlineCpuElapsedTime
	{
		[Token(Token = "0x60007BE")]
		[Address(RVA = "0x64D8AB0", Offset = "0x64D7AB0", VA = "0x64D8AB0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000C6")]
	public int inlineCpuSampleCount
	{
		[Token(Token = "0x60007BF")]
		[Address(RVA = "0x64D8B00", Offset = "0x64D7B00", VA = "0x64D8B00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60007AE")]
	public static ProfilingSampler Get<TEnum>(TEnum marker) where TEnum : Enum
	{
		return null;
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x64D86E0", Offset = "0x64D76E0", VA = "0x64D86E0")]
	public ProfilingSampler(string name)
	{
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x64D8810", Offset = "0x64D7810", VA = "0x64D8810")]
	public void Begin(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x64D8870", Offset = "0x64D7870", VA = "0x64D8870")]
	public void End(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x64D88D0", Offset = "0x64D78D0", VA = "0x64D88D0")]
	internal bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x64D8B40", Offset = "0x64D7B40", VA = "0x64D8B40")]
	private ProfilingSampler()
	{
	}
}
