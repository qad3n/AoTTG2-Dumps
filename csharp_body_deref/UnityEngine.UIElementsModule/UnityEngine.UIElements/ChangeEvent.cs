using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000175")]
[EventCategory(EventCategory.ChangeValue)]
public class ChangeEvent<T> : EventBase<ChangeEvent<T>>
{
	[Token(Token = "0x170001BE")]
	public T previousValue
	{
		[Token(Token = "0x60009EA")]
		[CompilerGenerated]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x60009EB")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170001BF")]
	public T newValue
	{
		[Token(Token = "0x60009EC")]
		[CompilerGenerated]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x60009ED")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x60009E9")]
	static ChangeEvent()
	{
	}

	[Token(Token = "0x60009EE")]
	protected override void Init()
	{
	}

	[Token(Token = "0x60009EF")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x60009F0")]
	public static ChangeEvent<T> GetPooled(T previousValue, T newValue)
	{
		return null;
	}

	[Token(Token = "0x60009F1")]
	public ChangeEvent()
	{
	}
}
