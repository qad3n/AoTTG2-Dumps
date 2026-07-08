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
			[Address(RVA = "0x4D4A050", Offset = "0x4D4A050", VA = "0x4D4A050")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000F31")]
			[Address(RVA = "0x4D4A060", Offset = "0x4D4A060", VA = "0x4D4A060")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170002F1")]
		public int offsetY
		{
			[Token(Token = "0x6000F32")]
			[Address(RVA = "0x4D4A070", Offset = "0x4D4A070", VA = "0x4D4A070")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000F33")]
			[Address(RVA = "0x4D4A080", Offset = "0x4D4A080", VA = "0x4D4A080")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170002F2")]
		public int width
		{
			[Token(Token = "0x6000F34")]
			[Address(RVA = "0x4D4A090", Offset = "0x4D4A090", VA = "0x4D4A090")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6000F35")]
			[Address(RVA = "0x4D4A0A0", Offset = "0x4D4A0A0", VA = "0x4D4A0A0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170002F3")]
		private int height
		{
			[Token(Token = "0x6000F36")]
			[Address(RVA = "0x4D4A0B0", Offset = "0x4D4A0B0", VA = "0x4D4A0B0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000F37")]
		[Address(RVA = "0x4D49DD0", Offset = "0x4D49DD0", VA = "0x4D49DD0")]
		public static Row Acquire(int offsetX, int offsetY, int width, int height)
		{
			return null;
		}

		[Token(Token = "0x6000F38")]
		[Address(RVA = "0x4D49070", Offset = "0x4D49070", VA = "0x4D49070")]
		public void Release()
		{
		}

		[Token(Token = "0x6000F39")]
		[Address(RVA = "0x4D4A0C0", Offset = "0x4D4A0C0", VA = "0x4D4A0C0")]
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
		[Address(RVA = "0x4D494D0", Offset = "0x4D494D0", VA = "0x4D494D0")]
		public static AreaNode Acquire(RectInt rect)
		{
			return null;
		}

		[Token(Token = "0x6000F3F")]
		[Address(RVA = "0x4D49120", Offset = "0x4D49120", VA = "0x4D49120")]
		public void Release()
		{
		}

		[Token(Token = "0x6000F40")]
		[Address(RVA = "0x4D49EA0", Offset = "0x4D49EA0", VA = "0x4D49EA0")]
		public void RemoveFromChain()
		{
		}

		[Token(Token = "0x6000F41")]
		[Address(RVA = "0x4D49F10", Offset = "0x4D49F10", VA = "0x4D49F10")]
		public void AddAfter(AreaNode previous)
		{
		}

		[Token(Token = "0x6000F42")]
		[Address(RVA = "0x4D4A2A0", Offset = "0x4D4A2A0", VA = "0x4D4A2A0")]
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
		[Address(RVA = "0x4D48D30", Offset = "0x4D48D30", VA = "0x4D48D30")]
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
		[Address(RVA = "0x4D48D40", Offset = "0x4D48D40", VA = "0x4D48D40")]
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
		[Address(RVA = "0x4D48D50", Offset = "0x4D48D50", VA = "0x4D48D50")]
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
		[Address(RVA = "0x4D48D60", Offset = "0x4D48D60", VA = "0x4D48D60")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F1F")]
		[Address(RVA = "0x4D48D70", Offset = "0x4D48D70", VA = "0x4D48D70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002EC")]
	public int virtualHeight
	{
		[Token(Token = "0x6000F20")]
		[Address(RVA = "0x4D48D80", Offset = "0x4D48D80", VA = "0x4D48D80")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F21")]
		[Address(RVA = "0x4D48D90", Offset = "0x4D48D90", VA = "0x4D48D90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002ED")]
	public int physicalWidth
	{
		[Token(Token = "0x6000F22")]
		[Address(RVA = "0x4D48DA0", Offset = "0x4D48DA0", VA = "0x4D48DA0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F23")]
		[Address(RVA = "0x4D48DB0", Offset = "0x4D48DB0", VA = "0x4D48DB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002EE")]
	public int physicalHeight
	{
		[Token(Token = "0x6000F24")]
		[Address(RVA = "0x4D48DC0", Offset = "0x4D48DC0", VA = "0x4D48DC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F25")]
		[Address(RVA = "0x4D48DD0", Offset = "0x4D48DD0", VA = "0x4D48DD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002EF")]
	protected bool disposed
	{
		[Token(Token = "0x6000F26")]
		[Address(RVA = "0x4D48DE0", Offset = "0x4D48DE0", VA = "0x4D48DE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F27")]
		[Address(RVA = "0x4D48DF0", Offset = "0x4D48DF0", VA = "0x4D48DF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000F28")]
	[Address(RVA = "0x4D48E00", Offset = "0x4D48E00", VA = "0x4D48E00", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000F29")]
	[Address(RVA = "0x4D48E70", Offset = "0x4D48E70", VA = "0x4D48E70", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000F2A")]
	[Address(RVA = "0x4D491C0", Offset = "0x4D491C0", VA = "0x4D491C0")]
	private static int GetLog2OfNextPower(int n)
	{
		return default(int);
	}

	[Token(Token = "0x6000F2B")]
	[Address(RVA = "0x4D49330", Offset = "0x4D49330", VA = "0x4D49330")]
	public UIRAtlasAllocator(int initialAtlasSize, int maxAtlasSize, int sidePadding = 1)
	{
	}

	[Token(Token = "0x6000F2C")]
	[Address(RVA = "0x4D49690", Offset = "0x4D49690", VA = "0x4D49690")]
	public bool TryAllocate(int width, int height, out RectInt location)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x4D49AB0", Offset = "0x4D49AB0", VA = "0x4D49AB0")]
	private bool TryPartitionArea(AreaNode areaNode, int rowIndex, int rowHeight, int minWidth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F2E")]
	[Address(RVA = "0x4D495B0", Offset = "0x4D495B0", VA = "0x4D495B0")]
	private void BuildAreas()
	{
	}
}
