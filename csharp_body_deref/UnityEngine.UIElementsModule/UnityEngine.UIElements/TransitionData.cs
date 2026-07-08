using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200035F")]
internal struct TransitionData : IStyleDataGroup<TransitionData>, IEquatable<TransitionData>
{
	[Token(Token = "0x4000A3A")]
	[FieldOffset(Offset = "0x0")]
	public List<TimeValue> transitionDelay;

	[Token(Token = "0x4000A3B")]
	[FieldOffset(Offset = "0x8")]
	public List<TimeValue> transitionDuration;

	[Token(Token = "0x4000A3C")]
	[FieldOffset(Offset = "0x10")]
	public List<StylePropertyName> transitionProperty;

	[Token(Token = "0x4000A3D")]
	[FieldOffset(Offset = "0x18")]
	public List<EasingFunction> transitionTimingFunction;

	[Token(Token = "0x60015A8")]
	[Address(RVA = "0x4D83CF0", Offset = "0x4D83CF0", VA = "0x4D83CF0", Slot = "4")]
	public TransitionData Copy()
	{
		return default(TransitionData);
	}

	[Token(Token = "0x60015A9")]
	[Address(RVA = "0x4D83E80", Offset = "0x4D83E80", VA = "0x4D83E80", Slot = "5")]
	public void CopyFrom(ref TransitionData other)
	{
	}

	[Token(Token = "0x60015AA")]
	[Address(RVA = "0x4D83FD0", Offset = "0x4D83FD0", VA = "0x4D83FD0")]
	public static bool operator ==(TransitionData lhs, TransitionData rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015AB")]
	[Address(RVA = "0x4D84010", Offset = "0x4D84010", VA = "0x4D84010", Slot = "6")]
	public bool Equals(TransitionData other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015AC")]
	[Address(RVA = "0x4D84050", Offset = "0x4D84050", VA = "0x4D84050", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015AD")]
	[Address(RVA = "0x4D840D0", Offset = "0x4D840D0", VA = "0x4D840D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
