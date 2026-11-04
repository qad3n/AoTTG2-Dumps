// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ToggleButtonGroupState
// Update status: NEW in this game update
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
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000A5C")]
		[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x170001E9")]
	internal ulong data
	{
		[Token(Token = "0x6000A5D")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x170001EA")]
	public bool this[int index]
	{
		[Token(Token = "0x6000A5E")]
		[Address(RVA = "0x3249220", Offset = "0x3247820", VA = "0x183249220")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A5F")]
		[Address(RVA = "0x3249340", Offset = "0x3247940", VA = "0x183249340")]
		set
		{
		}
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x3249110", Offset = "0x3247710", VA = "0x183249110")]
	public ToggleButtonGroupState(ulong optionsBitMask, int length)
	{
	}

	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x3248E40", Offset = "0x3247440", VA = "0x183248E40")]
	public Span<int> GetActiveOptions(Span<int> activeOptionsIndices)
	{
		return default(Span<int>);
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x18191E0", Offset = "0x18177E0", VA = "0x1818191E0")]
	public void ResetAllOptions()
	{
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x3248D80", Offset = "0x3247380", VA = "0x183248D80", Slot = "5")]
	public int CompareTo(ToggleButtonGroupState other)
	{
		return default(int);
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x3249050", Offset = "0x3247650", VA = "0x183249050")]
	private void ResetOptions(int startingIndex)
	{
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0xA4F710", Offset = "0xA4DD10", VA = "0x180A4F710")]
	public static bool operator ==(ToggleButtonGroupState lhs, ToggleButtonGroupState rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x3249310", Offset = "0x3247910", VA = "0x183249310")]
	public static bool operator !=(ToggleButtonGroupState lhs, ToggleButtonGroupState rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0xA4F710", Offset = "0xA4DD10", VA = "0x180A4F710", Slot = "4")]
	public bool Equals(ToggleButtonGroupState other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x3248DB0", Offset = "0x32473B0", VA = "0x183248DB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x3248FE0", Offset = "0x32475E0", VA = "0x183248FE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x3249090", Offset = "0x3247690", VA = "0x183249090", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
