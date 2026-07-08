using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace Unity.IO.LowLevel.Unsafe;

[Token(Token = "0x2000034")]
[UnityEngine.Bindings.NativeConditional("ENABLE_PROFILER")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct AsyncReadManagerRequestMetric
{
	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly string _003CAssetName_003Ek__BackingField;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly string _003CFileName_003Ek__BackingField;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly ulong _003COffsetBytes_003Ek__BackingField;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly ulong _003CSizeBytes_003Ek__BackingField;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly ulong _003CAssetTypeId_003Ek__BackingField;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x28")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly ulong _003CCurrentBytesRead_003Ek__BackingField;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly uint _003CBatchReadCount_003Ek__BackingField;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x34")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly bool _003CIsBatchRead_003Ek__BackingField;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly ProcessingState _003CState_003Ek__BackingField;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x3C")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly FileReadType _003CReadType_003Ek__BackingField;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly Priority _003CPriorityLevel_003Ek__BackingField;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x44")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly AssetLoadingSubsystem _003CSubsystem_003Ek__BackingField;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x48")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly double _003CRequestTimeMicroseconds_003Ek__BackingField;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly double _003CTimeInQueueMicroseconds_003Ek__BackingField;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly double _003CTotalTimeMicroseconds_003Ek__BackingField;
}
