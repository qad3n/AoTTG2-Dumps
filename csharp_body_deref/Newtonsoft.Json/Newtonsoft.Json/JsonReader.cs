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
		[Address(RVA = "0x3A6AD80", Offset = "0x3A6AD80", VA = "0x3A6AD80", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600012A")]
		[Address(RVA = "0x3A6B090", Offset = "0x3A6B090", VA = "0x3A6B090", Slot = "5")]
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
		[Address(RVA = "0x3A6B100", Offset = "0x3A6B100", VA = "0x3A6B100", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600012C")]
		[Address(RVA = "0x3A6B590", Offset = "0x3A6B590", VA = "0x3A6B590", Slot = "5")]
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
		[Address(RVA = "0x3A6B600", Offset = "0x3A6B600", VA = "0x3A6B600", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600012E")]
		[Address(RVA = "0x3A6BA40", Offset = "0x3A6BA40", VA = "0x3A6BA40", Slot = "5")]
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
		[Address(RVA = "0x3A6BAB0", Offset = "0x3A6BAB0", VA = "0x3A6BAB0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000130")]
		[Address(RVA = "0x3A6BDF0", Offset = "0x3A6BDF0", VA = "0x3A6BDF0", Slot = "5")]
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
		[Address(RVA = "0x3A6BE50", Offset = "0x3A6BE50", VA = "0x3A6BE50", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000132")]
		[Address(RVA = "0x3A6C330", Offset = "0x3A6C330", VA = "0x3A6C330", Slot = "5")]
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
		[Address(RVA = "0x3A666C0", Offset = "0x3A666C0", VA = "0x3A666C0")]
		get
		{
			return default(State);
		}
	}

	[Token(Token = "0x1700002E")]
	public bool CloseInput
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x3A666D0", Offset = "0x3A666D0", VA = "0x3A666D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x3A666E0", Offset = "0x3A666E0", VA = "0x3A666E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public bool SupportMultipleContent
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x3A666F0", Offset = "0x3A666F0", VA = "0x3A666F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x3A66700", Offset = "0x3A66700", VA = "0x3A66700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public virtual char QuoteChar
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x3A66710", Offset = "0x3A66710", VA = "0x3A66710", Slot = "14")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x3A66720", Offset = "0x3A66720", VA = "0x3A66720", Slot = "15")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public DateTimeZoneHandling DateTimeZoneHandling
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x3A66730", Offset = "0x3A66730", VA = "0x3A66730")]
		get
		{
			return default(DateTimeZoneHandling);
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x3A66740", Offset = "0x3A66740", VA = "0x3A66740")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public DateParseHandling DateParseHandling
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x3A667A0", Offset = "0x3A667A0", VA = "0x3A667A0")]
		get
		{
			return default(DateParseHandling);
		}
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x3A667B0", Offset = "0x3A667B0", VA = "0x3A667B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public FloatParseHandling FloatParseHandling
	{
		[Token(Token = "0x60000F0")]
		[Address(RVA = "0x3A66810", Offset = "0x3A66810", VA = "0x3A66810")]
		get
		{
			return default(FloatParseHandling);
		}
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x3A66820", Offset = "0x3A66820", VA = "0x3A66820")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public string? DateFormatString
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x3A66880", Offset = "0x3A66880", VA = "0x3A66880")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x3A66890", Offset = "0x3A66890", VA = "0x3A66890")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public int? MaxDepth
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x3A668A0", Offset = "0x3A668A0", VA = "0x3A668A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x3A668B0", Offset = "0x3A668B0", VA = "0x3A668B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public virtual JsonToken TokenType
	{
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x3A66960", Offset = "0x3A66960", VA = "0x3A66960", Slot = "16")]
		get
		{
			return default(JsonToken);
		}
	}

	[Token(Token = "0x17000037")]
	public virtual object? Value
	{
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x3A66970", Offset = "0x3A66970", VA = "0x3A66970", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000038")]
	public virtual Type? ValueType
	{
		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x3A66980", Offset = "0x3A66980", VA = "0x3A66980", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000039")]
	public virtual int Depth
	{
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x3A669A0", Offset = "0x3A669A0", VA = "0x3A669A0", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003A")]
	public virtual string Path
	{
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x3A66A10", Offset = "0x3A66A10", VA = "0x3A66A10", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003B")]
	public CultureInfo Culture
	{
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x3A66B30", Offset = "0x3A66B30", VA = "0x3A66B30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x3A66B90", Offset = "0x3A66B90", VA = "0x3A66B90")]
		set
		{
		}
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x3A659B0", Offset = "0x3A659B0", VA = "0x3A659B0", Slot = "5")]
	public virtual Task<bool> ReadAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x3A65A50", Offset = "0x3A65A50", VA = "0x3A65A50")]
	[AsyncStateMachine(typeof(_003CSkipAsync_003Ed__1))]
	public Task SkipAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x3A65B50", Offset = "0x3A65B50", VA = "0x3A65B50")]
	[AsyncStateMachine(typeof(_003CReaderReadAndAssertAsync_003Ed__2))]
	internal Task ReaderReadAndAssertAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x3A65C50", Offset = "0x3A65C50", VA = "0x3A65C50", Slot = "6")]
	public virtual Task<bool?> ReadAsBooleanAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x3A65D20", Offset = "0x3A65D20", VA = "0x3A65D20", Slot = "7")]
	public virtual Task<byte[]?>? ReadAsBytesAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x3A65DF0", Offset = "0x3A65DF0", VA = "0x3A65DF0")]
	[AsyncStateMachine(typeof(_003CReadArrayIntoByteArrayAsync_003Ed__5))]
	internal Task<byte[]?>? ReadArrayIntoByteArrayAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x3A65F10", Offset = "0x3A65F10", VA = "0x3A65F10", Slot = "8")]
	public virtual Task<DateTime?> ReadAsDateTimeAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x3A65FE0", Offset = "0x3A65FE0", VA = "0x3A65FE0", Slot = "9")]
	public virtual Task<DateTimeOffset?> ReadAsDateTimeOffsetAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x3A660E0", Offset = "0x3A660E0", VA = "0x3A660E0", Slot = "10")]
	public virtual Task<decimal?> ReadAsDecimalAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x3A661E0", Offset = "0x3A661E0", VA = "0x3A661E0", Slot = "11")]
	public virtual Task<double?> ReadAsDoubleAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x3A66260", Offset = "0x3A66260", VA = "0x3A66260", Slot = "12")]
	public virtual Task<int?> ReadAsInt32Async([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x3A66330", Offset = "0x3A66330", VA = "0x3A66330", Slot = "13")]
	public virtual Task<string?>? ReadAsStringAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x3A66400", Offset = "0x3A66400", VA = "0x3A66400")]
	[AsyncStateMachine(typeof(_003CReadAndMoveToContentAsync_003Ed__12))]
	internal Task<bool> ReadAndMoveToContentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x3A66520", Offset = "0x3A66520", VA = "0x3A66520")]
	internal Task<bool> MoveToContentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x3A665A0", Offset = "0x3A665A0", VA = "0x3A665A0")]
	[AsyncStateMachine(typeof(_003CMoveToContentFromNonContentAsync_003Ed__14))]
	private Task<bool> MoveToContentFromNonContentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x3A66BA0", Offset = "0x3A66BA0", VA = "0x3A66BA0")]
	internal JsonPosition GetPosition(int depth)
	{
		return default(JsonPosition);
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x3A66C30", Offset = "0x3A66C30", VA = "0x3A66C30")]
	protected JsonReader()
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x3A66CB0", Offset = "0x3A66CB0", VA = "0x3A66CB0")]
	private void Push(JsonContainerType value)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x3A670B0", Offset = "0x3A670B0", VA = "0x3A670B0")]
	private JsonContainerType Pop()
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x3A671D0", Offset = "0x3A671D0", VA = "0x3A671D0")]
	private JsonContainerType Peek()
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000102")]
	public abstract bool Read();

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x3A671E0", Offset = "0x3A671E0", VA = "0x3A671E0", Slot = "22")]
	public virtual int? ReadAsInt32()
	{
		return null;
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x3A677F0", Offset = "0x3A677F0", VA = "0x3A677F0")]
	internal int? ReadInt32String(string? s)
	{
		return null;
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x3A679D0", Offset = "0x3A679D0", VA = "0x3A679D0", Slot = "23")]
	public virtual string? ReadAsString()
	{
		return null;
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x3A67CF0", Offset = "0x3A67CF0", VA = "0x3A67CF0", Slot = "24")]
	public virtual byte[]? ReadAsBytes()
	{
		return null;
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x3A68450", Offset = "0x3A68450", VA = "0x3A68450")]
	internal byte[] ReadArrayIntoByteArray()
	{
		return null;
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x3A68570", Offset = "0x3A68570", VA = "0x3A68570")]
	private bool ReadArrayElementIntoByteArrayReportDone(List<byte> buffer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x3A68760", Offset = "0x3A68760", VA = "0x3A68760", Slot = "25")]
	public virtual double? ReadAsDouble()
	{
		return null;
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x3A68A80", Offset = "0x3A68A80", VA = "0x3A68A80")]
	internal double? ReadDoubleString(string? s)
	{
		return null;
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x3A68C70", Offset = "0x3A68C70", VA = "0x3A68C70", Slot = "26")]
	public virtual bool? ReadAsBoolean()
	{
		return null;
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x3A68FA0", Offset = "0x3A68FA0", VA = "0x3A68FA0")]
	internal bool? ReadBooleanString(string? s)
	{
		return null;
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x3A69140", Offset = "0x3A69140", VA = "0x3A69140", Slot = "27")]
	public virtual decimal? ReadAsDecimal()
	{
		return null;
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x3A69550", Offset = "0x3A69550", VA = "0x3A69550")]
	internal decimal? ReadDecimalString(string? s)
	{
		return null;
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x3A69810", Offset = "0x3A69810", VA = "0x3A69810", Slot = "28")]
	public virtual DateTime? ReadAsDateTime()
	{
		return null;
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x3A69AF0", Offset = "0x3A69AF0", VA = "0x3A69AF0")]
	internal DateTime? ReadDateTimeString(string? s)
	{
		return null;
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x3A69E50", Offset = "0x3A69E50", VA = "0x3A69E50", Slot = "29")]
	public virtual DateTimeOffset? ReadAsDateTimeOffset()
	{
		return null;
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x3A6A110", Offset = "0x3A6A110", VA = "0x3A6A110")]
	internal DateTimeOffset? ReadDateTimeOffsetString(string? s)
	{
		return null;
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x3A68410", Offset = "0x3A68410", VA = "0x3A68410")]
	internal void ReaderReadAndAssert()
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x3A6A430", Offset = "0x3A6A430", VA = "0x3A6A430")]
	internal JsonReaderException CreateUnexpectedEndException()
	{
		return null;
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x3A681A0", Offset = "0x3A681A0", VA = "0x3A681A0")]
	internal void ReadIntoWrappedTypeObject()
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x3A6A4E0", Offset = "0x3A6A4E0", VA = "0x3A6A4E0")]
	public void Skip()
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x3A68560", Offset = "0x3A68560", VA = "0x3A68560")]
	protected void SetToken(JsonToken newToken)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x3A6A590", Offset = "0x3A6A590", VA = "0x3A6A590")]
	protected void SetToken(JsonToken newToken, object? value)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x3A676B0", Offset = "0x3A676B0", VA = "0x3A676B0")]
	protected void SetToken(JsonToken newToken, object? value, bool updateIndex)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x3A6A6A0", Offset = "0x3A6A6A0", VA = "0x3A6A6A0")]
	internal void SetPostValueState(bool updateIndex)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x3A67030", Offset = "0x3A67030", VA = "0x3A67030")]
	private void UpdateScopeWithFinishedValue()
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x3A6A5A0", Offset = "0x3A6A5A0", VA = "0x3A6A5A0")]
	private void ValidateEnd(JsonToken endToken)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x3A6A7B0", Offset = "0x3A6A7B0", VA = "0x3A6A7B0")]
	protected void SetStateBasedOnCurrent()
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x3A6A6E0", Offset = "0x3A6A6E0", VA = "0x3A6A6E0")]
	private void SetFinished()
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x3A6A700", Offset = "0x3A6A700", VA = "0x3A6A700")]
	private JsonContainerType GetTypeForCloseToken(JsonToken token)
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x3A6A890", Offset = "0x3A6A890", VA = "0x3A6A890", Slot = "4")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x3A6A900", Offset = "0x3A6A900", VA = "0x3A6A900", Slot = "30")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x3A6A920", Offset = "0x3A6A920", VA = "0x3A6A920", Slot = "31")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x3A6A950", Offset = "0x3A6A950", VA = "0x3A6A950")]
	internal void ReadAndAssert()
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x3A6A9A0", Offset = "0x3A6A9A0", VA = "0x3A6A9A0")]
	internal void ReadForTypeAndAssert(JsonContract? contract, bool hasConverter)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x3A6A9E0", Offset = "0x3A6A9E0", VA = "0x3A6A9E0")]
	internal bool ReadForType(JsonContract? contract, bool hasConverter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x3A6ACC0", Offset = "0x3A6ACC0", VA = "0x3A6ACC0")]
	internal bool ReadAndMoveToContent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x3A6AD20", Offset = "0x3A6AD20", VA = "0x3A6AD20")]
	internal bool MoveToContent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x3A675C0", Offset = "0x3A675C0", VA = "0x3A675C0")]
	private JsonToken GetContentToken()
	{
		return default(JsonToken);
	}
}
