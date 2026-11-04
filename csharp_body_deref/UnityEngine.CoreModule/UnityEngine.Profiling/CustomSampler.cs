// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Profiling.CustomSampler
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Profiling;

[Token(Token = "0x20001F0")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/Marker.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/ScriptBindings/Sampler.bindings.h")]
public sealed class CustomSampler : Sampler
{
	[Token(Token = "0x20001F1")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6001079")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(CustomSampler customSampler)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x40006C1")]
	[FieldOffset(Offset = "0x0")]
	internal static CustomSampler s_InvalidCustomSampler;

	[Token(Token = "0x6001075")]
	[Address(RVA = "0x2F48D50", Offset = "0x2F47350", VA = "0x182F48D50")]
	internal CustomSampler()
	{
	}

	[Token(Token = "0x6001076")]
	[Address(RVA = "0x2F48DA0", Offset = "0x2F473A0", VA = "0x182F48DA0")]
	private CustomSampler(IntPtr ptr)
	{
	}

	[Token(Token = "0x6001077")]
	[Address(RVA = "0x2F48BC0", Offset = "0x2F471C0", VA = "0x182F48BC0")]
	public static CustomSampler Create(string name, bool collectGpuData = false)
	{
		return null;
	}
}
