// ==================== AoTTG2 cross-reference ====================
// Type: Unity.IO.LowLevel.Unsafe.AsyncReadManagerRequestMetric
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace Unity.IO.LowLevel.Unsafe;

[Token(Token = "0x2000047")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeConditional("ENABLE_PROFILER")]
public struct AsyncReadManagerRequestMetric
{
	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly string _003CAssetName_003Ek__BackingField;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly string _003CFileName_003Ek__BackingField;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly ulong _003COffsetBytes_003Ek__BackingField;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly ulong _003CSizeBytes_003Ek__BackingField;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly ulong _003CAssetTypeId_003Ek__BackingField;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x28")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly ulong _003CCurrentBytesRead_003Ek__BackingField;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly uint _003CBatchReadCount_003Ek__BackingField;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x34")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly bool _003CIsBatchRead_003Ek__BackingField;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly ProcessingState _003CState_003Ek__BackingField;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x3C")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly FileReadType _003CReadType_003Ek__BackingField;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x40")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly Priority _003CPriorityLevel_003Ek__BackingField;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x44")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly AssetLoadingSubsystem _003CSubsystem_003Ek__BackingField;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x48")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly double _003CRequestTimeMicroseconds_003Ek__BackingField;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly double _003CTimeInQueueMicroseconds_003Ek__BackingField;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x58")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly double _003CTotalTimeMicroseconds_003Ek__BackingField;
}
