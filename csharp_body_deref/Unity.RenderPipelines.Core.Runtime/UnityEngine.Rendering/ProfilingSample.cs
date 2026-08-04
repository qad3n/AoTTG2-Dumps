// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProfilingSample
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4BAD9D0", Offset = "0x4BAD9D0", VA = "0x4BAD9D0")]
	public ProfilingSample(CommandBuffer cmd, string name, [Optional] CustomSampler sampler)
	{
	}

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x4BADA70", Offset = "0x4BADA70", VA = "0x4BADA70")]
	public ProfilingSample(CommandBuffer cmd, string format, object arg)
	{
	}

	[Token(Token = "0x6000866")]
	[Address(RVA = "0x4BADB10", Offset = "0x4BADB10", VA = "0x4BADB10")]
	public ProfilingSample(CommandBuffer cmd, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x4BADBB0", Offset = "0x4BADBB0", VA = "0x4BADBB0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x4BADC20", Offset = "0x4BADC20", VA = "0x4BADC20")]
	private void Dispose(bool disposing)
	{
	}
}
