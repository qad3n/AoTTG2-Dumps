// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.NavigationEventBase
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200020A")]
[EventCategory(EventCategory.Navigation)]
public abstract class NavigationEventBase<T> : EventBase<T>, INavigationEvent where T : NavigationEventBase<T>, new()
{
	[Token(Token = "0x17000297")]
	public EventModifiers modifiers
	{
		[Token(Token = "0x6000DD2")]
		[CompilerGenerated]
		get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x6000DD3")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000298")]
	public bool shiftKey
	{
		[Token(Token = "0x6000DD4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000299")]
	public bool altKey
	{
		[Token(Token = "0x6000DD5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029A")]
	internal NavigationDeviceType deviceType
	{
		[Token(Token = "0x6000DD6")]
		[CompilerGenerated]
		get
		{
			return default(NavigationDeviceType);
		}
		[Token(Token = "0x6000DD7")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000DD8")]
	protected NavigationEventBase()
	{
	}

	[Token(Token = "0x6000DD9")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000DDA")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000DDB")]
	internal static T GetPooled(NavigationDeviceType deviceType, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000DDC")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}
}
