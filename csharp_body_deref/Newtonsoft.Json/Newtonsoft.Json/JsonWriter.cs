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
		[Address(RVA = "0x1C308D0", Offset = "0x1C2EED0", VA = "0x181C308D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004BC")]
		[Address(RVA = "0x1C30B40", Offset = "0x1C2F140", VA = "0x181C30B40", Slot = "5")]
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
		[Address(RVA = "0x1C31050", Offset = "0x1C2F650", VA = "0x181C31050", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x1C31210", Offset = "0x1C2F810", VA = "0x181C31210", Slot = "5")]
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
		[Address(RVA = "0x1C31C30", Offset = "0x1C30230", VA = "0x181C31C30", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004C0")]
		[Address(RVA = "0x1C32280", Offset = "0x1C30880", VA = "0x181C32280", Slot = "5")]
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
		[Address(RVA = "0x1C33310", Offset = "0x1C31910", VA = "0x181C33310", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004C2")]
		[Address(RVA = "0x1C33910", Offset = "0x1C31F10", VA = "0x181C33910", Slot = "5")]
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
		[Address(RVA = "0x1C33970", Offset = "0x1C31F70", VA = "0x181C33970", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004C4")]
		[Address(RVA = "0x1C33D80", Offset = "0x1C32380", VA = "0x181C33D80", Slot = "5")]
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
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600043C")]
		[Address(RVA = "0xF1D640", Offset = "0xF1BC40", VA = "0x180F1D640")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	public bool AutoCompleteOnClose
	{
		[Token(Token = "0x600043D")]
		[Address(RVA = "0xF1D4C0", Offset = "0xF1BAC0", VA = "0x180F1D4C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600043E")]
		[Address(RVA = "0xF1DA30", Offset = "0xF1C030", VA = "0x180F1DA30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	protected internal int Top
	{
		[Token(Token = "0x600043F")]
		[Address(RVA = "0x1C0FE40", Offset = "0x1C0E440", VA = "0x181C0FE40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A1")]
	public WriteState WriteState
	{
		[Token(Token = "0x6000440")]
		[Address(RVA = "0x1C0FE90", Offset = "0x1C0E490", VA = "0x181C0FE90")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x170000A2")]
	internal string ContainerPath
	{
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x1C0FC40", Offset = "0x1C0E240", VA = "0x181C0FC40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A3")]
	public string Path
	{
		[Token(Token = "0x6000442")]
		[Address(RVA = "0x1C0FD30", Offset = "0x1C0E330", VA = "0x181C0FD30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A4")]
	public Formatting Formatting
	{
		[Token(Token = "0x6000443")]
		[Address(RVA = "0x16EF8A0", Offset = "0x16EDEA0", VA = "0x1816EF8A0")]
		get
		{
			return default(Formatting);
		}
		[Token(Token = "0x6000444")]
		[Address(RVA = "0x1C10100", Offset = "0x1C0E700", VA = "0x181C10100")]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	public DateFormatHandling DateFormatHandling
	{
		[Token(Token = "0x6000445")]
		[Address(RVA = "0x19CF1C0", Offset = "0x19CD7C0", VA = "0x1819CF1C0")]
		get
		{
			return default(DateFormatHandling);
		}
		[Token(Token = "0x6000446")]
		[Address(RVA = "0x1C0FFB0", Offset = "0x1C0E5B0", VA = "0x181C0FFB0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	public DateTimeZoneHandling DateTimeZoneHandling
	{
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0")]
		get
		{
			return default(DateTimeZoneHandling);
		}
		[Token(Token = "0x6000448")]
		[Address(RVA = "0x1C10020", Offset = "0x1C0E620", VA = "0x181C10020")]
		set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	public StringEscapeHandling StringEscapeHandling
	{
		[Token(Token = "0x6000449")]
		[Address(RVA = "0x58A870", Offset = "0x588E70", VA = "0x18058A870")]
		get
		{
			return default(StringEscapeHandling);
		}
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x1C10170", Offset = "0x1C0E770", VA = "0x181C10170")]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public FloatFormatHandling FloatFormatHandling
	{
		[Token(Token = "0x600044C")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		get
		{
			return default(FloatFormatHandling);
		}
		[Token(Token = "0x600044D")]
		[Address(RVA = "0x1C10090", Offset = "0x1C0E690", VA = "0x181C10090")]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	public string? DateFormatString
	{
		[Token(Token = "0x600044E")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600044F")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public CultureInfo Culture
	{
		[Token(Token = "0x6000450")]
		[Address(RVA = "0x1C0FCD0", Offset = "0x1C0E2D0", VA = "0x181C0FCD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000451")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		set
		{
		}
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x1C04F20", Offset = "0x1C03520", VA = "0x181C04F20")]
	internal Task AutoCompleteAsync(JsonToken tokenBeingWritten, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x1C05240", Offset = "0x1C03840", VA = "0x181C05240")]
	[AsyncStateMachine(typeof(_003CAutoCompleteAsync_003Ed__1))]
	private Task AutoCompleteAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x1C059C0", Offset = "0x1C03FC0", VA = "0x181C059C0", Slot = "5")]
	public virtual Task CloseAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x1C05BD0", Offset = "0x1C041D0", VA = "0x181C05BD0", Slot = "6")]
	public virtual Task FlushAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x1C07980", Offset = "0x1C05F80", VA = "0x181C07980", Slot = "7")]
	protected virtual Task WriteEndAsync(JsonToken token, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x1C07F60", Offset = "0x1C06560", VA = "0x181C07F60", Slot = "8")]
	protected virtual Task WriteIndentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x1C0D910", Offset = "0x1C0BF10", VA = "0x181C0D910", Slot = "9")]
	protected virtual Task WriteValueDelimiterAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x1C08030", Offset = "0x1C06630", VA = "0x181C08030", Slot = "10")]
	protected virtual Task WriteIndentSpaceAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x1C083F0", Offset = "0x1C069F0", VA = "0x181C083F0", Slot = "11")]
	public virtual Task WriteRawAsync(string? json, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x1C078B0", Offset = "0x1C05EB0", VA = "0x181C078B0", Slot = "12")]
	public virtual Task WriteEndAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x1C07B40", Offset = "0x1C06140", VA = "0x181C07B40")]
	internal Task WriteEndInternalAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x1C05D80", Offset = "0x1C04380", VA = "0x181C05D80")]
	internal Task InternalWriteEndAsync(JsonContainerType type, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x1C077D0", Offset = "0x1C05DD0", VA = "0x181C077D0", Slot = "13")]
	public virtual Task WriteEndArrayAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x1C07A60", Offset = "0x1C06060", VA = "0x181C07A60", Slot = "14")]
	public virtual Task WriteEndConstructorAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x1C07CB0", Offset = "0x1C062B0", VA = "0x181C07CB0", Slot = "15")]
	public virtual Task WriteEndObjectAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x1C08100", Offset = "0x1C06700", VA = "0x181C08100", Slot = "16")]
	public virtual Task WriteNullAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x1C081F0", Offset = "0x1C067F0", VA = "0x181C081F0", Slot = "17")]
	public virtual Task WritePropertyNameAsync(string name, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x1C082D0", Offset = "0x1C068D0", VA = "0x181C082D0", Slot = "18")]
	public virtual Task WritePropertyNameAsync(string name, bool escape, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x1C06000", Offset = "0x1C04600", VA = "0x181C06000")]
	internal Task InternalWritePropertyNameAsync(string name, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x1C08600", Offset = "0x1C06C00", VA = "0x181C08600", Slot = "19")]
	public virtual Task WriteStartArrayAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x1C06100", Offset = "0x1C04700", VA = "0x181C06100")]
	[AsyncStateMachine(typeof(_003CInternalWriteStartAsync_003Ed__20))]
	internal Task InternalWriteStartAsync(JsonToken token, JsonContainerType container, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x1C07510", Offset = "0x1C05B10", VA = "0x181C07510", Slot = "20")]
	public virtual Task WriteCommentAsync(string? text, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x1C05D60", Offset = "0x1C04360", VA = "0x181C05D60")]
	internal Task InternalWriteCommentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x1C084D0", Offset = "0x1C06AD0", VA = "0x181C084D0", Slot = "21")]
	public virtual Task WriteRawValueAsync(string? json, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x1C086E0", Offset = "0x1C06CE0", VA = "0x181C086E0", Slot = "22")]
	public virtual Task WriteStartConstructorAsync(string name, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x1C087D0", Offset = "0x1C06DD0", VA = "0x181C087D0", Slot = "23")]
	public virtual Task WriteStartObjectAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x1C089D0", Offset = "0x1C06FD0", VA = "0x181C089D0")]
	public Task WriteTokenAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x1C093E0", Offset = "0x1C079E0", VA = "0x181C093E0")]
	public Task WriteTokenAsync(JsonReader reader, bool writeChildren, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x1C09460", Offset = "0x1C07A60", VA = "0x181C09460")]
	public Task WriteTokenAsync(JsonToken token, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x1C08A60", Offset = "0x1C07060", VA = "0x181C08A60")]
	public Task WriteTokenAsync(JsonToken token, object? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x1C088B0", Offset = "0x1C06EB0", VA = "0x181C088B0", Slot = "24")]
	[AsyncStateMachine(typeof(_003CWriteTokenAsync_003Ed__30))]
	internal virtual Task WriteTokenAsync(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x1C09480", Offset = "0x1C07A80", VA = "0x181C09480")]
	[AsyncStateMachine(typeof(_003CWriteTokenSyncReadingAsync_003Ed__31))]
	internal Task WriteTokenSyncReadingAsync(JsonReader reader, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x1C075F0", Offset = "0x1C05BF0", VA = "0x181C075F0")]
	[AsyncStateMachine(typeof(_003CWriteConstructorDateAsync_003Ed__32))]
	private Task WriteConstructorDateAsync(JsonReader reader, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x1C0C050", Offset = "0x1C0A650", VA = "0x181C0C050", Slot = "25")]
	public virtual Task WriteValueAsync(bool value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x1C0ACB0", Offset = "0x1C092B0", VA = "0x181C0ACB0", Slot = "26")]
	public virtual Task WriteValueAsync(bool? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x1C0ABD0", Offset = "0x1C091D0", VA = "0x181C0ABD0", Slot = "27")]
	public virtual Task WriteValueAsync(byte value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x1C0BA10", Offset = "0x1C0A010", VA = "0x181C0BA10", Slot = "28")]
	public virtual Task WriteValueAsync(byte? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x1C0AAF0", Offset = "0x1C090F0", VA = "0x181C0AAF0", Slot = "29")]
	public virtual Task WriteValueAsync(byte[]? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x1C0B4C0", Offset = "0x1C09AC0", VA = "0x181C0B4C0", Slot = "30")]
	public virtual Task WriteValueAsync(char value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x1C0BBD0", Offset = "0x1C0A1D0", VA = "0x181C0BBD0", Slot = "31")]
	public virtual Task WriteValueAsync(char? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x1C0AE70", Offset = "0x1C09470", VA = "0x181C0AE70", Slot = "32")]
	public virtual Task WriteValueAsync(DateTime value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x1C0D560", Offset = "0x1C0BB60", VA = "0x181C0D560", Slot = "33")]
	public virtual Task WriteValueAsync(DateTime? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x1C0B3D0", Offset = "0x1C099D0", VA = "0x181C0B3D0", Slot = "34")]
	public virtual Task WriteValueAsync(DateTimeOffset value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x1C0D730", Offset = "0x1C0BD30", VA = "0x181C0D730", Slot = "35")]
	public virtual Task WriteValueAsync(DateTimeOffset? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x1C0BCB0", Offset = "0x1C0A2B0", VA = "0x181C0BCB0", Slot = "36")]
	public virtual Task WriteValueAsync(decimal value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x1C0AF50", Offset = "0x1C09550", VA = "0x181C0AF50", Slot = "37")]
	public virtual Task WriteValueAsync(decimal? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x1C0B2F0", Offset = "0x1C098F0", VA = "0x181C0B2F0", Slot = "38")]
	public virtual Task WriteValueAsync(double value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x1C0A4A0", Offset = "0x1C08AA0", VA = "0x181C0A4A0", Slot = "39")]
	public virtual Task WriteValueAsync(double? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x1C0B210", Offset = "0x1C09810", VA = "0x181C0B210", Slot = "40")]
	public virtual Task WriteValueAsync(float value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x1C0B850", Offset = "0x1C09E50", VA = "0x181C0B850", Slot = "41")]
	public virtual Task WriteValueAsync(float? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x1C0A910", Offset = "0x1C08F10", VA = "0x181C0A910", Slot = "42")]
	public virtual Task WriteValueAsync(Guid value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x1C0BF60", Offset = "0x1C0A560", VA = "0x181C0BF60", Slot = "43")]
	public virtual Task WriteValueAsync(Guid? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x1C0D830", Offset = "0x1C0BE30", VA = "0x181C0D830", Slot = "44")]
	public virtual Task WriteValueAsync(int value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x1C0B050", Offset = "0x1C09650", VA = "0x181C0B050", Slot = "45")]
	public virtual Task WriteValueAsync(int? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x1C0B690", Offset = "0x1C09C90", VA = "0x181C0B690", Slot = "46")]
	public virtual Task WriteValueAsync(long value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x1C0A3B0", Offset = "0x1C089B0", VA = "0x181C0A3B0", Slot = "47")]
	public virtual Task WriteValueAsync(long? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x1C0AD90", Offset = "0x1C09390", VA = "0x181C0AD90", Slot = "48")]
	public virtual Task WriteValueAsync(object? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x1C0D650", Offset = "0x1C0BC50", VA = "0x181C0D650", Slot = "49")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(sbyte value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x1C0A830", Offset = "0x1C08E30", VA = "0x181C0A830", Slot = "50")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(sbyte? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x1C0B130", Offset = "0x1C09730", VA = "0x181C0B130", Slot = "51")]
	public virtual Task WriteValueAsync(short value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x1C0BDA0", Offset = "0x1C0A3A0", VA = "0x181C0BDA0", Slot = "52")]
	public virtual Task WriteValueAsync(short? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x1C0B770", Offset = "0x1C09D70", VA = "0x181C0B770", Slot = "53")]
	public virtual Task WriteValueAsync(string? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x1C0B930", Offset = "0x1C09F30", VA = "0x181C0B930", Slot = "54")]
	public virtual Task WriteValueAsync(TimeSpan value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x1C0B5A0", Offset = "0x1C09BA0", VA = "0x181C0B5A0", Slot = "55")]
	public virtual Task WriteValueAsync(TimeSpan? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x1C0C130", Offset = "0x1C0A730", VA = "0x181C0C130", Slot = "56")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(uint value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x1C0BAF0", Offset = "0x1C0A0F0", VA = "0x181C0BAF0", Slot = "57")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(uint? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x1C0BE80", Offset = "0x1C0A480", VA = "0x181C0BE80", Slot = "58")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(ulong value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x1C0AA00", Offset = "0x1C09000", VA = "0x181C0AA00", Slot = "59")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(ulong? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x1C0A750", Offset = "0x1C08D50", VA = "0x181C0A750", Slot = "60")]
	public virtual Task WriteValueAsync(Uri? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x1C0A590", Offset = "0x1C08B90", VA = "0x181C0A590", Slot = "61")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(ushort value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x1C0A670", Offset = "0x1C08C70", VA = "0x181C0A670", Slot = "62")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(ushort? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x1C0A2C0", Offset = "0x1C088C0", VA = "0x181C0A2C0", Slot = "63")]
	public virtual Task WriteUndefinedAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x1C0F810", Offset = "0x1C0DE10", VA = "0x181C0F810", Slot = "64")]
	public virtual Task WriteWhitespaceAsync(string ws, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x1C06390", Offset = "0x1C04990", VA = "0x181C06390")]
	internal Task InternalWriteValueAsync(JsonToken token, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x1C069D0", Offset = "0x1C04FD0", VA = "0x181C069D0")]
	protected Task SetWriteStateAsync(JsonToken token, object value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x1C0C210", Offset = "0x1C0A810", VA = "0x181C0C210")]
	internal static Task WriteValueAsync(JsonWriter writer, PrimitiveTypeCode typeCode, object value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x1C05610", Offset = "0x1C03C10", VA = "0x181C05610")]
	internal static State[][] BuildStateArray()
	{
		return null;
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x1C0F8F0", Offset = "0x1C0DEF0", VA = "0x181C0F8F0")]
	static JsonWriter()
	{
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "65")]
	internal virtual void OnStringEscapeHandlingChanged()
	{
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x1C0FC10", Offset = "0x1C0E210", VA = "0x181C0FC10")]
	protected JsonWriter()
	{
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x1C07500", Offset = "0x1C05B00", VA = "0x181C07500")]
	internal void UpdateScopeWithFinishedValue()
	{
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x1C066D0", Offset = "0x1C04CD0", VA = "0x181C066D0")]
	private void Push(JsonContainerType value)
	{
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x1C065A0", Offset = "0x1C04BA0", VA = "0x181C065A0")]
	private JsonContainerType Pop()
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
	private JsonContainerType Peek()
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000457")]
	public abstract void Flush();

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x1C05A90", Offset = "0x1C04090", VA = "0x181C05A90", Slot = "67")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x1C088A0", Offset = "0x1C06EA0", VA = "0x181C088A0", Slot = "68")]
	public virtual void WriteStartObject()
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x1C07D80", Offset = "0x1C06380", VA = "0x181C07D80", Slot = "69")]
	public virtual void WriteEndObject()
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x1C086D0", Offset = "0x1C06CD0", VA = "0x181C086D0", Slot = "70")]
	public virtual void WriteStartArray()
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x1C078A0", Offset = "0x1C05EA0", VA = "0x181C078A0", Slot = "71")]
	public virtual void WriteEndArray()
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x1C087C0", Offset = "0x1C06DC0", VA = "0x181C087C0", Slot = "72")]
	public virtual void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x1C07B30", Offset = "0x1C06130", VA = "0x181C07B30", Slot = "73")]
	public virtual void WriteEndConstructor()
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x1C060D0", Offset = "0x1C046D0", VA = "0x181C060D0", Slot = "74")]
	public virtual void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x1C083D0", Offset = "0x1C069D0", VA = "0x181C083D0", Slot = "75")]
	public virtual void WritePropertyName(string name, bool escape)
	{
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x1C07D90", Offset = "0x1C06390", VA = "0x181C07D90", Slot = "76")]
	public virtual void WriteEnd()
	{
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x1C09900", Offset = "0x1C07F00", VA = "0x181C09900")]
	public void WriteToken(JsonReader reader)
	{
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x1C0A240", Offset = "0x1C08840", VA = "0x181C0A240")]
	public void WriteToken(JsonReader reader, bool writeChildren)
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x1C09990", Offset = "0x1C07F90", VA = "0x181C09990")]
	public void WriteToken(JsonToken token, object? value)
	{
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x1C09980", Offset = "0x1C07F80", VA = "0x181C09980")]
	public void WriteToken(JsonToken token)
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x1C095A0", Offset = "0x1C07BA0", VA = "0x181C095A0", Slot = "77")]
	internal virtual void WriteToken(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments)
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x1C064D0", Offset = "0x1C04AD0", VA = "0x181C064D0")]
	private bool IsWriteTokenIncomplete(JsonReader reader, bool writeChildren, int initialDepth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x1C05950", Offset = "0x1C03F50", VA = "0x181C05950")]
	private int CalculateWriteTokenInitialDepth(JsonReader reader)
	{
		return default(int);
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x1C058E0", Offset = "0x1C03EE0", VA = "0x181C058E0")]
	private int CalculateWriteTokenFinalDepth(JsonReader reader)
	{
		return default(int);
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x1C07710", Offset = "0x1C05D10", VA = "0x181C07710")]
	private void WriteConstructorDate(JsonReader reader)
	{
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x1C07E80", Offset = "0x1C06480", VA = "0x181C07E80")]
	private void WriteEnd(JsonContainerType type)
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x1C04EC0", Offset = "0x1C034C0", VA = "0x181C04EC0")]
	private void AutoCompleteAll()
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x1C05CA0", Offset = "0x1C042A0", VA = "0x181C05CA0")]
	private JsonToken GetCloseTokenForType(JsonContainerType type)
	{
		return default(JsonToken);
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x1C05330", Offset = "0x1C03930", VA = "0x181C05330")]
	private void AutoCompleteClose(JsonContainerType type)
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x1C057E0", Offset = "0x1C03DE0", VA = "0x181C057E0")]
	private int CalculateLevelsToComplete(JsonContainerType type)
	{
		return default(int);
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x1C07430", Offset = "0x1C05A30", VA = "0x181C07430")]
	private void UpdateCurrentState()
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "78")]
	protected virtual void WriteEnd(JsonToken token)
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "79")]
	protected virtual void WriteIndent()
	{
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "80")]
	protected virtual void WriteValueDelimiter()
	{
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "81")]
	protected virtual void WriteIndentSpace()
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x1C053E0", Offset = "0x1C039E0", VA = "0x181C053E0")]
	internal void AutoComplete(JsonToken tokenBeingWritten)
	{
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x1C081D0", Offset = "0x1C067D0", VA = "0x181C081D0", Slot = "82")]
	public virtual void WriteNull()
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x1C0A390", Offset = "0x1C08990", VA = "0x181C0A390", Slot = "83")]
	public virtual void WriteUndefined()
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "84")]
	public virtual void WriteRaw(string? json)
	{
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x1C085B0", Offset = "0x1C06BB0", VA = "0x181C085B0", Slot = "85")]
	public virtual void WriteRawValue(string? json)
	{
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x1C0DDD0", Offset = "0x1C0C3D0", VA = "0x181C0DDD0", Slot = "86")]
	public virtual void WriteValue(string? value)
	{
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x1C0DA60", Offset = "0x1C0C060", VA = "0x181C0DA60", Slot = "87")]
	public virtual void WriteValue(int value)
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x1C0DA60", Offset = "0x1C0C060", VA = "0x181C0DA60", Slot = "88")]
	[CLSCompliant(false)]
	public virtual void WriteValue(uint value)
	{
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x1C0DA60", Offset = "0x1C0C060", VA = "0x181C0DA60", Slot = "89")]
	public virtual void WriteValue(long value)
	{
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x1C0DA60", Offset = "0x1C0C060", VA = "0x181C0DA60", Slot = "90")]
	[CLSCompliant(false)]
	public virtual void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x1C0DC30", Offset = "0x1C0C230", VA = "0x181C0DC30", Slot = "91")]
	public virtual void WriteValue(float value)
	{
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x1C0DC30", Offset = "0x1C0C230", VA = "0x181C0DC30", Slot = "92")]
	public virtual void WriteValue(double value)
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x1C0DEF0", Offset = "0x1C0C4F0", VA = "0x181C0DEF0", Slot = "93")]
	public virtual void WriteValue(bool value)
	{
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x1C0DA60", Offset = "0x1C0C060", VA = "0x181C0DA60", Slot = "94")]
	public virtual void WriteValue(short value)
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x1C0DA60", Offset = "0x1C0C060", VA = "0x181C0DA60", Slot = "95")]
	[CLSCompliant(false)]
	public virtual void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x1C0DDD0", Offset = "0x1C0C3D0", VA = "0x181C0DDD0", Slot = "96")]
	public virtual void WriteValue(char value)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x1C0DA60", Offset = "0x1C0C060", VA = "0x181C0DA60", Slot = "97")]
	public virtual void WriteValue(byte value)
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x1C0DA60", Offset = "0x1C0C060", VA = "0x181C0DA60", Slot = "98")]
	[CLSCompliant(false)]
	public virtual void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x1C0DC30", Offset = "0x1C0C230", VA = "0x181C0DC30", Slot = "99")]
	public virtual void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x1C0DA80", Offset = "0x1C0C080", VA = "0x181C0DA80", Slot = "100")]
	public virtual void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x1C0DA80", Offset = "0x1C0C080", VA = "0x181C0DA80", Slot = "101")]
	public virtual void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x1C0DDD0", Offset = "0x1C0C3D0", VA = "0x181C0DDD0", Slot = "102")]
	public virtual void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x1C0DDD0", Offset = "0x1C0C3D0", VA = "0x181C0DDD0", Slot = "103")]
	public virtual void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x1C0F680", Offset = "0x1C0DC80", VA = "0x181C0F680", Slot = "104")]
	public virtual void WriteValue(int? value)
	{
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x1C0DD50", Offset = "0x1C0C350", VA = "0x181C0DD50", Slot = "105")]
	[CLSCompliant(false)]
	public virtual void WriteValue(uint? value)
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x1C0F380", Offset = "0x1C0D980", VA = "0x181C0F380", Slot = "106")]
	public virtual void WriteValue(long? value)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x1C0DF10", Offset = "0x1C0C510", VA = "0x181C0DF10", Slot = "107")]
	[CLSCompliant(false)]
	public virtual void WriteValue(ulong? value)
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x1C0DC50", Offset = "0x1C0C250", VA = "0x181C0DC50", Slot = "108")]
	public virtual void WriteValue(float? value)
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x1C0DDF0", Offset = "0x1C0C3F0", VA = "0x181C0DDF0", Slot = "109")]
	public virtual void WriteValue(double? value)
	{
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x1C0F5D0", Offset = "0x1C0DBD0", VA = "0x181C0F5D0", Slot = "110")]
	public virtual void WriteValue(bool? value)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x1C0DF90", Offset = "0x1C0C590", VA = "0x181C0DF90", Slot = "111")]
	public virtual void WriteValue(short? value)
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x1C0F790", Offset = "0x1C0DD90", VA = "0x181C0F790", Slot = "112")]
	[CLSCompliant(false)]
	public virtual void WriteValue(ushort? value)
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x1C0D9E0", Offset = "0x1C0BFE0", VA = "0x181C0D9E0", Slot = "113")]
	public virtual void WriteValue(char? value)
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x1C0DE70", Offset = "0x1C0C470", VA = "0x181C0DE70", Slot = "114")]
	public virtual void WriteValue(byte? value)
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x1C0DBB0", Offset = "0x1C0C1B0", VA = "0x181C0DBB0", Slot = "115")]
	[CLSCompliant(false)]
	public virtual void WriteValue(sbyte? value)
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x1C0DB20", Offset = "0x1C0C120", VA = "0x181C0DB20", Slot = "116")]
	public virtual void WriteValue(decimal? value)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x1C0DAA0", Offset = "0x1C0C0A0", VA = "0x181C0DAA0", Slot = "117")]
	public virtual void WriteValue(DateTime? value)
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x1C0E010", Offset = "0x1C0C610", VA = "0x181C0E010", Slot = "118")]
	public virtual void WriteValue(DateTimeOffset? value)
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x1C0F700", Offset = "0x1C0DD00", VA = "0x181C0F700", Slot = "119")]
	public virtual void WriteValue(Guid? value)
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x1C0DCD0", Offset = "0x1C0C2D0", VA = "0x181C0DCD0", Slot = "120")]
	public virtual void WriteValue(TimeSpan? value)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x1C0F650", Offset = "0x1C0DC50", VA = "0x181C0F650", Slot = "121")]
	public virtual void WriteValue(byte[]? value)
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x1C0F400", Offset = "0x1C0DA00", VA = "0x181C0F400", Slot = "122")]
	public virtual void WriteValue(Uri? value)
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x1C0F4A0", Offset = "0x1C0DAA0", VA = "0x181C0F4A0", Slot = "123")]
	public virtual void WriteValue(object? value)
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x1C05D70", Offset = "0x1C04370", VA = "0x181C05D70", Slot = "124")]
	public virtual void WriteComment(string? text)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x1C06470", Offset = "0x1C04A70", VA = "0x181C06470", Slot = "125")]
	public virtual void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x1C06F60", Offset = "0x1C05560", VA = "0x181C06F60", Slot = "4")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x1C05BA0", Offset = "0x1C041A0", VA = "0x181C05BA0", Slot = "126")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x1C0E0A0", Offset = "0x1C0C6A0", VA = "0x181C0E0A0")]
	internal static void WriteValue(JsonWriter writer, PrimitiveTypeCode typeCode, object value)
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x1C06840", Offset = "0x1C04E40", VA = "0x181C06840")]
	private static void ResolveConvertibleValue(IConvertible convertible, out PrimitiveTypeCode typeCode, out object value)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x1C05AF0", Offset = "0x1C040F0", VA = "0x181C05AF0")]
	private static JsonWriterException CreateUnsupportedTypeException(JsonWriter writer, object value)
	{
		return null;
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x1C06D40", Offset = "0x1C05340", VA = "0x181C06D40")]
	protected void SetWriteState(JsonToken token, object value)
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x1C05330", Offset = "0x1C03930", VA = "0x181C05330")]
	internal void InternalWriteEnd(JsonContainerType container)
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x1C060D0", Offset = "0x1C046D0", VA = "0x181C060D0")]
	internal void InternalWritePropertyName(string name)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal void InternalWriteRaw()
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x1C06200", Offset = "0x1C04800", VA = "0x181C06200")]
	internal void InternalWriteStart(JsonToken token, JsonContainerType container)
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x1C06450", Offset = "0x1C04A50", VA = "0x181C06450")]
	internal void InternalWriteValue(JsonToken token)
	{
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x1C06470", Offset = "0x1C04A70", VA = "0x181C06470")]
	internal void InternalWriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x1C05D70", Offset = "0x1C04370", VA = "0x181C05D70")]
	internal void InternalWriteComment()
	{
	}
}
