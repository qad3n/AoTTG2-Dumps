using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000308")]
[UnityEngine.NativeClass("BatchID")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
public struct BatchID : IEquatable<BatchID>
{
	[Token(Token = "0x4000980")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BatchID Null;

	[Token(Token = "0x4000981")]
	[FieldOffset(Offset = "0x0")]
	public uint value;

	[Token(Token = "0x60010FA")]
	[Address(RVA = "0x4B0D6A0", Offset = "0x4B0D6A0", VA = "0x4B0D6A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60010FB")]
	[Address(RVA = "0x4B0D6B0", Offset = "0x4B0D6B0", VA = "0x4B0D6B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010FC")]
	[Address(RVA = "0x4B0D740", Offset = "0x4B0D740", VA = "0x4B0D740", Slot = "4")]
	public bool Equals(BatchID other)
	{
		return default(bool);
	}
}
