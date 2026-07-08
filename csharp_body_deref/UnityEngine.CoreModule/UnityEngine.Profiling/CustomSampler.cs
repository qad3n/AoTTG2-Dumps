using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Profiling;

[Token(Token = "0x20001B5")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/ScriptBindings/Sampler.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/Marker.h")]
public sealed class CustomSampler : Sampler
{
	[Token(Token = "0x400062F")]
	[FieldOffset(Offset = "0x0")]
	internal static CustomSampler s_InvalidCustomSampler;

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x4AE72D0", Offset = "0x4AE72D0", VA = "0x4AE72D0")]
	internal CustomSampler()
	{
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x4AE7340", Offset = "0x4AE7340", VA = "0x4AE7340")]
	internal CustomSampler(IntPtr ptr)
	{
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x4AE73A0", Offset = "0x4AE73A0", VA = "0x4AE73A0")]
	public static CustomSampler Create(string name, bool collectGpuData = false)
	{
		return null;
	}
}
