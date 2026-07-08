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

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x4AA62D0", Offset = "0x4AA62D0", VA = "0x4AA62D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x4AA62E0", Offset = "0x4AA62E0", VA = "0x4AA62E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x4AA6340", Offset = "0x4AA6340", VA = "0x4AA6340", Slot = "4")]
	public bool Equals(GraphicsBufferHandle other)
	{
		return default(bool);
	}
}
