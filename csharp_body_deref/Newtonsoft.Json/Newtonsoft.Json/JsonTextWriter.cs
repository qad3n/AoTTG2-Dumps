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
		[Address(RVA = "0x3D8B7F0", Offset = "0x3D8B7F0", VA = "0x3D8B7F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000376")]
		[Address(RVA = "0x3D8BAD0", Offset = "0x3D8BAD0", VA = "0x3D8BAD0", Slot = "5")]
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
		[Address(RVA = "0x3D8BB30", Offset = "0x3D8BB30", VA = "0x3D8BB30", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000378")]
		[Address(RVA = "0x3D8BFD0", Offset = "0x3D8BFD0", VA = "0x3D8BFD0", Slot = "5")]
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
		[Address(RVA = "0x3D8C030", Offset = "0x3D8C030", VA = "0x3D8C030", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600037A")]
		[Address(RVA = "0x3D8C710", Offset = "0x3D8C710", VA = "0x3D8C710", Slot = "5")]
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
		[Address(RVA = "0x3D8C770", Offset = "0x3D8C770", VA = "0x3D8C770", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600037C")]
		[Address(RVA = "0x3D8CC10", Offset = "0x3D8CC10", VA = "0x3D8CC10", Slot = "5")]
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
		[Address(RVA = "0x3D8CC70", Offset = "0x3D8CC70", VA = "0x3D8CC70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600037E")]
		[Address(RVA = "0x3D8D660", Offset = "0x3D8D660", VA = "0x3D8D660", Slot = "5")]
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
		[Address(RVA = "0x3D8D6C0", Offset = "0x3D8D6C0", VA = "0x3D8D6C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000380")]
		[Address(RVA = "0x3D8DA00", Offset = "0x3D8DA00", VA = "0x3D8DA00", Slot = "5")]
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
		[Address(RVA = "0x3D8DA60", Offset = "0x3D8DA60", VA = "0x3D8DA60", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000382")]
		[Address(RVA = "0x3D8DDE0", Offset = "0x3D8DDE0", VA = "0x3D8DDE0", Slot = "5")]
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
		[Address(RVA = "0x3D8DE40", Offset = "0x3D8DE40", VA = "0x3D8DE40", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000384")]
		[Address(RVA = "0x3D8E600", Offset = "0x3D8E600", VA = "0x3D8E600", Slot = "5")]
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
		[Address(RVA = "0x3D8E660", Offset = "0x3D8E660", VA = "0x3D8E660", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000386")]
		[Address(RVA = "0x3D8E9E0", Offset = "0x3D8E9E0", VA = "0x3D8E9E0", Slot = "5")]
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
		[Address(RVA = "0x3D8EA40", Offset = "0x3D8EA40", VA = "0x3D8EA40", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000388")]
		[Address(RVA = "0x3D8EE00", Offset = "0x3D8EE00", VA = "0x3D8EE00", Slot = "5")]
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
		[Address(RVA = "0x3D8EE60", Offset = "0x3D8EE60", VA = "0x3D8EE60", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600038A")]
		[Address(RVA = "0x3D8F8A0", Offset = "0x3D8F8A0", VA = "0x3D8F8A0", Slot = "5")]
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
		[Address(RVA = "0x3D8F900", Offset = "0x3D8F900", VA = "0x3D8F900", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600038C")]
		[Address(RVA = "0x3D901D0", Offset = "0x3D901D0", VA = "0x3D901D0", Slot = "5")]
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
		[Address(RVA = "0x3D90230", Offset = "0x3D90230", VA = "0x3D90230", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600038E")]
		[Address(RVA = "0x3D90930", Offset = "0x3D90930", VA = "0x3D90930", Slot = "5")]
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
		[Address(RVA = "0x3D90990", Offset = "0x3D90990", VA = "0x3D90990", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000390")]
		[Address(RVA = "0x3D90DA0", Offset = "0x3D90DA0", VA = "0x3D90DA0", Slot = "5")]
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
		[Address(RVA = "0x3D90E00", Offset = "0x3D90E00", VA = "0x3D90E00", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000392")]
		[Address(RVA = "0x3D91530", Offset = "0x3D91530", VA = "0x3D91530", Slot = "5")]
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
		[Address(RVA = "0x3D91590", Offset = "0x3D91590", VA = "0x3D91590", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000394")]
		[Address(RVA = "0x3D91AA0", Offset = "0x3D91AA0", VA = "0x3D91AA0", Slot = "5")]
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
		[Address(RVA = "0x3D91B00", Offset = "0x3D91B00", VA = "0x3D91B00", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000396")]
		[Address(RVA = "0x3D91E30", Offset = "0x3D91E30", VA = "0x3D91E30", Slot = "5")]
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
		[Address(RVA = "0x3D91E90", Offset = "0x3D91E90", VA = "0x3D91E90", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000398")]
		[Address(RVA = "0x3D92210", Offset = "0x3D92210", VA = "0x3D92210", Slot = "5")]
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
		[Address(RVA = "0x3D92270", Offset = "0x3D92270", VA = "0x3D92270", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600039A")]
		[Address(RVA = "0x3D92A70", Offset = "0x3D92A70", VA = "0x3D92A70", Slot = "5")]
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
		[Address(RVA = "0x3D92AD0", Offset = "0x3D92AD0", VA = "0x3D92AD0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600039C")]
		[Address(RVA = "0x3D92E40", Offset = "0x3D92E40", VA = "0x3D92E40", Slot = "5")]
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
		[Address(RVA = "0x3D893C0", Offset = "0x3D893C0", VA = "0x3D893C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000085")]
	public IArrayPool<char>? ArrayPool
	{
		[Token(Token = "0x6000334")]
		[Address(RVA = "0x3D89440", Offset = "0x3D89440", VA = "0x3D89440")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000335")]
		[Address(RVA = "0x3D89450", Offset = "0x3D89450", VA = "0x3D89450")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public int Indentation
	{
		[Token(Token = "0x6000336")]
		[Address(RVA = "0x3D894C0", Offset = "0x3D894C0", VA = "0x3D894C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000337")]
		[Address(RVA = "0x3D894D0", Offset = "0x3D894D0", VA = "0x3D894D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public char QuoteChar
	{
		[Token(Token = "0x6000338")]
		[Address(RVA = "0x3D89530", Offset = "0x3D89530", VA = "0x3D89530")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x6000339")]
		[Address(RVA = "0x3D89540", Offset = "0x3D89540", VA = "0x3D89540")]
		set
		{
		}
	}

	[Token(Token = "0x17000088")]
	public char IndentChar
	{
		[Token(Token = "0x600033A")]
		[Address(RVA = "0x3D89680", Offset = "0x3D89680", VA = "0x3D89680")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x600033B")]
		[Address(RVA = "0x3D89690", Offset = "0x3D89690", VA = "0x3D89690")]
		set
		{
		}
	}

	[Token(Token = "0x17000089")]
	public bool QuoteName
	{
		[Token(Token = "0x600033C")]
		[Address(RVA = "0x3D896C0", Offset = "0x3D896C0", VA = "0x3D896C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600033D")]
		[Address(RVA = "0x3D896D0", Offset = "0x3D896D0", VA = "0x3D896D0")]
		set
		{
		}
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x3D84D80", Offset = "0x3D84D80", VA = "0x3D84D80", Slot = "6")]
	public override Task FlushAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x3D84E20", Offset = "0x3D84E20", VA = "0x3D84E20")]
	internal Task DoFlushAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x3D84EA0", Offset = "0x3D84EA0", VA = "0x3D84EA0", Slot = "9")]
	protected override Task WriteValueDelimiterAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x3D84F20", Offset = "0x3D84F20", VA = "0x3D84F20")]
	internal Task DoWriteValueDelimiterAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x3D84F80", Offset = "0x3D84F80", VA = "0x3D84F80", Slot = "7")]
	protected override Task WriteEndAsync(JsonToken token, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x3D84F90", Offset = "0x3D84F90", VA = "0x3D84F90")]
	internal Task DoWriteEndAsync(JsonToken token, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x3D850C0", Offset = "0x3D850C0", VA = "0x3D850C0", Slot = "5")]
	public override Task CloseAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x3D850D0", Offset = "0x3D850D0", VA = "0x3D850D0")]
	[AsyncStateMachine(typeof(_003CDoCloseAsync_003Ed__8))]
	internal Task DoCloseAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x3D851D0", Offset = "0x3D851D0", VA = "0x3D851D0")]
	[AsyncStateMachine(typeof(_003CCloseBufferAndWriterAsync_003Ed__9))]
	private Task CloseBufferAndWriterAsync()
	{
		return null;
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x3D852B0", Offset = "0x3D852B0", VA = "0x3D852B0", Slot = "12")]
	public override Task WriteEndAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x3D852D0", Offset = "0x3D852D0", VA = "0x3D852D0", Slot = "8")]
	protected override Task WriteIndentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x3D852E0", Offset = "0x3D852E0", VA = "0x3D852E0")]
	internal Task DoWriteIndentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x3D85480", Offset = "0x3D85480", VA = "0x3D85480")]
	[AsyncStateMachine(typeof(_003CWriteIndentAsync_003Ed__13))]
	private Task WriteIndentAsync(int currentIndentCount, int newLineLen, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x3D855A0", Offset = "0x3D855A0", VA = "0x3D855A0")]
	private Task WriteValueInternalAsync(JsonToken token, string value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x3D85650", Offset = "0x3D85650", VA = "0x3D85650")]
	[AsyncStateMachine(typeof(_003CWriteValueInternalAsync_003Ed__15))]
	private Task WriteValueInternalAsync(Task task, string value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x3D85790", Offset = "0x3D85790", VA = "0x3D85790", Slot = "10")]
	protected override Task WriteIndentSpaceAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x3D85810", Offset = "0x3D85810", VA = "0x3D85810")]
	internal Task DoWriteIndentSpaceAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x3D85870", Offset = "0x3D85870", VA = "0x3D85870", Slot = "11")]
	public override Task WriteRawAsync(string? json, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x3D858F0", Offset = "0x3D858F0", VA = "0x3D858F0")]
	internal Task DoWriteRawAsync(string? json, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x3D85950", Offset = "0x3D85950", VA = "0x3D85950", Slot = "16")]
	public override Task WriteNullAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x3D859D0", Offset = "0x3D859D0", VA = "0x3D859D0")]
	internal Task DoWriteNullAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x3D85A40", Offset = "0x3D85A40", VA = "0x3D85A40")]
	private Task WriteDigitsAsync(ulong uvalue, bool negative, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x3D85C10", Offset = "0x3D85C10", VA = "0x3D85C10")]
	private Task WriteIntegerValueAsync(ulong uvalue, bool negative, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x3D85CB0", Offset = "0x3D85CB0", VA = "0x3D85CB0")]
	[AsyncStateMachine(typeof(_003CWriteIntegerValueAsync_003Ed__24))]
	private Task WriteIntegerValueAsync(Task task, ulong uvalue, bool negative, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x3D85DF0", Offset = "0x3D85DF0", VA = "0x3D85DF0")]
	internal Task WriteIntegerValueAsync(long value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x3D85E10", Offset = "0x3D85E10", VA = "0x3D85E10")]
	internal Task WriteIntegerValueAsync(ulong uvalue, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x3D85E20", Offset = "0x3D85E20", VA = "0x3D85E20")]
	private Task WriteEscapedStringAsync(string value, bool quote, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x3D85EE0", Offset = "0x3D85EE0", VA = "0x3D85EE0", Slot = "17")]
	public override Task WritePropertyNameAsync(string name, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x3D85EF0", Offset = "0x3D85EF0", VA = "0x3D85EF0")]
	internal Task DoWritePropertyNameAsync(string name, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x3D860D0", Offset = "0x3D860D0", VA = "0x3D860D0")]
	[AsyncStateMachine(typeof(_003CDoWritePropertyNameAsync_003Ed__30))]
	private Task DoWritePropertyNameAsync(Task task, string name, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x3D86210", Offset = "0x3D86210", VA = "0x3D86210", Slot = "18")]
	public override Task WritePropertyNameAsync(string name, bool escape, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x3D86230", Offset = "0x3D86230", VA = "0x3D86230")]
	[AsyncStateMachine(typeof(_003CDoWritePropertyNameAsync_003Ed__32))]
	internal Task DoWritePropertyNameAsync(string name, bool escape, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x3D86360", Offset = "0x3D86360", VA = "0x3D86360", Slot = "19")]
	public override Task WriteStartArrayAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x3D86370", Offset = "0x3D86370", VA = "0x3D86370")]
	internal Task DoWriteStartArrayAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x3D86430", Offset = "0x3D86430", VA = "0x3D86430")]
	[AsyncStateMachine(typeof(_003CDoWriteStartArrayAsync_003Ed__35))]
	internal Task DoWriteStartArrayAsync(Task task, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x3D86550", Offset = "0x3D86550", VA = "0x3D86550", Slot = "23")]
	public override Task WriteStartObjectAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x3D86560", Offset = "0x3D86560", VA = "0x3D86560")]
	internal Task DoWriteStartObjectAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x3D86620", Offset = "0x3D86620", VA = "0x3D86620")]
	[AsyncStateMachine(typeof(_003CDoWriteStartObjectAsync_003Ed__38))]
	internal Task DoWriteStartObjectAsync(Task task, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x3D86740", Offset = "0x3D86740", VA = "0x3D86740", Slot = "22")]
	public override Task WriteStartConstructorAsync(string name, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x3D86750", Offset = "0x3D86750", VA = "0x3D86750")]
	[AsyncStateMachine(typeof(_003CDoWriteStartConstructorAsync_003Ed__40))]
	internal Task DoWriteStartConstructorAsync(string name, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x3D86870", Offset = "0x3D86870", VA = "0x3D86870", Slot = "63")]
	public override Task WriteUndefinedAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x3D86880", Offset = "0x3D86880", VA = "0x3D86880")]
	internal Task DoWriteUndefinedAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x3D86960", Offset = "0x3D86960", VA = "0x3D86960")]
	[AsyncStateMachine(typeof(_003CDoWriteUndefinedAsync_003Ed__43))]
	private Task DoWriteUndefinedAsync(Task task, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x3D86A80", Offset = "0x3D86A80", VA = "0x3D86A80", Slot = "64")]
	public override Task WriteWhitespaceAsync(string ws, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x3D86B10", Offset = "0x3D86B10", VA = "0x3D86B10")]
	internal Task DoWriteWhitespaceAsync(string ws, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x3D86B80", Offset = "0x3D86B80", VA = "0x3D86B80", Slot = "25")]
	public override Task WriteValueAsync(bool value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x3D86C00", Offset = "0x3D86C00", VA = "0x3D86C00")]
	internal Task DoWriteValueAsync(bool value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x3D86C70", Offset = "0x3D86C70", VA = "0x3D86C70", Slot = "26")]
	public override Task WriteValueAsync(bool? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x3D86C80", Offset = "0x3D86C80", VA = "0x3D86C80")]
	internal Task DoWriteValueAsync(bool? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x3D86D70", Offset = "0x3D86D70", VA = "0x3D86D70", Slot = "27")]
	public override Task WriteValueAsync(byte value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x3D86DA0", Offset = "0x3D86DA0", VA = "0x3D86DA0", Slot = "28")]
	public override Task WriteValueAsync(byte? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x3D86DB0", Offset = "0x3D86DB0", VA = "0x3D86DB0")]
	internal Task DoWriteValueAsync(byte? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x3D86E60", Offset = "0x3D86E60", VA = "0x3D86E60", Slot = "29")]
	public override Task WriteValueAsync(byte[]? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x3D86E90", Offset = "0x3D86E90", VA = "0x3D86E90")]
	[AsyncStateMachine(typeof(_003CWriteValueNonNullAsync_003Ed__54))]
	internal Task WriteValueNonNullAsync(byte[] value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x3D86FB0", Offset = "0x3D86FB0", VA = "0x3D86FB0", Slot = "30")]
	public override Task WriteValueAsync(char value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x3D87030", Offset = "0x3D87030", VA = "0x3D87030")]
	internal Task DoWriteValueAsync(char value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x3D870A0", Offset = "0x3D870A0", VA = "0x3D870A0", Slot = "31")]
	public override Task WriteValueAsync(char? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x3D870B0", Offset = "0x3D870B0", VA = "0x3D870B0")]
	internal Task DoWriteValueAsync(char? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x3D87190", Offset = "0x3D87190", VA = "0x3D87190", Slot = "32")]
	public override Task WriteValueAsync(DateTime value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x3D871A0", Offset = "0x3D871A0", VA = "0x3D871A0")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__60))]
	internal Task DoWriteValueAsync(DateTime value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x3D872B0", Offset = "0x3D872B0", VA = "0x3D872B0", Slot = "33")]
	public override Task WriteValueAsync(DateTime? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x3D872D0", Offset = "0x3D872D0", VA = "0x3D872D0")]
	internal Task DoWriteValueAsync(DateTime? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x3D87390", Offset = "0x3D87390", VA = "0x3D87390", Slot = "34")]
	public override Task WriteValueAsync(DateTimeOffset value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x3D873A0", Offset = "0x3D873A0", VA = "0x3D873A0")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__64))]
	internal Task DoWriteValueAsync(DateTimeOffset value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x3D874D0", Offset = "0x3D874D0", VA = "0x3D874D0", Slot = "35")]
	public override Task WriteValueAsync(DateTimeOffset? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x3D874E0", Offset = "0x3D874E0", VA = "0x3D874E0")]
	internal Task DoWriteValueAsync(DateTimeOffset? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x3D87590", Offset = "0x3D87590", VA = "0x3D87590", Slot = "36")]
	public override Task WriteValueAsync(decimal value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x3D87630", Offset = "0x3D87630", VA = "0x3D87630")]
	internal Task DoWriteValueAsync(decimal value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x3D876B0", Offset = "0x3D876B0", VA = "0x3D876B0", Slot = "37")]
	public override Task WriteValueAsync(decimal? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x3D876C0", Offset = "0x3D876C0", VA = "0x3D876C0")]
	internal Task DoWriteValueAsync(decimal? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x3D877C0", Offset = "0x3D877C0", VA = "0x3D877C0", Slot = "38")]
	public override Task WriteValueAsync(double value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x3D87870", Offset = "0x3D87870", VA = "0x3D87870")]
	internal Task WriteValueAsync(double value, bool nullable, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x3D87910", Offset = "0x3D87910", VA = "0x3D87910", Slot = "39")]
	public override Task WriteValueAsync(double? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x3D87A30", Offset = "0x3D87A30", VA = "0x3D87A30", Slot = "40")]
	public override Task WriteValueAsync(float value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x3D87AF0", Offset = "0x3D87AF0", VA = "0x3D87AF0")]
	internal Task WriteValueAsync(float value, bool nullable, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x3D87B90", Offset = "0x3D87B90", VA = "0x3D87B90", Slot = "41")]
	public override Task WriteValueAsync(float? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x3D87CA0", Offset = "0x3D87CA0", VA = "0x3D87CA0", Slot = "42")]
	public override Task WriteValueAsync(Guid value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x3D87CB0", Offset = "0x3D87CB0", VA = "0x3D87CB0")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__78))]
	internal Task DoWriteValueAsync(Guid value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x3D87DD0", Offset = "0x3D87DD0", VA = "0x3D87DD0", Slot = "43")]
	public override Task WriteValueAsync(Guid? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x3D87DE0", Offset = "0x3D87DE0", VA = "0x3D87DE0")]
	internal Task DoWriteValueAsync(Guid? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x3D87E90", Offset = "0x3D87E90", VA = "0x3D87E90", Slot = "44")]
	public override Task WriteValueAsync(int value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x3D87EC0", Offset = "0x3D87EC0", VA = "0x3D87EC0", Slot = "45")]
	public override Task WriteValueAsync(int? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x3D87ED0", Offset = "0x3D87ED0", VA = "0x3D87ED0")]
	internal Task DoWriteValueAsync(int? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x3D87F90", Offset = "0x3D87F90", VA = "0x3D87F90", Slot = "46")]
	public override Task WriteValueAsync(long value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x3D87FC0", Offset = "0x3D87FC0", VA = "0x3D87FC0", Slot = "47")]
	public override Task WriteValueAsync(long? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x3D87FE0", Offset = "0x3D87FE0", VA = "0x3D87FE0")]
	internal Task DoWriteValueAsync(long? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x3D880A0", Offset = "0x3D880A0", VA = "0x3D880A0")]
	internal Task WriteValueAsync(BigInteger value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x3D88150", Offset = "0x3D88150", VA = "0x3D88150", Slot = "48")]
	public override Task WriteValueAsync(object? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x3D88280", Offset = "0x3D88280", VA = "0x3D88280", Slot = "49")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(sbyte value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x3D882C0", Offset = "0x3D882C0", VA = "0x3D882C0", Slot = "50")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(sbyte? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x3D882D0", Offset = "0x3D882D0", VA = "0x3D882D0")]
	internal Task DoWriteValueAsync(sbyte? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x3D88390", Offset = "0x3D88390", VA = "0x3D88390", Slot = "51")]
	public override Task WriteValueAsync(short value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x3D883D0", Offset = "0x3D883D0", VA = "0x3D883D0", Slot = "52")]
	public override Task WriteValueAsync(short? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x3D883E0", Offset = "0x3D883E0", VA = "0x3D883E0")]
	internal Task DoWriteValueAsync(short? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x3D884A0", Offset = "0x3D884A0", VA = "0x3D884A0", Slot = "53")]
	public override Task WriteValueAsync(string? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x3D884B0", Offset = "0x3D884B0", VA = "0x3D884B0")]
	internal Task DoWriteValueAsync(string? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x3D88650", Offset = "0x3D88650", VA = "0x3D88650")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__97))]
	private Task DoWriteValueAsync(Task task, string? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x3D88790", Offset = "0x3D88790", VA = "0x3D88790", Slot = "54")]
	public override Task WriteValueAsync(TimeSpan value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x3D887A0", Offset = "0x3D887A0", VA = "0x3D887A0")]
	[AsyncStateMachine(typeof(_003CDoWriteValueAsync_003Ed__99))]
	internal Task DoWriteValueAsync(TimeSpan value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x3D888B0", Offset = "0x3D888B0", VA = "0x3D888B0", Slot = "55")]
	public override Task WriteValueAsync(TimeSpan? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x3D888D0", Offset = "0x3D888D0", VA = "0x3D888D0")]
	internal Task DoWriteValueAsync(TimeSpan? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x3D88990", Offset = "0x3D88990", VA = "0x3D88990", Slot = "56")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(uint value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x3D889B0", Offset = "0x3D889B0", VA = "0x3D889B0", Slot = "57")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(uint? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x3D889C0", Offset = "0x3D889C0", VA = "0x3D889C0")]
	internal Task DoWriteValueAsync(uint? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x3D88A70", Offset = "0x3D88A70", VA = "0x3D88A70", Slot = "58")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(ulong value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x3D88A90", Offset = "0x3D88A90", VA = "0x3D88A90", Slot = "59")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(ulong? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x3D88AB0", Offset = "0x3D88AB0", VA = "0x3D88AB0")]
	internal Task DoWriteValueAsync(ulong? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x3D88B70", Offset = "0x3D88B70", VA = "0x3D88B70", Slot = "60")]
	public override Task WriteValueAsync(Uri? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x3D88C10", Offset = "0x3D88C10", VA = "0x3D88C10")]
	internal Task WriteValueNotNullAsync(Uri value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x3D88D60", Offset = "0x3D88D60", VA = "0x3D88D60")]
	[AsyncStateMachine(typeof(_003CWriteValueNotNullAsync_003Ed__110))]
	internal Task WriteValueNotNullAsync(Task task, Uri value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x3D88EA0", Offset = "0x3D88EA0", VA = "0x3D88EA0", Slot = "61")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(ushort value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x3D88EC0", Offset = "0x3D88EC0", VA = "0x3D88EC0", Slot = "62")]
	[CLSCompliant(false)]
	public override Task WriteValueAsync(ushort? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x3D88ED0", Offset = "0x3D88ED0", VA = "0x3D88ED0")]
	internal Task DoWriteValueAsync(ushort? value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x3D88F80", Offset = "0x3D88F80", VA = "0x3D88F80", Slot = "20")]
	public override Task WriteCommentAsync(string? text, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x3D88F90", Offset = "0x3D88F90", VA = "0x3D88F90")]
	[AsyncStateMachine(typeof(_003CDoWriteCommentAsync_003Ed__115))]
	internal Task DoWriteCommentAsync(string? text, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x3D890B0", Offset = "0x3D890B0", VA = "0x3D890B0", Slot = "13")]
	public override Task WriteEndArrayAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x3D890D0", Offset = "0x3D890D0", VA = "0x3D890D0", Slot = "14")]
	public override Task WriteEndConstructorAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x3D890F0", Offset = "0x3D890F0", VA = "0x3D890F0", Slot = "15")]
	public override Task WriteEndObjectAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x3D89110", Offset = "0x3D89110", VA = "0x3D89110", Slot = "21")]
	public override Task WriteRawValueAsync(string? json, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x3D89120", Offset = "0x3D89120", VA = "0x3D89120")]
	internal Task DoWriteRawValueAsync(string? json, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x3D891E0", Offset = "0x3D891E0", VA = "0x3D891E0")]
	[AsyncStateMachine(typeof(_003CDoWriteRawValueAsync_003Ed__121))]
	private Task DoWriteRawValueAsync(Task task, string? json, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x3D89320", Offset = "0x3D89320", VA = "0x3D89320")]
	internal char[] EnsureWriteBuffer(int length, int copyTo)
	{
		return null;
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x3D896E0", Offset = "0x3D896E0", VA = "0x3D896E0")]
	public JsonTextWriter(TextWriter textWriter)
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x3D89870", Offset = "0x3D89870", VA = "0x3D89870", Slot = "66")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x3D898A0", Offset = "0x3D898A0", VA = "0x3D898A0", Slot = "67")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x3D89920", Offset = "0x3D89920", VA = "0x3D89920")]
	private void CloseBufferAndWriter()
	{
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x3D89990", Offset = "0x3D89990", VA = "0x3D89990", Slot = "68")]
	public override void WriteStartObject()
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x3D899D0", Offset = "0x3D899D0", VA = "0x3D899D0", Slot = "70")]
	public override void WriteStartArray()
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x3D89A10", Offset = "0x3D89A10", VA = "0x3D89A10", Slot = "72")]
	public override void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x3D89AC0", Offset = "0x3D89AC0", VA = "0x3D89AC0", Slot = "78")]
	protected override void WriteEnd(JsonToken token)
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x3D89BD0", Offset = "0x3D89BD0", VA = "0x3D89BD0", Slot = "74")]
	public override void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x3D89D00", Offset = "0x3D89D00", VA = "0x3D89D00", Slot = "75")]
	public override void WritePropertyName(string name, bool escape)
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x3D89DE0", Offset = "0x3D89DE0", VA = "0x3D89DE0", Slot = "65")]
	internal override void OnStringEscapeHandlingChanged()
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x3D89610", Offset = "0x3D89610", VA = "0x3D89610")]
	private void UpdateCharEscapeFlags()
	{
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x3D89E50", Offset = "0x3D89E50", VA = "0x3D89E50", Slot = "79")]
	protected override void WriteIndent()
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x3D85390", Offset = "0x3D85390", VA = "0x3D85390")]
	private int SetIndentChars()
	{
		return default(int);
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x3D89F70", Offset = "0x3D89F70", VA = "0x3D89F70", Slot = "80")]
	protected override void WriteValueDelimiter()
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x3D89FA0", Offset = "0x3D89FA0", VA = "0x3D89FA0", Slot = "81")]
	protected override void WriteIndentSpace()
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x3D89FD0", Offset = "0x3D89FD0", VA = "0x3D89FD0")]
	private void WriteValueInternal(string value, JsonToken token)
	{
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x3D8A000", Offset = "0x3D8A000", VA = "0x3D8A000", Slot = "123")]
	public override void WriteValue(object? value)
	{
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x3D8A0F0", Offset = "0x3D8A0F0", VA = "0x3D8A0F0", Slot = "82")]
	public override void WriteNull()
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x3D8A170", Offset = "0x3D8A170", VA = "0x3D8A170", Slot = "83")]
	public override void WriteUndefined()
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x3D8A1F0", Offset = "0x3D8A1F0", VA = "0x3D8A1F0", Slot = "84")]
	public override void WriteRaw(string? json)
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x3D8A230", Offset = "0x3D8A230", VA = "0x3D8A230", Slot = "86")]
	public override void WriteValue(string? value)
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x3D89C20", Offset = "0x3D89C20", VA = "0x3D89C20")]
	private void WriteEscapedString(string value, bool quote)
	{
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x3D8A310", Offset = "0x3D8A310", VA = "0x3D8A310", Slot = "87")]
	public override void WriteValue(int value)
	{
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x3D8A3F0", Offset = "0x3D8A3F0", VA = "0x3D8A3F0", Slot = "88")]
	[CLSCompliant(false)]
	public override void WriteValue(uint value)
	{
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x3D8A4D0", Offset = "0x3D8A4D0", VA = "0x3D8A4D0", Slot = "89")]
	public override void WriteValue(long value)
	{
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x3D8A500", Offset = "0x3D8A500", VA = "0x3D8A500", Slot = "90")]
	[CLSCompliant(false)]
	public override void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x3D8A600", Offset = "0x3D8A600", VA = "0x3D8A600", Slot = "91")]
	public override void WriteValue(float value)
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x3D8A6B0", Offset = "0x3D8A6B0", VA = "0x3D8A6B0", Slot = "108")]
	public override void WriteValue(float? value)
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x3D8A7A0", Offset = "0x3D8A7A0", VA = "0x3D8A7A0", Slot = "92")]
	public override void WriteValue(double value)
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x3D8A850", Offset = "0x3D8A850", VA = "0x3D8A850", Slot = "109")]
	public override void WriteValue(double? value)
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x3D8A940", Offset = "0x3D8A940", VA = "0x3D8A940", Slot = "93")]
	public override void WriteValue(bool value)
	{
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x3D8A9D0", Offset = "0x3D8A9D0", VA = "0x3D8A9D0", Slot = "94")]
	public override void WriteValue(short value)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x3D8AA00", Offset = "0x3D8AA00", VA = "0x3D8AA00", Slot = "95")]
	[CLSCompliant(false)]
	public override void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x3D8AA30", Offset = "0x3D8AA30", VA = "0x3D8AA30", Slot = "96")]
	public override void WriteValue(char value)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x3D8AAB0", Offset = "0x3D8AAB0", VA = "0x3D8AAB0", Slot = "97")]
	public override void WriteValue(byte value)
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x3D8AAE0", Offset = "0x3D8AAE0", VA = "0x3D8AAE0", Slot = "98")]
	[CLSCompliant(false)]
	public override void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x3D8AB10", Offset = "0x3D8AB10", VA = "0x3D8AB10", Slot = "99")]
	public override void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x3D8ABA0", Offset = "0x3D8ABA0", VA = "0x3D8ABA0", Slot = "100")]
	public override void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x3D8AD20", Offset = "0x3D8AD20", VA = "0x3D8AD20")]
	private int WriteValueToBuffer(DateTime value)
	{
		return default(int);
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x3D8AE70", Offset = "0x3D8AE70", VA = "0x3D8AE70", Slot = "121")]
	public override void WriteValue(byte[]? value)
	{
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x3D8AFF0", Offset = "0x3D8AFF0", VA = "0x3D8AFF0", Slot = "101")]
	public override void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x3D8B140", Offset = "0x3D8B140", VA = "0x3D8B140")]
	private int WriteValueToBuffer(DateTimeOffset value)
	{
		return default(int);
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x3D8B310", Offset = "0x3D8B310", VA = "0x3D8B310", Slot = "102")]
	public override void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x3D8B400", Offset = "0x3D8B400", VA = "0x3D8B400", Slot = "103")]
	public override void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x3D8B500", Offset = "0x3D8B500", VA = "0x3D8B500", Slot = "122")]
	public override void WriteValue(Uri? value)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x3D8B5B0", Offset = "0x3D8B5B0", VA = "0x3D8B5B0", Slot = "124")]
	public override void WriteComment(string? text)
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x3D8B660", Offset = "0x3D8B660", VA = "0x3D8B660", Slot = "125")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x3D8A2D0", Offset = "0x3D8A2D0", VA = "0x3D8A2D0")]
	private void EnsureWriteBuffer()
	{
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x3D8A420", Offset = "0x3D8A420", VA = "0x3D8A420")]
	private void WriteIntegerValue(long value)
	{
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x3D8A590", Offset = "0x3D8A590", VA = "0x3D8A590")]
	private void WriteIntegerValue(ulong value, bool negative)
	{
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x3D85B10", Offset = "0x3D85B10", VA = "0x3D85B10")]
	private int WriteNumberToBuffer(ulong value, bool negative)
	{
		return default(int);
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x3D8A340", Offset = "0x3D8A340", VA = "0x3D8A340")]
	private void WriteIntegerValue(int value)
	{
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x3D8B780", Offset = "0x3D8B780", VA = "0x3D8B780")]
	private void WriteIntegerValue(uint value, bool negative)
	{
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x3D8B6A0", Offset = "0x3D8B6A0", VA = "0x3D8B6A0")]
	private int WriteNumberToBuffer(uint value, bool negative)
	{
		return default(int);
	}
}
