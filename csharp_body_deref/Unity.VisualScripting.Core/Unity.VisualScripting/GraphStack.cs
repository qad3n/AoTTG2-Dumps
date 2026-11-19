// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GraphStack
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x67A1B60", Offset = "0x67A0B60", VA = "0x67A1B60")]
	private GraphStack()
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x67A1B70", Offset = "0x67A0B70", VA = "0x67A1B70")]
	private void InitializeNoAlloc(IGraphRoot root, List<IGraphParentElement> parentElements, bool ensureValid)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x67A1E20", Offset = "0x67A0E20", VA = "0x67A1E20")]
	internal static GraphStack New(IGraphRoot root, List<IGraphParentElement> parentElements)
	{
		return null;
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x67A03D0", Offset = "0x679F3D0", VA = "0x67A03D0")]
	internal static GraphStack New(GraphPointer model)
	{
		return null;
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x67A1FC0", Offset = "0x67A0FC0", VA = "0x67A1FC0")]
	public GraphStack Clone()
	{
		return null;
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x67A1FD0", Offset = "0x67A0FD0", VA = "0x67A1FD0", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x67A2030", Offset = "0x67A1030", VA = "0x67A2030", Slot = "6")]
	private void Unity_002EVisualScripting_002EIPoolable_002ENew()
	{
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x67A2040", Offset = "0x67A1040", VA = "0x67A2040", Slot = "7")]
	private void Unity_002EVisualScripting_002EIPoolable_002EFree()
	{
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x67A2180", Offset = "0x67A1180", VA = "0x67A2180", Slot = "4")]
	public override GraphReference AsReference()
	{
		return null;
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x67A21E0", Offset = "0x67A11E0", VA = "0x67A21E0")]
	public GraphReference ToReference()
	{
		return null;
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x67A2240", Offset = "0x67A1240", VA = "0x67A2240")]
	internal void ClearReference()
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x67A22A0", Offset = "0x67A12A0", VA = "0x67A22A0")]
	public new void EnterParentElement(IGraphParentElement parentElement)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x67A2320", Offset = "0x67A1320", VA = "0x67A2320")]
	public bool TryEnterParentElement(IGraphParentElement parentElement)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x67A2340", Offset = "0x67A1340", VA = "0x67A2340")]
	public bool TryEnterParentElementUnsafe(IGraphParentElement parentElement)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x67A2360", Offset = "0x67A1360", VA = "0x67A2360")]
	public new void ExitParentElement()
	{
	}
}
