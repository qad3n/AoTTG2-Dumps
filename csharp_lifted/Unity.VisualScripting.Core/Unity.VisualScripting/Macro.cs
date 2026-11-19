// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Macro
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

[Token(Token = "0x20000CD")]
[DisableAnnotation]
public abstract class Macro<TGraph> : MacroScriptableObject, IMacro, IGraphRoot, IGraphParent, ISerializationDependency, ISerializationCallbackReceiver, IAotStubbable where TGraph : class, IGraph, new()
{
	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x0")]
	[SerializeAs("graph")]
	private TGraph _graph;

	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	private GraphReference _reference;

	[Token(Token = "0x1700010D")]
	[DoNotSerialize]
	public TGraph graph
	{
		[Token(Token = "0x60004F3")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004F4")]
		set
		{
		}
	}

	[Token(Token = "0x1700010E")]
	[DoNotSerialize]
	private IGraph Unity_002EVisualScripting_002EIMacro_002Egraph
	{
		[Token(Token = "0x60004F5")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004F6")]
		set
		{
		}
	}

	[Token(Token = "0x1700010F")]
	[DoNotSerialize]
	private IGraph Unity_002EVisualScripting_002EIGraphParent_002EchildGraph
	{
		[Token(Token = "0x60004F7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000110")]
	[DoNotSerialize]
	private bool Unity_002EVisualScripting_002EIGraphParent_002EisSerializationRoot
	{
		[Token(Token = "0x60004F9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000111")]
	[DoNotSerialize]
	private Object Unity_002EVisualScripting_002EIGraphParent_002EserializedObject
	{
		[Token(Token = "0x60004FA")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000112")]
	[DoNotSerialize]
	protected GraphReference reference
	{
		[Token(Token = "0x60004FB")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000113")]
	public bool isDescriptionValid
	{
		[Token(Token = "0x60004FC")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004FD")]
		set
		{
		}
	}

	[Token(Token = "0x17000114")]
	private bool Unity_002EVisualScripting_002EISerializationDependency_002EIsDeserialized
	{
		[Token(Token = "0x6000505")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000506")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60004F8")]
	public IEnumerable<object> GetAotStubs(HashSet<object> visited)
	{
		return null;
	}

	[Token(Token = "0x60004FE")]
	protected override void OnBeforeDeserialize()
	{
	}

	[Token(Token = "0x60004FF")]
	protected override void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000500")]
	public abstract TGraph DefaultGraph();

	[Token(Token = "0x6000501")]
	private IGraph Unity_002EVisualScripting_002EIGraphParent_002EDefaultGraph()
	{
		return null;
	}

	[Token(Token = "0x6000502")]
	protected virtual void OnEnable()
	{
	}

	[Token(Token = "0x6000503")]
	protected virtual void OnDisable()
	{
	}

	[Token(Token = "0x6000504")]
	public GraphPointer GetReference()
	{
		return null;
	}

	[Token(Token = "0x6000507")]
	protected Macro()
	{
	}
}
