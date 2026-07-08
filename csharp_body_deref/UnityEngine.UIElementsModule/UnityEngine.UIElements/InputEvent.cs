using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000199")]
public class InputEvent : EventBase<InputEvent>
{
	[Token(Token = "0x170001E6")]
	protected string previousData
	{
		[Token(Token = "0x6000AD3")]
		[Address(RVA = "0x4D092A0", Offset = "0x4D092A0", VA = "0x4D092A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001E7")]
	protected string newData
	{
		[Token(Token = "0x6000AD4")]
		[Address(RVA = "0x4D092B0", Offset = "0x4D092B0", VA = "0x4D092B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x4D091D0", Offset = "0x4D091D0", VA = "0x4D091D0")]
	static InputEvent()
	{
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x4D092C0", Offset = "0x4D092C0", VA = "0x4D092C0", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x4D09330", Offset = "0x4D09330", VA = "0x4D09330")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x4D09370", Offset = "0x4D09370", VA = "0x4D09370")]
	public static InputEvent GetPooled(string previousData, string newData)
	{
		return null;
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x4D09410", Offset = "0x4D09410", VA = "0x4D09410")]
	public InputEvent()
	{
	}
}
