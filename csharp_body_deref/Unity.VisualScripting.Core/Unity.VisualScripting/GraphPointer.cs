// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GraphPointer
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000359")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170000C4")]
	public UnityEngine.Object rootObject
	{
		[Token(Token = "0x600035A")]
		[Address(RVA = "0x2DAD4F0", Offset = "0x2DABAF0", VA = "0x182DAD4F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C5")]
	public IMachine machine
	{
		[Token(Token = "0x600035B")]
		[Address(RVA = "0x2DAD1C0", Offset = "0x2DAB7C0", VA = "0x182DAD1C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C6")]
	public IMacro macro
	{
		[Token(Token = "0x600035C")]
		[Address(RVA = "0x2DAD200", Offset = "0x2DAB800", VA = "0x182DAD200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C7")]
	public MonoBehaviour component
	{
		[Token(Token = "0x600035D")]
		[Address(RVA = "0x2DAC8C0", Offset = "0x2DAAEC0", VA = "0x182DAC8C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C8")]
	public GameObject gameObject
	{
		[Token(Token = "0x600035E")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600035F")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000C9")]
	public GameObject self
	{
		[Token(Token = "0x6000360")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CA")]
	public ScriptableObject scriptableObject
	{
		[Token(Token = "0x6000361")]
		[Address(RVA = "0x2DAD640", Offset = "0x2DABC40", VA = "0x182DAD640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CB")]
	public Scene? scene
	{
		[Token(Token = "0x6000362")]
		[Address(RVA = "0x2DAD570", Offset = "0x2DABB70", VA = "0x182DAD570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CC")]
	public UnityEngine.Object serializedObject
	{
		[Token(Token = "0x6000363")]
		[Address(RVA = "0x2DAD6C0", Offset = "0x2DABCC0", VA = "0x182DAD6C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CD")]
	public IEnumerable<Guid> parentElementGuids
	{
		[Token(Token = "0x6000364")]
		[Address(RVA = "0x2DAD240", Offset = "0x2DAB840", VA = "0x182DAD240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CE")]
	public int depth
	{
		[Token(Token = "0x6000365")]
		[Address(RVA = "0x2DACB40", Offset = "0x2DAB140", VA = "0x182DACB40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000CF")]
	public bool isRoot
	{
		[Token(Token = "0x6000366")]
		[Address(RVA = "0x2DACD50", Offset = "0x2DAB350", VA = "0x182DACD50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D0")]
	public bool isChild
	{
		[Token(Token = "0x6000367")]
		[Address(RVA = "0x2DACD00", Offset = "0x2DAB300", VA = "0x182DACD00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D1")]
	public IGraphParent parent
	{
		[Token(Token = "0x600036C")]
		[Address(RVA = "0x2DAD440", Offset = "0x2DABA40", VA = "0x182DAD440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D2")]
	public IGraphParentElement parentElement
	{
		[Token(Token = "0x600036E")]
		[Address(RVA = "0x2DAD360", Offset = "0x2DAB960", VA = "0x182DAD360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D3")]
	public IGraph rootGraph
	{
		[Token(Token = "0x600036F")]
		[Address(RVA = "0x2DAD4A0", Offset = "0x2DABAA0", VA = "0x182DAD4A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D4")]
	public IGraph graph
	{
		[Token(Token = "0x6000370")]
		[Address(RVA = "0x2DACBC0", Offset = "0x2DAB1C0", VA = "0x182DACBC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D5")]
	protected IGraphData _data
	{
		[Token(Token = "0x6000371")]
		[Address(RVA = "0x2DAC7A0", Offset = "0x2DAADA0", VA = "0x182DAC7A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000372")]
		[Address(RVA = "0x2DAD7E0", Offset = "0x2DABDE0", VA = "0x182DAD7E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D6")]
	public IGraphData data
	{
		[Token(Token = "0x6000373")]
		[Address(RVA = "0x2DAC940", Offset = "0x2DAAF40", VA = "0x182DAC940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D7")]
	protected IGraphData _parentData
	{
		[Token(Token = "0x6000374")]
		[Address(RVA = "0x2DAC860", Offset = "0x2DAAE60", VA = "0x182DAC860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D8")]
	public bool hasData
	{
		[Token(Token = "0x6000375")]
		[Address(RVA = "0x2DACC20", Offset = "0x2DAB220", VA = "0x182DACC20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D9")]
	public static Func<IGraphRoot, IGraphDebugData> fetchRootDebugDataBinding
	{
		[Token(Token = "0x6000379")]
		[Address(RVA = "0x2DACB80", Offset = "0x2DAB180", VA = "0x182DACB80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600037A")]
		[Address(RVA = "0x2DAD8C0", Offset = "0x2DABEC0", VA = "0x182DAD8C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000DA")]
	public bool hasDebugData
	{
		[Token(Token = "0x600037B")]
		[Address(RVA = "0x2DACC90", Offset = "0x2DAB290", VA = "0x182DACC90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DB")]
	protected IGraphDebugData _debugData
	{
		[Token(Token = "0x600037D")]
		[Address(RVA = "0x2DAC800", Offset = "0x2DAAE00", VA = "0x182DAC800")]
		get
		{
			return null;
		}
		[Token(Token = "0x600037E")]
		[Address(RVA = "0x2DAD850", Offset = "0x2DABE50", VA = "0x182DAD850")]
		set
		{
		}
	}

	[Token(Token = "0x170000DC")]
	public IGraphDebugData debugData
	{
		[Token(Token = "0x600037F")]
		[Address(RVA = "0x2DACA40", Offset = "0x2DAB040", VA = "0x182DACA40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DD")]
	public bool isValid
	{
		[Token(Token = "0x6000388")]
		[Address(RVA = "0x2DACDA0", Offset = "0x2DAB3A0", VA = "0x182DACDA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x2DABDB0", Offset = "0x2DAA3B0", VA = "0x182DABDB0")]
	protected static bool IsValidRoot(IGraphRoot root)
	{
		return default(bool);
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x2DABD00", Offset = "0x2DAA300", VA = "0x182DABD00")]
	protected static bool IsValidRoot(UnityEngine.Object rootObject)
	{
		return default(bool);
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x2DAC610", Offset = "0x2DAAC10", VA = "0x182DAC610")]
	internal GraphPointer()
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x2DAB360", Offset = "0x2DA9960", VA = "0x182DAB360")]
	protected void Initialize(IGraphRoot root)
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x2DAB860", Offset = "0x2DA9E60", VA = "0x182DAB860")]
	protected void Initialize(IGraphRoot root, IEnumerable<IGraphParentElement> parentElements, bool ensureValid)
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x2DAB090", Offset = "0x2DA9690", VA = "0x182DAB090")]
	protected void Initialize(UnityEngine.Object rootObject, IEnumerable<Guid> parentElementGuids, bool ensureValid)
	{
	}

	[Token(Token = "0x6000356")]
	public abstract GraphReference AsReference();

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x2DA9B20", Offset = "0x2DA8120", VA = "0x182DA9B20", Slot = "5")]
	public virtual void CopyFrom(GraphPointer other)
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x2DAA7A0", Offset = "0x2DA8DA0", VA = "0x182DAA7A0")]
	public void EnsureDepthValid(int depth)
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x2DAA580", Offset = "0x2DA8B80", VA = "0x182DAA580")]
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
	[Address(RVA = "0x2DAA620", Offset = "0x2DA8C20", VA = "0x182DAA620")]
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
	[Address(RVA = "0x2DAA6E0", Offset = "0x2DA8CE0", VA = "0x182DAA6E0")]
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
	[Address(RVA = "0x2DAC420", Offset = "0x2DAAA20", VA = "0x182DAC420")]
	protected bool TryEnterParentElement(Guid parentElementGuid, out string error, [Optional] int? maxRecursionDepth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000383")]
	[Address(RVA = "0x2DAC000", Offset = "0x2DAA600", VA = "0x182DAC000")]
	protected bool TryEnterParentElement(IGraphParentElement parentElement, out string error, [Optional] int? maxRecursionDepth, bool skipContainsCheck = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000384")]
	[Address(RVA = "0x2DAA980", Offset = "0x2DA8F80", VA = "0x182DAA980")]
	protected void EnterParentElement(IGraphParentElement parentElement)
	{
	}

	[Token(Token = "0x6000385")]
	[Address(RVA = "0x2DAAA10", Offset = "0x2DA9010", VA = "0x182DAAA10")]
	protected void EnterParentElement(Guid parentElementGuid)
	{
	}

	[Token(Token = "0x6000386")]
	[Address(RVA = "0x2DAAAB0", Offset = "0x2DA90B0", VA = "0x182DAAAB0")]
	private void EnterValidParentElement(IGraphParentElement parentElement)
	{
	}

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x2DAAEE0", Offset = "0x2DA94E0", VA = "0x182DAAEE0")]
	protected void ExitParentElement()
	{
	}

	[Token(Token = "0x6000389")]
	[Address(RVA = "0x2DAA910", Offset = "0x2DA8F10", VA = "0x182DAA910")]
	public void EnsureValid()
	{
	}

	[Token(Token = "0x600038A")]
	[Address(RVA = "0x2DABA90", Offset = "0x2DAA090", VA = "0x182DABA90")]
	public bool InstanceEquals(GraphPointer other)
	{
		return default(bool);
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x2DAA3F0", Offset = "0x2DA89F0", VA = "0x182DAA3F0")]
	public bool DefinitionEquals(GraphPointer other)
	{
		return default(bool);
	}

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x2DA9900", Offset = "0x2DA7F00", VA = "0x182DA9900")]
	public int ComputeHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x2DABE70", Offset = "0x2DAA470", VA = "0x182DABE70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
