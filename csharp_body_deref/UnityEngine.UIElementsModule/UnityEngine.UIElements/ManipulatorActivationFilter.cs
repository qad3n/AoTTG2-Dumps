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

[Token(Token = "0x2000225")]
public struct ManipulatorActivationFilter : IEquatable<ManipulatorActivationFilter>
{
	[Token(Token = "0x170002A0")]
	public MouseButton button
	{
		[Token(Token = "0x6000E0E")]
		[Address(RVA = "0x504C360", Offset = "0x504C360", VA = "0x504C360")]
		[CompilerGenerated]
		readonly get
		{
			return default(MouseButton);
		}
		[Token(Token = "0x6000E0F")]
		[Address(RVA = "0x504C370", Offset = "0x504C370", VA = "0x504C370")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002A1")]
	public EventModifiers modifiers
	{
		[Token(Token = "0x6000E10")]
		[Address(RVA = "0x504C380", Offset = "0x504C380", VA = "0x504C380")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x6000E11")]
		[Address(RVA = "0x504C390", Offset = "0x504C390", VA = "0x504C390")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002A2")]
	public readonly int clickCount
	{
		[Token(Token = "0x6000E12")]
		[Address(RVA = "0x504C3A0", Offset = "0x504C3A0", VA = "0x504C3A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000E13")]
	[Address(RVA = "0x504C3B0", Offset = "0x504C3B0", VA = "0x504C3B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x504C420", Offset = "0x504C420", VA = "0x504C420", Slot = "4")]
	public bool Equals(ManipulatorActivationFilter other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x504C440", Offset = "0x504C440", VA = "0x504C440", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x504C4A0", Offset = "0x504C4A0", VA = "0x504C4A0")]
	public bool Matches(IMouseEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E17")]
	[Address(RVA = "0x504C600", Offset = "0x504C600", VA = "0x504C600")]
	private bool HasModifiers(IMouseEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x504C8F0", Offset = "0x504C8F0", VA = "0x504C8F0")]
	public bool Matches(IPointerEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E19")]
	[Address(RVA = "0x504CA50", Offset = "0x504CA50", VA = "0x504CA50")]
	private bool HasModifiers(IPointerEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E1A")]
	[Address(RVA = "0x504C880", Offset = "0x504C880", VA = "0x504C880")]
	private bool MatchModifiers(bool alt, bool ctrl, bool shift, bool command)
	{
		return default(bool);
	}
}
