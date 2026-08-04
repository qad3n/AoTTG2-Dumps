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
		[Address(RVA = "0x3D606D0", Offset = "0x3D606D0", VA = "0x3D606D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600012A")]
		[Address(RVA = "0x3D609E0", Offset = "0x3D609E0", VA = "0x3D609E0", Slot = "5")]
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
		[Address(RVA = "0x3D60A50", Offset = "0x3D60A50", VA = "0x3D60A50", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600012C")]
		[Address(RVA = "0x3D60EE0", Offset = "0x3D60EE0", VA = "0x3D60EE0", Slot = "5")]
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
		[Address(RVA = "0x3D60F50", Offset = "0x3D60F50", VA = "0x3D60F50", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600012E")]
		[Address(RVA = "0x3D61390", Offset = "0x3D61390", VA = "0x3D61390", Slot = "5")]
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
		[Address(RVA = "0x3D61400", Offset = "0x3D61400", VA = "0x3D61400", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000130")]
		[Address(RVA = "0x3D61740", Offset = "0x3D61740", VA = "0x3D61740", Slot = "5")]
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
		[Address(RVA = "0x3D617A0", Offset = "0x3D617A0", VA = "0x3D617A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000132")]
		[Address(RVA = "0x3D61C80", Offset = "0x3D61C80", VA = "0x3D61C80", Slot = "5")]
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
		[Address(RVA = "0x3D5C010", Offset = "0x3D5C010", VA = "0x3D5C010")]
		get
		{
			return default(State);
		}
	}

	[Token(Token = "0x1700002E")]
	public bool CloseInput
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x3D5C020", Offset = "0x3D5C020", VA = "0x3D5C020")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x3D5C030", Offset = "0x3D5C030", VA = "0x3D5C030")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public bool SupportMultipleContent
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x3D5C040", Offset = "0x3D5C040", VA = "0x3D5C040")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x3D5C050", Offset = "0x3D5C050", VA = "0x3D5C050")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public virtual char QuoteChar
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x3D5C060", Offset = "0x3D5C060", VA = "0x3D5C060", Slot = "14")]
		get
		{
			return default(char);
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x3D5C070", Offset = "0x3D5C070", VA = "0x3D5C070", Slot = "15")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public DateTimeZoneHandling DateTimeZoneHandling
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x3D5C080", Offset = "0x3D5C080", VA = "0x3D5C080")]
		get
		{
			return default(DateTimeZoneHandling);
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x3D5C090", Offset = "0x3D5C090", VA = "0x3D5C090")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public DateParseHandling DateParseHandling
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x3D5C0F0", Offset = "0x3D5C0F0", VA = "0x3D5C0F0")]
		get
		{
			return default(DateParseHandling);
		}
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x3D5C100", Offset = "0x3D5C100", VA = "0x3D5C100")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public FloatParseHandling FloatParseHandling
	{
		[Token(Token = "0x60000F0")]
		[Address(RVA = "0x3D5C160", Offset = "0x3D5C160", VA = "0x3D5C160")]
		get
		{
			return default(FloatParseHandling);
		}
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x3D5C170", Offset = "0x3D5C170", VA = "0x3D5C170")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public string? DateFormatString
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x3D5C1D0", Offset = "0x3D5C1D0", VA = "0x3D5C1D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x3D5C1E0", Offset = "0x3D5C1E0", VA = "0x3D5C1E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public int? MaxDepth
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x3D5C1F0", Offset = "0x3D5C1F0", VA = "0x3D5C1F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x3D5C200", Offset = "0x3D5C200", VA = "0x3D5C200")]
		set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public virtual JsonToken TokenType
	{
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x3D5C2B0", Offset = "0x3D5C2B0", VA = "0x3D5C2B0", Slot = "16")]
		get
		{
			return default(JsonToken);
		}
	}

	[Token(Token = "0x17000037")]
	public virtual object? Value
	{
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x3D5C2C0", Offset = "0x3D5C2C0", VA = "0x3D5C2C0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000038")]
	public virtual Type? ValueType
	{
		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x3D5C2D0", Offset = "0x3D5C2D0", VA = "0x3D5C2D0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000039")]
	public virtual int Depth
	{
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x3D5C2F0", Offset = "0x3D5C2F0", VA = "0x3D5C2F0", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003A")]
	public virtual string Path
	{
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x3D5C360", Offset = "0x3D5C360", VA = "0x3D5C360", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003B")]
	public CultureInfo Culture
	{
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x3D5C480", Offset = "0x3D5C480", VA = "0x3D5C480")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x3D5C4E0", Offset = "0x3D5C4E0", VA = "0x3D5C4E0")]
		set
		{
		}
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x3D5B300", Offset = "0x3D5B300", VA = "0x3D5B300", Slot = "5")]
	public virtual Task<bool> ReadAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x3D5B3A0", Offset = "0x3D5B3A0", VA = "0x3D5B3A0")]
	[AsyncStateMachine(typeof(_003CSkipAsync_003Ed__1))]
	public Task SkipAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x3D5B4A0", Offset = "0x3D5B4A0", VA = "0x3D5B4A0")]
	[AsyncStateMachine(typeof(_003CReaderReadAndAssertAsync_003Ed__2))]
	internal Task ReaderReadAndAssertAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x3D5B5A0", Offset = "0x3D5B5A0", VA = "0x3D5B5A0", Slot = "6")]
	public virtual Task<bool?> ReadAsBooleanAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x3D5B670", Offset = "0x3D5B670", VA = "0x3D5B670", Slot = "7")]
	public virtual Task<byte[]?>? ReadAsBytesAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x3D5B740", Offset = "0x3D5B740", VA = "0x3D5B740")]
	[AsyncStateMachine(typeof(_003CReadArrayIntoByteArrayAsync_003Ed__5))]
	internal Task<byte[]?>? ReadArrayIntoByteArrayAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x3D5B860", Offset = "0x3D5B860", VA = "0x3D5B860", Slot = "8")]
	public virtual Task<DateTime?> ReadAsDateTimeAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x3D5B930", Offset = "0x3D5B930", VA = "0x3D5B930", Slot = "9")]
	public virtual Task<DateTimeOffset?> ReadAsDateTimeOffsetAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x3D5BA30", Offset = "0x3D5BA30", VA = "0x3D5BA30", Slot = "10")]
	public virtual Task<decimal?> ReadAsDecimalAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x3D5BB30", Offset = "0x3D5BB30", VA = "0x3D5BB30", Slot = "11")]
	public virtual Task<double?> ReadAsDoubleAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x3D5BBB0", Offset = "0x3D5BBB0", VA = "0x3D5BBB0", Slot = "12")]
	public virtual Task<int?> ReadAsInt32Async([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x3D5BC80", Offset = "0x3D5BC80", VA = "0x3D5BC80", Slot = "13")]
	public virtual Task<string?>? ReadAsStringAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x3D5BD50", Offset = "0x3D5BD50", VA = "0x3D5BD50")]
	[AsyncStateMachine(typeof(_003CReadAndMoveToContentAsync_003Ed__12))]
	internal Task<bool> ReadAndMoveToContentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x3D5BE70", Offset = "0x3D5BE70", VA = "0x3D5BE70")]
	internal Task<bool> MoveToContentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x3D5BEF0", Offset = "0x3D5BEF0", VA = "0x3D5BEF0")]
	[AsyncStateMachine(typeof(_003CMoveToContentFromNonContentAsync_003Ed__14))]
	private Task<bool> MoveToContentFromNonContentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x3D5C4F0", Offset = "0x3D5C4F0", VA = "0x3D5C4F0")]
	internal JsonPosition GetPosition(int depth)
	{
		return default(JsonPosition);
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x3D5C580", Offset = "0x3D5C580", VA = "0x3D5C580")]
	protected JsonReader()
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x3D5C600", Offset = "0x3D5C600", VA = "0x3D5C600")]
	private void Push(JsonContainerType value)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x3D5CA00", Offset = "0x3D5CA00", VA = "0x3D5CA00")]
	private JsonContainerType Pop()
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x3D5CB20", Offset = "0x3D5CB20", VA = "0x3D5CB20")]
	private JsonContainerType Peek()
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000102")]
	public abstract bool Read();

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x3D5CB30", Offset = "0x3D5CB30", VA = "0x3D5CB30", Slot = "22")]
	public virtual int? ReadAsInt32()
	{
		return null;
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x3D5D140", Offset = "0x3D5D140", VA = "0x3D5D140")]
	internal int? ReadInt32String(string? s)
	{
		return null;
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x3D5D320", Offset = "0x3D5D320", VA = "0x3D5D320", Slot = "23")]
	public virtual string? ReadAsString()
	{
		return null;
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x3D5D640", Offset = "0x3D5D640", VA = "0x3D5D640", Slot = "24")]
	public virtual byte[]? ReadAsBytes()
	{
		return null;
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x3D5DDA0", Offset = "0x3D5DDA0", VA = "0x3D5DDA0")]
	internal byte[] ReadArrayIntoByteArray()
	{
		return null;
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x3D5DEC0", Offset = "0x3D5DEC0", VA = "0x3D5DEC0")]
	private bool ReadArrayElementIntoByteArrayReportDone(List<byte> buffer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x3D5E0B0", Offset = "0x3D5E0B0", VA = "0x3D5E0B0", Slot = "25")]
	public virtual double? ReadAsDouble()
	{
		return null;
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x3D5E3D0", Offset = "0x3D5E3D0", VA = "0x3D5E3D0")]
	internal double? ReadDoubleString(string? s)
	{
		return null;
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x3D5E5C0", Offset = "0x3D5E5C0", VA = "0x3D5E5C0", Slot = "26")]
	public virtual bool? ReadAsBoolean()
	{
		return null;
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x3D5E8F0", Offset = "0x3D5E8F0", VA = "0x3D5E8F0")]
	internal bool? ReadBooleanString(string? s)
	{
		return null;
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x3D5EA90", Offset = "0x3D5EA90", VA = "0x3D5EA90", Slot = "27")]
	public virtual decimal? ReadAsDecimal()
	{
		return null;
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x3D5EEA0", Offset = "0x3D5EEA0", VA = "0x3D5EEA0")]
	internal decimal? ReadDecimalString(string? s)
	{
		return null;
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x3D5F160", Offset = "0x3D5F160", VA = "0x3D5F160", Slot = "28")]
	public virtual DateTime? ReadAsDateTime()
	{
		return null;
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x3D5F440", Offset = "0x3D5F440", VA = "0x3D5F440")]
	internal DateTime? ReadDateTimeString(string? s)
	{
		return null;
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x3D5F7A0", Offset = "0x3D5F7A0", VA = "0x3D5F7A0", Slot = "29")]
	public virtual DateTimeOffset? ReadAsDateTimeOffset()
	{
		return null;
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x3D5FA60", Offset = "0x3D5FA60", VA = "0x3D5FA60")]
	internal DateTimeOffset? ReadDateTimeOffsetString(string? s)
	{
		return null;
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x3D5DD60", Offset = "0x3D5DD60", VA = "0x3D5DD60")]
	internal void ReaderReadAndAssert()
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x3D5FD80", Offset = "0x3D5FD80", VA = "0x3D5FD80")]
	internal JsonReaderException CreateUnexpectedEndException()
	{
		return null;
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x3D5DAF0", Offset = "0x3D5DAF0", VA = "0x3D5DAF0")]
	internal void ReadIntoWrappedTypeObject()
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x3D5FE30", Offset = "0x3D5FE30", VA = "0x3D5FE30")]
	public void Skip()
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x3D5DEB0", Offset = "0x3D5DEB0", VA = "0x3D5DEB0")]
	protected void SetToken(JsonToken newToken)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x3D5FEE0", Offset = "0x3D5FEE0", VA = "0x3D5FEE0")]
	protected void SetToken(JsonToken newToken, object? value)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x3D5D000", Offset = "0x3D5D000", VA = "0x3D5D000")]
	protected void SetToken(JsonToken newToken, object? value, bool updateIndex)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x3D5FFF0", Offset = "0x3D5FFF0", VA = "0x3D5FFF0")]
	internal void SetPostValueState(bool updateIndex)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x3D5C980", Offset = "0x3D5C980", VA = "0x3D5C980")]
	private void UpdateScopeWithFinishedValue()
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x3D5FEF0", Offset = "0x3D5FEF0", VA = "0x3D5FEF0")]
	private void ValidateEnd(JsonToken endToken)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x3D60100", Offset = "0x3D60100", VA = "0x3D60100")]
	protected void SetStateBasedOnCurrent()
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x3D60030", Offset = "0x3D60030", VA = "0x3D60030")]
	private void SetFinished()
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x3D60050", Offset = "0x3D60050", VA = "0x3D60050")]
	private JsonContainerType GetTypeForCloseToken(JsonToken token)
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x3D601E0", Offset = "0x3D601E0", VA = "0x3D601E0", Slot = "4")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x3D60250", Offset = "0x3D60250", VA = "0x3D60250", Slot = "30")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x3D60270", Offset = "0x3D60270", VA = "0x3D60270", Slot = "31")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x3D602A0", Offset = "0x3D602A0", VA = "0x3D602A0")]
	internal void ReadAndAssert()
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x3D602F0", Offset = "0x3D602F0", VA = "0x3D602F0")]
	internal void ReadForTypeAndAssert(JsonContract? contract, bool hasConverter)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x3D60330", Offset = "0x3D60330", VA = "0x3D60330")]
	internal bool ReadForType(JsonContract? contract, bool hasConverter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x3D60610", Offset = "0x3D60610", VA = "0x3D60610")]
	internal bool ReadAndMoveToContent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x3D60670", Offset = "0x3D60670", VA = "0x3D60670")]
	internal bool MoveToContent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x3D5CF10", Offset = "0x3D5CF10", VA = "0x3D5CF10")]
	private JsonToken GetContentToken()
	{
		return default(JsonToken);
	}
}
