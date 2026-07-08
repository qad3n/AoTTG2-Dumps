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
	[Address(RVA = "0x4D83290", Offset = "0x4D83290", VA = "0x4D83290", Slot = "4")]
	public TransformData Copy()
	{
		return default(TransformData);
	}

	[Token(Token = "0x60015A3")]
	[Address(RVA = "0x4D832C0", Offset = "0x4D832C0", VA = "0x4D832C0", Slot = "5")]
	public void CopyFrom(ref TransformData other)
	{
	}

	[Token(Token = "0x60015A4")]
	[Address(RVA = "0x4D832F0", Offset = "0x4D832F0", VA = "0x4D832F0")]
	public static bool operator ==(TransformData lhs, TransformData rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A5")]
	[Address(RVA = "0x4D83660", Offset = "0x4D83660", VA = "0x4D83660", Slot = "6")]
	public bool Equals(TransformData other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A6")]
	[Address(RVA = "0x4D83940", Offset = "0x4D83940", VA = "0x4D83940", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A7")]
	[Address(RVA = "0x4D83A30", Offset = "0x4D83A30", VA = "0x4D83A30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
