// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FocusEventBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001D5")]
[EventCategory(EventCategory.Focus)]
public abstract class FocusEventBase<T> : EventBase<T> where T : FocusEventBase<T>, new()
{
	[Token(Token = "0x17000263")]
	public Focusable relatedTarget
	{
		[Token(Token = "0x6000CC6")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CC7")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000264")]
	public FocusChangeDirection direction
	{
		[Token(Token = "0x6000CC8")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CC9")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000265")]
	protected FocusController focusController
	{
		[Token(Token = "0x6000CCA")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000CCB")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000266")]
	internal bool IsFocusDelegated
	{
		[Token(Token = "0x6000CCC")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000CCD")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000CCE")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000CCF")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000CD0")]
	public static T GetPooled(IEventHandler target, Focusable relatedTarget, FocusChangeDirection direction, FocusController focusController, bool bIsFocusDelegated = false)
	{
		return null;
	}

	[Token(Token = "0x6000CD1")]
	protected FocusEventBase()
	{
	}
}
