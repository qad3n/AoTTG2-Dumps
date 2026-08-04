// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ContextualMenuPopulateEvent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x5035100", Offset = "0x5035100", VA = "0x5035100")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B9F")]
		[Address(RVA = "0x5035110", Offset = "0x5035110", VA = "0x5035110")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000214")]
	public EventBase triggerEvent
	{
		[Token(Token = "0x6000BA0")]
		[Address(RVA = "0x5035130", Offset = "0x5035130", VA = "0x5035130")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BA1")]
		[Address(RVA = "0x5035140", Offset = "0x5035140", VA = "0x5035140")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x5035030", Offset = "0x5035030", VA = "0x5035030")]
	static ContextualMenuPopulateEvent()
	{
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x5035160", Offset = "0x5035160", VA = "0x5035160")]
	public static ContextualMenuPopulateEvent GetPooled(EventBase triggerEvent, DropdownMenu menu, IEventHandler target, ContextualMenuManager menuManager)
	{
		return null;
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x5035A10", Offset = "0x5035A10", VA = "0x5035A10", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x5035AB0", Offset = "0x5035AB0", VA = "0x5035AB0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x5035B20", Offset = "0x5035B20", VA = "0x5035B20")]
	public ContextualMenuPopulateEvent()
	{
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x5035BC0", Offset = "0x5035BC0", VA = "0x5035BC0", Slot = "9")]
	protected internal override void PostDispatch(IPanel panel)
	{
	}
}
