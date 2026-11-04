// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ManipulatorActivationFilter
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		[CompilerGenerated]
		readonly get
		{
			return default(MouseButton);
		}
		[Token(Token = "0x60011A9")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700038A")]
	public EventModifiers modifiers
	{
		[Token(Token = "0x60011AA")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x60011AB")]
		[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700038B")]
	public readonly int clickCount
	{
		[Token(Token = "0x60011AC")]
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x32AEAA0", Offset = "0x32AD0A0", VA = "0x1832AEAA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AE")]
	[Address(RVA = "0x2F2C960", Offset = "0x2F2AF60", VA = "0x182F2C960", Slot = "4")]
	public bool Equals(ManipulatorActivationFilter other)
	{
		return default(bool);
	}

	[Token(Token = "0x60011AF")]
	[Address(RVA = "0x32AEB40", Offset = "0x32AD140", VA = "0x1832AEB40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60011B0")]
	[Address(RVA = "0x32AED70", Offset = "0x32AD370", VA = "0x1832AED70")]
	public bool Matches(IPointerEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B1")]
	[Address(RVA = "0x32AEBB0", Offset = "0x32AD1B0", VA = "0x1832AEBB0")]
	private bool HasModifiers(IPointerEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x60011B2")]
	[Address(RVA = "0x32AECF0", Offset = "0x32AD2F0", VA = "0x1832AECF0")]
	private bool MatchModifiers(bool alt, bool ctrl, bool shift, bool command)
	{
		return default(bool);
	}
}
