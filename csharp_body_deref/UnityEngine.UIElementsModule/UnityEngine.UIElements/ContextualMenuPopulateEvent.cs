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
		[Address(RVA = "0x187BC10", Offset = "0x187A210", VA = "0x18187BC10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DC1")]
		[Address(RVA = "0x87BC50", Offset = "0x87A250", VA = "0x18087BC50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000294")]
	public EventBase triggerEvent
	{
		[Token(Token = "0x6000DC2")]
		[Address(RVA = "0xC8FF80", Offset = "0xC8E580", VA = "0x180C8FF80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DC3")]
		[Address(RVA = "0xC8FFC0", Offset = "0xC8E5C0", VA = "0x180C8FFC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x32573A0", Offset = "0x32559A0", VA = "0x1832573A0")]
	static ContextualMenuPopulateEvent()
	{
	}

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x3256E80", Offset = "0x3255480", VA = "0x183256E80")]
	public static ContextualMenuPopulateEvent GetPooled(EventBase triggerEvent, DropdownMenu menu, IEventHandler target, ContextualMenuManager menuManager)
	{
		return null;
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x3257210", Offset = "0x3255810", VA = "0x183257210", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x3257260", Offset = "0x3255860", VA = "0x183257260")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x3257480", Offset = "0x3255A80", VA = "0x183257480")]
	public ContextualMenuPopulateEvent()
	{
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x32572E0", Offset = "0x32558E0", VA = "0x1832572E0", Slot = "9")]
	protected internal override void PostDispatch(IPanel panel)
	{
	}
}
