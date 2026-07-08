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
		[Address(RVA = "0x453C580", Offset = "0x453C580", VA = "0x453C580", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x453CA00", Offset = "0x453CA00", VA = "0x453CA00", Slot = "5")]
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
		[Address(RVA = "0x453CA70", Offset = "0x453CA70", VA = "0x453CA70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x453D280", Offset = "0x453D280", VA = "0x453D280", Slot = "5")]
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
		[Address(RVA = "0x453D2E0", Offset = "0x453D2E0", VA = "0x453D2E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x453D880", Offset = "0x453D880", VA = "0x453D880", Slot = "5")]
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
		[Address(RVA = "0x453C000", Offset = "0x453C000", VA = "0x453C000")]
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
		[Address(RVA = "0x453C010", Offset = "0x453C010", VA = "0x453C010")]
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
		[Address(RVA = "0x453C020", Offset = "0x453C020", VA = "0x453C020")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001F")]
	public int UserResult
	{
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x453C050", Offset = "0x453C050", VA = "0x453C050")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000B9")]
		[Address(RVA = "0x453C060", Offset = "0x453C060", VA = "0x453C060")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x453C070", Offset = "0x453C070", VA = "0x453C070")]
	public AsyncProtocolRequest(MobileAuthenticatedStream parent, bool sync)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x453C100", Offset = "0x453C100", VA = "0x453C100")]
	internal void RequestRead(int size)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x453C1C0", Offset = "0x453C1C0", VA = "0x453C1C0")]
	internal void RequestWrite()
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x453C1D0", Offset = "0x453C1D0", VA = "0x453C1D0")]
	[AsyncStateMachine(typeof(_003CStartOperation_003Ed__23))]
	internal Task<AsyncProtocolResult> StartOperation(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x453C2E0", Offset = "0x453C2E0", VA = "0x453C2E0")]
	[AsyncStateMachine(typeof(_003CProcessOperation_003Ed__24))]
	private Task ProcessOperation(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x453C3F0", Offset = "0x453C3F0", VA = "0x453C3F0")]
	[AsyncStateMachine(typeof(_003CInnerRead_003Ed__25))]
	private Task<int?> InnerRead(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000C0")]
	protected abstract AsyncOperationStatus Run(AsyncOperationStatus status);

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x453C520", Offset = "0x453C520", VA = "0x453C520", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
