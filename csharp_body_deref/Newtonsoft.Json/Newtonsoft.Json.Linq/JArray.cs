using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq;

[Token(Token = "0x2000161")]
public class JArray : JContainer, IList<JToken>, ICollection<JToken>, IEnumerable<JToken>, IEnumerable
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000162")]
	[CompilerGenerated]
	private struct _003CLoadAsync_003Ed__2 : IAsyncStateMachine
	{
		[Token(Token = "0x400067A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400067B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<JArray> _003C_003Et__builder;

		[Token(Token = "0x400067C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonReader reader;

		[Token(Token = "0x400067D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x400067E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public JsonLoadSettings settings;

		[Token(Token = "0x400067F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private JArray _003Ca_003E5__2;

		[Token(Token = "0x4000680")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000681")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000B3E")]
		[Address(RVA = "0x3B11AE0", Offset = "0x3B11AE0", VA = "0x3B11AE0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B3F")]
		[Address(RVA = "0x3B12380", Offset = "0x3B12380", VA = "0x3B12380", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000163")]
	[CompilerGenerated]
	private struct _003CWriteToAsync_003Ed__0 : IAsyncStateMachine
	{
		[Token(Token = "0x4000682")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000683")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000684")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonWriter writer;

		[Token(Token = "0x4000685")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000686")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public JArray _003C_003E4__this;

		[Token(Token = "0x4000687")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public JsonConverter[] converters;

		[Token(Token = "0x4000688")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000689")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x6000B40")]
		[Address(RVA = "0x3B123F0", Offset = "0x3B123F0", VA = "0x3B123F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B41")]
		[Address(RVA = "0x3B12950", Offset = "0x3B12950", VA = "0x3B12950", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000679")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly List<JToken> _values;

	[Token(Token = "0x170001D0")]
	protected override IList<JToken> ChildrenTokens
	{
		[Token(Token = "0x6000B1D")]
		[Address(RVA = "0x3B10AF0", Offset = "0x3B10AF0", VA = "0x3B10AF0", Slot = "75")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D1")]
	public override JTokenType Type
	{
		[Token(Token = "0x6000B1E")]
		[Address(RVA = "0x3B10B00", Offset = "0x3B10B00", VA = "0x3B10B00", Slot = "15")]
		get
		{
			return default(JTokenType);
		}
	}

	[Token(Token = "0x170001D2")]
	public override JToken? this[object key]
	{
		[Token(Token = "0x6000B2D")]
		[Address(RVA = "0x3B115B0", Offset = "0x3B115B0", VA = "0x3B115B0", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B2E")]
		[Address(RVA = "0x3B116B0", Offset = "0x3B116B0", VA = "0x3B116B0", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170001D3")]
	public JToken this[int index]
	{
		[Token(Token = "0x6000B2F")]
		[Address(RVA = "0x3B117C0", Offset = "0x3B117C0", VA = "0x3B117C0", Slot = "27")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B30")]
		[Address(RVA = "0x3B117E0", Offset = "0x3B117E0", VA = "0x3B117E0", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x170001D4")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000B3B")]
		[Address(RVA = "0x3B11AA0", Offset = "0x3B11AA0", VA = "0x3B11AA0", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x3B10860", Offset = "0x3B10860", VA = "0x3B10860", Slot = "12")]
	[AsyncStateMachine(typeof(_003CWriteToAsync_003Ed__0))]
	public override Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x3B109A0", Offset = "0x3B109A0", VA = "0x3B109A0")]
	public new static Task<JArray> LoadAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x3B109B0", Offset = "0x3B109B0", VA = "0x3B109B0")]
	[AsyncStateMachine(typeof(_003CLoadAsync_003Ed__2))]
	public new static Task<JArray> LoadAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x3B10B10", Offset = "0x3B10B10", VA = "0x3B10B10")]
	public JArray()
	{
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x3B10B90", Offset = "0x3B10B90", VA = "0x3B10B90")]
	public JArray(JArray other)
	{
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x3B10C10", Offset = "0x3B10C10", VA = "0x3B10C10")]
	internal JArray(JArray other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x3B10CA0", Offset = "0x3B10CA0", VA = "0x3B10CA0")]
	public JArray(params object[] content)
	{
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x3B10D30", Offset = "0x3B10D30", VA = "0x3B10D30")]
	public JArray(object content)
	{
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x3B10DC0", Offset = "0x3B10DC0", VA = "0x3B10DC0", Slot = "14")]
	internal override bool DeepEquals(JToken node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x3B10E40", Offset = "0x3B10E40", VA = "0x3B10E40", Slot = "13")]
	internal override JToken CloneToken([Optional] JsonCloneSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x3B10F00", Offset = "0x3B10F00", VA = "0x3B10F00")]
	public new static JArray Load(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x3B10F10", Offset = "0x3B10F10", VA = "0x3B10F10")]
	public new static JArray Load(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x3B11120", Offset = "0x3B11120", VA = "0x3B11120")]
	public new static JArray Parse(string json)
	{
		return null;
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x3B11130", Offset = "0x3B11130", VA = "0x3B11130")]
	public new static JArray Parse(string json, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x3B11340", Offset = "0x3B11340", VA = "0x3B11340")]
	public new static JArray FromObject(object o)
	{
		return null;
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x3B11360", Offset = "0x3B11360", VA = "0x3B11360")]
	public new static JArray FromObject(object o, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x3B114D0", Offset = "0x3B114D0", VA = "0x3B114D0", Slot = "24")]
	public override void WriteTo(JsonWriter writer, params JsonConverter[] converters)
	{
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x3B11800", Offset = "0x3B11800", VA = "0x3B11800", Slot = "80")]
	internal override int IndexOfItem(JToken? item)
	{
		return default(int);
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x3B11860", Offset = "0x3B11860", VA = "0x3B11860", Slot = "92")]
	internal override void MergeItem(object content, JsonMergeSettings? settings)
	{
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x3B11930", Offset = "0x3B11930", VA = "0x3B11930", Slot = "29")]
	public int IndexOf(JToken item)
	{
		return default(int);
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x3B11950", Offset = "0x3B11950", VA = "0x3B11950", Slot = "30")]
	public void Insert(int index, JToken item)
	{
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x3B11970", Offset = "0x3B11970", VA = "0x3B11970", Slot = "31")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x3B11990", Offset = "0x3B11990", VA = "0x3B11990", Slot = "5")]
	public IEnumerator<JToken> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x3B11A20", Offset = "0x3B11A20", VA = "0x3B11A20", Slot = "34")]
	public void Add(JToken item)
	{
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x3B11A40", Offset = "0x3B11A40", VA = "0x3B11A40", Slot = "35")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x3B11A60", Offset = "0x3B11A60", VA = "0x3B11A60", Slot = "36")]
	public bool Contains(JToken item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x3B11A80", Offset = "0x3B11A80", VA = "0x3B11A80", Slot = "37")]
	public void CopyTo(JToken[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x3B11AB0", Offset = "0x3B11AB0", VA = "0x3B11AB0", Slot = "38")]
	public bool Remove(JToken item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x3B11AD0", Offset = "0x3B11AD0", VA = "0x3B11AD0", Slot = "25")]
	internal override int GetDeepHashCode()
	{
		return default(int);
	}
}
