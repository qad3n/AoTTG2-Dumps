// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace Unity.Profiling.LowLevel.Unsafe;

[Token(Token = "0x200002C")]
[IgnoredByDeepProfiler]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/ScriptBindings/ProfilerUnsafeUtility.bindings.h")]
public static class ProfilerUnsafeUtility
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4DACEA0", Offset = "0x4DACEA0", VA = "0x4DACEA0")]
	[UnityEngine.Bindings.ThreadSafe]
	internal unsafe static extern ushort CreateCategory__Unmanaged(byte* name, int nameLen, ProfilerCategoryColor colorIndex);

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4DABF20", Offset = "0x4DABF20", VA = "0x4DABF20")]
	[UnityEngine.Bindings.ThreadSafe]
	public static ProfilerCategoryDescription GetCategoryDescription(ushort categoryId)
	{
		return default(ProfilerCategoryDescription);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4DAC110", Offset = "0x4DAC110", VA = "0x4DAC110")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr CreateMarker(string name, ushort categoryId, MarkerFlags flags, int metadataCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4DACF20", Offset = "0x4DACF20", VA = "0x4DACF20")]
	[UnityEngine.Bindings.ThreadSafe]
	internal unsafe static extern IntPtr CreateMarker__Unmanaged(byte* name, int nameLen, ushort categoryId, MarkerFlags flags, int metadataCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4DACF70", Offset = "0x4DACF70", VA = "0x4DACF70")]
	[UnityEngine.Bindings.ThreadSafe]
	internal unsafe static extern void SetMarkerMetadata__Unmanaged(IntPtr markerPtr, int index, byte* name, int nameLen, byte type, byte unit);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4DAC1E0", Offset = "0x4DAC1E0", VA = "0x4DAC1E0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void BeginSample(IntPtr markerPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4DAC240", Offset = "0x4DAC240", VA = "0x4DAC240")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void EndSample(IntPtr markerPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4DACFD0", Offset = "0x4DACFD0", VA = "0x4DACFD0")]
	[UnityEngine.Bindings.ThreadSafe]
	internal unsafe static extern void* CreateCounterValue__Unmanaged(out IntPtr counterPtr, byte* name, int nameLen, ushort categoryId, MarkerFlags flags, byte dataType, byte dataUnit, int dataSize, ProfilerCounterOptions counterOptions);

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4DABF80", Offset = "0x4DABF80", VA = "0x4DABF80")]
	internal unsafe static string Utf8ToString(byte* chars, int charsLen)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4DACEE0", Offset = "0x4DACEE0", VA = "0x4DACEE0")]
	private static extern void GetCategoryDescription_Injected(ushort categoryId, out ProfilerCategoryDescription ret);
}
