// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.AsyncProtocolRequest
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace Mono.Net.Security;

[Token(Token = "0x200004A")]
internal abstract class AsyncProtocolRequest
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200004B")]
	[CompilerGenerated]
	private struct _003CStartOperation_003Ed__23 : IAsyncStateMachine
	{
		[Token(Token = "0x40000AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40000AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<AsyncProtocolResult> _003C_003Et__builder;

		[Token(Token = "0x40000AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AsyncProtocolRequest _003C_003E4__this;

		[Token(Token = "0x40000AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40000AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x4522770", Offset = "0x4522770", VA = "0x4522770", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x4522BF0", Offset = "0x4522BF0", VA = "0x4522BF0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200004C")]
	[CompilerGenerated]
	private struct _003CProcessOperation_003Ed__24 : IAsyncStateMachine
	{
		[Token(Token = "0x40000B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40000B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40000B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40000B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public AsyncProtocolRequest _003C_003E4__this;

		[Token(Token = "0x40000B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private AsyncOperationStatus _003Cstatus_003E5__2;

		[Token(Token = "0x40000B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		private AsyncOperationStatus _003CnewStatus_003E5__3;

		[Token(Token = "0x40000B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<int?>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x40000B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x4522C60", Offset = "0x4522C60", VA = "0x4522C60", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x4523470", Offset = "0x4523470", VA = "0x4523470", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200004D")]
	[CompilerGenerated]
	private struct _003CInnerRead_003Ed__25 : IAsyncStateMachine
	{
		[Token(Token = "0x40000B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40000B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int?> _003C_003Et__builder;

		[Token(Token = "0x40000BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public AsyncProtocolRequest _003C_003E4__this;

		[Token(Token = "0x40000BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40000BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private int? _003CtotalRead_003E5__2;

		[Token(Token = "0x40000BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private int _003CrequestedSize_003E5__3;

		[Token(Token = "0x40000BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x45234D0", Offset = "0x45234D0", VA = "0x45234D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x4523A70", Offset = "0x4523A70", VA = "0x4523A70", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40000A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int Started;

	[Token(Token = "0x40000A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private int RequestedSize;

	[Token(Token = "0x40000A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private int WriteRequested;

	[Token(Token = "0x40000AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly object locker;

	[Token(Token = "0x1700001C")]
	public MobileAuthenticatedStream Parent
	{
		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x45221F0", Offset = "0x45221F0", VA = "0x45221F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001D")]
	public bool RunSynchronously
	{
		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x4522200", Offset = "0x4522200", VA = "0x4522200")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001E")]
	public string Name
	{
		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x4522210", Offset = "0x4522210", VA = "0x4522210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001F")]
	public int UserResult
	{
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x4522240", Offset = "0x4522240", VA = "0x4522240")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000B9")]
		[Address(RVA = "0x4522250", Offset = "0x4522250", VA = "0x4522250")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x4522260", Offset = "0x4522260", VA = "0x4522260")]
	public AsyncProtocolRequest(MobileAuthenticatedStream parent, bool sync)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x45222F0", Offset = "0x45222F0", VA = "0x45222F0")]
	internal void RequestRead(int size)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x45223B0", Offset = "0x45223B0", VA = "0x45223B0")]
	internal void RequestWrite()
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x45223C0", Offset = "0x45223C0", VA = "0x45223C0")]
	[AsyncStateMachine(typeof(_003CStartOperation_003Ed__23))]
	internal Task<AsyncProtocolResult> StartOperation(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x45224D0", Offset = "0x45224D0", VA = "0x45224D0")]
	[AsyncStateMachine(typeof(_003CProcessOperation_003Ed__24))]
	private Task ProcessOperation(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x45225E0", Offset = "0x45225E0", VA = "0x45225E0")]
	[AsyncStateMachine(typeof(_003CInnerRead_003Ed__25))]
	private Task<int?> InnerRead(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000C0")]
	protected abstract AsyncOperationStatus Run(AsyncOperationStatus status);

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x4522710", Offset = "0x4522710", VA = "0x4522710", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
