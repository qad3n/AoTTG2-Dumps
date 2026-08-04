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
		[Address(RVA = "0x3DA7420", Offset = "0x3DA7420", VA = "0x3DA7420", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004BC")]
		[Address(RVA = "0x3DA7790", Offset = "0x3DA7790", VA = "0x3DA7790", Slot = "5")]
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
		[Address(RVA = "0x3DA77F0", Offset = "0x3DA77F0", VA = "0x3DA77F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x3DA7A60", Offset = "0x3DA7A60", VA = "0x3DA7A60", Slot = "5")]
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
		[Address(RVA = "0x3DA7AC0", Offset = "0x3DA7AC0", VA = "0x3DA7AC0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004C0")]
		[Address(RVA = "0x3DA8570", Offset = "0x3DA8570", VA = "0x3DA8570", Slot = "5")]
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
		[Address(RVA = "0x3DA85D0", Offset = "0x3DA85D0", VA = "0x3DA85D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004C2")]
		[Address(RVA = "0x3DA8ED0", Offset = "0x3DA8ED0", VA = "0x3DA8ED0", Slot = "5")]
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
		[Address(RVA = "0x3DA8F30", Offset = "0x3DA8F30", VA = "0x3DA8F30", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004C4")]
		[Address(RVA = "0x3DA9560", Offset = "0x3DA9560", VA = "0x3DA9560", Slot = "5")]
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
		[Address(RVA = "0x3DA1FC0", Offset = "0x3DA1FC0", VA = "0x3DA1FC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600043C")]
		[Address(RVA = "0x3DA1FD0", Offset = "0x3DA1FD0", VA = "0x3DA1FD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	public bool AutoCompleteOnClose
	{
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x3DA1FE0", Offset = "0x3DA1FE0", VA = "0x3DA1FE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600043E")]
		[Address(RVA = "0x3DA1FF0", Offset = "0x3DA1FF0", VA = "0x3DA1FF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	protected internal int Top
	{
		[Token(Token = "0x600043F")]
		[Address(RVA = "0x3D8BF90", Offset = "0x3D8BF90", VA = "0x3D8BF90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A1")]
	public WriteState WriteState
	{
		[Token(Token = "0x6000440")]
		[Address(RVA = "0x3DA2000", Offset = "0x3DA2000", VA = "0x3DA2000")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x170000A2")]
	internal string ContainerPath
	{
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x3DA20A0", Offset = "0x3DA20A0", VA = "0x3DA20A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A3")]
	public string Path
	{
		[Token(Token = "0x6000442")]
		[Address(RVA = "0x3DA2140", Offset = "0x3DA2140", VA = "0x3DA2140")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A4")]
	public Formatting Formatting
	{
		[Token(Token = "0x6000443")]
		[Address(RVA = "0x3DA2260", Offset = "0x3DA2260", VA = "0x3DA2260")]
		get
		{
			return default(Formatting);
		}
		[Token(Token = "0x6000444")]
		[Address(RVA = "0x3DA2270", Offset = "0x3DA2270", VA = "0x3DA2270")]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	public DateFormatHandling DateFormatHandling
	{
		[Token(Token = "0x6000445")]
		[Address(RVA = "0x3DA22D0", Offset = "0x3DA22D0", VA = "0x3DA22D0")]
		get
		{
			return default(DateFormatHandling);
		}
		[Token(Token = "0x6000446")]
		[Address(RVA = "0x3DA22E0", Offset = "0x3DA22E0", VA = "0x3DA22E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	public DateTimeZoneHandling DateTimeZoneHandling
	{
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x3DA2340", Offset = "0x3DA2340", VA = "0x3DA2340")]
		get
		{
			return default(DateTimeZoneHandling);
		}
		[Token(Token = "0x6000448")]
		[Address(RVA = "0x3DA2350", Offset = "0x3DA2350", VA = "0x3DA2350")]
		set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	public StringEscapeHandling StringEscapeHandling
	{
		[Token(Token = "0x6000449")]
		[Address(RVA = "0x3DA23B0", Offset = "0x3DA23B0", VA = "0x3DA23B0")]
		get
		{
			return default(StringEscapeHandling);
		}
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x3DA23C0", Offset = "0x3DA23C0", VA = "0x3DA23C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public FloatFormatHandling FloatFormatHandling
	{
		[Token(Token = "0x600044C")]
		[Address(RVA = "0x3DA2440", Offset = "0x3DA2440", VA = "0x3DA2440")]
		get
		{
			return default(FloatFormatHandling);
		}
		[Token(Token = "0x600044D")]
		[Address(RVA = "0x3DA2450", Offset = "0x3DA2450", VA = "0x3DA2450")]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	public string? DateFormatString
	{
		[Token(Token = "0x600044E")]
		[Address(RVA = "0x3DA24B0", Offset = "0x3DA24B0", VA = "0x3DA24B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600044F")]
		[Address(RVA = "0x3DA24C0", Offset = "0x3DA24C0", VA = "0x3DA24C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public CultureInfo Culture
	{
		[Token(Token = "0x6000450")]
		[Address(RVA = "0x3D8F840", Offset = "0x3D8F840", VA = "0x3D8F840")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000451")]
		[Address(RVA = "0x3DA24D0", Offset = "0x3DA24D0", VA = "0x3DA24D0")]
		set
		{
		}
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x3D9B550", Offset = "0x3D9B550", VA = "0x3D9B550")]
	internal Task AutoCompleteAsync(JsonToken tokenBeingWritten, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x3D9B7C0", Offset = "0x3D9B7C0", VA = "0x3D9B7C0")]
	[AsyncStateMachine(typeof(_003CAutoCompleteAsync_003Ed__1))]
	private Task AutoCompleteAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x3D9B8C0", Offset = "0x3D9B8C0", VA = "0x3D9B8C0", Slot = "5")]
	public virtual Task CloseAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x3D9B990", Offset = "0x3D9B990", VA = "0x3D9B990", Slot = "6")]
	public virtual Task FlushAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x3D9BA60", Offset = "0x3D9BA60", VA = "0x3D9BA60", Slot = "7")]
	protected virtual Task WriteEndAsync(JsonToken token, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x3D9BB30", Offset = "0x3D9BB30", VA = "0x3D9BB30", Slot = "8")]
	protected virtual Task WriteIndentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x3D9BC00", Offset = "0x3D9BC00", VA = "0x3D9BC00", Slot = "9")]
	protected virtual Task WriteValueDelimiterAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x3D9BCD0", Offset = "0x3D9BCD0", VA = "0x3D9BCD0", Slot = "10")]
	protected virtual Task WriteIndentSpaceAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x3D9BDA0", Offset = "0x3D9BDA0", VA = "0x3D9BDA0", Slot = "11")]
	public virtual Task WriteRawAsync(string? json, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x3D9BE70", Offset = "0x3D9BE70", VA = "0x3D9BE70", Slot = "12")]
	public virtual Task WriteEndAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x3D9BF40", Offset = "0x3D9BF40", VA = "0x3D9BF40")]
	internal Task WriteEndInternalAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x3D9C0B0", Offset = "0x3D9C0B0", VA = "0x3D9C0B0")]
	internal Task InternalWriteEndAsync(JsonContainerType type, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x3D9C9A0", Offset = "0x3D9C9A0", VA = "0x3D9C9A0", Slot = "13")]
	public virtual Task WriteEndArrayAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x3D9CA70", Offset = "0x3D9CA70", VA = "0x3D9CA70", Slot = "14")]
	public virtual Task WriteEndConstructorAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x3D9CB40", Offset = "0x3D9CB40", VA = "0x3D9CB40", Slot = "15")]
	public virtual Task WriteEndObjectAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x3D9CC10", Offset = "0x3D9CC10", VA = "0x3D9CC10", Slot = "16")]
	public virtual Task WriteNullAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x3D9CCE0", Offset = "0x3D9CCE0", VA = "0x3D9CCE0", Slot = "17")]
	public virtual Task WritePropertyNameAsync(string name, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x3D9CDB0", Offset = "0x3D9CDB0", VA = "0x3D9CDB0", Slot = "18")]
	public virtual Task WritePropertyNameAsync(string name, bool escape, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x3D8D5A0", Offset = "0x3D8D5A0", VA = "0x3D8D5A0")]
	internal Task InternalWritePropertyNameAsync(string name, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x3D9CE90", Offset = "0x3D9CE90", VA = "0x3D9CE90", Slot = "19")]
	public virtual Task WriteStartArrayAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x3D8E4E0", Offset = "0x3D8E4E0", VA = "0x3D8E4E0")]
	[AsyncStateMachine(typeof(_003CInternalWriteStartAsync_003Ed__20))]
	internal Task InternalWriteStartAsync(JsonToken token, JsonContainerType container, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x3D9CF60", Offset = "0x3D9CF60", VA = "0x3D9CF60", Slot = "20")]
	public virtual Task WriteCommentAsync(string? text, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x3D8C700", Offset = "0x3D8C700", VA = "0x3D8C700")]
	internal Task InternalWriteCommentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x3D9D030", Offset = "0x3D9D030", VA = "0x3D9D030", Slot = "21")]
	public virtual Task WriteRawValueAsync(string? json, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x3D9D100", Offset = "0x3D9D100", VA = "0x3D9D100", Slot = "22")]
	public virtual Task WriteStartConstructorAsync(string name, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x3D9D1D0", Offset = "0x3D9D1D0", VA = "0x3D9D1D0", Slot = "23")]
	public virtual Task WriteStartObjectAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x3D9D2A0", Offset = "0x3D9D2A0", VA = "0x3D9D2A0")]
	public Task WriteTokenAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x3D9D320", Offset = "0x3D9D320", VA = "0x3D9D320")]
	public Task WriteTokenAsync(JsonReader reader, bool writeChildren, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x3D9D3A0", Offset = "0x3D9D3A0", VA = "0x3D9D3A0")]
	public Task WriteTokenAsync(JsonToken token, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x3D9D3B0", Offset = "0x3D9D3B0", VA = "0x3D9D3B0")]
	public Task WriteTokenAsync(JsonToken token, object? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x3D9DB90", Offset = "0x3D9DB90", VA = "0x3D9DB90", Slot = "24")]
	[AsyncStateMachine(typeof(_003CWriteTokenAsync_003Ed__30))]
	internal virtual Task WriteTokenAsync(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x3D9DCF0", Offset = "0x3D9DCF0", VA = "0x3D9DCF0")]
	[AsyncStateMachine(typeof(_003CWriteTokenSyncReadingAsync_003Ed__31))]
	internal Task WriteTokenSyncReadingAsync(JsonReader reader, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x3D9DE10", Offset = "0x3D9DE10", VA = "0x3D9DE10")]
	[AsyncStateMachine(typeof(_003CWriteConstructorDateAsync_003Ed__32))]
	private Task WriteConstructorDateAsync(JsonReader reader, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x3D9DF30", Offset = "0x3D9DF30", VA = "0x3D9DF30", Slot = "25")]
	public virtual Task WriteValueAsync(bool value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x3D9E000", Offset = "0x3D9E000", VA = "0x3D9E000", Slot = "26")]
	public virtual Task WriteValueAsync(bool? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x3D9E0D0", Offset = "0x3D9E0D0", VA = "0x3D9E0D0", Slot = "27")]
	public virtual Task WriteValueAsync(byte value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x3D9E1A0", Offset = "0x3D9E1A0", VA = "0x3D9E1A0", Slot = "28")]
	public virtual Task WriteValueAsync(byte? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x3D9E270", Offset = "0x3D9E270", VA = "0x3D9E270", Slot = "29")]
	public virtual Task WriteValueAsync(byte[]? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x3D9E340", Offset = "0x3D9E340", VA = "0x3D9E340", Slot = "30")]
	public virtual Task WriteValueAsync(char value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x3D9E410", Offset = "0x3D9E410", VA = "0x3D9E410", Slot = "31")]
	public virtual Task WriteValueAsync(char? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x3D9E4E0", Offset = "0x3D9E4E0", VA = "0x3D9E4E0", Slot = "32")]
	public virtual Task WriteValueAsync(DateTime value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x3D9E5B0", Offset = "0x3D9E5B0", VA = "0x3D9E5B0", Slot = "33")]
	public virtual Task WriteValueAsync(DateTime? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x3D9E690", Offset = "0x3D9E690", VA = "0x3D9E690", Slot = "34")]
	public virtual Task WriteValueAsync(DateTimeOffset value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x3D9E770", Offset = "0x3D9E770", VA = "0x3D9E770", Slot = "35")]
	public virtual Task WriteValueAsync(DateTimeOffset? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x3D9E850", Offset = "0x3D9E850", VA = "0x3D9E850", Slot = "36")]
	public virtual Task WriteValueAsync(decimal value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x3D9E930", Offset = "0x3D9E930", VA = "0x3D9E930", Slot = "37")]
	public virtual Task WriteValueAsync(decimal? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x3D9EA10", Offset = "0x3D9EA10", VA = "0x3D9EA10", Slot = "38")]
	public virtual Task WriteValueAsync(double value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x3D9EAF0", Offset = "0x3D9EAF0", VA = "0x3D9EAF0", Slot = "39")]
	public virtual Task WriteValueAsync(double? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x3D9EBD0", Offset = "0x3D9EBD0", VA = "0x3D9EBD0", Slot = "40")]
	public virtual Task WriteValueAsync(float value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x3D9ECB0", Offset = "0x3D9ECB0", VA = "0x3D9ECB0", Slot = "41")]
	public virtual Task WriteValueAsync(float? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x3D9ED80", Offset = "0x3D9ED80", VA = "0x3D9ED80", Slot = "42")]
	public virtual Task WriteValueAsync(Guid value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x3D9EE60", Offset = "0x3D9EE60", VA = "0x3D9EE60", Slot = "43")]
	public virtual Task WriteValueAsync(Guid? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x3D9EF40", Offset = "0x3D9EF40", VA = "0x3D9EF40", Slot = "44")]
	public virtual Task WriteValueAsync(int value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x3D9F010", Offset = "0x3D9F010", VA = "0x3D9F010", Slot = "45")]
	public virtual Task WriteValueAsync(int? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x3D9F0E0", Offset = "0x3D9F0E0", VA = "0x3D9F0E0", Slot = "46")]
	public virtual Task WriteValueAsync(long value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x3D9F1B0", Offset = "0x3D9F1B0", VA = "0x3D9F1B0", Slot = "47")]
	public virtual Task WriteValueAsync(long? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x3D9F290", Offset = "0x3D9F290", VA = "0x3D9F290", Slot = "48")]
	public virtual Task WriteValueAsync(object? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x3D9F360", Offset = "0x3D9F360", VA = "0x3D9F360", Slot = "49")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(sbyte value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x3D9F430", Offset = "0x3D9F430", VA = "0x3D9F430", Slot = "50")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(sbyte? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x3D9F500", Offset = "0x3D9F500", VA = "0x3D9F500", Slot = "51")]
	public virtual Task WriteValueAsync(short value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x3D9F5D0", Offset = "0x3D9F5D0", VA = "0x3D9F5D0", Slot = "52")]
	public virtual Task WriteValueAsync(short? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x3D9F6A0", Offset = "0x3D9F6A0", VA = "0x3D9F6A0", Slot = "53")]
	public virtual Task WriteValueAsync(string? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x3D9F770", Offset = "0x3D9F770", VA = "0x3D9F770", Slot = "54")]
	public virtual Task WriteValueAsync(TimeSpan value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x3D9F840", Offset = "0x3D9F840", VA = "0x3D9F840", Slot = "55")]
	public virtual Task WriteValueAsync(TimeSpan? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x3D9F920", Offset = "0x3D9F920", VA = "0x3D9F920", Slot = "56")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(uint value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x3D9F9F0", Offset = "0x3D9F9F0", VA = "0x3D9F9F0", Slot = "57")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(uint? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x3D9FAC0", Offset = "0x3D9FAC0", VA = "0x3D9FAC0", Slot = "58")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(ulong value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x3D9FB90", Offset = "0x3D9FB90", VA = "0x3D9FB90", Slot = "59")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(ulong? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x3D9FC70", Offset = "0x3D9FC70", VA = "0x3D9FC70", Slot = "60")]
	public virtual Task WriteValueAsync(Uri? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x3D9FD40", Offset = "0x3D9FD40", VA = "0x3D9FD40", Slot = "61")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(ushort value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x3D9FE10", Offset = "0x3D9FE10", VA = "0x3D9FE10", Slot = "62")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(ushort? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x3D9FEE0", Offset = "0x3D9FEE0", VA = "0x3D9FEE0", Slot = "63")]
	public virtual Task WriteUndefinedAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x3D9FFB0", Offset = "0x3D9FFB0", VA = "0x3D9FFB0", Slot = "64")]
	public virtual Task WriteWhitespaceAsync(string ws, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x3D8F790", Offset = "0x3D8F790", VA = "0x3D8F790")]
	internal Task InternalWriteValueAsync(JsonToken token, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x3DA0090", Offset = "0x3DA0090", VA = "0x3DA0090")]
	protected Task SetWriteStateAsync(JsonToken token, object value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x3DA02D0", Offset = "0x3DA02D0", VA = "0x3DA02D0")]
	internal static Task WriteValueAsync(JsonWriter writer, PrimitiveTypeCode typeCode, object value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x3DA1A40", Offset = "0x3DA1A40", VA = "0x3DA1A40")]
	internal static State[][] BuildStateArray()
	{
		return null;
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x3DA1CC0", Offset = "0x3DA1CC0", VA = "0x3DA1CC0")]
	static JsonWriter()
	{
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x3DA2430", Offset = "0x3DA2430", VA = "0x3DA2430", Slot = "65")]
	internal virtual void OnStringEscapeHandlingChanged()
	{
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x3DA24E0", Offset = "0x3DA24E0", VA = "0x3DA24E0")]
	protected JsonWriter()
	{
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x3DA0080", Offset = "0x3DA0080", VA = "0x3DA0080")]
	internal void UpdateScopeWithFinishedValue()
	{
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x3DA2510", Offset = "0x3DA2510", VA = "0x3DA2510")]
	private void Push(JsonContainerType value)
	{
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x3D9C400", Offset = "0x3D9C400", VA = "0x3D9C400")]
	private JsonContainerType Pop()
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x3D9C0A0", Offset = "0x3D9C0A0", VA = "0x3D9C0A0")]
	private JsonContainerType Peek()
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000457")]
	public abstract void Flush();

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x3DA26C0", Offset = "0x3DA26C0", VA = "0x3DA26C0", Slot = "67")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x3DA27E0", Offset = "0x3DA27E0", VA = "0x3DA27E0", Slot = "68")]
	public virtual void WriteStartObject()
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x3DA2840", Offset = "0x3DA2840", VA = "0x3DA2840", Slot = "69")]
	public virtual void WriteEndObject()
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x3DA2860", Offset = "0x3DA2860", VA = "0x3DA2860", Slot = "70")]
	public virtual void WriteStartArray()
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x3DA2890", Offset = "0x3DA2890", VA = "0x3DA2890", Slot = "71")]
	public virtual void WriteEndArray()
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x3DA28A0", Offset = "0x3DA28A0", VA = "0x3DA28A0", Slot = "72")]
	public virtual void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x3DA28D0", Offset = "0x3DA28D0", VA = "0x3DA28D0", Slot = "73")]
	public virtual void WriteEndConstructor()
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x3DA28E0", Offset = "0x3DA28E0", VA = "0x3DA28E0", Slot = "74")]
	public virtual void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x3DA2920", Offset = "0x3DA2920", VA = "0x3DA2920", Slot = "75")]
	public virtual void WritePropertyName(string name, bool escape)
	{
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x3DA2940", Offset = "0x3DA2940", VA = "0x3DA2940", Slot = "76")]
	public virtual void WriteEnd()
	{
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x3DA2A20", Offset = "0x3DA2A20", VA = "0x3DA2A20")]
	public void WriteToken(JsonReader reader)
	{
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x3D9A540", Offset = "0x3D9A540", VA = "0x3D9A540")]
	public void WriteToken(JsonReader reader, bool writeChildren)
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x3DA2A90", Offset = "0x3DA2A90", VA = "0x3DA2A90")]
	public void WriteToken(JsonToken token, object? value)
	{
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x3DA3170", Offset = "0x3DA3170", VA = "0x3DA3170")]
	public void WriteToken(JsonToken token)
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x3DA3180", Offset = "0x3DA3180", VA = "0x3DA3180", Slot = "77")]
	internal virtual void WriteToken(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments)
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x3DA3640", Offset = "0x3DA3640", VA = "0x3DA3640")]
	private bool IsWriteTokenIncomplete(JsonReader reader, bool writeChildren, int initialDepth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x3DA3510", Offset = "0x3DA3510", VA = "0x3DA3510")]
	private int CalculateWriteTokenInitialDepth(JsonReader reader)
	{
		return default(int);
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x3DA36F0", Offset = "0x3DA36F0", VA = "0x3DA36F0")]
	private int CalculateWriteTokenFinalDepth(JsonReader reader)
	{
		return default(int);
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x3DA3580", Offset = "0x3DA3580", VA = "0x3DA3580")]
	private void WriteConstructorDate(JsonReader reader)
	{
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x3DA2950", Offset = "0x3DA2950", VA = "0x3DA2950")]
	private void WriteEnd(JsonContainerType type)
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x3DA2750", Offset = "0x3DA2750", VA = "0x3DA2750")]
	private void AutoCompleteAll()
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x3D9C4D0", Offset = "0x3D9C4D0", VA = "0x3D9C4D0")]
	private JsonToken GetCloseTokenForType(JsonContainerType type)
	{
		return default(JsonToken);
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x3DA3750", Offset = "0x3DA3750", VA = "0x3DA3750")]
	private void AutoCompleteClose(JsonContainerType type)
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x3D9C2F0", Offset = "0x3D9C2F0", VA = "0x3D9C2F0")]
	private int CalculateLevelsToComplete(JsonContainerType type)
	{
		return default(int);
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x3D9C900", Offset = "0x3D9C900", VA = "0x3D9C900")]
	private void UpdateCurrentState()
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x3DA37F0", Offset = "0x3DA37F0", VA = "0x3DA37F0", Slot = "78")]
	protected virtual void WriteEnd(JsonToken token)
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x3DA3800", Offset = "0x3DA3800", VA = "0x3DA3800", Slot = "79")]
	protected virtual void WriteIndent()
	{
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x3DA3810", Offset = "0x3DA3810", VA = "0x3DA3810", Slot = "80")]
	protected virtual void WriteValueDelimiter()
	{
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x3DA3820", Offset = "0x3DA3820", VA = "0x3DA3820", Slot = "81")]
	protected virtual void WriteIndentSpace()
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x3DA3830", Offset = "0x3DA3830", VA = "0x3DA3830")]
	internal void AutoComplete(JsonToken tokenBeingWritten)
	{
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x3DA3A50", Offset = "0x3DA3A50", VA = "0x3DA3A50", Slot = "82")]
	public virtual void WriteNull()
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x3DA3A80", Offset = "0x3DA3A80", VA = "0x3DA3A80", Slot = "83")]
	public virtual void WriteUndefined()
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x3DA3AA0", Offset = "0x3DA3AA0", VA = "0x3DA3AA0", Slot = "84")]
	public virtual void WriteRaw(string? json)
	{
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x3DA3AC0", Offset = "0x3DA3AC0", VA = "0x3DA3AC0", Slot = "85")]
	public virtual void WriteRawValue(string? json)
	{
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x3DA3B10", Offset = "0x3DA3B10", VA = "0x3DA3B10", Slot = "86")]
	public virtual void WriteValue(string? value)
	{
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x3DA3B30", Offset = "0x3DA3B30", VA = "0x3DA3B30", Slot = "87")]
	public virtual void WriteValue(int value)
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x3DA3B50", Offset = "0x3DA3B50", VA = "0x3DA3B50", Slot = "88")]
	[CLSCompliant(false)]
	public virtual void WriteValue(uint value)
	{
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x3DA3B70", Offset = "0x3DA3B70", VA = "0x3DA3B70", Slot = "89")]
	public virtual void WriteValue(long value)
	{
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x3DA3B90", Offset = "0x3DA3B90", VA = "0x3DA3B90", Slot = "90")]
	[CLSCompliant(false)]
	public virtual void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x3DA3BB0", Offset = "0x3DA3BB0", VA = "0x3DA3BB0", Slot = "91")]
	public virtual void WriteValue(float value)
	{
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x3DA3BD0", Offset = "0x3DA3BD0", VA = "0x3DA3BD0", Slot = "92")]
	public virtual void WriteValue(double value)
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x3DA3BF0", Offset = "0x3DA3BF0", VA = "0x3DA3BF0", Slot = "93")]
	public virtual void WriteValue(bool value)
	{
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x3DA3C10", Offset = "0x3DA3C10", VA = "0x3DA3C10", Slot = "94")]
	public virtual void WriteValue(short value)
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x3DA3C30", Offset = "0x3DA3C30", VA = "0x3DA3C30", Slot = "95")]
	[CLSCompliant(false)]
	public virtual void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x3DA3C50", Offset = "0x3DA3C50", VA = "0x3DA3C50", Slot = "96")]
	public virtual void WriteValue(char value)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x3DA3C70", Offset = "0x3DA3C70", VA = "0x3DA3C70", Slot = "97")]
	public virtual void WriteValue(byte value)
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x3DA3C90", Offset = "0x3DA3C90", VA = "0x3DA3C90", Slot = "98")]
	[CLSCompliant(false)]
	public virtual void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x3DA3CB0", Offset = "0x3DA3CB0", VA = "0x3DA3CB0", Slot = "99")]
	public virtual void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x3DA3CD0", Offset = "0x3DA3CD0", VA = "0x3DA3CD0", Slot = "100")]
	public virtual void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x3DA3CF0", Offset = "0x3DA3CF0", VA = "0x3DA3CF0", Slot = "101")]
	public virtual void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x3DA3D10", Offset = "0x3DA3D10", VA = "0x3DA3D10", Slot = "102")]
	public virtual void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x3DA3D30", Offset = "0x3DA3D30", VA = "0x3DA3D30", Slot = "103")]
	public virtual void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x3DA3D50", Offset = "0x3DA3D50", VA = "0x3DA3D50", Slot = "104")]
	public virtual void WriteValue(int? value)
	{
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x3DA3DD0", Offset = "0x3DA3DD0", VA = "0x3DA3DD0", Slot = "105")]
	[CLSCompliant(false)]
	public virtual void WriteValue(uint? value)
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x3DA3E50", Offset = "0x3DA3E50", VA = "0x3DA3E50", Slot = "106")]
	public virtual void WriteValue(long? value)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x3DA3EC0", Offset = "0x3DA3EC0", VA = "0x3DA3EC0", Slot = "107")]
	[CLSCompliant(false)]
	public virtual void WriteValue(ulong? value)
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x3DA3F30", Offset = "0x3DA3F30", VA = "0x3DA3F30", Slot = "108")]
	public virtual void WriteValue(float? value)
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x3DA3FB0", Offset = "0x3DA3FB0", VA = "0x3DA3FB0", Slot = "109")]
	public virtual void WriteValue(double? value)
	{
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x3DA4030", Offset = "0x3DA4030", VA = "0x3DA4030", Slot = "110")]
	public virtual void WriteValue(bool? value)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x3DA40B0", Offset = "0x3DA40B0", VA = "0x3DA40B0", Slot = "111")]
	public virtual void WriteValue(short? value)
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x3DA4120", Offset = "0x3DA4120", VA = "0x3DA4120", Slot = "112")]
	[CLSCompliant(false)]
	public virtual void WriteValue(ushort? value)
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x3DA4190", Offset = "0x3DA4190", VA = "0x3DA4190", Slot = "113")]
	public virtual void WriteValue(char? value)
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x3DA4200", Offset = "0x3DA4200", VA = "0x3DA4200", Slot = "114")]
	public virtual void WriteValue(byte? value)
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x3DA4280", Offset = "0x3DA4280", VA = "0x3DA4280", Slot = "115")]
	[CLSCompliant(false)]
	public virtual void WriteValue(sbyte? value)
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x3DA4300", Offset = "0x3DA4300", VA = "0x3DA4300", Slot = "116")]
	public virtual void WriteValue(decimal? value)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x3DA4380", Offset = "0x3DA4380", VA = "0x3DA4380", Slot = "117")]
	public virtual void WriteValue(DateTime? value)
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x3DA43F0", Offset = "0x3DA43F0", VA = "0x3DA43F0", Slot = "118")]
	public virtual void WriteValue(DateTimeOffset? value)
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x3DA4470", Offset = "0x3DA4470", VA = "0x3DA4470", Slot = "119")]
	public virtual void WriteValue(Guid? value)
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x3DA44F0", Offset = "0x3DA44F0", VA = "0x3DA44F0", Slot = "120")]
	public virtual void WriteValue(TimeSpan? value)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x3DA4560", Offset = "0x3DA4560", VA = "0x3DA4560", Slot = "121")]
	public virtual void WriteValue(byte[]? value)
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x3DA4590", Offset = "0x3DA4590", VA = "0x3DA4590", Slot = "122")]
	public virtual void WriteValue(Uri? value)
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x3DA4620", Offset = "0x3DA4620", VA = "0x3DA4620", Slot = "123")]
	public virtual void WriteValue(object? value)
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x3DA5B70", Offset = "0x3DA5B70", VA = "0x3DA5B70", Slot = "124")]
	public virtual void WriteComment(string? text)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x3DA5B90", Offset = "0x3DA5B90", VA = "0x3DA5B90", Slot = "125")]
	public virtual void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x3DA5C30", Offset = "0x3DA5C30", VA = "0x3DA5C30", Slot = "4")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x3DA5CA0", Offset = "0x3DA5CA0", VA = "0x3DA5CA0", Slot = "126")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x3DA4730", Offset = "0x3DA4730", VA = "0x3DA4730")]
	internal static void WriteValue(JsonWriter writer, PrimitiveTypeCode typeCode, object value)
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x3DA17E0", Offset = "0x3DA17E0", VA = "0x3DA17E0")]
	private static void ResolveConvertibleValue(IConvertible convertible, out PrimitiveTypeCode typeCode, out object value)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x3DA1980", Offset = "0x3DA1980", VA = "0x3DA1980")]
	private static JsonWriterException CreateUnsupportedTypeException(JsonWriter writer, object value)
	{
		return null;
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x3DA5CC0", Offset = "0x3DA5CC0", VA = "0x3DA5CC0")]
	protected void SetWriteState(JsonToken token, object value)
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x3DA2850", Offset = "0x3DA2850", VA = "0x3DA2850")]
	internal void InternalWriteEnd(JsonContainerType container)
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x3DA2900", Offset = "0x3DA2900", VA = "0x3DA2900")]
	internal void InternalWritePropertyName(string name)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x3DA3AB0", Offset = "0x3DA3AB0", VA = "0x3DA3AB0")]
	internal void InternalWriteRaw()
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x3DA2810", Offset = "0x3DA2810", VA = "0x3DA2810")]
	internal void InternalWriteStart(JsonToken token, JsonContainerType container)
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x3DA3A70", Offset = "0x3DA3A70", VA = "0x3DA3A70")]
	internal void InternalWriteValue(JsonToken token)
	{
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x3DA5BE0", Offset = "0x3DA5BE0", VA = "0x3DA5BE0")]
	internal void InternalWriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x3DA5B80", Offset = "0x3DA5B80", VA = "0x3DA5B80")]
	internal void InternalWriteComment()
	{
	}
}
