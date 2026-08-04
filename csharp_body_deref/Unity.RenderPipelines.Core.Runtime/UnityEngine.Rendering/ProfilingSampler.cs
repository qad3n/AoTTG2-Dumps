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
		[Address(RVA = "0x4BAD730", Offset = "0x4BAD730", VA = "0x4BAD730")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000853")]
		[Address(RVA = "0x4BAD740", Offset = "0x4BAD740", VA = "0x4BAD740")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D5")]
	internal CustomSampler inlineSampler
	{
		[Token(Token = "0x6000854")]
		[Address(RVA = "0x4BAD750", Offset = "0x4BAD750", VA = "0x4BAD750")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000855")]
		[Address(RVA = "0x4BAD760", Offset = "0x4BAD760", VA = "0x4BAD760")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D6")]
	public string name
	{
		[Token(Token = "0x6000856")]
		[Address(RVA = "0x4BAD770", Offset = "0x4BAD770", VA = "0x4BAD770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000857")]
		[Address(RVA = "0x4BAD780", Offset = "0x4BAD780", VA = "0x4BAD780")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000D7")]
	public bool enableRecording
	{
		[Token(Token = "0x6000858")]
		[Address(RVA = "0x4BAD790", Offset = "0x4BAD790", VA = "0x4BAD790")]
		set
		{
		}
	}

	[Token(Token = "0x170000D8")]
	public float gpuElapsedTime
	{
		[Token(Token = "0x6000859")]
		[Address(RVA = "0x4BAD7D0", Offset = "0x4BAD7D0", VA = "0x4BAD7D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000D9")]
	public int gpuSampleCount
	{
		[Token(Token = "0x600085A")]
		[Address(RVA = "0x4BAD820", Offset = "0x4BAD820", VA = "0x4BAD820")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000DA")]
	public float cpuElapsedTime
	{
		[Token(Token = "0x600085B")]
		[Address(RVA = "0x4BAD860", Offset = "0x4BAD860", VA = "0x4BAD860")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000DB")]
	public int cpuSampleCount
	{
		[Token(Token = "0x600085C")]
		[Address(RVA = "0x4BAD8B0", Offset = "0x4BAD8B0", VA = "0x4BAD8B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000DC")]
	public float inlineCpuElapsedTime
	{
		[Token(Token = "0x600085D")]
		[Address(RVA = "0x4BAD8F0", Offset = "0x4BAD8F0", VA = "0x4BAD8F0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000DD")]
	public int inlineCpuSampleCount
	{
		[Token(Token = "0x600085E")]
		[Address(RVA = "0x4BAD940", Offset = "0x4BAD940", VA = "0x4BAD940")]
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
	[Address(RVA = "0x4BAD520", Offset = "0x4BAD520", VA = "0x4BAD520")]
	public ProfilingSampler(string name)
	{
	}

	[Token(Token = "0x600084F")]
	[Address(RVA = "0x4BAD650", Offset = "0x4BAD650", VA = "0x4BAD650")]
	public void Begin(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000850")]
	[Address(RVA = "0x4BAD6B0", Offset = "0x4BAD6B0", VA = "0x4BAD6B0")]
	public void End(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000851")]
	[Address(RVA = "0x4BAD710", Offset = "0x4BAD710", VA = "0x4BAD710")]
	internal bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x4BAD980", Offset = "0x4BAD980", VA = "0x4BAD980")]
	private ProfilingSampler()
	{
	}
}
