// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Audio.ControlHeader
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

[Token(Token = "0x2000018")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptableProcessors/ControlHeader.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
internal struct ControlHeader
{
	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x0")]
	internal Handle Handle;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr ManagedTransport;
}
