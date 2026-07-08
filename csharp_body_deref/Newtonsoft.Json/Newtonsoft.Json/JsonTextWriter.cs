using System;
using System.Diagnostics;
using System.IO;
using System.Numerics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json;

[Token(Token = "0x200005D")]
public class JsonTextWriter : JsonWriter
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200005E")]
	[CompilerGenerated]
	private struct _003CCloseBufferAndWriterAsync_003Ed__9 : IAsyncStateMachine
	{
		[Token(Token = "0x4000220")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000221")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000222")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x4000223")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000375")]
		[Address(RVA = "0x3A95EA0", Offset = "0x3A95EA0", VA = "0x3A95EA0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000376")]
		[Address(RVA = "0x3A96180", Offset = "0x3A96180", VA = "0x3A96180", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200005F")]
	[CompilerGenerated]
	private struct _003CDoCloseAsync_003Ed__8 : IAsyncStateMachine
	{
		[Token(Token = "0x4000224")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000225")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000226")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x4000227")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000228")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000377")]
		[Address(RVA = "0x3A961E0", Offset = "0x3A961E0", VA = "0x3A961E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000378")]
		[Address(RVA = "0x3A96680", Offset = "0x3A96680", VA = "0x3A96680", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000060")]
	[CompilerGenerated]
	private struct _003CDoWriteCommentAsync_003Ed__115 : IAsyncStateMachine
	{
		[Token(Token = "0x4000229")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400022A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400022B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x400022C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400022D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string text;

		[Token(Token = "0x400022E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000379")]
		[Address(RVA = "0x3A966E0", Offset = "0x3A966E0", VA = "0x3A966E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600037A")]
		[Address(RVA = "0x3A96DC0", Offset = "0x3A96DC0", VA = "0x3A96DC0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000061")]
	[CompilerGenerated]
	private struct _003CDoWritePropertyNameAsync_003Ed__30 : IAsyncStateMachine
	{
		[Token(Token = "0x400022F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000230")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000231")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Task task;

		[Token(Token = "0x4000232")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x4000233")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string name;

		[Token(Token = "0x4000234")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000235")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600037B")]
		[Address(RVA = "0x3A96E20", Offset = "0x3A96E20", VA = "0x3A96E20", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600037C")]
		[Address(RVA = "0x3A972C0", Offset = "0x3A972C0", VA = "0x3A972C0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000062")]
	[CompilerGenerated]
	private struct _003CDoWritePropertyNameAsync_003Ed__32 : IAsyncStateMachine
	{
		[Token(Token = "0x4000236")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000237")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000238")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x4000239")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string name;

		[Token(Token = "0x400023A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400023B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool escape;

		[Token(Token = "0x400023C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600037D")]
		[Address(RVA = "0x3A97320", Offset = "0x3A97320", VA = "0x3A97320", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600037E")]
		[Address(RVA = "0x3A97D10", Offset = "0x3A97D10", VA = "0x3A97D10", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000063")]
	[CompilerGenerated]
	private struct _003CDoWriteRawValueAsync_003Ed__121 : IAsyncStateMachine
	{
		[Token(Token = "0x400023D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400023E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400023F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Task task;

		[Token(Token = "0x4000240")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x4000241")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string json;

		[Token(Token = "0x4000242")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000243")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600037F")]
		[Address(RVA = "0x3A97D70", Offset = "0x3A97D70", VA = "0x3A97D70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000380")]
		[Address(RVA = "0x3A980B0", Offset = "0x3A980B0", VA = "0x3A980B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000064")]
	[CompilerGenerated]
	private struct _003CDoWriteStartArrayAsync_003Ed__35 : IAsyncStateMachine
	{
		[Token(Token = "0x4000244")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000245")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000246")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Task task;

		[Token(Token = "0x4000247")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x4000248")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000249")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000381")]
		[Address(RVA = "0x3A98110", Offset = "0x3A98110", VA = "0x3A98110", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000382")]
		[Address(RVA = "0x3A98490", Offset = "0x3A98490", VA = "0x3A98490", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000065")]
	[CompilerGenerated]
	private struct _003CDoWriteStartConstructorAsync_003Ed__40 : IAsyncStateMachine
	{
		[Token(Token = "0x400024A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400024B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400024C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x400024D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400024E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string name;

		[Token(Token = "0x400024F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000383")]
		[Address(RVA = "0x3A984F0", Offset = "0x3A984F0", VA = "0x3A984F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000384")]
		[Address(RVA = "0x3A98CB0", Offset = "0x3A98CB0", VA = "0x3A98CB0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000066")]
	[CompilerGenerated]
	private struct _003CDoWriteStartObjectAsync_003Ed__38 : IAsyncStateMachine
	{
		[Token(Token = "0x4000250")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000251")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000252")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Task task;

		[Token(Token = "0x4000253")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x4000254")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000255")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000385")]
		[Address(RVA = "0x3A98D10", Offset = "0x3A98D10", VA = "0x3A98D10", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000386")]
		[Address(RVA = "0x3A99090", Offset = "0x3A99090", VA = "0x3A99090", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000067")]
	[CompilerGenerated]
	private struct _003CDoWriteUndefinedAsync_003Ed__43 : IAsyncStateMachine
	{
		[Token(Token = "0x4000256")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000257")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000258")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Task task;

		[Token(Token = "0x4000259")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x400025A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400025B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000387")]
		[Address(RVA = "0x3A990F0", Offset = "0x3A990F0", VA = "0x3A990F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000388")]
		[Address(RVA = "0x3A994B0", Offset = "0x3A994B0", VA = "0x3A994B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000068")]
	[CompilerGenerated]
	private struct _003CDoWriteValueAsync_003Ed__60 : IAsyncStateMachine
	{
		[Token(Token = "0x400025C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400025D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400025E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x400025F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000260")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public DateTime value;

		[Token(Token = "0x4000261")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000389")]
		[Address(RVA = "0x3A99510", Offset = "0x3A99510", VA = "0x3A99510", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600038A")]
		[Address(RVA = "0x3A99F50", Offset = "0x3A99F50", VA = "0x3A99F50", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000069")]
	[CompilerGenerated]
	private struct _003CDoWriteValueAsync_003Ed__64 : IAsyncStateMachine
	{
		[Token(Token = "0x4000262")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000263")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000264")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x4000265")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000266")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public DateTimeOffset value;

		[Token(Token = "0x4000267")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600038B")]
		[Address(RVA = "0x3A99FB0", Offset = "0x3A99FB0", VA = "0x3A99FB0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600038C")]
		[Address(RVA = "0x3A9A880", Offset = "0x3A9A880", VA = "0x3A9A880", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200006A")]
	[CompilerGenerated]
	private struct _003CDoWriteValueAsync_003Ed__78 : IAsyncStateMachine
	{
		[Token(Token = "0x4000268")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000269")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400026A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x400026B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400026C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Guid value;

		[Token(Token = "0x400026D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600038D")]
		[Address(RVA = "0x3A9A8E0", Offset = "0x3A9A8E0", VA = "0x3A9A8E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600038E")]
		[Address(RVA = "0x3A9AFE0", Offset = "0x3A9AFE0", VA = "0x3A9AFE0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200006B")]
	[CompilerGenerated]
	private struct _003CDoWriteValueAsync_003Ed__97 : IAsyncStateMachine
	{
		[Token(Token = "0x400026E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400026F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000270")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Task task;

		[Token(Token = "0x4000271")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string value;

		[Token(Token = "0x4000272")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x4000273")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000274")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600038F")]
		[Address(RVA = "0x3A9B040", Offset = "0x3A9B040", VA = "0x3A9B040", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000390")]
		[Address(RVA = "0x3A9B450", Offset = "0x3A9B450", VA = "0x3A9B450", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200006C")]
	[CompilerGenerated]
	private struct _003CDoWriteValueAsync_003Ed__99 : IAsyncStateMachine
	{
		[Token(Token = "0x4000275")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000276")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000277")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x4000278")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000279")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public TimeSpan value;

		[Token(Token = "0x400027A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000391")]
		[Address(RVA = "0x3A9B4B0", Offset = "0x3A9B4B0", VA = "0x3A9B4B0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000392")]
		[Address(RVA = "0x3A9BBE0", Offset = "0x3A9BBE0", VA = "0x3A9BBE0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200006D")]
	[CompilerGenerated]
	private struct _003CWriteIndentAsync_003Ed__13 : IAsyncStateMachine
	{
		[Token(Token = "0x400027B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400027C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400027D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x400027E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int newLineLen;

		[Token(Token = "0x400027F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public int currentIndentCount;

		[Token(Token = "0x4000280")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000281")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000393")]
		[Address(RVA = "0x3A9BC40", Offset = "0x3A9BC40", VA = "0x3A9BC40", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000394")]
		[Address(RVA = "0x3A9C150", Offset = "0x3A9C150", VA = "0x3A9C150", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200006E")]
	[CompilerGenerated]
	private struct _003CWriteIntegerValueAsync_003Ed__24 : IAsyncStateMachine
	{
		[Token(Token = "0x4000282")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000283")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000284")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Task task;

		[Token(Token = "0x4000285")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x4000286")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public ulong uvalue;

		[Token(Token = "0x4000287")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool negative;

		[Token(Token = "0x4000288")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000289")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000395")]
		[Address(RVA = "0x3A9C1B0", Offset = "0x3A9C1B0", VA = "0x3A9C1B0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000396")]
		[Address(RVA = "0x3A9C4E0", Offset = "0x3A9C4E0", VA = "0x3A9C4E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200006F")]
	[CompilerGenerated]
	private struct _003CWriteValueInternalAsync_003Ed__15 : IAsyncStateMachine
	{
		[Token(Token = "0x400028A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400028B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400028C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Task task;

		[Token(Token = "0x400028D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x400028E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string value;

		[Token(Token = "0x400028F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000290")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000397")]
		[Address(RVA = "0x3A9C540", Offset = "0x3A9C540", VA = "0x3A9C540", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000398")]
		[Address(RVA = "0x3A9C8C0", Offset = "0x3A9C8C0", VA = "0x3A9C8C0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000070")]
	[CompilerGenerated]
	private struct _003CWriteValueNonNullAsync_003Ed__54 : IAsyncStateMachine
	{
		[Token(Token = "0x4000291")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000292")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000293")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x4000294")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000295")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public byte[] value;

		[Token(Token = "0x4000296")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000399")]
		[Address(RVA = "0x3A9C920", Offset = "0x3A9C920", VA = "0x3A9C920", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600039A")]
		[Address(RVA = "0x3A9D120", Offset = "0x3A9D120", VA = "0x3A9D120", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000071")]
	[CompilerGenerated]
	private struct _003CWriteValueNotNullAsync_003Ed__110 : IAsyncStateMachine
	{
		[Token(Token = "0x4000297")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000298")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000299")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Task task;

		[Token(Token = "0x400029A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JsonTextWriter _003C_003E4__this;

		[Token(Token = "0x400029B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Uri value;

		[Token(Token = "0x400029C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400029D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600039B")]
		[Address(RVA = "0x3A9D180", Offset = "0x3A9D180", VA = "0x3A9D180", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600039C")]
		[Address(RVA = "0x3A9D4F0", Offset = "0x3A9D4F0", VA = "0x3A9D4F0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000214")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly bool _safeAsync;

	[Token(Token = "0x4000215")]
	private const int IndentCharBufferSize = 12;

	[Token(Token = "0x4000216")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly TextWriter _writer;

	[Token(Token = "0x4000217")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Base64Encoder? _base64Encoder;

	[Token(Token = "0x4000218")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private char _indentChar;

	[Token(Token = "0x4000219")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	private int _indentation;

	[Token(Token = "0x400021A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private char _quoteChar;

	[Token(Token = "0x400021B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x82")]
	private bool _quoteName;

	[Token(Token = "0x400021C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private bool[]? _charEscapeFlags;

	[Token(Token = "0x400021D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private char[]? _writeBuffer;

	[Token(Token = "0x400021E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private IArrayPool<char>? _arrayPool;

	[Token(Token = "0x400021F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private char[]? _indentChars;

	[Token(Token = "0x17000084")]
	private Base64Encoder Base64Encoder
	{
		[Token(Token = "0x6000333")]
		[Address(RVA = "0x3A93A70", Offset = "0x3A93A70", VA = "0x3A93A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000085")]
	public IArrayPool<char>? ArrayPool
	{
		[Token(Token = "0x6000334")]
		[Address(RVA = "0x3A93AF0", Offset = "0x3A93AF0", VA = "0x3A93AF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000335")]
		[Address(RVA = "0x3A93B00", Offset = "0x3A93B00", VA = "0x3A93B00")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public int Indentation
	{
		[Token(Token = "0x6000336")]
		[Address(RVA = "0x3A93B70", Offset = "0x3A93B70", VA = "0x3A93B70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000337")]
		[Address(RVA = "0x3A93B80", Offset = "0x3A93B80", VA = "0x3A93B80")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public char QuoteChar
	{
		[Token(Token = "0x6000338")]
		[Address(RVA = "0x3A93BE0", Offset = "0x3A93BE0", VA = "0x3A93BE0")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x6000339")]
		[Address(RVA = "0x3A93BF0", Offset = "0x3A93BF0", VA = "0x3A93BF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public char IndentChar
	{
		[Token(Token = "0x600033A")]
		[Address(RVA = "0x3A93D30", Offset = "0x3A93D30", VA = "0x3A93D30")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x600033B")]
		[Address(RVA = "0x3A93D40", Offset = "0x3A93D40", VA = "0x3A93D40")]
		set
		{
		}
	}

	[Token(Token = "0x17000089")]
	public bool QuoteName
	{
		[Token(Token = "0x600033C")]
		[Address(RVA = "0x3A93D70", Offset = "0x3A93D70", VA = "0x3A93D70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600033D")]
		[Address(RVA = "0x3A93D80", Offset = "0x3A93D80", VA = "0x3A93D80")]
		set
		{
		}
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x3A8F430", Offset = "0x3A8F430", VA = "0x3A8F430", Slot = "6")]
	public override Task FlushAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x3A8F4D0", Offset = "0x3A8F4D0", VA = "0x3A8F4D0")]
	internal Task DoFlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x3A8F550", Offset = "0x3A8F550", VA = "0x3A8F550", Slot = "9")]
	protected override Task WriteValueDelimiterAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x3A8F5D0", Offset = "0x3A8F5D0", VA = "0x3A8F5D0")]
	internal Task DoWriteValueDelimiterAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x3A8F630", Offset = "0x3A8F630", VA = "0x3A8F630", Slot = "7")]
	protected override Task WriteEndAsync(JsonToken token, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x3A8F640", Offset = "0x3A8F640", VA = "0x3A8F640")]
	internal Task DoWriteEndAsync(JsonToken token, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x3A8F770", Offset = "0x3A8F770", VA = "0x3A8F770", Slot = "5")]
	public override Task CloseAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x3A8F780", Offset = "0x3A8F780", VA = "0x3A8F780")]
	[AsyncStateMachine(typeof(_003CDoCloseAsync_003Ed__8))]
	internal Task DoCloseAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x3A8F880", Offset = "0x3A8F880", VA = "0x3A8F880")]
	[AsyncStateMachine(typeof(_003CCloseBufferAndWriterAsync_003Ed__9))]
	private Task CloseBufferAndWriterAsync()
	{
		return null;
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x3A8F960", Offset = "0x3A8F960", VA = "0x3A8F960", Slot = "12")]
	public override Task WriteEndAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x3A8F980", Offset = "0x3A8F980", VA = "0x3A8F980", Slot = "8")]
	protected override Task WriteIndentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x3A8F990", Offset = "0x3A8F990", VA = "0x3A8F990")]
	internal Task DoWriteIndentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x3A8FB30", Offset = "0x3A8FB30", VA = "0x3A8FB30")]
	[AsyncStateMachine(typeof(_003CWriteIndentAsync_003Ed__13))]
	private Task WriteIndentAsync(int currentIndentCount, int newLineLen, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x3A8FC50", Offset = "0x3A8FC50", VA = "0x3A8FC50")]
	private Task WriteValueInternalAsync(JsonToken token, string value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x3A8FD00", Offset = "0x3A8FD00", VA = "0x3A8FD00")]
	[AsyncStateMachine(typeof(_003CWriteValueInternalAsync_003Ed__15))]
	private Task WriteValueInternalAsync(Task task, string value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x3A8FE40", Offset = "0x3A8FE40", VA = "0x3A8FE40", Slot = "10")]
	protected override Task WriteIndentSpaceAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x3A8FEC0", Offset = "0x3A8FEC0", VA = "0x3A8FEC0")]
	internal Task DoWriteIndentSpaceAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x3A8FF20", Offset = "0x3A8FF20", VA = "0x3A8FF20", Slot = "11")]
	public override Task WriteRawAsync(string? json, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x3A8FFA0", Offset = "0x3A8FFA0", VA = "0x3A8FFA0")]
	internal Task DoWriteRawAsync(string? json, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x3A90000", Offset = "0x3A90000", VA = "0x3A90000", Slot = "16")]
	public override Task WriteNullAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x3A90080", Offset = "0x3A90080", VA = "0x3A90080")]
	internal Task DoWriteNullAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x3A900F0", Offset = "0x3A900F0", VA = "0x3A900F0")]
	private Task WriteDigitsAsync(ulong uvalue, bool negative, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x3A902C0", Offset = "0x3A902C0", VA = "0x3A902C0")]
	private Task WriteIntegerValueAsync(ulong uvalue, bool negative, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x3A90360", Offset = "0x3A90360", VA = "0x3A90360")]
	[AsyncStateMachine(typeof(_003CWriteIntegerValueAsync_003Ed__24))]
	private Task WriteIntegerValueAsync(Task task, ulong uvalue, bool negative, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x3A904A0", Offset = "0x3A904A0", VA = "0x3A904A0")]
	internal Task WriteIntegerValueAsync(long value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x3A904C0", Offset = "0x3A904C0", VA = "0x3A904C0")]
	internal Task WriteIntegerValueAsync(ulong uvalue, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x3A904D0", Offset = "0x3A904D0", VA = "0x3A904D0")]
	private Task WriteEscapedStringAsync(string value, bool quote, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x3A90590", Offset = "0x3A90590", VA = "0x3A90590", Slot = "17")]
	public override Task WritePropertyNameAsync(string name, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x3A905A0", Offset = "0x3A905A0", VA = "0x3A905A0")]
	internal Task DoWritePropertyNameAsync(string name, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x3A90780", Offset = "0x3A90780", VA = "0x3A90780")]
	[AsyncStateMachine(typeof(_003CDoWritePropertyNameAsync_003Ed__30))]
	private Task DoWritePropertyNameAsync(Task task, string name, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x3A908C0", Offset = "0x3A908C0", VA = "0x3A908C0", Slot = "18")]
	public override Task WritePropertyNameAsync(string name, bool escape, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x3A908E0", Offset = "0x3A908E0", VA = "0x3A908E0")]
	[AsyncStateMachine(typeof(_003CDoWritePropertyNameAsync_003Ed__32))]
	internal Task DoWritePropertyNameAsync(string name, bool escape, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x3A90A10", Offset = "0x3A90A10", VA = "0x3A90A10", Slot = "19")]
	public override Task WriteStartArrayAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x3A90A20", Offset = "0x3A90A20", VA = "0x3A90A20")]
	internal Task DoWriteStartArrayAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x3A90AE0", Offset = "0x3A90AE0", VA = "0x3A90AE0")]
	[AsyncStateMachine(typeof(_003CDoWriteStartArrayAsync_003Ed__35))]
	internal Task DoWriteStartArrayAsync(Task task, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x3A90C00", Offset = "0x3A90C00", VA = "0x3A90C00", Slot = "23")]
	public override Task WriteStartObjectAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x3A90C10", Offset = "0x3A90C10", VA = "0x3A90C10")]
	internal Task DoWriteStartObjectAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x3A90CD0", Offset = "0x3A90CD0", VA = "0x3A90CD0")]
	[AsyncStateMachine(typeof(_003CDoWriteStartObjectAsync_003Ed__38))]
	internal Task DoWriteStartObjectAsync(Task task, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x3A90DF0", Offset = "0x3A90DF0", VA = "0x3A90DF0", Slot = "22")]
	public override Task WriteStartConstructorAsync(string name, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x3A90E00", Offset = "0x3A90E00", VA = "0x3A90E00")]
	[AsyncStateMachine(typeof(_003CDoWriteStartConstructorAsync_003Ed__40))]
	internal Task DoWriteStartConstructorAsync(string name, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x3A90F20", Offset = "0x3A90F20", VA = "0x3A90F20", Slot = "63")]
	public override Task WriteUndefinedAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x3A90F30", Offset = "0x3A90F30", VA = "0x3A90F30")]
	internal Task DoWriteUndefinedAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x3A91010", Offset = "0x3A91010", VA = "0x3A91010")]
	[AsyncStateMachine(typeof(_003CDoWriteUndefinedAsync_003Ed__43))]
	private Task DoWriteUndefinedAsync(Task task, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x3A91130", Offset = "0x3A91130", VA = "0x3A91130", Slot = "64")]
	public override Task WriteWhitespaceAsync(string ws, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x3A911C0", Offset = "0x3A911C0", VA = "0x3A911C0")]
	internal Task DoWriteWhitespaceAsync(string ws, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x3A91230", Offset = "0x3A91230", VA = "0x3A91230", Slot = "25")]
	public override Task WriteValueAsync(bool value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x3A912B0", Offset = "0x3A912B0", VA = "0x3A912B0")]
	internal Task DoWriteValueAsync(bool value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x3A91320", Offset = "0x3A91320", VA = "0x3A91320", Slot = "26")]
	public override Task WriteValueAsync(bool? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x3A91330", Offset = "0x3A91330", VA = "0x3A91330")]
	internal Task DoWriteValueAsync(bool? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x3A91420", Offset = "0x3A91420", VA = "0x3A91420", Slot = "27")]
	public override Task WriteValueAsync(byte value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x3A91450", Offset = "0x3A91450", VA = "0x3A91450", Slot = "28")]
	public override Task WriteValueAsync(byte? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x3A91460", Offset = "0x3A91460", VA = "0x3A91460")]
	internal Task DoWriteValueAsync(byte? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x3A91510", Offset = "0x3A91510", VA = "0x3A91510", Slot = "29")]
	public override Task WriteValueAsync(byte[]? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x3A91540", Offset = "0x3A91540", VA = "0x3A91540")]
	[AsyncStateMachine(typeof(_003CWriteValueNonNullAsync_003Ed__54))]
	internal Task WriteValueNonNullAsync(byte[] value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x3A91660", Offset = "0x3A91660", VA = "0x3A91660", Slot = "30")]
	public override Task WriteValueAsync(char value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x3A916E0", Offset = "0x3A916E0", VA = "0x3A916E0")]
	internal Task DoWriteValueAsync(char value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x3A91750", Offset = "0x3A91750", VA = "0x3A91750", Slot = "31")]
	public override Task WriteValueAsync(char? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x3A91760", Offset = "0x3A91760", VA = "0x3A91760")]
	internal Task DoWriteValueAsync(char? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x3A91840", Offset = "0x3A91840", VA = "0x3A91840", Slot = "32")]
	public override Task WriteValueAsync(DateTime value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x3A91850", Offset = "0x3A91850", VA = "0x3A91850")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__60))]
	internal Task DoWriteValueAsync(DateTime value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x3A91960", Offset = "0x3A91960", VA = "0x3A91960", Slot = "33")]
	public override Task WriteValueAsync(DateTime? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x3A91980", Offset = "0x3A91980", VA = "0x3A91980")]
	internal Task DoWriteValueAsync(DateTime? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x3A91A40", Offset = "0x3A91A40", VA = "0x3A91A40", Slot = "34")]
	public override Task WriteValueAsync(DateTimeOffset value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x3A91A50", Offset = "0x3A91A50", VA = "0x3A91A50")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__64))]
	internal Task DoWriteValueAsync(DateTimeOffset value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x3A91B80", Offset = "0x3A91B80", VA = "0x3A91B80", Slot = "35")]
	public override Task WriteValueAsync(DateTimeOffset? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x3A91B90", Offset = "0x3A91B90", VA = "0x3A91B90")]
	internal Task DoWriteValueAsync(DateTimeOffset? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x3A91C40", Offset = "0x3A91C40", VA = "0x3A91C40", Slot = "36")]
	public override Task WriteValueAsync(decimal value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x3A91CE0", Offset = "0x3A91CE0", VA = "0x3A91CE0")]
	internal Task DoWriteValueAsync(decimal value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x3A91D60", Offset = "0x3A91D60", VA = "0x3A91D60", Slot = "37")]
	public override Task WriteValueAsync(decimal? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x3A91D70", Offset = "0x3A91D70", VA = "0x3A91D70")]
	internal Task DoWriteValueAsync(decimal? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x3A91E70", Offset = "0x3A91E70", VA = "0x3A91E70", Slot = "38")]
	public override Task WriteValueAsync(double value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x3A91F20", Offset = "0x3A91F20", VA = "0x3A91F20")]
	internal Task WriteValueAsync(double value, bool nullable, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x3A91FC0", Offset = "0x3A91FC0", VA = "0x3A91FC0", Slot = "39")]
	public override Task WriteValueAsync(double? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x3A920E0", Offset = "0x3A920E0", VA = "0x3A920E0", Slot = "40")]
	public override Task WriteValueAsync(float value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x3A921A0", Offset = "0x3A921A0", VA = "0x3A921A0")]
	internal Task WriteValueAsync(float value, bool nullable, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x3A92240", Offset = "0x3A92240", VA = "0x3A92240", Slot = "41")]
	public override Task WriteValueAsync(float? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x3A92350", Offset = "0x3A92350", VA = "0x3A92350", Slot = "42")]
	public override Task WriteValueAsync(Guid value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x3A92360", Offset = "0x3A92360", VA = "0x3A92360")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__78))]
	internal Task DoWriteValueAsync(Guid value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x3A92480", Offset = "0x3A92480", VA = "0x3A92480", Slot = "43")]
	public override Task WriteValueAsync(Guid? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x3A92490", Offset = "0x3A92490", VA = "0x3A92490")]
	internal Task DoWriteValueAsync(Guid? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x3A92540", Offset = "0x3A92540", VA = "0x3A92540", Slot = "44")]
	public override Task WriteValueAsync(int value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x3A92570", Offset = "0x3A92570", VA = "0x3A92570", Slot = "45")]
	public override Task WriteValueAsync(int? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x3A92580", Offset = "0x3A92580", VA = "0x3A92580")]
	internal Task DoWriteValueAsync(int? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x3A92640", Offset = "0x3A92640", VA = "0x3A92640", Slot = "46")]
	public override Task WriteValueAsync(long value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x3A92670", Offset = "0x3A92670", VA = "0x3A92670", Slot = "47")]
	public override Task WriteValueAsync(long? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x3A92690", Offset = "0x3A92690", VA = "0x3A92690")]
	internal Task DoWriteValueAsync(long? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x3A92750", Offset = "0x3A92750", VA = "0x3A92750")]
	internal Task WriteValueAsync(BigInteger value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x3A92800", Offset = "0x3A92800", VA = "0x3A92800", Slot = "48")]
	public override Task WriteValueAsync(object? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x3A92930", Offset = "0x3A92930", VA = "0x3A92930", Slot = "49")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(sbyte value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x3A92970", Offset = "0x3A92970", VA = "0x3A92970", Slot = "50")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(sbyte? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x3A92980", Offset = "0x3A92980", VA = "0x3A92980")]
	internal Task DoWriteValueAsync(sbyte? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x3A92A40", Offset = "0x3A92A40", VA = "0x3A92A40", Slot = "51")]
	public override Task WriteValueAsync(short value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x3A92A80", Offset = "0x3A92A80", VA = "0x3A92A80", Slot = "52")]
	public override Task WriteValueAsync(short? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x3A92A90", Offset = "0x3A92A90", VA = "0x3A92A90")]
	internal Task DoWriteValueAsync(short? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x3A92B50", Offset = "0x3A92B50", VA = "0x3A92B50", Slot = "53")]
	public override Task WriteValueAsync(string? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x3A92B60", Offset = "0x3A92B60", VA = "0x3A92B60")]
	internal Task DoWriteValueAsync(string? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x3A92D00", Offset = "0x3A92D00", VA = "0x3A92D00")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__97))]
	private Task DoWriteValueAsync(Task task, string? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x3A92E40", Offset = "0x3A92E40", VA = "0x3A92E40", Slot = "54")]
	public override Task WriteValueAsync(TimeSpan value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x3A92E50", Offset = "0x3A92E50", VA = "0x3A92E50")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__99))]
	internal Task DoWriteValueAsync(TimeSpan value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x3A92F60", Offset = "0x3A92F60", VA = "0x3A92F60", Slot = "55")]
	public override Task WriteValueAsync(TimeSpan? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x3A92F80", Offset = "0x3A92F80", VA = "0x3A92F80")]
	internal Task DoWriteValueAsync(TimeSpan? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x3A93040", Offset = "0x3A93040", VA = "0x3A93040", Slot = "56")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(uint value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x3A93060", Offset = "0x3A93060", VA = "0x3A93060", Slot = "57")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(uint? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x3A93070", Offset = "0x3A93070", VA = "0x3A93070")]
	internal Task DoWriteValueAsync(uint? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x3A93120", Offset = "0x3A93120", VA = "0x3A93120", Slot = "58")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(ulong value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x3A93140", Offset = "0x3A93140", VA = "0x3A93140", Slot = "59")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(ulong? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x3A93160", Offset = "0x3A93160", VA = "0x3A93160")]
	internal Task DoWriteValueAsync(ulong? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x3A93220", Offset = "0x3A93220", VA = "0x3A93220", Slot = "60")]
	public override Task WriteValueAsync(Uri? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x3A932C0", Offset = "0x3A932C0", VA = "0x3A932C0")]
	internal Task WriteValueNotNullAsync(Uri value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x3A93410", Offset = "0x3A93410", VA = "0x3A93410")]
	[AsyncStateMachine(typeof(_003CWriteValueNotNullAsync_003Ed__110))]
	internal Task WriteValueNotNullAsync(Task task, Uri value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x3A93550", Offset = "0x3A93550", VA = "0x3A93550", Slot = "61")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(ushort value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x3A93570", Offset = "0x3A93570", VA = "0x3A93570", Slot = "62")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(ushort? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x3A93580", Offset = "0x3A93580", VA = "0x3A93580")]
	internal Task DoWriteValueAsync(ushort? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x3A93630", Offset = "0x3A93630", VA = "0x3A93630", Slot = "20")]
	public override Task WriteCommentAsync(string? text, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x3A93640", Offset = "0x3A93640", VA = "0x3A93640")]
	[AsyncStateMachine(typeof(_003CDoWriteCommentAsync_003Ed__115))]
	internal Task DoWriteCommentAsync(string? text, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x3A93760", Offset = "0x3A93760", VA = "0x3A93760", Slot = "13")]
	public override Task WriteEndArrayAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x3A93780", Offset = "0x3A93780", VA = "0x3A93780", Slot = "14")]
	public override Task WriteEndConstructorAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x3A937A0", Offset = "0x3A937A0", VA = "0x3A937A0", Slot = "15")]
	public override Task WriteEndObjectAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x3A937C0", Offset = "0x3A937C0", VA = "0x3A937C0", Slot = "21")]
	public override Task WriteRawValueAsync(string? json, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x3A937D0", Offset = "0x3A937D0", VA = "0x3A937D0")]
	internal Task DoWriteRawValueAsync(string? json, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x3A93890", Offset = "0x3A93890", VA = "0x3A93890")]
	[AsyncStateMachine(typeof(_003CDoWriteRawValueAsync_003Ed__121))]
	private Task DoWriteRawValueAsync(Task task, string? json, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x3A939D0", Offset = "0x3A939D0", VA = "0x3A939D0")]
	internal char[] EnsureWriteBuffer(int length, int copyTo)
	{
		return null;
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x3A93D90", Offset = "0x3A93D90", VA = "0x3A93D90")]
	public JsonTextWriter(TextWriter textWriter)
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x3A93F20", Offset = "0x3A93F20", VA = "0x3A93F20", Slot = "66")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x3A93F50", Offset = "0x3A93F50", VA = "0x3A93F50", Slot = "67")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x3A93FD0", Offset = "0x3A93FD0", VA = "0x3A93FD0")]
	private void CloseBufferAndWriter()
	{
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x3A94040", Offset = "0x3A94040", VA = "0x3A94040", Slot = "68")]
	public override void WriteStartObject()
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x3A94080", Offset = "0x3A94080", VA = "0x3A94080", Slot = "70")]
	public override void WriteStartArray()
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x3A940C0", Offset = "0x3A940C0", VA = "0x3A940C0", Slot = "72")]
	public override void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x3A94170", Offset = "0x3A94170", VA = "0x3A94170", Slot = "78")]
	protected override void WriteEnd(JsonToken token)
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x3A94280", Offset = "0x3A94280", VA = "0x3A94280", Slot = "74")]
	public override void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x3A943B0", Offset = "0x3A943B0", VA = "0x3A943B0", Slot = "75")]
	public override void WritePropertyName(string name, bool escape)
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x3A94490", Offset = "0x3A94490", VA = "0x3A94490", Slot = "65")]
	internal override void OnStringEscapeHandlingChanged()
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x3A93CC0", Offset = "0x3A93CC0", VA = "0x3A93CC0")]
	private void UpdateCharEscapeFlags()
	{
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x3A94500", Offset = "0x3A94500", VA = "0x3A94500", Slot = "79")]
	protected override void WriteIndent()
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x3A8FA40", Offset = "0x3A8FA40", VA = "0x3A8FA40")]
	private int SetIndentChars()
	{
		return default(int);
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x3A94620", Offset = "0x3A94620", VA = "0x3A94620", Slot = "80")]
	protected override void WriteValueDelimiter()
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x3A94650", Offset = "0x3A94650", VA = "0x3A94650", Slot = "81")]
	protected override void WriteIndentSpace()
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x3A94680", Offset = "0x3A94680", VA = "0x3A94680")]
	private void WriteValueInternal(string value, JsonToken token)
	{
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x3A946B0", Offset = "0x3A946B0", VA = "0x3A946B0", Slot = "123")]
	public override void WriteValue(object? value)
	{
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x3A947A0", Offset = "0x3A947A0", VA = "0x3A947A0", Slot = "82")]
	public override void WriteNull()
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x3A94820", Offset = "0x3A94820", VA = "0x3A94820", Slot = "83")]
	public override void WriteUndefined()
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x3A948A0", Offset = "0x3A948A0", VA = "0x3A948A0", Slot = "84")]
	public override void WriteRaw(string? json)
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x3A948E0", Offset = "0x3A948E0", VA = "0x3A948E0", Slot = "86")]
	public override void WriteValue(string? value)
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x3A942D0", Offset = "0x3A942D0", VA = "0x3A942D0")]
	private void WriteEscapedString(string value, bool quote)
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x3A949C0", Offset = "0x3A949C0", VA = "0x3A949C0", Slot = "87")]
	public override void WriteValue(int value)
	{
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x3A94AA0", Offset = "0x3A94AA0", VA = "0x3A94AA0", Slot = "88")]
	[CLSCompliant(false)]
	public override void WriteValue(uint value)
	{
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x3A94B80", Offset = "0x3A94B80", VA = "0x3A94B80", Slot = "89")]
	public override void WriteValue(long value)
	{
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x3A94BB0", Offset = "0x3A94BB0", VA = "0x3A94BB0", Slot = "90")]
	[CLSCompliant(false)]
	public override void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x3A94CB0", Offset = "0x3A94CB0", VA = "0x3A94CB0", Slot = "91")]
	public override void WriteValue(float value)
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x3A94D60", Offset = "0x3A94D60", VA = "0x3A94D60", Slot = "108")]
	public override void WriteValue(float? value)
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x3A94E50", Offset = "0x3A94E50", VA = "0x3A94E50", Slot = "92")]
	public override void WriteValue(double value)
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x3A94F00", Offset = "0x3A94F00", VA = "0x3A94F00", Slot = "109")]
	public override void WriteValue(double? value)
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x3A94FF0", Offset = "0x3A94FF0", VA = "0x3A94FF0", Slot = "93")]
	public override void WriteValue(bool value)
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x3A95080", Offset = "0x3A95080", VA = "0x3A95080", Slot = "94")]
	public override void WriteValue(short value)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x3A950B0", Offset = "0x3A950B0", VA = "0x3A950B0", Slot = "95")]
	[CLSCompliant(false)]
	public override void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x3A950E0", Offset = "0x3A950E0", VA = "0x3A950E0", Slot = "96")]
	public override void WriteValue(char value)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x3A95160", Offset = "0x3A95160", VA = "0x3A95160", Slot = "97")]
	public override void WriteValue(byte value)
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x3A95190", Offset = "0x3A95190", VA = "0x3A95190", Slot = "98")]
	[CLSCompliant(false)]
	public override void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x3A951C0", Offset = "0x3A951C0", VA = "0x3A951C0", Slot = "99")]
	public override void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x3A95250", Offset = "0x3A95250", VA = "0x3A95250", Slot = "100")]
	public override void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x3A953D0", Offset = "0x3A953D0", VA = "0x3A953D0")]
	private int WriteValueToBuffer(DateTime value)
	{
		return default(int);
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x3A95520", Offset = "0x3A95520", VA = "0x3A95520", Slot = "121")]
	public override void WriteValue(byte[]? value)
	{
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x3A956A0", Offset = "0x3A956A0", VA = "0x3A956A0", Slot = "101")]
	public override void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x3A957F0", Offset = "0x3A957F0", VA = "0x3A957F0")]
	private int WriteValueToBuffer(DateTimeOffset value)
	{
		return default(int);
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x3A959C0", Offset = "0x3A959C0", VA = "0x3A959C0", Slot = "102")]
	public override void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x3A95AB0", Offset = "0x3A95AB0", VA = "0x3A95AB0", Slot = "103")]
	public override void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x3A95BB0", Offset = "0x3A95BB0", VA = "0x3A95BB0", Slot = "122")]
	public override void WriteValue(Uri? value)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x3A95C60", Offset = "0x3A95C60", VA = "0x3A95C60", Slot = "124")]
	public override void WriteComment(string? text)
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x3A95D10", Offset = "0x3A95D10", VA = "0x3A95D10", Slot = "125")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x3A94980", Offset = "0x3A94980", VA = "0x3A94980")]
	private void EnsureWriteBuffer()
	{
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x3A94AD0", Offset = "0x3A94AD0", VA = "0x3A94AD0")]
	private void WriteIntegerValue(long value)
	{
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x3A94C40", Offset = "0x3A94C40", VA = "0x3A94C40")]
	private void WriteIntegerValue(ulong value, bool negative)
	{
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x3A901C0", Offset = "0x3A901C0", VA = "0x3A901C0")]
	private int WriteNumberToBuffer(ulong value, bool negative)
	{
		return default(int);
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x3A949F0", Offset = "0x3A949F0", VA = "0x3A949F0")]
	private void WriteIntegerValue(int value)
	{
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x3A95E30", Offset = "0x3A95E30", VA = "0x3A95E30")]
	private void WriteIntegerValue(uint value, bool negative)
	{
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x3A95D50", Offset = "0x3A95D50", VA = "0x3A95D50")]
	private int WriteNumberToBuffer(uint value, bool negative)
	{
		return default(int);
	}
}
