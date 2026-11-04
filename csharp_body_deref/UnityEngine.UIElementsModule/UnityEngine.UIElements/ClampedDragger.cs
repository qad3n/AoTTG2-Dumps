// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ClampedDragger
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200004D")]
internal class ClampedDragger<T> : Clickable where T : IComparable<T>
{
	[Token(Token = "0x200004E")]
	[Flags]
	public enum DragDirection
	{
		[Token(Token = "0x40000E9")]
		None = 0,
		[Token(Token = "0x40000EA")]
		LowToHigh = 1,
		[Token(Token = "0x40000EB")]
		HighToLow = 2,
		[Token(Token = "0x40000EC")]
		Free = 4
	}

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action m_dragging;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action m_draggingEnded;

	[Token(Token = "0x1700004F")]
	public DragDirection dragDirection
	{
		[Token(Token = "0x6000199")]
		[CompilerGenerated]
		get
		{
			return default(DragDirection);
		}
		[Token(Token = "0x600019A")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	private BaseSlider<T> slider
	{
		[Token(Token = "0x600019B")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public Vector2 startMousePosition
	{
		[Token(Token = "0x600019C")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600019D")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public Vector2 delta
	{
		[Token(Token = "0x600019E")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x14000002")]
	public event Action dragging
	{
		[Token(Token = "0x6000195")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000196")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event Action draggingEnded
	{
		[Token(Token = "0x6000197")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000198")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600019F")]
	public ClampedDragger(BaseSlider<T> slider, Action clickHandler, Action dragHandler)
	{
	}

	[Token(Token = "0x60001A0")]
	protected override void ProcessDownEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x60001A1")]
	protected override void ProcessUpEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x60001A2")]
	protected override void ProcessMoveEvent(EventBase evt, Vector2 localPosition)
	{
	}
}
