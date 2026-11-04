// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GraphDebugData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200006C")]
public class GraphDebugData : IGraphDebugData
{
	[Token(Token = "0x170000AA")]
	protected Dictionary<IGraphElementWithDebugData, IGraphElementDebugData> elementsData
	{
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AB")]
	protected Dictionary<IGraphParentElement, IGraphDebugData> childrenGraphsData
	{
		[Token(Token = "0x60002F0")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AC")]
	private IEnumerable<IGraphElementDebugData> Unity_002EVisualScripting_002EIGraphDebugData_002EelementsData
	{
		[Token(Token = "0x60002F1")]
		[Address(RVA = "0x2DA8410", Offset = "0x2DA6A10", VA = "0x182DA8410", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x2DA8460", Offset = "0x2DA6A60", VA = "0x182DA8460")]
	public GraphDebugData(IGraph definition)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x2DA8350", Offset = "0x2DA6950", VA = "0x182DA8350", Slot = "4")]
	public IGraphElementDebugData GetOrCreateElementData(IGraphElementWithDebugData element)
	{
		return null;
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x2DA8250", Offset = "0x2DA6850", VA = "0x182DA8250", Slot = "5")]
	public IGraphDebugData GetOrCreateChildGraphData(IGraphParentElement element)
	{
		return null;
	}
}
