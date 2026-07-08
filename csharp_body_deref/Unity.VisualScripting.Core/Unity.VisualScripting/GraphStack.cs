using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000079")]
public sealed class GraphStack : GraphPointer, IPoolable, IDisposable
{
	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x498E300", Offset = "0x498E300", VA = "0x498E300")]
	private GraphStack()
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x498E310", Offset = "0x498E310", VA = "0x498E310")]
	private void InitializeNoAlloc(IGraphRoot root, List<IGraphParentElement> parentElements, bool ensureValid)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x498E5E0", Offset = "0x498E5E0", VA = "0x498E5E0")]
	internal static GraphStack New(IGraphRoot root, List<IGraphParentElement> parentElements)
	{
		return null;
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x498CC10", Offset = "0x498CC10", VA = "0x498CC10")]
	internal static GraphStack New(GraphPointer model)
	{
		return null;
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x498E780", Offset = "0x498E780", VA = "0x498E780")]
	public GraphStack Clone()
	{
		return null;
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x498E790", Offset = "0x498E790", VA = "0x498E790", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x498E7F0", Offset = "0x498E7F0", VA = "0x498E7F0", Slot = "6")]
	private void Unity_002EVisualScripting_002EIPoolable_002ENew()
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x498E800", Offset = "0x498E800", VA = "0x498E800", Slot = "7")]
	private void Unity_002EVisualScripting_002EIPoolable_002EFree()
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x498E940", Offset = "0x498E940", VA = "0x498E940", Slot = "4")]
	public override GraphReference AsReference()
	{
		return null;
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x498E9A0", Offset = "0x498E9A0", VA = "0x498E9A0")]
	public GraphReference ToReference()
	{
		return null;
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x498EA00", Offset = "0x498EA00", VA = "0x498EA00")]
	public new void EnterParentElement(IGraphParentElement parentElement)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x498EA80", Offset = "0x498EA80", VA = "0x498EA80")]
	public bool TryEnterParentElement(IGraphParentElement parentElement)
	{
		return default(bool);
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x498EAA0", Offset = "0x498EAA0", VA = "0x498EAA0")]
	public bool TryEnterParentElementUnsafe(IGraphParentElement parentElement)
	{
		return default(bool);
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x498EAC0", Offset = "0x498EAC0", VA = "0x498EAC0")]
	public new void ExitParentElement()
	{
	}
}
