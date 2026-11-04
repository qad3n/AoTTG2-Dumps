// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.SortedSet
// Update status: NEW in this game update
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
[Token(Token = "0x200026F")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.ICollectionDebugView<>))]
public class SortedSet<T> : ISet<T>, ICollection<T>, IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T>, ISerializable, IDeserializationCallback
{
	[Serializable]
	[Token(Token = "0x2000270")]
	internal sealed class Node
	{
		[Token(Token = "0x17000393")]
		public T Item
		{
			[Token(Token = "0x6001162")]
			[CompilerGenerated]
			get
			{
				return (T)null;
			}
			[Token(Token = "0x6001163")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000394")]
		public Node Left
		{
			[Token(Token = "0x6001164")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6001165")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000395")]
		public Node Right
		{
			[Token(Token = "0x6001166")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6001167")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000396")]
		public NodeColor Color
		{
			[Token(Token = "0x6001168")]
			[CompilerGenerated]
			get
			{
				return default(NodeColor);
			}
			[Token(Token = "0x6001169")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000397")]
		public bool IsBlack
		{
			[Token(Token = "0x600116A")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000398")]
		public bool IsRed
		{
			[Token(Token = "0x600116B")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000399")]
		public bool Is2Node
		{
			[Token(Token = "0x600116C")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700039A")]
		public bool Is4Node
		{
			[Token(Token = "0x600116D")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600115F")]
		public Node(T item, NodeColor color)
		{
		}

		[Token(Token = "0x6001160")]
		public static bool IsNonNullRed(Node node)
		{
			return default(bool);
		}

		[Token(Token = "0x6001161")]
		public static bool IsNullOrBlack(Node node)
		{
			return default(bool);
		}

		[Token(Token = "0x600116E")]
		public void ColorBlack()
		{
		}

		[Token(Token = "0x600116F")]
		public void ColorRed()
		{
		}

		[Token(Token = "0x6001170")]
		public TreeRotation GetRotation(Node current, Node sibling)
		{
			return default(TreeRotation);
		}

		[Token(Token = "0x6001171")]
		public Node GetSibling(Node node)
		{
			return null;
		}

		[Token(Token = "0x6001172")]
		public void Split4Node()
		{
		}

		[Token(Token = "0x6001173")]
		public Node Rotate(TreeRotation rotation)
		{
			return null;
		}

		[Token(Token = "0x6001174")]
		public Node RotateLeft()
		{
			return null;
		}

		[Token(Token = "0x6001175")]
		public Node RotateLeftRight()
		{
			return null;
		}

		[Token(Token = "0x6001176")]
		public Node RotateRight()
		{
			return null;
		}

		[Token(Token = "0x6001177")]
		public Node RotateRightLeft()
		{
			return null;
		}

		[Token(Token = "0x6001178")]
		public void Merge2Nodes()
		{
		}

		[Token(Token = "0x6001179")]
		public void ReplaceChild(Node child, Node newChild)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000271")]
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator, ISerializable, IDeserializationCallback
	{
		[Token(Token = "0x40008AA")]
		[FieldOffset(Offset = "0x0")]
		private static readonly Node s_dummyNode;

		[Token(Token = "0x40008AB")]
		[FieldOffset(Offset = "0x0")]
		private SortedSet<T> _tree;

		[Token(Token = "0x40008AC")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x40008AD")]
		[FieldOffset(Offset = "0x0")]
		private Stack<Node> _stack;

		[Token(Token = "0x40008AE")]
		[FieldOffset(Offset = "0x0")]
		private Node _current;

		[Token(Token = "0x40008AF")]
		[FieldOffset(Offset = "0x0")]
		private bool _reverse;

		[Token(Token = "0x1700039B")]
		public T Current
		{
			[Token(Token = "0x6001181")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x1700039C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001182")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700039D")]
		internal bool NotStartedOrEnded
		{
			[Token(Token = "0x6001183")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600117A")]
		internal Enumerator(SortedSet<T> set)
		{
		}

		[Token(Token = "0x600117B")]
		internal Enumerator(SortedSet<T> set, bool reverse)
		{
		}

		[Token(Token = "0x600117C")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x600117D")]
		private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
		{
		}

		[Token(Token = "0x600117E")]
		private void Initialize()
		{
		}

		[Token(Token = "0x600117F")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001180")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6001184")]
		internal void Reset()
		{
		}

		[Token(Token = "0x6001185")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000892")]
	[FieldOffset(Offset = "0x0")]
	private Node root;

	[Token(Token = "0x4000893")]
	[FieldOffset(Offset = "0x0")]
	private IComparer<T> comparer;

	[Token(Token = "0x4000894")]
	[FieldOffset(Offset = "0x0")]
	private int count;

	[Token(Token = "0x4000895")]
	[FieldOffset(Offset = "0x0")]
	private int version;

	[NonSerialized]
	[Token(Token = "0x4000896")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x4000897")]
	[FieldOffset(Offset = "0x0")]
	private SerializationInfo siInfo;

	[Token(Token = "0x4000898")]
	private const string ComparerName = "Comparer";

	[Token(Token = "0x4000899")]
	private const string CountName = "Count";

	[Token(Token = "0x400089A")]
	private const string ItemsName = "Items";

	[Token(Token = "0x400089B")]
	private const string VersionName = "Version";

	[Token(Token = "0x400089C")]
	private const string TreeName = "Tree";

	[Token(Token = "0x400089D")]
	private const string NodeValueName = "Item";

	[Token(Token = "0x400089E")]
	private const string EnumStartName = "EnumStarted";

	[Token(Token = "0x400089F")]
	private const string ReverseName = "Reverse";

	[Token(Token = "0x40008A0")]
	private const string EnumVersionName = "EnumVersion";

	[Token(Token = "0x40008A1")]
	private const string MinName = "Min";

	[Token(Token = "0x40008A2")]
	private const string MaxName = "Max";

	[Token(Token = "0x40008A3")]
	private const string LowerBoundActiveName = "lBoundActive";

	[Token(Token = "0x40008A4")]
	private const string UpperBoundActiveName = "uBoundActive";

	[Token(Token = "0x40008A5")]
	internal const int StackAllocThreshold = 100;

	[Token(Token = "0x1700038F")]
	public int Count
	{
		[Token(Token = "0x6001142")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000390")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6001143")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000391")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6001144")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000392")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6001145")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600113E")]
	public SortedSet()
	{
	}

	[Token(Token = "0x600113F")]
	public SortedSet(IComparer<T> comparer)
	{
	}

	[Token(Token = "0x6001140")]
	protected SortedSet(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001141")]
	internal virtual bool InOrderTreeWalk(TreeWalkPredicate<T> action)
	{
		return default(bool);
	}

	[Token(Token = "0x6001146")]
	internal virtual void VersionCheck()
	{
	}

	[Token(Token = "0x6001147")]
	internal virtual bool IsWithinRange(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6001148")]
	public bool Add(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6001149")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EAdd(T item)
	{
	}

	[Token(Token = "0x600114A")]
	internal virtual bool AddIfNotPresent(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x600114B")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x600114C")]
	internal virtual bool DoRemove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x600114D")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x600114E")]
	public virtual bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x600114F")]
	public void CopyTo(T[] array, int index)
	{
	}

	[Token(Token = "0x6001150")]
	public void CopyTo(T[] array, int index, int count)
	{
	}

	[Token(Token = "0x6001151")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001152")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6001153")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001154")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001155")]
	private void InsertionBalance(Node current, ref Node parent, Node grandParent, Node greatGrandParent)
	{
	}

	[Token(Token = "0x6001156")]
	private void ReplaceChildOrRoot(Node parent, Node child, Node newChild)
	{
	}

	[Token(Token = "0x6001157")]
	private void ReplaceNode(Node match, Node parentOfMatch, Node successor, Node parentOfSuccessor)
	{
	}

	[Token(Token = "0x6001158")]
	internal virtual Node FindNode(T item)
	{
		return null;
	}

	[Token(Token = "0x6001159")]
	internal void UpdateVersion()
	{
	}

	[Token(Token = "0x600115A")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600115B")]
	protected virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600115C")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x600115D")]
	protected virtual void OnDeserialization(object sender)
	{
	}

	[Token(Token = "0x600115E")]
	private static int Log2(int value)
	{
		return default(int);
	}
}
