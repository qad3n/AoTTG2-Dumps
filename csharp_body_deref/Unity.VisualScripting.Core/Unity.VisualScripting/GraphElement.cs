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
	[Token(Token = "0x170000AA")]
	[Serialize]
	public Guid guid
	{
		[Token(Token = "0x60002EE")]
		[CompilerGenerated]
		get
		{
			return default(Guid);
		}
		[Token(Token = "0x60002EF")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	[DoNotSerialize]
	public virtual int dependencyOrder
	{
		[Token(Token = "0x60002F9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000AC")]
	[DoNotSerialize]
	public TGraph graph
	{
		[Token(Token = "0x60002FB")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002FC")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	[DoNotSerialize]
	private IGraph Unity_002EVisualScripting_002EIGraphElement_002Egraph
	{
		[Token(Token = "0x60002FD")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002FE")]
		set
		{
		}
	}

	[Token(Token = "0x170000AE")]
	[DoNotSerialize]
	private IGraph Unity_002EVisualScripting_002EIGraphItem_002Egraph
	{
		[Token(Token = "0x60002FF")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AF")]
	public virtual IEnumerable<ISerializationDependency> deserializationDependencies
	{
		[Token(Token = "0x6000300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002F0")]
	public virtual void Instantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x60002F1")]
	public virtual void Uninstantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x60002F2")]
	public virtual void BeforeAdd()
	{
	}

	[Token(Token = "0x60002F3")]
	public virtual void AfterAdd()
	{
	}

	[Token(Token = "0x60002F4")]
	public virtual void BeforeRemove()
	{
	}

	[Token(Token = "0x60002F5")]
	public virtual void AfterRemove()
	{
	}

	[Token(Token = "0x60002F6")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x60002F7")]
	protected void InstantiateNest()
	{
	}

	[Token(Token = "0x60002F8")]
	protected void UninstantiateNest()
	{
	}

	[Token(Token = "0x60002FA")]
	public virtual bool HandleDependencies()
	{
		return default(bool);
	}

	[Token(Token = "0x6000301")]
	public virtual IEnumerable<object> GetAotStubs(HashSet<object> visited)
	{
		return null;
	}

	[Token(Token = "0x6000302")]
	public virtual void Prewarm()
	{
	}

	[Token(Token = "0x6000303")]
	protected void CopyFrom(GraphElement<TGraph> source)
	{
	}

	[Token(Token = "0x6000304")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000305")]
	public virtual AnalyticsIdentifier GetAnalyticsIdentifier()
	{
		return null;
	}

	[Token(Token = "0x6000306")]
	protected GraphElement()
	{
	}
}
