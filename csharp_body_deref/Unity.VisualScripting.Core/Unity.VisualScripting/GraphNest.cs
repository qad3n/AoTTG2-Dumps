using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000071")]
public sealed class GraphNest<TGraph, TMacro> : IGraphNest, IAotStubbable where TGraph : class, IGraph, new() where TMacro : Macro<TGraph>
{
	[Token(Token = "0x2000072")]
	[CompilerGenerated]
	private sealed class _003Cget_deserializationDependencies_003Ed__41 : IEnumerable<ISerializationDependency>, IEnumerable, IEnumerator<ISerializationDependency>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000100")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000101")]
		[FieldOffset(Offset = "0x0")]
		private ISerializationDependency _003C_003E2__current;

		[Token(Token = "0x4000102")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000103")]
		[FieldOffset(Offset = "0x0")]
		public GraphNest<TGraph, TMacro> _003C_003E4__this;

		[Token(Token = "0x170000BE")]
		private ISerializationDependency System_002ECollections_002EGeneric_002EIEnumerator_003CUnity_002EVisualScripting_002EISerializationDependency_003E_002ECurrent
		{
			[Token(Token = "0x6000344")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000BF")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000346")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000341")]
		[DebuggerHidden]
		public _003Cget_deserializationDependencies_003Ed__41(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000342")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000343")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000345")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000347")]
		[DebuggerHidden]
		private IEnumerator<ISerializationDependency> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002EVisualScripting_002EISerializationDependency_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000348")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	private GraphSource _source;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	private TMacro _macro;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	private TGraph _embed;

	[Token(Token = "0x170000B2")]
	[DoNotSerialize]
	public IGraphNester nester
	{
		[Token(Token = "0x6000325")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000326")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B3")]
	[Serialize]
	public GraphSource source
	{
		[Token(Token = "0x6000327")]
		get
		{
			return default(GraphSource);
		}
		[Token(Token = "0x6000328")]
		set
		{
		}
	}

	[Token(Token = "0x170000B4")]
	[Serialize]
	public TMacro macro
	{
		[Token(Token = "0x6000329")]
		get
		{
			return null;
		}
		[Token(Token = "0x600032A")]
		set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	[Serialize]
	public TGraph embed
	{
		[Token(Token = "0x600032B")]
		get
		{
			return null;
		}
		[Token(Token = "0x600032C")]
		set
		{
		}
	}

	[Token(Token = "0x170000B6")]
	[DoNotSerialize]
	public TGraph graph
	{
		[Token(Token = "0x600032D")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B7")]
	private IMacro Unity_002EVisualScripting_002EIGraphNest_002Emacro
	{
		[Token(Token = "0x600032E")]
		get
		{
			return null;
		}
		[Token(Token = "0x600032F")]
		set
		{
		}
	}

	[Token(Token = "0x170000B8")]
	private IGraph Unity_002EVisualScripting_002EIGraphNest_002Eembed
	{
		[Token(Token = "0x6000330")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000331")]
		set
		{
		}
	}

	[Token(Token = "0x170000B9")]
	private IGraph Unity_002EVisualScripting_002EIGraphNest_002Egraph
	{
		[Token(Token = "0x6000332")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BA")]
	private Type Unity_002EVisualScripting_002EIGraphNest_002EgraphType
	{
		[Token(Token = "0x6000333")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BB")]
	private Type Unity_002EVisualScripting_002EIGraphNest_002EmacroType
	{
		[Token(Token = "0x6000334")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BC")]
	public IEnumerable<ISerializationDependency> deserializationDependencies
	{
		[Token(Token = "0x600033D")]
		[IteratorStateMachine(typeof(GraphNest<, >._003Cget_deserializationDependencies_003Ed__41))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BD")]
	[DoNotSerialize]
	public bool hasBackgroundEmbed
	{
		[Token(Token = "0x600033F")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1400000D")]
	public event Action beforeGraphChange
	{
		[Token(Token = "0x6000337")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000338")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000E")]
	public event Action afterGraphChange
	{
		[Token(Token = "0x6000339")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600033A")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000335")]
	public void SwitchToEmbed(TGraph embed)
	{
	}

	[Token(Token = "0x6000336")]
	public void SwitchToMacro(TMacro macro)
	{
	}

	[Token(Token = "0x600033B")]
	private void BeforeGraphChange()
	{
	}

	[Token(Token = "0x600033C")]
	private void AfterGraphChange()
	{
	}

	[Token(Token = "0x600033E")]
	public IEnumerable<object> GetAotStubs(HashSet<object> visited)
	{
		return null;
	}

	[Token(Token = "0x6000340")]
	public GraphNest()
	{
	}
}
