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
	[Address(RVA = "0x4D978A0", Offset = "0x4D978A0", VA = "0x4D978A0")]
	public static extern void BeginSample(SampleType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4D978D0", Offset = "0x4D978D0", VA = "0x4D978D0")]
	public static extern void EndSample(SampleType type);

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4D97900", Offset = "0x4D97900", VA = "0x4D97900")]
	public static void AddMarker(string name, Object obj)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009B")]
	[Address(RVA = "0x4D979B0", Offset = "0x4D979B0", VA = "0x4D979B0")]
	private static extern void AddMarker_Injected(string name, IntPtr obj);
}
