// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ToggleButtonGroupState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000169")]
public struct ToggleButtonGroupState : IEquatable<ToggleButtonGroupState>, IComparable<ToggleButtonGroupState>
{
	[Token(Token = "0x4000692")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private ulong m_Data;

	[Token(Token = "0x4000693")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private int m_Length;

	[Token(Token = "0x170001E8")]
	public int length
	{
		[Token(Token = "0x6000A5B")]
		[Address(RVA = "0x6C44580", Offset = "0x6C43580", VA = "0x6C44580")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000A5C")]
		[Address(RVA = "0x6C44590", Offset = "0x6C43590", VA = "0x6C44590")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x170001E9")]
	internal ulong data
	{
		[Token(Token = "0x6000A5D")]
		[Address(RVA = "0x6C445A0", Offset = "0x6C435A0", VA = "0x6C445A0")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x170001EA")]
	public bool this[int index]
	{
		[Token(Token = "0x6000A5E")]
		[Address(RVA = "0x6C43B70", Offset = "0x6C42B70", VA = "0x6C43B70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A5F")]
		[Address(RVA = "0x6C42290", Offset = "0x6C41290", VA = "0x6C42290")]
		set
		{
		}
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x6C42520", Offset = "0x6C41520", VA = "0x6C42520")]
	public ToggleButtonGroupState(ulong optionsBitMask, int length)
	{
	}

	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x6C42100", Offset = "0x6C41100", VA = "0x6C42100")]
	public Span<int> GetActiveOptions(Span<int> activeOptionsIndices)
	{
		return default(Span<int>);
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x6C42280", Offset = "0x6C41280", VA = "0x6C42280")]
	public void ResetAllOptions()
	{
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x6C445B0", Offset = "0x6C435B0", VA = "0x6C445B0", Slot = "5")]
	public int CompareTo(ToggleButtonGroupState other)
	{
		return default(int);
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x6C44340", Offset = "0x6C43340", VA = "0x6C44340")]
	private void ResetOptions(int startingIndex)
	{
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x6C445D0", Offset = "0x6C435D0", VA = "0x6C445D0")]
	public static bool operator ==(ToggleButtonGroupState lhs, ToggleButtonGroupState rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x6C43B60", Offset = "0x6C42B60", VA = "0x6C43B60")]
	public static bool operator !=(ToggleButtonGroupState lhs, ToggleButtonGroupState rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x6C445E0", Offset = "0x6C435E0", VA = "0x6C445E0", Slot = "4")]
	public bool Equals(ToggleButtonGroupState other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x6C445F0", Offset = "0x6C435F0", VA = "0x6C445F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x6C44660", Offset = "0x6C43660", VA = "0x6C44660", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x6C446D0", Offset = "0x6C436D0", VA = "0x6C446D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
