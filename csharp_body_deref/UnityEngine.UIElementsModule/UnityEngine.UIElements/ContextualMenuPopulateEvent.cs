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

[Token(Token = "0x2000204")]
public class ContextualMenuPopulateEvent : MouseEventBase<ContextualMenuPopulateEvent>
{
	[Token(Token = "0x40007EE")]
	[FieldOffset(Offset = "0xC8")]
	private ContextualMenuManager m_ContextualMenuManager;

	[Token(Token = "0x17000293")]
	public DropdownMenu menu
	{
		[Token(Token = "0x6000DC0")]
		[Address(RVA = "0x6C6AA00", Offset = "0x6C69A00", VA = "0x6C6AA00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DC1")]
		[Address(RVA = "0x6C6AA10", Offset = "0x6C69A10", VA = "0x6C6AA10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000294")]
	public EventBase triggerEvent
	{
		[Token(Token = "0x6000DC2")]
		[Address(RVA = "0x6C6AA30", Offset = "0x6C69A30", VA = "0x6C6AA30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DC3")]
		[Address(RVA = "0x6C6AA40", Offset = "0x6C69A40", VA = "0x6C6AA40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x6C6A930", Offset = "0x6C69930", VA = "0x6C6A930")]
	static ContextualMenuPopulateEvent()
	{
	}

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x6C6AA60", Offset = "0x6C69A60", VA = "0x6C6AA60")]
	public static ContextualMenuPopulateEvent GetPooled(EventBase triggerEvent, DropdownMenu menu, IEventHandler target, ContextualMenuManager menuManager)
	{
		return null;
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x6C6B180", Offset = "0x6C6A180", VA = "0x6C6B180", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x6C6B220", Offset = "0x6C6A220", VA = "0x6C6B220")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x6C6B290", Offset = "0x6C6A290", VA = "0x6C6B290")]
	public ContextualMenuPopulateEvent()
	{
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x6C6B330", Offset = "0x6C6A330", VA = "0x6C6B330", Slot = "9")]
	protected internal override void PostDispatch(IPanel panel)
	{
	}
}
