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
[Token(Token = "0x2000034")]
[UnityEngine.Scripting.UsedByNativeCode]
public readonly struct ProfilerRecorderDescription
{
	[Token(Token = "0x400008A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ProfilerCategory category;

	[Token(Token = "0x400008B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
	private readonly MarkerFlags flags;

	[Token(Token = "0x400008C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private readonly ProfilerMarkerDataType dataType;

	[Token(Token = "0x400008D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5")]
	private readonly ProfilerMarkerDataUnit unitType;

	[Token(Token = "0x400008E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly int reserved0;

	[Token(Token = "0x400008F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	private readonly int nameUtf8Len;

	[Token(Token = "0x4000090")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private unsafe readonly byte* nameUtf8;

	[Token(Token = "0x17000014")]
	public MarkerFlags Flags
	{
		[Token(Token = "0x600009D")]
		[Address(RVA = "0xADC160", Offset = "0xADA760", VA = "0x180ADC160")]
		get
		{
			return default(MarkerFlags);
		}
	}
}
