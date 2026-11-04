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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007B4")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000BE")]
	internal CustomSampler inlineSampler
	{
		[Token(Token = "0x60007B5")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007B6")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000BF")]
	public string name
	{
		[Token(Token = "0x60007B7")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007B8")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000C0")]
	public bool enableRecording
	{
		[Token(Token = "0x60007B9")]
		[Address(RVA = "0x2AE4730", Offset = "0x2AE2D30", VA = "0x182AE4730")]
		set
		{
		}
	}

	[Token(Token = "0x170000C1")]
	public float gpuElapsedTime
	{
		[Token(Token = "0x60007BA")]
		[Address(RVA = "0x2AE45F0", Offset = "0x2AE2BF0", VA = "0x182AE45F0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000C2")]
	public int gpuSampleCount
	{
		[Token(Token = "0x60007BB")]
		[Address(RVA = "0x2AE4650", Offset = "0x2AE2C50", VA = "0x182AE4650")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C3")]
	public float cpuElapsedTime
	{
		[Token(Token = "0x60007BC")]
		[Address(RVA = "0x2AE4550", Offset = "0x2AE2B50", VA = "0x182AE4550")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000C4")]
	public int cpuSampleCount
	{
		[Token(Token = "0x60007BD")]
		[Address(RVA = "0x2AE45B0", Offset = "0x2AE2BB0", VA = "0x182AE45B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C5")]
	public float inlineCpuElapsedTime
	{
		[Token(Token = "0x60007BE")]
		[Address(RVA = "0x2AE4690", Offset = "0x2AE2C90", VA = "0x182AE4690")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000C6")]
	public int inlineCpuSampleCount
	{
		[Token(Token = "0x60007BF")]
		[Address(RVA = "0x2AE46F0", Offset = "0x2AE2CF0", VA = "0x182AE46F0")]
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
	[Address(RVA = "0x2AE4420", Offset = "0x2AE2A20", VA = "0x182AE4420")]
	public ProfilingSampler(string name)
	{
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x2AE4340", Offset = "0x2AE2940", VA = "0x182AE4340")]
	public void Begin(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x2AE43A0", Offset = "0x2AE29A0", VA = "0x182AE43A0")]
	public void End(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x2AE4400", Offset = "0x2AE2A00", VA = "0x182AE4400")]
	internal bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	private ProfilingSampler()
	{
	}
}
