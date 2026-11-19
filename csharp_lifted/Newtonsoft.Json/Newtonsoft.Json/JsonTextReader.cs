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
		[Address(RVA = "0x5572720", Offset = "0x5571720", VA = "0x5572720", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600026E")]
		[Address(RVA = "0x55735D0", Offset = "0x55725D0", VA = "0x55735D0", Slot = "5")]
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
		[Address(RVA = "0x5573640", Offset = "0x5572640", VA = "0x5573640", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000270")]
		[Address(RVA = "0x5574510", Offset = "0x5573510", VA = "0x5574510", Slot = "5")]
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
		[Address(RVA = "0x5574580", Offset = "0x5573580", VA = "0x5574580", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000272")]
		[Address(RVA = "0x5574840", Offset = "0x5573840", VA = "0x5574840", Slot = "5")]
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
		[Address(RVA = "0x55748B0", Offset = "0x55738B0", VA = "0x55748B0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000274")]
		[Address(RVA = "0x5574B90", Offset = "0x5573B90", VA = "0x5574B90", Slot = "5")]
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
		[Address(RVA = "0x5574C00", Offset = "0x5573C00", VA = "0x5574C00", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000276")]
		[Address(RVA = "0x5574EE0", Offset = "0x5573EE0", VA = "0x5574EE0", Slot = "5")]
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
		[Address(RVA = "0x5574F50", Offset = "0x5573F50", VA = "0x5574F50", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000278")]
		[Address(RVA = "0x5575210", Offset = "0x5574210", VA = "0x5575210", Slot = "5")]
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
		[Address(RVA = "0x5575280", Offset = "0x5574280", VA = "0x5575280", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600027A")]
		[Address(RVA = "0x5575530", Offset = "0x5574530", VA = "0x5575530", Slot = "5")]
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
		[Address(RVA = "0x55755A0", Offset = "0x55745A0", VA = "0x55755A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600027C")]
		[Address(RVA = "0x5575830", Offset = "0x5574830", VA = "0x5575830", Slot = "5")]
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
		[Address(RVA = "0x55758A0", Offset = "0x55748A0", VA = "0x55758A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600027E")]
		[Address(RVA = "0x5575BF0", Offset = "0x5574BF0", VA = "0x5575BF0", Slot = "5")]
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
		[Address(RVA = "0x5575C60", Offset = "0x5574C60", VA = "0x5575C60", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000280")]
		[Address(RVA = "0x5576080", Offset = "0x5575080", VA = "0x5576080", Slot = "5")]
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
		[Address(RVA = "0x55760E0", Offset = "0x55750E0", VA = "0x55760E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000282")]
		[Address(RVA = "0x55764E0", Offset = "0x55754E0", VA = "0x55764E0", Slot = "5")]
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
		[Address(RVA = "0x5576540", Offset = "0x5575540", VA = "0x5576540", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000284")]
		[Address(RVA = "0x5576850", Offset = "0x5575850", VA = "0x5576850", Slot = "5")]
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
		[Address(RVA = "0x55768B0", Offset = "0x55758B0", VA = "0x55768B0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000286")]
		[Address(RVA = "0x5576B60", Offset = "0x5575B60", VA = "0x5576B60", Slot = "5")]
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
		[Address(RVA = "0x5576BD0", Offset = "0x5575BD0", VA = "0x5576BD0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000288")]
		[Address(RVA = "0x5576FC0", Offset = "0x5575FC0", VA = "0x5576FC0", Slot = "5")]
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
		[Address(RVA = "0x5577030", Offset = "0x5576030", VA = "0x5577030", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600028A")]
		[Address(RVA = "0x5577940", Offset = "0x5576940", VA = "0x5577940", Slot = "5")]
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
		[Address(RVA = "0x55779A0", Offset = "0x55769A0", VA = "0x55779A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600028C")]
		[Address(RVA = "0x5578430", Offset = "0x5577430", VA = "0x5578430", Slot = "5")]
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
		[Address(RVA = "0x5578490", Offset = "0x5577490", VA = "0x5578490", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600028E")]
		[Address(RVA = "0x5578700", Offset = "0x5577700", VA = "0x5578700", Slot = "5")]
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
		[Address(RVA = "0x5578760", Offset = "0x5577760", VA = "0x5578760", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000290")]
		[Address(RVA = "0x5578A20", Offset = "0x5577A20", VA = "0x5578A20", Slot = "5")]
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
		[Address(RVA = "0x5578A90", Offset = "0x5577A90", VA = "0x5578A90", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000292")]
		[Address(RVA = "0x5578D50", Offset = "0x5577D50", VA = "0x5578D50", Slot = "5")]
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
		[Address(RVA = "0x5578DC0", Offset = "0x5577DC0", VA = "0x5578DC0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000294")]
		[Address(RVA = "0x5579080", Offset = "0x5578080", VA = "0x5579080", Slot = "5")]
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
		[Address(RVA = "0x55790F0", Offset = "0x55780F0", VA = "0x55790F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000296")]
		[Address(RVA = "0x5579760", Offset = "0x5578760", VA = "0x5579760", Slot = "5")]
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
		[Address(RVA = "0x55797D0", Offset = "0x55787D0", VA = "0x55797D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000298")]
		[Address(RVA = "0x5579EA0", Offset = "0x5578EA0", VA = "0x5579EA0", Slot = "5")]
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
		[Address(RVA = "0x5579F10", Offset = "0x5578F10", VA = "0x5579F10", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600029A")]
		[Address(RVA = "0x557A5F0", Offset = "0x55795F0", VA = "0x557A5F0", Slot = "5")]
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
		[Address(RVA = "0x557A660", Offset = "0x5579660", VA = "0x557A660", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600029C")]
		[Address(RVA = "0x557A8D0", Offset = "0x55798D0", VA = "0x557A8D0", Slot = "5")]
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
		[Address(RVA = "0x557A930", Offset = "0x5579930", VA = "0x557A930", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600029E")]
		[Address(RVA = "0x557ABC0", Offset = "0x5579BC0", VA = "0x557ABC0", Slot = "5")]
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
		[Address(RVA = "0x557AC30", Offset = "0x5579C30", VA = "0x557AC30", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x557AF80", Offset = "0x5579F80", VA = "0x557AF80", Slot = "5")]
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
		[Address(RVA = "0x557AFE0", Offset = "0x5579FE0", VA = "0x557AFE0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002A2")]
		[Address(RVA = "0x557C2B0", Offset = "0x557B2B0", VA = "0x557C2B0", Slot = "5")]
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
		[Address(RVA = "0x557C320", Offset = "0x557B320", VA = "0x557C320", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x557C560", Offset = "0x557B560", VA = "0x557C560", Slot = "5")]
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
		[Address(RVA = "0x557C5C0", Offset = "0x557B5C0", VA = "0x557C5C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002A6")]
		[Address(RVA = "0x557C870", Offset = "0x557B870", VA = "0x557C870", Slot = "5")]
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
		[Address(RVA = "0x557C8E0", Offset = "0x557B8E0", VA = "0x557C8E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002A8")]
		[Address(RVA = "0x557CC20", Offset = "0x557BC20", VA = "0x557CC20", Slot = "5")]
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
		[Address(RVA = "0x557CC90", Offset = "0x557BC90", VA = "0x557CC90", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x557D200", Offset = "0x557C200", VA = "0x557D200", Slot = "5")]
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
		[Address(RVA = "0x557D260", Offset = "0x557C260", VA = "0x557D260", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002AC")]
		[Address(RVA = "0x557D800", Offset = "0x557C800", VA = "0x557D800", Slot = "5")]
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
		[Address(RVA = "0x557D870", Offset = "0x557C870", VA = "0x557D870", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002AE")]
		[Address(RVA = "0x557DE40", Offset = "0x557CE40", VA = "0x557DE40", Slot = "5")]
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
		[Address(RVA = "0x557DEA0", Offset = "0x557CEA0", VA = "0x557DEA0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002B0")]
		[Address(RVA = "0x557E150", Offset = "0x557D150", VA = "0x557E150", Slot = "5")]
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
		[Address(RVA = "0x557E1C0", Offset = "0x557D1C0", VA = "0x557E1C0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x557E4B0", Offset = "0x557D4B0", VA = "0x557E4B0", Slot = "5")]
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
		[Address(RVA = "0x557E510", Offset = "0x557D510", VA = "0x557E510", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002B4")]
		[Address(RVA = "0x557F590", Offset = "0x557E590", VA = "0x557F590", Slot = "5")]
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
		[Address(RVA = "0x557F600", Offset = "0x557E600", VA = "0x557F600", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x55803E0", Offset = "0x557F3E0", VA = "0x55803E0", Slot = "5")]
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
		[Address(RVA = "0x5580440", Offset = "0x557F440", VA = "0x5580440", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x55816B0", Offset = "0x55806B0", VA = "0x55816B0", Slot = "5")]
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
		[Address(RVA = "0x556B3E0", Offset = "0x556A3E0", VA = "0x556B3E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000220")]
		[Address(RVA = "0x556B3F0", Offset = "0x556A3F0", VA = "0x556B3F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public IArrayPool<char>? ArrayPool
	{
		[Token(Token = "0x6000221")]
		[Address(RVA = "0x556B410", Offset = "0x556A410", VA = "0x556B410")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000222")]
		[Address(RVA = "0x556B420", Offset = "0x556A420", VA = "0x556B420")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public int LineNumber
	{
		[Token(Token = "0x600026B")]
		[Address(RVA = "0x55726D0", Offset = "0x55716D0", VA = "0x55726D0", Slot = "33")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000083")]
	public int LinePosition
	{
		[Token(Token = "0x600026C")]
		[Address(RVA = "0x5572710", Offset = "0x5571710", VA = "0x5572710", Slot = "34")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x5568160", Offset = "0x5567160", VA = "0x5568160", Slot = "5")]
	public override Task<bool> ReadAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x5568170", Offset = "0x5567170", VA = "0x5568170")]
	internal Task<bool> DoReadAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x55687A0", Offset = "0x55677A0", VA = "0x55687A0")]
	[AsyncStateMachine(typeof(_003CDoReadAsync_003Ed__3))]
	private Task<bool> DoReadAsync(Task<bool> task, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x5568670", Offset = "0x5567670", VA = "0x5568670")]
	[AsyncStateMachine(typeof(_003CParsePostValueAsync_003Ed__4))]
	private Task<bool> ParsePostValueAsync(bool ignoreComments, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x55688E0", Offset = "0x55678E0", VA = "0x55688E0")]
	[AsyncStateMachine(typeof(_003CReadFromFinishedAsync_003Ed__5))]
	private Task<bool> ReadFromFinishedAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x5568A00", Offset = "0x5567A00", VA = "0x5568A00")]
	private Task<int> ReadDataAsync(bool append, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x5568A10", Offset = "0x5567A10", VA = "0x5568A10")]
	[AsyncStateMachine(typeof(_003CReadDataAsync_003Ed__7))]
	private Task<int> ReadDataAsync(bool append, int charsRequired, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x5568420", Offset = "0x5567420", VA = "0x5568420")]
	[AsyncStateMachine(typeof(_003CParseValueAsync_003Ed__8))]
	private Task<bool> ParseValueAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x5568B40", Offset = "0x5567B40", VA = "0x5568B40")]
	[AsyncStateMachine(typeof(_003CReadStringIntoBufferAsync_003Ed__9))]
	private Task ReadStringIntoBufferAsync(char quote, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x5568C60", Offset = "0x5567C60", VA = "0x5568C60")]
	private Task ProcessCarriageReturnAsync(bool append, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x5568F50", Offset = "0x5567F50", VA = "0x5568F50")]
	[AsyncStateMachine(typeof(_003CProcessCarriageReturnAsync_003Ed__11))]
	private Task ProcessCarriageReturnAsync(Task<bool> task)
	{
		return null;
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x5569040", Offset = "0x5568040", VA = "0x5569040")]
	[AsyncStateMachine(typeof(_003CParseUnicodeAsync_003Ed__12))]
	private Task<char> ParseUnicodeAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x5568E30", Offset = "0x5567E30", VA = "0x5568E30")]
	private Task<bool> EnsureCharsAsync(int relativePosition, bool append, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x5569150", Offset = "0x5568150", VA = "0x5569150")]
	[AsyncStateMachine(typeof(_003CReadCharsAsync_003Ed__14))]
	private Task<bool> ReadCharsAsync(int relativePosition, bool append, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x5568550", Offset = "0x5567550", VA = "0x5568550")]
	[AsyncStateMachine(typeof(_003CParseObjectAsync_003Ed__15))]
	private Task<bool> ParseObjectAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x5569280", Offset = "0x5568280", VA = "0x5569280")]
	[AsyncStateMachine(typeof(_003CParseCommentAsync_003Ed__16))]
	private Task ParseCommentAsync(bool setToken, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x5569390", Offset = "0x5568390", VA = "0x5569390")]
	[AsyncStateMachine(typeof(_003CEatWhitespaceAsync_003Ed__17))]
	private Task EatWhitespaceAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x5569480", Offset = "0x5568480", VA = "0x5569480")]
	[AsyncStateMachine(typeof(_003CParseStringAsync_003Ed__18))]
	private Task ParseStringAsync(char quote, ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x5569590", Offset = "0x5568590", VA = "0x5569590")]
	[AsyncStateMachine(typeof(_003CMatchValueAsync_003Ed__19))]
	private Task<bool> MatchValueAsync(string value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x55696D0", Offset = "0x55686D0", VA = "0x55696D0")]
	[AsyncStateMachine(typeof(_003CMatchValueWithTrailingSeparatorAsync_003Ed__20))]
	private Task<bool> MatchValueWithTrailingSeparatorAsync(string value, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x5569810", Offset = "0x5568810", VA = "0x5569810")]
	[AsyncStateMachine(typeof(_003CMatchAndSetAsync_003Ed__21))]
	private Task MatchAndSetAsync(string value, JsonToken newToken, object? tokenValue, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x5569950", Offset = "0x5568950", VA = "0x5569950")]
	private Task ParseTrueAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x55699E0", Offset = "0x55689E0", VA = "0x55699E0")]
	private Task ParseFalseAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x5569A70", Offset = "0x5568A70", VA = "0x5569A70")]
	private Task ParseNullAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x5569AE0", Offset = "0x5568AE0", VA = "0x5569AE0")]
	[AsyncStateMachine(typeof(_003CParseConstructorAsync_003Ed__25))]
	private Task ParseConstructorAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x5569BE0", Offset = "0x5568BE0", VA = "0x5569BE0")]
	[AsyncStateMachine(typeof(_003CParseNumberNaNAsync_003Ed__26))]
	private Task<object> ParseNumberNaNAsync(ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x5569D00", Offset = "0x5568D00", VA = "0x5569D00")]
	[AsyncStateMachine(typeof(_003CParseNumberPositiveInfinityAsync_003Ed__27))]
	private Task<object> ParseNumberPositiveInfinityAsync(ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x5569E20", Offset = "0x5568E20", VA = "0x5569E20")]
	[AsyncStateMachine(typeof(_003CParseNumberNegativeInfinityAsync_003Ed__28))]
	private Task<object> ParseNumberNegativeInfinityAsync(ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x5569F40", Offset = "0x5568F40", VA = "0x5569F40")]
	[AsyncStateMachine(typeof(_003CParseNumberAsync_003Ed__29))]
	private Task ParseNumberAsync(ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x556A040", Offset = "0x5569040", VA = "0x556A040")]
	private Task ParseUndefinedAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x556A0B0", Offset = "0x55690B0", VA = "0x556A0B0")]
	[AsyncStateMachine(typeof(_003CParsePropertyAsync_003Ed__31))]
	private Task<bool> ParsePropertyAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x556A1D0", Offset = "0x55691D0", VA = "0x556A1D0")]
	[AsyncStateMachine(typeof(_003CReadNumberIntoBufferAsync_003Ed__32))]
	private Task ReadNumberIntoBufferAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x556A2C0", Offset = "0x55692C0", VA = "0x556A2C0")]
	[AsyncStateMachine(typeof(_003CParseUnquotedPropertyAsync_003Ed__33))]
	private Task ParseUnquotedPropertyAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x556A3B0", Offset = "0x55693B0", VA = "0x556A3B0")]
	[AsyncStateMachine(typeof(_003CReadNullCharAsync_003Ed__34))]
	private Task<bool> ReadNullCharAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x556A4C0", Offset = "0x55694C0", VA = "0x556A4C0")]
	[AsyncStateMachine(typeof(_003CHandleNullAsync_003Ed__35))]
	private Task HandleNullAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x556A5B0", Offset = "0x55695B0", VA = "0x556A5B0")]
	[AsyncStateMachine(typeof(_003CReadFinishedAsync_003Ed__36))]
	private Task ReadFinishedAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x556A6A0", Offset = "0x55696A0", VA = "0x556A6A0")]
	[AsyncStateMachine(typeof(_003CReadStringValueAsync_003Ed__37))]
	private Task<object> ReadStringValueAsync(ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x556A7E0", Offset = "0x55697E0", VA = "0x556A7E0")]
	[AsyncStateMachine(typeof(_003CReadNumberValueAsync_003Ed__38))]
	private Task<object> ReadNumberValueAsync(ReadType readType, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x556A920", Offset = "0x5569920", VA = "0x556A920", Slot = "6")]
	public override Task<bool?> ReadAsBooleanAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x556A930", Offset = "0x5569930", VA = "0x556A930")]
	[AsyncStateMachine(typeof(_003CDoReadAsBooleanAsync_003Ed__40))]
	internal Task<bool?> DoReadAsBooleanAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x556AA60", Offset = "0x5569A60", VA = "0x556AA60", Slot = "7")]
	public override Task<byte[]> ReadAsBytesAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x556AA70", Offset = "0x5569A70", VA = "0x556AA70")]
	[AsyncStateMachine(typeof(_003CDoReadAsBytesAsync_003Ed__42))]
	internal Task<byte[]> DoReadAsBytesAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x556ABA0", Offset = "0x5569BA0", VA = "0x556ABA0")]
	[AsyncStateMachine(typeof(_003CReadIntoWrappedTypeObjectAsync_003Ed__43))]
	private Task ReadIntoWrappedTypeObjectAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x556AC90", Offset = "0x5569C90", VA = "0x556AC90", Slot = "8")]
	public override Task<DateTime?> ReadAsDateTimeAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x556ACA0", Offset = "0x5569CA0", VA = "0x556ACA0")]
	[AsyncStateMachine(typeof(_003CDoReadAsDateTimeAsync_003Ed__45))]
	internal Task<DateTime?> DoReadAsDateTimeAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x556ADB0", Offset = "0x5569DB0", VA = "0x556ADB0", Slot = "9")]
	public override Task<DateTimeOffset?> ReadAsDateTimeOffsetAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x556ADC0", Offset = "0x5569DC0", VA = "0x556ADC0")]
	[AsyncStateMachine(typeof(_003CDoReadAsDateTimeOffsetAsync_003Ed__47))]
	internal Task<DateTimeOffset?> DoReadAsDateTimeOffsetAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x556AED0", Offset = "0x5569ED0", VA = "0x556AED0", Slot = "10")]
	public override Task<decimal?> ReadAsDecimalAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x556AEE0", Offset = "0x5569EE0", VA = "0x556AEE0")]
	[AsyncStateMachine(typeof(_003CDoReadAsDecimalAsync_003Ed__49))]
	internal Task<decimal?> DoReadAsDecimalAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x556AFF0", Offset = "0x5569FF0", VA = "0x556AFF0", Slot = "11")]
	public override Task<double?> ReadAsDoubleAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x556B090", Offset = "0x556A090", VA = "0x556B090")]
	[AsyncStateMachine(typeof(_003CDoReadAsDoubleAsync_003Ed__51))]
	internal Task<double?> DoReadAsDoubleAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x556B1A0", Offset = "0x556A1A0", VA = "0x556B1A0", Slot = "12")]
	public override Task<int?> ReadAsInt32Async([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x556B1B0", Offset = "0x556A1B0", VA = "0x556B1B0")]
	[AsyncStateMachine(typeof(_003CDoReadAsInt32Async_003Ed__53))]
	internal Task<int?> DoReadAsInt32Async(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x556B2C0", Offset = "0x556A2C0", VA = "0x556B2C0", Slot = "13")]
	public override Task<string> ReadAsStringAsync([Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x556B2D0", Offset = "0x556A2D0", VA = "0x556B2D0")]
	[AsyncStateMachine(typeof(_003CDoReadAsStringAsync_003Ed__55))]
	internal Task<string> DoReadAsStringAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x5559C00", Offset = "0x5558C00", VA = "0x5559C00")]
	public JsonTextReader(TextReader reader)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x556B490", Offset = "0x556A490", VA = "0x556B490")]
	private void EnsureBufferNotEmpty()
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x5568EF0", Offset = "0x5567EF0", VA = "0x5568EF0")]
	private void SetNewLine(bool hasNextChar)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x556B4F0", Offset = "0x556A4F0", VA = "0x556B4F0")]
	private void OnNewLine(int pos)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x556B500", Offset = "0x556A500", VA = "0x556B500")]
	private void ParseString(char quote, ReadType readType)
	{
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x556BCB0", Offset = "0x556ACB0", VA = "0x556BCB0")]
	private void ParseReadString(char quote, ReadType readType)
	{
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x556C170", Offset = "0x556B170", VA = "0x556C170")]
	private static void BlockCopyChars(char[] src, int srcOffset, char[] dst, int dstOffset, int count)
	{
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x556B540", Offset = "0x556A540", VA = "0x556B540")]
	private void ShiftBufferIfNeeded()
	{
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x556C180", Offset = "0x556B180", VA = "0x556C180")]
	private int ReadData(bool append)
	{
		return default(int);
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x556C220", Offset = "0x556B220", VA = "0x556C220")]
	private void PrepareBufferForReadData(bool append, int charsRequired)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x556C190", Offset = "0x556B190", VA = "0x556C190")]
	private int ReadData(bool append, int charsRequired)
	{
		return default(int);
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x556C3F0", Offset = "0x556B3F0", VA = "0x556C3F0")]
	private bool EnsureChars(int relativePosition, bool append)
	{
		return default(bool);
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x556C450", Offset = "0x556B450", VA = "0x556C450")]
	private bool ReadChars(int relativePosition, bool append)
	{
		return default(bool);
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x556C4B0", Offset = "0x556B4B0", VA = "0x556C4B0", Slot = "21")]
	public override bool Read()
	{
		return default(bool);
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x556D660", Offset = "0x556C660", VA = "0x556D660", Slot = "22")]
	public override int? ReadAsInt32()
	{
		return null;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x556DBD0", Offset = "0x556CBD0", VA = "0x556DBD0", Slot = "28")]
	public override DateTime? ReadAsDateTime()
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x556E230", Offset = "0x556D230", VA = "0x556E230", Slot = "23")]
	public override string? ReadAsString()
	{
		return null;
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x556E260", Offset = "0x556D260", VA = "0x556E260", Slot = "24")]
	public override byte[]? ReadAsBytes()
	{
		return null;
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x556DC50", Offset = "0x556CC50", VA = "0x556DC50")]
	private object? ReadStringValue(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x556ED50", Offset = "0x556DD50", VA = "0x556ED50")]
	private object? FinishReadQuotedStringValue(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x556EA00", Offset = "0x556DA00", VA = "0x556EA00")]
	private JsonReaderException CreateUnexpectedCharacterException(char c)
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x556F2C0", Offset = "0x556E2C0", VA = "0x556F2C0", Slot = "26")]
	public override bool? ReadAsBoolean()
	{
		return null;
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x556E9A0", Offset = "0x556D9A0", VA = "0x556E9A0")]
	private void ProcessValueComma()
	{
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x556D6E0", Offset = "0x556C6E0", VA = "0x556D6E0")]
	private object? ReadNumberValue(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x556F920", Offset = "0x556E920", VA = "0x556F920")]
	private object? FinishReadQuotedNumber(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x556FA70", Offset = "0x556EA70", VA = "0x556FA70", Slot = "29")]
	public override DateTimeOffset? ReadAsDateTimeOffset()
	{
		return null;
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x556FB00", Offset = "0x556EB00", VA = "0x556FB00", Slot = "27")]
	public override decimal? ReadAsDecimal()
	{
		return null;
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x556FB90", Offset = "0x556EB90", VA = "0x556FB90", Slot = "25")]
	public override double? ReadAsDouble()
	{
		return null;
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x556E8A0", Offset = "0x556D8A0", VA = "0x556E8A0")]
	private void HandleNull()
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x556EBE0", Offset = "0x556DBE0", VA = "0x556EBE0")]
	private void ReadFinished()
	{
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x556E850", Offset = "0x556D850", VA = "0x556E850")]
	private bool ReadNullChar()
	{
		return default(bool);
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x55683B0", Offset = "0x55673B0", VA = "0x55683B0")]
	private void EnsureBuffer()
	{
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x556B620", Offset = "0x556A620", VA = "0x556B620")]
	private void ReadStringIntoBuffer(char quote)
	{
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x556FDA0", Offset = "0x556EDA0", VA = "0x556FDA0")]
	private void FinishReadStringIntoBuffer(int charPos, int initialPosition, int lastWritePosition)
	{
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x556FD50", Offset = "0x556ED50", VA = "0x556FD50")]
	private void WriteCharToBuffer(char writeChar, int lastWritePosition, int writeToPosition)
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x556FE90", Offset = "0x556EE90", VA = "0x556FE90")]
	private char ConvertUnicode(bool enoughChars)
	{
		return default(char);
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x556FCE0", Offset = "0x556ECE0", VA = "0x556FCE0")]
	private char ParseUnicode()
	{
		return default(char);
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x556FFE0", Offset = "0x556EFE0", VA = "0x556FFE0")]
	private void ReadNumberIntoBuffer()
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x5570060", Offset = "0x556F060", VA = "0x5570060")]
	private bool ReadNumberCharIntoBuffer(char currentChar, int charPos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x5570190", Offset = "0x556F190", VA = "0x5570190")]
	private void ClearRecentString()
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x556CEA0", Offset = "0x556BEA0", VA = "0x556CEA0")]
	private bool ParsePostValue(bool ignoreComments)
	{
		return default(bool);
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x556CD40", Offset = "0x556BD40", VA = "0x556CD40")]
	private bool ParseObject()
	{
		return default(bool);
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x55701B0", Offset = "0x556F1B0", VA = "0x55701B0")]
	private bool ParseProperty()
	{
		return default(bool);
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x5570490", Offset = "0x556F490", VA = "0x5570490")]
	private bool ValidIdentifierChar(char value)
	{
		return default(bool);
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x55704D0", Offset = "0x556F4D0", VA = "0x55704D0")]
	private void ParseUnquotedProperty()
	{
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x55705D0", Offset = "0x556F5D0", VA = "0x55705D0")]
	private bool ReadUnquotedPropertyReportIfDone(char currentChar, int initialPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x556C750", Offset = "0x556B750", VA = "0x556C750")]
	private bool ParseValue()
	{
		return default(bool);
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x556EBC0", Offset = "0x556DBC0", VA = "0x556EBC0")]
	private void ProcessLineFeed()
	{
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x556EB00", Offset = "0x556DB00", VA = "0x556EB00")]
	private void ProcessCarriageReturn(bool append)
	{
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x556D170", Offset = "0x556C170", VA = "0x556D170")]
	private void EatWhitespace()
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x5570920", Offset = "0x556F920", VA = "0x5570920")]
	private void ParseConstructor()
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x556EFE0", Offset = "0x556DFE0", VA = "0x556EFE0")]
	private void ParseNumber(ReadType readType)
	{
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x5570D30", Offset = "0x556FD30", VA = "0x5570D30")]
	private void ParseReadNumber(ReadType readType, char firstChar, int initialPosition)
	{
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x5571D20", Offset = "0x5570D20", VA = "0x5571D20")]
	private JsonReaderException ThrowReaderError(string message, [Optional] Exception? ex)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000258")]
	[Address(RVA = "0x5571DE0", Offset = "0x5570DE0", VA = "0x5571DE0")]
	private static object BigIntegerParse(string number, CultureInfo culture)
	{
		return null;
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x556D280", Offset = "0x556C280", VA = "0x556D280")]
	private void ParseComment(bool setToken)
	{
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x5571E50", Offset = "0x5570E50", VA = "0x5571E50")]
	private void EndComment(bool setToken, int initialPosition, int endPosition)
	{
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x5571E90", Offset = "0x5570E90", VA = "0x5571E90")]
	private bool MatchValue(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x5571F10", Offset = "0x5570F10", VA = "0x5571F10")]
	private bool MatchValue(bool enoughChars, string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x556F0B0", Offset = "0x556E0B0", VA = "0x556F0B0")]
	private bool MatchValueWithTrailingSeparator(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x5571FD0", Offset = "0x5570FD0", VA = "0x5571FD0")]
	private bool IsSeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x5570720", Offset = "0x556F720", VA = "0x5570720")]
	private void ParseTrue()
	{
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x556FC10", Offset = "0x556EC10", VA = "0x556FC10")]
	private void ParseNull()
	{
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x5570C60", Offset = "0x556FC60", VA = "0x5570C60")]
	private void ParseUndefined()
	{
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x5570820", Offset = "0x556F820", VA = "0x5570820")]
	private void ParseFalse()
	{
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x556EF70", Offset = "0x556DF70", VA = "0x556EF70")]
	private object ParseNumberNegativeInfinity(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x5572110", Offset = "0x5571110", VA = "0x5572110")]
	private object ParseNumberNegativeInfinity(ReadType readType, bool matched)
	{
		return null;
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x556F1E0", Offset = "0x556E1E0", VA = "0x556F1E0")]
	private object ParseNumberPositiveInfinity(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x55722C0", Offset = "0x55712C0", VA = "0x55722C0")]
	private object ParseNumberPositiveInfinity(ReadType readType, bool matched)
	{
		return null;
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x556F250", Offset = "0x556E250", VA = "0x556F250")]
	private object ParseNumberNaN(ReadType readType)
	{
		return null;
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x5572470", Offset = "0x5571470", VA = "0x5572470")]
	private object ParseNumberNaN(ReadType readType, bool matched)
	{
		return null;
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x5572620", Offset = "0x5571620", VA = "0x5572620", Slot = "31")]
	public override void Close()
	{
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x55726C0", Offset = "0x55716C0", VA = "0x55726C0", Slot = "32")]
	public bool HasLineInfo()
	{
		return default(bool);
	}
}
