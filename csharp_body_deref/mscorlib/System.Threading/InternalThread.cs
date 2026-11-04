// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.InternalThread
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Threading;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200024C")]
internal sealed class InternalThread : CriticalFinalizerObject
{
	[Token(Token = "0x4000A74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int lock_thread_id;

	[Token(Token = "0x4000A75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr handle;

	[Token(Token = "0x4000A76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private IntPtr native_handle;

	[Token(Token = "0x4000A77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IntPtr name_chars;

	[Token(Token = "0x4000A78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int name_free;

	[Token(Token = "0x4000A79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private int name_length;

	[Token(Token = "0x4000A7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private ThreadState state;

	[Token(Token = "0x4000A7B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private object abort_exc;

	[Token(Token = "0x4000A7C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int abort_state_handle;

	[Token(Token = "0x4000A7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	internal long thread_id;

	[Token(Token = "0x4000A7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private IntPtr debugger_thread;

	[Token(Token = "0x4000A7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private UIntPtr static_data;

	[Token(Token = "0x4000A80")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private IntPtr runtime_thread_info;

	[Token(Token = "0x4000A81")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private object current_appcontext;

	[Token(Token = "0x4000A82")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private object root_domain_thread;

	[Token(Token = "0x4000A83")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	internal byte[] _serialized_principal;

	[Token(Token = "0x4000A84")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	internal int _serialized_principal_version;

	[Token(Token = "0x4000A85")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private IntPtr appdomain_refs;

	[Token(Token = "0x4000A86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private int interruption_requested;

	[Token(Token = "0x4000A87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private IntPtr longlived;

	[Token(Token = "0x4000A88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	internal bool threadpool_thread;

	[Token(Token = "0x4000A89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA9")]
	private bool thread_interrupt_requested;

	[Token(Token = "0x4000A8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAC")]
	internal int stack_size;

	[Token(Token = "0x4000A8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	internal byte apartment_state;

	[Token(Token = "0x4000A8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB4")]
	internal int critical_region_level;

	[Token(Token = "0x4000A8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	internal int managed_id;

	[Token(Token = "0x4000A8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xBC")]
	private int small_id;

	[Token(Token = "0x4000A8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private IntPtr manage_callback;

	[Token(Token = "0x4000A90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private IntPtr flags;

	[Token(Token = "0x4000A91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private IntPtr thread_pinning_ref;

	[Token(Token = "0x4000A92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private IntPtr abort_protected_block_count;

	[Token(Token = "0x4000A93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private int priority;

	[Token(Token = "0x4000A94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private IntPtr owned_mutex;

	[Token(Token = "0x4000A95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private IntPtr suspended_event;

	[Token(Token = "0x4000A96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private int self_suspended;

	[Token(Token = "0x4000A97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private IntPtr thread_state;

	[Token(Token = "0x4000A98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private IntPtr netcore0;

	[Token(Token = "0x4000A99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private IntPtr netcore1;

	[Token(Token = "0x4000A9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private IntPtr netcore2;

	[Token(Token = "0x4000A9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private IntPtr last;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60013BE")]
	[Address(RVA = "0x1BAFEF0", Offset = "0x1BAE4F0", VA = "0x181BAFEF0")]
	private extern void Thread_free_internal();

	[Token(Token = "0x60013BF")]
	[Address(RVA = "0x1BAFE90", Offset = "0x1BAE490", VA = "0x181BAFE90", Slot = "1")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	~InternalThread()
	{
	}

	[Token(Token = "0x60013C0")]
	[Address(RVA = "0x1BAFF00", Offset = "0x1BAE500", VA = "0x181BAFF00")]
	public InternalThread()
	{
	}
}
