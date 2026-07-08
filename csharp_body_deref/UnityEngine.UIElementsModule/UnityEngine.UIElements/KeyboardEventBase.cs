using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200019C")]
[EventCategory(EventCategory.Keyboard)]
public abstract class KeyboardEventBase<T> : EventBase<T>, IKeyboardEvent where T : KeyboardEventBase<T>, new()
{
	[Token(Token = "0x170001EB")]
	public EventModifiers modifiers
	{
		[Token(Token = "0x6000ADF")]
		[CompilerGenerated]
		get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x6000AE0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170001EC")]
	public char character
	{
		[Token(Token = "0x6000AE1")]
		[CompilerGenerated]
		get
		{
			return default(char);
		}
		[Token(Token = "0x6000AE2")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170001ED")]
	public KeyCode keyCode
	{
		[Token(Token = "0x6000AE3")]
		[CompilerGenerated]
		get
		{
			return default(KeyCode);
		}
		[Token(Token = "0x6000AE4")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170001EE")]
	public bool shiftKey
	{
		[Token(Token = "0x6000AE5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EF")]
	public bool ctrlKey
	{
		[Token(Token = "0x6000AE6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F0")]
	public bool commandKey
	{
		[Token(Token = "0x6000AE7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F1")]
	public bool altKey
	{
		[Token(Token = "0x6000AE8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F2")]
	internal bool functionKey
	{
		[Token(Token = "0x6000AE9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F3")]
	public bool actionKey
	{
		[Token(Token = "0x6000AEA")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000AEB")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000AEC")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000AED")]
	public static T GetPooled(char c, KeyCode keyCode, EventModifiers modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000AEE")]
	public static T GetPooled(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x6000AEF")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000AF0")]
	protected KeyboardEventBase()
	{
	}
}
