// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.CommandEventBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001BB")]
[EventCategory(EventCategory.Command)]
public abstract class CommandEventBase<T> : EventBase<T> where T : CommandEventBase<T>, new()
{
	[Token(Token = "0x400076C")]
	[FieldOffset(Offset = "0x0")]
	private string m_CommandName;

	[Token(Token = "0x17000245")]
	public string commandName
	{
		[Token(Token = "0x6000BF9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BFA")]
		protected set
		{
		}
	}

	[Token(Token = "0x6000BFB")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000BFC")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000BFD")]
	public static T GetPooled(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x6000BFE")]
	public static T GetPooled(string commandName)
	{
		return null;
	}

	[Token(Token = "0x6000BFF")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6000C00")]
	protected CommandEventBase()
	{
	}
}
