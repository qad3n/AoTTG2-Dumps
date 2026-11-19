// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GraphPointer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Unity.VisualScripting;

[Token(Token = "0x2000073")]
public abstract class GraphPointer
{
	[Token(Token = "0x4000103")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected readonly List<IGraphParent> parentStack;

	[Token(Token = "0x4000104")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected readonly List<IGraphParentElement> parentElementStack;

	[Token(Token = "0x4000105")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected readonly List<IGraph> graphStack;

	[Token(Token = "0x4000106")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected readonly List<IGraphData> dataStack;

	[Token(Token = "0x4000107")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected readonly List<IGraphDebugData> debugDataStack;

	[Token(Token = "0x4000109")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static Action<IGraphRoot> releaseDebugDataBinding;

	[Token(Token = "0x170000C3")]
	public IGraphRoot root
	{
		[Token(Token = "0x6000358")]
		[Address(RVA = "0x679DB70", Offset = "0x679CB70", VA = "0x679DB70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000359")]
		[Address(RVA = "0x679DB80", Offset = "0x679CB80", VA = "0x679DB80")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170000C4")]
	public UnityEngine.Object rootObject
	{
		[Token(Token = "0x600035A")]
		[Address(RVA = "0x679DB90", Offset = "0x679CB90", VA = "0x679DB90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C5")]
	public IMachine machine
	{
		[Token(Token = "0x600035B")]
		[Address(RVA = "0x679C0F0", Offset = "0x679B0F0", VA = "0x679C0F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C6")]
	public IMacro macro
	{
		[Token(Token = "0x600035C")]
		[Address(RVA = "0x679DBF0", Offset = "0x679CBF0", VA = "0x679DBF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C7")]
	public MonoBehaviour component
	{
		[Token(Token = "0x600035D")]
		[Address(RVA = "0x679C130", Offset = "0x679B130", VA = "0x679C130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C8")]
	public GameObject gameObject
	{
		[Token(Token = "0x600035E")]
		[Address(RVA = "0x679DC30", Offset = "0x679CC30", VA = "0x679DC30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600035F")]
		[Address(RVA = "0x679DC40", Offset = "0x679CC40", VA = "0x679DC40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000C9")]
	public GameObject self
	{
		[Token(Token = "0x6000360")]
		[Address(RVA = "0x679DC50", Offset = "0x679CC50", VA = "0x679DC50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CA")]
	public ScriptableObject scriptableObject
	{
		[Token(Token = "0x6000361")]
		[Address(RVA = "0x679DC60", Offset = "0x679CC60", VA = "0x679DC60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CB")]
	public Scene? scene
	{
		[Token(Token = "0x6000362")]
		[Address(RVA = "0x679DCC0", Offset = "0x679CCC0", VA = "0x679DCC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CC")]
	public UnityEngine.Object serializedObject
	{
		[Token(Token = "0x6000363")]
		[Address(RVA = "0x679DD90", Offset = "0x679CD90", VA = "0x679DD90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CD")]
	public IEnumerable<Guid> parentElementGuids
	{
		[Token(Token = "0x6000364")]
		[Address(RVA = "0x679DFD0", Offset = "0x679CFD0", VA = "0x679DFD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CE")]
	public int depth
	{
		[Token(Token = "0x6000365")]
		[Address(RVA = "0x679DF90", Offset = "0x679CF90", VA = "0x679DF90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000CF")]
	public bool isRoot
	{
		[Token(Token = "0x6000366")]
		[Address(RVA = "0x679E0E0", Offset = "0x679D0E0", VA = "0x679E0E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D0")]
	public bool isChild
	{
		[Token(Token = "0x6000367")]
		[Address(RVA = "0x679E120", Offset = "0x679D120", VA = "0x679E120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D1")]
	public IGraphParent parent
	{
		[Token(Token = "0x600036C")]
		[Address(RVA = "0x679A300", Offset = "0x6799300", VA = "0x679A300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D2")]
	public IGraphParentElement parentElement
	{
		[Token(Token = "0x600036E")]
		[Address(RVA = "0x679E400", Offset = "0x679D400", VA = "0x679E400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D3")]
	public IGraph rootGraph
	{
		[Token(Token = "0x600036F")]
		[Address(RVA = "0x679E460", Offset = "0x679D460", VA = "0x679E460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D4")]
	public IGraph graph
	{
		[Token(Token = "0x6000370")]
		[Address(RVA = "0x679A2B0", Offset = "0x67992B0", VA = "0x679A2B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D5")]
	protected IGraphData _data
	{
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x679E4A0", Offset = "0x679D4A0", VA = "0x679E4A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x679E4F0", Offset = "0x679D4F0", VA = "0x679E4F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D6")]
	public IGraphData data
	{
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x679E550", Offset = "0x679D550", VA = "0x679E550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D7")]
	protected IGraphData _parentData
	{
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x679E660", Offset = "0x679D660", VA = "0x679E660")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D8")]
	public bool hasData
	{
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x679E6B0", Offset = "0x679D6B0", VA = "0x679E6B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D9")]
	public static Func<IGraphRoot, IGraphDebugData> fetchRootDebugDataBinding
	{
		[Token(Token = "0x6000379")]
		[Address(RVA = "0x679E710", Offset = "0x679D710", VA = "0x679E710")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600037A")]
		[Address(RVA = "0x679E750", Offset = "0x679D750", VA = "0x679E750")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000DA")]
	public bool hasDebugData
	{
		[Token(Token = "0x600037B")]
		[Address(RVA = "0x679E7A0", Offset = "0x679D7A0", VA = "0x679E7A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DB")]
	protected IGraphDebugData _debugData
	{
		[Token(Token = "0x600037D")]
		[Address(RVA = "0x679E800", Offset = "0x679D800", VA = "0x679E800")]
		get
		{
			return null;
		}
		[Token(Token = "0x600037E")]
		[Address(RVA = "0x679E900", Offset = "0x679D900", VA = "0x679E900")]
		set
		{
		}
	}

	[Token(Token = "0x170000DC")]
	public IGraphDebugData debugData
	{
		[Token(Token = "0x600037F")]
		[Address(RVA = "0x679E960", Offset = "0x679D960", VA = "0x679E960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DD")]
	public bool isValid
	{
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x679F130", Offset = "0x679E130", VA = "0x679F130")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x679B580", Offset = "0x679A580", VA = "0x679B580")]
	protected static bool IsValidRoot(IGraphRoot root)
	{
		return default(bool);
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x679B6A0", Offset = "0x679A6A0", VA = "0x679B6A0")]
	protected static bool IsValidRoot(UnityEngine.Object rootObject)
	{
		return default(bool);
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x679B7A0", Offset = "0x679A7A0", VA = "0x679B7A0")]
	internal GraphPointer()
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x679B950", Offset = "0x679A950", VA = "0x679B950")]
	protected void Initialize(IGraphRoot root)
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x679C250", Offset = "0x679B250", VA = "0x679C250")]
	protected void Initialize(IGraphRoot root, IEnumerable<IGraphParentElement> parentElements, bool ensureValid)
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x679CBA0", Offset = "0x679BBA0", VA = "0x679CBA0")]
	protected void Initialize(UnityEngine.Object rootObject, IEnumerable<Guid> parentElementGuids, bool ensureValid)
	{
	}

	[Token(Token = "0x6000356")]
	public abstract GraphReference AsReference();

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x679D220", Offset = "0x679C220", VA = "0x679D220", Slot = "5")]
	public virtual void CopyFrom(GraphPointer other)
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x679E160", Offset = "0x679D160", VA = "0x679E160")]
	public void EnsureDepthValid(int depth)
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x679E370", Offset = "0x679D370", VA = "0x679E370")]
	public void EnsureChild()
	{
	}

	[Token(Token = "0x600036A")]
	public bool IsWithin<T>() where T : IGraphParent
	{
		return default(bool);
	}

	[Token(Token = "0x600036B")]
	public void EnsureWithin<T>() where T : IGraphParent
	{
	}

	[Token(Token = "0x600036D")]
	public T GetParent<T>() where T : IGraphParent
	{
		return (T)null;
	}

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x679E5B0", Offset = "0x679D5B0", VA = "0x679E5B0")]
	public void EnsureDataAvailable()
	{
	}

	[Token(Token = "0x6000377")]
	public T GetGraphData<T>() where T : IGraphData
	{
		return (T)null;
	}

	[Token(Token = "0x6000378")]
	public T GetElementData<T>(IGraphElementWithData element) where T : IGraphElementData
	{
		return (T)null;
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x679E850", Offset = "0x679D850", VA = "0x679E850")]
	public void EnsureDebugDataAvailable()
	{
	}

	[Token(Token = "0x6000380")]
	public T GetGraphDebugData<T>() where T : IGraphDebugData
	{
		return (T)null;
	}

	[Token(Token = "0x6000381")]
	public T GetElementDebugData<T>(IGraphElementWithDebugData element)
	{
		return (T)null;
	}

	[Token(Token = "0x6000382")]
	[Address(RVA = "0x679D010", Offset = "0x679C010", VA = "0x679D010")]
	protected bool TryEnterParentElement(Guid parentElementGuid, out string error, [Optional] int? maxRecursionDepth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000383")]
	[Address(RVA = "0x679C690", Offset = "0x679B690", VA = "0x679C690")]
	protected bool TryEnterParentElement(IGraphParentElement parentElement, out string error, [Optional] int? maxRecursionDepth, bool skipContainsCheck = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000384")]
	[Address(RVA = "0x679EE70", Offset = "0x679DE70", VA = "0x679EE70")]
	protected void EnterParentElement(IGraphParentElement parentElement)
	{
	}

	[Token(Token = "0x6000385")]
	[Address(RVA = "0x679EEF0", Offset = "0x679DEF0", VA = "0x679EEF0")]
	protected void EnterParentElement(Guid parentElementGuid)
	{
	}

	[Token(Token = "0x6000386")]
	[Address(RVA = "0x679E9C0", Offset = "0x679D9C0", VA = "0x679E9C0")]
	private void EnterValidParentElement(IGraphParentElement parentElement)
	{
	}

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x679EF70", Offset = "0x679DF70", VA = "0x679EF70")]
	protected void ExitParentElement()
	{
	}

	[Token(Token = "0x6000389")]
	[Address(RVA = "0x679F640", Offset = "0x679E640", VA = "0x679F640")]
	public void EnsureValid()
	{
	}

	[Token(Token = "0x600038A")]
	[Address(RVA = "0x679F6A0", Offset = "0x679E6A0", VA = "0x679F6A0")]
	public bool InstanceEquals(GraphPointer other)
	{
		return default(bool);
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x679F840", Offset = "0x679E840", VA = "0x679F840")]
	public bool DefinitionEquals(GraphPointer other)
	{
		return default(bool);
	}

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x679F9B0", Offset = "0x679E9B0", VA = "0x679F9B0")]
	public int ComputeHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x679FC60", Offset = "0x679EC60", VA = "0x679FC60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
