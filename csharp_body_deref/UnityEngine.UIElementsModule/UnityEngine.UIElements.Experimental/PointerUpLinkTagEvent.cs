using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Experimental;

[Token(Token = "0x2000560")]
public class PointerUpLinkTagEvent : PointerEventBase<PointerUpLinkTagEvent>
{
	[Token(Token = "0x17000864")]
	private string linkID
	{
		[Token(Token = "0x60020D5")]
		[Address(RVA = "0x4CAD3D0", Offset = "0x4CAD3D0", VA = "0x4CAD3D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000865")]
	private string linkText
	{
		[Token(Token = "0x60020D6")]
		[Address(RVA = "0x4CAD3F0", Offset = "0x4CAD3F0", VA = "0x4CAD3F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60020D4")]
	[Address(RVA = "0x4CAD300", Offset = "0x4CAD300", VA = "0x4CAD300")]
	static PointerUpLinkTagEvent()
	{
	}

	[Token(Token = "0x60020D7")]
	[Address(RVA = "0x4CAD410", Offset = "0x4CAD410", VA = "0x4CAD410", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x60020D8")]
	[Address(RVA = "0x4CAD450", Offset = "0x4CAD450", VA = "0x4CAD450")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x60020D9")]
	[Address(RVA = "0x4CAD460", Offset = "0x4CAD460", VA = "0x4CAD460")]
	public static PointerUpLinkTagEvent GetPooled(IPointerEvent evt, string linkID, string linkText)
	{
		return null;
	}

	[Token(Token = "0x60020DA")]
	[Address(RVA = "0x4CAD4F0", Offset = "0x4CAD4F0", VA = "0x4CAD4F0")]
	public PointerUpLinkTagEvent()
	{
	}
}
