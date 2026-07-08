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
		[Address(RVA = "0x3A7CCB0", Offset = "0x3A7CCB0", VA = "0x3A7CCB0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600026E")]
		[Address(RVA = "0x3A7E070", Offset = "0x3A7E070", VA = "0x3A7E070", Slot = "5")]
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
		[Address(RVA = "0x3A7E0E0", Offset = "0x3A7E0E0", VA = "0x3A7E0E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000270")]
		[Address(RVA = "0x3A7F510", Offset = "0x3A7F510", VA = "0x3A7F510", Slot = "5")]
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
		[Address(RVA = "0x3A7F580", Offset = "0x3A7F580", VA = "0x3A7F580", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000272")]
		[Address(RVA = "0x3A7F880", Offset = "0x3A7F880", VA = "0x3A7F880", Slot = "5")]
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
		[Address(RVA = "0x3A7F8F0", Offset = "0x3A7F8F0", VA = "0x3A7F8F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000274")]
		[Address(RVA = "0x3A7FC10", Offset = "0x3A7FC10", VA = "0x3A7FC10", Slot = "5")]
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
		[Address(RVA = "0x3A7FC80", Offset = "0x3A7FC80", VA = "0x3A7FC80", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000276")]
		[Address(RVA = "0x3A7FFA0", Offset = "0x3A7FFA0", VA = "0x3A7FFA0", Slot = "5")]
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
		[Address(RVA = "0x3A80010", Offset = "0x3A80010", VA = "0x3A80010", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000278")]
		[Address(RVA = "0x3A80320", Offset = "0x3A80320", VA = "0x3A80320", Slot = "5")]
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
		[Address(RVA = "0x3A80390", Offset = "0x3A80390", VA = "0x3A80390", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600027A")]
		[Address(RVA = "0x3A80690", Offset = "0x3A80690", VA = "0x3A80690", Slot = "5")]
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
		[Address(RVA = "0x3A80700", Offset = "0x3A80700", VA = "0x3A80700", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600027C")]
		[Address(RVA = "0x3A809D0", Offset = "0x3A809D0", VA = "0x3A809D0", Slot = "5")]
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
		[Address(RVA = "0x3A80A40", Offset = "0x3A80A40", VA = "0x3A80A40", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600027E")]
		[Address(RVA = "0x3A80E20", Offset = "0x3A80E20", VA = "0x3A80E20", Slot = "5")]
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
		[Address(RVA = "0x3A80E90", Offset = "0x3A80E90", VA = "0x3A80E90", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000280")]
		[Address(RVA = "0x3A81390", Offset = "0x3A81390", VA = "0x3A81390", Slot = "5")]
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
		[Address(RVA = "0x3A813F0", Offset = "0x3A813F0", VA = "0x3A813F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000282")]
		[Address(RVA = "0x3A818E0", Offset = "0x3A818E0", VA = "0x3A818E0", Slot = "5")]
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
		[Address(RVA = "0x3A81940", Offset = "0x3A81940", VA = "0x3A81940", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000284")]
		[Address(RVA = "0x3A81CE0", Offset = "0x3A81CE0", VA = "0x3A81CE0", Slot = "5")]
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
		[Address(RVA = "0x3A81D40", Offset = "0x3A81D40", VA = "0x3A81D40", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000286")]
		[Address(RVA = "0x3A82050", Offset = "0x3A82050", VA = "0x3A82050", Slot = "5")]
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
		[Address(RVA = "0x3A820C0", Offset = "0x3A820C0", VA = "0x3A820C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000288")]
		[Address(RVA = "0x3A825B0", Offset = "0x3A825B0", VA = "0x3A825B0", Slot = "5")]
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
		[Address(RVA = "0x3A82620", Offset = "0x3A82620", VA = "0x3A82620", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600028A")]
		[Address(RVA = "0x3A82F60", Offset = "0x3A82F60", VA = "0x3A82F60", Slot = "5")]
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
		[Address(RVA = "0x3A82FC0", Offset = "0x3A82FC0", VA = "0x3A82FC0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600028C")]
		[Address(RVA = "0x3A83D70", Offset = "0x3A83D70", VA = "0x3A83D70", Slot = "5")]
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
		[Address(RVA = "0x3A83DD0", Offset = "0x3A83DD0", VA = "0x3A83DD0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600028E")]
		[Address(RVA = "0x3A840A0", Offset = "0x3A840A0", VA = "0x3A840A0", Slot = "5")]
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
		[Address(RVA = "0x3A84100", Offset = "0x3A84100", VA = "0x3A84100", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000290")]
		[Address(RVA = "0x3A84430", Offset = "0x3A84430", VA = "0x3A84430", Slot = "5")]
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
		[Address(RVA = "0x3A844A0", Offset = "0x3A844A0", VA = "0x3A844A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000292")]
		[Address(RVA = "0x3A847D0", Offset = "0x3A847D0", VA = "0x3A847D0", Slot = "5")]
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
		[Address(RVA = "0x3A84840", Offset = "0x3A84840", VA = "0x3A84840", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000294")]
		[Address(RVA = "0x3A84B70", Offset = "0x3A84B70", VA = "0x3A84B70", Slot = "5")]
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
		[Address(RVA = "0x3A84BE0", Offset = "0x3A84BE0", VA = "0x3A84BE0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000296")]
		[Address(RVA = "0x3A85400", Offset = "0x3A85400", VA = "0x3A85400", Slot = "5")]
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
		[Address(RVA = "0x3A85470", Offset = "0x3A85470", VA = "0x3A85470", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000298")]
		[Address(RVA = "0x3A85D40", Offset = "0x3A85D40", VA = "0x3A85D40", Slot = "5")]
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
		[Address(RVA = "0x3A85DB0", Offset = "0x3A85DB0", VA = "0x3A85DB0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600029A")]
		[Address(RVA = "0x3A867D0", Offset = "0x3A867D0", VA = "0x3A867D0", Slot = "5")]
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
		[Address(RVA = "0x3A86840", Offset = "0x3A86840", VA = "0x3A86840", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600029C")]
		[Address(RVA = "0x3A86B10", Offset = "0x3A86B10", VA = "0x3A86B10", Slot = "5")]
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
		[Address(RVA = "0x3A86B70", Offset = "0x3A86B70", VA = "0x3A86B70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600029E")]
		[Address(RVA = "0x3A86E60", Offset = "0x3A86E60", VA = "0x3A86E60", Slot = "5")]
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
		[Address(RVA = "0x3A86ED0", Offset = "0x3A86ED0", VA = "0x3A86ED0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x3A872B0", Offset = "0x3A872B0", VA = "0x3A872B0", Slot = "5")]
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
		[Address(RVA = "0x3A87310", Offset = "0x3A87310", VA = "0x3A87310", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002A2")]
		[Address(RVA = "0x3A88810", Offset = "0x3A88810", VA = "0x3A88810", Slot = "5")]
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
		[Address(RVA = "0x3A88880", Offset = "0x3A88880", VA = "0x3A88880", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x3A88B00", Offset = "0x3A88B00", VA = "0x3A88B00", Slot = "5")]
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
		[Address(RVA = "0x3A88B60", Offset = "0x3A88B60", VA = "0x3A88B60", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002A6")]
		[Address(RVA = "0x3A88E60", Offset = "0x3A88E60", VA = "0x3A88E60", Slot = "5")]
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
		[Address(RVA = "0x3A88ED0", Offset = "0x3A88ED0", VA = "0x3A88ED0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002A8")]
		[Address(RVA = "0x3A89290", Offset = "0x3A89290", VA = "0x3A89290", Slot = "5")]
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
		[Address(RVA = "0x3A89300", Offset = "0x3A89300", VA = "0x3A89300", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x3A89A10", Offset = "0x3A89A10", VA = "0x3A89A10", Slot = "5")]
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
		[Address(RVA = "0x3A89A70", Offset = "0x3A89A70", VA = "0x3A89A70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002AC")]
		[Address(RVA = "0x3A8A1B0", Offset = "0x3A8A1B0", VA = "0x3A8A1B0", Slot = "5")]
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
		[Address(RVA = "0x3A8A220", Offset = "0x3A8A220", VA = "0x3A8A220", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002AE")]
		[Address(RVA = "0x3A8A9E0", Offset = "0x3A8A9E0", VA = "0x3A8A9E0", Slot = "5")]
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
		[Address(RVA = "0x3A8AA40", Offset = "0x3A8AA40", VA = "0x3A8AA40", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002B0")]
		[Address(RVA = "0x3A8AD40", Offset = "0x3A8AD40", VA = "0x3A8AD40", Slot = "5")]
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
		[Address(RVA = "0x3A8ADB0", Offset = "0x3A8ADB0", VA = "0x3A8ADB0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x3A8B110", Offset = "0x3A8B110", VA = "0x3A8B110", Slot = "5")]
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
		[Address(RVA = "0x3A8B170", Offset = "0x3A8B170", VA = "0x3A8B170", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002B4")]
		[Address(RVA = "0x3A8C7B0", Offset = "0x3A8C7B0", VA = "0x3A8C7B0", Slot = "5")]
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
		[Address(RVA = "0x3A8C820", Offset = "0x3A8C820", VA = "0x3A8C820", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x3A8DB20", Offset = "0x3A8DB20", VA = "0x3A8DB20", Slot = "5")]
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
		[Address(RVA = "0x3A8DB80", Offset = "0x3A8DB80", VA = "0x3A8DB80", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x3A8F3C0", Offset = "0x3A8F3C0", VA = "0x3A8F3C0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40000F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x72")]
	private readonly bool _safeAsync;

	[Token(Token = "0x40000F5")]
	private const char UnicodeReplacementChar = '\ufffd';

	[Token(Token = "0x40000F6")]
	private const int MaximumJavascriptIntegerCharacterLength = 380;

	[Token(Token = "0x40000F7")]
	private const int LargeBufferLength = 1073741823;

	[Token(Token = "0x40000F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private readonly TextReader _reader;

	[Token(Token = "0x40000F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private char[]? _chars;

	[Token(Token = "0x40000FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int _charsUsed;

	[Token(Token = "0x40000FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private int _charPos;

	[Token(Token = "0x40000FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private int _lineStartPos;

	[Token(Token = "0x40000FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
	private int _lineNumber;

	[Token(Token = "0x40000FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private bool _isEndOfFile;

	[Token(Token = "0x40000FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private StringBuffer _stringBuffer;

	[Token(Token = "0x4000100")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private StringReference _stringReference;

	[Token(Token = "0x4000101")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private IArrayPool<char>? _arrayPool;

	[Token(Token = "0x17000080")]
	public JsonNameTable? PropertyNameTable
	{
		[Token(Token = "0x600021F")]
		[Address(RVA = "0x3A74FB0", Offset = "0x3A74FB0", VA = "0x3A74FB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000220")]
		[Address(RVA = "0x3A74FC0", Offset = "0x3A74FC0", VA = "0x3A74FC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public IArrayPool<char>? ArrayPool
	{
		[Token(Token = "0x6000221")]
		[Address(RVA = "0x3A74FE0", Offset = "0x3A74FE0", VA = "0x3A74FE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000222")]
		[Address(RVA = "0x3A74FF0", Offset = "0x3A74FF0", VA = "0x3A74FF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public int LineNumber
	{
		[Token(Token = "0x600026B")]
		[Address(RVA = "0x3A7CC60", Offset = "0x3A7CC60", VA = "0x3A7CC60", Slot = "33")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000083")]
	public int LinePosition
	{
		[Token(Token = "0x600026C")]
		[Address(RVA = "0x3A7CCA0", Offset = "0x3A7CCA0", VA = "0x3A7CCA0", Slot = "34")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x3A71AD0", Offset = "0x3A71AD0", VA = "0x3A71AD0", Slot = "5")]
	public override Task<bool> ReadAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x3A71AE0", Offset = "0x3A71AE0", VA = "0x3A71AE0")]
	internal Task<bool> DoReadAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x3A72130", Offset = "0x3A72130", VA = "0x3A72130")]
	[AsyncStateMachine(typeof(_003CDoReadAsync_003Ed__3))]
	private Task<bool> DoReadAsync(Task<bool> task, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x3A71FF0", Offset = "0x3A71FF0", VA = "0x3A71FF0")]
	[AsyncStateMachine(typeof(_003CParsePostValueAsync_003Ed__4))]
	private Task<bool> ParsePostValueAsync(bool ignoreComments, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x3A72270", Offset = "0x3A72270", VA = "0x3A72270")]
	[AsyncStateMachine(typeof(_003CReadFromFinishedAsync_003Ed__5))]
	private Task<bool> ReadFromFinishedAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x3A723A0", Offset = "0x3A723A0", VA = "0x3A723A0")]
	private Task<int> ReadDataAsync(bool append, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x3A723B0", Offset = "0x3A723B0", VA = "0x3A723B0")]
	[AsyncStateMachine(typeof(_003CReadDataAsync_003Ed__7))]
	private Task<int> ReadDataAsync(bool append, int charsRequired, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x3A71D80", Offset = "0x3A71D80", VA = "0x3A71D80")]
	[AsyncStateMachine(typeof(_003CParseValueAsync_003Ed__8))]
	private Task<bool> ParseValueAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x3A724F0", Offset = "0x3A724F0", VA = "0x3A724F0")]
	[AsyncStateMachine(typeof(_003CReadStringIntoBufferAsync_003Ed__9))]
	private Task ReadStringIntoBufferAsync(char quote, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x3A72620", Offset = "0x3A72620", VA = "0x3A72620")]
	private Task ProcessCarriageReturnAsync(bool append, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x3A72950", Offset = "0x3A72950", VA = "0x3A72950")]
	[AsyncStateMachine(typeof(_003CProcessCarriageReturnAsync_003Ed__11))]
	private Task ProcessCarriageReturnAsync(Task<bool> task)
	{
		return null;
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x3A72A50", Offset = "0x3A72A50", VA = "0x3A72A50")]
	[AsyncStateMachine(typeof(_003CParseUnicodeAsync_003Ed__12))]
	private Task<char> ParseUnicodeAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x3A72830", Offset = "0x3A72830", VA = "0x3A72830")]
	private Task<bool> EnsureCharsAsync(int relativePosition, bool append, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x3A72B70", Offset = "0x3A72B70", VA = "0x3A72B70")]
	[AsyncStateMachine(typeof(_003CReadCharsAsync_003Ed__14))]
	private Task<bool> ReadCharsAsync(int relativePosition, bool append, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x3A71EC0", Offset = "0x3A71EC0", VA = "0x3A71EC0")]
	[AsyncStateMachine(typeof(_003CParseObjectAsync_003Ed__15))]
	private Task<bool> ParseObjectAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x3A72CB0", Offset = "0x3A72CB0", VA = "0x3A72CB0")]
	[AsyncStateMachine(typeof(_003CParseCommentAsync_003Ed__16))]
	private Task ParseCommentAsync(bool setToken, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x3A72DD0", Offset = "0x3A72DD0", VA = "0x3A72DD0")]
	[AsyncStateMachine(typeof(_003CEatWhitespaceAsync_003Ed__17))]
	private Task EatWhitespaceAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x3A72ED0", Offset = "0x3A72ED0", VA = "0x3A72ED0")]
	[AsyncStateMachine(typeof(_003CParseStringAsync_003Ed__18))]
	private Task ParseStringAsync(char quote, ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x3A72FF0", Offset = "0x3A72FF0", VA = "0x3A72FF0")]
	[AsyncStateMachine(typeof(_003CMatchValueAsync_003Ed__19))]
	private Task<bool> MatchValueAsync(string value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x3A73130", Offset = "0x3A73130", VA = "0x3A73130")]
	[AsyncStateMachine(typeof(_003CMatchValueWithTrailingSeparatorAsync_003Ed__20))]
	private Task<bool> MatchValueWithTrailingSeparatorAsync(string value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x3A73270", Offset = "0x3A73270", VA = "0x3A73270")]
	[AsyncStateMachine(typeof(_003CMatchAndSetAsync_003Ed__21))]
	private Task MatchAndSetAsync(string value, JsonToken newToken, object? tokenValue, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x3A733C0", Offset = "0x3A733C0", VA = "0x3A733C0")]
	private Task ParseTrueAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x3A73450", Offset = "0x3A73450", VA = "0x3A73450")]
	private Task ParseFalseAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x3A734E0", Offset = "0x3A734E0", VA = "0x3A734E0")]
	private Task ParseNullAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x3A73550", Offset = "0x3A73550", VA = "0x3A73550")]
	[AsyncStateMachine(typeof(_003CParseConstructorAsync_003Ed__25))]
	private Task ParseConstructorAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x3A73660", Offset = "0x3A73660", VA = "0x3A73660")]
	[AsyncStateMachine(typeof(_003CParseNumberNaNAsync_003Ed__26))]
	private Task<object> ParseNumberNaNAsync(ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x3A737A0", Offset = "0x3A737A0", VA = "0x3A737A0")]
	[AsyncStateMachine(typeof(_003CParseNumberPositiveInfinityAsync_003Ed__27))]
	private Task<object> ParseNumberPositiveInfinityAsync(ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x3A738E0", Offset = "0x3A738E0", VA = "0x3A738E0")]
	[AsyncStateMachine(typeof(_003CParseNumberNegativeInfinityAsync_003Ed__28))]
	private Task<object> ParseNumberNegativeInfinityAsync(ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x3A73A20", Offset = "0x3A73A20", VA = "0x3A73A20")]
	[AsyncStateMachine(typeof(_003CParseNumberAsync_003Ed__29))]
	private Task ParseNumberAsync(ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x3A73B30", Offset = "0x3A73B30", VA = "0x3A73B30")]
	private Task ParseUndefinedAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x3A73BA0", Offset = "0x3A73BA0", VA = "0x3A73BA0")]
	[AsyncStateMachine(typeof(_003CParsePropertyAsync_003Ed__31))]
	private Task<bool> ParsePropertyAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x3A73CD0", Offset = "0x3A73CD0", VA = "0x3A73CD0")]
	[AsyncStateMachine(typeof(_003CReadNumberIntoBufferAsync_003Ed__32))]
	private Task ReadNumberIntoBufferAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x3A73DD0", Offset = "0x3A73DD0", VA = "0x3A73DD0")]
	[AsyncStateMachine(typeof(_003CParseUnquotedPropertyAsync_003Ed__33))]
	private Task ParseUnquotedPropertyAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x3A73ED0", Offset = "0x3A73ED0", VA = "0x3A73ED0")]
	[AsyncStateMachine(typeof(_003CReadNullCharAsync_003Ed__34))]
	private Task<bool> ReadNullCharAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x3A73FF0", Offset = "0x3A73FF0", VA = "0x3A73FF0")]
	[AsyncStateMachine(typeof(_003CHandleNullAsync_003Ed__35))]
	private Task HandleNullAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x3A740F0", Offset = "0x3A740F0", VA = "0x3A740F0")]
	[AsyncStateMachine(typeof(_003CReadFinishedAsync_003Ed__36))]
	private Task ReadFinishedAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x3A741F0", Offset = "0x3A741F0", VA = "0x3A741F0")]
	[AsyncStateMachine(typeof(_003CReadStringValueAsync_003Ed__37))]
	private Task<object> ReadStringValueAsync(ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x3A74340", Offset = "0x3A74340", VA = "0x3A74340")]
	[AsyncStateMachine(typeof(_003CReadNumberValueAsync_003Ed__38))]
	private Task<object> ReadNumberValueAsync(ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x3A74490", Offset = "0x3A74490", VA = "0x3A74490", Slot = "6")]
	public override Task<bool?> ReadAsBooleanAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x3A744A0", Offset = "0x3A744A0", VA = "0x3A744A0")]
	[AsyncStateMachine(typeof(_003CDoReadAsBooleanAsync_003Ed__40))]
	internal Task<bool?> DoReadAsBooleanAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x3A745E0", Offset = "0x3A745E0", VA = "0x3A745E0", Slot = "7")]
	public override Task<byte[]> ReadAsBytesAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x3A745F0", Offset = "0x3A745F0", VA = "0x3A745F0")]
	[AsyncStateMachine(typeof(_003CDoReadAsBytesAsync_003Ed__42))]
	internal Task<byte[]> DoReadAsBytesAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x3A74720", Offset = "0x3A74720", VA = "0x3A74720")]
	[AsyncStateMachine(typeof(_003CReadIntoWrappedTypeObjectAsync_003Ed__43))]
	private Task ReadIntoWrappedTypeObjectAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x3A74820", Offset = "0x3A74820", VA = "0x3A74820", Slot = "8")]
	public override Task<DateTime?> ReadAsDateTimeAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x3A74830", Offset = "0x3A74830", VA = "0x3A74830")]
	[AsyncStateMachine(typeof(_003CDoReadAsDateTimeAsync_003Ed__45))]
	internal Task<DateTime?> DoReadAsDateTimeAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x3A74950", Offset = "0x3A74950", VA = "0x3A74950", Slot = "9")]
	public override Task<DateTimeOffset?> ReadAsDateTimeOffsetAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x3A74960", Offset = "0x3A74960", VA = "0x3A74960")]
	[AsyncStateMachine(typeof(_003CDoReadAsDateTimeOffsetAsync_003Ed__47))]
	internal Task<DateTimeOffset?> DoReadAsDateTimeOffsetAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x3A74A80", Offset = "0x3A74A80", VA = "0x3A74A80", Slot = "10")]
	public override Task<decimal?> ReadAsDecimalAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x3A74A90", Offset = "0x3A74A90", VA = "0x3A74A90")]
	[AsyncStateMachine(typeof(_003CDoReadAsDecimalAsync_003Ed__49))]
	internal Task<decimal?> DoReadAsDecimalAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x3A74BB0", Offset = "0x3A74BB0", VA = "0x3A74BB0", Slot = "11")]
	public override Task<double?> ReadAsDoubleAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x3A74C40", Offset = "0x3A74C40", VA = "0x3A74C40")]
	[AsyncStateMachine(typeof(_003CDoReadAsDoubleAsync_003Ed__51))]
	internal Task<double?> DoReadAsDoubleAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x3A74D60", Offset = "0x3A74D60", VA = "0x3A74D60", Slot = "12")]
	public override Task<int?> ReadAsInt32Async([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x3A74D70", Offset = "0x3A74D70", VA = "0x3A74D70")]
	[AsyncStateMachine(typeof(_003CDoReadAsInt32Async_003Ed__53))]
	internal Task<int?> DoReadAsInt32Async(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x3A74E90", Offset = "0x3A74E90", VA = "0x3A74E90", Slot = "13")]
	public override Task<string> ReadAsStringAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x3A74EA0", Offset = "0x3A74EA0", VA = "0x3A74EA0")]
	[AsyncStateMachine(typeof(_003CDoReadAsStringAsync_003Ed__55))]
	internal Task<string> DoReadAsStringAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x3A62F00", Offset = "0x3A62F00", VA = "0x3A62F00")]
	public JsonTextReader(TextReader reader)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x3A75060", Offset = "0x3A75060", VA = "0x3A75060")]
	private void EnsureBufferNotEmpty()
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x3A728F0", Offset = "0x3A728F0", VA = "0x3A728F0")]
	private void SetNewLine(bool hasNextChar)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x3A750C0", Offset = "0x3A750C0", VA = "0x3A750C0")]
	private void OnNewLine(int pos)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x3A750D0", Offset = "0x3A750D0", VA = "0x3A750D0")]
	private void ParseString(char quote, ReadType readType)
	{
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x3A75860", Offset = "0x3A75860", VA = "0x3A75860")]
	private void ParseReadString(char quote, ReadType readType)
	{
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x3A75D40", Offset = "0x3A75D40", VA = "0x3A75D40")]
	private static void BlockCopyChars(char[] src, int srcOffset, char[] dst, int dstOffset, int count)
	{
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x3A75110", Offset = "0x3A75110", VA = "0x3A75110")]
	private void ShiftBufferIfNeeded()
	{
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x3A75D50", Offset = "0x3A75D50", VA = "0x3A75D50")]
	private int ReadData(bool append)
	{
		return default(int);
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x3A75DF0", Offset = "0x3A75DF0", VA = "0x3A75DF0")]
	private void PrepareBufferForReadData(bool append, int charsRequired)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x3A75D60", Offset = "0x3A75D60", VA = "0x3A75D60")]
	private int ReadData(bool append, int charsRequired)
	{
		return default(int);
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x3A75FD0", Offset = "0x3A75FD0", VA = "0x3A75FD0")]
	private bool EnsureChars(int relativePosition, bool append)
	{
		return default(bool);
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x3A76030", Offset = "0x3A76030", VA = "0x3A76030")]
	private bool ReadChars(int relativePosition, bool append)
	{
		return default(bool);
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x3A76090", Offset = "0x3A76090", VA = "0x3A76090", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x3A775C0", Offset = "0x3A775C0", VA = "0x3A775C0", Slot = "22")]
	public override int? ReadAsInt32()
	{
		return null;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x3A77C30", Offset = "0x3A77C30", VA = "0x3A77C30", Slot = "28")]
	public override DateTime? ReadAsDateTime()
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x3A783D0", Offset = "0x3A783D0", VA = "0x3A783D0", Slot = "23")]
	public override string? ReadAsString()
	{
		return null;
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x3A78400", Offset = "0x3A78400", VA = "0x3A78400", Slot = "24")]
	public override byte[]? ReadAsBytes()
	{
		return null;
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x3A77CB0", Offset = "0x3A77CB0", VA = "0x3A77CB0")]
	private object? ReadStringValue(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x3A78F50", Offset = "0x3A78F50", VA = "0x3A78F50")]
	private object? FinishReadQuotedStringValue(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x3A78C00", Offset = "0x3A78C00", VA = "0x3A78C00")]
	private JsonReaderException CreateUnexpectedCharacterException(char c)
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x3A79500", Offset = "0x3A79500", VA = "0x3A79500", Slot = "26")]
	public override bool? ReadAsBoolean()
	{
		return null;
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x3A78BA0", Offset = "0x3A78BA0", VA = "0x3A78BA0")]
	private void ProcessValueComma()
	{
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x3A77640", Offset = "0x3A77640", VA = "0x3A77640")]
	private object? ReadNumberValue(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x3A79BD0", Offset = "0x3A79BD0", VA = "0x3A79BD0")]
	private object? FinishReadQuotedNumber(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x3A79D20", Offset = "0x3A79D20", VA = "0x3A79D20", Slot = "29")]
	public override DateTimeOffset? ReadAsDateTimeOffset()
	{
		return null;
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x3A79DB0", Offset = "0x3A79DB0", VA = "0x3A79DB0", Slot = "27")]
	public override decimal? ReadAsDecimal()
	{
		return null;
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x3A79E40", Offset = "0x3A79E40", VA = "0x3A79E40", Slot = "25")]
	public override double? ReadAsDouble()
	{
		return null;
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x3A78AA0", Offset = "0x3A78AA0", VA = "0x3A78AA0")]
	private void HandleNull()
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x3A78DE0", Offset = "0x3A78DE0", VA = "0x3A78DE0")]
	private void ReadFinished()
	{
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x3A78A50", Offset = "0x3A78A50", VA = "0x3A78A50")]
	private bool ReadNullChar()
	{
		return default(bool);
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x3A71D10", Offset = "0x3A71D10", VA = "0x3A71D10")]
	private void EnsureBuffer()
	{
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x3A751D0", Offset = "0x3A751D0", VA = "0x3A751D0")]
	private void ReadStringIntoBuffer(char quote)
	{
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x3A7A050", Offset = "0x3A7A050", VA = "0x3A7A050")]
	private void FinishReadStringIntoBuffer(int charPos, int initialPosition, int lastWritePosition)
	{
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x3A7A000", Offset = "0x3A7A000", VA = "0x3A7A000")]
	private void WriteCharToBuffer(char writeChar, int lastWritePosition, int writeToPosition)
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x3A7A150", Offset = "0x3A7A150", VA = "0x3A7A150")]
	private char ConvertUnicode(bool enoughChars)
	{
		return default(char);
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x3A79F90", Offset = "0x3A79F90", VA = "0x3A79F90")]
	private char ParseUnicode()
	{
		return default(char);
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x3A7A2A0", Offset = "0x3A7A2A0", VA = "0x3A7A2A0")]
	private void ReadNumberIntoBuffer()
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x3A7A320", Offset = "0x3A7A320", VA = "0x3A7A320")]
	private bool ReadNumberCharIntoBuffer(char currentChar, int charPos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x3A7A450", Offset = "0x3A7A450", VA = "0x3A7A450")]
	private void ClearRecentString()
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x3A76B70", Offset = "0x3A76B70", VA = "0x3A76B70")]
	private bool ParsePostValue(bool ignoreComments)
	{
		return default(bool);
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x3A769C0", Offset = "0x3A769C0", VA = "0x3A769C0")]
	private bool ParseObject()
	{
		return default(bool);
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x3A7A470", Offset = "0x3A7A470", VA = "0x3A7A470")]
	private bool ParseProperty()
	{
		return default(bool);
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x3A7A760", Offset = "0x3A7A760", VA = "0x3A7A760")]
	private bool ValidIdentifierChar(char value)
	{
		return default(bool);
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x3A7A7B0", Offset = "0x3A7A7B0", VA = "0x3A7A7B0")]
	private void ParseUnquotedProperty()
	{
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x3A7A8B0", Offset = "0x3A7A8B0", VA = "0x3A7A8B0")]
	private bool ReadUnquotedPropertyReportIfDone(char currentChar, int initialPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x3A76310", Offset = "0x3A76310", VA = "0x3A76310")]
	private bool ParseValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x3A78DC0", Offset = "0x3A78DC0", VA = "0x3A78DC0")]
	private void ProcessLineFeed()
	{
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x3A78D00", Offset = "0x3A78D00", VA = "0x3A78D00")]
	private void ProcessCarriageReturn(bool append)
	{
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x3A77030", Offset = "0x3A77030", VA = "0x3A77030")]
	private void EatWhitespace()
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x3A7AC00", Offset = "0x3A7AC00", VA = "0x3A7AC00")]
	private void ParseConstructor()
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x3A79200", Offset = "0x3A79200", VA = "0x3A79200")]
	private void ParseNumber(ReadType readType)
	{
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x3A7B030", Offset = "0x3A7B030", VA = "0x3A7B030")]
	private void ParseReadNumber(ReadType readType, char firstChar, int initialPosition)
	{
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x3A7C290", Offset = "0x3A7C290", VA = "0x3A7C290")]
	private JsonReaderException ThrowReaderError(string message, [Optional] Exception? ex)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000258")]
	[Address(RVA = "0x3A7C350", Offset = "0x3A7C350", VA = "0x3A7C350")]
	private static object BigIntegerParse(string number, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x3A77160", Offset = "0x3A77160", VA = "0x3A77160")]
	private void ParseComment(bool setToken)
	{
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x3A7C3C0", Offset = "0x3A7C3C0", VA = "0x3A7C3C0")]
	private void EndComment(bool setToken, int initialPosition, int endPosition)
	{
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x3A7C400", Offset = "0x3A7C400", VA = "0x3A7C400")]
	private bool MatchValue(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x3A7C480", Offset = "0x3A7C480", VA = "0x3A7C480")]
	private bool MatchValue(bool enoughChars, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x3A792D0", Offset = "0x3A792D0", VA = "0x3A792D0")]
	private bool MatchValueWithTrailingSeparator(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x3A7C550", Offset = "0x3A7C550", VA = "0x3A7C550")]
	private bool IsSeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x3A7AA00", Offset = "0x3A7AA00", VA = "0x3A7AA00")]
	private void ParseTrue()
	{
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x3A79EC0", Offset = "0x3A79EC0", VA = "0x3A79EC0")]
	private void ParseNull()
	{
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x3A7AF60", Offset = "0x3A7AF60", VA = "0x3A7AF60")]
	private void ParseUndefined()
	{
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x3A7AB00", Offset = "0x3A7AB00", VA = "0x3A7AB00")]
	private void ParseFalse()
	{
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x3A79190", Offset = "0x3A79190", VA = "0x3A79190")]
	private object ParseNumberNegativeInfinity(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x3A7C6A0", Offset = "0x3A7C6A0", VA = "0x3A7C6A0")]
	private object ParseNumberNegativeInfinity(ReadType readType, bool matched)
	{
		return null;
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x3A79420", Offset = "0x3A79420", VA = "0x3A79420")]
	private object ParseNumberPositiveInfinity(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x3A7C850", Offset = "0x3A7C850", VA = "0x3A7C850")]
	private object ParseNumberPositiveInfinity(ReadType readType, bool matched)
	{
		return null;
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x3A79490", Offset = "0x3A79490", VA = "0x3A79490")]
	private object ParseNumberNaN(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x3A7CA00", Offset = "0x3A7CA00", VA = "0x3A7CA00")]
	private object ParseNumberNaN(ReadType readType, bool matched)
	{
		return null;
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x3A7CBB0", Offset = "0x3A7CBB0", VA = "0x3A7CBB0", Slot = "31")]
	public override void Close()
	{
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x3A7CC50", Offset = "0x3A7CC50", VA = "0x3A7CC50", Slot = "32")]
	public bool HasLineInfo()
	{
		return default(bool);
	}
}
