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
		[Address(RVA = "0x4D24A30", Offset = "0x4D24A30", VA = "0x4D24A30")]
		[CompilerGenerated]
		readonly get
		{
			return default(MouseButton);
		}
		[Token(Token = "0x6000E0F")]
		[Address(RVA = "0x4D24A40", Offset = "0x4D24A40", VA = "0x4D24A40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002A1")]
	public EventModifiers modifiers
	{
		[Token(Token = "0x6000E10")]
		[Address(RVA = "0x4D24A50", Offset = "0x4D24A50", VA = "0x4D24A50")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x6000E11")]
		[Address(RVA = "0x4D24A60", Offset = "0x4D24A60", VA = "0x4D24A60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002A2")]
	public readonly int clickCount
	{
		[Token(Token = "0x6000E12")]
		[Address(RVA = "0x4D24A70", Offset = "0x4D24A70", VA = "0x4D24A70")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000E13")]
	[Address(RVA = "0x4D24A80", Offset = "0x4D24A80", VA = "0x4D24A80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x4D24AF0", Offset = "0x4D24AF0", VA = "0x4D24AF0", Slot = "4")]
	public bool Equals(ManipulatorActivationFilter other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x4D24B10", Offset = "0x4D24B10", VA = "0x4D24B10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x4D24B70", Offset = "0x4D24B70", VA = "0x4D24B70")]
	public bool Matches(IMouseEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E17")]
	[Address(RVA = "0x4D24CD0", Offset = "0x4D24CD0", VA = "0x4D24CD0")]
	private bool HasModifiers(IMouseEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x4D24FC0", Offset = "0x4D24FC0", VA = "0x4D24FC0")]
	public bool Matches(IPointerEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E19")]
	[Address(RVA = "0x4D25120", Offset = "0x4D25120", VA = "0x4D25120")]
	private bool HasModifiers(IPointerEvent e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E1A")]
	[Address(RVA = "0x4D24F50", Offset = "0x4D24F50", VA = "0x4D24F50")]
	private bool MatchModifiers(bool alt, bool ctrl, bool shift, bool command)
	{
		return default(bool);
	}
}
