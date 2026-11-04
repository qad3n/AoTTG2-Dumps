// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ContextualMenuManager
// Update status: CHANGED in this game update
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
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600035B")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "4")]
	internal virtual bool CheckIfEventMatches(EventBase evt)
	{
		return default(bool);
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x30AD9A0", Offset = "0x30ABFA0", VA = "0x1830AD9A0")]
	public void DisplayMenu(EventBase triggerEvent, IEventHandler target)
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x30AD710", Offset = "0x30ABD10", VA = "0x1830AD710")]
	internal void DisplayMenu(EventBase triggerEvent, IEventHandler target, DropdownMenu menu)
	{
	}

	[Token(Token = "0x600035F")]
	protected internal abstract void DoDisplayMenu(DropdownMenu menu, EventBase triggerEvent);

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x30ADA10", Offset = "0x30AC010", VA = "0x1830ADA10")]
	internal static void ResetPointerDown(int pointerId)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x1C6F5D0", Offset = "0x1C6DBD0", VA = "0x181C6F5D0")]
	internal void BeforePointerDown()
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x1C6F5D0", Offset = "0x1C6DBD0", VA = "0x181C6F5D0")]
	internal void AfterPointerUp()
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected ContextualMenuManager()
	{
	}
}
