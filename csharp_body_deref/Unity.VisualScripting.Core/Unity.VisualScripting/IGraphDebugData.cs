// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IGraphDebugData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
