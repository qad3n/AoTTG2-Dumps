// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.SortedSet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000230")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.ICollectionDebugView<>))]
public class SortedSet<T> : ISet<T>, ICollection<T>, IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T>, ISerializable, IDeserializationCallback
{
	[Serializable]
	[Token(Token = "0x2000231")]
	internal sealed class Node
	{
		[Token(Token = "0x17000364")]
		public T Item
		{
			[Token(Token = "0x6000FA2")]
			[CompilerGenerated]
			get
			{
				return (T)null;
			}
			[Token(Token = "0x6000FA3")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000365")]
		public Node Left
		{
			[Token(Token = "0x6000FA4")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000FA5")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000366")]
		public Node Right
		{
			[Token(Token = "0x6000FA6")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000FA7")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000367")]
		public NodeColor Color
		{
			[Token(Token = "0x6000FA8")]
			[CompilerGenerated]
			get
			{
				return default(NodeColor);
			}
			[Token(Token = "0x6000FA9")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000368")]
		public bool IsBlack
		{
			[Token(Token = "0x6000FAA")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000369")]
		public bool IsRed
		{
			[Token(Token = "0x6000FAB")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700036A")]
		public bool Is2Node
		{
			[Token(Token = "0x6000FAC")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700036B")]
		public bool Is4Node
		{
			[Token(Token = "0x6000FAD")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000F9F")]
		public Node(T item, NodeColor color)
		{
		}

		[Token(Token = "0x6000FA0")]
		public static bool IsNonNullRed(Node node)
		{
			return default(bool);
		}

		[Token(Token = "0x6000FA1")]
		public static bool IsNullOrBlack(Node node)
		{
			return default(bool);
		}

		[Token(Token = "0x6000FAE")]
		public void ColorBlack()
		{
		}

		[Token(Token = "0x6000FAF")]
		public void ColorRed()
		{
		}

		[Token(Token = "0x6000FB0")]
		public TreeRotation GetRotation(Node current, Node sibling)
		{
			return default(TreeRotation);
		}

		[Token(Token = "0x6000FB1")]
		public Node GetSibling(Node node)
		{
			return null;
		}

		[Token(Token = "0x6000FB2")]
		public void Split4Node()
		{
		}

		[Token(Token = "0x6000FB3")]
		public Node Rotate(TreeRotation rotation)
		{
			return null;
		}

		[Token(Token = "0x6000FB4")]
		public Node RotateLeft()
		{
			return null;
		}

		[Token(Token = "0x6000FB5")]
		public Node RotateLeftRight()
		{
			return null;
		}

		[Token(Token = "0x6000FB6")]
		public Node RotateRight()
		{
			return null;
		}

		[Token(Token = "0x6000FB7")]
		public Node RotateRightLeft()
		{
			return null;
		}

		[Token(Token = "0x6000FB8")]
		public void Merge2Nodes()
		{
		}

		[Token(Token = "0x6000FB9")]
		public void ReplaceChild(Node child, Node newChild)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000232")]
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator, ISerializable, IDeserializationCallback
	{
		[Token(Token = "0x40007DB")]
		[FieldOffset(Offset = "0x0")]
		private static readonly Node s_dummyNode;

		[Token(Token = "0x40007DC")]
		[FieldOffset(Offset = "0x0")]
		private SortedSet<T> _tree;

		[Token(Token = "0x40007DD")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x40007DE")]
		[FieldOffset(Offset = "0x0")]
		private Stack<Node> _stack;

		[Token(Token = "0x40007DF")]
		[FieldOffset(Offset = "0x0")]
		private Node _current;

		[Token(Token = "0x40007E0")]
		[FieldOffset(Offset = "0x0")]
		private bool _reverse;

		[Token(Token = "0x1700036C")]
		public T Current
		{
			[Token(Token = "0x6000FC1")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x1700036D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000FC2")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700036E")]
		internal bool NotStartedOrEnded
		{
			[Token(Token = "0x6000FC3")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000FBA")]
		internal Enumerator(SortedSet<T> set)
		{
		}

		[Token(Token = "0x6000FBB")]
		internal Enumerator(SortedSet<T> set, bool reverse)
		{
		}

		[Token(Token = "0x6000FBC")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6000FBD")]
		private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
		{
		}

		[Token(Token = "0x6000FBE")]
		private void Initialize()
		{
		}

		[Token(Token = "0x6000FBF")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000FC0")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000FC4")]
		internal void Reset()
		{
		}

		[Token(Token = "0x6000FC5")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40007C3")]
	[FieldOffset(Offset = "0x0")]
	private Node root;

	[Token(Token = "0x40007C4")]
	[FieldOffset(Offset = "0x0")]
	private IComparer<T> comparer;

	[Token(Token = "0x40007C5")]
	[FieldOffset(Offset = "0x0")]
	private int count;

	[Token(Token = "0x40007C6")]
	[FieldOffset(Offset = "0x0")]
	private int version;

	[NonSerialized]
	[Token(Token = "0x40007C7")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x40007C8")]
	[FieldOffset(Offset = "0x0")]
	private SerializationInfo siInfo;

	[Token(Token = "0x40007C9")]
	private const string ComparerName = "Comparer";

	[Token(Token = "0x40007CA")]
	private const string CountName = "Count";

	[Token(Token = "0x40007CB")]
	private const string ItemsName = "Items";

	[Token(Token = "0x40007CC")]
	private const string VersionName = "Version";

	[Token(Token = "0x40007CD")]
	private const string TreeName = "Tree";

	[Token(Token = "0x40007CE")]
	private const string NodeValueName = "Item";

	[Token(Token = "0x40007CF")]
	private const string EnumStartName = "EnumStarted";

	[Token(Token = "0x40007D0")]
	private const string ReverseName = "Reverse";

	[Token(Token = "0x40007D1")]
	private const string EnumVersionName = "EnumVersion";

	[Token(Token = "0x40007D2")]
	private const string MinName = "Min";

	[Token(Token = "0x40007D3")]
	private const string MaxName = "Max";

	[Token(Token = "0x40007D4")]
	private const string LowerBoundActiveName = "lBoundActive";

	[Token(Token = "0x40007D5")]
	private const string UpperBoundActiveName = "uBoundActive";

	[Token(Token = "0x40007D6")]
	internal const int StackAllocThreshold = 100;

	[Token(Token = "0x17000360")]
	public int Count
	{
		[Token(Token = "0x6000F82")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000361")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000F83")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000362")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000F84")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000363")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000F85")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F7E")]
	public SortedSet()
	{
	}

	[Token(Token = "0x6000F7F")]
	public SortedSet(IComparer<T> comparer)
	{
	}

	[Token(Token = "0x6000F80")]
	protected SortedSet(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F81")]
	internal virtual bool InOrderTreeWalk(TreeWalkPredicate<T> action)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F86")]
	internal virtual void VersionCheck()
	{
	}

	[Token(Token = "0x6000F87")]
	internal virtual bool IsWithinRange(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F88")]
	public bool Add(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F89")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EAdd(T item)
	{
	}

	[Token(Token = "0x6000F8A")]
	internal virtual bool AddIfNotPresent(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F8B")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F8C")]
	internal virtual bool DoRemove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F8D")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x6000F8E")]
	public virtual bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F8F")]
	public void CopyTo(T[] array, int index)
	{
	}

	[Token(Token = "0x6000F90")]
	public void CopyTo(T[] array, int index, int count)
	{
	}

	[Token(Token = "0x6000F91")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000F92")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000F93")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000F94")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000F95")]
	private void InsertionBalance(Node current, ref Node parent, Node grandParent, Node greatGrandParent)
	{
	}

	[Token(Token = "0x6000F96")]
	private void ReplaceChildOrRoot(Node parent, Node child, Node newChild)
	{
	}

	[Token(Token = "0x6000F97")]
	private void ReplaceNode(Node match, Node parentOfMatch, Node successor, Node parentOfSuccessor)
	{
	}

	[Token(Token = "0x6000F98")]
	internal virtual Node FindNode(T item)
	{
		return null;
	}

	[Token(Token = "0x6000F99")]
	internal void UpdateVersion()
	{
	}

	[Token(Token = "0x6000F9A")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F9B")]
	protected virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F9C")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6000F9D")]
	protected virtual void OnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6000F9E")]
	private static int Log2(int value)
	{
		return default(int);
	}
}
