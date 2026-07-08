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
