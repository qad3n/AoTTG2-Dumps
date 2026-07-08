using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Experimental;

[Token(Token = "0x200055E")]
public sealed class PointerDownLinkTagEvent : PointerEventBase<PointerDownLinkTagEvent>
{
	[Token(Token = "0x17000862")]
	private string linkID
	{
		[Token(Token = "0x60020CB")]
		[Address(RVA = "0x4CAD0B0", Offset = "0x4CAD0B0", VA = "0x4CAD0B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000863")]
	private string linkText
	{
		[Token(Token = "0x60020CC")]
		[Address(RVA = "0x4CAD0D0", Offset = "0x4CAD0D0", VA = "0x4CAD0D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60020CA")]
	[Address(RVA = "0x4CACFE0", Offset = "0x4CACFE0", VA = "0x4CACFE0")]
	static PointerDownLinkTagEvent()
	{
	}

	[Token(Token = "0x60020CD")]
	[Address(RVA = "0x4CAD0F0", Offset = "0x4CAD0F0", VA = "0x4CAD0F0", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x60020CE")]
	[Address(RVA = "0x4CAD130", Offset = "0x4CAD130", VA = "0x4CAD130")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x60020CF")]
	[Address(RVA = "0x4CAD140", Offset = "0x4CAD140", VA = "0x4CAD140")]
	public static PointerDownLinkTagEvent GetPooled(IPointerEvent evt, string linkID, string linkText)
	{
		return null;
	}

	[Token(Token = "0x60020D0")]
	[Address(RVA = "0x4CAD1D0", Offset = "0x4CAD1D0", VA = "0x4CAD1D0")]
	public PointerDownLinkTagEvent()
	{
	}
}
