// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility
// Update status: CHANGED in this game update
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
[IgnoredByDeepProfiler]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Profiler/ScriptBindings/ProfilerUnsafeUtility.bindings.h")]
public static class ProfilerUnsafeUtility
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x2ECEC00", Offset = "0x2ECD200", VA = "0x182ECEC00")]
	[UnityEngine.Bindings.ThreadSafe]
	internal unsafe static extern ushort CreateCategory__Unmanaged(byte* name, int nameLen, ProfilerCategoryColor colorIndex);

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x2ECEFD0", Offset = "0x2ECD5D0", VA = "0x182ECEFD0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static ProfilerCategoryDescription GetCategoryDescription(ushort categoryId)
	{
		return default(ProfilerCategoryDescription);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x2ECED90", Offset = "0x2ECD390", VA = "0x182ECED90")]
	[UnityEngine.Bindings.ThreadSafe]
	public static IntPtr CreateMarker(string name, ushort categoryId, MarkerFlags flags, int metadataCount)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x2ECED40", Offset = "0x2ECD340", VA = "0x182ECED40")]
	[UnityEngine.Bindings.ThreadSafe]
	internal unsafe static extern IntPtr CreateMarker__Unmanaged(byte* name, int nameLen, ushort categoryId, MarkerFlags flags, int metadataCount);

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x2ECF450", Offset = "0x2ECDA50", VA = "0x182ECF450")]
	[UnityEngine.Bindings.ThreadSafe]
	public static void SetMarkerMetadata(IntPtr markerPtr, int index, string name, byte type, byte unit)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x2ECF3E0", Offset = "0x2ECD9E0", VA = "0x182ECF3E0")]
	[UnityEngine.Bindings.ThreadSafe]
	internal unsafe static extern void SetMarkerMetadata__Unmanaged(IntPtr markerPtr, int index, byte* name, int nameLen, byte type, byte unit);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x2ECEBC0", Offset = "0x2ECD1C0", VA = "0x182ECEBC0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void BeginSample(IntPtr markerPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x2ECEF40", Offset = "0x2ECD540", VA = "0x182ECEF40")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void EndSample(IntPtr markerPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x2ECF600", Offset = "0x2ECDC00", VA = "0x182ECF600")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern void SingleSampleWithMetadata(IntPtr markerPtr, int metadataCount, void* metadata);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x2ECEC60", Offset = "0x2ECD260", VA = "0x182ECEC60")]
	[UnityEngine.Bindings.ThreadSafe]
	internal unsafe static extern void* CreateCounterValue__Unmanaged(out IntPtr counterPtr, byte* name, int nameLen, ushort categoryId, MarkerFlags flags, byte dataType, byte dataUnit, int dataSize, ProfilerCounterOptions counterOptions);

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x2ECF650", Offset = "0x2ECDC50", VA = "0x182ECF650")]
	internal unsafe static string Utf8ToString(byte* chars, int charsLen)
	{
		return null;
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x2ECF0D0", Offset = "0x2ECD6D0", VA = "0x182ECF0D0")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = false)]
	[UnityEngine.Bindings.NativeConditional("ENABLE_MEM_PROFILER")]
	internal static IntPtr GetOrCreateMemLabel(string areaName, string objectName)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x2ECF080", Offset = "0x2ECD680", VA = "0x182ECF080")]
	[UnityEngine.Bindings.ThreadSafe(ThrowsException = false)]
	[UnityEngine.Bindings.NativeConditional("ENABLE_MEM_PROFILER")]
	internal unsafe static extern IntPtr GetOrCreateMemLabel__Unmanaged(byte* areaName, int areaNameLen, byte* objectName, int objectNameLen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x2ECEF80", Offset = "0x2ECD580", VA = "0x182ECEF80")]
	private static extern void GetCategoryDescription_Injected(ushort categoryId, out ProfilerCategoryDescription ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x2ECECF0", Offset = "0x2ECD2F0", VA = "0x182ECECF0")]
	private static extern IntPtr CreateMarker_Injected(ref ManagedSpanWrapper name, ushort categoryId, MarkerFlags flags, int metadataCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x2ECF380", Offset = "0x2ECD980", VA = "0x182ECF380")]
	private static extern void SetMarkerMetadata_Injected(IntPtr markerPtr, int index, ref ManagedSpanWrapper name, byte type, byte unit);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x2ECF030", Offset = "0x2ECD630", VA = "0x182ECF030")]
	private static extern IntPtr GetOrCreateMemLabel_Injected(ref ManagedSpanWrapper areaName, ref ManagedSpanWrapper objectName);
}
