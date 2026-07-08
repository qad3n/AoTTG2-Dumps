using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000309")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
[UnityEngine.NativeClass("BatchMaterialID")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
public struct BatchMaterialID : IEquatable<BatchMaterialID>
{
	[Token(Token = "0x4000982")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BatchMaterialID Null;

	[Token(Token = "0x4000983")]
	[FieldOffset(Offset = "0x0")]
	public uint value;

	[Token(Token = "0x60010FE")]
	[Address(RVA = "0x4B0D790", Offset = "0x4B0D790", VA = "0x4B0D790", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60010FF")]
	[Address(RVA = "0x4B0D7A0", Offset = "0x4B0D7A0", VA = "0x4B0D7A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001100")]
	[Address(RVA = "0x4B0D830", Offset = "0x4B0D830", VA = "0x4B0D830", Slot = "4")]
	public bool Equals(BatchMaterialID other)
	{
		return default(bool);
	}
}
