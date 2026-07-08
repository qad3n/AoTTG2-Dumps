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
		[Address(RVA = "0x49855E0", Offset = "0x49855E0", VA = "0x49855E0")]
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
		[Address(RVA = "0x49855F0", Offset = "0x49855F0", VA = "0x49855F0")]
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
		[Address(RVA = "0x4985600", Offset = "0x4985600", VA = "0x4985600", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x4983E80", Offset = "0x4983E80", VA = "0x4983E80")]
	public GraphDebugData(IGraph definition)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x4985640", Offset = "0x4985640", VA = "0x4985640", Slot = "4")]
	public IGraphElementDebugData GetOrCreateElementData(IGraphElementWithDebugData element)
	{
		return null;
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x4985750", Offset = "0x4985750", VA = "0x4985750", Slot = "5")]
	public IGraphDebugData GetOrCreateChildGraphData(IGraphParentElement element)
	{
		return null;
	}
}
