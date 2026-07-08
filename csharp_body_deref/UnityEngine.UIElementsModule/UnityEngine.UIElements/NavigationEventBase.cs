using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001C3")]
[EventCategory(EventCategory.Navigation)]
public abstract class NavigationEventBase<T> : EventBase<T>, INavigationEvent where T : NavigationEventBase<T>, new()
{
	[Token(Token = "0x17000217")]
	public EventModifiers modifiers
	{
		[Token(Token = "0x6000BB0")]
		[CompilerGenerated]
		get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x6000BB1")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000218")]
	public bool shiftKey
	{
		[Token(Token = "0x6000BB2")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000219")]
	public bool altKey
	{
		[Token(Token = "0x6000BB3")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700021A")]
	internal NavigationDeviceType deviceType
	{
		[Token(Token = "0x6000BB4")]
		[CompilerGenerated]
		get
		{
			return default(NavigationDeviceType);
		}
		[Token(Token = "0x6000BB5")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000BB6")]
	protected NavigationEventBase()
	{
	}

	[Token(Token = "0x6000BB7")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000BB8")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000BB9")]
	public static T GetPooled(EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000BBA")]
	internal static T GetPooled(NavigationDeviceType deviceType, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000BBB")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}
}
