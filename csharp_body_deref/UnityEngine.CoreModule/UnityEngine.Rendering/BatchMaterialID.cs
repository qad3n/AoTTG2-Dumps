// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchMaterialID
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

[Token(Token = "0x200036E")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
[UnityEngine.NativeClass("BatchMaterialID")]
public struct BatchMaterialID : IEquatable<BatchMaterialID>
{
	[Token(Token = "0x40009F0")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BatchMaterialID Null;

	[Token(Token = "0x40009F1")]
	[FieldOffset(Offset = "0x0")]
	public uint value;

	[Token(Token = "0x6001565")]
	[Address(RVA = "0x2ED9490", Offset = "0x2ED7A90", VA = "0x182ED9490", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001566")]
	[Address(RVA = "0x2F5FFF0", Offset = "0x2F5E5F0", VA = "0x182F5FFF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001567")]
	[Address(RVA = "0x2ED9400", Offset = "0x2ED7A00", VA = "0x182ED9400", Slot = "4")]
	public bool Equals(BatchMaterialID other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001568")]
	[Address(RVA = "0x2F600D0", Offset = "0x2F5E6D0", VA = "0x182F600D0")]
	public static bool operator ==(BatchMaterialID a, BatchMaterialID b)
	{
		return default(bool);
	}
}
