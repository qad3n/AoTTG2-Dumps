using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x200030A")]
[UnityEngine.NativeClass("BatchMeshID")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
public struct BatchMeshID : IEquatable<BatchMeshID>
{
	[Token(Token = "0x4000984")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BatchMeshID Null;

	[Token(Token = "0x4000985")]
	[FieldOffset(Offset = "0x0")]
	public uint value;

	[Token(Token = "0x6001102")]
	[Address(RVA = "0x4B0D880", Offset = "0x4B0D880", VA = "0x4B0D880", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001103")]
	[Address(RVA = "0x4B0D890", Offset = "0x4B0D890", VA = "0x4B0D890", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001104")]
	[Address(RVA = "0x4B0D920", Offset = "0x4B0D920", VA = "0x4B0D920", Slot = "4")]
	public bool Equals(BatchMeshID other)
	{
		return default(bool);
	}
}
