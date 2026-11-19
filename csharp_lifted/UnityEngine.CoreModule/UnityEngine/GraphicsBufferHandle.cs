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

[Token(Token = "0x20000E6")]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/GfxDeviceTypes.h")]
[UnityEngine.NativeClass("GfxBufferID")]
public readonly struct GraphicsBufferHandle : IEquatable<GraphicsBufferHandle>
{
	[Token(Token = "0x4000257")]
	[FieldOffset(Offset = "0x0")]
	public readonly uint value;

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x68E1070", Offset = "0x68E0070", VA = "0x68E1070", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x68E1080", Offset = "0x68E0080", VA = "0x68E1080", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x68E10E0", Offset = "0x68E00E0", VA = "0x68E10E0", Slot = "4")]
	public bool Equals(GraphicsBufferHandle other)
	{
		return default(bool);
	}
}
