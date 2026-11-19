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

[Token(Token = "0x20001F1")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/ScriptBindings/Sampler.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/Marker.h")]
public sealed class CustomSampler : Sampler
{
	[Token(Token = "0x20001F2")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6001096")]
		[Address(RVA = "0x69306A0", Offset = "0x692F6A0", VA = "0x69306A0")]
		public static IntPtr ConvertToNative(CustomSampler customSampler)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x40006C6")]
	[FieldOffset(Offset = "0x0")]
	internal static CustomSampler s_InvalidCustomSampler;

	[Token(Token = "0x6001092")]
	[Address(RVA = "0x6930460", Offset = "0x692F460", VA = "0x6930460")]
	internal CustomSampler()
	{
	}

	[Token(Token = "0x6001093")]
	[Address(RVA = "0x69304D0", Offset = "0x692F4D0", VA = "0x69304D0")]
	private CustomSampler(IntPtr ptr)
	{
	}

	[Token(Token = "0x6001094")]
	[Address(RVA = "0x6930530", Offset = "0x692F530", VA = "0x6930530")]
	public static CustomSampler Create(string name, bool collectGpuData = false)
	{
		return null;
	}
}
