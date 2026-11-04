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
		[Address(RVA = "0x1BE78A0", Offset = "0x1BE5EA0", VA = "0x181BE78A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600012A")]
		[Address(RVA = "0x1BE7B00", Offset = "0x1BE6100", VA = "0x181BE7B00", Slot = "5")]
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
		[Address(RVA = "0x1BE7B70", Offset = "0x1BE6170", VA = "0x181BE7B70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600012C")]
		[Address(RVA = "0x1BE7FD0", Offset = "0x1BE65D0", VA = "0x181BE7FD0", Slot = "5")]
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
		[Address(RVA = "0x1BE8040", Offset = "0x1BE6640", VA = "0x181BE8040", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600012E")]
		[Address(RVA = "0x1BE8370", Offset = "0x1BE6970", VA = "0x181BE8370", Slot = "5")]
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
		[Address(RVA = "0x1BE83E0", Offset = "0x1BE69E0", VA = "0x181BE83E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000130")]
		[Address(RVA = "0x1BE85F0", Offset = "0x1BE6BF0", VA = "0x181BE85F0", Slot = "5")]
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
		[Address(RVA = "0x1BE8650", Offset = "0x1BE6C50", VA = "0x181BE8650", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000132")]
		[Address(RVA = "0x1BE89E0", Offset = "0x1BE6FE0", VA = "0x181BE89E0", Slot = "5")]
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
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		get
		{
			return default(State);
		}
	}

	[Token(Token = "0x1700002E")]
	public bool CloseInput
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0xABD390", Offset = "0xABB990", VA = "0x180ABD390")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0xABD3A0", Offset = "0xABB9A0", VA = "0x180ABD3A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public bool SupportMultipleContent
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x1BD3E60", Offset = "0x1BD2460", VA = "0x181BD3E60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x1BD40B0", Offset = "0x1BD26B0", VA = "0x181BD40B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public virtual char QuoteChar
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x1BD3E50", Offset = "0x1BD2450", VA = "0x181BD3E50", Slot = "14")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x1BD40A0", Offset = "0x1BD26A0", VA = "0x181BD40A0", Slot = "15")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public DateTimeZoneHandling DateTimeZoneHandling
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		get
		{
			return default(DateTimeZoneHandling);
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x1BD3F00", Offset = "0x1BD2500", VA = "0x181BD3F00")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public DateParseHandling DateParseHandling
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x1BD3CB0", Offset = "0x1BD22B0", VA = "0x181BD3CB0")]
		get
		{
			return default(DateParseHandling);
		}
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x1BD3E90", Offset = "0x1BD2490", VA = "0x181BD3E90")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public FloatParseHandling FloatParseHandling
	{
		[Token(Token = "0x60000F0")]
		[Address(RVA = "0x1A4F710", Offset = "0x1A4DD10", VA = "0x181A4F710")]
		get
		{
			return default(FloatParseHandling);
		}
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x1BD3F70", Offset = "0x1BD2570", VA = "0x181BD3F70")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public string? DateFormatString
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public int? MaxDepth
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x1BD3D30", Offset = "0x1BD2330", VA = "0x181BD3D30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x1BD3FE0", Offset = "0x1BD25E0", VA = "0x181BD3FE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public virtual JsonToken TokenType
	{
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "16")]
		get
		{
			return default(JsonToken);
		}
	}

	[Token(Token = "0x17000037")]
	public virtual object? Value
	{
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000038")]
	public virtual Type? ValueType
	{
		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x1BD3E70", Offset = "0x1BD2470", VA = "0x181BD3E70", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000039")]
	public virtual int Depth
	{
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x1BD3CC0", Offset = "0x1BD22C0", VA = "0x181BD3CC0", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003A")]
	public virtual string Path
	{
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x1BD3D40", Offset = "0x1BD2340", VA = "0x181BD3D40", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003B")]
	public CultureInfo Culture
	{
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x1BD3C50", Offset = "0x1BD2250", VA = "0x181BD3C50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		set
		{
		}
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x1BD1E30", Offset = "0x1BD0430", VA = "0x181BD1E30", Slot = "5")]
	public virtual Task<bool> ReadAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x1BD36C0", Offset = "0x1BD1CC0", VA = "0x181BD36C0")]
	[AsyncStateMachine(typeof(_003CSkipAsync_003Ed__1))]
	public Task SkipAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x1BD31F0", Offset = "0x1BD17F0", VA = "0x181BD31F0")]
	[AsyncStateMachine(typeof(_003CReaderReadAndAssertAsync_003Ed__2))]
	internal Task ReaderReadAndAssertAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x1BCFAE0", Offset = "0x1BCE0E0", VA = "0x181BCFAE0", Slot = "6")]
	public virtual Task<bool?> ReadAsBooleanAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x1BCFF50", Offset = "0x1BCE550", VA = "0x181BCFF50", Slot = "7")]
	public virtual Task<byte[]?>? ReadAsBytesAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x1BCF8C0", Offset = "0x1BCDEC0", VA = "0x181BCF8C0")]
	[AsyncStateMachine(typeof(_003CReadArrayIntoByteArrayAsync_003Ed__5))]
	internal Task<byte[]?>? ReadArrayIntoByteArrayAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x1BD0490", Offset = "0x1BCEA90", VA = "0x181BD0490", Slot = "8")]
	public virtual Task<DateTime?> ReadAsDateTimeAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x1BD0570", Offset = "0x1BCEB70", VA = "0x181BD0570", Slot = "9")]
	public virtual Task<DateTimeOffset?> ReadAsDateTimeOffsetAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x1BD0C50", Offset = "0x1BCF250", VA = "0x181BD0C50", Slot = "10")]
	public virtual Task<decimal?> ReadAsDecimalAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x1BD11D0", Offset = "0x1BCF7D0", VA = "0x181BD11D0", Slot = "11")]
	public virtual Task<double?> ReadAsDoubleAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x1BD15D0", Offset = "0x1BCFBD0", VA = "0x181BD15D0", Slot = "12")]
	public virtual Task<int?> ReadAsInt32Async([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x1BD1A90", Offset = "0x1BD0090", VA = "0x181BD1A90", Slot = "13")]
	public virtual Task<string?>? ReadAsStringAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x1BCF500", Offset = "0x1BCDB00", VA = "0x181BCF500")]
	[AsyncStateMachine(typeof(_003CReadAndMoveToContentAsync_003Ed__12))]
	internal Task<bool> ReadAndMoveToContentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x1BCED10", Offset = "0x1BCD310", VA = "0x181BCED10")]
	internal Task<bool> MoveToContentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x1BCEEA0", Offset = "0x1BCD4A0", VA = "0x181BCEEA0")]
	[AsyncStateMachine(typeof(_003CMoveToContentFromNonContentAsync_003Ed__14))]
	private Task<bool> MoveToContentFromNonContentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x1BCEB70", Offset = "0x1BCD170", VA = "0x181BCEB70")]
	internal JsonPosition GetPosition(int depth)
	{
		return default(JsonPosition);
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x1BD3BD0", Offset = "0x1BD21D0", VA = "0x181BD3BD0")]
	protected JsonReader()
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x1BCF150", Offset = "0x1BCD750", VA = "0x181BCF150")]
	private void Push(JsonContainerType value)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x1BCF020", Offset = "0x1BCD620", VA = "0x181BCF020")]
	private JsonContainerType Pop()
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
	private JsonContainerType Peek()
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000102")]
	public abstract bool Read();

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x1BD1690", Offset = "0x1BCFC90", VA = "0x181BD1690", Slot = "22")]
	public virtual int? ReadAsInt32()
	{
		return null;
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x1BD2DB0", Offset = "0x1BD13B0", VA = "0x181BD2DB0")]
	internal int? ReadInt32String(string? s)
	{
		return null;
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x1BD1B50", Offset = "0x1BD0150", VA = "0x181BD1B50", Slot = "23")]
	public virtual string? ReadAsString()
	{
		return null;
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x1BD0010", Offset = "0x1BCE610", VA = "0x181BD0010", Slot = "24")]
	public virtual byte[]? ReadAsBytes()
	{
		return null;
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x1BCF9E0", Offset = "0x1BCDFE0", VA = "0x181BCF9E0")]
	internal byte[] ReadArrayIntoByteArray()
	{
		return null;
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x1BCF680", Offset = "0x1BCDC80", VA = "0x181BCF680")]
	private bool ReadArrayElementIntoByteArrayReportDone(List<byte> buffer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x1BD1260", Offset = "0x1BCF860", VA = "0x181BD1260", Slot = "25")]
	public virtual double? ReadAsDouble()
	{
		return null;
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x1BD2900", Offset = "0x1BD0F00", VA = "0x181BD2900")]
	internal double? ReadDoubleString(string? s)
	{
		return null;
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x1BCFBA0", Offset = "0x1BCE1A0", VA = "0x181BCFBA0", Slot = "26")]
	public virtual bool? ReadAsBoolean()
	{
		return null;
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x1BD1EE0", Offset = "0x1BD04E0", VA = "0x181BD1EE0")]
	internal bool? ReadBooleanString(string? s)
	{
		return null;
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x1BD0D40", Offset = "0x1BCF340", VA = "0x181BD0D40", Slot = "27")]
	public virtual decimal? ReadAsDecimal()
	{
		return null;
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x1BD2620", Offset = "0x1BD0C20", VA = "0x181BD2620")]
	internal decimal? ReadDecimalString(string? s)
	{
		return null;
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x1BD0970", Offset = "0x1BCEF70", VA = "0x181BD0970", Slot = "28")]
	public virtual DateTime? ReadAsDateTime()
	{
		return null;
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x1BD2370", Offset = "0x1BD0970", VA = "0x181BD2370")]
	internal DateTime? ReadDateTimeString(string? s)
	{
		return null;
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x1BD0660", Offset = "0x1BCEC60", VA = "0x181BD0660", Slot = "29")]
	public virtual DateTimeOffset? ReadAsDateTimeOffset()
	{
		return null;
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x1BD2070", Offset = "0x1BD0670", VA = "0x181BD2070")]
	internal DateTimeOffset? ReadDateTimeOffsetString(string? s)
	{
		return null;
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x1BD32E0", Offset = "0x1BD18E0", VA = "0x181BD32E0")]
	internal void ReaderReadAndAssert()
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x1BCEA90", Offset = "0x1BCD090", VA = "0x181BCEA90")]
	internal JsonReaderException CreateUnexpectedEndException()
	{
		return null;
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x1BD2F70", Offset = "0x1BD1570", VA = "0x181BD2F70")]
	internal void ReadIntoWrappedTypeObject()
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x1BD37C0", Offset = "0x1BD1DC0", VA = "0x181BD37C0")]
	public void Skip()
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x1BD36A0", Offset = "0x1BD1CA0", VA = "0x181BD36A0")]
	protected void SetToken(JsonToken newToken)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x1BD3680", Offset = "0x1BD1C80", VA = "0x181BD3680")]
	protected void SetToken(JsonToken newToken, object? value)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x1BD3490", Offset = "0x1BD1A90", VA = "0x181BD3490")]
	protected void SetToken(JsonToken newToken, object? value, bool updateIndex)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x1BD3350", Offset = "0x1BD1950", VA = "0x181BD3350")]
	internal void SetPostValueState(bool updateIndex)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x1BD38D0", Offset = "0x1BD1ED0", VA = "0x181BD38D0")]
	private void UpdateScopeWithFinishedValue()
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x1BD38E0", Offset = "0x1BD1EE0", VA = "0x181BD38E0")]
	private void ValidateEnd(JsonToken endToken)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x1BD3380", Offset = "0x1BD1980", VA = "0x181BD3380")]
	protected void SetStateBasedOnCurrent()
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x1BD3330", Offset = "0x1BD1930", VA = "0x181BD3330")]
	private void SetFinished()
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x1BCEC20", Offset = "0x1BCD220", VA = "0x181BCEC20")]
	private JsonContainerType GetTypeForCloseToken(JsonToken token)
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x1BD3870", Offset = "0x1BD1E70", VA = "0x181BD3870", Slot = "4")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x1BCEAD0", Offset = "0x1BCD0D0", VA = "0x181BCEAD0", Slot = "30")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x1BCEA70", Offset = "0x1BCD070", VA = "0x181BCEA70", Slot = "31")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x1BCF4A0", Offset = "0x1BCDAA0", VA = "0x181BCF4A0")]
	internal void ReadAndAssert()
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x1BD2AC0", Offset = "0x1BD10C0", VA = "0x181BD2AC0")]
	internal void ReadForTypeAndAssert(JsonContract? contract, bool hasConverter)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x1BD2B10", Offset = "0x1BD1110", VA = "0x181BD2B10")]
	internal bool ReadForType(JsonContract? contract, bool hasConverter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x1BCF620", Offset = "0x1BCDC20", VA = "0x181BCF620")]
	internal bool ReadAndMoveToContent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x1BCEFC0", Offset = "0x1BCD5C0", VA = "0x181BCEFC0")]
	internal bool MoveToContent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x1BCEB00", Offset = "0x1BCD100", VA = "0x181BCEB00")]
	private JsonToken GetContentToken()
	{
		return default(JsonToken);
	}
}
