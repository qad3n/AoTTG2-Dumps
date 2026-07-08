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
		[Address(RVA = "0x498A280", Offset = "0x498A280", VA = "0x498A280")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000352")]
		[Address(RVA = "0x498A290", Offset = "0x498A290", VA = "0x498A290")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170000C1")]
	public UnityEngine.Object rootObject
	{
		[Token(Token = "0x6000353")]
		[Address(RVA = "0x498A2A0", Offset = "0x498A2A0", VA = "0x498A2A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C2")]
	public IMachine machine
	{
		[Token(Token = "0x6000354")]
		[Address(RVA = "0x4988690", Offset = "0x4988690", VA = "0x4988690")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C3")]
	public IMacro macro
	{
		[Token(Token = "0x6000355")]
		[Address(RVA = "0x498A300", Offset = "0x498A300", VA = "0x498A300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C4")]
	public MonoBehaviour component
	{
		[Token(Token = "0x6000356")]
		[Address(RVA = "0x49886D0", Offset = "0x49886D0", VA = "0x49886D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C5")]
	public GameObject gameObject
	{
		[Token(Token = "0x6000357")]
		[Address(RVA = "0x498A340", Offset = "0x498A340", VA = "0x498A340")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000358")]
		[Address(RVA = "0x498A350", Offset = "0x498A350", VA = "0x498A350")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000C6")]
	public GameObject self
	{
		[Token(Token = "0x6000359")]
		[Address(RVA = "0x498A360", Offset = "0x498A360", VA = "0x498A360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C7")]
	public ScriptableObject scriptableObject
	{
		[Token(Token = "0x600035A")]
		[Address(RVA = "0x498A370", Offset = "0x498A370", VA = "0x498A370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C8")]
	public Scene? scene
	{
		[Token(Token = "0x600035B")]
		[Address(RVA = "0x498A3D0", Offset = "0x498A3D0", VA = "0x498A3D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C9")]
	public UnityEngine.Object serializedObject
	{
		[Token(Token = "0x600035C")]
		[Address(RVA = "0x498A4A0", Offset = "0x498A4A0", VA = "0x498A4A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CA")]
	public IEnumerable<Guid> parentElementGuids
	{
		[Token(Token = "0x600035D")]
		[Address(RVA = "0x498A6E0", Offset = "0x498A6E0", VA = "0x498A6E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CB")]
	public int depth
	{
		[Token(Token = "0x600035E")]
		[Address(RVA = "0x498A6A0", Offset = "0x498A6A0", VA = "0x498A6A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000CC")]
	public bool isRoot
	{
		[Token(Token = "0x600035F")]
		[Address(RVA = "0x498A7F0", Offset = "0x498A7F0", VA = "0x498A7F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CD")]
	public bool isChild
	{
		[Token(Token = "0x6000360")]
		[Address(RVA = "0x498A830", Offset = "0x498A830", VA = "0x498A830")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CE")]
	public IGraphParent parent
	{
		[Token(Token = "0x6000365")]
		[Address(RVA = "0x4986700", Offset = "0x4986700", VA = "0x4986700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CF")]
	public IGraphParentElement parentElement
	{
		[Token(Token = "0x6000367")]
		[Address(RVA = "0x498AB10", Offset = "0x498AB10", VA = "0x498AB10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D0")]
	public IGraph rootGraph
	{
		[Token(Token = "0x6000368")]
		[Address(RVA = "0x498AB70", Offset = "0x498AB70", VA = "0x498AB70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D1")]
	public IGraph graph
	{
		[Token(Token = "0x6000369")]
		[Address(RVA = "0x49866B0", Offset = "0x49866B0", VA = "0x49866B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D2")]
	protected IGraphData _data
	{
		[Token(Token = "0x600036A")]
		[Address(RVA = "0x498ABB0", Offset = "0x498ABB0", VA = "0x498ABB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600036B")]
		[Address(RVA = "0x498AC00", Offset = "0x498AC00", VA = "0x498AC00")]
		set
		{
		}
	}

	[Token(Token = "0x170000D3")]
	public IGraphData data
	{
		[Token(Token = "0x600036C")]
		[Address(RVA = "0x498AC60", Offset = "0x498AC60", VA = "0x498AC60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D4")]
	protected IGraphData _parentData
	{
		[Token(Token = "0x600036D")]
		[Address(RVA = "0x498AD70", Offset = "0x498AD70", VA = "0x498AD70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D5")]
	public bool hasData
	{
		[Token(Token = "0x600036E")]
		[Address(RVA = "0x498ADC0", Offset = "0x498ADC0", VA = "0x498ADC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D6")]
	public static Func<IGraphRoot, IGraphDebugData> fetchRootDebugDataBinding
	{
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x498AE20", Offset = "0x498AE20", VA = "0x498AE20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x498AE60", Offset = "0x498AE60", VA = "0x498AE60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000D7")]
	public bool hasDebugData
	{
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x498AEB0", Offset = "0x498AEB0", VA = "0x498AEB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D8")]
	protected IGraphDebugData _debugData
	{
		[Token(Token = "0x6000376")]
		[Address(RVA = "0x498AF10", Offset = "0x498AF10", VA = "0x498AF10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000377")]
		[Address(RVA = "0x498B010", Offset = "0x498B010", VA = "0x498B010")]
		set
		{
		}
	}

	[Token(Token = "0x170000D9")]
	public IGraphDebugData debugData
	{
		[Token(Token = "0x6000378")]
		[Address(RVA = "0x498B070", Offset = "0x498B070", VA = "0x498B070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DA")]
	public bool isValid
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x498B890", Offset = "0x498B890", VA = "0x498B890")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x4987B20", Offset = "0x4987B20", VA = "0x4987B20")]
	protected static bool IsValidRoot(IGraphRoot root)
	{
		return default(bool);
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x4987C40", Offset = "0x4987C40", VA = "0x4987C40")]
	protected static bool IsValidRoot(UnityEngine.Object rootObject)
	{
		return default(bool);
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x4987D40", Offset = "0x4987D40", VA = "0x4987D40")]
	internal GraphPointer()
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x4987EF0", Offset = "0x4987EF0", VA = "0x4987EF0")]
	protected void Initialize(IGraphRoot root)
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x49887F0", Offset = "0x49887F0", VA = "0x49887F0")]
	protected void Initialize(IGraphRoot root, IEnumerable<IGraphParentElement> parentElements, bool ensureValid)
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x49891A0", Offset = "0x49891A0", VA = "0x49891A0")]
	protected void Initialize(UnityEngine.Object rootObject, IEnumerable<Guid> parentElementGuids, bool ensureValid)
	{
	}

	[Token(Token = "0x600034F")]
	public abstract GraphReference AsReference();

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x4989860", Offset = "0x4989860", VA = "0x4989860", Slot = "5")]
	public virtual void CopyFrom(GraphPointer other)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x498A870", Offset = "0x498A870", VA = "0x498A870")]
	public void EnsureDepthValid(int depth)
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x498AA80", Offset = "0x498AA80", VA = "0x498AA80")]
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
	[Address(RVA = "0x498ACC0", Offset = "0x498ACC0", VA = "0x498ACC0")]
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
	[Address(RVA = "0x498AF60", Offset = "0x498AF60", VA = "0x498AF60")]
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
	[Address(RVA = "0x4989650", Offset = "0x4989650", VA = "0x4989650")]
	protected bool TryEnterParentElement(Guid parentElementGuid, out string error, [Optional] int? maxRecursionDepth)
	{
		return default(bool);
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x4988C80", Offset = "0x4988C80", VA = "0x4988C80")]
	protected bool TryEnterParentElement(IGraphParentElement parentElement, out string error, [Optional] int? maxRecursionDepth, bool skipContainsCheck = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600037D")]
	[Address(RVA = "0x498B5B0", Offset = "0x498B5B0", VA = "0x498B5B0")]
	protected void EnterParentElement(IGraphParentElement parentElement)
	{
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x498B630", Offset = "0x498B630", VA = "0x498B630")]
	protected void EnterParentElement(Guid parentElementGuid)
	{
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x498B0D0", Offset = "0x498B0D0", VA = "0x498B0D0")]
	private void EnterValidParentElement(IGraphParentElement parentElement)
	{
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x498B6B0", Offset = "0x498B6B0", VA = "0x498B6B0")]
	protected void ExitParentElement()
	{
	}

	[Token(Token = "0x6000382")]
	[Address(RVA = "0x498BE80", Offset = "0x498BE80", VA = "0x498BE80")]
	public void EnsureValid()
	{
	}

	[Token(Token = "0x6000383")]
	[Address(RVA = "0x498BEE0", Offset = "0x498BEE0", VA = "0x498BEE0")]
	public bool InstanceEquals(GraphPointer other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000384")]
	[Address(RVA = "0x498C070", Offset = "0x498C070", VA = "0x498C070")]
	public bool DefinitionEquals(GraphPointer other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000385")]
	[Address(RVA = "0x498C1F0", Offset = "0x498C1F0", VA = "0x498C1F0")]
	public int ComputeHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000386")]
	[Address(RVA = "0x498C4A0", Offset = "0x498C4A0", VA = "0x498C4A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
