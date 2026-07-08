using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200003C")]
public abstract class ContextualMenuManager
{
	[Token(Token = "0x17000050")]
	internal bool displayMenuHandledOSX
	{
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x4BF7BA0", Offset = "0x4BF7BA0", VA = "0x4BF7BA0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x4BF7BB0", Offset = "0x4BF7BB0", VA = "0x4BF7BB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60001FD")]
	public abstract void DisplayMenuIfEventMatches(EventBase evt, IEventHandler eventHandler);

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x4BF7BC0", Offset = "0x4BF7BC0", VA = "0x4BF7BC0")]
	public void DisplayMenu(EventBase triggerEvent, IEventHandler target)
	{
	}

	[Token(Token = "0x60001FF")]
	protected internal abstract void DoDisplayMenu(DropdownMenu menu, EventBase triggerEvent);
}
