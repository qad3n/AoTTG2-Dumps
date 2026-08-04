// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.CommandEventBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000177")]
[EventCategory(EventCategory.Command)]
public abstract class CommandEventBase<T> : EventBase<T> where T : CommandEventBase<T>, new()
{
	[Token(Token = "0x4000635")]
	[FieldOffset(Offset = "0x0")]
	private string m_CommandName;

	[Token(Token = "0x170001C0")]
	public string commandName
	{
		[Token(Token = "0x60009F5")]
		get
		{
			return null;
		}
		[Token(Token = "0x60009F6")]
		protected set
		{
		}
	}

	[Token(Token = "0x60009F7")]
	protected override void Init()
	{
	}

	[Token(Token = "0x60009F8")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x60009F9")]
	public static T GetPooled(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x60009FA")]
	public static T GetPooled(string commandName)
	{
		return null;
	}

	[Token(Token = "0x60009FB")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x60009FC")]
	protected CommandEventBase()
	{
	}
}
