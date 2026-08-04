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
	[Token(Token = "0x170000A7")]
	protected Dictionary<IGraphElementWithDebugData, IGraphElementDebugData> elementsData
	{
		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x4CAA1B0", Offset = "0x4CAA1B0", VA = "0x4CAA1B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A8")]
	protected Dictionary<IGraphParentElement, IGraphDebugData> childrenGraphsData
	{
		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x4CAA1C0", Offset = "0x4CAA1C0", VA = "0x4CAA1C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A9")]
	private IEnumerable<IGraphElementDebugData> Unity_002EVisualScripting_002EIGraphDebugData_002EelementsData
	{
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x4CAA1D0", Offset = "0x4CAA1D0", VA = "0x4CAA1D0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x4CA8A50", Offset = "0x4CA8A50", VA = "0x4CA8A50")]
	public GraphDebugData(IGraph definition)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x4CAA210", Offset = "0x4CAA210", VA = "0x4CAA210", Slot = "4")]
	public IGraphElementDebugData GetOrCreateElementData(IGraphElementWithDebugData element)
	{
		return null;
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x4CAA320", Offset = "0x4CAA320", VA = "0x4CAA320", Slot = "5")]
	public IGraphDebugData GetOrCreateChildGraphData(IGraphParentElement element)
	{
		return null;
	}
}
