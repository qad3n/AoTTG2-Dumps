// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Profiling.ProfilerMarker
// Update status: CHANGED in this game update
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
using Unity.Profiling.LowLevel;
using UnityEngine.Scripting;

namespace Unity.Profiling;

[Token(Token = "0x2000027")]
[IgnoredByDeepProfiler]
[UnityEngine.Scripting.UsedByNativeCode]
public struct ProfilerMarker
{
	[Token(Token = "0x2000028")]
	[IgnoredByDeepProfiler]
	[UnityEngine.Scripting.UsedByNativeCode]
	public struct AutoScope : IDisposable
	{
		[Token(Token = "0x4000049")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal readonly IntPtr m_Ptr;

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x68B4FD0", Offset = "0x68B3FD0", VA = "0x68B4FD0")]
		internal AutoScope(IntPtr markerPtr)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x68B5010", Offset = "0x68B4010", VA = "0x68B5010", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[NonSerialized]
	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal readonly IntPtr m_Ptr;

	[Token(Token = "0x1700000A")]
	public IntPtr Handle
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x68B4CE0", Offset = "0x68B3CE0", VA = "0x68B4CE0")]
		get
		{
			return default(IntPtr);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x68B4CF0", Offset = "0x68B3CF0", VA = "0x68B4CF0")]
	public ProfilerMarker(string name)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x68B4E90", Offset = "0x68B3E90", VA = "0x68B4E90")]
	public ProfilerMarker(ProfilerCategory category, string name)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007C")]
	[Address(RVA = "0x68B4EB0", Offset = "0x68B3EB0", VA = "0x68B4EB0")]
	public ProfilerMarker(ProfilerCategory category, string name, MarkerFlags flags)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007D")]
	[Address(RVA = "0x68B4ED0", Offset = "0x68B3ED0", VA = "0x68B4ED0")]
	[Conditional("ENABLE_PROFILER")]
	[Pure]
	public void Begin()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007E")]
	[Address(RVA = "0x68B4F30", Offset = "0x68B3F30", VA = "0x68B4F30")]
	[Conditional("ENABLE_PROFILER")]
	[Pure]
	public void End()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600007F")]
	[Address(RVA = "0x68B4F90", Offset = "0x68B3F90", VA = "0x68B4F90")]
	[Pure]
	public AutoScope Auto()
	{
		return default(AutoScope);
	}
}
