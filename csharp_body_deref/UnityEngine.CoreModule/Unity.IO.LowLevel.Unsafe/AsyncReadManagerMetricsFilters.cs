// ==================== AoTTG2 cross-reference ====================
// Type: Unity.IO.LowLevel.Unsafe.AsyncReadManagerMetricsFilters
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace Unity.IO.LowLevel.Unsafe;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000035")]
[UnityEngine.Bindings.NativeAsStruct]
[UnityEngine.Bindings.NativeConditional("ENABLE_PROFILER")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class AsyncReadManagerMetricsFilters
{
	[Token(Token = "0x40000AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("typeIDs")]
	internal ulong[] TypeIDs;

	[Token(Token = "0x40000AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.NativeName("states")]
	internal ProcessingState[] States;

	[Token(Token = "0x40000AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[UnityEngine.Bindings.NativeName("readTypes")]
	internal FileReadType[] ReadTypes;

	[Token(Token = "0x40000AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[UnityEngine.Bindings.NativeName("priorityLevels")]
	internal Priority[] PriorityLevels;

	[Token(Token = "0x40000AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[UnityEngine.Bindings.NativeName("subsystems")]
	internal AssetLoadingSubsystem[] Subsystems;
}
