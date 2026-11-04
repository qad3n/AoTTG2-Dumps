// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonTextReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Numerics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json;

[Token(Token = "0x2000035")]
public class JsonTextReader : JsonReader, IJsonLineInfo
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000036")]
	[CompilerGenerated]
	private struct _003CDoReadAsBooleanAsync_003Ed__40 : IAsyncStateMachine
	{
		[Token(Token = "0x4000103")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000104")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool?> _003C_003Et__builder;

		[Token(Token = "0x4000105")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x4000106")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000107")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000108")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private BigInteger _003Ci_003E5__2;

		[Token(Token = "0x4000109")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private bool _003CisTrue_003E5__3;

		[Token(Token = "0x400010A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600026D")]
		[Address(RVA = "0x1BF1D50", Offset = "0x1BF0350", VA = "0x181BF1D50", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600026E")]
		[Address(RVA = "0x1BF2C30", Offset = "0x1BF1230", VA = "0x181BF2C30", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000037")]
	[CompilerGenerated]
	private struct _003CDoReadAsBytesAsync_003Ed__42 : IAsyncStateMachine
	{
		[Token(Token = "0x400010B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400010C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<byte[]> _003C_003Et__builder;

		[Token(Token = "0x400010D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x400010E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400010F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private bool _003CisWrapped_003E5__2;

		[Token(Token = "0x4000110")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000111")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private byte[] _003Cdata_003E5__3;

		[Token(Token = "0x4000112")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x4000113")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private ConfiguredTaskAwaitable<byte[]?>.ConfiguredTaskAwaiter _003C_003Eu__3;

		[Token(Token = "0x600026F")]
		[Address(RVA = "0x1BF2CA0", Offset = "0x1BF12A0", VA = "0x181BF2CA0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000270")]
		[Address(RVA = "0x1BF3B00", Offset = "0x1BF2100", VA = "0x181BF3B00", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000038")]
	[CompilerGenerated]
	private struct _003CDoReadAsDateTimeAsync_003Ed__45 : IAsyncStateMachine
	{
		[Token(Token = "0x4000114")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000115")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<DateTime?> _003C_003Et__builder;

		[Token(Token = "0x4000116")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x4000117")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000118")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<object?>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000271")]
		[Address(RVA = "0x1BF3B70", Offset = "0x1BF2170", VA = "0x181BF3B70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000272")]
		[Address(RVA = "0x1BF3DC0", Offset = "0x1BF23C0", VA = "0x181BF3DC0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000039")]
	[CompilerGenerated]
	private struct _003CDoReadAsDateTimeOffsetAsync_003Ed__47 : IAsyncStateMachine
	{
		[Token(Token = "0x4000119")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400011A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<DateTimeOffset?> _003C_003Et__builder;

		[Token(Token = "0x400011B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x400011C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400011D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<object?>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000273")]
		[Address(RVA = "0x1BF3E30", Offset = "0x1BF2430", VA = "0x181BF3E30", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000274")]
		[Address(RVA = "0x1BF4090", Offset = "0x1BF2690", VA = "0x181BF4090", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200003A")]
	[CompilerGenerated]
	private struct _003CDoReadAsDecimalAsync_003Ed__49 : IAsyncStateMachine
	{
		[Token(Token = "0x400011E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400011F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<decimal?> _003C_003Et__builder;

		[Token(Token = "0x4000120")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x4000121")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000122")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<object?>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000275")]
		[Address(RVA = "0x1BF4100", Offset = "0x1BF2700", VA = "0x181BF4100", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000276")]
		[Address(RVA = "0x1BF4360", Offset = "0x1BF2960", VA = "0x181BF4360", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200003B")]
	[CompilerGenerated]
	private struct _003CDoReadAsDoubleAsync_003Ed__51 : IAsyncStateMachine
	{
		[Token(Token = "0x4000123")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000124")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<double?> _003C_003Et__builder;

		[Token(Token = "0x4000125")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x4000126")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000127")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<object?>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000277")]
		[Address(RVA = "0x1BF43D0", Offset = "0x1BF29D0", VA = "0x181BF43D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000278")]
		[Address(RVA = "0x1BF4620", Offset = "0x1BF2C20", VA = "0x181BF4620", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200003C")]
	[CompilerGenerated]
	private struct _003CDoReadAsInt32Async_003Ed__53 : IAsyncStateMachine
	{
		[Token(Token = "0x4000128")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000129")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int?> _003C_003Et__builder;

		[Token(Token = "0x400012A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x400012B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400012C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<object?>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000279")]
		[Address(RVA = "0x1BF4690", Offset = "0x1BF2C90", VA = "0x181BF4690", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600027A")]
		[Address(RVA = "0x1BF48D0", Offset = "0x1BF2ED0", VA = "0x181BF48D0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200003D")]
	[CompilerGenerated]
	private struct _003CDoReadAsStringAsync_003Ed__55 : IAsyncStateMachine
	{
		[Token(Token = "0x400012D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400012E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<string> _003C_003Et__builder;

		[Token(Token = "0x400012F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x4000130")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000131")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<object?>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600027B")]
		[Address(RVA = "0x1BF4940", Offset = "0x1BF2F40", VA = "0x181BF4940", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600027C")]
		[Address(RVA = "0x1BF4B50", Offset = "0x1BF3150", VA = "0x181BF4B50", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200003E")]
	[CompilerGenerated]
	private struct _003CDoReadAsync_003Ed__3 : IAsyncStateMachine
	{
		[Token(Token = "0x4000132")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000133")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x4000134")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Task<bool> task;

		[Token(Token = "0x4000135")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x4000136")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000137")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600027D")]
		[Address(RVA = "0x1BF4BC0", Offset = "0x1BF31C0", VA = "0x181BF4BC0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600027E")]
		[Address(RVA = "0x1BF4E80", Offset = "0x1BF3480", VA = "0x181BF4E80", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200003F")]
	[CompilerGenerated]
	private struct _003CEatWhitespaceAsync_003Ed__17 : IAsyncStateMachine
	{
		[Token(Token = "0x4000138")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000139")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400013A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x400013B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400013C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x400013D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600027F")]
		[Address(RVA = "0x1BF4EF0", Offset = "0x1BF34F0", VA = "0x181BF4EF0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000280")]
		[Address(RVA = "0x1BF5270", Offset = "0x1BF3870", VA = "0x181BF5270", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000040")]
	[CompilerGenerated]
	private struct _003CHandleNullAsync_003Ed__35 : IAsyncStateMachine
	{
		[Token(Token = "0x400013E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400013F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000140")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x4000141")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000142")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000143")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000281")]
		[Address(RVA = "0x1BF52D0", Offset = "0x1BF38D0", VA = "0x181BF52D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000282")]
		[Address(RVA = "0x1BF56C0", Offset = "0x1BF3CC0", VA = "0x181BF56C0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000041")]
	[CompilerGenerated]
	private struct _003CMatchAndSetAsync_003Ed__21 : IAsyncStateMachine
	{
		[Token(Token = "0x4000144")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000145")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000146")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x4000147")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string value;

		[Token(Token = "0x4000148")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000149")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public JsonToken newToken;

		[Token(Token = "0x400014A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public object tokenValue;

		[Token(Token = "0x400014B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000283")]
		[Address(RVA = "0x1BF5720", Offset = "0x1BF3D20", VA = "0x181BF5720", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000284")]
		[Address(RVA = "0x1BF59C0", Offset = "0x1BF3FC0", VA = "0x181BF59C0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000042")]
	[CompilerGenerated]
	private struct _003CMatchValueAsync_003Ed__19 : IAsyncStateMachine
	{
		[Token(Token = "0x400014C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400014D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x400014E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x400014F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string value;

		[Token(Token = "0x4000150")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000151")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000285")]
		[Address(RVA = "0x1BF5A20", Offset = "0x1BF4020", VA = "0x181BF5A20", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000286")]
		[Address(RVA = "0x1BF5C50", Offset = "0x1BF4250", VA = "0x181BF5C50", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000043")]
	[CompilerGenerated]
	private struct _003CMatchValueWithTrailingSeparatorAsync_003Ed__20 : IAsyncStateMachine
	{
		[Token(Token = "0x4000152")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000153")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x4000154")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x4000155")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string value;

		[Token(Token = "0x4000156")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000157")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000287")]
		[Address(RVA = "0x1BF5CC0", Offset = "0x1BF42C0", VA = "0x181BF5CC0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000288")]
		[Address(RVA = "0x1BF6050", Offset = "0x1BF4650", VA = "0x181BF6050", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000044")]
	[CompilerGenerated]
	private struct _003CParseCommentAsync_003Ed__16 : IAsyncStateMachine
	{
		[Token(Token = "0x4000158")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000159")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400015A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x400015B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400015C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool setToken;

		[Token(Token = "0x400015D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
		private bool _003CsinglelineComment_003E5__2;

		[Token(Token = "0x400015E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		private int _003CinitialPosition_003E5__3;

		[Token(Token = "0x400015F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000160")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x4000161")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__3;

		[Token(Token = "0x6000289")]
		[Address(RVA = "0x1BF60C0", Offset = "0x1BF46C0", VA = "0x181BF60C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600028A")]
		[Address(RVA = "0x1BF6900", Offset = "0x1BF4F00", VA = "0x181BF6900", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000045")]
	[CompilerGenerated]
	private struct _003CParseConstructorAsync_003Ed__25 : IAsyncStateMachine
	{
		[Token(Token = "0x4000162")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000163")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000164")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x4000165")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000166")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000167")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int _003CinitialPosition_003E5__2;

		[Token(Token = "0x4000168")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		private int _003CendPosition_003E5__3;

		[Token(Token = "0x4000169")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private string _003CconstructorName_003E5__4;

		[Token(Token = "0x400016A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x400016B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__3;

		[Token(Token = "0x600028B")]
		[Address(RVA = "0x1BF6960", Offset = "0x1BF4F60", VA = "0x181BF6960", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600028C")]
		[Address(RVA = "0x1BF72D0", Offset = "0x1BF58D0", VA = "0x181BF72D0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000046")]
	[CompilerGenerated]
	private struct _003CParseNumberAsync_003Ed__29 : IAsyncStateMachine
	{
		[Token(Token = "0x400016C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400016D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400016E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x400016F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000170")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public ReadType readType;

		[Token(Token = "0x4000171")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		private char _003CfirstChar_003E5__2;

		[Token(Token = "0x4000172")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private int _003CinitialPosition_003E5__3;

		[Token(Token = "0x4000173")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600028D")]
		[Address(RVA = "0x1BF7330", Offset = "0x1BF5930", VA = "0x181BF7330", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600028E")]
		[Address(RVA = "0x1BF7530", Offset = "0x1BF5B30", VA = "0x181BF7530", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000047")]
	[CompilerGenerated]
	private struct _003CParseNumberNaNAsync_003Ed__26 : IAsyncStateMachine
	{
		[Token(Token = "0x4000174")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000175")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<object> _003C_003Et__builder;

		[Token(Token = "0x4000176")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ReadType readType;

		[Token(Token = "0x4000177")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x4000178")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000179")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ReadType _003C_003E7__wrap1;

		[Token(Token = "0x400017A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600028F")]
		[Address(RVA = "0x1BF7590", Offset = "0x1BF5B90", VA = "0x181BF7590", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000290")]
		[Address(RVA = "0x1BF77E0", Offset = "0x1BF5DE0", VA = "0x181BF77E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000048")]
	[CompilerGenerated]
	private struct _003CParseNumberNegativeInfinityAsync_003Ed__28 : IAsyncStateMachine
	{
		[Token(Token = "0x400017B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400017C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<object> _003C_003Et__builder;

		[Token(Token = "0x400017D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ReadType readType;

		[Token(Token = "0x400017E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x400017F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000180")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ReadType _003C_003E7__wrap1;

		[Token(Token = "0x4000181")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000291")]
		[Address(RVA = "0x1BF7850", Offset = "0x1BF5E50", VA = "0x181BF7850", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000292")]
		[Address(RVA = "0x1BF7AA0", Offset = "0x1BF60A0", VA = "0x181BF7AA0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000049")]
	[CompilerGenerated]
	private struct _003CParseNumberPositiveInfinityAsync_003Ed__27 : IAsyncStateMachine
	{
		[Token(Token = "0x4000182")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000183")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<object> _003C_003Et__builder;

		[Token(Token = "0x4000184")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ReadType readType;

		[Token(Token = "0x4000185")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x4000186")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000187")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ReadType _003C_003E7__wrap1;

		[Token(Token = "0x4000188")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000293")]
		[Address(RVA = "0x1BF7B10", Offset = "0x1BF6110", VA = "0x181BF7B10", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000294")]
		[Address(RVA = "0x1BF7D60", Offset = "0x1BF6360", VA = "0x181BF7D60", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200004A")]
	[CompilerGenerated]
	private struct _003CParseObjectAsync_003Ed__15 : IAsyncStateMachine
	{
		[Token(Token = "0x4000189")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400018A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x400018B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x400018C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400018D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x400018E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x400018F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__3;

		[Token(Token = "0x6000295")]
		[Address(RVA = "0x1BF7DD0", Offset = "0x1BF63D0", VA = "0x181BF7DD0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000296")]
		[Address(RVA = "0x1BF83B0", Offset = "0x1BF69B0", VA = "0x181BF83B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200004B")]
	[CompilerGenerated]
	private struct _003CParsePostValueAsync_003Ed__4 : IAsyncStateMachine
	{
		[Token(Token = "0x4000190")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000191")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x4000192")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x4000193")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000194")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool ignoreComments;

		[Token(Token = "0x4000195")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000196")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000297")]
		[Address(RVA = "0x1BF8420", Offset = "0x1BF6A20", VA = "0x181BF8420", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000298")]
		[Address(RVA = "0x1BF8A30", Offset = "0x1BF7030", VA = "0x181BF8A30", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200004C")]
	[CompilerGenerated]
	private struct _003CParsePropertyAsync_003Ed__31 : IAsyncStateMachine
	{
		[Token(Token = "0x4000197")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000198")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x4000199")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x400019A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400019B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private char _003CquoteChar_003E5__2;

		[Token(Token = "0x400019C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private string _003CpropertyName_003E5__3;

		[Token(Token = "0x400019D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000299")]
		[Address(RVA = "0x1BF8AA0", Offset = "0x1BF70A0", VA = "0x181BF8AA0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600029A")]
		[Address(RVA = "0x1BF9110", Offset = "0x1BF7710", VA = "0x181BF9110", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200004D")]
	[CompilerGenerated]
	private struct _003CParseStringAsync_003Ed__18 : IAsyncStateMachine
	{
		[Token(Token = "0x400019E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400019F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40001A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40001A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x40001A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public char quote;

		[Token(Token = "0x40001A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public ReadType readType;

		[Token(Token = "0x40001A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600029B")]
		[Address(RVA = "0x1BF9180", Offset = "0x1BF7780", VA = "0x181BF9180", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600029C")]
		[Address(RVA = "0x1BF9370", Offset = "0x1BF7970", VA = "0x181BF9370", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200004E")]
	[CompilerGenerated]
	private struct _003CParseUnicodeAsync_003Ed__12 : IAsyncStateMachine
	{
		[Token(Token = "0x40001A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40001A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<char> _003C_003Et__builder;

		[Token(Token = "0x40001A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x40001A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40001A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600029D")]
		[Address(RVA = "0x1BF93D0", Offset = "0x1BF79D0", VA = "0x181BF93D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600029E")]
		[Address(RVA = "0x1BF95F0", Offset = "0x1BF7BF0", VA = "0x181BF95F0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200004F")]
	[CompilerGenerated]
	private struct _003CParseUnquotedPropertyAsync_003Ed__33 : IAsyncStateMachine
	{
		[Token(Token = "0x40001AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40001AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40001AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x40001AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40001AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private int _003CinitialPosition_003E5__2;

		[Token(Token = "0x40001AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600029F")]
		[Address(RVA = "0x1BF9660", Offset = "0x1BF7C60", VA = "0x181BF9660", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x1BF9960", Offset = "0x1BF7F60", VA = "0x181BF9960", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000050")]
	[CompilerGenerated]
	private struct _003CParseValueAsync_003Ed__8 : IAsyncStateMachine
	{
		[Token(Token = "0x40001B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40001B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x40001B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x40001B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40001B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x40001B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x40001B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__3;

		[Token(Token = "0x40001B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private ConfiguredTaskAwaitable<object>.ConfiguredTaskAwaiter _003C_003Eu__4;

		[Token(Token = "0x60002A1")]
		[Address(RVA = "0x1BF99C0", Offset = "0x1BF7FC0", VA = "0x181BF99C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002A2")]
		[Address(RVA = "0x1BFACA0", Offset = "0x1BF92A0", VA = "0x181BFACA0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000051")]
	[CompilerGenerated]
	private struct _003CProcessCarriageReturnAsync_003Ed__11 : IAsyncStateMachine
	{
		[Token(Token = "0x40001B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40001B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40001BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Task<bool> task;

		[Token(Token = "0x40001BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x40001BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60002A3")]
		[Address(RVA = "0x1BFAD10", Offset = "0x1BF9310", VA = "0x181BFAD10", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x1BFAEE0", Offset = "0x1BF94E0", VA = "0x181BFAEE0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000052")]
	[CompilerGenerated]
	private struct _003CReadCharsAsync_003Ed__14 : IAsyncStateMachine
	{
		[Token(Token = "0x40001BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40001BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x40001BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x40001C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int relativePosition;

		[Token(Token = "0x40001C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public bool append;

		[Token(Token = "0x40001C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40001C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private int _003CcharsRequired_003E5__2;

		[Token(Token = "0x40001C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60002A5")]
		[Address(RVA = "0x1BFAF40", Offset = "0x1BF9540", VA = "0x181BFAF40", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002A6")]
		[Address(RVA = "0x1BFB1B0", Offset = "0x1BF97B0", VA = "0x181BFB1B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000053")]
	[CompilerGenerated]
	private struct _003CReadDataAsync_003Ed__7 : IAsyncStateMachine
	{
		[Token(Token = "0x40001C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40001C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

		[Token(Token = "0x40001C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x40001C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool append;

		[Token(Token = "0x40001C9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public int charsRequired;

		[Token(Token = "0x40001CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40001CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60002A7")]
		[Address(RVA = "0x1BFB220", Offset = "0x1BF9820", VA = "0x181BFB220", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002A8")]
		[Address(RVA = "0x1BFB510", Offset = "0x1BF9B10", VA = "0x181BFB510", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000054")]
	[CompilerGenerated]
	private struct _003CReadFinishedAsync_003Ed__36 : IAsyncStateMachine
	{
		[Token(Token = "0x40001CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40001CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40001CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x40001CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40001D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x40001D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x1BFB580", Offset = "0x1BF9B80", VA = "0x181BFB580", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x1BFBA50", Offset = "0x1BFA050", VA = "0x181BFBA50", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000055")]
	[CompilerGenerated]
	private struct _003CReadFromFinishedAsync_003Ed__5 : IAsyncStateMachine
	{
		[Token(Token = "0x40001D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40001D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x40001D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x40001D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40001D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x40001D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x60002AB")]
		[Address(RVA = "0x1BFBAB0", Offset = "0x1BFA0B0", VA = "0x181BFBAB0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002AC")]
		[Address(RVA = "0x1BFBFA0", Offset = "0x1BFA5A0", VA = "0x181BFBFA0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000056")]
	[CompilerGenerated]
	private struct _003CReadIntoWrappedTypeObjectAsync_003Ed__43 : IAsyncStateMachine
	{
		[Token(Token = "0x40001D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40001D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40001DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x40001DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40001DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60002AD")]
		[Address(RVA = "0x1BFC010", Offset = "0x1BFA610", VA = "0x181BFC010", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002AE")]
		[Address(RVA = "0x1BFC550", Offset = "0x1BFAB50", VA = "0x181BFC550", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000057")]
	[CompilerGenerated]
	private struct _003CReadNullCharAsync_003Ed__34 : IAsyncStateMachine
	{
		[Token(Token = "0x40001DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40001DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x40001DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x40001E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40001E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60002AF")]
		[Address(RVA = "0x1BFC5B0", Offset = "0x1BFABB0", VA = "0x181BFC5B0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002B0")]
		[Address(RVA = "0x1BFC7E0", Offset = "0x1BFADE0", VA = "0x181BFC7E0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000058")]
	[CompilerGenerated]
	private struct _003CReadNumberIntoBufferAsync_003Ed__32 : IAsyncStateMachine
	{
		[Token(Token = "0x40001E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40001E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40001E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x40001E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40001E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private int _003CcharPos_003E5__2;

		[Token(Token = "0x40001E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x1BFC850", Offset = "0x1BFAE50", VA = "0x181BFC850", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x1BFCAD0", Offset = "0x1BFB0D0", VA = "0x181BFCAD0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000059")]
	[CompilerGenerated]
	private struct _003CReadNumberValueAsync_003Ed__38 : IAsyncStateMachine
	{
		[Token(Token = "0x40001E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40001E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<object> _003C_003Et__builder;

		[Token(Token = "0x40001EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x40001EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40001EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public ReadType readType;

		[Token(Token = "0x40001ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x40001EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x40001EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable<object>.ConfiguredTaskAwaiter _003C_003Eu__3;

		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x1BFCB30", Offset = "0x1BFB130", VA = "0x181BFCB30", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002B4")]
		[Address(RVA = "0x1BFDB70", Offset = "0x1BFC170", VA = "0x181BFDB70", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200005A")]
	[CompilerGenerated]
	private struct _003CReadStringIntoBufferAsync_003Ed__9 : IAsyncStateMachine
	{
		[Token(Token = "0x40001F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40001F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40001F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x40001F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40001F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public char quote;

		[Token(Token = "0x40001F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		private int _003CcharPos_003E5__2;

		[Token(Token = "0x40001F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private int _003CinitialPosition_003E5__3;

		[Token(Token = "0x40001F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		private int _003ClastWritePosition_003E5__4;

		[Token(Token = "0x40001F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int _003CescapeStartPos_003E5__5;

		[Token(Token = "0x40001F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		private char _003CwriteChar_003E5__6;

		[Token(Token = "0x40001FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x40001FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x40001FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private ConfiguredTaskAwaitable<char>.ConfiguredTaskAwaiter _003C_003Eu__3;

		[Token(Token = "0x40001FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private bool _003CanotherHighSurrogate_003E5__7;

		[Token(Token = "0x40001FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x7A")]
		private char _003ChighSurrogate_003E5__8;

		[Token(Token = "0x40001FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__4;

		[Token(Token = "0x60002B5")]
		[Address(RVA = "0x1BFDBE0", Offset = "0x1BFC1E0", VA = "0x181BFDBE0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x1BFE930", Offset = "0x1BFCF30", VA = "0x181BFE930", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200005B")]
	[CompilerGenerated]
	private struct _003CReadStringValueAsync_003Ed__37 : IAsyncStateMachine
	{
		[Token(Token = "0x4000200")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000201")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<object> _003C_003Et__builder;

		[Token(Token = "0x4000202")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonTextReader _003C_003E4__this;

		[Token(Token = "0x4000203")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000204")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public ReadType readType;

		[Token(Token = "0x4000205")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000206")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private string _003Cexpected_003E5__2;

		[Token(Token = "0x4000207")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x4000208")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private ConfiguredTaskAwaitable<object>.ConfiguredTaskAwaiter _003C_003Eu__3;

		[Token(Token = "0x60002B7")]
		[Address(RVA = "0x1BFE990", Offset = "0x1BFCF90", VA = "0x181BFE990", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x1BFFBB0", Offset = "0x1BFE1B0", VA = "0x181BFFBB0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40000F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private readonly bool _safeAsync;

	[Token(Token = "0x40000F5")]
	private const char UnicodeReplacementChar = '\ufffd';

	[Token(Token = "0x40000F6")]
	private const int MaximumJavascriptIntegerCharacterLength = 380;

	[Token(Token = "0x40000F7")]
	private const int LargeBufferLength = 1073741823;

	[Token(Token = "0x40000F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private readonly TextReader _reader;

	[Token(Token = "0x40000F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private char[]? _chars;

	[Token(Token = "0x40000FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private int _charsUsed;

	[Token(Token = "0x40000FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
	private int _charPos;

	[Token(Token = "0x40000FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private int _lineStartPos;

	[Token(Token = "0x40000FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x9C")]
	private int _lineNumber;

	[Token(Token = "0x40000FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private bool _isEndOfFile;

	[Token(Token = "0x40000FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringBuffer _stringBuffer;

	[Token(Token = "0x4000100")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private StringReference _stringReference;

	[Token(Token = "0x4000101")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private IArrayPool<char>? _arrayPool;

	[Token(Token = "0x17000080")]
	public JsonNameTable? PropertyNameTable
	{
		[Token(Token = "0x600021F")]
		[Address(RVA = "0x187BC40", Offset = "0x187A240", VA = "0x18187BC40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000220")]
		[Address(RVA = "0x1BE7800", Offset = "0x1BE5E00", VA = "0x181BE7800")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public IArrayPool<char>? ArrayPool
	{
		[Token(Token = "0x6000221")]
		[Address(RVA = "0x187BC00", Offset = "0x187A200", VA = "0x18187BC00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000222")]
		[Address(RVA = "0x1BE7780", Offset = "0x1BE5D80", VA = "0x181BE7780")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public int LineNumber
	{
		[Token(Token = "0x600026B")]
		[Address(RVA = "0x1BE7720", Offset = "0x1BE5D20", VA = "0x181BE7720", Slot = "33")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000083")]
	public int LinePosition
	{
		[Token(Token = "0x600026C")]
		[Address(RVA = "0x1BE7770", Offset = "0x1BE5D70", VA = "0x181BE7770", Slot = "34")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x1BE3EF0", Offset = "0x1BE24F0", VA = "0x181BE3EF0", Slot = "5")]
	public override Task<bool> ReadAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x1BDA190", Offset = "0x1BD8790", VA = "0x181BDA190")]
	internal Task<bool> DoReadAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x1BDA860", Offset = "0x1BD8E60", VA = "0x181BDA860")]
	[AsyncStateMachine(typeof(_003CDoReadAsync_003Ed__3))]
	private Task<bool> DoReadAsync(Task<bool> task, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x1BDE240", Offset = "0x1BDC840", VA = "0x181BDE240")]
	[AsyncStateMachine(typeof(_003CParsePostValueAsync_003Ed__4))]
	private Task<bool> ParsePostValueAsync(bool ignoreComments, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x1BE4780", Offset = "0x1BE2D80", VA = "0x181BE4780")]
	[AsyncStateMachine(typeof(_003CReadFromFinishedAsync_003Ed__5))]
	private Task<bool> ReadFromFinishedAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x1BE4330", Offset = "0x1BE2930", VA = "0x181BE4330")]
	private Task<int> ReadDataAsync(bool append, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x1BE4200", Offset = "0x1BE2800", VA = "0x181BE4200")]
	[AsyncStateMachine(typeof(_003CReadDataAsync_003Ed__7))]
	private Task<int> ReadDataAsync(bool append, int charsRequired, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x1BE0920", Offset = "0x1BDEF20", VA = "0x181BE0920")]
	[AsyncStateMachine(typeof(_003CParseValueAsync_003Ed__8))]
	private Task<bool> ParseValueAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x1BE5AC0", Offset = "0x1BE40C0", VA = "0x181BE5AC0")]
	[AsyncStateMachine(typeof(_003CReadStringIntoBufferAsync_003Ed__9))]
	private Task ReadStringIntoBufferAsync(char quote, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x1BE1530", Offset = "0x1BDFB30", VA = "0x181BE1530")]
	private Task ProcessCarriageReturnAsync(bool append, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x1BE1430", Offset = "0x1BDFA30", VA = "0x181BE1430")]
	[AsyncStateMachine(typeof(_003CProcessCarriageReturnAsync_003Ed__11))]
	private Task ProcessCarriageReturnAsync(Task<bool> task)
	{
		return null;
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x1BE0350", Offset = "0x1BDE950", VA = "0x181BE0350")]
	[AsyncStateMachine(typeof(_003CParseUnicodeAsync_003Ed__12))]
	private Task<char> ParseUnicodeAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x1BDAD10", Offset = "0x1BD9310", VA = "0x181BDAD10")]
	private Task<bool> EnsureCharsAsync(int relativePosition, bool append, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x1BE3FB0", Offset = "0x1BE25B0", VA = "0x181BE3FB0")]
	[AsyncStateMachine(typeof(_003CReadCharsAsync_003Ed__14))]
	private Task<bool> ReadCharsAsync(int relativePosition, bool append, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x1BDDF30", Offset = "0x1BDC530", VA = "0x181BDDF30")]
	[AsyncStateMachine(typeof(_003CParseObjectAsync_003Ed__15))]
	private Task<bool> ParseObjectAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x1BDC070", Offset = "0x1BDA670", VA = "0x181BDC070")]
	[AsyncStateMachine(typeof(_003CParseCommentAsync_003Ed__16))]
	private Task ParseCommentAsync(bool setToken, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x1BDA9A0", Offset = "0x1BD8FA0", VA = "0x181BDA9A0")]
	[AsyncStateMachine(typeof(_003CEatWhitespaceAsync_003Ed__17))]
	private Task EatWhitespaceAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x1BDFF00", Offset = "0x1BDE500", VA = "0x181BDFF00")]
	[AsyncStateMachine(typeof(_003CParseStringAsync_003Ed__18))]
	private Task ParseStringAsync(char quote, ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x1BDBA00", Offset = "0x1BDA000", VA = "0x181BDBA00")]
	[AsyncStateMachine(typeof(_003CMatchValueAsync_003Ed__19))]
	private Task<bool> MatchValueAsync(string value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x1BDBB40", Offset = "0x1BDA140", VA = "0x181BDBB40")]
	[AsyncStateMachine(typeof(_003CMatchValueWithTrailingSeparatorAsync_003Ed__20))]
	private Task<bool> MatchValueWithTrailingSeparatorAsync(string value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x1BDB8C0", Offset = "0x1BD9EC0", VA = "0x181BDB8C0")]
	[AsyncStateMachine(typeof(_003CMatchAndSetAsync_003Ed__21))]
	private Task MatchAndSetAsync(string value, JsonToken newToken, object? tokenValue, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x1BE0070", Offset = "0x1BDE670", VA = "0x181BE0070")]
	private Task ParseTrueAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x1BDCA60", Offset = "0x1BDB060", VA = "0x181BDCA60")]
	private Task ParseFalseAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x1BDCC00", Offset = "0x1BDB200", VA = "0x181BDCC00")]
	private Task ParseNullAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x1BDC570", Offset = "0x1BDAB70", VA = "0x181BDC570")]
	[AsyncStateMachine(typeof(_003CParseConstructorAsync_003Ed__25))]
	private Task ParseConstructorAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x1BDCE50", Offset = "0x1BDB450", VA = "0x181BDCE50")]
	[AsyncStateMachine(typeof(_003CParseNumberNaNAsync_003Ed__26))]
	private Task<object> ParseNumberNaNAsync(ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x1BDD810", Offset = "0x1BDBE10", VA = "0x181BDD810")]
	[AsyncStateMachine(typeof(_003CParseNumberPositiveInfinityAsync_003Ed__27))]
	private Task<object> ParseNumberPositiveInfinityAsync(ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x1BDD330", Offset = "0x1BDB930", VA = "0x181BDD330")]
	[AsyncStateMachine(typeof(_003CParseNumberNegativeInfinityAsync_003Ed__28))]
	private Task<object> ParseNumberNegativeInfinityAsync(ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x1BDCD40", Offset = "0x1BDB340", VA = "0x181BDCD40")]
	[AsyncStateMachine(typeof(_003CParseNumberAsync_003Ed__29))]
	private Task ParseNumberAsync(ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x1BE0210", Offset = "0x1BDE810", VA = "0x181BE0210")]
	private Task ParseUndefinedAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x1BDE690", Offset = "0x1BDCC90", VA = "0x181BDE690")]
	[AsyncStateMachine(typeof(_003CParsePropertyAsync_003Ed__31))]
	private Task<bool> ParsePropertyAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x1BE4C90", Offset = "0x1BE3290", VA = "0x181BE4C90")]
	[AsyncStateMachine(typeof(_003CReadNumberIntoBufferAsync_003Ed__32))]
	private Task ReadNumberIntoBufferAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x1BE0620", Offset = "0x1BDEC20", VA = "0x181BE0620")]
	[AsyncStateMachine(typeof(_003CParseUnquotedPropertyAsync_003Ed__33))]
	private Task ParseUnquotedPropertyAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x1BE4990", Offset = "0x1BE2F90", VA = "0x181BE4990")]
	[AsyncStateMachine(typeof(_003CReadNullCharAsync_003Ed__34))]
	private Task<bool> ReadNullCharAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x1BDB580", Offset = "0x1BD9B80", VA = "0x181BDB580")]
	[AsyncStateMachine(typeof(_003CHandleNullAsync_003Ed__35))]
	private Task HandleNullAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x1BE4540", Offset = "0x1BE2B40", VA = "0x181BE4540")]
	[AsyncStateMachine(typeof(_003CReadFinishedAsync_003Ed__36))]
	private Task ReadFinishedAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x1BE6340", Offset = "0x1BE4940", VA = "0x181BE6340")]
	[AsyncStateMachine(typeof(_003CReadStringValueAsync_003Ed__37))]
	private Task<object> ReadStringValueAsync(ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x1BE4F80", Offset = "0x1BE3580", VA = "0x181BE4F80")]
	[AsyncStateMachine(typeof(_003CReadNumberValueAsync_003Ed__38))]
	private Task<object> ReadNumberValueAsync(ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x1BE1990", Offset = "0x1BDFF90", VA = "0x181BE1990", Slot = "6")]
	public override Task<bool?> ReadAsBooleanAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x1BD9860", Offset = "0x1BD7E60", VA = "0x181BD9860")]
	[AsyncStateMachine(typeof(_003CDoReadAsBooleanAsync_003Ed__40))]
	internal Task<bool?> DoReadAsBooleanAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x1BE2560", Offset = "0x1BE0B60", VA = "0x181BE2560", Slot = "7")]
	public override Task<byte[]> ReadAsBytesAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x1BD99A0", Offset = "0x1BD7FA0", VA = "0x181BD99A0")]
	[AsyncStateMachine(typeof(_003CDoReadAsBytesAsync_003Ed__42))]
	internal Task<byte[]> DoReadAsBytesAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x1BE48A0", Offset = "0x1BE2EA0", VA = "0x181BE48A0")]
	[AsyncStateMachine(typeof(_003CReadIntoWrappedTypeObjectAsync_003Ed__43))]
	private Task ReadIntoWrappedTypeObjectAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x1BE3040", Offset = "0x1BE1640", VA = "0x181BE3040", Slot = "8")]
	public override Task<DateTime?> ReadAsDateTimeAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x1BD9AD0", Offset = "0x1BD80D0", VA = "0x181BD9AD0")]
	[AsyncStateMachine(typeof(_003CDoReadAsDateTimeAsync_003Ed__45))]
	internal Task<DateTime?> DoReadAsDateTimeAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x1BE3230", Offset = "0x1BE1830", VA = "0x181BE3230", Slot = "9")]
	public override Task<DateTimeOffset?> ReadAsDateTimeOffsetAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x1BD9BF0", Offset = "0x1BD81F0", VA = "0x181BD9BF0")]
	[AsyncStateMachine(typeof(_003CDoReadAsDateTimeOffsetAsync_003Ed__47))]
	internal Task<DateTimeOffset?> DoReadAsDateTimeOffsetAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x1BE3570", Offset = "0x1BE1B70", VA = "0x181BE3570", Slot = "10")]
	public override Task<decimal?> ReadAsDecimalAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x1BD9D10", Offset = "0x1BD8310", VA = "0x181BD9D10")]
	[AsyncStateMachine(typeof(_003CDoReadAsDecimalAsync_003Ed__49))]
	internal Task<decimal?> DoReadAsDecimalAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x1BE3820", Offset = "0x1BE1E20", VA = "0x181BE3820", Slot = "11")]
	public override Task<double?> ReadAsDoubleAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x1BD9E30", Offset = "0x1BD8430", VA = "0x181BD9E30")]
	[AsyncStateMachine(typeof(_003CDoReadAsDoubleAsync_003Ed__51))]
	internal Task<double?> DoReadAsDoubleAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x1BE3A60", Offset = "0x1BE2060", VA = "0x181BE3A60", Slot = "12")]
	public override Task<int?> ReadAsInt32Async([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x1BD9F50", Offset = "0x1BD8550", VA = "0x181BD9F50")]
	[AsyncStateMachine(typeof(_003CDoReadAsInt32Async_003Ed__53))]
	internal Task<int?> DoReadAsInt32Async(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x1BE3CD0", Offset = "0x1BE22D0", VA = "0x181BE3CD0", Slot = "13")]
	public override Task<string> ReadAsStringAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x1BDA070", Offset = "0x1BD8670", VA = "0x181BDA070")]
	[AsyncStateMachine(typeof(_003CDoReadAsStringAsync_003Ed__55))]
	internal Task<string> DoReadAsStringAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x1BE75C0", Offset = "0x1BE5BC0", VA = "0x181BE75C0")]
	public JsonTextReader(TextReader reader)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x1BDAC40", Offset = "0x1BD9240", VA = "0x181BDAC40")]
	private void EnsureBufferNotEmpty()
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x1BE7360", Offset = "0x1BE5960", VA = "0x181BE7360")]
	private void SetNewLine(bool hasNextChar)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x1BDC060", Offset = "0x1BDA660", VA = "0x181BDC060")]
	private void OnNewLine(int pos)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x1BE0010", Offset = "0x1BDE610", VA = "0x181BE0010")]
	private void ParseString(char quote, ReadType readType)
	{
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x1BDFB90", Offset = "0x1BDE190", VA = "0x181BDFB90")]
	private void ParseReadString(char quote, ReadType readType)
	{
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x1BD9530", Offset = "0x1BD7B30", VA = "0x181BD9530")]
	private static void BlockCopyChars(char[] src, int srcOffset, char[] dst, int dstOffset, int count)
	{
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x1BE73C0", Offset = "0x1BE59C0", VA = "0x181BE73C0")]
	private void ShiftBufferIfNeeded()
	{
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x1BE4470", Offset = "0x1BE2A70", VA = "0x181BE4470")]
	private int ReadData(bool append)
	{
		return default(int);
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x1BE1220", Offset = "0x1BDF820", VA = "0x181BE1220")]
	private void PrepareBufferForReadData(bool append, int charsRequired)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x1BE4480", Offset = "0x1BE2A80", VA = "0x181BE4480")]
	private int ReadData(bool append, int charsRequired)
	{
		return default(int);
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x1BDAEF0", Offset = "0x1BD94F0", VA = "0x181BDAEF0")]
	private bool EnsureChars(int relativePosition, bool append)
	{
		return default(bool);
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x1BE40E0", Offset = "0x1BE26E0", VA = "0x181BE40E0")]
	private bool ReadChars(int relativePosition, bool append)
	{
		return default(bool);
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x1BE7050", Offset = "0x1BE5650", VA = "0x181BE7050", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x1BE3C40", Offset = "0x1BE2240", VA = "0x181BE3C40", Slot = "22")]
	public override int? ReadAsInt32()
	{
		return null;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x1BE34E0", Offset = "0x1BE1AE0", VA = "0x181BE34E0", Slot = "28")]
	public override DateTime? ReadAsDateTime()
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x1BE3EB0", Offset = "0x1BE24B0", VA = "0x181BE3EB0", Slot = "23")]
	public override string? ReadAsString()
	{
		return null;
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x1BE2750", Offset = "0x1BE0D50", VA = "0x181BE2750", Slot = "24")]
	public override byte[]? ReadAsBytes()
	{
		return null;
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x1BE6480", Offset = "0x1BE4A80", VA = "0x181BE6480")]
	private object? ReadStringValue(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x1BDB1B0", Offset = "0x1BD97B0", VA = "0x181BDB1B0")]
	private object? FinishReadQuotedStringValue(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x1BD97B0", Offset = "0x1BD7DB0", VA = "0x181BD97B0")]
	private JsonReaderException CreateUnexpectedCharacterException(char c)
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x1BE1B80", Offset = "0x1BE0180", VA = "0x181BE1B80", Slot = "26")]
	public override bool? ReadAsBoolean()
	{
		return null;
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x1BE1910", Offset = "0x1BDFF10", VA = "0x181BE1910")]
	private void ProcessValueComma()
	{
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x1BE50C0", Offset = "0x1BE36C0", VA = "0x181BE50C0")]
	private object? ReadNumberValue(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x1BDB040", Offset = "0x1BD9640", VA = "0x181BDB040")]
	private object? FinishReadQuotedNumber(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x1BE3440", Offset = "0x1BE1A40", VA = "0x181BE3440", Slot = "29")]
	public override DateTimeOffset? ReadAsDateTimeOffset()
	{
		return null;
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x1BE3780", Offset = "0x1BE1D80", VA = "0x181BE3780", Slot = "27")]
	public override decimal? ReadAsDecimal()
	{
		return null;
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x1BE39D0", Offset = "0x1BE1FD0", VA = "0x181BE39D0", Slot = "25")]
	public override double? ReadAsDouble()
	{
		return null;
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x1BDB680", Offset = "0x1BD9C80", VA = "0x181BDB680")]
	private void HandleNull()
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x1BE4640", Offset = "0x1BE2C40", VA = "0x181BE4640")]
	private void ReadFinished()
	{
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x1BE4AB0", Offset = "0x1BE30B0", VA = "0x181BE4AB0")]
	private bool ReadNullChar()
	{
		return default(bool);
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x1BDACA0", Offset = "0x1BD92A0", VA = "0x181BDACA0")]
	private void EnsureBuffer()
	{
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x1BE5BF0", Offset = "0x1BE41F0", VA = "0x181BE5BF0")]
	private void ReadStringIntoBuffer(char quote)
	{
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x1BDB470", Offset = "0x1BD9A70", VA = "0x181BDB470")]
	private void FinishReadStringIntoBuffer(int charPos, int initialPosition, int lastWritePosition)
	{
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x1BE7550", Offset = "0x1BE5B50", VA = "0x181BE7550")]
	private void WriteCharToBuffer(char writeChar, int lastWritePosition, int writeToPosition)
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x1BD9610", Offset = "0x1BD7C10", VA = "0x181BD9610")]
	private char ConvertUnicode(bool enoughChars)
	{
		return default(char);
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x1BE0470", Offset = "0x1BDEA70", VA = "0x181BE0470")]
	private char ParseUnicode()
	{
		return default(char);
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x1BE4D90", Offset = "0x1BE3390", VA = "0x181BE4D90")]
	private void ReadNumberIntoBuffer()
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x1BE4B00", Offset = "0x1BE3100", VA = "0x181BE4B00")]
	private bool ReadNumberCharIntoBuffer(char currentChar, int charPos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x1BD9550", Offset = "0x1BD7B50", VA = "0x181BD9550")]
	private void ClearRecentString()
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x1BDE380", Offset = "0x1BDC980", VA = "0x181BDE380")]
	private bool ParsePostValue(bool ignoreComments)
	{
		return default(bool);
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x1BDE060", Offset = "0x1BDC660", VA = "0x181BDE060")]
	private bool ParseObject()
	{
		return default(bool);
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x1BDE7B0", Offset = "0x1BDCDB0", VA = "0x181BDE7B0")]
	private bool ParseProperty()
	{
		return default(bool);
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x1BE7500", Offset = "0x1BE5B00", VA = "0x181BE7500")]
	private bool ValidIdentifierChar(char value)
	{
		return default(bool);
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x1BE0720", Offset = "0x1BDED20", VA = "0x181BE0720")]
	private void ParseUnquotedProperty()
	{
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x1BE6EE0", Offset = "0x1BE54E0", VA = "0x181BE6EE0")]
	private bool ReadUnquotedPropertyReportIfDone(char currentChar, int initialPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x1BE0A50", Offset = "0x1BDF050", VA = "0x181BE0A50")]
	private bool ParseValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x1BE18F0", Offset = "0x1BDFEF0", VA = "0x181BE18F0")]
	private void ProcessLineFeed()
	{
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x1BE1880", Offset = "0x1BDFE80", VA = "0x181BE1880")]
	private void ProcessCarriageReturn(bool append)
	{
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x1BDAAA0", Offset = "0x1BD90A0", VA = "0x181BDAAA0")]
	private void EatWhitespace()
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x1BDC680", Offset = "0x1BDAC80", VA = "0x181BDC680")]
	private void ParseConstructor()
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x1BDDCF0", Offset = "0x1BDC2F0", VA = "0x181BDDCF0")]
	private void ParseNumber(ReadType readType)
	{
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x1BDEA70", Offset = "0x1BDD070", VA = "0x181BDEA70")]
	private void ParseReadNumber(ReadType readType, char firstChar, int initialPosition)
	{
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x1BE74A0", Offset = "0x1BE5AA0", VA = "0x181BE74A0")]
	private JsonReaderException ThrowReaderError(string message, [Optional] Exception? ex)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000258")]
	[Address(RVA = "0x1BD94B0", Offset = "0x1BD7AB0", VA = "0x181BD94B0")]
	private static object BigIntegerParse(string number, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x1BDC190", Offset = "0x1BDA790", VA = "0x181BDC190")]
	private void ParseComment(bool setToken)
	{
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x1BDABF0", Offset = "0x1BD91F0", VA = "0x181BDABF0")]
	private void EndComment(bool setToken, int initialPosition, int endPosition)
	{
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x1BDBF80", Offset = "0x1BDA580", VA = "0x181BDBF80")]
	private bool MatchValue(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x1BDBEA0", Offset = "0x1BDA4A0", VA = "0x181BDBEA0")]
	private bool MatchValue(bool enoughChars, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x1BDBC80", Offset = "0x1BDA280", VA = "0x181BDBC80")]
	private bool MatchValueWithTrailingSeparator(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x1BDB790", Offset = "0x1BD9D90", VA = "0x181BDB790")]
	private bool IsSeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x1BE0120", Offset = "0x1BDE720", VA = "0x181BE0120")]
	private void ParseTrue()
	{
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x1BDCC80", Offset = "0x1BDB280", VA = "0x181BDCC80")]
	private void ParseNull()
	{
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x1BE0290", Offset = "0x1BDE890", VA = "0x181BE0290")]
	private void ParseUndefined()
	{
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x1BDCB10", Offset = "0x1BDB110", VA = "0x181BDCB10")]
	private void ParseFalse()
	{
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x1BDD610", Offset = "0x1BDBC10", VA = "0x181BDD610")]
	private object ParseNumberNegativeInfinity(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x1BDD460", Offset = "0x1BDBA60", VA = "0x181BDD460")]
	private object ParseNumberNegativeInfinity(ReadType readType, bool matched)
	{
		return null;
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x1BDDAF0", Offset = "0x1BDC0F0", VA = "0x181BDDAF0")]
	private object ParseNumberPositiveInfinity(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x1BDD940", Offset = "0x1BDBF40", VA = "0x181BDD940")]
	private object ParseNumberPositiveInfinity(ReadType readType, bool matched)
	{
		return null;
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x1BDCF80", Offset = "0x1BDB580", VA = "0x181BDCF80")]
	private object ParseNumberNaN(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x1BDD180", Offset = "0x1BDB780", VA = "0x181BDD180")]
	private object ParseNumberNaN(ReadType readType, bool matched)
	{
		return null;
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x1BD9570", Offset = "0x1BD7B70", VA = "0x181BD9570", Slot = "31")]
	public override void Close()
	{
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "32")]
	public bool HasLineInfo()
	{
		return default(bool);
	}
}
