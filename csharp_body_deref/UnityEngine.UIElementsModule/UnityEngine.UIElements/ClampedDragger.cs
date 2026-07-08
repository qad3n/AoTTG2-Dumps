using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200001D")]
internal class ClampedDragger<T> : Clickable where T : IComparable<T>
{
	[Token(Token = "0x200001E")]
	[Flags]
	public enum DragDirection
	{
		[Token(Token = "0x4000044")]
		None = 0,
		[Token(Token = "0x4000045")]
		LowToHigh = 1,
		[Token(Token = "0x4000046")]
		HighToLow = 2,
		[Token(Token = "0x4000047")]
		Free = 4
	}

	[Token(Token = "0x17000016")]
	public DragDirection dragDirection
	{
		[Token(Token = "0x6000078")]
		[CompilerGenerated]
		get
		{
			return default(DragDirection);
		}
		[Token(Token = "0x6000079")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	private BaseSlider<T> slider
	{
		[Token(Token = "0x600007A")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public Vector2 startMousePosition
	{
		[Token(Token = "0x600007B")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600007C")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public Vector2 delta
	{
		[Token(Token = "0x600007D")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x14000001")]
	public event Action dragging
	{
		[Token(Token = "0x6000076")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000077")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600007E")]
	public ClampedDragger(BaseSlider<T> slider, Action clickHandler, Action dragHandler)
	{
	}

	[Token(Token = "0x600007F")]
	protected override void ProcessDownEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x6000080")]
	protected override void ProcessMoveEvent(EventBase evt, Vector2 localPosition)
	{
	}
}
