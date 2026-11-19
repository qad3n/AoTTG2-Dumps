// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonWriter
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
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json;

[Token(Token = "0x2000077")]
public abstract class JsonWriter : IDisposable
{
	[Token(Token = "0x2000078")]
	internal enum State
	{
		[Token(Token = "0x40002DC")]
		Start,
		[Token(Token = "0x40002DD")]
		Property,
		[Token(Token = "0x40002DE")]
		ObjectStart,
		[Token(Token = "0x40002DF")]
		Object,
		[Token(Token = "0x40002E0")]
		ArrayStart,
		[Token(Token = "0x40002E1")]
		Array,
		[Token(Token = "0x40002E2")]
		ConstructorStart,
		[Token(Token = "0x40002E3")]
		Constructor,
		[Token(Token = "0x40002E4")]
		Closed,
		[Token(Token = "0x40002E5")]
		Error
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200007D")]
	[CompilerGenerated]
	private struct _003CAutoCompleteAsync_003Ed__1 : IAsyncStateMachine
	{
		[Token(Token = "0x4000304")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000305")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000306")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonWriter _003C_003E4__this;

		[Token(Token = "0x4000307")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000308")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60004BB")]
		[Address(RVA = "0x55A12C0", Offset = "0x55A02C0", VA = "0x55A12C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004BC")]
		[Address(RVA = "0x55A15A0", Offset = "0x55A05A0", VA = "0x55A15A0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200007E")]
	[CompilerGenerated]
	private struct _003CInternalWriteStartAsync_003Ed__20 : IAsyncStateMachine
	{
		[Token(Token = "0x4000309")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400030A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400030B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonWriter _003C_003E4__this;

		[Token(Token = "0x400030C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JsonToken token;

		[Token(Token = "0x400030D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400030E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public JsonContainerType container;

		[Token(Token = "0x400030F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60004BD")]
		[Address(RVA = "0x55A1600", Offset = "0x55A0600", VA = "0x55A1600", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x55A1830", Offset = "0x55A0830", VA = "0x55A1830", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200007F")]
	[CompilerGenerated]
	private struct _003CWriteConstructorDateAsync_003Ed__32 : IAsyncStateMachine
	{
		[Token(Token = "0x4000310")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000311")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000312")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonReader reader;

		[Token(Token = "0x4000313")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000314")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public JsonWriter _003C_003E4__this;

		[Token(Token = "0x4000315")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private DateTime _003Cdate_003E5__2;

		[Token(Token = "0x4000316")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000317")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x60004BF")]
		[Address(RVA = "0x55A1890", Offset = "0x55A0890", VA = "0x55A1890", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004C0")]
		[Address(RVA = "0x55A2090", Offset = "0x55A1090", VA = "0x55A2090", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000080")]
	[CompilerGenerated]
	private struct _003CWriteTokenAsync_003Ed__30 : IAsyncStateMachine
	{
		[Token(Token = "0x4000318")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000319")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400031A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonWriter _003C_003E4__this;

		[Token(Token = "0x400031B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JsonReader reader;

		[Token(Token = "0x400031C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool writeDateConstructorAsDate;

		[Token(Token = "0x400031D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400031E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool writeComments;

		[Token(Token = "0x400031F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
		public bool writeChildren;

		[Token(Token = "0x4000320")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		private int _003CinitialDepth_003E5__2;

		[Token(Token = "0x4000321")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000322")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x60004C1")]
		[Address(RVA = "0x55A20F0", Offset = "0x55A10F0", VA = "0x55A20F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004C2")]
		[Address(RVA = "0x55A27B0", Offset = "0x55A17B0", VA = "0x55A27B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000081")]
	[CompilerGenerated]
	private struct _003CWriteTokenSyncReadingAsync_003Ed__31 : IAsyncStateMachine
	{
		[Token(Token = "0x4000323")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000324")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000325")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonWriter _003C_003E4__this;

		[Token(Token = "0x4000326")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JsonReader reader;

		[Token(Token = "0x4000327")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000328")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private int _003CinitialDepth_003E5__2;

		[Token(Token = "0x4000329")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60004C3")]
		[Address(RVA = "0x55A2810", Offset = "0x55A1810", VA = "0x55A2810", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004C4")]
		[Address(RVA = "0x55A2CB0", Offset = "0x55A1CB0", VA = "0x55A2CB0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40002CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly State[][] StateArray;

	[Token(Token = "0x40002CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static readonly State[][] StateArrayTemplate;

	[Token(Token = "0x40002CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private List<JsonPosition>? _stack;

	[Token(Token = "0x40002D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private JsonPosition _currentPosition;

	[Token(Token = "0x40002D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private State _currentState;

	[Token(Token = "0x40002D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private Formatting _formatting;

	[Token(Token = "0x40002D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private DateFormatHandling _dateFormatHandling;

	[Token(Token = "0x40002D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private DateTimeZoneHandling _dateTimeZoneHandling;

	[Token(Token = "0x40002D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	private StringEscapeHandling _stringEscapeHandling;

	[Token(Token = "0x40002D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private FloatFormatHandling _floatFormatHandling;

	[Token(Token = "0x40002D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string? _dateFormatString;

	[Token(Token = "0x40002DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private CultureInfo? _culture;

	[Token(Token = "0x1700009E")]
	public bool CloseOutput
	{
		[Token(Token = "0x600043B")]
		[Address(RVA = "0x559C380", Offset = "0x559B380", VA = "0x559C380")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600043C")]
		[Address(RVA = "0x559C390", Offset = "0x559B390", VA = "0x559C390")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	public bool AutoCompleteOnClose
	{
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x559C3A0", Offset = "0x559B3A0", VA = "0x559C3A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600043E")]
		[Address(RVA = "0x559C3B0", Offset = "0x559B3B0", VA = "0x559C3B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	protected internal int Top
	{
		[Token(Token = "0x600043F")]
		[Address(RVA = "0x55887D0", Offset = "0x55877D0", VA = "0x55887D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A1")]
	public WriteState WriteState
	{
		[Token(Token = "0x6000440")]
		[Address(RVA = "0x559C3C0", Offset = "0x559B3C0", VA = "0x559C3C0")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x170000A2")]
	internal string ContainerPath
	{
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x559C460", Offset = "0x559B460", VA = "0x559C460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A3")]
	public string Path
	{
		[Token(Token = "0x6000442")]
		[Address(RVA = "0x559C500", Offset = "0x559B500", VA = "0x559C500")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A4")]
	public Formatting Formatting
	{
		[Token(Token = "0x6000443")]
		[Address(RVA = "0x559C600", Offset = "0x559B600", VA = "0x559C600")]
		get
		{
			return default(Formatting);
		}
		[Token(Token = "0x6000444")]
		[Address(RVA = "0x559C610", Offset = "0x559B610", VA = "0x559C610")]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	public DateFormatHandling DateFormatHandling
	{
		[Token(Token = "0x6000445")]
		[Address(RVA = "0x559C670", Offset = "0x559B670", VA = "0x559C670")]
		get
		{
			return default(DateFormatHandling);
		}
		[Token(Token = "0x6000446")]
		[Address(RVA = "0x559C680", Offset = "0x559B680", VA = "0x559C680")]
		set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	public DateTimeZoneHandling DateTimeZoneHandling
	{
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x559C6E0", Offset = "0x559B6E0", VA = "0x559C6E0")]
		get
		{
			return default(DateTimeZoneHandling);
		}
		[Token(Token = "0x6000448")]
		[Address(RVA = "0x559C6F0", Offset = "0x559B6F0", VA = "0x559C6F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	public StringEscapeHandling StringEscapeHandling
	{
		[Token(Token = "0x6000449")]
		[Address(RVA = "0x559C750", Offset = "0x559B750", VA = "0x559C750")]
		get
		{
			return default(StringEscapeHandling);
		}
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x559C760", Offset = "0x559B760", VA = "0x559C760")]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public FloatFormatHandling FloatFormatHandling
	{
		[Token(Token = "0x600044C")]
		[Address(RVA = "0x559C7E0", Offset = "0x559B7E0", VA = "0x559C7E0")]
		get
		{
			return default(FloatFormatHandling);
		}
		[Token(Token = "0x600044D")]
		[Address(RVA = "0x559C7F0", Offset = "0x559B7F0", VA = "0x559C7F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	public string? DateFormatString
	{
		[Token(Token = "0x600044E")]
		[Address(RVA = "0x559C850", Offset = "0x559B850", VA = "0x559C850")]
		get
		{
			return null;
		}
		[Token(Token = "0x600044F")]
		[Address(RVA = "0x559C860", Offset = "0x559B860", VA = "0x559C860")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public CultureInfo Culture
	{
		[Token(Token = "0x6000450")]
		[Address(RVA = "0x558B5A0", Offset = "0x558A5A0", VA = "0x558B5A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000451")]
		[Address(RVA = "0x559C870", Offset = "0x559B870", VA = "0x559C870")]
		set
		{
		}
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x5595B90", Offset = "0x5594B90", VA = "0x5595B90")]
	internal Task AutoCompleteAsync(JsonToken tokenBeingWritten, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x5595E00", Offset = "0x5594E00", VA = "0x5595E00")]
	[AsyncStateMachine(typeof(_003CAutoCompleteAsync_003Ed__1))]
	private Task AutoCompleteAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x5595EF0", Offset = "0x5594EF0", VA = "0x5595EF0", Slot = "5")]
	public virtual Task CloseAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x5595FC0", Offset = "0x5594FC0", VA = "0x5595FC0", Slot = "6")]
	public virtual Task FlushAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x5596090", Offset = "0x5595090", VA = "0x5596090", Slot = "7")]
	protected virtual Task WriteEndAsync(JsonToken token, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x5596160", Offset = "0x5595160", VA = "0x5596160", Slot = "8")]
	protected virtual Task WriteIndentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x5596230", Offset = "0x5595230", VA = "0x5596230", Slot = "9")]
	protected virtual Task WriteValueDelimiterAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x5596300", Offset = "0x5595300", VA = "0x5596300", Slot = "10")]
	protected virtual Task WriteIndentSpaceAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x55963D0", Offset = "0x55953D0", VA = "0x55963D0", Slot = "11")]
	public virtual Task WriteRawAsync(string? json, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x55964A0", Offset = "0x55954A0", VA = "0x55964A0", Slot = "12")]
	public virtual Task WriteEndAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x5596570", Offset = "0x5595570", VA = "0x5596570")]
	internal Task WriteEndInternalAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x55966E0", Offset = "0x55956E0", VA = "0x55966E0")]
	internal Task InternalWriteEndAsync(JsonContainerType type, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x5596F90", Offset = "0x5595F90", VA = "0x5596F90", Slot = "13")]
	public virtual Task WriteEndArrayAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x5597060", Offset = "0x5596060", VA = "0x5597060", Slot = "14")]
	public virtual Task WriteEndConstructorAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x5597130", Offset = "0x5596130", VA = "0x5597130", Slot = "15")]
	public virtual Task WriteEndObjectAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x5597200", Offset = "0x5596200", VA = "0x5597200", Slot = "16")]
	public virtual Task WriteNullAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x55972D0", Offset = "0x55962D0", VA = "0x55972D0", Slot = "17")]
	public virtual Task WritePropertyNameAsync(string name, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x55973A0", Offset = "0x55963A0", VA = "0x55973A0", Slot = "18")]
	public virtual Task WritePropertyNameAsync(string name, bool escape, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x5589910", Offset = "0x5588910", VA = "0x5589910")]
	internal Task InternalWritePropertyNameAsync(string name, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x5597480", Offset = "0x5596480", VA = "0x5597480", Slot = "19")]
	public virtual Task WriteStartArrayAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x558A5D0", Offset = "0x55895D0", VA = "0x558A5D0")]
	[AsyncStateMachine(typeof(_003CInternalWriteStartAsync_003Ed__20))]
	internal Task InternalWriteStartAsync(JsonToken token, JsonContainerType container, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x5597550", Offset = "0x5596550", VA = "0x5597550", Slot = "20")]
	public virtual Task WriteCommentAsync(string? text, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x5588DD0", Offset = "0x5587DD0", VA = "0x5588DD0")]
	internal Task InternalWriteCommentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x5597620", Offset = "0x5596620", VA = "0x5597620", Slot = "21")]
	public virtual Task WriteRawValueAsync(string? json, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x55976F0", Offset = "0x55966F0", VA = "0x55976F0", Slot = "22")]
	public virtual Task WriteStartConstructorAsync(string name, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x55977C0", Offset = "0x55967C0", VA = "0x55977C0", Slot = "23")]
	public virtual Task WriteStartObjectAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x5597890", Offset = "0x5596890", VA = "0x5597890")]
	public Task WriteTokenAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x5597910", Offset = "0x5596910", VA = "0x5597910")]
	public Task WriteTokenAsync(JsonReader reader, bool writeChildren, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x5597990", Offset = "0x5596990", VA = "0x5597990")]
	public Task WriteTokenAsync(JsonToken token, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x55979A0", Offset = "0x55969A0", VA = "0x55979A0")]
	public Task WriteTokenAsync(JsonToken token, object? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x5598150", Offset = "0x5597150", VA = "0x5598150", Slot = "24")]
	[AsyncStateMachine(typeof(_003CWriteTokenAsync_003Ed__30))]
	internal virtual Task WriteTokenAsync(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x55982A0", Offset = "0x55972A0", VA = "0x55982A0")]
	[AsyncStateMachine(typeof(_003CWriteTokenSyncReadingAsync_003Ed__31))]
	internal Task WriteTokenSyncReadingAsync(JsonReader reader, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x55983B0", Offset = "0x55973B0", VA = "0x55983B0")]
	[AsyncStateMachine(typeof(_003CWriteConstructorDateAsync_003Ed__32))]
	private Task WriteConstructorDateAsync(JsonReader reader, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x55984C0", Offset = "0x55974C0", VA = "0x55984C0", Slot = "25")]
	public virtual Task WriteValueAsync(bool value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x5598590", Offset = "0x5597590", VA = "0x5598590", Slot = "26")]
	public virtual Task WriteValueAsync(bool? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x5598660", Offset = "0x5597660", VA = "0x5598660", Slot = "27")]
	public virtual Task WriteValueAsync(byte value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x5598730", Offset = "0x5597730", VA = "0x5598730", Slot = "28")]
	public virtual Task WriteValueAsync(byte? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x5598800", Offset = "0x5597800", VA = "0x5598800", Slot = "29")]
	public virtual Task WriteValueAsync(byte[]? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x55988D0", Offset = "0x55978D0", VA = "0x55988D0", Slot = "30")]
	public virtual Task WriteValueAsync(char value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x55989A0", Offset = "0x55979A0", VA = "0x55989A0", Slot = "31")]
	public virtual Task WriteValueAsync(char? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x5598A70", Offset = "0x5597A70", VA = "0x5598A70", Slot = "32")]
	public virtual Task WriteValueAsync(DateTime value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x5598B40", Offset = "0x5597B40", VA = "0x5598B40", Slot = "33")]
	public virtual Task WriteValueAsync(DateTime? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x5598C20", Offset = "0x5597C20", VA = "0x5598C20", Slot = "34")]
	public virtual Task WriteValueAsync(DateTimeOffset value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x5598D00", Offset = "0x5597D00", VA = "0x5598D00", Slot = "35")]
	public virtual Task WriteValueAsync(DateTimeOffset? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x5598DE0", Offset = "0x5597DE0", VA = "0x5598DE0", Slot = "36")]
	public virtual Task WriteValueAsync(decimal value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x5598EC0", Offset = "0x5597EC0", VA = "0x5598EC0", Slot = "37")]
	public virtual Task WriteValueAsync(decimal? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x5598FA0", Offset = "0x5597FA0", VA = "0x5598FA0", Slot = "38")]
	public virtual Task WriteValueAsync(double value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x5599080", Offset = "0x5598080", VA = "0x5599080", Slot = "39")]
	public virtual Task WriteValueAsync(double? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x5599160", Offset = "0x5598160", VA = "0x5599160", Slot = "40")]
	public virtual Task WriteValueAsync(float value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x5599240", Offset = "0x5598240", VA = "0x5599240", Slot = "41")]
	public virtual Task WriteValueAsync(float? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x5599310", Offset = "0x5598310", VA = "0x5599310", Slot = "42")]
	public virtual Task WriteValueAsync(Guid value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x55993F0", Offset = "0x55983F0", VA = "0x55993F0", Slot = "43")]
	public virtual Task WriteValueAsync(Guid? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x55994D0", Offset = "0x55984D0", VA = "0x55994D0", Slot = "44")]
	public virtual Task WriteValueAsync(int value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x55995A0", Offset = "0x55985A0", VA = "0x55995A0", Slot = "45")]
	public virtual Task WriteValueAsync(int? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x5599670", Offset = "0x5598670", VA = "0x5599670", Slot = "46")]
	public virtual Task WriteValueAsync(long value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x5599740", Offset = "0x5598740", VA = "0x5599740", Slot = "47")]
	public virtual Task WriteValueAsync(long? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x5599820", Offset = "0x5598820", VA = "0x5599820", Slot = "48")]
	public virtual Task WriteValueAsync(object? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x55998F0", Offset = "0x55988F0", VA = "0x55998F0", Slot = "49")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(sbyte value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x55999C0", Offset = "0x55989C0", VA = "0x55999C0", Slot = "50")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(sbyte? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x5599A90", Offset = "0x5598A90", VA = "0x5599A90", Slot = "51")]
	public virtual Task WriteValueAsync(short value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x5599B60", Offset = "0x5598B60", VA = "0x5599B60", Slot = "52")]
	public virtual Task WriteValueAsync(short? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x5599C30", Offset = "0x5598C30", VA = "0x5599C30", Slot = "53")]
	public virtual Task WriteValueAsync(string? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x5599D00", Offset = "0x5598D00", VA = "0x5599D00", Slot = "54")]
	public virtual Task WriteValueAsync(TimeSpan value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x5599DD0", Offset = "0x5598DD0", VA = "0x5599DD0", Slot = "55")]
	public virtual Task WriteValueAsync(TimeSpan? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x5599EB0", Offset = "0x5598EB0", VA = "0x5599EB0", Slot = "56")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(uint value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x5599F80", Offset = "0x5598F80", VA = "0x5599F80", Slot = "57")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(uint? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x559A050", Offset = "0x5599050", VA = "0x559A050", Slot = "58")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(ulong value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x559A120", Offset = "0x5599120", VA = "0x559A120", Slot = "59")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(ulong? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x559A200", Offset = "0x5599200", VA = "0x559A200", Slot = "60")]
	public virtual Task WriteValueAsync(Uri? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x559A2D0", Offset = "0x55992D0", VA = "0x559A2D0", Slot = "61")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(ushort value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x559A3A0", Offset = "0x55993A0", VA = "0x559A3A0", Slot = "62")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(ushort? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x559A470", Offset = "0x5599470", VA = "0x559A470", Slot = "63")]
	public virtual Task WriteUndefinedAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x559A540", Offset = "0x5599540", VA = "0x559A540", Slot = "64")]
	public virtual Task WriteWhitespaceAsync(string ws, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x558B4F0", Offset = "0x558A4F0", VA = "0x558B4F0")]
	internal Task InternalWriteValueAsync(JsonToken token, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x559A620", Offset = "0x5599620", VA = "0x559A620")]
	protected Task SetWriteStateAsync(JsonToken token, object value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x559A860", Offset = "0x5599860", VA = "0x559A860")]
	internal static Task WriteValueAsync(JsonWriter writer, PrimitiveTypeCode typeCode, object value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x559BDF0", Offset = "0x559ADF0", VA = "0x559BDF0")]
	internal static State[][] BuildStateArray()
	{
		return null;
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x559C070", Offset = "0x559B070", VA = "0x559C070")]
	static JsonWriter()
	{
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x559C7D0", Offset = "0x559B7D0", VA = "0x559C7D0", Slot = "65")]
	internal virtual void OnStringEscapeHandlingChanged()
	{
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x559C880", Offset = "0x559B880", VA = "0x559C880")]
	protected JsonWriter()
	{
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x559A610", Offset = "0x5599610", VA = "0x559A610")]
	internal void UpdateScopeWithFinishedValue()
	{
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x559C8B0", Offset = "0x559B8B0", VA = "0x559C8B0")]
	private void Push(JsonContainerType value)
	{
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x5596A30", Offset = "0x5595A30", VA = "0x5596A30")]
	private JsonContainerType Pop()
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x55966D0", Offset = "0x55956D0", VA = "0x55966D0")]
	private JsonContainerType Peek()
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000457")]
	public abstract void Flush();

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x559CA40", Offset = "0x559BA40", VA = "0x559CA40", Slot = "67")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x559CB60", Offset = "0x559BB60", VA = "0x559CB60", Slot = "68")]
	public virtual void WriteStartObject()
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x559CBC0", Offset = "0x559BBC0", VA = "0x559CBC0", Slot = "69")]
	public virtual void WriteEndObject()
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x559CBE0", Offset = "0x559BBE0", VA = "0x559CBE0", Slot = "70")]
	public virtual void WriteStartArray()
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x559CC10", Offset = "0x559BC10", VA = "0x559CC10", Slot = "71")]
	public virtual void WriteEndArray()
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x559CC20", Offset = "0x559BC20", VA = "0x559CC20", Slot = "72")]
	public virtual void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x559CC50", Offset = "0x559BC50", VA = "0x559CC50", Slot = "73")]
	public virtual void WriteEndConstructor()
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x559CC60", Offset = "0x559BC60", VA = "0x559CC60", Slot = "74")]
	public virtual void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x559CCA0", Offset = "0x559BCA0", VA = "0x559CCA0", Slot = "75")]
	public virtual void WritePropertyName(string name, bool escape)
	{
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x559CCC0", Offset = "0x559BCC0", VA = "0x559CCC0", Slot = "76")]
	public virtual void WriteEnd()
	{
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x559CDA0", Offset = "0x559BDA0", VA = "0x559CDA0")]
	public void WriteToken(JsonReader reader)
	{
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x5594C20", Offset = "0x5593C20", VA = "0x5594C20")]
	public void WriteToken(JsonReader reader, bool writeChildren)
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x559CE10", Offset = "0x559BE10", VA = "0x559CE10")]
	public void WriteToken(JsonToken token, object? value)
	{
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x559D4D0", Offset = "0x559C4D0", VA = "0x559D4D0")]
	public void WriteToken(JsonToken token)
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x559D4E0", Offset = "0x559C4E0", VA = "0x559D4E0", Slot = "77")]
	internal virtual void WriteToken(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments)
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x559D8D0", Offset = "0x559C8D0", VA = "0x559D8D0")]
	private bool IsWriteTokenIncomplete(JsonReader reader, bool writeChildren, int initialDepth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x559D7A0", Offset = "0x559C7A0", VA = "0x559D7A0")]
	private int CalculateWriteTokenInitialDepth(JsonReader reader)
	{
		return default(int);
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x559D980", Offset = "0x559C980", VA = "0x559D980")]
	private int CalculateWriteTokenFinalDepth(JsonReader reader)
	{
		return default(int);
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x559D810", Offset = "0x559C810", VA = "0x559D810")]
	private void WriteConstructorDate(JsonReader reader)
	{
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x559CCD0", Offset = "0x559BCD0", VA = "0x559CCD0")]
	private void WriteEnd(JsonContainerType type)
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x559CAD0", Offset = "0x559BAD0", VA = "0x559CAD0")]
	private void AutoCompleteAll()
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x5596B00", Offset = "0x5595B00", VA = "0x5596B00")]
	private JsonToken GetCloseTokenForType(JsonContainerType type)
	{
		return default(JsonToken);
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x559D9E0", Offset = "0x559C9E0", VA = "0x559D9E0")]
	private void AutoCompleteClose(JsonContainerType type)
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x5596920", Offset = "0x5595920", VA = "0x5596920")]
	private int CalculateLevelsToComplete(JsonContainerType type)
	{
		return default(int);
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x5596EF0", Offset = "0x5595EF0", VA = "0x5596EF0")]
	private void UpdateCurrentState()
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x559DA80", Offset = "0x559CA80", VA = "0x559DA80", Slot = "78")]
	protected virtual void WriteEnd(JsonToken token)
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x559DA90", Offset = "0x559CA90", VA = "0x559DA90", Slot = "79")]
	protected virtual void WriteIndent()
	{
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x559DAA0", Offset = "0x559CAA0", VA = "0x559DAA0", Slot = "80")]
	protected virtual void WriteValueDelimiter()
	{
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x559DAB0", Offset = "0x559CAB0", VA = "0x559DAB0", Slot = "81")]
	protected virtual void WriteIndentSpace()
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x559DAC0", Offset = "0x559CAC0", VA = "0x559DAC0")]
	internal void AutoComplete(JsonToken tokenBeingWritten)
	{
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x559DCE0", Offset = "0x559CCE0", VA = "0x559DCE0", Slot = "82")]
	public virtual void WriteNull()
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x559DD10", Offset = "0x559CD10", VA = "0x559DD10", Slot = "83")]
	public virtual void WriteUndefined()
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x559DD30", Offset = "0x559CD30", VA = "0x559DD30", Slot = "84")]
	public virtual void WriteRaw(string? json)
	{
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x559DD50", Offset = "0x559CD50", VA = "0x559DD50", Slot = "85")]
	public virtual void WriteRawValue(string? json)
	{
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x559DD90", Offset = "0x559CD90", VA = "0x559DD90", Slot = "86")]
	public virtual void WriteValue(string? value)
	{
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x559DDB0", Offset = "0x559CDB0", VA = "0x559DDB0", Slot = "87")]
	public virtual void WriteValue(int value)
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x559DDD0", Offset = "0x559CDD0", VA = "0x559DDD0", Slot = "88")]
	[CLSCompliant(false)]
	public virtual void WriteValue(uint value)
	{
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x559DDF0", Offset = "0x559CDF0", VA = "0x559DDF0", Slot = "89")]
	public virtual void WriteValue(long value)
	{
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x559DE10", Offset = "0x559CE10", VA = "0x559DE10", Slot = "90")]
	[CLSCompliant(false)]
	public virtual void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x559DE30", Offset = "0x559CE30", VA = "0x559DE30", Slot = "91")]
	public virtual void WriteValue(float value)
	{
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x559DE50", Offset = "0x559CE50", VA = "0x559DE50", Slot = "92")]
	public virtual void WriteValue(double value)
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x559DE70", Offset = "0x559CE70", VA = "0x559DE70", Slot = "93")]
	public virtual void WriteValue(bool value)
	{
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x559DE90", Offset = "0x559CE90", VA = "0x559DE90", Slot = "94")]
	public virtual void WriteValue(short value)
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x559DEB0", Offset = "0x559CEB0", VA = "0x559DEB0", Slot = "95")]
	[CLSCompliant(false)]
	public virtual void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x559DED0", Offset = "0x559CED0", VA = "0x559DED0", Slot = "96")]
	public virtual void WriteValue(char value)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x559DEF0", Offset = "0x559CEF0", VA = "0x559DEF0", Slot = "97")]
	public virtual void WriteValue(byte value)
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x559DF10", Offset = "0x559CF10", VA = "0x559DF10", Slot = "98")]
	[CLSCompliant(false)]
	public virtual void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x559DF30", Offset = "0x559CF30", VA = "0x559DF30", Slot = "99")]
	public virtual void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x559DF50", Offset = "0x559CF50", VA = "0x559DF50", Slot = "100")]
	public virtual void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x559DF70", Offset = "0x559CF70", VA = "0x559DF70", Slot = "101")]
	public virtual void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x559DF90", Offset = "0x559CF90", VA = "0x559DF90", Slot = "102")]
	public virtual void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x559DFB0", Offset = "0x559CFB0", VA = "0x559DFB0", Slot = "103")]
	public virtual void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x559DFD0", Offset = "0x559CFD0", VA = "0x559DFD0", Slot = "104")]
	public virtual void WriteValue(int? value)
	{
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x559E050", Offset = "0x559D050", VA = "0x559E050", Slot = "105")]
	[CLSCompliant(false)]
	public virtual void WriteValue(uint? value)
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x559E0D0", Offset = "0x559D0D0", VA = "0x559E0D0", Slot = "106")]
	public virtual void WriteValue(long? value)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x559E140", Offset = "0x559D140", VA = "0x559E140", Slot = "107")]
	[CLSCompliant(false)]
	public virtual void WriteValue(ulong? value)
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x559E1B0", Offset = "0x559D1B0", VA = "0x559E1B0", Slot = "108")]
	public virtual void WriteValue(float? value)
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x559E230", Offset = "0x559D230", VA = "0x559E230", Slot = "109")]
	public virtual void WriteValue(double? value)
	{
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x559E2B0", Offset = "0x559D2B0", VA = "0x559E2B0", Slot = "110")]
	public virtual void WriteValue(bool? value)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x559E330", Offset = "0x559D330", VA = "0x559E330", Slot = "111")]
	public virtual void WriteValue(short? value)
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x559E3A0", Offset = "0x559D3A0", VA = "0x559E3A0", Slot = "112")]
	[CLSCompliant(false)]
	public virtual void WriteValue(ushort? value)
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x559E410", Offset = "0x559D410", VA = "0x559E410", Slot = "113")]
	public virtual void WriteValue(char? value)
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x559E480", Offset = "0x559D480", VA = "0x559E480", Slot = "114")]
	public virtual void WriteValue(byte? value)
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x559E500", Offset = "0x559D500", VA = "0x559E500", Slot = "115")]
	[CLSCompliant(false)]
	public virtual void WriteValue(sbyte? value)
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x559E580", Offset = "0x559D580", VA = "0x559E580", Slot = "116")]
	public virtual void WriteValue(decimal? value)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x559E600", Offset = "0x559D600", VA = "0x559E600", Slot = "117")]
	public virtual void WriteValue(DateTime? value)
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x559E670", Offset = "0x559D670", VA = "0x559E670", Slot = "118")]
	public virtual void WriteValue(DateTimeOffset? value)
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x559E6F0", Offset = "0x559D6F0", VA = "0x559E6F0", Slot = "119")]
	public virtual void WriteValue(Guid? value)
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x559E770", Offset = "0x559D770", VA = "0x559E770", Slot = "120")]
	public virtual void WriteValue(TimeSpan? value)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x559E7E0", Offset = "0x559D7E0", VA = "0x559E7E0", Slot = "121")]
	public virtual void WriteValue(byte[]? value)
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x559E810", Offset = "0x559D810", VA = "0x559E810", Slot = "122")]
	public virtual void WriteValue(Uri? value)
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x559E8A0", Offset = "0x559D8A0", VA = "0x559E8A0", Slot = "123")]
	public virtual void WriteValue(object? value)
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x559FC20", Offset = "0x559EC20", VA = "0x559FC20", Slot = "124")]
	public virtual void WriteComment(string? text)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x559FC40", Offset = "0x559EC40", VA = "0x559FC40", Slot = "125")]
	public virtual void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x559FCE0", Offset = "0x559ECE0", VA = "0x559FCE0", Slot = "4")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x559FD50", Offset = "0x559ED50", VA = "0x559FD50", Slot = "126")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x559E9C0", Offset = "0x559D9C0", VA = "0x559E9C0")]
	internal static void WriteValue(JsonWriter writer, PrimitiveTypeCode typeCode, object value)
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x559BB90", Offset = "0x559AB90", VA = "0x559BB90")]
	private static void ResolveConvertibleValue(IConvertible convertible, out PrimitiveTypeCode typeCode, out object value)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x559BD30", Offset = "0x559AD30", VA = "0x559BD30")]
	private static JsonWriterException CreateUnsupportedTypeException(JsonWriter writer, object value)
	{
		return null;
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x559FD70", Offset = "0x559ED70", VA = "0x559FD70")]
	protected void SetWriteState(JsonToken token, object value)
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x559CBD0", Offset = "0x559BBD0", VA = "0x559CBD0")]
	internal void InternalWriteEnd(JsonContainerType container)
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x559CC80", Offset = "0x559BC80", VA = "0x559CC80")]
	internal void InternalWritePropertyName(string name)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x559DD40", Offset = "0x559CD40", VA = "0x559DD40")]
	internal void InternalWriteRaw()
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x559CB90", Offset = "0x559BB90", VA = "0x559CB90")]
	internal void InternalWriteStart(JsonToken token, JsonContainerType container)
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x559DD00", Offset = "0x559CD00", VA = "0x559DD00")]
	internal void InternalWriteValue(JsonToken token)
	{
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x559FC90", Offset = "0x559EC90", VA = "0x559FC90")]
	internal void InternalWriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x559FC30", Offset = "0x559EC30", VA = "0x559FC30")]
	internal void InternalWriteComment()
	{
	}
}
