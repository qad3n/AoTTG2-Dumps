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

[Token(Token = "0x20003F3")]
internal struct TransformData : IStyleDataGroup<TransformData>, IEquatable<TransformData>
{
	[Token(Token = "0x4000CB2")]
	[FieldOffset(Offset = "0x0")]
	public Rotate rotate;

	[Token(Token = "0x4000CB3")]
	[FieldOffset(Offset = "0x18")]
	public Scale scale;

	[Token(Token = "0x4000CB4")]
	[FieldOffset(Offset = "0x28")]
	public TransformOrigin transformOrigin;

	[Token(Token = "0x4000CB5")]
	[FieldOffset(Offset = "0x3C")]
	public Translate translate;

	[Token(Token = "0x6001D86")]
	[Address(RVA = "0x6AF9380", Offset = "0x6AF8380", VA = "0x6AF9380", Slot = "4")]
	public TransformData Copy()
	{
		return default(TransformData);
	}

	[Token(Token = "0x6001D87")]
	[Address(RVA = "0x6AF93B0", Offset = "0x6AF83B0", VA = "0x6AF93B0", Slot = "5")]
	public void CopyFrom(ref TransformData other)
	{
	}

	[Token(Token = "0x6001D88")]
	[Address(RVA = "0x6AF93E0", Offset = "0x6AF83E0", VA = "0x6AF93E0")]
	public static bool operator ==(TransformData lhs, TransformData rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D89")]
	[Address(RVA = "0x6AF9670", Offset = "0x6AF8670", VA = "0x6AF9670", Slot = "6")]
	public bool Equals(TransformData other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D8A")]
	[Address(RVA = "0x6AF99E0", Offset = "0x6AF89E0", VA = "0x6AF99E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D8B")]
	[Address(RVA = "0x6AF9D50", Offset = "0x6AF8D50", VA = "0x6AF9D50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
