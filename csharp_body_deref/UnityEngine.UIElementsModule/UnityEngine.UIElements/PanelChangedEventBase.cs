// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PanelChangedEventBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001CB")]
[EventCategory(EventCategory.ChangePanel)]
public abstract class PanelChangedEventBase<T> : EventBase<T> where T : PanelChangedEventBase<T>, new()
{
	[Token(Token = "0x1700021D")]
	public IPanel originPanel
	{
		[Token(Token = "0x6000BD5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BD6")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700021E")]
	public IPanel destinationPanel
	{
		[Token(Token = "0x6000BD7")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BD8")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000BD9")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000BDA")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000BDB")]
	public static T GetPooled(IPanel originPanel, IPanel destinationPanel)
	{
		return null;
	}

	[Token(Token = "0x6000BDC")]
	protected PanelChangedEventBase()
	{
	}
}
