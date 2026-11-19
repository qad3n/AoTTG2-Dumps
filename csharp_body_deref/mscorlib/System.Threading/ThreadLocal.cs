// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ThreadLocal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001F6")]
[DebuggerTypeProxy(typeof(System.Threading.SystemThreading_ThreadLocalDebugView<>))]
[DebuggerDisplay("IsValueCreated={IsValueCreated}, Value={ValueForDebugDisplay}, Count={ValuesCountForDebugDisplay}")]
public class ThreadLocal<T> : IDisposable
{
	[Token(Token = "0x20001F7")]
	private struct LinkedSlotVolatile
	{
		[Token(Token = "0x4000956")]
		[FieldOffset(Offset = "0x0")]
		internal LinkedSlot Value;
	}

	[Token(Token = "0x20001F8")]
	private sealed class LinkedSlot
	{
		[Token(Token = "0x4000957")]
		[FieldOffset(Offset = "0x0")]
		internal LinkedSlot Next;

		[Token(Token = "0x4000958")]
		[FieldOffset(Offset = "0x0")]
		internal LinkedSlot Previous;

		[Token(Token = "0x4000959")]
		[FieldOffset(Offset = "0x0")]
		internal LinkedSlotVolatile[] SlotArray;

		[Token(Token = "0x400095A")]
		[FieldOffset(Offset = "0x0")]
		internal T Value;

		[Token(Token = "0x600125A")]
		internal LinkedSlot(LinkedSlotVolatile[] slotArray)
		{
		}
	}

	[Token(Token = "0x20001F9")]
	private class IdManager
	{
		[Token(Token = "0x400095B")]
		[FieldOffset(Offset = "0x0")]
		private int m_nextIdToTry;

		[Token(Token = "0x400095C")]
		[FieldOffset(Offset = "0x0")]
		private List<bool> m_freeIds;

		[Token(Token = "0x600125B")]
		internal int GetId()
		{
			return default(int);
		}

		[Token(Token = "0x600125C")]
		internal void ReturnId(int id)
		{
		}

		[Token(Token = "0x600125D")]
		public IdManager()
		{
		}
	}

	[Token(Token = "0x20001FA")]
	private class FinalizationHelper
	{
		[Token(Token = "0x400095D")]
		[FieldOffset(Offset = "0x0")]
		internal LinkedSlotVolatile[] SlotArray;

		[Token(Token = "0x400095E")]
		[FieldOffset(Offset = "0x0")]
		private bool m_trackAllValues;

		[Token(Token = "0x600125E")]
		internal FinalizationHelper(LinkedSlotVolatile[] slotArray, bool trackAllValues)
		{
		}

		[Token(Token = "0x600125F")]
		~FinalizationHelper()
		{
		}
	}

	[Token(Token = "0x400094E")]
	[FieldOffset(Offset = "0x0")]
	private Func<T> m_valueFactory;

	[Token(Token = "0x400094F")]
	[ThreadStatic]
	private static LinkedSlotVolatile[] ts_slotArray;

	[Token(Token = "0x4000950")]
	[ThreadStatic]
	private static FinalizationHelper ts_finalizationHelper;

	[Token(Token = "0x4000951")]
	[FieldOffset(Offset = "0x0")]
	private int m_idComplement;

	[Token(Token = "0x4000952")]
	[FieldOffset(Offset = "0x0")]
	private bool m_initialized;

	[Token(Token = "0x4000953")]
	[FieldOffset(Offset = "0x0")]
	private static IdManager s_idManager;

	[Token(Token = "0x4000954")]
	[FieldOffset(Offset = "0x0")]
	private LinkedSlot m_linkedSlot;

	[Token(Token = "0x4000955")]
	[FieldOffset(Offset = "0x0")]
	private bool m_trackAllValues;

	[Token(Token = "0x170001B2")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public T Value
	{
		[Token(Token = "0x6001251")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6001252")]
		set
		{
		}
	}

	[Token(Token = "0x170001B3")]
	public bool IsValueCreated
	{
		[Token(Token = "0x6001256")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600124B")]
	public ThreadLocal(Func<T> valueFactory)
	{
	}

	[Token(Token = "0x600124C")]
	private void Initialize(Func<T> valueFactory, bool trackAllValues)
	{
	}

	[Token(Token = "0x600124D")]
	~ThreadLocal()
	{
	}

	[Token(Token = "0x600124E")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600124F")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001250")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001253")]
	private T GetValueSlow()
	{
		return (T)null;
	}

	[Token(Token = "0x6001254")]
	private void SetValueSlow(T value, LinkedSlotVolatile[] slotArray)
	{
	}

	[Token(Token = "0x6001255")]
	private void CreateLinkedSlot(LinkedSlotVolatile[] slotArray, int id, T value)
	{
	}

	[Token(Token = "0x6001257")]
	private void GrowTable(ref LinkedSlotVolatile[] table, int minLength)
	{
	}

	[Token(Token = "0x6001258")]
	private static int GetNewTableSize(int minSize)
	{
		return default(int);
	}
}
