// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonTextWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x1C10820", Offset = "0x1C0EE20", VA = "0x181C10820", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000376")]
		[Address(RVA = "0x1C10A30", Offset = "0x1C0F030", VA = "0x181C10A30", Slot = "5")]
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
		[Address(RVA = "0x1C10A90", Offset = "0x1C0F090", VA = "0x181C10A90", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000378")]
		[Address(RVA = "0x1C10DB0", Offset = "0x1C0F3B0", VA = "0x181C10DB0", Slot = "5")]
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
		[Address(RVA = "0x1C10E10", Offset = "0x1C0F410", VA = "0x181C10E10", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600037A")]
		[Address(RVA = "0x1C112E0", Offset = "0x1C0F8E0", VA = "0x181C112E0", Slot = "5")]
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
		[Address(RVA = "0x1C11340", Offset = "0x1C0F940", VA = "0x181C11340", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600037C")]
		[Address(RVA = "0x1C11690", Offset = "0x1C0FC90", VA = "0x181C11690", Slot = "5")]
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
		[Address(RVA = "0x1C116F0", Offset = "0x1C0FCF0", VA = "0x181C116F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600037E")]
		[Address(RVA = "0x1C11D80", Offset = "0x1C10380", VA = "0x181C11D80", Slot = "5")]
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
		[Address(RVA = "0x1C11DE0", Offset = "0x1C103E0", VA = "0x181C11DE0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000380")]
		[Address(RVA = "0x1C12030", Offset = "0x1C10630", VA = "0x181C12030", Slot = "5")]
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
		[Address(RVA = "0x1C12090", Offset = "0x1C10690", VA = "0x181C12090", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000382")]
		[Address(RVA = "0x1C12310", Offset = "0x1C10910", VA = "0x181C12310", Slot = "5")]
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
		[Address(RVA = "0x1C12370", Offset = "0x1C10970", VA = "0x181C12370", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000384")]
		[Address(RVA = "0x1C12810", Offset = "0x1C10E10", VA = "0x181C12810", Slot = "5")]
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
		[Address(RVA = "0x1C12870", Offset = "0x1C10E70", VA = "0x181C12870", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000386")]
		[Address(RVA = "0x1C12AF0", Offset = "0x1C110F0", VA = "0x181C12AF0", Slot = "5")]
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
		[Address(RVA = "0x1C12B50", Offset = "0x1C11150", VA = "0x181C12B50", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000388")]
		[Address(RVA = "0x1C12E00", Offset = "0x1C11400", VA = "0x181C12E00", Slot = "5")]
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
		[Address(RVA = "0x1C12E60", Offset = "0x1C11460", VA = "0x181C12E60", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600038A")]
		[Address(RVA = "0x1C134C0", Offset = "0x1C11AC0", VA = "0x181C134C0", Slot = "5")]
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
		[Address(RVA = "0x1C13520", Offset = "0x1C11B20", VA = "0x181C13520", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600038C")]
		[Address(RVA = "0x1C13B50", Offset = "0x1C12150", VA = "0x181C13B50", Slot = "5")]
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
		[Address(RVA = "0x1C13BB0", Offset = "0x1C121B0", VA = "0x181C13BB0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600038E")]
		[Address(RVA = "0x1C14080", Offset = "0x1C12680", VA = "0x181C14080", Slot = "5")]
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
		[Address(RVA = "0x1C140E0", Offset = "0x1C126E0", VA = "0x181C140E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000390")]
		[Address(RVA = "0x1C143C0", Offset = "0x1C129C0", VA = "0x181C143C0", Slot = "5")]
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
		[Address(RVA = "0x1C14420", Offset = "0x1C12A20", VA = "0x181C14420", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000392")]
		[Address(RVA = "0x1C14920", Offset = "0x1C12F20", VA = "0x181C14920", Slot = "5")]
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
		[Address(RVA = "0x1C15AF0", Offset = "0x1C140F0", VA = "0x181C15AF0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000394")]
		[Address(RVA = "0x1C15E80", Offset = "0x1C14480", VA = "0x181C15E80", Slot = "5")]
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
		[Address(RVA = "0x1C15EE0", Offset = "0x1C144E0", VA = "0x181C15EE0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000396")]
		[Address(RVA = "0x1C16130", Offset = "0x1C14730", VA = "0x181C16130", Slot = "5")]
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
		[Address(RVA = "0x1C16190", Offset = "0x1C14790", VA = "0x181C16190", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000398")]
		[Address(RVA = "0x1C16400", Offset = "0x1C14A00", VA = "0x181C16400", Slot = "5")]
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
		[Address(RVA = "0x1C16460", Offset = "0x1C14A60", VA = "0x181C16460", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600039A")]
		[Address(RVA = "0x1C169E0", Offset = "0x1C14FE0", VA = "0x181C169E0", Slot = "5")]
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
		[Address(RVA = "0x1C16A40", Offset = "0x1C15040", VA = "0x181C16A40", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600039C")]
		[Address(RVA = "0x1C16CB0", Offset = "0x1C152B0", VA = "0x181C16CB0", Slot = "5")]
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
		[Address(RVA = "0x1BF1AE0", Offset = "0x1BF00E0", VA = "0x181BF1AE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000085")]
	public IArrayPool<char>? ArrayPool
	{
		[Token(Token = "0x6000334")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000335")]
		[Address(RVA = "0x1BF1BA0", Offset = "0x1BF01A0", VA = "0x181BF1BA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public int Indentation
	{
		[Token(Token = "0x6000336")]
		[Address(RVA = "0x1BF1B70", Offset = "0x1BF0170", VA = "0x181BF1B70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000337")]
		[Address(RVA = "0x1BF1C50", Offset = "0x1BF0250", VA = "0x181BF1C50")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public char QuoteChar
	{
		[Token(Token = "0x6000338")]
		[Address(RVA = "0x1BF1B80", Offset = "0x1BF0180", VA = "0x181BF1B80")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x6000339")]
		[Address(RVA = "0x1BF1CC0", Offset = "0x1BF02C0", VA = "0x181BF1CC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public char IndentChar
	{
		[Token(Token = "0x600033A")]
		[Address(RVA = "0x1BF1B60", Offset = "0x1BF0160", VA = "0x181BF1B60")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x600033B")]
		[Address(RVA = "0x1BF1C20", Offset = "0x1BF0220", VA = "0x181BF1C20")]
		set
		{
		}
	}

	[Token(Token = "0x17000089")]
	public bool QuoteName
	{
		[Token(Token = "0x600033C")]
		[Address(RVA = "0x1BF1B90", Offset = "0x1BF0190", VA = "0x181BF1B90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600033D")]
		[Address(RVA = "0x1BF1D40", Offset = "0x1BF0340", VA = "0x181BF1D40")]
		set
		{
		}
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x1BEB910", Offset = "0x1BE9F10", VA = "0x181BEB910", Slot = "6")]
	public override Task FlushAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x1BE8E10", Offset = "0x1BE7410", VA = "0x181BE8E10")]
	internal Task DoFlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x1BEFAA0", Offset = "0x1BEE0A0", VA = "0x181BEFAA0", Slot = "9")]
	protected override Task WriteValueDelimiterAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x1BEB6F0", Offset = "0x1BE9CF0", VA = "0x181BEB6F0")]
	internal Task DoWriteValueDelimiterAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x1BEBE40", Offset = "0x1BEA440", VA = "0x181BEBE40", Slot = "7")]
	protected override Task WriteEndAsync(JsonToken token, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x1BE8FB0", Offset = "0x1BE75B0", VA = "0x181BE8FB0")]
	internal Task DoWriteEndAsync(JsonToken token, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x1BE8A40", Offset = "0x1BE7040", VA = "0x181BE8A40", Slot = "5")]
	public override Task CloseAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x1BE8D20", Offset = "0x1BE7320", VA = "0x181BE8D20")]
	[AsyncStateMachine(typeof(_003CDoCloseAsync_003Ed__8))]
	internal Task DoCloseAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x1BE8B60", Offset = "0x1BE7160", VA = "0x181BE8B60")]
	[AsyncStateMachine(typeof(_003CCloseBufferAndWriterAsync_003Ed__9))]
	private Task CloseBufferAndWriterAsync()
	{
		return null;
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x1BEBE20", Offset = "0x1BEA420", VA = "0x181BEBE20", Slot = "12")]
	public override Task WriteEndAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x1BEC2F0", Offset = "0x1BEA8F0", VA = "0x181BEC2F0", Slot = "8")]
	protected override Task WriteIndentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x1BE90F0", Offset = "0x1BE76F0", VA = "0x181BE90F0")]
	internal Task DoWriteIndentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x1BEC4D0", Offset = "0x1BEAAD0", VA = "0x181BEC4D0")]
	[AsyncStateMachine(typeof(_003CWriteIndentAsync_003Ed__13))]
	private Task WriteIndentAsync(int currentIndentCount, int newLineLen, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x1BEFC70", Offset = "0x1BEE270", VA = "0x181BEFC70")]
	private Task WriteValueInternalAsync(JsonToken token, string value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x1BEFB50", Offset = "0x1BEE150", VA = "0x181BEFB50")]
	[AsyncStateMachine(typeof(_003CWriteValueInternalAsync_003Ed__15))]
	private Task WriteValueInternalAsync(Task task, string value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x1BEC5D0", Offset = "0x1BEABD0", VA = "0x181BEC5D0", Slot = "10")]
	protected override Task WriteIndentSpaceAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x1BE92A0", Offset = "0x1BE78A0", VA = "0x181BE92A0")]
	internal Task DoWriteIndentSpaceAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x1BED360", Offset = "0x1BEB960", VA = "0x181BED360", Slot = "11")]
	public override Task WriteRawAsync(string? json, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x1BE9800", Offset = "0x1BE7E00", VA = "0x181BE9800")]
	internal Task DoWriteRawAsync(string? json, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x1BECDD0", Offset = "0x1BEB3D0", VA = "0x181BECDD0", Slot = "16")]
	public override Task WriteNullAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x1BE9310", Offset = "0x1BE7910", VA = "0x181BE9310")]
	internal Task DoWriteNullAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x1BEBD20", Offset = "0x1BEA320", VA = "0x181BEBD20")]
	private Task WriteDigitsAsync(ulong uvalue, bool negative, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x1BEC7A0", Offset = "0x1BEADA0", VA = "0x181BEC7A0")]
	private Task WriteIntegerValueAsync(ulong uvalue, bool negative, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x1BECA30", Offset = "0x1BEB030", VA = "0x181BECA30")]
	[AsyncStateMachine(typeof(_003CWriteIntegerValueAsync_003Ed__24))]
	private Task WriteIntegerValueAsync(Task task, ulong uvalue, bool negative, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x1BEC9F0", Offset = "0x1BEAFF0", VA = "0x181BEC9F0")]
	internal Task WriteIntegerValueAsync(long value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x1BECB60", Offset = "0x1BEB160", VA = "0x181BECB60")]
	internal Task WriteIntegerValueAsync(ulong uvalue, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x1BEC130", Offset = "0x1BEA730", VA = "0x181BEC130")]
	private Task WriteEscapedStringAsync(string value, bool quote, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x1BED200", Offset = "0x1BEB800", VA = "0x181BED200", Slot = "17")]
	public override Task WritePropertyNameAsync(string name, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x1BE95C0", Offset = "0x1BE7BC0", VA = "0x181BE95C0")]
	internal Task DoWritePropertyNameAsync(string name, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x1BE94A0", Offset = "0x1BE7AA0", VA = "0x181BE94A0")]
	[AsyncStateMachine(typeof(_003CDoWritePropertyNameAsync_003Ed__30))]
	private Task DoWritePropertyNameAsync(Task task, string name, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x1BED0B0", Offset = "0x1BEB6B0", VA = "0x181BED0B0", Slot = "18")]
	public override Task WritePropertyNameAsync(string name, bool escape, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x1BE9390", Offset = "0x1BE7990", VA = "0x181BE9390")]
	[AsyncStateMachine(typeof(_003CDoWritePropertyNameAsync_003Ed__32))]
	internal Task DoWritePropertyNameAsync(string name, bool escape, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x1BED620", Offset = "0x1BEBC20", VA = "0x181BED620", Slot = "19")]
	public override Task WriteStartArrayAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x1BE9B30", Offset = "0x1BE8130", VA = "0x181BE9B30")]
	internal Task DoWriteStartArrayAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x1BE9CE0", Offset = "0x1BE82E0", VA = "0x181BE9CE0")]
	[AsyncStateMachine(typeof(_003CDoWriteStartArrayAsync_003Ed__35))]
	internal Task DoWriteStartArrayAsync(Task task, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x1BEDA40", Offset = "0x1BEC040", VA = "0x181BEDA40", Slot = "23")]
	public override Task WriteStartObjectAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x1BE9F20", Offset = "0x1BE8520", VA = "0x181BE9F20")]
	internal Task DoWriteStartObjectAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x1BEA0D0", Offset = "0x1BE86D0", VA = "0x181BEA0D0")]
	[AsyncStateMachine(typeof(_003CDoWriteStartObjectAsync_003Ed__38))]
	internal Task DoWriteStartObjectAsync(Task task, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x1BED860", Offset = "0x1BEBE60", VA = "0x181BED860", Slot = "22")]
	public override Task WriteStartConstructorAsync(string name, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x1BE9E00", Offset = "0x1BE8400", VA = "0x181BE9E00")]
	[AsyncStateMachine(typeof(_003CDoWriteStartConstructorAsync_003Ed__40))]
	internal Task DoWriteStartConstructorAsync(string name, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x1BEDC80", Offset = "0x1BEC280", VA = "0x181BEDC80", Slot = "63")]
	public override Task WriteUndefinedAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x1BEA1F0", Offset = "0x1BE87F0", VA = "0x181BEA1F0")]
	internal Task DoWriteUndefinedAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x1BEA3C0", Offset = "0x1BE89C0", VA = "0x181BEA3C0")]
	[AsyncStateMachine(typeof(_003CDoWriteUndefinedAsync_003Ed__43))]
	private Task DoWriteUndefinedAsync(Task task, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x1BF18B0", Offset = "0x1BEFEB0", VA = "0x181BF18B0", Slot = "64")]
	public override Task WriteWhitespaceAsync(string ws, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x1BEB760", Offset = "0x1BE9D60", VA = "0x181BEB760")]
	internal Task DoWriteWhitespaceAsync(string ws, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x1BEE730", Offset = "0x1BECD30", VA = "0x181BEE730", Slot = "25")]
	public override Task WriteValueAsync(bool value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x1BEB120", Offset = "0x1BE9720", VA = "0x181BEB120")]
	internal Task DoWriteValueAsync(bool value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x1BEF0F0", Offset = "0x1BED6F0", VA = "0x181BEF0F0", Slot = "26")]
	public override Task WriteValueAsync(bool? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x1BEB090", Offset = "0x1BE9690", VA = "0x181BEB090")]
	internal Task DoWriteValueAsync(bool? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x1BEF530", Offset = "0x1BEDB30", VA = "0x181BEF530", Slot = "27")]
	public override Task WriteValueAsync(byte value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x1BEF040", Offset = "0x1BED640", VA = "0x181BEF040", Slot = "28")]
	public override Task WriteValueAsync(byte? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x1BEB000", Offset = "0x1BE9600", VA = "0x181BEB000")]
	internal Task DoWriteValueAsync(byte? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x1BEECB0", Offset = "0x1BED2B0", VA = "0x181BEECB0", Slot = "29")]
	public override Task WriteValueAsync(byte[]? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x1BEFE50", Offset = "0x1BEE450", VA = "0x181BEFE50")]
	[AsyncStateMachine(typeof(_003CWriteValueNonNullAsync_003Ed__54))]
	internal Task WriteValueNonNullAsync(byte[] value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x1BEE850", Offset = "0x1BECE50", VA = "0x181BEE850", Slot = "30")]
	public override Task WriteValueAsync(char value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x1BEAE40", Offset = "0x1BE9440", VA = "0x181BEAE40")]
	internal Task DoWriteValueAsync(char value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x1BEF490", Offset = "0x1BEDA90", VA = "0x181BEF490", Slot = "31")]
	public override Task WriteValueAsync(char? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x1BEA960", Offset = "0x1BE8F60", VA = "0x181BEA960")]
	internal Task DoWriteValueAsync(char? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x1BEEC60", Offset = "0x1BED260", VA = "0x181BEEC60", Slot = "32")]
	public override Task WriteValueAsync(DateTime value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x1BEAD30", Offset = "0x1BE9330", VA = "0x181BEAD30")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__60))]
	internal Task DoWriteValueAsync(DateTime value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x1BEE410", Offset = "0x1BECA10", VA = "0x181BEE410", Slot = "33")]
	public override Task WriteValueAsync(DateTime? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x1BEB1A0", Offset = "0x1BE97A0", VA = "0x181BEB1A0")]
	internal Task DoWriteValueAsync(DateTime? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x1BEE870", Offset = "0x1BECE70", VA = "0x181BEE870", Slot = "34")]
	public override Task WriteValueAsync(DateTimeOffset value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x1BEAB00", Offset = "0x1BE9100", VA = "0x181BEAB00")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__64))]
	internal Task DoWriteValueAsync(DateTimeOffset value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x1BEEE00", Offset = "0x1BED400", VA = "0x181BEEE00", Slot = "35")]
	public override Task WriteValueAsync(DateTimeOffset? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x1BEA4E0", Offset = "0x1BE8AE0", VA = "0x181BEA4E0")]
	internal Task DoWriteValueAsync(DateTimeOffset? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x1BEE150", Offset = "0x1BEC750", VA = "0x181BEE150", Slot = "36")]
	public override Task WriteValueAsync(decimal value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x1BEB4B0", Offset = "0x1BE9AB0", VA = "0x181BEB4B0")]
	internal Task DoWriteValueAsync(decimal value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x1BEDFD0", Offset = "0x1BEC5D0", VA = "0x181BEDFD0", Slot = "37")]
	public override Task WriteValueAsync(decimal? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x1BEB220", Offset = "0x1BE9820", VA = "0x181BEB220")]
	internal Task DoWriteValueAsync(decimal? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x1BEEEE0", Offset = "0x1BED4E0", VA = "0x181BEEEE0", Slot = "38")]
	public override Task WriteValueAsync(double value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x1BEDF20", Offset = "0x1BEC520", VA = "0x181BEDF20")]
	internal Task WriteValueAsync(double value, bool nullable, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x1BEF570", Offset = "0x1BEDB70", VA = "0x181BEF570", Slot = "39")]
	public override Task WriteValueAsync(double? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x1BEEC80", Offset = "0x1BED280", VA = "0x181BEEC80", Slot = "40")]
	public override Task WriteValueAsync(float value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x1BEEF10", Offset = "0x1BED510", VA = "0x181BEEF10")]
	internal Task WriteValueAsync(float value, bool nullable, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x1BEEBA0", Offset = "0x1BED1A0", VA = "0x181BEEBA0", Slot = "41")]
	public override Task WriteValueAsync(float? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x1BEF390", Offset = "0x1BED990", VA = "0x181BEF390", Slot = "42")]
	public override Task WriteValueAsync(Guid value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x1BEB3A0", Offset = "0x1BE99A0", VA = "0x181BEB3A0")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__78))]
	internal Task DoWriteValueAsync(Guid value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x1BEE5A0", Offset = "0x1BECBA0", VA = "0x181BEE5A0", Slot = "43")]
	public override Task WriteValueAsync(Guid? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x1BEB540", Offset = "0x1BE9B40", VA = "0x181BEB540")]
	internal Task DoWriteValueAsync(Guid? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x1BEF990", Offset = "0x1BEDF90", VA = "0x181BEF990", Slot = "44")]
	public override Task WriteValueAsync(int value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x1BEF9E0", Offset = "0x1BEDFE0", VA = "0x181BEF9E0", Slot = "45")]
	public override Task WriteValueAsync(int? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x1BEB300", Offset = "0x1BE9900", VA = "0x181BEB300")]
	internal Task DoWriteValueAsync(int? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x1BEF300", Offset = "0x1BED900", VA = "0x181BEF300", Slot = "46")]
	public override Task WriteValueAsync(long value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x1BEF3C0", Offset = "0x1BED9C0", VA = "0x181BEF3C0", Slot = "47")]
	public override Task WriteValueAsync(long? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x1BEA5F0", Offset = "0x1BE8BF0", VA = "0x181BEA5F0")]
	internal Task DoWriteValueAsync(long? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x1BEEAF0", Offset = "0x1BED0F0", VA = "0x181BEEAF0")]
	internal Task WriteValueAsync(BigInteger value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x1BEE210", Offset = "0x1BEC810", VA = "0x181BEE210", Slot = "48")]
	public override Task WriteValueAsync(object? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x1BEEFF0", Offset = "0x1BED5F0", VA = "0x181BEEFF0", Slot = "49")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(sbyte value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x1BEF240", Offset = "0x1BED840", VA = "0x181BEF240", Slot = "50")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(sbyte? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x1BEAF50", Offset = "0x1BE9550", VA = "0x181BEAF50")]
	internal Task DoWriteValueAsync(sbyte? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x1BEE100", Offset = "0x1BEC700", VA = "0x181BEE100", Slot = "51")]
	public override Task WriteValueAsync(short value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x1BEE670", Offset = "0x1BECC70", VA = "0x181BEE670", Slot = "52")]
	public override Task WriteValueAsync(short? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x1BEA690", Offset = "0x1BE8C90", VA = "0x181BEA690")]
	internal Task DoWriteValueAsync(short? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x1BEF740", Offset = "0x1BEDD40", VA = "0x181BEF740", Slot = "53")]
	public override Task WriteValueAsync(string? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x1BEA740", Offset = "0x1BE8D40", VA = "0x181BEA740")]
	internal Task DoWriteValueAsync(string? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x1BEAC10", Offset = "0x1BE9210", VA = "0x181BEAC10")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__97))]
	private Task DoWriteValueAsync(Task task, string? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x1BEF640", Offset = "0x1BEDC40", VA = "0x181BEF640", Slot = "54")]
	public override Task WriteValueAsync(TimeSpan value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x1BEA9F0", Offset = "0x1BE8FF0", VA = "0x181BEA9F0")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__99))]
	internal Task DoWriteValueAsync(TimeSpan value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x1BEF660", Offset = "0x1BEDC60", VA = "0x181BEF660", Slot = "55")]
	public override Task WriteValueAsync(TimeSpan? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x1BEA570", Offset = "0x1BE8B70", VA = "0x181BEA570")]
	internal Task DoWriteValueAsync(TimeSpan? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x1BEE750", Offset = "0x1BECD50", VA = "0x181BEE750", Slot = "56")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(uint value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x1BEE4F0", Offset = "0x1BECAF0", VA = "0x181BEE4F0", Slot = "57")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(uint? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x1BEAEC0", Offset = "0x1BE94C0", VA = "0x181BEAEC0")]
	internal Task DoWriteValueAsync(uint? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x1BEEFC0", Offset = "0x1BED5C0", VA = "0x181BEEFC0", Slot = "58")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(ulong value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x1BEE790", Offset = "0x1BECD90", VA = "0x181BEE790", Slot = "59")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(ulong? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x1BEB660", Offset = "0x1BE9C60", VA = "0x181BEB660")]
	internal Task DoWriteValueAsync(ulong? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x1BEE8A0", Offset = "0x1BECEA0", VA = "0x181BEE8A0", Slot = "60")]
	public override Task WriteValueAsync(Uri? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x1BF0090", Offset = "0x1BEE690", VA = "0x181BF0090")]
	internal Task WriteValueNotNullAsync(Uri value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x1BEFF70", Offset = "0x1BEE570", VA = "0x181BEFF70")]
	[AsyncStateMachine(typeof(_003CWriteValueNotNullAsync_003Ed__110))]
	internal Task WriteValueNotNullAsync(Task task, Uri value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x1BEF350", Offset = "0x1BED950", VA = "0x181BEF350", Slot = "61")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(ushort value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x1BEF190", Offset = "0x1BED790", VA = "0x181BEF190", Slot = "62")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(ushort? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x1BEB5D0", Offset = "0x1BE9BD0", VA = "0x181BEB5D0")]
	internal Task DoWriteValueAsync(ushort? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x1BEBB40", Offset = "0x1BEA140", VA = "0x181BEBB40", Slot = "20")]
	public override Task WriteCommentAsync(string? text, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x1BE8E90", Offset = "0x1BE7490", VA = "0x181BE8E90")]
	[AsyncStateMachine(typeof(_003CDoWriteCommentAsync_003Ed__115))]
	internal Task DoWriteCommentAsync(string? text, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x1BEBE00", Offset = "0x1BEA400", VA = "0x181BEBE00", Slot = "13")]
	public override Task WriteEndArrayAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x1BEBFE0", Offset = "0x1BEA5E0", VA = "0x181BEBFE0", Slot = "14")]
	public override Task WriteEndConstructorAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x1BEC000", Offset = "0x1BEA600", VA = "0x181BEC000", Slot = "15")]
	public override Task WriteEndObjectAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x1BED3F0", Offset = "0x1BEB9F0", VA = "0x181BED3F0", Slot = "21")]
	public override Task WriteRawValueAsync(string? json, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x1BE9870", Offset = "0x1BE7E70", VA = "0x181BE9870")]
	internal Task DoWriteRawValueAsync(string? json, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x1BE9A10", Offset = "0x1BE8010", VA = "0x181BE9A10")]
	[AsyncStateMachine(typeof(_003CDoWriteRawValueAsync_003Ed__121))]
	private Task DoWriteRawValueAsync(Task task, string? json, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x1BEB7E0", Offset = "0x1BE9DE0", VA = "0x181BEB7E0")]
	internal char[] EnsureWriteBuffer(int length, int copyTo)
	{
		return null;
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x1BF19A0", Offset = "0x1BEFFA0", VA = "0x181BF19A0")]
	public JsonTextWriter(TextWriter textWriter)
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x1A3A320", Offset = "0x1A38920", VA = "0x181A3A320", Slot = "66")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x1BE8CA0", Offset = "0x1BE72A0", VA = "0x181BE8CA0", Slot = "67")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x1BE8C30", Offset = "0x1BE7230", VA = "0x181BE8C30")]
	private void CloseBufferAndWriter()
	{
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x1BEDC30", Offset = "0x1BEC230", VA = "0x181BEDC30", Slot = "68")]
	public override void WriteStartObject()
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x1BED810", Offset = "0x1BEBE10", VA = "0x181BED810", Slot = "70")]
	public override void WriteStartArray()
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x1BED990", Offset = "0x1BEBF90", VA = "0x181BED990", Slot = "72")]
	public override void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x1BEC020", Offset = "0x1BEA620", VA = "0x181BEC020", Slot = "78")]
	protected override void WriteEnd(JsonToken token)
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x1BED220", Offset = "0x1BEB820", VA = "0x181BED220", Slot = "74")]
	public override void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x1BED280", Offset = "0x1BEB880", VA = "0x181BED280", Slot = "75")]
	public override void WritePropertyName(string name, bool escape)
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x1BEB9B0", Offset = "0x1BE9FB0", VA = "0x181BEB9B0", Slot = "65")]
	internal override void OnStringEscapeHandlingChanged()
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x1BEBAC0", Offset = "0x1BEA0C0", VA = "0x181BEBAC0")]
	private void UpdateCharEscapeFlags()
	{
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x1BEC680", Offset = "0x1BEAC80", VA = "0x181BEC680", Slot = "79")]
	protected override void WriteIndent()
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x1BEB9C0", Offset = "0x1BE9FC0", VA = "0x181BEB9C0")]
	private int SetIndentChars()
	{
		return default(int);
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x1BEFB20", Offset = "0x1BEE120", VA = "0x181BEFB20", Slot = "80")]
	protected override void WriteValueDelimiter()
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x1BEC650", Offset = "0x1BEAC50", VA = "0x181BEC650", Slot = "81")]
	protected override void WriteIndentSpace()
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x1BEFE20", Offset = "0x1BEE420", VA = "0x181BEFE20")]
	private void WriteValueInternal(string value, JsonToken token)
	{
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x1BF0680", Offset = "0x1BEEC80", VA = "0x181BF0680", Slot = "123")]
	public override void WriteValue(object? value)
	{
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x1BECDF0", Offset = "0x1BEB3F0", VA = "0x181BECDF0", Slot = "82")]
	public override void WriteNull()
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x1BEDE90", Offset = "0x1BEC490", VA = "0x181BEDE90", Slot = "83")]
	public override void WriteUndefined()
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x1BED5D0", Offset = "0x1BEBBD0", VA = "0x181BED5D0", Slot = "84")]
	public override void WriteRaw(string? json)
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x1BF1000", Offset = "0x1BEF600", VA = "0x181BF1000", Slot = "86")]
	public override void WriteValue(string? value)
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x1BEC200", Offset = "0x1BEA800", VA = "0x181BEC200")]
	private void WriteEscapedString(string value, bool quote)
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x1BF07B0", Offset = "0x1BEEDB0", VA = "0x181BF07B0", Slot = "87")]
	public override void WriteValue(int value)
	{
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x1BF0A60", Offset = "0x1BEF060", VA = "0x181BF0A60", Slot = "88")]
	[CLSCompliant(false)]
	public override void WriteValue(uint value)
	{
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x1BF1680", Offset = "0x1BEFC80", VA = "0x181BF1680", Slot = "89")]
	public override void WriteValue(long value)
	{
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x1BF1640", Offset = "0x1BEFC40", VA = "0x181BF1640", Slot = "90")]
	[CLSCompliant(false)]
	public override void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x1BF1700", Offset = "0x1BEFD00", VA = "0x181BF1700", Slot = "91")]
	public override void WriteValue(float value)
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x1BF17C0", Offset = "0x1BEFDC0", VA = "0x181BF17C0", Slot = "108")]
	public override void WriteValue(float? value)
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x1BF1580", Offset = "0x1BEFB80", VA = "0x181BF1580", Slot = "92")]
	public override void WriteValue(double value)
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x1BF07F0", Offset = "0x1BEEDF0", VA = "0x181BF07F0", Slot = "109")]
	public override void WriteValue(double? value)
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x1BF0DE0", Offset = "0x1BEF3E0", VA = "0x181BF0DE0", Slot = "93")]
	public override void WriteValue(bool value)
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x1BF08F0", Offset = "0x1BEEEF0", VA = "0x181BF08F0", Slot = "94")]
	public override void WriteValue(short value)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x1BF0A20", Offset = "0x1BEF020", VA = "0x181BF0A20", Slot = "95")]
	[CLSCompliant(false)]
	public override void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x1BF14F0", Offset = "0x1BEFAF0", VA = "0x181BF14F0", Slot = "96")]
	public override void WriteValue(char value)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x1BF14B0", Offset = "0x1BEFAB0", VA = "0x181BF14B0", Slot = "97")]
	public override void WriteValue(byte value)
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x1BF0FC0", Offset = "0x1BEF5C0", VA = "0x181BF0FC0", Slot = "98")]
	[CLSCompliant(false)]
	public override void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x1BF0E70", Offset = "0x1BEF470", VA = "0x181BF0E70", Slot = "99")]
	public override void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x1BF10B0", Offset = "0x1BEF6B0", VA = "0x181BF10B0", Slot = "100")]
	public override void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x1BF0420", Offset = "0x1BEEA20", VA = "0x181BF0420")]
	private int WriteValueToBuffer(DateTime value)
	{
		return default(int);
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x1BF05A0", Offset = "0x1BEEBA0", VA = "0x181BF05A0", Slot = "121")]
	public override void WriteValue(byte[]? value)
	{
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x1BF0AD0", Offset = "0x1BEF0D0", VA = "0x181BF0AD0", Slot = "101")]
	public override void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x1BF0250", Offset = "0x1BEE850", VA = "0x181BF0250")]
	private int WriteValueToBuffer(DateTimeOffset value)
	{
		return default(int);
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x1BF0930", Offset = "0x1BEEF30", VA = "0x181BF0930", Slot = "102")]
	public override void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x1BF13A0", Offset = "0x1BEF9A0", VA = "0x181BF13A0", Slot = "103")]
	public override void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x1BF0F10", Offset = "0x1BEF510", VA = "0x181BF0F10", Slot = "122")]
	public override void WriteValue(Uri? value)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x1BEBC70", Offset = "0x1BEA270", VA = "0x181BEBC70", Slot = "124")]
	public override void WriteComment(string? text)
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x1BF1950", Offset = "0x1BEFF50", VA = "0x181BF1950", Slot = "125")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x1BEB8C0", Offset = "0x1BE9EC0", VA = "0x181BEB8C0")]
	private void EnsureWriteBuffer()
	{
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x1BECD70", Offset = "0x1BEB370", VA = "0x181BECD70")]
	private void WriteIntegerValue(long value)
	{
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x1BECB80", Offset = "0x1BEB180", VA = "0x181BECB80")]
	private void WriteIntegerValue(ulong value, bool negative)
	{
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x1BECE80", Offset = "0x1BEB480", VA = "0x181BECE80")]
	private int WriteNumberToBuffer(ulong value, bool negative)
	{
		return default(int);
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x1BECCA0", Offset = "0x1BEB2A0", VA = "0x181BECCA0")]
	private void WriteIntegerValue(int value)
	{
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x1BECC10", Offset = "0x1BEB210", VA = "0x181BECC10")]
	private void WriteIntegerValue(uint value, bool negative)
	{
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x1BECFB0", Offset = "0x1BEB5B0", VA = "0x181BECFB0")]
	private int WriteNumberToBuffer(uint value, bool negative)
	{
		return default(int);
	}
}
