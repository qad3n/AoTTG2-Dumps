// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Profiling.LowLevel.Unsafe.ProfilerRecorderDescription
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace Unity.Profiling.LowLevel.Unsafe;

[StructLayout((LayoutKind)2)]
[Token(Token = "0x2000029")]
[UnityEngine.Scripting.UsedByNativeCode]
public readonly struct ProfilerRecorderDescription
{
	[Token(Token = "0x400006D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ProfilerCategory category;

	[Token(Token = "0x400006E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
	private readonly MarkerFlags flags;

	[Token(Token = "0x400006F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private readonly ProfilerMarkerDataType dataType;

	[Token(Token = "0x4000070")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5")]
	private readonly ProfilerMarkerDataUnit unitType;

	[Token(Token = "0x4000071")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly int reserved0;

	[Token(Token = "0x4000072")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	private readonly int nameUtf8Len;

	[Token(Token = "0x4000073")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private unsafe readonly byte* nameUtf8;

	[Token(Token = "0x1700000D")]
	public MarkerFlags Flags
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x4DACC20", Offset = "0x4DACC20", VA = "0x4DACC20")]
		get
		{
			return default(MarkerFlags);
		}
	}
}
