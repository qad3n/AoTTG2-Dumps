using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200007E")]
public interface IGraphDebugData
{
	[Token(Token = "0x170000E3")]
	IEnumerable<IGraphElementDebugData> elementsData
	{
		[Token(Token = "0x60003D4")]
		get;
	}

	[Token(Token = "0x60003D2")]
	IGraphElementDebugData GetOrCreateElementData(IGraphElementWithDebugData element);

	[Token(Token = "0x60003D3")]
	IGraphDebugData GetOrCreateChildGraphData(IGraphParentElement element);
}
