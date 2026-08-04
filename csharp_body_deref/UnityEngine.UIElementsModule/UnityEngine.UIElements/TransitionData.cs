// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TransitionData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x50AB620", Offset = "0x50AB620", VA = "0x50AB620", Slot = "4")]
	public TransitionData Copy()
	{
		return default(TransitionData);
	}

	[Token(Token = "0x60015A9")]
	[Address(RVA = "0x50AB7B0", Offset = "0x50AB7B0", VA = "0x50AB7B0", Slot = "5")]
	public void CopyFrom(ref TransitionData other)
	{
	}

	[Token(Token = "0x60015AA")]
	[Address(RVA = "0x50AB900", Offset = "0x50AB900", VA = "0x50AB900")]
	public static bool operator ==(TransitionData lhs, TransitionData rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015AB")]
	[Address(RVA = "0x50AB940", Offset = "0x50AB940", VA = "0x50AB940", Slot = "6")]
	public bool Equals(TransitionData other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015AC")]
	[Address(RVA = "0x50AB980", Offset = "0x50AB980", VA = "0x50AB980", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015AD")]
	[Address(RVA = "0x50ABA00", Offset = "0x50ABA00", VA = "0x50ABA00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
