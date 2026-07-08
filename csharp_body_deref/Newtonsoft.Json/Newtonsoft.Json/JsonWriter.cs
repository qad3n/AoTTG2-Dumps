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
		[Address(RVA = "0x3AB1AD0", Offset = "0x3AB1AD0", VA = "0x3AB1AD0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004BC")]
		[Address(RVA = "0x3AB1E40", Offset = "0x3AB1E40", VA = "0x3AB1E40", Slot = "5")]
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
		[Address(RVA = "0x3AB1EA0", Offset = "0x3AB1EA0", VA = "0x3AB1EA0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x3AB2110", Offset = "0x3AB2110", VA = "0x3AB2110", Slot = "5")]
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
		[Address(RVA = "0x3AB2170", Offset = "0x3AB2170", VA = "0x3AB2170", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004C0")]
		[Address(RVA = "0x3AB2C20", Offset = "0x3AB2C20", VA = "0x3AB2C20", Slot = "5")]
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
		[Address(RVA = "0x3AB2C80", Offset = "0x3AB2C80", VA = "0x3AB2C80", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004C2")]
		[Address(RVA = "0x3AB3580", Offset = "0x3AB3580", VA = "0x3AB3580", Slot = "5")]
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
		[Address(RVA = "0x3AB35E0", Offset = "0x3AB35E0", VA = "0x3AB35E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60004C4")]
		[Address(RVA = "0x3AB3C10", Offset = "0x3AB3C10", VA = "0x3AB3C10", Slot = "5")]
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
		[Address(RVA = "0x3AAC670", Offset = "0x3AAC670", VA = "0x3AAC670")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600043C")]
		[Address(RVA = "0x3AAC680", Offset = "0x3AAC680", VA = "0x3AAC680")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	public bool AutoCompleteOnClose
	{
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x3AAC690", Offset = "0x3AAC690", VA = "0x3AAC690")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600043E")]
		[Address(RVA = "0x3AAC6A0", Offset = "0x3AAC6A0", VA = "0x3AAC6A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	protected internal int Top
	{
		[Token(Token = "0x600043F")]
		[Address(RVA = "0x3A96640", Offset = "0x3A96640", VA = "0x3A96640")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A1")]
	public WriteState WriteState
	{
		[Token(Token = "0x6000440")]
		[Address(RVA = "0x3AAC6B0", Offset = "0x3AAC6B0", VA = "0x3AAC6B0")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x170000A2")]
	internal string ContainerPath
	{
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x3AAC750", Offset = "0x3AAC750", VA = "0x3AAC750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A3")]
	public string Path
	{
		[Token(Token = "0x6000442")]
		[Address(RVA = "0x3AAC7F0", Offset = "0x3AAC7F0", VA = "0x3AAC7F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A4")]
	public Formatting Formatting
	{
		[Token(Token = "0x6000443")]
		[Address(RVA = "0x3AAC910", Offset = "0x3AAC910", VA = "0x3AAC910")]
		get
		{
			return default(Formatting);
		}
		[Token(Token = "0x6000444")]
		[Address(RVA = "0x3AAC920", Offset = "0x3AAC920", VA = "0x3AAC920")]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	public DateFormatHandling DateFormatHandling
	{
		[Token(Token = "0x6000445")]
		[Address(RVA = "0x3AAC980", Offset = "0x3AAC980", VA = "0x3AAC980")]
		get
		{
			return default(DateFormatHandling);
		}
		[Token(Token = "0x6000446")]
		[Address(RVA = "0x3AAC990", Offset = "0x3AAC990", VA = "0x3AAC990")]
		set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	public DateTimeZoneHandling DateTimeZoneHandling
	{
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x3AAC9F0", Offset = "0x3AAC9F0", VA = "0x3AAC9F0")]
		get
		{
			return default(DateTimeZoneHandling);
		}
		[Token(Token = "0x6000448")]
		[Address(RVA = "0x3AACA00", Offset = "0x3AACA00", VA = "0x3AACA00")]
		set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	public StringEscapeHandling StringEscapeHandling
	{
		[Token(Token = "0x6000449")]
		[Address(RVA = "0x3AACA60", Offset = "0x3AACA60", VA = "0x3AACA60")]
		get
		{
			return default(StringEscapeHandling);
		}
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x3AACA70", Offset = "0x3AACA70", VA = "0x3AACA70")]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public FloatFormatHandling FloatFormatHandling
	{
		[Token(Token = "0x600044C")]
		[Address(RVA = "0x3AACAF0", Offset = "0x3AACAF0", VA = "0x3AACAF0")]
		get
		{
			return default(FloatFormatHandling);
		}
		[Token(Token = "0x600044D")]
		[Address(RVA = "0x3AACB00", Offset = "0x3AACB00", VA = "0x3AACB00")]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	public string? DateFormatString
	{
		[Token(Token = "0x600044E")]
		[Address(RVA = "0x3AACB60", Offset = "0x3AACB60", VA = "0x3AACB60")]
		get
		{
			return null;
		}
		[Token(Token = "0x600044F")]
		[Address(RVA = "0x3AACB70", Offset = "0x3AACB70", VA = "0x3AACB70")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public CultureInfo Culture
	{
		[Token(Token = "0x6000450")]
		[Address(RVA = "0x3A99EF0", Offset = "0x3A99EF0", VA = "0x3A99EF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000451")]
		[Address(RVA = "0x3AACB80", Offset = "0x3AACB80", VA = "0x3AACB80")]
		set
		{
		}
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x3AA5C00", Offset = "0x3AA5C00", VA = "0x3AA5C00")]
	internal Task AutoCompleteAsync(JsonToken tokenBeingWritten, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x3AA5E70", Offset = "0x3AA5E70", VA = "0x3AA5E70")]
	[AsyncStateMachine(typeof(_003CAutoCompleteAsync_003Ed__1))]
	private Task AutoCompleteAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x3AA5F70", Offset = "0x3AA5F70", VA = "0x3AA5F70", Slot = "5")]
	public virtual Task CloseAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x3AA6040", Offset = "0x3AA6040", VA = "0x3AA6040", Slot = "6")]
	public virtual Task FlushAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x3AA6110", Offset = "0x3AA6110", VA = "0x3AA6110", Slot = "7")]
	protected virtual Task WriteEndAsync(JsonToken token, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x3AA61E0", Offset = "0x3AA61E0", VA = "0x3AA61E0", Slot = "8")]
	protected virtual Task WriteIndentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x3AA62B0", Offset = "0x3AA62B0", VA = "0x3AA62B0", Slot = "9")]
	protected virtual Task WriteValueDelimiterAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x3AA6380", Offset = "0x3AA6380", VA = "0x3AA6380", Slot = "10")]
	protected virtual Task WriteIndentSpaceAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x3AA6450", Offset = "0x3AA6450", VA = "0x3AA6450", Slot = "11")]
	public virtual Task WriteRawAsync(string? json, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x3AA6520", Offset = "0x3AA6520", VA = "0x3AA6520", Slot = "12")]
	public virtual Task WriteEndAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x3AA65F0", Offset = "0x3AA65F0", VA = "0x3AA65F0")]
	internal Task WriteEndInternalAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x3AA6760", Offset = "0x3AA6760", VA = "0x3AA6760")]
	internal Task InternalWriteEndAsync(JsonContainerType type, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x3AA7050", Offset = "0x3AA7050", VA = "0x3AA7050", Slot = "13")]
	public virtual Task WriteEndArrayAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x3AA7120", Offset = "0x3AA7120", VA = "0x3AA7120", Slot = "14")]
	public virtual Task WriteEndConstructorAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x3AA71F0", Offset = "0x3AA71F0", VA = "0x3AA71F0", Slot = "15")]
	public virtual Task WriteEndObjectAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x3AA72C0", Offset = "0x3AA72C0", VA = "0x3AA72C0", Slot = "16")]
	public virtual Task WriteNullAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x3AA7390", Offset = "0x3AA7390", VA = "0x3AA7390", Slot = "17")]
	public virtual Task WritePropertyNameAsync(string name, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x3AA7460", Offset = "0x3AA7460", VA = "0x3AA7460", Slot = "18")]
	public virtual Task WritePropertyNameAsync(string name, bool escape, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x3A97C50", Offset = "0x3A97C50", VA = "0x3A97C50")]
	internal Task InternalWritePropertyNameAsync(string name, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x3AA7540", Offset = "0x3AA7540", VA = "0x3AA7540", Slot = "19")]
	public virtual Task WriteStartArrayAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x3A98B90", Offset = "0x3A98B90", VA = "0x3A98B90")]
	[AsyncStateMachine(typeof(_003CInternalWriteStartAsync_003Ed__20))]
	internal Task InternalWriteStartAsync(JsonToken token, JsonContainerType container, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x3AA7610", Offset = "0x3AA7610", VA = "0x3AA7610", Slot = "20")]
	public virtual Task WriteCommentAsync(string? text, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x3A96DB0", Offset = "0x3A96DB0", VA = "0x3A96DB0")]
	internal Task InternalWriteCommentAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x3AA76E0", Offset = "0x3AA76E0", VA = "0x3AA76E0", Slot = "21")]
	public virtual Task WriteRawValueAsync(string? json, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x3AA77B0", Offset = "0x3AA77B0", VA = "0x3AA77B0", Slot = "22")]
	public virtual Task WriteStartConstructorAsync(string name, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x3AA7880", Offset = "0x3AA7880", VA = "0x3AA7880", Slot = "23")]
	public virtual Task WriteStartObjectAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x3AA7950", Offset = "0x3AA7950", VA = "0x3AA7950")]
	public Task WriteTokenAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x3AA79D0", Offset = "0x3AA79D0", VA = "0x3AA79D0")]
	public Task WriteTokenAsync(JsonReader reader, bool writeChildren, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x3AA7A50", Offset = "0x3AA7A50", VA = "0x3AA7A50")]
	public Task WriteTokenAsync(JsonToken token, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x3AA7A60", Offset = "0x3AA7A60", VA = "0x3AA7A60")]
	public Task WriteTokenAsync(JsonToken token, object? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x3AA8240", Offset = "0x3AA8240", VA = "0x3AA8240", Slot = "24")]
	[AsyncStateMachine(typeof(_003CWriteTokenAsync_003Ed__30))]
	internal virtual Task WriteTokenAsync(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x3AA83A0", Offset = "0x3AA83A0", VA = "0x3AA83A0")]
	[AsyncStateMachine(typeof(_003CWriteTokenSyncReadingAsync_003Ed__31))]
	internal Task WriteTokenSyncReadingAsync(JsonReader reader, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x3AA84C0", Offset = "0x3AA84C0", VA = "0x3AA84C0")]
	[AsyncStateMachine(typeof(_003CWriteConstructorDateAsync_003Ed__32))]
	private Task WriteConstructorDateAsync(JsonReader reader, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x3AA85E0", Offset = "0x3AA85E0", VA = "0x3AA85E0", Slot = "25")]
	public virtual Task WriteValueAsync(bool value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x3AA86B0", Offset = "0x3AA86B0", VA = "0x3AA86B0", Slot = "26")]
	public virtual Task WriteValueAsync(bool? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x3AA8780", Offset = "0x3AA8780", VA = "0x3AA8780", Slot = "27")]
	public virtual Task WriteValueAsync(byte value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x3AA8850", Offset = "0x3AA8850", VA = "0x3AA8850", Slot = "28")]
	public virtual Task WriteValueAsync(byte? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x3AA8920", Offset = "0x3AA8920", VA = "0x3AA8920", Slot = "29")]
	public virtual Task WriteValueAsync(byte[]? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x3AA89F0", Offset = "0x3AA89F0", VA = "0x3AA89F0", Slot = "30")]
	public virtual Task WriteValueAsync(char value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x3AA8AC0", Offset = "0x3AA8AC0", VA = "0x3AA8AC0", Slot = "31")]
	public virtual Task WriteValueAsync(char? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x3AA8B90", Offset = "0x3AA8B90", VA = "0x3AA8B90", Slot = "32")]
	public virtual Task WriteValueAsync(DateTime value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x3AA8C60", Offset = "0x3AA8C60", VA = "0x3AA8C60", Slot = "33")]
	public virtual Task WriteValueAsync(DateTime? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x3AA8D40", Offset = "0x3AA8D40", VA = "0x3AA8D40", Slot = "34")]
	public virtual Task WriteValueAsync(DateTimeOffset value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x3AA8E20", Offset = "0x3AA8E20", VA = "0x3AA8E20", Slot = "35")]
	public virtual Task WriteValueAsync(DateTimeOffset? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x3AA8F00", Offset = "0x3AA8F00", VA = "0x3AA8F00", Slot = "36")]
	public virtual Task WriteValueAsync(decimal value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x3AA8FE0", Offset = "0x3AA8FE0", VA = "0x3AA8FE0", Slot = "37")]
	public virtual Task WriteValueAsync(decimal? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x3AA90C0", Offset = "0x3AA90C0", VA = "0x3AA90C0", Slot = "38")]
	public virtual Task WriteValueAsync(double value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x3AA91A0", Offset = "0x3AA91A0", VA = "0x3AA91A0", Slot = "39")]
	public virtual Task WriteValueAsync(double? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x3AA9280", Offset = "0x3AA9280", VA = "0x3AA9280", Slot = "40")]
	public virtual Task WriteValueAsync(float value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x3AA9360", Offset = "0x3AA9360", VA = "0x3AA9360", Slot = "41")]
	public virtual Task WriteValueAsync(float? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x3AA9430", Offset = "0x3AA9430", VA = "0x3AA9430", Slot = "42")]
	public virtual Task WriteValueAsync(Guid value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x3AA9510", Offset = "0x3AA9510", VA = "0x3AA9510", Slot = "43")]
	public virtual Task WriteValueAsync(Guid? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x3AA95F0", Offset = "0x3AA95F0", VA = "0x3AA95F0", Slot = "44")]
	public virtual Task WriteValueAsync(int value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x3AA96C0", Offset = "0x3AA96C0", VA = "0x3AA96C0", Slot = "45")]
	public virtual Task WriteValueAsync(int? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x3AA9790", Offset = "0x3AA9790", VA = "0x3AA9790", Slot = "46")]
	public virtual Task WriteValueAsync(long value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x3AA9860", Offset = "0x3AA9860", VA = "0x3AA9860", Slot = "47")]
	public virtual Task WriteValueAsync(long? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x3AA9940", Offset = "0x3AA9940", VA = "0x3AA9940", Slot = "48")]
	public virtual Task WriteValueAsync(object? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x3AA9A10", Offset = "0x3AA9A10", VA = "0x3AA9A10", Slot = "49")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(sbyte value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x3AA9AE0", Offset = "0x3AA9AE0", VA = "0x3AA9AE0", Slot = "50")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(sbyte? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x3AA9BB0", Offset = "0x3AA9BB0", VA = "0x3AA9BB0", Slot = "51")]
	public virtual Task WriteValueAsync(short value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x3AA9C80", Offset = "0x3AA9C80", VA = "0x3AA9C80", Slot = "52")]
	public virtual Task WriteValueAsync(short? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x3AA9D50", Offset = "0x3AA9D50", VA = "0x3AA9D50", Slot = "53")]
	public virtual Task WriteValueAsync(string? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x3AA9E20", Offset = "0x3AA9E20", VA = "0x3AA9E20", Slot = "54")]
	public virtual Task WriteValueAsync(TimeSpan value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x3AA9EF0", Offset = "0x3AA9EF0", VA = "0x3AA9EF0", Slot = "55")]
	public virtual Task WriteValueAsync(TimeSpan? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x3AA9FD0", Offset = "0x3AA9FD0", VA = "0x3AA9FD0", Slot = "56")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(uint value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x3AAA0A0", Offset = "0x3AAA0A0", VA = "0x3AAA0A0", Slot = "57")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(uint? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x3AAA170", Offset = "0x3AAA170", VA = "0x3AAA170", Slot = "58")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(ulong value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x3AAA240", Offset = "0x3AAA240", VA = "0x3AAA240", Slot = "59")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(ulong? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x3AAA320", Offset = "0x3AAA320", VA = "0x3AAA320", Slot = "60")]
	public virtual Task WriteValueAsync(Uri? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x3AAA3F0", Offset = "0x3AAA3F0", VA = "0x3AAA3F0", Slot = "61")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(ushort value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x3AAA4C0", Offset = "0x3AAA4C0", VA = "0x3AAA4C0", Slot = "62")]
	[CLSCompliant(false)]
	public virtual Task WriteValueAsync(ushort? value, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x3AAA590", Offset = "0x3AAA590", VA = "0x3AAA590", Slot = "63")]
	public virtual Task WriteUndefinedAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x3AAA660", Offset = "0x3AAA660", VA = "0x3AAA660", Slot = "64")]
	public virtual Task WriteWhitespaceAsync(string ws, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x3A99E40", Offset = "0x3A99E40", VA = "0x3A99E40")]
	internal Task InternalWriteValueAsync(JsonToken token, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x3AAA740", Offset = "0x3AAA740", VA = "0x3AAA740")]
	protected Task SetWriteStateAsync(JsonToken token, object value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x3AAA980", Offset = "0x3AAA980", VA = "0x3AAA980")]
	internal static Task WriteValueAsync(JsonWriter writer, PrimitiveTypeCode typeCode, object value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x3AAC0F0", Offset = "0x3AAC0F0", VA = "0x3AAC0F0")]
	internal static State[][] BuildStateArray()
	{
		return null;
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x3AAC370", Offset = "0x3AAC370", VA = "0x3AAC370")]
	static JsonWriter()
	{
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x3AACAE0", Offset = "0x3AACAE0", VA = "0x3AACAE0", Slot = "65")]
	internal virtual void OnStringEscapeHandlingChanged()
	{
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x3AACB90", Offset = "0x3AACB90", VA = "0x3AACB90")]
	protected JsonWriter()
	{
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x3AAA730", Offset = "0x3AAA730", VA = "0x3AAA730")]
	internal void UpdateScopeWithFinishedValue()
	{
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x3AACBC0", Offset = "0x3AACBC0", VA = "0x3AACBC0")]
	private void Push(JsonContainerType value)
	{
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x3AA6AB0", Offset = "0x3AA6AB0", VA = "0x3AA6AB0")]
	private JsonContainerType Pop()
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x3AA6750", Offset = "0x3AA6750", VA = "0x3AA6750")]
	private JsonContainerType Peek()
	{
		return default(JsonContainerType);
	}

	[Token(Token = "0x6000457")]
	public abstract void Flush();

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x3AACD70", Offset = "0x3AACD70", VA = "0x3AACD70", Slot = "67")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x3AACE90", Offset = "0x3AACE90", VA = "0x3AACE90", Slot = "68")]
	public virtual void WriteStartObject()
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x3AACEF0", Offset = "0x3AACEF0", VA = "0x3AACEF0", Slot = "69")]
	public virtual void WriteEndObject()
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x3AACF10", Offset = "0x3AACF10", VA = "0x3AACF10", Slot = "70")]
	public virtual void WriteStartArray()
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x3AACF40", Offset = "0x3AACF40", VA = "0x3AACF40", Slot = "71")]
	public virtual void WriteEndArray()
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x3AACF50", Offset = "0x3AACF50", VA = "0x3AACF50", Slot = "72")]
	public virtual void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x3AACF80", Offset = "0x3AACF80", VA = "0x3AACF80", Slot = "73")]
	public virtual void WriteEndConstructor()
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x3AACF90", Offset = "0x3AACF90", VA = "0x3AACF90", Slot = "74")]
	public virtual void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x3AACFD0", Offset = "0x3AACFD0", VA = "0x3AACFD0", Slot = "75")]
	public virtual void WritePropertyName(string name, bool escape)
	{
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x3AACFF0", Offset = "0x3AACFF0", VA = "0x3AACFF0", Slot = "76")]
	public virtual void WriteEnd()
	{
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x3AAD0D0", Offset = "0x3AAD0D0", VA = "0x3AAD0D0")]
	public void WriteToken(JsonReader reader)
	{
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x3AA4BF0", Offset = "0x3AA4BF0", VA = "0x3AA4BF0")]
	public void WriteToken(JsonReader reader, bool writeChildren)
	{
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x3AAD140", Offset = "0x3AAD140", VA = "0x3AAD140")]
	public void WriteToken(JsonToken token, object? value)
	{
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x3AAD820", Offset = "0x3AAD820", VA = "0x3AAD820")]
	public void WriteToken(JsonToken token)
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x3AAD830", Offset = "0x3AAD830", VA = "0x3AAD830", Slot = "77")]
	internal virtual void WriteToken(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments)
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x3AADCF0", Offset = "0x3AADCF0", VA = "0x3AADCF0")]
	private bool IsWriteTokenIncomplete(JsonReader reader, bool writeChildren, int initialDepth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x3AADBC0", Offset = "0x3AADBC0", VA = "0x3AADBC0")]
	private int CalculateWriteTokenInitialDepth(JsonReader reader)
	{
		return default(int);
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x3AADDA0", Offset = "0x3AADDA0", VA = "0x3AADDA0")]
	private int CalculateWriteTokenFinalDepth(JsonReader reader)
	{
		return default(int);
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x3AADC30", Offset = "0x3AADC30", VA = "0x3AADC30")]
	private void WriteConstructorDate(JsonReader reader)
	{
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x3AAD000", Offset = "0x3AAD000", VA = "0x3AAD000")]
	private void WriteEnd(JsonContainerType type)
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x3AACE00", Offset = "0x3AACE00", VA = "0x3AACE00")]
	private void AutoCompleteAll()
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x3AA6B80", Offset = "0x3AA6B80", VA = "0x3AA6B80")]
	private JsonToken GetCloseTokenForType(JsonContainerType type)
	{
		return default(JsonToken);
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x3AADE00", Offset = "0x3AADE00", VA = "0x3AADE00")]
	private void AutoCompleteClose(JsonContainerType type)
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x3AA69A0", Offset = "0x3AA69A0", VA = "0x3AA69A0")]
	private int CalculateLevelsToComplete(JsonContainerType type)
	{
		return default(int);
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x3AA6FB0", Offset = "0x3AA6FB0", VA = "0x3AA6FB0")]
	private void UpdateCurrentState()
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x3AADEA0", Offset = "0x3AADEA0", VA = "0x3AADEA0", Slot = "78")]
	protected virtual void WriteEnd(JsonToken token)
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x3AADEB0", Offset = "0x3AADEB0", VA = "0x3AADEB0", Slot = "79")]
	protected virtual void WriteIndent()
	{
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x3AADEC0", Offset = "0x3AADEC0", VA = "0x3AADEC0", Slot = "80")]
	protected virtual void WriteValueDelimiter()
	{
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x3AADED0", Offset = "0x3AADED0", VA = "0x3AADED0", Slot = "81")]
	protected virtual void WriteIndentSpace()
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x3AADEE0", Offset = "0x3AADEE0", VA = "0x3AADEE0")]
	internal void AutoComplete(JsonToken tokenBeingWritten)
	{
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x3AAE100", Offset = "0x3AAE100", VA = "0x3AAE100", Slot = "82")]
	public virtual void WriteNull()
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x3AAE130", Offset = "0x3AAE130", VA = "0x3AAE130", Slot = "83")]
	public virtual void WriteUndefined()
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x3AAE150", Offset = "0x3AAE150", VA = "0x3AAE150", Slot = "84")]
	public virtual void WriteRaw(string? json)
	{
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x3AAE170", Offset = "0x3AAE170", VA = "0x3AAE170", Slot = "85")]
	public virtual void WriteRawValue(string? json)
	{
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x3AAE1C0", Offset = "0x3AAE1C0", VA = "0x3AAE1C0", Slot = "86")]
	public virtual void WriteValue(string? value)
	{
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x3AAE1E0", Offset = "0x3AAE1E0", VA = "0x3AAE1E0", Slot = "87")]
	public virtual void WriteValue(int value)
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x3AAE200", Offset = "0x3AAE200", VA = "0x3AAE200", Slot = "88")]
	[CLSCompliant(false)]
	public virtual void WriteValue(uint value)
	{
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x3AAE220", Offset = "0x3AAE220", VA = "0x3AAE220", Slot = "89")]
	public virtual void WriteValue(long value)
	{
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x3AAE240", Offset = "0x3AAE240", VA = "0x3AAE240", Slot = "90")]
	[CLSCompliant(false)]
	public virtual void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x3AAE260", Offset = "0x3AAE260", VA = "0x3AAE260", Slot = "91")]
	public virtual void WriteValue(float value)
	{
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x3AAE280", Offset = "0x3AAE280", VA = "0x3AAE280", Slot = "92")]
	public virtual void WriteValue(double value)
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x3AAE2A0", Offset = "0x3AAE2A0", VA = "0x3AAE2A0", Slot = "93")]
	public virtual void WriteValue(bool value)
	{
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x3AAE2C0", Offset = "0x3AAE2C0", VA = "0x3AAE2C0", Slot = "94")]
	public virtual void WriteValue(short value)
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x3AAE2E0", Offset = "0x3AAE2E0", VA = "0x3AAE2E0", Slot = "95")]
	[CLSCompliant(false)]
	public virtual void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x3AAE300", Offset = "0x3AAE300", VA = "0x3AAE300", Slot = "96")]
	public virtual void WriteValue(char value)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x3AAE320", Offset = "0x3AAE320", VA = "0x3AAE320", Slot = "97")]
	public virtual void WriteValue(byte value)
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x3AAE340", Offset = "0x3AAE340", VA = "0x3AAE340", Slot = "98")]
	[CLSCompliant(false)]
	public virtual void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x3AAE360", Offset = "0x3AAE360", VA = "0x3AAE360", Slot = "99")]
	public virtual void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x3AAE380", Offset = "0x3AAE380", VA = "0x3AAE380", Slot = "100")]
	public virtual void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x3AAE3A0", Offset = "0x3AAE3A0", VA = "0x3AAE3A0", Slot = "101")]
	public virtual void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x3AAE3C0", Offset = "0x3AAE3C0", VA = "0x3AAE3C0", Slot = "102")]
	public virtual void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x3AAE3E0", Offset = "0x3AAE3E0", VA = "0x3AAE3E0", Slot = "103")]
	public virtual void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x3AAE400", Offset = "0x3AAE400", VA = "0x3AAE400", Slot = "104")]
	public virtual void WriteValue(int? value)
	{
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x3AAE480", Offset = "0x3AAE480", VA = "0x3AAE480", Slot = "105")]
	[CLSCompliant(false)]
	public virtual void WriteValue(uint? value)
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x3AAE500", Offset = "0x3AAE500", VA = "0x3AAE500", Slot = "106")]
	public virtual void WriteValue(long? value)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x3AAE570", Offset = "0x3AAE570", VA = "0x3AAE570", Slot = "107")]
	[CLSCompliant(false)]
	public virtual void WriteValue(ulong? value)
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x3AAE5E0", Offset = "0x3AAE5E0", VA = "0x3AAE5E0", Slot = "108")]
	public virtual void WriteValue(float? value)
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x3AAE660", Offset = "0x3AAE660", VA = "0x3AAE660", Slot = "109")]
	public virtual void WriteValue(double? value)
	{
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x3AAE6E0", Offset = "0x3AAE6E0", VA = "0x3AAE6E0", Slot = "110")]
	public virtual void WriteValue(bool? value)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x3AAE760", Offset = "0x3AAE760", VA = "0x3AAE760", Slot = "111")]
	public virtual void WriteValue(short? value)
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x3AAE7D0", Offset = "0x3AAE7D0", VA = "0x3AAE7D0", Slot = "112")]
	[CLSCompliant(false)]
	public virtual void WriteValue(ushort? value)
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x3AAE840", Offset = "0x3AAE840", VA = "0x3AAE840", Slot = "113")]
	public virtual void WriteValue(char? value)
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x3AAE8B0", Offset = "0x3AAE8B0", VA = "0x3AAE8B0", Slot = "114")]
	public virtual void WriteValue(byte? value)
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x3AAE930", Offset = "0x3AAE930", VA = "0x3AAE930", Slot = "115")]
	[CLSCompliant(false)]
	public virtual void WriteValue(sbyte? value)
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x3AAE9B0", Offset = "0x3AAE9B0", VA = "0x3AAE9B0", Slot = "116")]
	public virtual void WriteValue(decimal? value)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x3AAEA30", Offset = "0x3AAEA30", VA = "0x3AAEA30", Slot = "117")]
	public virtual void WriteValue(DateTime? value)
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x3AAEAA0", Offset = "0x3AAEAA0", VA = "0x3AAEAA0", Slot = "118")]
	public virtual void WriteValue(DateTimeOffset? value)
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x3AAEB20", Offset = "0x3AAEB20", VA = "0x3AAEB20", Slot = "119")]
	public virtual void WriteValue(Guid? value)
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x3AAEBA0", Offset = "0x3AAEBA0", VA = "0x3AAEBA0", Slot = "120")]
	public virtual void WriteValue(TimeSpan? value)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x3AAEC10", Offset = "0x3AAEC10", VA = "0x3AAEC10", Slot = "121")]
	public virtual void WriteValue(byte[]? value)
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x3AAEC40", Offset = "0x3AAEC40", VA = "0x3AAEC40", Slot = "122")]
	public virtual void WriteValue(Uri? value)
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x3AAECD0", Offset = "0x3AAECD0", VA = "0x3AAECD0", Slot = "123")]
	public virtual void WriteValue(object? value)
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x3AB0220", Offset = "0x3AB0220", VA = "0x3AB0220", Slot = "124")]
	public virtual void WriteComment(string? text)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x3AB0240", Offset = "0x3AB0240", VA = "0x3AB0240", Slot = "125")]
	public virtual void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x3AB02E0", Offset = "0x3AB02E0", VA = "0x3AB02E0", Slot = "4")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x3AB0350", Offset = "0x3AB0350", VA = "0x3AB0350", Slot = "126")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x3AAEDE0", Offset = "0x3AAEDE0", VA = "0x3AAEDE0")]
	internal static void WriteValue(JsonWriter writer, PrimitiveTypeCode typeCode, object value)
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x3AABE90", Offset = "0x3AABE90", VA = "0x3AABE90")]
	private static void ResolveConvertibleValue(IConvertible convertible, out PrimitiveTypeCode typeCode, out object value)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x3AAC030", Offset = "0x3AAC030", VA = "0x3AAC030")]
	private static JsonWriterException CreateUnsupportedTypeException(JsonWriter writer, object value)
	{
		return null;
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x3AB0370", Offset = "0x3AB0370", VA = "0x3AB0370")]
	protected void SetWriteState(JsonToken token, object value)
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x3AACF00", Offset = "0x3AACF00", VA = "0x3AACF00")]
	internal void InternalWriteEnd(JsonContainerType container)
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x3AACFB0", Offset = "0x3AACFB0", VA = "0x3AACFB0")]
	internal void InternalWritePropertyName(string name)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x3AAE160", Offset = "0x3AAE160", VA = "0x3AAE160")]
	internal void InternalWriteRaw()
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x3AACEC0", Offset = "0x3AACEC0", VA = "0x3AACEC0")]
	internal void InternalWriteStart(JsonToken token, JsonContainerType container)
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x3AAE120", Offset = "0x3AAE120", VA = "0x3AAE120")]
	internal void InternalWriteValue(JsonToken token)
	{
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x3AB0290", Offset = "0x3AB0290", VA = "0x3AB0290")]
	internal void InternalWriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x3AB0230", Offset = "0x3AB0230", VA = "0x3AB0230")]
	internal void InternalWriteComment()
	{
	}
}
