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

[Token(Token = "0x200003C")]
public abstract class ContextualMenuManager
{
	[Token(Token = "0x17000050")]
	internal bool displayMenuHandledOSX
	{
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x4F1F4D0", Offset = "0x4F1F4D0", VA = "0x4F1F4D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x4F1F4E0", Offset = "0x4F1F4E0", VA = "0x4F1F4E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60001FD")]
	public abstract void DisplayMenuIfEventMatches(EventBase evt, IEventHandler eventHandler);

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x4F1F4F0", Offset = "0x4F1F4F0", VA = "0x4F1F4F0")]
	public void DisplayMenu(EventBase triggerEvent, IEventHandler target)
	{
	}

	[Token(Token = "0x60001FF")]
	protected internal abstract void DoDisplayMenu(DropdownMenu menu, EventBase triggerEvent);
}
