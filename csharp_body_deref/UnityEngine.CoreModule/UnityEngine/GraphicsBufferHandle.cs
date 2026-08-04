// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GraphicsBufferHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000C4")]
[UnityEngine.NativeClass("GfxBufferID")]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/GfxDeviceTypes.h")]
public readonly struct GraphicsBufferHandle : IEquatable<GraphicsBufferHandle>
{
	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x0")]
	public readonly uint value;

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x4DCDC00", Offset = "0x4DCDC00", VA = "0x4DCDC00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x4DCDC10", Offset = "0x4DCDC10", VA = "0x4DCDC10", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x4DCDC70", Offset = "0x4DCDC70", VA = "0x4DCDC70", Slot = "4")]
	public bool Equals(GraphicsBufferHandle other)
	{
		return default(bool);
	}
}
