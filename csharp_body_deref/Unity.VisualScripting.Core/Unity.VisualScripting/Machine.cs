using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20000CB")]
public abstract class Machine<TGraph, TMacro> : LudiqBehaviour, IMachine, IGraphRoot, IGraphParent, IGraphNester, IAotStubbable where TGraph : class, IGraph, new() where TMacro : Macro<TGraph>
{
	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	private bool _alive;

	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	private bool _enabled;

	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	private GameObject threadSafeGameObject;

	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	private bool isReferenceCached;

	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	private GraphReference _reference;

	[Token(Token = "0x170000FE")]
	[Serialize]
	public GraphNest<TGraph, TMacro> nest
	{
		[Token(Token = "0x60004C8")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60004C9")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000FF")]
	[DoNotSerialize]
	private IGraphNest Unity_002EVisualScripting_002EIGraphNester_002Enest
	{
		[Token(Token = "0x60004CA")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000100")]
	[DoNotSerialize]
	private GameObject Unity_002EVisualScripting_002EIMachine_002EthreadSafeGameObject
	{
		[Token(Token = "0x60004CB")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000101")]
	[DoNotSerialize]
	protected GraphReference reference
	{
		[Token(Token = "0x60004CC")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000102")]
	[DoNotSerialize]
	protected bool hasGraph
	{
		[Token(Token = "0x60004CD")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000103")]
	[DoNotSerialize]
	public TGraph graph
	{
		[Token(Token = "0x60004CE")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000104")]
	[DoNotSerialize]
	public IGraphData graphData
	{
		[Token(Token = "0x60004CF")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60004D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000105")]
	[DoNotSerialize]
	private bool Unity_002EVisualScripting_002EIGraphParent_002EisSerializationRoot
	{
		[Token(Token = "0x60004D1")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000106")]
	[DoNotSerialize]
	private Object Unity_002EVisualScripting_002EIGraphParent_002EserializedObject
	{
		[Token(Token = "0x60004D2")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000107")]
	[DoNotSerialize]
	private IGraph Unity_002EVisualScripting_002EIGraphParent_002EchildGraph
	{
		[Token(Token = "0x60004D3")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000108")]
	public bool isDescriptionValid
	{
		[Token(Token = "0x60004D5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004D6")]
		set
		{
		}
	}

	[Token(Token = "0x60004C7")]
	protected Machine()
	{
	}

	[Token(Token = "0x60004D4")]
	public IEnumerable<object> GetAotStubs(HashSet<object> visited)
	{
		return null;
	}

	[Token(Token = "0x60004D7")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x60004D8")]
	protected virtual void OnEnable()
	{
	}

	[Token(Token = "0x60004D9")]
	protected virtual void OnInstantiateWhileEnabled()
	{
	}

	[Token(Token = "0x60004DA")]
	protected virtual void OnUninstantiateWhileEnabled()
	{
	}

	[Token(Token = "0x60004DB")]
	protected virtual void OnDisable()
	{
	}

	[Token(Token = "0x60004DC")]
	protected virtual void OnDestroy()
	{
	}

	[Token(Token = "0x60004DD")]
	protected virtual void OnValidate()
	{
	}

	[Token(Token = "0x60004DE")]
	public GraphPointer GetReference()
	{
		return null;
	}

	[Token(Token = "0x60004DF")]
	private void CacheReference()
	{
	}

	[Token(Token = "0x60004E0")]
	private void ClearCachedReference()
	{
	}

	[Token(Token = "0x60004E1")]
	public virtual void InstantiateNest()
	{
	}

	[Token(Token = "0x60004E2")]
	public virtual void UninstantiateNest()
	{
	}

	[Token(Token = "0x60004E3")]
	public virtual void TriggerAnimationEvent(AnimationEvent animationEvent)
	{
	}

	[Token(Token = "0x60004E4")]
	public virtual void TriggerUnityEvent(string name)
	{
	}

	[Token(Token = "0x60004E5")]
	public abstract TGraph DefaultGraph();

	[Token(Token = "0x60004E6")]
	private IGraph Unity_002EVisualScripting_002EIGraphParent_002EDefaultGraph()
	{
		return null;
	}
}
