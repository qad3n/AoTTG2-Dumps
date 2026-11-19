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

[Token(Token = "0x2000038")]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/ScriptBindings/ProfilerUnsafeUtility.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[IgnoredByDeepProfiler]
public static class ProfilerUnsafeUtility
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x68B5BB0", Offset = "0x68B4BB0", VA = "0x68B5BB0")]
	[UnityEngine.Bindings.ThreadSafe]
	internal unsafe static extern ushort CreateCategory__Unmanaged(byte* name, int nameLen, ProfilerCategoryColor colorIndex);

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x68B4B40", Offset = "0x68B3B40", VA = "0x68B4B40")]
	[UnityEngine.Bindings.ThreadSafe]
	public static ProfilerCategoryDescription GetCategoryDescription(ushort categoryId)
	{
		return default(ProfilerCategoryDescription);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x68B4D10", Offset = "0x68B3D10", VA = "0x68B4D10")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr CreateMarker(string name, ushort categoryId, MarkerFlags flags, int metadataCount)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x68B5C80", Offset = "0x68B4C80", VA = "0x68B5C80")]
	[UnityEngine.Bindings.ThreadSafe]
	internal unsafe static extern IntPtr CreateMarker__Unmanaged(byte* name, int nameLen, ushort categoryId, MarkerFlags flags, int metadataCount);

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x68B5CD0", Offset = "0x68B4CD0", VA = "0x68B5CD0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static void SetMarkerMetadata(IntPtr markerPtr, int index, string name, byte type, byte unit)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x68B5EA0", Offset = "0x68B4EA0", VA = "0x68B5EA0")]
	[UnityEngine.Bindings.ThreadSafe]
	internal unsafe static extern void SetMarkerMetadata__Unmanaged(IntPtr markerPtr, int index, byte* name, int nameLen, byte type, byte unit);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x68B4F00", Offset = "0x68B3F00", VA = "0x68B4F00")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void BeginSample(IntPtr markerPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x68B4F60", Offset = "0x68B3F60", VA = "0x68B4F60")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void EndSample(IntPtr markerPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x68B5F00", Offset = "0x68B4F00", VA = "0x68B5F00")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void SingleSampleWithMetadata(IntPtr markerPtr, int metadataCount, void* metadata);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x68B5F40", Offset = "0x68B4F40", VA = "0x68B5F40")]
	[UnityEngine.Bindings.ThreadSafe]
	internal unsafe static extern void* CreateCounterValue__Unmanaged(out IntPtr counterPtr, byte* name, int nameLen, ushort categoryId, MarkerFlags flags, byte dataType, byte dataUnit, int dataSize, ProfilerCounterOptions counterOptions);

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x68B4BA0", Offset = "0x68B3BA0", VA = "0x68B4BA0")]
	internal unsafe static string Utf8ToString(byte* chars, int charsLen)
	{
		return null;
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x68B5FA0", Offset = "0x68B4FA0", VA = "0x68B5FA0")]
	[UnityEngine.Bindings.NativeConditional("ENABLE_MEM_PROFILER")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = false)]
	internal static IntPtr GetOrCreateMemLabel(string areaName, string objectName)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x68B6230", Offset = "0x68B5230", VA = "0x68B6230")]
	[UnityEngine.Bindings.NativeConditional("ENABLE_MEM_PROFILER")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = false)]
	internal unsafe static extern IntPtr GetOrCreateMemLabel__Unmanaged(byte* areaName, int areaNameLen, byte* objectName, int objectNameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x68B5BF0", Offset = "0x68B4BF0", VA = "0x68B5BF0")]
	private static extern void GetCategoryDescription_Injected(ushort categoryId, out ProfilerCategoryDescription ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x68B5C30", Offset = "0x68B4C30", VA = "0x68B5C30")]
	private static extern IntPtr CreateMarker_Injected(ref ManagedSpanWrapper name, ushort categoryId, MarkerFlags flags, int metadataCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x68B5E50", Offset = "0x68B4E50", VA = "0x68B5E50")]
	private static extern void SetMarkerMetadata_Injected(IntPtr markerPtr, int index, ref ManagedSpanWrapper name, byte type, byte unit);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x68B61F0", Offset = "0x68B51F0", VA = "0x68B61F0")]
	private static extern IntPtr GetOrCreateMemLabel_Injected(ref ManagedSpanWrapper areaName, ref ManagedSpanWrapper objectName);
}
