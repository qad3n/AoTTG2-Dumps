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

[Token(Token = "0x20000E5")]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/GfxDeviceTypes.h")]
[UnityEngine.NativeClass("GfxBufferID")]
public readonly struct GraphicsBufferHandle : IEquatable<GraphicsBufferHandle>
{
	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0x0")]
	public readonly uint value;

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x2ED9490", Offset = "0x2ED7A90", VA = "0x182ED9490", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x2ED9410", Offset = "0x2ED7A10", VA = "0x182ED9410", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x2ED9400", Offset = "0x2ED7A00", VA = "0x182ED9400", Slot = "4")]
	public bool Equals(GraphicsBufferHandle other)
	{
		return default(bool);
	}
}
