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

[Token(Token = "0x200007A")]
public sealed class GraphStack : GraphPointer, IPoolable, IDisposable
{
	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x4CB3860", Offset = "0x4CB3860", VA = "0x4CB3860")]
	private GraphStack()
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x4CB3870", Offset = "0x4CB3870", VA = "0x4CB3870")]
	private void InitializeNoAlloc(IGraphRoot root, List<IGraphParentElement> parentElements, bool ensureValid)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x4CB3B40", Offset = "0x4CB3B40", VA = "0x4CB3B40")]
	internal static GraphStack New(IGraphRoot root, List<IGraphParentElement> parentElements)
	{
		return null;
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x4CB17E0", Offset = "0x4CB17E0", VA = "0x4CB17E0")]
	internal static GraphStack New(GraphPointer model)
	{
		return null;
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x4CB3CE0", Offset = "0x4CB3CE0", VA = "0x4CB3CE0")]
	public GraphStack Clone()
	{
		return null;
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x4CB3CF0", Offset = "0x4CB3CF0", VA = "0x4CB3CF0", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x4CB3D50", Offset = "0x4CB3D50", VA = "0x4CB3D50", Slot = "6")]
	private void Unity_002EVisualScripting_002EIPoolable_002ENew()
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x4CB3D60", Offset = "0x4CB3D60", VA = "0x4CB3D60", Slot = "7")]
	private void Unity_002EVisualScripting_002EIPoolable_002EFree()
	{
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x4CB3EA0", Offset = "0x4CB3EA0", VA = "0x4CB3EA0", Slot = "4")]
	public override GraphReference AsReference()
	{
		return null;
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x4CB3F00", Offset = "0x4CB3F00", VA = "0x4CB3F00")]
	public GraphReference ToReference()
	{
		return null;
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x4CB3F60", Offset = "0x4CB3F60", VA = "0x4CB3F60")]
	public new void EnterParentElement(IGraphParentElement parentElement)
	{
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x4CB3FE0", Offset = "0x4CB3FE0", VA = "0x4CB3FE0")]
	public bool TryEnterParentElement(IGraphParentElement parentElement)
	{
		return default(bool);
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x4CB4000", Offset = "0x4CB4000", VA = "0x4CB4000")]
	public bool TryEnterParentElementUnsafe(IGraphParentElement parentElement)
	{
		return default(bool);
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x4CB4020", Offset = "0x4CB4020", VA = "0x4CB4020")]
	public new void ExitParentElement()
	{
	}
}
