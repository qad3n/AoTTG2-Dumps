// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Profiling.CustomSampler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Profiling;

[Token(Token = "0x20001B8")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/ScriptBindings/Sampler.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/Marker.h")]
public sealed class CustomSampler : Sampler
{
	[Token(Token = "0x400062F")]
	[FieldOffset(Offset = "0x0")]
	internal static CustomSampler s_InvalidCustomSampler;

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x4E0EC00", Offset = "0x4E0EC00", VA = "0x4E0EC00")]
	internal CustomSampler()
	{
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x4E0EC70", Offset = "0x4E0EC70", VA = "0x4E0EC70")]
	internal CustomSampler(IntPtr ptr)
	{
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x4E0ECD0", Offset = "0x4E0ECD0", VA = "0x4E0ECD0")]
	public static CustomSampler Create(string name, bool collectGpuData = false)
	{
		return null;
	}
}
