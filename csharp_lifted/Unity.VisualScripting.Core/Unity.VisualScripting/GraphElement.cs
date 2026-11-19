// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GraphElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200006D")]
public abstract class GraphElement<TGraph> : IGraphElement, IGraphItem, INotifiedCollectionItem, IDisposable, IPrewarmable, IAotStubbable, IIdentifiable, IAnalyticsIdentifiable where TGraph : class, IGraph
{
	[Token(Token = "0x170000AD")]
	[Serialize]
	public Guid guid
	{
		[Token(Token = "0x60002F5")]
		[CompilerGenerated]
		get
		{
			return default(Guid);
		}
		[Token(Token = "0x60002F6")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000AE")]
	[DoNotSerialize]
	public virtual int dependencyOrder
	{
		[Token(Token = "0x6000300")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000AF")]
	[DoNotSerialize]
	public TGraph graph
	{
		[Token(Token = "0x6000302")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000303")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	[DoNotSerialize]
	private IGraph Unity_002EVisualScripting_002EIGraphElement_002Egraph
	{
		[Token(Token = "0x6000304")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000305")]
		set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	[DoNotSerialize]
	private IGraph Unity_002EVisualScripting_002EIGraphItem_002Egraph
	{
		[Token(Token = "0x6000306")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B2")]
	public virtual IEnumerable<ISerializationDependency> deserializationDependencies
	{
		[Token(Token = "0x6000307")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002F7")]
	public virtual void Instantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x60002F8")]
	public virtual void Uninstantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x60002F9")]
	public virtual void BeforeAdd()
	{
	}

	[Token(Token = "0x60002FA")]
	public virtual void AfterAdd()
	{
	}

	[Token(Token = "0x60002FB")]
	public virtual void BeforeRemove()
	{
	}

	[Token(Token = "0x60002FC")]
	public virtual void AfterRemove()
	{
	}

	[Token(Token = "0x60002FD")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x60002FE")]
	protected void InstantiateNest()
	{
	}

	[Token(Token = "0x60002FF")]
	protected void UninstantiateNest()
	{
	}

	[Token(Token = "0x6000301")]
	public virtual bool HandleDependencies()
	{
		return default(bool);
	}

	[Token(Token = "0x6000308")]
	public virtual IEnumerable<object> GetAotStubs(HashSet<object> visited)
	{
		return null;
	}

	[Token(Token = "0x6000309")]
	public virtual void Prewarm()
	{
	}

	[Token(Token = "0x600030A")]
	protected void CopyFrom(GraphElement<TGraph> source)
	{
	}

	[Token(Token = "0x600030B")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600030C")]
	public virtual AnalyticsIdentifier GetAnalyticsIdentifier()
	{
		return null;
	}

	[Token(Token = "0x600030D")]
	protected GraphElement()
	{
	}
}
