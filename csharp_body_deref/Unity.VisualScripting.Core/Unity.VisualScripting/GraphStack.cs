// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GraphStack
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000079")]
public sealed class GraphStack : GraphPointer, IPoolable, IDisposable
{
	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x2DAF4B0", Offset = "0x2DADAB0", VA = "0x182DAF4B0")]
	private GraphStack()
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x2DAF7F0", Offset = "0x2DADDF0", VA = "0x182DAF7F0")]
	private void InitializeNoAlloc(IGraphRoot root, List<IGraphParentElement> parentElements, bool ensureValid)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x2DAFA00", Offset = "0x2DAE000", VA = "0x182DAFA00")]
	internal static GraphStack New(IGraphRoot root, List<IGraphParentElement> parentElements)
	{
		return null;
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x2DAFB50", Offset = "0x2DAE150", VA = "0x182DAFB50")]
	internal static GraphStack New(GraphPointer model)
	{
		return null;
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x2DAF3D0", Offset = "0x2DAD9D0", VA = "0x182DAF3D0")]
	public GraphStack Clone()
	{
		return null;
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x2DAF780", Offset = "0x2DADD80", VA = "0x182DAF780", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	private void Unity_002EVisualScripting_002EIPoolable_002ENew()
	{
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x2DAFD10", Offset = "0x2DAE310", VA = "0x182DAFD10", Slot = "7")]
	private void Unity_002EVisualScripting_002EIPoolable_002EFree()
	{
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x2DAF550", Offset = "0x2DADB50", VA = "0x182DAF550", Slot = "4")]
	public override GraphReference AsReference()
	{
		return null;
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x2DAF550", Offset = "0x2DADB50", VA = "0x182DAF550")]
	public GraphReference ToReference()
	{
		return null;
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x2DAF5A0", Offset = "0x2DADBA0", VA = "0x182DAF5A0")]
	internal void ClearReference()
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x2DAA980", Offset = "0x2DA8F80", VA = "0x182DAA980")]
	public new void EnterParentElement(IGraphParentElement parentElement)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x2DAFCE0", Offset = "0x2DAE2E0", VA = "0x182DAFCE0")]
	public bool TryEnterParentElement(IGraphParentElement parentElement)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x2DAFCB0", Offset = "0x2DAE2B0", VA = "0x182DAFCB0")]
	public bool TryEnterParentElementUnsafe(IGraphParentElement parentElement)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x2DAF7E0", Offset = "0x2DADDE0", VA = "0x182DAF7E0")]
	public new void ExitParentElement()
	{
	}
}
