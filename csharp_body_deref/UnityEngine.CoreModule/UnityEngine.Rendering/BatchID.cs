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

[Token(Token = "0x20003A9")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
[UnityEngine.NativeClass("BatchID")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
public struct BatchID : IEquatable<BatchID>
{
	[Token(Token = "0x4000B72")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BatchID Null;

	[Token(Token = "0x4000B73")]
	[FieldOffset(Offset = "0x0")]
	public uint value;

	[Token(Token = "0x6001717")]
	[Address(RVA = "0x6964820", Offset = "0x6963820", VA = "0x6964820", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001718")]
	[Address(RVA = "0x6964830", Offset = "0x6963830", VA = "0x6964830", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001719")]
	[Address(RVA = "0x69648C0", Offset = "0x69638C0", VA = "0x69648C0", Slot = "4")]
	public bool Equals(BatchID other)
	{
		return default(bool);
	}
}
