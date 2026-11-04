// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchMeshID
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x200036F")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.NativeClass("BatchMeshID")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
public struct BatchMeshID : IEquatable<BatchMeshID>
{
	[Token(Token = "0x40009F2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BatchMeshID Null;

	[Token(Token = "0x40009F3")]
	[FieldOffset(Offset = "0x0")]
	public uint value;

	[Token(Token = "0x600156A")]
	[Address(RVA = "0x2ED9490", Offset = "0x2ED7A90", VA = "0x182ED9490", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600156B")]
	[Address(RVA = "0x2F60120", Offset = "0x2F5E720", VA = "0x182F60120", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600156C")]
	[Address(RVA = "0x2ED9400", Offset = "0x2ED7A00", VA = "0x182ED9400", Slot = "4")]
	public bool Equals(BatchMeshID other)
	{
		return default(bool);
	}

	[Token(Token = "0x600156D")]
	[Address(RVA = "0x2F60200", Offset = "0x2F5E800", VA = "0x182F60200")]
	public static bool operator ==(BatchMeshID a, BatchMeshID b)
	{
		return default(bool);
	}
}
