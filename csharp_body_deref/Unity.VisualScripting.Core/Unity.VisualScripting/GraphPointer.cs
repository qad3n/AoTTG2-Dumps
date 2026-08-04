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
	[Token(Token = "0x4000106")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected readonly List<IGraphParent> parentStack;

	[Token(Token = "0x4000107")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected readonly List<IGraphParentElement> parentElementStack;

	[Token(Token = "0x4000108")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected readonly List<IGraph> graphStack;

	[Token(Token = "0x4000109")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected readonly List<IGraphData> dataStack;

	[Token(Token = "0x400010A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected readonly List<IGraphDebugData> debugDataStack;

	[Token(Token = "0x170000C0")]
	public IGraphRoot root
	{
		[Token(Token = "0x6000351")]
		[Address(RVA = "0x4CAEE50", Offset = "0x4CAEE50", VA = "0x4CAEE50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000352")]
		[Address(RVA = "0x4CAEE60", Offset = "0x4CAEE60", VA = "0x4CAEE60")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170000C1")]
	public UnityEngine.Object rootObject
	{
		[Token(Token = "0x6000353")]
		[Address(RVA = "0x4CAEE70", Offset = "0x4CAEE70", VA = "0x4CAEE70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C2")]
	public IMachine machine
	{
		[Token(Token = "0x6000354")]
		[Address(RVA = "0x4CAD260", Offset = "0x4CAD260", VA = "0x4CAD260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C3")]
	public IMacro macro
	{
		[Token(Token = "0x6000355")]
		[Address(RVA = "0x4CAEED0", Offset = "0x4CAEED0", VA = "0x4CAEED0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C4")]
	public MonoBehaviour component
	{
		[Token(Token = "0x6000356")]
		[Address(RVA = "0x4CAD2A0", Offset = "0x4CAD2A0", VA = "0x4CAD2A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C5")]
	public GameObject gameObject
	{
		[Token(Token = "0x6000357")]
		[Address(RVA = "0x4CAEF10", Offset = "0x4CAEF10", VA = "0x4CAEF10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000358")]
		[Address(RVA = "0x4CAEF20", Offset = "0x4CAEF20", VA = "0x4CAEF20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000C6")]
	public GameObject self
	{
		[Token(Token = "0x6000359")]
		[Address(RVA = "0x4CAEF30", Offset = "0x4CAEF30", VA = "0x4CAEF30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C7")]
	public ScriptableObject scriptableObject
	{
		[Token(Token = "0x600035A")]
		[Address(RVA = "0x4CAEF40", Offset = "0x4CAEF40", VA = "0x4CAEF40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C8")]
	public Scene? scene
	{
		[Token(Token = "0x600035B")]
		[Address(RVA = "0x4CAEFA0", Offset = "0x4CAEFA0", VA = "0x4CAEFA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C9")]
	public UnityEngine.Object serializedObject
	{
		[Token(Token = "0x600035C")]
		[Address(RVA = "0x4CAF070", Offset = "0x4CAF070", VA = "0x4CAF070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CA")]
	public IEnumerable<Guid> parentElementGuids
	{
		[Token(Token = "0x600035D")]
		[Address(RVA = "0x4CAF2B0", Offset = "0x4CAF2B0", VA = "0x4CAF2B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CB")]
	public int depth
	{
		[Token(Token = "0x600035E")]
		[Address(RVA = "0x4CAF270", Offset = "0x4CAF270", VA = "0x4CAF270")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000CC")]
	public bool isRoot
	{
		[Token(Token = "0x600035F")]
		[Address(RVA = "0x4CAF3C0", Offset = "0x4CAF3C0", VA = "0x4CAF3C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CD")]
	public bool isChild
	{
		[Token(Token = "0x6000360")]
		[Address(RVA = "0x4CAF400", Offset = "0x4CAF400", VA = "0x4CAF400")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CE")]
	public IGraphParent parent
	{
		[Token(Token = "0x6000365")]
		[Address(RVA = "0x4CAB2D0", Offset = "0x4CAB2D0", VA = "0x4CAB2D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CF")]
	public IGraphParentElement parentElement
	{
		[Token(Token = "0x6000367")]
		[Address(RVA = "0x4CAF6E0", Offset = "0x4CAF6E0", VA = "0x4CAF6E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D0")]
	public IGraph rootGraph
	{
		[Token(Token = "0x6000368")]
		[Address(RVA = "0x4CAF740", Offset = "0x4CAF740", VA = "0x4CAF740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D1")]
	public IGraph graph
	{
		[Token(Token = "0x6000369")]
		[Address(RVA = "0x4CAB280", Offset = "0x4CAB280", VA = "0x4CAB280")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D2")]
	protected IGraphData _data
	{
		[Token(Token = "0x600036A")]
		[Address(RVA = "0x4CAF780", Offset = "0x4CAF780", VA = "0x4CAF780")]
		get
		{
			return null;
		}
		[Token(Token = "0x600036B")]
		[Address(RVA = "0x4CAF7D0", Offset = "0x4CAF7D0", VA = "0x4CAF7D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D3")]
	public IGraphData data
	{
		[Token(Token = "0x600036C")]
		[Address(RVA = "0x4CAF830", Offset = "0x4CAF830", VA = "0x4CAF830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D4")]
	protected IGraphData _parentData
	{
		[Token(Token = "0x600036D")]
		[Address(RVA = "0x4CAF940", Offset = "0x4CAF940", VA = "0x4CAF940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D5")]
	public bool hasData
	{
		[Token(Token = "0x600036E")]
		[Address(RVA = "0x4CAF990", Offset = "0x4CAF990", VA = "0x4CAF990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D6")]
	public static Func<IGraphRoot, IGraphDebugData> fetchRootDebugDataBinding
	{
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x4CAF9F0", Offset = "0x4CAF9F0", VA = "0x4CAF9F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x4CAFA30", Offset = "0x4CAFA30", VA = "0x4CAFA30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000D7")]
	public bool hasDebugData
	{
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x4CAFA80", Offset = "0x4CAFA80", VA = "0x4CAFA80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D8")]
	protected IGraphDebugData _debugData
	{
		[Token(Token = "0x6000376")]
		[Address(RVA = "0x4CAFAE0", Offset = "0x4CAFAE0", VA = "0x4CAFAE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000377")]
		[Address(RVA = "0x4CAFBE0", Offset = "0x4CAFBE0", VA = "0x4CAFBE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D9")]
	public IGraphDebugData debugData
	{
		[Token(Token = "0x6000378")]
		[Address(RVA = "0x4CAFC40", Offset = "0x4CAFC40", VA = "0x4CAFC40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DA")]
	public bool isValid
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x4CB0460", Offset = "0x4CB0460", VA = "0x4CB0460")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x4CAC6F0", Offset = "0x4CAC6F0", VA = "0x4CAC6F0")]
	protected static bool IsValidRoot(IGraphRoot root)
	{
		return default(bool);
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x4CAC810", Offset = "0x4CAC810", VA = "0x4CAC810")]
	protected static bool IsValidRoot(UnityEngine.Object rootObject)
	{
		return default(bool);
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x4CAC910", Offset = "0x4CAC910", VA = "0x4CAC910")]
	internal GraphPointer()
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x4CACAC0", Offset = "0x4CACAC0", VA = "0x4CACAC0")]
	protected void Initialize(IGraphRoot root)
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x4CAD3C0", Offset = "0x4CAD3C0", VA = "0x4CAD3C0")]
	protected void Initialize(IGraphRoot root, IEnumerable<IGraphParentElement> parentElements, bool ensureValid)
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x4CADD70", Offset = "0x4CADD70", VA = "0x4CADD70")]
	protected void Initialize(UnityEngine.Object rootObject, IEnumerable<Guid> parentElementGuids, bool ensureValid)
	{
	}

	[Token(Token = "0x600034F")]
	public abstract GraphReference AsReference();

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x4CAE430", Offset = "0x4CAE430", VA = "0x4CAE430", Slot = "5")]
	public virtual void CopyFrom(GraphPointer other)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x4CAF440", Offset = "0x4CAF440", VA = "0x4CAF440")]
	public void EnsureDepthValid(int depth)
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x4CAF650", Offset = "0x4CAF650", VA = "0x4CAF650")]
	public void EnsureChild()
	{
	}

	[Token(Token = "0x6000363")]
	public bool IsWithin<T>() where T : IGraphParent
	{
		return default(bool);
	}

	[Token(Token = "0x6000364")]
	public void EnsureWithin<T>() where T : IGraphParent
	{
	}

	[Token(Token = "0x6000366")]
	public T GetParent<T>() where T : IGraphParent
	{
		return (T)null;
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x4CAF890", Offset = "0x4CAF890", VA = "0x4CAF890")]
	public void EnsureDataAvailable()
	{
	}

	[Token(Token = "0x6000370")]
	public T GetGraphData<T>() where T : IGraphData
	{
		return (T)null;
	}

	[Token(Token = "0x6000371")]
	public T GetElementData<T>(IGraphElementWithData element) where T : IGraphElementData
	{
		return (T)null;
	}

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x4CAFB30", Offset = "0x4CAFB30", VA = "0x4CAFB30")]
	public void EnsureDebugDataAvailable()
	{
	}

	[Token(Token = "0x6000379")]
	public T GetGraphDebugData<T>() where T : IGraphDebugData
	{
		return (T)null;
	}

	[Token(Token = "0x600037A")]
	public T GetElementDebugData<T>(IGraphElementWithDebugData element)
	{
		return (T)null;
	}

	[Token(Token = "0x600037B")]
	[Address(RVA = "0x4CAE220", Offset = "0x4CAE220", VA = "0x4CAE220")]
	protected bool TryEnterParentElement(Guid parentElementGuid, out string error, [Optional] int? maxRecursionDepth)
	{
		return default(bool);
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x4CAD850", Offset = "0x4CAD850", VA = "0x4CAD850")]
	protected bool TryEnterParentElement(IGraphParentElement parentElement, out string error, [Optional] int? maxRecursionDepth, bool skipContainsCheck = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600037D")]
	[Address(RVA = "0x4CB0180", Offset = "0x4CB0180", VA = "0x4CB0180")]
	protected void EnterParentElement(IGraphParentElement parentElement)
	{
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x4CB0200", Offset = "0x4CB0200", VA = "0x4CB0200")]
	protected void EnterParentElement(Guid parentElementGuid)
	{
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x4CAFCA0", Offset = "0x4CAFCA0", VA = "0x4CAFCA0")]
	private void EnterValidParentElement(IGraphParentElement parentElement)
	{
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x4CB0280", Offset = "0x4CB0280", VA = "0x4CB0280")]
	protected void ExitParentElement()
	{
	}

	[Token(Token = "0x6000382")]
	[Address(RVA = "0x4CB0A50", Offset = "0x4CB0A50", VA = "0x4CB0A50")]
	public void EnsureValid()
	{
	}

	[Token(Token = "0x6000383")]
	[Address(RVA = "0x4CB0AB0", Offset = "0x4CB0AB0", VA = "0x4CB0AB0")]
	public bool InstanceEquals(GraphPointer other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000384")]
	[Address(RVA = "0x4CB0C40", Offset = "0x4CB0C40", VA = "0x4CB0C40")]
	public bool DefinitionEquals(GraphPointer other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000385")]
	[Address(RVA = "0x4CB0DC0", Offset = "0x4CB0DC0", VA = "0x4CB0DC0")]
	public int ComputeHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000386")]
	[Address(RVA = "0x4CB1070", Offset = "0x4CB1070", VA = "0x4CB1070", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
