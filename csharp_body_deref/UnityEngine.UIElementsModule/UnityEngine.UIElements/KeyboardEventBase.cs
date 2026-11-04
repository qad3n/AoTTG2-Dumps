// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.KeyboardEventBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001E3")]
[EventCategory(EventCategory.Keyboard)]
public abstract class KeyboardEventBase<T> : EventBase<T>, IKeyboardEvent where T : KeyboardEventBase<T>, new()
{
	[Token(Token = "0x1700026D")]
	public EventModifiers modifiers
	{
		[Token(Token = "0x6000D02")]
		[CompilerGenerated]
		get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x6000D03")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700026E")]
	public char character
	{
		[Token(Token = "0x6000D04")]
		[CompilerGenerated]
		get
		{
			return default(char);
		}
		[Token(Token = "0x6000D05")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x1700026F")]
	public KeyCode keyCode
	{
		[Token(Token = "0x6000D06")]
		[CompilerGenerated]
		get
		{
			return default(KeyCode);
		}
		[Token(Token = "0x6000D07")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000270")]
	public bool shiftKey
	{
		[Token(Token = "0x6000D08")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000271")]
	public bool ctrlKey
	{
		[Token(Token = "0x6000D09")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000272")]
	public bool commandKey
	{
		[Token(Token = "0x6000D0A")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000273")]
	public bool altKey
	{
		[Token(Token = "0x6000D0B")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000274")]
	internal bool functionKey
	{
		[Token(Token = "0x6000D0C")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000275")]
	public bool actionKey
	{
		[Token(Token = "0x6000D0D")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000D0E")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000D0F")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000D10")]
	public static T GetPooled(char c, KeyCode keyCode, EventModifiers modifiers)
	{
		return null;
	}

	[Token(Token = "0x6000D11")]
	public static T GetPooled(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x6000D12")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000D13")]
	protected KeyboardEventBase()
	{
	}
}
