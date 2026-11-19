// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ComputeBufferMode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000D0")]
[UnityEngine.Bindings.NativeType("Runtime/GfxDevice/GfxDeviceTypes.h")]
public enum ComputeBufferMode
{
	[Token(Token = "0x4000222")]
	Immutable,
	[Token(Token = "0x4000223")]
	Dynamic,
	[Token(Token = "0x4000224")]
	[Obsolete("ComputeBufferMode.Circular is deprecated (legacy mode)")]
	Circular,
	[Token(Token = "0x4000225")]
	[Obsolete("ComputeBufferMode.StreamOut is deprecated (internal use only)")]
	StreamOut,
	[Token(Token = "0x4000226")]
	SubUpdates
}
