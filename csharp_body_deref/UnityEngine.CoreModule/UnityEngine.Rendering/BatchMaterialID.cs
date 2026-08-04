// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchMaterialID
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x200030C")]
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

	[Token(Token = "0x6001100")]
	[Address(RVA = "0x4E350C0", Offset = "0x4E350C0", VA = "0x4E350C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001101")]
	[Address(RVA = "0x4E350D0", Offset = "0x4E350D0", VA = "0x4E350D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001102")]
	[Address(RVA = "0x4E35160", Offset = "0x4E35160", VA = "0x4E35160", Slot = "4")]
	public bool Equals(BatchMaterialID other)
	{
		return default(bool);
	}
}
