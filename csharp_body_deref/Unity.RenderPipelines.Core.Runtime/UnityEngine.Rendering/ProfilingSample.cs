using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.Profiling;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000102")]
[Obsolete("Please use ProfilingScope")]
[IgnoredByDeepProfiler]
public struct ProfilingSample : IDisposable
{
	[Token(Token = "0x4000367")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly CommandBuffer m_Cmd;

	[Token(Token = "0x4000368")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly string m_Name;

	[Token(Token = "0x4000369")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool m_Disposed;

	[Token(Token = "0x400036A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private CustomSampler m_Sampler;

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x48888E0", Offset = "0x48888E0", VA = "0x48888E0")]
	public ProfilingSample(CommandBuffer cmd, string name, [Optional] CustomSampler sampler)
	{
	}

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x4888980", Offset = "0x4888980", VA = "0x4888980")]
	public ProfilingSample(CommandBuffer cmd, string format, object arg)
	{
	}

	[Token(Token = "0x6000866")]
	[Address(RVA = "0x4888A20", Offset = "0x4888A20", VA = "0x4888A20")]
	public ProfilingSample(CommandBuffer cmd, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x4888AC0", Offset = "0x4888AC0", VA = "0x4888AC0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x4888B30", Offset = "0x4888B30", VA = "0x4888B30")]
	private void Dispose(bool disposing)
	{
	}
}
