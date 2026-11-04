// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UISystemProfilerApi
// Update status: CHANGED in this game update
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

[Token(Token = "0x200000B")]
[IgnoredByDeepProfiler]
[UnityEngine.Bindings.NativeHeader("Modules/UI/Canvas.h")]
[UnityEngine.Bindings.StaticAccessor("UI::SystemProfilerApi", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public static class UISystemProfilerApi
{
	[Token(Token = "0x200000C")]
	public enum SampleType
	{
		[Token(Token = "0x4000014")]
		Layout,
		[Token(Token = "0x4000015")]
		Render
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x32C2640", Offset = "0x32C0C40", VA = "0x1832C2640")]
	public static extern void BeginSample(SampleType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x32C2680", Offset = "0x32C0C80", VA = "0x1832C2680")]
	public static extern void EndSample(SampleType type);

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x32C2480", Offset = "0x32C0A80", VA = "0x1832C2480")]
	public static void AddMarker(string name, Object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x32C2430", Offset = "0x32C0A30", VA = "0x1832C2430")]
	private static extern void AddMarker_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper name, IntPtr obj);
}
