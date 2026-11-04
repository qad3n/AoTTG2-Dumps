// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Machine
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20000CB")]
public abstract class Machine<TGraph, TMacro> : LudiqBehaviour, IMachine, IGraphRoot, IGraphParent, IGraphNester, IAotStubbable where TGraph : class, IGraph, new() where TMacro : Macro<TGraph>
{
	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	private bool _alive;

	[Token(Token = "0x4000130")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	private bool _enabled;

	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	private GameObject threadSafeGameObject;

	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	private bool isReferenceCached;

	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	private GraphReference _reference;

	[Token(Token = "0x17000101")]
	[Serialize]
	public GraphNest<TGraph, TMacro> nest
	{
		[Token(Token = "0x60004D2")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60004D3")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000102")]
	[DoNotSerialize]
	private IGraphNest Unity_002EVisualScripting_002EIGraphNester_002Enest
	{
		[Token(Token = "0x60004D4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000103")]
	[DoNotSerialize]
	private GameObject Unity_002EVisualScripting_002EIMachine_002EthreadSafeGameObject
	{
		[Token(Token = "0x60004D5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000104")]
	[DoNotSerialize]
	protected GraphReference reference
	{
		[Token(Token = "0x60004D6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000105")]
	[DoNotSerialize]
	protected bool hasGraph
	{
		[Token(Token = "0x60004D7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000106")]
	[DoNotSerialize]
	public TGraph graph
	{
		[Token(Token = "0x60004D8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000107")]
	[DoNotSerialize]
	public IGraphData graphData
	{
		[Token(Token = "0x60004D9")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60004DA")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000108")]
	[DoNotSerialize]
	private bool Unity_002EVisualScripting_002EIGraphParent_002EisSerializationRoot
	{
		[Token(Token = "0x60004DB")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000109")]
	[DoNotSerialize]
	private Object Unity_002EVisualScripting_002EIGraphParent_002EserializedObject
	{
		[Token(Token = "0x60004DC")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010A")]
	[DoNotSerialize]
	private IGraph Unity_002EVisualScripting_002EIGraphParent_002EchildGraph
	{
		[Token(Token = "0x60004DD")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010B")]
	public bool isDescriptionValid
	{
		[Token(Token = "0x60004DF")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004E0")]
		set
		{
		}
	}

	[Token(Token = "0x60004D1")]
	protected Machine()
	{
	}

	[Token(Token = "0x60004DE")]
	public IEnumerable<object> GetAotStubs(HashSet<object> visited)
	{
		return null;
	}

	[Token(Token = "0x60004E1")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x60004E2")]
	protected virtual void OnEnable()
	{
	}

	[Token(Token = "0x60004E3")]
	protected virtual void OnInstantiateWhileEnabled()
	{
	}

	[Token(Token = "0x60004E4")]
	protected virtual void OnUninstantiateWhileEnabled()
	{
	}

	[Token(Token = "0x60004E5")]
	protected virtual void OnDisable()
	{
	}

	[Token(Token = "0x60004E6")]
	protected virtual void OnDestroy()
	{
	}

	[Token(Token = "0x60004E7")]
	protected virtual void OnValidate()
	{
	}

	[Token(Token = "0x60004E8")]
	public GraphPointer GetReference()
	{
		return null;
	}

	[Token(Token = "0x60004E9")]
	private void CacheReference()
	{
	}

	[Token(Token = "0x60004EA")]
	private void ClearCachedReference()
	{
	}

	[Token(Token = "0x60004EB")]
	public virtual void InstantiateNest()
	{
	}

	[Token(Token = "0x60004EC")]
	public virtual void UninstantiateNest()
	{
	}

	[Token(Token = "0x60004ED")]
	public virtual void TriggerAnimationEvent(AnimationEvent animationEvent)
	{
	}

	[Token(Token = "0x60004EE")]
	public virtual void TriggerUnityEvent(string name)
	{
	}

	[Token(Token = "0x60004EF")]
	public abstract TGraph DefaultGraph();

	[Token(Token = "0x60004F0")]
	private IGraph Unity_002EVisualScripting_002EIGraphParent_002EDefaultGraph()
	{
		return null;
	}
}
