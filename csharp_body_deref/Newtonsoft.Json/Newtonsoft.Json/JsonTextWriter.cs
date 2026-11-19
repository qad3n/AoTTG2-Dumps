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
		[Address(RVA = "0x5588170", Offset = "0x5587170", VA = "0x5588170", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000376")]
		[Address(RVA = "0x55883E0", Offset = "0x55873E0", VA = "0x55883E0", Slot = "5")]
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
		[Address(RVA = "0x5588440", Offset = "0x5587440", VA = "0x5588440", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000378")]
		[Address(RVA = "0x5588810", Offset = "0x5587810", VA = "0x5588810", Slot = "5")]
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
		[Address(RVA = "0x5588870", Offset = "0x5587870", VA = "0x5588870", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600037A")]
		[Address(RVA = "0x5588DE0", Offset = "0x5587DE0", VA = "0x5588DE0", Slot = "5")]
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
		[Address(RVA = "0x5588E40", Offset = "0x5587E40", VA = "0x5588E40", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600037C")]
		[Address(RVA = "0x55891F0", Offset = "0x55881F0", VA = "0x55891F0", Slot = "5")]
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
		[Address(RVA = "0x5589250", Offset = "0x5588250", VA = "0x5589250", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600037E")]
		[Address(RVA = "0x55899D0", Offset = "0x55889D0", VA = "0x55899D0", Slot = "5")]
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
		[Address(RVA = "0x5589A30", Offset = "0x5588A30", VA = "0x5589A30", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000380")]
		[Address(RVA = "0x5589CF0", Offset = "0x5588CF0", VA = "0x5589CF0", Slot = "5")]
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
		[Address(RVA = "0x5589D50", Offset = "0x5588D50", VA = "0x5589D50", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000382")]
		[Address(RVA = "0x558A040", Offset = "0x5589040", VA = "0x558A040", Slot = "5")]
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
		[Address(RVA = "0x558A0A0", Offset = "0x55890A0", VA = "0x558A0A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000384")]
		[Address(RVA = "0x558A6E0", Offset = "0x55896E0", VA = "0x558A6E0", Slot = "5")]
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
		[Address(RVA = "0x558A740", Offset = "0x5589740", VA = "0x558A740", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000386")]
		[Address(RVA = "0x558AA30", Offset = "0x5589A30", VA = "0x558AA30", Slot = "5")]
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
		[Address(RVA = "0x558AA90", Offset = "0x5589A90", VA = "0x558AA90", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000388")]
		[Address(RVA = "0x558ADB0", Offset = "0x5589DB0", VA = "0x558ADB0", Slot = "5")]
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
		[Address(RVA = "0x558AE10", Offset = "0x5589E10", VA = "0x558AE10", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600038A")]
		[Address(RVA = "0x558B600", Offset = "0x558A600", VA = "0x558B600", Slot = "5")]
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
		[Address(RVA = "0x558B660", Offset = "0x558A660", VA = "0x558B660", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600038C")]
		[Address(RVA = "0x558BD00", Offset = "0x558AD00", VA = "0x558BD00", Slot = "5")]
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
		[Address(RVA = "0x558BD60", Offset = "0x558AD60", VA = "0x558BD60", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600038E")]
		[Address(RVA = "0x558C2C0", Offset = "0x558B2C0", VA = "0x558C2C0", Slot = "5")]
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
		[Address(RVA = "0x558C320", Offset = "0x558B320", VA = "0x558C320", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000390")]
		[Address(RVA = "0x558C670", Offset = "0x558B670", VA = "0x558C670", Slot = "5")]
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
		[Address(RVA = "0x558C6D0", Offset = "0x558B6D0", VA = "0x558C6D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000392")]
		[Address(RVA = "0x558CC70", Offset = "0x558BC70", VA = "0x558CC70", Slot = "5")]
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
		[Address(RVA = "0x558CCD0", Offset = "0x558BCD0", VA = "0x558CCD0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000394")]
		[Address(RVA = "0x558D0C0", Offset = "0x558C0C0", VA = "0x558D0C0", Slot = "5")]
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
		[Address(RVA = "0x558D120", Offset = "0x558C120", VA = "0x558D120", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000396")]
		[Address(RVA = "0x558D3D0", Offset = "0x558C3D0", VA = "0x558D3D0", Slot = "5")]
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
		[Address(RVA = "0x558D430", Offset = "0x558C430", VA = "0x558D430", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000398")]
		[Address(RVA = "0x558D720", Offset = "0x558C720", VA = "0x558D720", Slot = "5")]
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
		[Address(RVA = "0x558D780", Offset = "0x558C780", VA = "0x558D780", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600039A")]
		[Address(RVA = "0x558DD70", Offset = "0x558CD70", VA = "0x558DD70", Slot = "5")]
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
		[Address(RVA = "0x558DDD0", Offset = "0x558CDD0", VA = "0x558DDD0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600039C")]
		[Address(RVA = "0x558E0A0", Offset = "0x558D0A0", VA = "0x558E0A0", Slot = "5")]
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
		[Address(RVA = "0x5585D80", Offset = "0x5584D80", VA = "0x5585D80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000085")]
	public IArrayPool<char>? ArrayPool
	{
		[Token(Token = "0x6000334")]
		[Address(RVA = "0x5585E00", Offset = "0x5584E00", VA = "0x5585E00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000335")]
		[Address(RVA = "0x5585E10", Offset = "0x5584E10", VA = "0x5585E10")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public int Indentation
	{
		[Token(Token = "0x6000336")]
		[Address(RVA = "0x5585E80", Offset = "0x5584E80", VA = "0x5585E80")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000337")]
		[Address(RVA = "0x5585E90", Offset = "0x5584E90", VA = "0x5585E90")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public char QuoteChar
	{
		[Token(Token = "0x6000338")]
		[Address(RVA = "0x5585EF0", Offset = "0x5584EF0", VA = "0x5585EF0")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x6000339")]
		[Address(RVA = "0x5585F00", Offset = "0x5584F00", VA = "0x5585F00")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public char IndentChar
	{
		[Token(Token = "0x600033A")]
		[Address(RVA = "0x5586040", Offset = "0x5585040", VA = "0x5586040")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x600033B")]
		[Address(RVA = "0x5586050", Offset = "0x5585050", VA = "0x5586050")]
		set
		{
		}
	}

	[Token(Token = "0x17000089")]
	public bool QuoteName
	{
		[Token(Token = "0x600033C")]
		[Address(RVA = "0x5586080", Offset = "0x5585080", VA = "0x5586080")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600033D")]
		[Address(RVA = "0x5586090", Offset = "0x5585090", VA = "0x5586090")]
		set
		{
		}
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x5581720", Offset = "0x5580720", VA = "0x5581720", Slot = "6")]
	public override Task FlushAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x55817C0", Offset = "0x55807C0", VA = "0x55817C0")]
	internal Task DoFlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x5581840", Offset = "0x5580840", VA = "0x5581840", Slot = "9")]
	protected override Task WriteValueDelimiterAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x55818C0", Offset = "0x55808C0", VA = "0x55818C0")]
	internal Task DoWriteValueDelimiterAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x5581920", Offset = "0x5580920", VA = "0x5581920", Slot = "7")]
	protected override Task WriteEndAsync(JsonToken token, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x5581940", Offset = "0x5580940", VA = "0x5581940")]
	internal Task DoWriteEndAsync(JsonToken token, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x5581A70", Offset = "0x5580A70", VA = "0x5581A70", Slot = "5")]
	public override Task CloseAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x5581A90", Offset = "0x5580A90", VA = "0x5581A90")]
	[AsyncStateMachine(typeof(_003CDoCloseAsync_003Ed__8))]
	internal Task DoCloseAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x5581B80", Offset = "0x5580B80", VA = "0x5581B80")]
	[AsyncStateMachine(typeof(_003CCloseBufferAndWriterAsync_003Ed__9))]
	private Task CloseBufferAndWriterAsync()
	{
		return null;
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x5581C60", Offset = "0x5580C60", VA = "0x5581C60", Slot = "12")]
	public override Task WriteEndAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x5581C80", Offset = "0x5580C80", VA = "0x5581C80", Slot = "8")]
	protected override Task WriteIndentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x5581CA0", Offset = "0x5580CA0", VA = "0x5581CA0")]
	internal Task DoWriteIndentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x5581E40", Offset = "0x5580E40", VA = "0x5581E40")]
	[AsyncStateMachine(typeof(_003CWriteIndentAsync_003Ed__13))]
	private Task WriteIndentAsync(int currentIndentCount, int newLineLen, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x5581F50", Offset = "0x5580F50", VA = "0x5581F50")]
	private Task WriteValueInternalAsync(JsonToken token, string value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x5582010", Offset = "0x5581010", VA = "0x5582010")]
	[AsyncStateMachine(typeof(_003CWriteValueInternalAsync_003Ed__15))]
	private Task WriteValueInternalAsync(Task task, string value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x5582130", Offset = "0x5581130", VA = "0x5582130", Slot = "10")]
	protected override Task WriteIndentSpaceAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x55821B0", Offset = "0x55811B0", VA = "0x55821B0")]
	internal Task DoWriteIndentSpaceAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x5582210", Offset = "0x5581210", VA = "0x5582210", Slot = "11")]
	public override Task WriteRawAsync(string? json, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x5582290", Offset = "0x5581290", VA = "0x5582290")]
	internal Task DoWriteRawAsync(string? json, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x55822F0", Offset = "0x55812F0", VA = "0x55822F0", Slot = "16")]
	public override Task WriteNullAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x5582370", Offset = "0x5581370", VA = "0x5582370")]
	internal Task DoWriteNullAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x55823E0", Offset = "0x55813E0", VA = "0x55823E0")]
	private Task WriteDigitsAsync(ulong uvalue, bool negative, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x55825B0", Offset = "0x55815B0", VA = "0x55825B0")]
	private Task WriteIntegerValueAsync(ulong uvalue, bool negative, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x5582660", Offset = "0x5581660", VA = "0x5582660")]
	[AsyncStateMachine(typeof(_003CWriteIntegerValueAsync_003Ed__24))]
	private Task WriteIntegerValueAsync(Task task, ulong uvalue, bool negative, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x5582790", Offset = "0x5581790", VA = "0x5582790")]
	internal Task WriteIntegerValueAsync(long value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x55827B0", Offset = "0x55817B0", VA = "0x55827B0")]
	internal Task WriteIntegerValueAsync(ulong uvalue, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x55827C0", Offset = "0x55817C0", VA = "0x55827C0")]
	private Task WriteEscapedStringAsync(string value, bool quote, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x5582880", Offset = "0x5581880", VA = "0x5582880", Slot = "17")]
	public override Task WritePropertyNameAsync(string name, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x55828A0", Offset = "0x55818A0", VA = "0x55828A0")]
	internal Task DoWritePropertyNameAsync(string name, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x5582A80", Offset = "0x5581A80", VA = "0x5582A80")]
	[AsyncStateMachine(typeof(_003CDoWritePropertyNameAsync_003Ed__30))]
	private Task DoWritePropertyNameAsync(Task task, string name, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x5582BA0", Offset = "0x5581BA0", VA = "0x5582BA0", Slot = "18")]
	public override Task WritePropertyNameAsync(string name, bool escape, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x5582BC0", Offset = "0x5581BC0", VA = "0x5582BC0")]
	[AsyncStateMachine(typeof(_003CDoWritePropertyNameAsync_003Ed__32))]
	internal Task DoWritePropertyNameAsync(string name, bool escape, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x5582CD0", Offset = "0x5581CD0", VA = "0x5582CD0", Slot = "19")]
	public override Task WriteStartArrayAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x5582CF0", Offset = "0x5581CF0", VA = "0x5582CF0")]
	internal Task DoWriteStartArrayAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x5582DB0", Offset = "0x5581DB0", VA = "0x5582DB0")]
	[AsyncStateMachine(typeof(_003CDoWriteStartArrayAsync_003Ed__35))]
	internal Task DoWriteStartArrayAsync(Task task, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x5582EC0", Offset = "0x5581EC0", VA = "0x5582EC0", Slot = "23")]
	public override Task WriteStartObjectAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x5582EE0", Offset = "0x5581EE0", VA = "0x5582EE0")]
	internal Task DoWriteStartObjectAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x5582FA0", Offset = "0x5581FA0", VA = "0x5582FA0")]
	[AsyncStateMachine(typeof(_003CDoWriteStartObjectAsync_003Ed__38))]
	internal Task DoWriteStartObjectAsync(Task task, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x55830B0", Offset = "0x55820B0", VA = "0x55830B0", Slot = "22")]
	public override Task WriteStartConstructorAsync(string name, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x55830D0", Offset = "0x55820D0", VA = "0x55830D0")]
	[AsyncStateMachine(typeof(_003CDoWriteStartConstructorAsync_003Ed__40))]
	internal Task DoWriteStartConstructorAsync(string name, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x55831E0", Offset = "0x55821E0", VA = "0x55831E0", Slot = "63")]
	public override Task WriteUndefinedAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x5583200", Offset = "0x5582200", VA = "0x5583200")]
	internal Task DoWriteUndefinedAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x55832F0", Offset = "0x55822F0", VA = "0x55832F0")]
	[AsyncStateMachine(typeof(_003CDoWriteUndefinedAsync_003Ed__43))]
	private Task DoWriteUndefinedAsync(Task task, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x5583400", Offset = "0x5582400", VA = "0x5583400", Slot = "64")]
	public override Task WriteWhitespaceAsync(string ws, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x5583490", Offset = "0x5582490", VA = "0x5583490")]
	internal Task DoWriteWhitespaceAsync(string ws, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x5583500", Offset = "0x5582500", VA = "0x5583500", Slot = "25")]
	public override Task WriteValueAsync(bool value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x5583580", Offset = "0x5582580", VA = "0x5583580")]
	internal Task DoWriteValueAsync(bool value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x55835F0", Offset = "0x55825F0", VA = "0x55835F0", Slot = "26")]
	public override Task WriteValueAsync(bool? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x5583610", Offset = "0x5582610", VA = "0x5583610")]
	internal Task DoWriteValueAsync(bool? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x5583700", Offset = "0x5582700", VA = "0x5583700", Slot = "27")]
	public override Task WriteValueAsync(byte value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x5583730", Offset = "0x5582730", VA = "0x5583730", Slot = "28")]
	public override Task WriteValueAsync(byte? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x5583750", Offset = "0x5582750", VA = "0x5583750")]
	internal Task DoWriteValueAsync(byte? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x5583800", Offset = "0x5582800", VA = "0x5583800", Slot = "29")]
	public override Task WriteValueAsync(byte[]? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x5583830", Offset = "0x5582830", VA = "0x5583830")]
	[AsyncStateMachine(typeof(_003CWriteValueNonNullAsync_003Ed__54))]
	internal Task WriteValueNonNullAsync(byte[] value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x5583940", Offset = "0x5582940", VA = "0x5583940", Slot = "30")]
	public override Task WriteValueAsync(char value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x55839C0", Offset = "0x55829C0", VA = "0x55839C0")]
	internal Task DoWriteValueAsync(char value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x5583A30", Offset = "0x5582A30", VA = "0x5583A30", Slot = "31")]
	public override Task WriteValueAsync(char? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x5583A50", Offset = "0x5582A50", VA = "0x5583A50")]
	internal Task DoWriteValueAsync(char? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x5583B30", Offset = "0x5582B30", VA = "0x5583B30", Slot = "32")]
	public override Task WriteValueAsync(DateTime value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x5583B50", Offset = "0x5582B50", VA = "0x5583B50")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__60))]
	internal Task DoWriteValueAsync(DateTime value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x5583C50", Offset = "0x5582C50", VA = "0x5583C50", Slot = "33")]
	public override Task WriteValueAsync(DateTime? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x5583C70", Offset = "0x5582C70", VA = "0x5583C70")]
	internal Task DoWriteValueAsync(DateTime? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x5583D30", Offset = "0x5582D30", VA = "0x5583D30", Slot = "34")]
	public override Task WriteValueAsync(DateTimeOffset value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x5583D50", Offset = "0x5582D50", VA = "0x5583D50")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__64))]
	internal Task DoWriteValueAsync(DateTimeOffset value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x5583E60", Offset = "0x5582E60", VA = "0x5583E60", Slot = "35")]
	public override Task WriteValueAsync(DateTimeOffset? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x5583E80", Offset = "0x5582E80", VA = "0x5583E80")]
	internal Task DoWriteValueAsync(DateTimeOffset? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x5583F30", Offset = "0x5582F30", VA = "0x5583F30", Slot = "36")]
	public override Task WriteValueAsync(decimal value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x5583FD0", Offset = "0x5582FD0", VA = "0x5583FD0")]
	internal Task DoWriteValueAsync(decimal value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x5584050", Offset = "0x5583050", VA = "0x5584050", Slot = "37")]
	public override Task WriteValueAsync(decimal? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x5584070", Offset = "0x5583070", VA = "0x5584070")]
	internal Task DoWriteValueAsync(decimal? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x5584170", Offset = "0x5583170", VA = "0x5584170", Slot = "38")]
	public override Task WriteValueAsync(double value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x5584220", Offset = "0x5583220", VA = "0x5584220")]
	internal Task WriteValueAsync(double value, bool nullable, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x55842C0", Offset = "0x55832C0", VA = "0x55842C0", Slot = "39")]
	public override Task WriteValueAsync(double? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x55843E0", Offset = "0x55833E0", VA = "0x55843E0", Slot = "40")]
	public override Task WriteValueAsync(float value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x55844A0", Offset = "0x55834A0", VA = "0x55844A0")]
	internal Task WriteValueAsync(float value, bool nullable, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x5584540", Offset = "0x5583540", VA = "0x5584540", Slot = "41")]
	public override Task WriteValueAsync(float? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x5584650", Offset = "0x5583650", VA = "0x5584650", Slot = "42")]
	public override Task WriteValueAsync(Guid value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x5584670", Offset = "0x5583670", VA = "0x5584670")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__78))]
	internal Task DoWriteValueAsync(Guid value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x5584780", Offset = "0x5583780", VA = "0x5584780", Slot = "43")]
	public override Task WriteValueAsync(Guid? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x55847A0", Offset = "0x55837A0", VA = "0x55847A0")]
	internal Task DoWriteValueAsync(Guid? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x5584850", Offset = "0x5583850", VA = "0x5584850", Slot = "44")]
	public override Task WriteValueAsync(int value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x5584880", Offset = "0x5583880", VA = "0x5584880", Slot = "45")]
	public override Task WriteValueAsync(int? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x55848A0", Offset = "0x55838A0", VA = "0x55848A0")]
	internal Task DoWriteValueAsync(int? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x5584960", Offset = "0x5583960", VA = "0x5584960", Slot = "46")]
	public override Task WriteValueAsync(long value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x5584990", Offset = "0x5583990", VA = "0x5584990", Slot = "47")]
	public override Task WriteValueAsync(long? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x55849B0", Offset = "0x55839B0", VA = "0x55849B0")]
	internal Task DoWriteValueAsync(long? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x5584A70", Offset = "0x5583A70", VA = "0x5584A70")]
	internal Task WriteValueAsync(BigInteger value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x5584B20", Offset = "0x5583B20", VA = "0x5584B20", Slot = "48")]
	public override Task WriteValueAsync(object? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x5584C50", Offset = "0x5583C50", VA = "0x5584C50", Slot = "49")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(sbyte value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x5584C90", Offset = "0x5583C90", VA = "0x5584C90", Slot = "50")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(sbyte? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x5584CB0", Offset = "0x5583CB0", VA = "0x5584CB0")]
	internal Task DoWriteValueAsync(sbyte? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x5584D70", Offset = "0x5583D70", VA = "0x5584D70", Slot = "51")]
	public override Task WriteValueAsync(short value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x5584DA0", Offset = "0x5583DA0", VA = "0x5584DA0", Slot = "52")]
	public override Task WriteValueAsync(short? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x5584DC0", Offset = "0x5583DC0", VA = "0x5584DC0")]
	internal Task DoWriteValueAsync(short? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x5584E80", Offset = "0x5583E80", VA = "0x5584E80", Slot = "53")]
	public override Task WriteValueAsync(string? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x5584EA0", Offset = "0x5583EA0", VA = "0x5584EA0")]
	internal Task DoWriteValueAsync(string? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x5585040", Offset = "0x5584040", VA = "0x5585040")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__97))]
	private Task DoWriteValueAsync(Task task, string? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x5585160", Offset = "0x5584160", VA = "0x5585160", Slot = "54")]
	public override Task WriteValueAsync(TimeSpan value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x5585180", Offset = "0x5584180", VA = "0x5585180")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__99))]
	internal Task DoWriteValueAsync(TimeSpan value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x5585280", Offset = "0x5584280", VA = "0x5585280", Slot = "55")]
	public override Task WriteValueAsync(TimeSpan? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x55852A0", Offset = "0x55842A0", VA = "0x55852A0")]
	internal Task DoWriteValueAsync(TimeSpan? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x5585360", Offset = "0x5584360", VA = "0x5585360", Slot = "56")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(uint value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x5585380", Offset = "0x5584380", VA = "0x5585380", Slot = "57")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(uint? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x55853A0", Offset = "0x55843A0", VA = "0x55853A0")]
	internal Task DoWriteValueAsync(uint? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x5585450", Offset = "0x5584450", VA = "0x5585450", Slot = "58")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(ulong value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x5585470", Offset = "0x5584470", VA = "0x5585470", Slot = "59")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(ulong? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x5585490", Offset = "0x5584490", VA = "0x5585490")]
	internal Task DoWriteValueAsync(ulong? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x5585550", Offset = "0x5584550", VA = "0x5585550", Slot = "60")]
	public override Task WriteValueAsync(Uri? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x55855F0", Offset = "0x55845F0", VA = "0x55855F0")]
	internal Task WriteValueNotNullAsync(Uri value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x5585740", Offset = "0x5584740", VA = "0x5585740")]
	[AsyncStateMachine(typeof(_003CWriteValueNotNullAsync_003Ed__110))]
	internal Task WriteValueNotNullAsync(Task task, Uri value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x5585860", Offset = "0x5584860", VA = "0x5585860", Slot = "61")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(ushort value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x5585880", Offset = "0x5584880", VA = "0x5585880", Slot = "62")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(ushort? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x55858A0", Offset = "0x55848A0", VA = "0x55858A0")]
	internal Task DoWriteValueAsync(ushort? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x5585950", Offset = "0x5584950", VA = "0x5585950", Slot = "20")]
	public override Task WriteCommentAsync(string? text, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x5585970", Offset = "0x5584970", VA = "0x5585970")]
	[AsyncStateMachine(typeof(_003CDoWriteCommentAsync_003Ed__115))]
	internal Task DoWriteCommentAsync(string? text, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x5585A80", Offset = "0x5584A80", VA = "0x5585A80", Slot = "13")]
	public override Task WriteEndArrayAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x5585AA0", Offset = "0x5584AA0", VA = "0x5585AA0", Slot = "14")]
	public override Task WriteEndConstructorAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x5585AC0", Offset = "0x5584AC0", VA = "0x5585AC0", Slot = "15")]
	public override Task WriteEndObjectAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x5585AE0", Offset = "0x5584AE0", VA = "0x5585AE0", Slot = "21")]
	public override Task WriteRawValueAsync(string? json, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x5585B00", Offset = "0x5584B00", VA = "0x5585B00")]
	internal Task DoWriteRawValueAsync(string? json, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x5585BC0", Offset = "0x5584BC0", VA = "0x5585BC0")]
	[AsyncStateMachine(typeof(_003CDoWriteRawValueAsync_003Ed__121))]
	private Task DoWriteRawValueAsync(Task task, string? json, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x5585CE0", Offset = "0x5584CE0", VA = "0x5585CE0")]
	internal char[] EnsureWriteBuffer(int length, int copyTo)
	{
		return null;
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x55860A0", Offset = "0x55850A0", VA = "0x55860A0")]
	public JsonTextWriter(TextWriter textWriter)
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x5586230", Offset = "0x5585230", VA = "0x5586230", Slot = "66")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x5586260", Offset = "0x5585260", VA = "0x5586260", Slot = "67")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x55862E0", Offset = "0x55852E0", VA = "0x55862E0")]
	private void CloseBufferAndWriter()
	{
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x5586350", Offset = "0x5585350", VA = "0x5586350", Slot = "68")]
	public override void WriteStartObject()
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x5586390", Offset = "0x5585390", VA = "0x5586390", Slot = "70")]
	public override void WriteStartArray()
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x55863D0", Offset = "0x55853D0", VA = "0x55863D0", Slot = "72")]
	public override void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x5586480", Offset = "0x5585480", VA = "0x5586480", Slot = "78")]
	protected override void WriteEnd(JsonToken token)
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x5586580", Offset = "0x5585580", VA = "0x5586580", Slot = "74")]
	public override void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x55866B0", Offset = "0x55856B0", VA = "0x55866B0", Slot = "75")]
	public override void WritePropertyName(string name, bool escape)
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x5586780", Offset = "0x5585780", VA = "0x5586780", Slot = "65")]
	internal override void OnStringEscapeHandlingChanged()
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x5585FD0", Offset = "0x5584FD0", VA = "0x5585FD0")]
	private void UpdateCharEscapeFlags()
	{
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x55867F0", Offset = "0x55857F0", VA = "0x55867F0", Slot = "79")]
	protected override void WriteIndent()
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x5581D50", Offset = "0x5580D50", VA = "0x5581D50")]
	private int SetIndentChars()
	{
		return default(int);
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x5586910", Offset = "0x5585910", VA = "0x5586910", Slot = "80")]
	protected override void WriteValueDelimiter()
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x5586940", Offset = "0x5585940", VA = "0x5586940", Slot = "81")]
	protected override void WriteIndentSpace()
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x5586970", Offset = "0x5585970", VA = "0x5586970")]
	private void WriteValueInternal(string value, JsonToken token)
	{
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x55869A0", Offset = "0x55859A0", VA = "0x55869A0", Slot = "123")]
	public override void WriteValue(object? value)
	{
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x5586A90", Offset = "0x5585A90", VA = "0x5586A90", Slot = "82")]
	public override void WriteNull()
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x5586B10", Offset = "0x5585B10", VA = "0x5586B10", Slot = "83")]
	public override void WriteUndefined()
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x5586B90", Offset = "0x5585B90", VA = "0x5586B90", Slot = "84")]
	public override void WriteRaw(string? json)
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x5586BD0", Offset = "0x5585BD0", VA = "0x5586BD0", Slot = "86")]
	public override void WriteValue(string? value)
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x55865D0", Offset = "0x55855D0", VA = "0x55865D0")]
	private void WriteEscapedString(string value, bool quote)
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x5586CC0", Offset = "0x5585CC0", VA = "0x5586CC0", Slot = "87")]
	public override void WriteValue(int value)
	{
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x5586DA0", Offset = "0x5585DA0", VA = "0x5586DA0", Slot = "88")]
	[CLSCompliant(false)]
	public override void WriteValue(uint value)
	{
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x5586E80", Offset = "0x5585E80", VA = "0x5586E80", Slot = "89")]
	public override void WriteValue(long value)
	{
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x5586EB0", Offset = "0x5585EB0", VA = "0x5586EB0", Slot = "90")]
	[CLSCompliant(false)]
	public override void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x5586FB0", Offset = "0x5585FB0", VA = "0x5586FB0", Slot = "91")]
	public override void WriteValue(float value)
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x5587060", Offset = "0x5586060", VA = "0x5587060", Slot = "108")]
	public override void WriteValue(float? value)
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x5587150", Offset = "0x5586150", VA = "0x5587150", Slot = "92")]
	public override void WriteValue(double value)
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x5587200", Offset = "0x5586200", VA = "0x5587200", Slot = "109")]
	public override void WriteValue(double? value)
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x55872F0", Offset = "0x55862F0", VA = "0x55872F0", Slot = "93")]
	public override void WriteValue(bool value)
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x5587380", Offset = "0x5586380", VA = "0x5587380", Slot = "94")]
	public override void WriteValue(short value)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x55873B0", Offset = "0x55863B0", VA = "0x55873B0", Slot = "95")]
	[CLSCompliant(false)]
	public override void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x55873E0", Offset = "0x55863E0", VA = "0x55873E0", Slot = "96")]
	public override void WriteValue(char value)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x5587460", Offset = "0x5586460", VA = "0x5587460", Slot = "97")]
	public override void WriteValue(byte value)
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x5587490", Offset = "0x5586490", VA = "0x5587490", Slot = "98")]
	[CLSCompliant(false)]
	public override void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x55874C0", Offset = "0x55864C0", VA = "0x55874C0", Slot = "99")]
	public override void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x5587550", Offset = "0x5586550", VA = "0x5587550", Slot = "100")]
	public override void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x55876D0", Offset = "0x55866D0", VA = "0x55876D0")]
	private int WriteValueToBuffer(DateTime value)
	{
		return default(int);
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x5587810", Offset = "0x5586810", VA = "0x5587810", Slot = "121")]
	public override void WriteValue(byte[]? value)
	{
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x5587990", Offset = "0x5586990", VA = "0x5587990", Slot = "101")]
	public override void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x5587AE0", Offset = "0x5586AE0", VA = "0x5587AE0")]
	private int WriteValueToBuffer(DateTimeOffset value)
	{
		return default(int);
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x5587CA0", Offset = "0x5586CA0", VA = "0x5587CA0", Slot = "102")]
	public override void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x5587D90", Offset = "0x5586D90", VA = "0x5587D90", Slot = "103")]
	public override void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x5587E90", Offset = "0x5586E90", VA = "0x5587E90", Slot = "122")]
	public override void WriteValue(Uri? value)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x5587F40", Offset = "0x5586F40", VA = "0x5587F40", Slot = "124")]
	public override void WriteComment(string? text)
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x5587FF0", Offset = "0x5586FF0", VA = "0x5587FF0", Slot = "125")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x5586C70", Offset = "0x5585C70", VA = "0x5586C70")]
	private void EnsureWriteBuffer()
	{
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x5586DD0", Offset = "0x5585DD0", VA = "0x5586DD0")]
	private void WriteIntegerValue(long value)
	{
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x5586F40", Offset = "0x5585F40", VA = "0x5586F40")]
	private void WriteIntegerValue(ulong value, bool negative)
	{
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x55824B0", Offset = "0x55814B0", VA = "0x55824B0")]
	private int WriteNumberToBuffer(ulong value, bool negative)
	{
		return default(int);
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x5586CF0", Offset = "0x5585CF0", VA = "0x5586CF0")]
	private void WriteIntegerValue(int value)
	{
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x5588100", Offset = "0x5587100", VA = "0x5588100")]
	private void WriteIntegerValue(uint value, bool negative)
	{
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x5588030", Offset = "0x5587030", VA = "0x5588030")]
	private int WriteNumberToBuffer(uint value, bool negative)
	{
		return default(int);
	}
}
