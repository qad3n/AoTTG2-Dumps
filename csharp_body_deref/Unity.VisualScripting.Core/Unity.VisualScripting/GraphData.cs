using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200006B")]
public class GraphData<TGraph> : IGraphData where TGraph : class, IGraph
{
	[Token(Token = "0x170000A2")]
	protected TGraph definition
	{
		[Token(Token = "0x60002DD")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A3")]
	protected Dictionary<IGraphElementWithData, IGraphElementData> elementsData
	{
		[Token(Token = "0x60002DE")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A4")]
	protected Dictionary<IGraphParentElement, IGraphData> childrenGraphsData
	{
		[Token(Token = "0x60002DF")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A5")]
	protected Dictionary<Guid, IGraphElementData> phantomElementsData
	{
		[Token(Token = "0x60002E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A6")]
	protected Dictionary<Guid, IGraphData> phantomChildrenGraphsData
	{
		[Token(Token = "0x60002E1")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002DC")]
	public GraphData(TGraph definition)
	{
	}

	[Token(Token = "0x60002E2")]
	public bool TryGetElementData(IGraphElementWithData element, out IGraphElementData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60002E3")]
	public bool TryGetChildGraphData(IGraphParentElement element, out IGraphData data)
	{
		return default(bool);
	}

	[Token(Token = "0x60002E4")]
	public IGraphElementData CreateElementData(IGraphElementWithData element)
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	public void FreeElementData(IGraphElementWithData element)
	{
	}

	[Token(Token = "0x60002E6")]
	public IGraphData CreateChildGraphData(IGraphParentElement element)
	{
		return null;
	}

	[Token(Token = "0x60002E7")]
	public void FreeChildGraphData(IGraphParentElement element)
	{
	}
}
