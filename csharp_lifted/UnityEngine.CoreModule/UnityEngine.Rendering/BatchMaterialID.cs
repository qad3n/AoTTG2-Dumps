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

[Token(Token = "0x20003AA")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
[UnityEngine.NativeClass("BatchMaterialID")]
public struct BatchMaterialID : IEquatable<BatchMaterialID>
{
	[Token(Token = "0x4000B74")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BatchMaterialID Null;

	[Token(Token = "0x4000B75")]
	[FieldOffset(Offset = "0x0")]
	public uint value;

	[Token(Token = "0x600171B")]
	[Address(RVA = "0x6964910", Offset = "0x6963910", VA = "0x6964910", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600171C")]
	[Address(RVA = "0x6964920", Offset = "0x6963920", VA = "0x6964920", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600171D")]
	[Address(RVA = "0x69649B0", Offset = "0x69639B0", VA = "0x69649B0", Slot = "4")]
	public bool Equals(BatchMaterialID other)
	{
		return default(bool);
	}

	[Token(Token = "0x600171E")]
	[Address(RVA = "0x69649C0", Offset = "0x69639C0", VA = "0x69649C0")]
	public static bool operator ==(BatchMaterialID a, BatchMaterialID b)
	{
		return default(bool);
	}
}
