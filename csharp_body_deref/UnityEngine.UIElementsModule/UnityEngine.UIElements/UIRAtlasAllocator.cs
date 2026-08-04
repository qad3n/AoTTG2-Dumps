// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIRAtlasAllocator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements;

[Token(Token = "0x200024C")]
internal class UIRAtlasAllocator : IDisposable
{
	[Token(Token = "0x200024D")]
	private class Row
	{
		[Token(Token = "0x4000876")]
		[FieldOffset(Offset = "0x0")]
		private static ObjectPool<Row> s_Pool;

		[Token(Token = "0x400087B")]
		[FieldOffset(Offset = "0x20")]
		public int Cursor;

		[Token(Token = "0x170002F0")]
		public int offsetX
		{
			[Token(Token = "0x6000F30")]
			[Address(RVA = "0x5071980", Offset = "0x5071980", VA = "0x5071980")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000F31")]
			[Address(RVA = "0x5071990", Offset = "0x5071990", VA = "0x5071990")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170002F1")]
		public int offsetY
		{
			[Token(Token = "0x6000F32")]
			[Address(RVA = "0x50719A0", Offset = "0x50719A0", VA = "0x50719A0")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000F33")]
			[Address(RVA = "0x50719B0", Offset = "0x50719B0", VA = "0x50719B0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170002F2")]
		public int width
		{
			[Token(Token = "0x6000F34")]
			[Address(RVA = "0x50719C0", Offset = "0x50719C0", VA = "0x50719C0")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000F35")]
			[Address(RVA = "0x50719D0", Offset = "0x50719D0", VA = "0x50719D0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170002F3")]
		private int height
		{
			[Token(Token = "0x6000F36")]
			[Address(RVA = "0x50719E0", Offset = "0x50719E0", VA = "0x50719E0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000F37")]
		[Address(RVA = "0x5071700", Offset = "0x5071700", VA = "0x5071700")]
		public static Row Acquire(int offsetX, int offsetY, int width, int height)
		{
			return null;
		}

		[Token(Token = "0x6000F38")]
		[Address(RVA = "0x50709A0", Offset = "0x50709A0", VA = "0x50709A0")]
		public void Release()
		{
		}

		[Token(Token = "0x6000F39")]
		[Address(RVA = "0x50719F0", Offset = "0x50719F0", VA = "0x50719F0")]
		public Row()
		{
		}
	}

	[Token(Token = "0x200024F")]
	private class AreaNode
	{
		[Token(Token = "0x400087D")]
		[FieldOffset(Offset = "0x0")]
		private static ObjectPool<AreaNode> s_Pool;

		[Token(Token = "0x400087E")]
		[FieldOffset(Offset = "0x10")]
		public RectInt rect;

		[Token(Token = "0x400087F")]
		[FieldOffset(Offset = "0x20")]
		public AreaNode previous;

		[Token(Token = "0x4000880")]
		[FieldOffset(Offset = "0x28")]
		public AreaNode next;

		[Token(Token = "0x6000F3E")]
		[Address(RVA = "0x5070E00", Offset = "0x5070E00", VA = "0x5070E00")]
		public static AreaNode Acquire(RectInt rect)
		{
			return null;
		}

		[Token(Token = "0x6000F3F")]
		[Address(RVA = "0x5070A50", Offset = "0x5070A50", VA = "0x5070A50")]
		public void Release()
		{
		}

		[Token(Token = "0x6000F40")]
		[Address(RVA = "0x50717D0", Offset = "0x50717D0", VA = "0x50717D0")]
		public void RemoveFromChain()
		{
		}

		[Token(Token = "0x6000F41")]
		[Address(RVA = "0x5071840", Offset = "0x5071840", VA = "0x5071840")]
		public void AddAfter(AreaNode previous)
		{
		}

		[Token(Token = "0x6000F42")]
		[Address(RVA = "0x5071BD0", Offset = "0x5071BD0", VA = "0x5071BD0")]
		public AreaNode()
		{
		}
	}

	[Token(Token = "0x4000870")]
	[FieldOffset(Offset = "0x30")]
	private AreaNode m_FirstUnpartitionedArea;

	[Token(Token = "0x4000871")]
	[FieldOffset(Offset = "0x38")]
	private Row[] m_OpenRows;

	[Token(Token = "0x4000872")]
	[FieldOffset(Offset = "0x40")]
	private int m_1SidePadding;

	[Token(Token = "0x4000873")]
	[FieldOffset(Offset = "0x44")]
	private int m_2SidePadding;

	[Token(Token = "0x4000874")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilerMarker s_MarkerTryAllocate;

	[Token(Token = "0x170002E8")]
	public int maxAtlasSize
	{
		[Token(Token = "0x6000F1B")]
		[Address(RVA = "0x5070660", Offset = "0x5070660", VA = "0x5070660")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002E9")]
	public int maxImageWidth
	{
		[Token(Token = "0x6000F1C")]
		[Address(RVA = "0x5070670", Offset = "0x5070670", VA = "0x5070670")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002EA")]
	public int maxImageHeight
	{
		[Token(Token = "0x6000F1D")]
		[Address(RVA = "0x5070680", Offset = "0x5070680", VA = "0x5070680")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002EB")]
	public int virtualWidth
	{
		[Token(Token = "0x6000F1E")]
		[Address(RVA = "0x5070690", Offset = "0x5070690", VA = "0x5070690")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F1F")]
		[Address(RVA = "0x50706A0", Offset = "0x50706A0", VA = "0x50706A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002EC")]
	public int virtualHeight
	{
		[Token(Token = "0x6000F20")]
		[Address(RVA = "0x50706B0", Offset = "0x50706B0", VA = "0x50706B0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F21")]
		[Address(RVA = "0x50706C0", Offset = "0x50706C0", VA = "0x50706C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002ED")]
	public int physicalWidth
	{
		[Token(Token = "0x6000F22")]
		[Address(RVA = "0x50706D0", Offset = "0x50706D0", VA = "0x50706D0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F23")]
		[Address(RVA = "0x50706E0", Offset = "0x50706E0", VA = "0x50706E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002EE")]
	public int physicalHeight
	{
		[Token(Token = "0x6000F24")]
		[Address(RVA = "0x50706F0", Offset = "0x50706F0", VA = "0x50706F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F25")]
		[Address(RVA = "0x5070700", Offset = "0x5070700", VA = "0x5070700")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002EF")]
	protected bool disposed
	{
		[Token(Token = "0x6000F26")]
		[Address(RVA = "0x5070710", Offset = "0x5070710", VA = "0x5070710")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F27")]
		[Address(RVA = "0x5070720", Offset = "0x5070720", VA = "0x5070720")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000F28")]
	[Address(RVA = "0x5070730", Offset = "0x5070730", VA = "0x5070730", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000F29")]
	[Address(RVA = "0x50707A0", Offset = "0x50707A0", VA = "0x50707A0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000F2A")]
	[Address(RVA = "0x5070AF0", Offset = "0x5070AF0", VA = "0x5070AF0")]
	private static int GetLog2OfNextPower(int n)
	{
		return default(int);
	}

	[Token(Token = "0x6000F2B")]
	[Address(RVA = "0x5070C60", Offset = "0x5070C60", VA = "0x5070C60")]
	public UIRAtlasAllocator(int initialAtlasSize, int maxAtlasSize, int sidePadding = 1)
	{
	}

	[Token(Token = "0x6000F2C")]
	[Address(RVA = "0x5070FC0", Offset = "0x5070FC0", VA = "0x5070FC0")]
	public bool TryAllocate(int width, int height, out RectInt location)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x50713E0", Offset = "0x50713E0", VA = "0x50713E0")]
	private bool TryPartitionArea(AreaNode areaNode, int rowIndex, int rowHeight, int minWidth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F2E")]
	[Address(RVA = "0x5070EE0", Offset = "0x5070EE0", VA = "0x5070EE0")]
	private void BuildAreas()
	{
	}
}
