// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UISystemProfilerApi
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x200000A")]
[UnityEngine.Bindings.StaticAccessor("UI::SystemProfilerApi", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[IgnoredByDeepProfiler]
[UnityEngine.Bindings.NativeHeader("Modules/UI/Canvas.h")]
public static class UISystemProfilerApi
{
	[Token(Token = "0x200000B")]
	public enum SampleType
	{
		[Token(Token = "0x4000014")]
		Layout,
		[Token(Token = "0x4000015")]
		Render
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x50BF1D0", Offset = "0x50BF1D0", VA = "0x50BF1D0")]
	public static extern void BeginSample(SampleType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000099")]
	[Address(RVA = "0x50BF200", Offset = "0x50BF200", VA = "0x50BF200")]
	public static extern void EndSample(SampleType type);

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x50BF230", Offset = "0x50BF230", VA = "0x50BF230")]
	public static void AddMarker(string name, Object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009B")]
	[Address(RVA = "0x50BF2E0", Offset = "0x50BF2E0", VA = "0x50BF2E0")]
	private static extern void AddMarker_Injected(string name, IntPtr obj);
}
