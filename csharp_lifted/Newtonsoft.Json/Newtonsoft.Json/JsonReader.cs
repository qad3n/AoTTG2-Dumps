// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;
using Newtonsoft.Json.Serialization;

namespace Newtonsoft.Json;

[Token(Token = "0x2000028")]
public abstract class JsonReader : IDisposable
{
	[Token(Token = "0x2000029")]
	protected internal enum State
	{
		[Token(Token = "0x4000071")]
		Start,
		[Token(Token = "0x4000072")]
		Complete,
		[Token(Token = "0x4000073")]
		Property,
		[Token(Token = "0x4000074")]
		ObjectStart,
		[Token(Token = "0x4000075")]
		Object,
		[Token(Token = "0x4000076")]
		ArrayStart,
		[Token(Token = "0x4000077")]
		Array,
		[Token(Token = "0x4000078")]
		Closed,
		[Token(Token = "0x4000079")]
		PostValue,
		[Token(Token = "0x400007A")]
		ConstructorStart,
		[Token(Token = "0x400007B")]
		Constructor,
		[Token(Token = "0x400007C")]
		Error,
		[Token(Token = "0x400007D")]
		Finished
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200002A")]
	[CompilerGenerated]
	private struct _003CMoveToContentFromNonContentAsync_003Ed__14 : IAsyncStateMachine
	{
		[Token(Token = "0x400007E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400007F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x4000080")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonReader _003C_003E4__this;

		[Token(Token = "0x4000081")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000082")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000129")]
		[Address(RVA = "0x5561840", Offset = "0x5560840", VA = "0x5561840", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600012A")]
		[Address(RVA = "0x5561AF0", Offset = "0x5560AF0", VA = "0x5561AF0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200002B")]
	[CompilerGenerated]
	private struct _003CReadAndMoveToContentAsync_003Ed__12 : IAsyncStateMachine
	{
		[Token(Token = "0x4000083")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000084")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x4000085")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonReader _003C_003E4__this;

		[Token(Token = "0x4000086")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000087")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600012B")]
		[Address(RVA = "0x5561B60", Offset = "0x5560B60", VA = "0x5561B60", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600012C")]
		[Address(RVA = "0x5561F40", Offset = "0x5560F40", VA = "0x5561F40", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200002C")]
	[CompilerGenerated]
	private struct _003CReadArrayIntoByteArrayAsync_003Ed__5 : IAsyncStateMachine
	{
		[Token(Token = "0x4000088")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000089")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<byte[]> _003C_003Et__builder;

		[Token(Token = "0x400008A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonReader _003C_003E4__this;

		[Token(Token = "0x400008B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400008C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private List<byte> _003Cbuffer_003E5__2;

		[Token(Token = "0x400008D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600012D")]
		[Address(RVA = "0x5561FB0", Offset = "0x5560FB0", VA = "0x5561FB0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600012E")]
		[Address(RVA = "0x5562360", Offset = "0x5561360", VA = "0x5562360", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200002D")]
	[CompilerGenerated]
	private struct _003CReaderReadAndAssertAsync_003Ed__2 : IAsyncStateMachine
	{
		[Token(Token = "0x400008E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400008F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000090")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonReader _003C_003E4__this;

		[Token(Token = "0x4000091")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000092")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600012F")]
		[Address(RVA = "0x55623D0", Offset = "0x55613D0", VA = "0x55623D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000130")]
		[Address(RVA = "0x5562650", Offset = "0x5561650", VA = "0x5562650", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200002E")]
	[CompilerGenerated]
	private struct _003CSkipAsync_003Ed__1 : IAsyncStateMachine
	{
		[Token(Token = "0x4000093")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000094")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000095")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonReader _003C_003E4__this;

		[Token(Token = "0x4000096")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000097")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000098")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int _003Cdepth_003E5__2;

		[Token(Token = "0x6000131")]
		[Address(RVA = "0x55626B0", Offset = "0x55616B0", VA = "0x55626B0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000132")]
		[Address(RVA = "0x5562AB0", Offset = "0x5561AB0", VA = "0x5562AB0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000061")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private JsonToken _tokenType;

	[Token(Token = "0x4000062")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object? _value;

	[Token(Token = "0x4000063")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal char _quoteChar;

	[Token(Token = "0x4000064")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	internal State _currentState;

	[Token(Token = "0x4000065")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private JsonPosition _currentPosition;

	[Token(Token = "0x4000066")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private CultureInfo? _culture;

	[Token(Token = "0x4000067")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private DateTimeZoneHandling _dateTimeZoneHandling;

	[Token(Token = "0x4000068")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private int? _maxDepth;

	[Token(Token = "0x4000069")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private bool _hasExceededMaxDepth;

	[Token(Token = "0x400006A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	internal DateParseHandling _dateParseHandling;

	[Token(Token = "0x400006B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	internal FloatParseHandling _floatParseHandling;

	[Token(Token = "0x400006C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private string? _dateFormatString;

	[Token(Token = "0x400006D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private List<JsonPosition>? _stack;

	[Token(Token = "0x1700002D")]
	protected State CurrentState
	{
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x555D210", Offset = "0x555C210", VA = "0x555D210")]
		get
		{
			return default(State);
		}
	}

	[Token(Token = "0x1700002E")]
	public bool CloseInput
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x555D220", Offset = "0x555C220", VA = "0x555D220")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x555D230", Offset = "0x555C230", VA = "0x555D230")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public bool SupportMultipleContent
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x555D240", Offset = "0x555C240", VA = "0x555D240")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x555D250", Offset = "0x555C250", VA = "0x555D250")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public virtual char QuoteChar
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x555D260", Offset = "0x555C260", VA = "0x555D260", Slot = "14")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x555D270", Offset = "0x555C270", VA = "0x555D270", Slot = "15")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public DateTimeZoneHandling DateTimeZoneHandling
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x555D280", Offset = "0x555C280", VA = "0x555D280")]
		get
		{
			return default(DateTimeZoneHandling);
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x555D290", Offset = "0x555C290", VA = "0x555D290")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public DateParseHandling DateParseHandling
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x555D2F0", Offset = "0x555C2F0", VA = "0x555D2F0")]
		get
		{
			return default(DateParseHandling);
		}
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x555D300", Offset = "0x555C300", VA = "0x555D300")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public FloatParseHandling FloatParseHandling
	{
		[Token(Token = "0x60000F0")]
		[Address(RVA = "0x555D360", Offset = "0x555C360", VA = "0x555D360")]
		get
		{
			return default(FloatParseHandling);
		}
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x555D370", Offset = "0x555C370", VA = "0x555D370")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public string? DateFormatString
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x555D3D0", Offset = "0x555C3D0", VA = "0x555D3D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x555D3E0", Offset = "0x555C3E0", VA = "0x555D3E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public int? MaxDepth
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x555D3F0", Offset = "0x555C3F0", VA = "0x555D3F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x555D400", Offset = "0x555C400", VA = "0x555D400")]
		set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public virtual JsonToken TokenType
	{
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x555D4B0", Offset = "0x555C4B0", VA = "0x555D4B0", Slot = "16")]
		get
		{
			return default(JsonToken);
		}
	}

	[Token(Token = "0x17000037")]
	public virtual object? Value
	{
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x555D4C0", Offset = "0x555C4C0", VA = "0x555D4C0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000038")]
	public virtual Type? ValueType
	{
		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x555D4D0", Offset = "0x555C4D0", VA = "0x555D4D0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000039")]
	public virtual int Depth
	{
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x555D4F0", Offset = "0x555C4F0", VA = "0x555D4F0", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003A")]
	public virtual string Path
	{
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x555D560", Offset = "0x555C560", VA = "0x555D560", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003B")]
	public CultureInfo Culture
	{
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x555D660", Offset = "0x555C660", VA = "0x555D660")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x555D6C0", Offset = "0x555C6C0", VA = "0x555D6C0")]
		set
		{
		}
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x555C570", Offset = "0x555B570", VA = "0x555C570", Slot = "5")]
	public virtual Task<bool> ReadAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x555C610", Offset = "0x555B610", VA = "0x555C610")]
	[AsyncStateMachine(typeof(_003CSkipAsync_003Ed__1))]
	public Task SkipAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x555C700", Offset = "0x555B700", VA = "0x555C700")]
	[AsyncStateMachine(typeof(_003CReaderReadAndAssertAsync_003Ed__2))]
	internal Task ReaderReadAndAssertAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x555C7F0", Offset = "0x555B7F0", VA = "0x555C7F0", Slot = "6")]
	public virtual Task<bool?> ReadAsBooleanAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x555C8C0", Offset = "0x555B8C0", VA = "0x555C8C0", Slot = "7")]
	public virtual Task<byte[]?>? ReadAsBytesAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x555C990", Offset = "0x555B990", VA = "0x555C990")]
	[AsyncStateMachine(typeof(_003CReadArrayIntoByteArrayAsync_003Ed__5))]
	internal Task<byte[]?>? ReadArrayIntoByteArrayAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x555CAB0", Offset = "0x555BAB0", VA = "0x555CAB0", Slot = "8")]
	public virtual Task<DateTime?> ReadAsDateTimeAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x555CB80", Offset = "0x555BB80", VA = "0x555CB80", Slot = "9")]
	public virtual Task<DateTimeOffset?> ReadAsDateTimeOffsetAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x555CC60", Offset = "0x555BC60", VA = "0x555CC60", Slot = "10")]
	public virtual Task<decimal?> ReadAsDecimalAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x555CD40", Offset = "0x555BD40", VA = "0x555CD40", Slot = "11")]
	public virtual Task<double?> ReadAsDoubleAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x555CDC0", Offset = "0x555BDC0", VA = "0x555CDC0", Slot = "12")]
	public virtual Task<int?> ReadAsInt32Async([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x555CE90", Offset = "0x555BE90", VA = "0x555CE90", Slot = "13")]
	public virtual Task<string?>? ReadAsStringAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x555CF60", Offset = "0x555BF60", VA = "0x555CF60")]
	[AsyncStateMachine(typeof(_003CReadAndMoveToContentAsync_003Ed__12))]
	internal Task<bool> ReadAndMoveToContentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x555D070", Offset = "0x555C070", VA = "0x555D070")]
	internal Task<bool> MoveToContentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x555D100", Offset = "0x555C100", VA = "0x555D100")]
	[AsyncStateMachine(typeof(_003CMoveToContentFromNonContentAsync_003Ed__14))]
	private Task<bool> MoveToContentFromNonContentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x555D6D0", Offset = "0x555C6D0", VA = "0x555D6D0")]
	internal JsonPosition GetPosition(int depth)
	{
		return default(JsonPosition);
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x555D760", Offset = "0x555C760", VA = "0x555D760")]
	protected JsonReader()
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x555D7E0", Offset = "0x555C7E0", VA = "0x555D7E0")]
	private void Push(JsonContainerType value)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x555DBD0", Offset = "0x555CBD0", VA = "0x555DBD0")]
	private JsonContainerType Pop()
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x555DCE0", Offset = "0x555CCE0", VA = "0x555DCE0")]
	private JsonContainerType Peek()
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000102")]
	public abstract bool Read();

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x555DCF0", Offset = "0x555CCF0", VA = "0x555DCF0", Slot = "22")]
	public virtual int? ReadAsInt32()
	{
		return null;
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x555E300", Offset = "0x555D300", VA = "0x555E300")]
	internal int? ReadInt32String(string? s)
	{
		return null;
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x555E4E0", Offset = "0x555D4E0", VA = "0x555E4E0", Slot = "23")]
	public virtual string? ReadAsString()
	{
		return null;
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x555E800", Offset = "0x555D800", VA = "0x555E800", Slot = "24")]
	public virtual byte[]? ReadAsBytes()
	{
		return null;
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x555EF30", Offset = "0x555DF30", VA = "0x555EF30")]
	internal byte[] ReadArrayIntoByteArray()
	{
		return null;
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x555F050", Offset = "0x555E050", VA = "0x555F050")]
	private bool ReadArrayElementIntoByteArrayReportDone(List<byte> buffer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x555F240", Offset = "0x555E240", VA = "0x555F240", Slot = "25")]
	public virtual double? ReadAsDouble()
	{
		return null;
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x555F560", Offset = "0x555E560", VA = "0x555F560")]
	internal double? ReadDoubleString(string? s)
	{
		return null;
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x555F750", Offset = "0x555E750", VA = "0x555F750", Slot = "26")]
	public virtual bool? ReadAsBoolean()
	{
		return null;
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x555FA80", Offset = "0x555EA80", VA = "0x555FA80")]
	internal bool? ReadBooleanString(string? s)
	{
		return null;
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x555FC20", Offset = "0x555EC20", VA = "0x555FC20", Slot = "27")]
	public virtual decimal? ReadAsDecimal()
	{
		return null;
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x5560030", Offset = "0x555F030", VA = "0x5560030")]
	internal decimal? ReadDecimalString(string? s)
	{
		return null;
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x55602F0", Offset = "0x555F2F0", VA = "0x55602F0", Slot = "28")]
	public virtual DateTime? ReadAsDateTime()
	{
		return null;
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x55605C0", Offset = "0x555F5C0", VA = "0x55605C0")]
	internal DateTime? ReadDateTimeString(string? s)
	{
		return null;
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x5560920", Offset = "0x555F920", VA = "0x5560920", Slot = "29")]
	public virtual DateTimeOffset? ReadAsDateTimeOffset()
	{
		return null;
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x5560BE0", Offset = "0x555FBE0", VA = "0x5560BE0")]
	internal DateTimeOffset? ReadDateTimeOffsetString(string? s)
	{
		return null;
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x555EEF0", Offset = "0x555DEF0", VA = "0x555EEF0")]
	internal void ReaderReadAndAssert()
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x5560F00", Offset = "0x555FF00", VA = "0x5560F00")]
	internal JsonReaderException CreateUnexpectedEndException()
	{
		return null;
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x555EC90", Offset = "0x555DC90", VA = "0x555EC90")]
	internal void ReadIntoWrappedTypeObject()
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x5560FB0", Offset = "0x555FFB0", VA = "0x5560FB0")]
	public void Skip()
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x555F040", Offset = "0x555E040", VA = "0x555F040")]
	protected void SetToken(JsonToken newToken)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x5561060", Offset = "0x5560060", VA = "0x5561060")]
	protected void SetToken(JsonToken newToken, object? value)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x555E1C0", Offset = "0x555D1C0", VA = "0x555E1C0")]
	protected void SetToken(JsonToken newToken, object? value, bool updateIndex)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x5561170", Offset = "0x5560170", VA = "0x5561170")]
	internal void SetPostValueState(bool updateIndex)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x555DB50", Offset = "0x555CB50", VA = "0x555DB50")]
	private void UpdateScopeWithFinishedValue()
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x5561070", Offset = "0x5560070", VA = "0x5561070")]
	private void ValidateEnd(JsonToken endToken)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x5561280", Offset = "0x5560280", VA = "0x5561280")]
	protected void SetStateBasedOnCurrent()
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x55611B0", Offset = "0x55601B0", VA = "0x55611B0")]
	private void SetFinished()
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x55611D0", Offset = "0x55601D0", VA = "0x55611D0")]
	private JsonContainerType GetTypeForCloseToken(JsonToken token)
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x5561360", Offset = "0x5560360", VA = "0x5561360", Slot = "4")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x55613D0", Offset = "0x55603D0", VA = "0x55613D0", Slot = "30")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x55613F0", Offset = "0x55603F0", VA = "0x55613F0", Slot = "31")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x5561420", Offset = "0x5560420", VA = "0x5561420")]
	internal void ReadAndAssert()
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x5561470", Offset = "0x5560470", VA = "0x5561470")]
	internal void ReadForTypeAndAssert(JsonContract? contract, bool hasConverter)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x55614B0", Offset = "0x55604B0", VA = "0x55614B0")]
	internal bool ReadForType(JsonContract? contract, bool hasConverter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x5561790", Offset = "0x5560790", VA = "0x5561790")]
	internal bool ReadAndMoveToContent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x55617F0", Offset = "0x55607F0", VA = "0x55617F0")]
	internal bool MoveToContent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x555E0D0", Offset = "0x555D0D0", VA = "0x555E0D0")]
	private JsonToken GetContentToken()
	{
		return default(JsonToken);
	}
}
