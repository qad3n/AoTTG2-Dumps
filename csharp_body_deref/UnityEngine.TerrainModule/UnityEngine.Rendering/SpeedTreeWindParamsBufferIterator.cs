// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SpeedTreeWindParamsBufferIterator
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000013")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Terrain/Public/SpeedTreeWind.h")]
internal struct SpeedTreeWindParamsBufferIterator
{
	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x0")]
	public IntPtr bufferPtr;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x8")]
	public unsafe fixed int uintParamOffsets[16];

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x48")]
	public int uintStride;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x4C")]
	public int elementOffset;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x50")]
	public int elementsCount;
}
