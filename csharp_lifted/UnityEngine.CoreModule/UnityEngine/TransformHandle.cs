// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TransformHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Serializable]
[Token(Token = "0x20001EC")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.NativeClass("TransformHandle")]
public struct TransformHandle : IEquatable<TransformHandle>, IComparable<TransformHandle>
{
	[Token(Token = "0x40006BE")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr pTransformData;

	[Token(Token = "0x40006BF")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	internal EntityId id;

	[Token(Token = "0x6001072")]
	[Address(RVA = "0x692F640", Offset = "0x692E640", VA = "0x692F640", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001073")]
	[Address(RVA = "0x692F6B0", Offset = "0x692E6B0", VA = "0x692F6B0", Slot = "4")]
	public bool Equals(TransformHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001074")]
	[Address(RVA = "0x692F6C0", Offset = "0x692E6C0", VA = "0x692F6C0", Slot = "5")]
	public int CompareTo(TransformHandle other)
	{
		return default(int);
	}

	[Token(Token = "0x6001075")]
	[Address(RVA = "0x692F6D0", Offset = "0x692E6D0", VA = "0x692F6D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
