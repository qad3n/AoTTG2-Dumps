using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000190")]
[EventCategory(EventCategory.Focus)]
public abstract class FocusEventBase<T> : EventBase<T> where T : FocusEventBase<T>, new()
{
	[Token(Token = "0x170001E2")]
	public Focusable relatedTarget
	{
		[Token(Token = "0x6000AAC")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000AAD")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001E3")]
	public FocusChangeDirection direction
	{
		[Token(Token = "0x6000AAE")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000AAF")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001E4")]
	protected FocusController focusController
	{
		[Token(Token = "0x6000AB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000AB1")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001E5")]
	internal bool IsFocusDelegated
	{
		[Token(Token = "0x6000AB2")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000AB3")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000AB4")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000AB5")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000AB6")]
	public static T GetPooled(IEventHandler target, Focusable relatedTarget, FocusChangeDirection direction, FocusController focusController, bool bIsFocusDelegated = false)
	{
		return null;
	}

	[Token(Token = "0x6000AB7")]
	protected FocusEventBase()
	{
	}
}
