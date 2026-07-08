using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001DB")]
[EventCategory(EventCategory.PointerMove)]
public sealed class PointerMoveEvent : PointerEventBase<PointerMoveEvent>
{
	[Token(Token = "0x17000257")]
	internal bool isHandledByDraggable
	{
		[Token(Token = "0x6000C67")]
		[Address(RVA = "0x4D11700", Offset = "0x4D11700", VA = "0x4D11700")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C68")]
		[Address(RVA = "0x4D11710", Offset = "0x4D11710", VA = "0x4D11710")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x4D11630", Offset = "0x4D11630", VA = "0x4D11630")]
	static PointerMoveEvent()
	{
	}

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x4D11720", Offset = "0x4D11720", VA = "0x4D11720", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x4D117F0", Offset = "0x4D117F0", VA = "0x4D117F0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x4D11890", Offset = "0x4D11890", VA = "0x4D11890")]
	public PointerMoveEvent()
	{
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x4D11960", Offset = "0x4D11960", VA = "0x4D11960", Slot = "9")]
	protected internal override void PostDispatch(IPanel panel)
	{
	}
}
