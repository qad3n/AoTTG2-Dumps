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

[Token(Token = "0x200030B")]
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

	[Token(Token = "0x60010FC")]
	[Address(RVA = "0x4E34FD0", Offset = "0x4E34FD0", VA = "0x4E34FD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60010FD")]
	[Address(RVA = "0x4E34FE0", Offset = "0x4E34FE0", VA = "0x4E34FE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010FE")]
	[Address(RVA = "0x4E35070", Offset = "0x4E35070", VA = "0x4E35070", Slot = "4")]
	public bool Equals(BatchID other)
	{
		return default(bool);
	}
}
