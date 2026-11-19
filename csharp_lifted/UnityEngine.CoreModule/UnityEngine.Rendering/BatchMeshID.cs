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

[Token(Token = "0x20003AB")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.NativeClass("BatchMeshID")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
public struct BatchMeshID : IEquatable<BatchMeshID>
{
	[Token(Token = "0x4000B76")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BatchMeshID Null;

	[Token(Token = "0x4000B77")]
	[FieldOffset(Offset = "0x0")]
	public uint value;

	[Token(Token = "0x6001720")]
	[Address(RVA = "0x6964A50", Offset = "0x6963A50", VA = "0x6964A50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001721")]
	[Address(RVA = "0x6964A60", Offset = "0x6963A60", VA = "0x6964A60", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001722")]
	[Address(RVA = "0x6964AF0", Offset = "0x6963AF0", VA = "0x6964AF0", Slot = "4")]
	public bool Equals(BatchMeshID other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001723")]
	[Address(RVA = "0x6964B00", Offset = "0x6963B00", VA = "0x6964B00")]
	public static bool operator ==(BatchMeshID a, BatchMeshID b)
	{
		return default(bool);
	}
}
