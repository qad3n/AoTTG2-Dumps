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
	[Address(RVA = "0x4A85680", Offset = "0x4A85680", VA = "0x4A85680")]
	[UnityEngine.Bindings.ThreadSafe]
	internal unsafe static extern ushort CreateCategory__Unmanaged(byte* name, int nameLen, ProfilerCategoryColor colorIndex);

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4A84700", Offset = "0x4A84700", VA = "0x4A84700")]
	[UnityEngine.Bindings.ThreadSafe]
	public static ProfilerCategoryDescription GetCategoryDescription(ushort categoryId)
	{
		return default(ProfilerCategoryDescription);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4A848F0", Offset = "0x4A848F0", VA = "0x4A848F0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern IntPtr CreateMarker(string name, ushort categoryId, MarkerFlags flags, int metadataCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4A85700", Offset = "0x4A85700", VA = "0x4A85700")]
	[UnityEngine.Bindings.ThreadSafe]
	internal unsafe static extern IntPtr CreateMarker__Unmanaged(byte* name, int nameLen, ushort categoryId, MarkerFlags flags, int metadataCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4A85750", Offset = "0x4A85750", VA = "0x4A85750")]
	[UnityEngine.Bindings.ThreadSafe]
	internal unsafe static extern void SetMarkerMetadata__Unmanaged(IntPtr markerPtr, int index, byte* name, int nameLen, byte type, byte unit);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4A849C0", Offset = "0x4A849C0", VA = "0x4A849C0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void BeginSample(IntPtr markerPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4A84A20", Offset = "0x4A84A20", VA = "0x4A84A20")]
	[UnityEngine.Bindings.ThreadSafe]
	public static extern void EndSample(IntPtr markerPtr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4A857B0", Offset = "0x4A857B0", VA = "0x4A857B0")]
	[UnityEngine.Bindings.ThreadSafe]
	internal unsafe static extern void* CreateCounterValue__Unmanaged(out IntPtr counterPtr, byte* name, int nameLen, ushort categoryId, MarkerFlags flags, byte dataType, byte dataUnit, int dataSize, ProfilerCounterOptions counterOptions);

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4A84760", Offset = "0x4A84760", VA = "0x4A84760")]
	internal unsafe static string Utf8ToString(byte* chars, int charsLen)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4A856C0", Offset = "0x4A856C0", VA = "0x4A856C0")]
	private static extern void GetCategoryDescription_Injected(ushort categoryId, out ProfilerCategoryDescription ret);
}
