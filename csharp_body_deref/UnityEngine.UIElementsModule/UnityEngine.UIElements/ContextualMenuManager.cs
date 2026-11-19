// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ContextualMenuManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200006F")]
public abstract class ContextualMenuManager
{
	[Token(Token = "0x17000091")]
	internal bool displayMenuHandledOSX
	{
		[Token(Token = "0x600035A")]
		[Address(RVA = "0x6A9DEC0", Offset = "0x6A9CEC0", VA = "0x6A9DEC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600035B")]
		[Address(RVA = "0x6A9DED0", Offset = "0x6A9CED0", VA = "0x6A9DED0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x6A9DEE0", Offset = "0x6A9CEE0", VA = "0x6A9DEE0", Slot = "4")]
	internal virtual bool CheckIfEventMatches(EventBase evt)
	{
		return default(bool);
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x6A9DEF0", Offset = "0x6A9CEF0", VA = "0x6A9DEF0")]
	public void DisplayMenu(EventBase triggerEvent, IEventHandler target)
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x6A9DF60", Offset = "0x6A9CF60", VA = "0x6A9DF60")]
	internal void DisplayMenu(EventBase triggerEvent, IEventHandler target, DropdownMenu menu)
	{
	}

	[Token(Token = "0x600035F")]
	protected internal abstract void DoDisplayMenu(DropdownMenu menu, EventBase triggerEvent);

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x6A9E2A0", Offset = "0x6A9D2A0", VA = "0x6A9E2A0")]
	internal static void ResetPointerDown(int pointerId)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x6A9E300", Offset = "0x6A9D300", VA = "0x6A9E300")]
	internal void BeforePointerDown()
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x6A9E310", Offset = "0x6A9D310", VA = "0x6A9E310")]
	internal void AfterPointerUp()
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x6A9E320", Offset = "0x6A9D320", VA = "0x6A9E320")]
	protected ContextualMenuManager()
	{
	}
}
