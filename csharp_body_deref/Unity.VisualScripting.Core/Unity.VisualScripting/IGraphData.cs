// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IGraphData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200007D")]
public interface IGraphData
{
	[Token(Token = "0x60003CC")]
	bool TryGetElementData(IGraphElementWithData element, out IGraphElementData data);

	[Token(Token = "0x60003CD")]
	bool TryGetChildGraphData(IGraphParentElement element, out IGraphData data);

	[Token(Token = "0x60003CE")]
	IGraphElementData CreateElementData(IGraphElementWithData element);

	[Token(Token = "0x60003CF")]
	void FreeElementData(IGraphElementWithData element);

	[Token(Token = "0x60003D0")]
	IGraphData CreateChildGraphData(IGraphParentElement element);

	[Token(Token = "0x60003D1")]
	void FreeChildGraphData(IGraphParentElement element);
}
