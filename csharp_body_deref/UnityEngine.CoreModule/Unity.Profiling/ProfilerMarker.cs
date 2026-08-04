// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Profiling.ProfilerMarker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using JetBrains.Annotations;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.Scripting;

namespace Unity.Profiling;

[Token(Token = "0x200001C")]
[UnityEngine.Scripting.UsedByNativeCode]
[IgnoredByDeepProfiler]
public struct ProfilerMarker
{
	[Token(Token = "0x200001D")]
	[UnityEngine.Scripting.UsedByNativeCode]
	[IgnoredByDeepProfiler]
	public struct AutoScope : IDisposable
	{
		[Token(Token = "0x4000031")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal readonly IntPtr m_Ptr;

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x4DAC2B0", Offset = "0x4DAC2B0", VA = "0x4DAC2B0")]
		internal AutoScope(IntPtr markerPtr)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x4DAC2F0", Offset = "0x4DAC2F0", VA = "0x4DAC2F0", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[NonSerialized]
	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal readonly IntPtr m_Ptr;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4DAC0C0", Offset = "0x4DAC0C0", VA = "0x4DAC0C0")]
	public ProfilerMarker(string name)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4DAC160", Offset = "0x4DAC160", VA = "0x4DAC160")]
	public ProfilerMarker(ProfilerCategory category, string name)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4DAC1B0", Offset = "0x4DAC1B0", VA = "0x4DAC1B0")]
	[Pure]
	[Conditional("ENABLE_PROFILER")]
	public void Begin()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4DAC210", Offset = "0x4DAC210", VA = "0x4DAC210")]
	[Conditional("ENABLE_PROFILER")]
	[Pure]
	public void End()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4DAC270", Offset = "0x4DAC270", VA = "0x4DAC270")]
	[Pure]
	public AutoScope Auto()
	{
		return default(AutoScope);
	}
}
