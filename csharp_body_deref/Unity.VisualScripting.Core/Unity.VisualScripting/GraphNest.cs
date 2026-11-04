// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GraphNest
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Token(Token = "0x40000FD")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x40000FE")]
		[FieldOffset(Offset = "0x0")]
		private ISerializationDependency _003C_003E2__current;

		[Token(Token = "0x40000FF")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000100")]
		[FieldOffset(Offset = "0x0")]
		public GraphNest<TGraph, TMacro> _003C_003E4__this;

		[Token(Token = "0x170000C1")]
		private ISerializationDependency System_002ECollections_002EGeneric_002EIEnumerator_003CUnity_002EVisualScripting_002EISerializationDependency_003E_002ECurrent
		{
			[Token(Token = "0x600034B")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000C2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600034D")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000348")]
		[DebuggerHidden]
		public _003Cget_deserializationDependencies_003Ed__41(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000349")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600034A")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600034C")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600034E")]
		[DebuggerHidden]
		private IEnumerator<ISerializationDependency> System_002ECollections_002EGeneric_002EIEnumerable_003CUnity_002EVisualScripting_002EISerializationDependency_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600034F")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	private GraphSource _source;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	private TMacro _macro;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	private TGraph _embed;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private Action m_beforeGraphChange;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private Action m_afterGraphChange;

	[Token(Token = "0x170000B5")]
	[DoNotSerialize]
	public IGraphNester nester
	{
		[Token(Token = "0x600032C")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600032D")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B6")]
	[Serialize]
	public GraphSource source
	{
		[Token(Token = "0x600032E")]
		get
		{
			return default(GraphSource);
		}
		[Token(Token = "0x600032F")]
		set
		{
		}
	}

	[Token(Token = "0x170000B7")]
	[Serialize]
	public TMacro macro
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

	[Token(Token = "0x170000B8")]
	[Serialize]
	public TGraph embed
	{
		[Token(Token = "0x6000332")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000333")]
		set
		{
		}
	}

	[Token(Token = "0x170000B9")]
	[DoNotSerialize]
	public TGraph graph
	{
		[Token(Token = "0x6000334")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BA")]
	private IMacro Unity_002EVisualScripting_002EIGraphNest_002Emacro
	{
		[Token(Token = "0x6000335")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000336")]
		set
		{
		}
	}

	[Token(Token = "0x170000BB")]
	private IGraph Unity_002EVisualScripting_002EIGraphNest_002Eembed
	{
		[Token(Token = "0x6000337")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000338")]
		set
		{
		}
	}

	[Token(Token = "0x170000BC")]
	private IGraph Unity_002EVisualScripting_002EIGraphNest_002Egraph
	{
		[Token(Token = "0x6000339")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BD")]
	private Type Unity_002EVisualScripting_002EIGraphNest_002EgraphType
	{
		[Token(Token = "0x600033A")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BE")]
	private Type Unity_002EVisualScripting_002EIGraphNest_002EmacroType
	{
		[Token(Token = "0x600033B")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BF")]
	public IEnumerable<ISerializationDependency> deserializationDependencies
	{
		[Token(Token = "0x6000344")]
		[IteratorStateMachine(typeof(GraphNest<, >._003Cget_deserializationDependencies_003Ed__41))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C0")]
	[DoNotSerialize]
	public bool hasBackgroundEmbed
	{
		[Token(Token = "0x6000346")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1400000D")]
	public event Action beforeGraphChange
	{
		[Token(Token = "0x600033E")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600033F")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000E")]
	public event Action afterGraphChange
	{
		[Token(Token = "0x6000340")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000341")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600033C")]
	public void SwitchToEmbed(TGraph embed)
	{
	}

	[Token(Token = "0x600033D")]
	public void SwitchToMacro(TMacro macro)
	{
	}

	[Token(Token = "0x6000342")]
	private void BeforeGraphChange()
	{
	}

	[Token(Token = "0x6000343")]
	private void AfterGraphChange()
	{
	}

	[Token(Token = "0x6000345")]
	public IEnumerable<object> GetAotStubs(HashSet<object> visited)
	{
		return null;
	}

	[Token(Token = "0x6000347")]
	public GraphNest()
	{
	}
}
