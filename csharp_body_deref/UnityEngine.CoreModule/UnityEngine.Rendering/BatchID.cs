// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchID
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

[Token(Token = "0x200036D")]
[UnityEngine.NativeClass("BatchID")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
public struct BatchID : IEquatable<BatchID>
{
	[Token(Token = "0x40009EE")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BatchID Null;

	[Token(Token = "0x40009EF")]
	[FieldOffset(Offset = "0x0")]
	public uint value;

	[Token(Token = "0x6001561")]
	[Address(RVA = "0x2ED9490", Offset = "0x2ED7A90", VA = "0x182ED9490", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001562")]
	[Address(RVA = "0x2F5FF10", Offset = "0x2F5E510", VA = "0x182F5FF10", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001563")]
	[Address(RVA = "0x2ED9400", Offset = "0x2ED7A00", VA = "0x182ED9400", Slot = "4")]
	public bool Equals(BatchID other)
	{
		return default(bool);
	}
}
