// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TransformHandle
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Serializable]
[Token(Token = "0x20001EB")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.NativeClass("TransformHandle")]
public struct TransformHandle : IEquatable<TransformHandle>, IComparable<TransformHandle>
{
	[Token(Token = "0x40006B9")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr pTransformData;

	[Token(Token = "0x40006BA")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	internal EntityId id;

	[Token(Token = "0x600105C")]
	[Address(RVA = "0x2F58AF0", Offset = "0x2F570F0", VA = "0x182F58AF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600105D")]
	[Address(RVA = "0x2F58AE0", Offset = "0x2F570E0", VA = "0x182F58AE0", Slot = "4")]
	public bool Equals(TransformHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x600105E")]
	[Address(RVA = "0x2F58AD0", Offset = "0x2F570D0", VA = "0x182F58AD0", Slot = "5")]
	public int CompareTo(TransformHandle other)
	{
		return default(int);
	}

	[Token(Token = "0x600105F")]
	[Address(RVA = "0x2F58B80", Offset = "0x2F57180", VA = "0x182F58B80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
