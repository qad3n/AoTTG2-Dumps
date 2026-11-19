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
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003F4")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal struct TransitionData : IStyleDataGroup<TransitionData>, IEquatable<TransitionData>
{
	[Token(Token = "0x4000CB6")]
	[FieldOffset(Offset = "0x0")]
	public List<TimeValue> transitionDelay;

	[Token(Token = "0x4000CB7")]
	[FieldOffset(Offset = "0x8")]
	public List<TimeValue> transitionDuration;

	[Token(Token = "0x4000CB8")]
	[FieldOffset(Offset = "0x10")]
	public List<StylePropertyName> transitionProperty;

	[Token(Token = "0x4000CB9")]
	[FieldOffset(Offset = "0x18")]
	public List<EasingFunction> transitionTimingFunction;

	[Token(Token = "0x6001D8C")]
	[Address(RVA = "0x6AF9DB0", Offset = "0x6AF8DB0", VA = "0x6AF9DB0", Slot = "4")]
	public TransitionData Copy()
	{
		return default(TransitionData);
	}

	[Token(Token = "0x6001D8D")]
	[Address(RVA = "0x6AF9F40", Offset = "0x6AF8F40", VA = "0x6AF9F40", Slot = "5")]
	public void CopyFrom(ref TransitionData other)
	{
	}

	[Token(Token = "0x6001D8E")]
	[Address(RVA = "0x6AFA090", Offset = "0x6AF9090", VA = "0x6AFA090")]
	public static bool operator ==(TransitionData lhs, TransitionData rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D8F")]
	[Address(RVA = "0x6AFA0D0", Offset = "0x6AF90D0", VA = "0x6AFA0D0", Slot = "6")]
	public bool Equals(TransitionData other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D90")]
	[Address(RVA = "0x6AFA110", Offset = "0x6AF9110", VA = "0x6AFA110", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D91")]
	[Address(RVA = "0x6AFA190", Offset = "0x6AF9190", VA = "0x6AFA190", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
