// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchMeshID
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

[Token(Token = "0x200030D")]
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

	[Token(Token = "0x6001104")]
	[Address(RVA = "0x4E351B0", Offset = "0x4E351B0", VA = "0x4E351B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001105")]
	[Address(RVA = "0x4E351C0", Offset = "0x4E351C0", VA = "0x4E351C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001106")]
	[Address(RVA = "0x4E35250", Offset = "0x4E35250", VA = "0x4E35250", Slot = "4")]
	public bool Equals(BatchMeshID other)
	{
		return default(bool);
	}
}
