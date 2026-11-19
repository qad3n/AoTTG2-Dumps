// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ManipulatorActivationFilter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200029C")]
public struct ManipulatorActivationFilter : IEquatable<ManipulatorActivationFilter>
{
	[Token(Token = "0x17000389")]
	public MouseButton button
	{
		[Token(Token = "0x60011A8")]
		[Address(RVA = "0x6CB1D50", Offset = "0x6CB0D50", VA = "0x6CB1D50")]
		[CompilerGenerated]
		readonly get
		{
			return default(MouseButton);
		}
		[Token(Token = "0x60011A9")]
		[Address(RVA = "0x6CB1D60", Offset = "0x6CB0D60", VA = "0x6CB1D60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700038A")]
	public EventModifiers modifiers
	{
		[Token(Token = "0x60011AA")]
		[Address(RVA = "0x6CB1D70", Offset = "0x6CB0D70", VA = "0x6CB1D70")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x60011AB")]
		[Address(RVA = "0x6CB1D80", Offset = "0x6CB0D80", VA = "0x6CB1D80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700038B")]
	public readonly int clickCount
	{
		[Token(Token = "0x60011AC")]
		[Address(RVA = "0x6CB1D90", Offset = "0x6CB0D90", VA = "0x6CB1D90")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x6CB1DA0", Offset = "0x6CB0DA0", VA = "0x6CB1DA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AE")]
	[Address(RVA = "0x6CB1E10", Offset = "0x6CB0E10", VA = "0x6CB1E10", Slot = "4")]
	public bool Equals(ManipulatorActivationFilter other)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AF")]
	[Address(RVA = "0x6CB1E30", Offset = "0x6CB0E30", VA = "0x6CB1E30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60011B0")]
	[Address(RVA = "0x6CB1E90", Offset = "0x6CB0E90", VA = "0x6CB1E90")]
	public bool Matches(IPointerEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B1")]
	[Address(RVA = "0x6CB1FE0", Offset = "0x6CB0FE0", VA = "0x6CB1FE0")]
	private bool HasModifiers(IPointerEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B2")]
	[Address(RVA = "0x6CB2250", Offset = "0x6CB1250", VA = "0x6CB2250")]
	private bool MatchModifiers(bool alt, bool ctrl, bool shift, bool command)
	{
		return default(bool);
	}
}
