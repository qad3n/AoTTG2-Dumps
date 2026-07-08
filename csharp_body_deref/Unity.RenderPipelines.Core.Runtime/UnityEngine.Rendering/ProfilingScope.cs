using System;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000101")]
public struct ProfilingScope : IDisposable
{
	[Token(Token = "0x6000860")]
	[Address(RVA = "0x48888A0", Offset = "0x48888A0", VA = "0x48888A0")]
	public ProfilingScope(ProfilingSampler sampler)
	{
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x48888B0", Offset = "0x48888B0", VA = "0x48888B0")]
	public ProfilingScope(CommandBuffer cmd, ProfilingSampler sampler)
	{
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x48888C0", Offset = "0x48888C0", VA = "0x48888C0")]
	public ProfilingScope(BaseCommandBuffer cmd, ProfilingSampler sampler)
	{
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x48888D0", Offset = "0x48888D0", VA = "0x48888D0", Slot = "4")]
	public void Dispose()
	{
	}
}
