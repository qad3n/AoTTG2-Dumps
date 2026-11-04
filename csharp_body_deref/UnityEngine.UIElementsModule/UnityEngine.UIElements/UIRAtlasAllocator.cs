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

[Token(Token = "0x20002C8")]
internal class UIRAtlasAllocator : IDisposable
{
	[Token(Token = "0x20002C9")]
	private class Row
	{
		[Token(Token = "0x4000ABE")]
		[FieldOffset(Offset = "0x0")]
		private static ObjectPool<Row> s_Pool;

		[Token(Token = "0x4000AC3")]
		[FieldOffset(Offset = "0x20")]
		public int Cursor;

		[Token(Token = "0x170003DB")]
		public int offsetX
		{
			[Token(Token = "0x60012EA")]
			[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60012EB")]
			[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170003DC")]
		public int offsetY
		{
			[Token(Token = "0x60012EC")]
			[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60012ED")]
			[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170003DD")]
		public int width
		{
			[Token(Token = "0x60012EE")]
			[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60012EF")]
			[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170003DE")]
		private int height
		{
			[Token(Token = "0x60012F0")]
			[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60012F1")]
		[Address(RVA = "0x32B6060", Offset = "0x32B4660", VA = "0x1832B6060")]
		public static Row Acquire(int offsetX, int offsetY, int width, int height)
		{
			return null;
		}

		[Token(Token = "0x60012F2")]
		[Address(RVA = "0x32B6100", Offset = "0x32B4700", VA = "0x1832B6100")]
		public void Release()
		{
		}

		[Token(Token = "0x60012F3")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public Row()
		{
		}
	}

	[Token(Token = "0x20002CB")]
	private class AreaNode
	{
		[Token(Token = "0x4000AC5")]
		[FieldOffset(Offset = "0x0")]
		private static ObjectPool<AreaNode> s_Pool;

		[Token(Token = "0x4000AC6")]
		[FieldOffset(Offset = "0x10")]
		public RectInt rect;

		[Token(Token = "0x4000AC7")]
		[FieldOffset(Offset = "0x20")]
		public AreaNode previous;

		[Token(Token = "0x4000AC8")]
		[FieldOffset(Offset = "0x28")]
		public AreaNode next;

		[Token(Token = "0x60012F8")]
		[Address(RVA = "0x32A6060", Offset = "0x32A4660", VA = "0x1832A6060")]
		public static AreaNode Acquire(RectInt rect)
		{
			return null;
		}

		[Token(Token = "0x60012F9")]
		[Address(RVA = "0x32A6200", Offset = "0x32A4800", VA = "0x1832A6200")]
		public void Release()
		{
		}

		[Token(Token = "0x60012FA")]
		[Address(RVA = "0x32A6280", Offset = "0x32A4880", VA = "0x1832A6280")]
		public void RemoveFromChain()
		{
		}

		[Token(Token = "0x60012FB")]
		[Address(RVA = "0x32A6120", Offset = "0x32A4720", VA = "0x1832A6120")]
		public void AddAfter(AreaNode previous)
		{
		}

		[Token(Token = "0x60012FC")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public AreaNode()
		{
		}
	}

	[Token(Token = "0x4000AB8")]
	[FieldOffset(Offset = "0x30")]
	private AreaNode m_FirstUnpartitionedArea;

	[Token(Token = "0x4000AB9")]
	[FieldOffset(Offset = "0x38")]
	private Row[] m_OpenRows;

	[Token(Token = "0x4000ABA")]
	[FieldOffset(Offset = "0x40")]
	private int m_1SidePadding;

	[Token(Token = "0x4000ABB")]
	[FieldOffset(Offset = "0x44")]
	private int m_2SidePadding;

	[Token(Token = "0x4000ABC")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilerMarker s_MarkerTryAllocate;

	[Token(Token = "0x170003D3")]
	public int maxAtlasSize
	{
		[Token(Token = "0x60012D5")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003D4")]
	public int maxImageWidth
	{
		[Token(Token = "0x60012D6")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003D5")]
	public int maxImageHeight
	{
		[Token(Token = "0x60012D7")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003D6")]
	public int virtualWidth
	{
		[Token(Token = "0x60012D8")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012D9")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003D7")]
	public int virtualHeight
	{
		[Token(Token = "0x60012DA")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012DB")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003D8")]
	public int physicalWidth
	{
		[Token(Token = "0x60012DC")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012DD")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003D9")]
	public int physicalHeight
	{
		[Token(Token = "0x60012DE")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012DF")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003DA")]
	protected bool disposed
	{
		[Token(Token = "0x60012E0")]
		[Address(RVA = "0x58A530", Offset = "0x588B30", VA = "0x18058A530")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60012E1")]
		[Address(RVA = "0x58A8C0", Offset = "0x588EC0", VA = "0x18058A8C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60012E2")]
	[Address(RVA = "0x32B9300", Offset = "0x32B7900", VA = "0x1832B9300", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60012E3")]
	[Address(RVA = "0x32B91C0", Offset = "0x32B77C0", VA = "0x1832B91C0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60012E4")]
	[Address(RVA = "0x32B9360", Offset = "0x32B7960", VA = "0x1832B9360")]
	private static int GetLog2OfNextPower(int n)
	{
		return default(int);
	}

	[Token(Token = "0x60012E5")]
	[Address(RVA = "0x32B9AD0", Offset = "0x32B80D0", VA = "0x1832B9AD0")]
	public UIRAtlasAllocator(int initialAtlasSize, int maxAtlasSize, int sidePadding = 1)
	{
	}

	[Token(Token = "0x60012E6")]
	[Address(RVA = "0x32B93F0", Offset = "0x32B79F0", VA = "0x1832B93F0")]
	public bool TryAllocate(int width, int height, out RectInt location)
	{
		return default(bool);
	}

	[Token(Token = "0x60012E7")]
	[Address(RVA = "0x32B97C0", Offset = "0x32B7DC0", VA = "0x1832B97C0")]
	private bool TryPartitionArea(AreaNode areaNode, int rowIndex, int rowHeight, int minWidth)
	{
		return default(bool);
	}

	[Token(Token = "0x60012E8")]
	[Address(RVA = "0x32B90A0", Offset = "0x32B76A0", VA = "0x1832B90A0")]
	private void BuildAreas()
	{
	}
}
