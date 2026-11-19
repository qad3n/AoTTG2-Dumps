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
	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x6CCE670", Offset = "0x6CCD670", VA = "0x6CCE670")]
	public static extern void BeginSample(SampleType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x6CCE6A0", Offset = "0x6CCD6A0", VA = "0x6CCE6A0")]
	public static extern void EndSample(SampleType type);

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x6CCE6D0", Offset = "0x6CCD6D0", VA = "0x6CCE6D0")]
	public static void AddMarker(string name, Object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x6CCE880", Offset = "0x6CCD880", VA = "0x6CCE880")]
	private static extern void AddMarker_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper name, IntPtr obj);
}
