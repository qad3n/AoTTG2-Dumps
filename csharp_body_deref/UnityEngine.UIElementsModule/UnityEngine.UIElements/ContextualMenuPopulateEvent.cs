using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001BD")]
public class ContextualMenuPopulateEvent : MouseEventBase<ContextualMenuPopulateEvent>
{
	[Token(Token = "0x40006B3")]
	[FieldOffset(Offset = "0xB0")]
	private ContextualMenuManager m_ContextualMenuManager;

	[Token(Token = "0x17000213")]
	public DropdownMenu menu
	{
		[Token(Token = "0x6000B9E")]
		[Address(RVA = "0x4D0D7D0", Offset = "0x4D0D7D0", VA = "0x4D0D7D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B9F")]
		[Address(RVA = "0x4D0D7E0", Offset = "0x4D0D7E0", VA = "0x4D0D7E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000214")]
	public EventBase triggerEvent
	{
		[Token(Token = "0x6000BA0")]
		[Address(RVA = "0x4D0D800", Offset = "0x4D0D800", VA = "0x4D0D800")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BA1")]
		[Address(RVA = "0x4D0D810", Offset = "0x4D0D810", VA = "0x4D0D810")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x4D0D700", Offset = "0x4D0D700", VA = "0x4D0D700")]
	static ContextualMenuPopulateEvent()
	{
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x4D0D830", Offset = "0x4D0D830", VA = "0x4D0D830")]
	public static ContextualMenuPopulateEvent GetPooled(EventBase triggerEvent, DropdownMenu menu, IEventHandler target, ContextualMenuManager menuManager)
	{
		return null;
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x4D0E0E0", Offset = "0x4D0E0E0", VA = "0x4D0E0E0", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x4D0E180", Offset = "0x4D0E180", VA = "0x4D0E180")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x4D0E1F0", Offset = "0x4D0E1F0", VA = "0x4D0E1F0")]
	public ContextualMenuPopulateEvent()
	{
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x4D0E290", Offset = "0x4D0E290", VA = "0x4D0E290", Slot = "9")]
	protected internal override void PostDispatch(IPanel panel)
	{
	}
}
