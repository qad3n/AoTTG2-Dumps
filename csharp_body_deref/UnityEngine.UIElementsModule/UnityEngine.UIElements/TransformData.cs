// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TransformData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200035E")]
internal struct TransformData : IStyleDataGroup<TransformData>, IEquatable<TransformData>
{
	[Token(Token = "0x4000A36")]
	[FieldOffset(Offset = "0x0")]
	public Rotate rotate;

	[Token(Token = "0x4000A37")]
	[FieldOffset(Offset = "0x18")]
	public Scale scale;

	[Token(Token = "0x4000A38")]
	[FieldOffset(Offset = "0x28")]
	public TransformOrigin transformOrigin;

	[Token(Token = "0x4000A39")]
	[FieldOffset(Offset = "0x3C")]
	public Translate translate;

	[Token(Token = "0x60015A2")]
	[Address(RVA = "0x50AABC0", Offset = "0x50AABC0", VA = "0x50AABC0", Slot = "4")]
	public TransformData Copy()
	{
		return default(TransformData);
	}

	[Token(Token = "0x60015A3")]
	[Address(RVA = "0x50AABF0", Offset = "0x50AABF0", VA = "0x50AABF0", Slot = "5")]
	public void CopyFrom(ref TransformData other)
	{
	}

	[Token(Token = "0x60015A4")]
	[Address(RVA = "0x50AAC20", Offset = "0x50AAC20", VA = "0x50AAC20")]
	public static bool operator ==(TransformData lhs, TransformData rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A5")]
	[Address(RVA = "0x50AAF90", Offset = "0x50AAF90", VA = "0x50AAF90", Slot = "6")]
	public bool Equals(TransformData other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A6")]
	[Address(RVA = "0x50AB270", Offset = "0x50AB270", VA = "0x50AB270", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A7")]
	[Address(RVA = "0x50AB360", Offset = "0x50AB360", VA = "0x50AB360", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
