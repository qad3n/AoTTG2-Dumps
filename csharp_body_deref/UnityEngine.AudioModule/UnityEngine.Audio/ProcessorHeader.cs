// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Audio.ProcessorHeader
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Audio;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Audio;

[Token(Token = "0x2000028")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptableProcessors/ScriptableProcessor.h")]
internal struct ProcessorHeader
{
	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x0")]
	private unsafe void* m_Control;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x8")]
	internal Handle DualThreadHandle;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x18")]
	internal IntPtr NativeProcessorFunction;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x20")]
	internal IntPtr NativeControlFunction;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x28")]
	internal IntPtr ProcessorReflectionData;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x30")]
	internal IntPtr ControlReflectionData;
}
