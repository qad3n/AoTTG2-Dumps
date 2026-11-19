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

[Token(Token = "0x20000D8")]
[Obsolete("Please use ProfilingScope. #from(2021.1)")]
[IgnoredByDeepProfiler]
public struct ProfilingSample : IDisposable
{
	[Token(Token = "0x40002B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly CommandBuffer m_Cmd;

	[Token(Token = "0x40002B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly string m_Name;

	[Token(Token = "0x40002B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool m_Disposed;

	[Token(Token = "0x40002B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private CustomSampler m_Sampler;

	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x64D8B90", Offset = "0x64D7B90", VA = "0x64D8B90")]
	public ProfilingSample(CommandBuffer cmd, string name, [Optional] CustomSampler sampler)
	{
	}

	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x64D8C30", Offset = "0x64D7C30", VA = "0x64D8C30")]
	public ProfilingSample(CommandBuffer cmd, string format, object arg)
	{
	}

	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x64D8CD0", Offset = "0x64D7CD0", VA = "0x64D8CD0")]
	public ProfilingSample(CommandBuffer cmd, string format, params object[] args)
	{
	}

	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x64D8D70", Offset = "0x64D7D70", VA = "0x64D8D70", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x64D8DE0", Offset = "0x64D7DE0", VA = "0x64D8DE0")]
	private void Dispose(bool disposing)
	{
	}
}
