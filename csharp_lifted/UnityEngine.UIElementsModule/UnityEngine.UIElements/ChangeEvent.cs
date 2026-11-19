// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ChangeEvent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001B9")]
[EventCategory(EventCategory.ChangeValue)]
public class ChangeEvent<T> : EventBase<ChangeEvent<T>>
{
	[Token(Token = "0x17000243")]
	public T previousValue
	{
		[Token(Token = "0x6000BEE")]
		[CompilerGenerated]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000BEF")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000244")]
	public T newValue
	{
		[Token(Token = "0x6000BF0")]
		[CompilerGenerated]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000BF1")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x6000BED")]
	static ChangeEvent()
	{
	}

	[Token(Token = "0x6000BF2")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000BF3")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000BF4")]
	public static ChangeEvent<T> GetPooled(T previousValue, T newValue)
	{
		return null;
	}

	[Token(Token = "0x6000BF5")]
	public ChangeEvent()
	{
	}
}
