// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ThreadLocal
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x200021E")]
[DebuggerDisplay("IsValueCreated={IsValueCreated}, Value={ValueForDebugDisplay}, Count={ValuesCountForDebugDisplay}")]
[DebuggerTypeProxy(typeof(System.Threading.SystemThreading_ThreadLocalDebugView<>))]
public class ThreadLocal<T> : IDisposable
{
	[Token(Token = "0x200021F")]
	private struct LinkedSlotVolatile
	{
		[Token(Token = "0x40009F8")]
		[FieldOffset(Offset = "0x0")]
		internal LinkedSlot Value;
	}

	[Token(Token = "0x2000220")]
	private sealed class LinkedSlot
	{
		[Token(Token = "0x40009F9")]
		[FieldOffset(Offset = "0x0")]
		internal LinkedSlot Next;

		[Token(Token = "0x40009FA")]
		[FieldOffset(Offset = "0x0")]
		internal LinkedSlot Previous;

		[Token(Token = "0x40009FB")]
		[FieldOffset(Offset = "0x0")]
		internal LinkedSlotVolatile[] SlotArray;

		[Token(Token = "0x40009FC")]
		[FieldOffset(Offset = "0x0")]
		internal T Value;

		[Token(Token = "0x6001283")]
		internal LinkedSlot(LinkedSlotVolatile[] slotArray)
		{
		}
	}

	[Token(Token = "0x2000221")]
	private class IdManager
	{
		[Token(Token = "0x40009FD")]
		[FieldOffset(Offset = "0x0")]
		private int m_nextIdToTry;

		[Token(Token = "0x40009FE")]
		[FieldOffset(Offset = "0x0")]
		private List<bool> m_freeIds;

		[Token(Token = "0x6001284")]
		internal int GetId()
		{
			return default(int);
		}

		[Token(Token = "0x6001285")]
		internal void ReturnId(int id)
		{
		}

		[Token(Token = "0x6001286")]
		public IdManager()
		{
		}
	}

	[Token(Token = "0x2000222")]
	private class FinalizationHelper
	{
		[Token(Token = "0x40009FF")]
		[FieldOffset(Offset = "0x0")]
		internal LinkedSlotVolatile[] SlotArray;

		[Token(Token = "0x4000A00")]
		[FieldOffset(Offset = "0x0")]
		private bool m_trackAllValues;

		[Token(Token = "0x6001287")]
		internal FinalizationHelper(LinkedSlotVolatile[] slotArray, bool trackAllValues)
		{
		}

		[Token(Token = "0x6001288")]
		~FinalizationHelper()
		{
		}
	}

	[Token(Token = "0x40009F0")]
	[FieldOffset(Offset = "0x0")]
	private Func<T> m_valueFactory;

	[Token(Token = "0x40009F1")]
	[ThreadStatic]
	private static LinkedSlotVolatile[] ts_slotArray;

	[Token(Token = "0x40009F2")]
	[ThreadStatic]
	private static FinalizationHelper ts_finalizationHelper;

	[Token(Token = "0x40009F3")]
	[FieldOffset(Offset = "0x0")]
	private int m_idComplement;

	[Token(Token = "0x40009F4")]
	[FieldOffset(Offset = "0x0")]
	private bool m_initialized;

	[Token(Token = "0x40009F5")]
	[FieldOffset(Offset = "0x0")]
	private static IdManager s_idManager;

	[Token(Token = "0x40009F6")]
	[FieldOffset(Offset = "0x0")]
	private LinkedSlot m_linkedSlot;

	[Token(Token = "0x40009F7")]
	[FieldOffset(Offset = "0x0")]
	private bool m_trackAllValues;

	[Token(Token = "0x170001B3")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public T Value
	{
		[Token(Token = "0x600127A")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x600127B")]
		set
		{
		}
	}

	[Token(Token = "0x170001B4")]
	public bool IsValueCreated
	{
		[Token(Token = "0x600127F")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001274")]
	public ThreadLocal(Func<T> valueFactory)
	{
	}

	[Token(Token = "0x6001275")]
	private void Initialize(Func<T> valueFactory, bool trackAllValues)
	{
	}

	[Token(Token = "0x6001276")]
	~ThreadLocal()
	{
	}

	[Token(Token = "0x6001277")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001278")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001279")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600127C")]
	private T GetValueSlow()
	{
		return (T)null;
	}

	[Token(Token = "0x600127D")]
	private void SetValueSlow(T value, LinkedSlotVolatile[] slotArray)
	{
	}

	[Token(Token = "0x600127E")]
	private void CreateLinkedSlot(LinkedSlotVolatile[] slotArray, int id, T value)
	{
	}

	[Token(Token = "0x6001280")]
	private void GrowTable(ref LinkedSlotVolatile[] table, int minLength)
	{
	}

	[Token(Token = "0x6001281")]
	private static int GetNewTableSize(int minSize)
	{
		return default(int);
	}
}
