// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x55FD2B0", Offset = "0x55FC2B0", VA = "0x55FD2B0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B3F")]
		[Address(RVA = "0x55FD970", Offset = "0x55FC970", VA = "0x55FD970", Slot = "5")]
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
		[Address(RVA = "0x55FD9E0", Offset = "0x55FC9E0", VA = "0x55FD9E0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B41")]
		[Address(RVA = "0x55FDE40", Offset = "0x55FCE40", VA = "0x55FDE40", Slot = "5")]
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
		[Address(RVA = "0x55FC330", Offset = "0x55FB330", VA = "0x55FC330", Slot = "75")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D1")]
	public override JTokenType Type
	{
		[Token(Token = "0x6000B1E")]
		[Address(RVA = "0x55FC340", Offset = "0x55FB340", VA = "0x55FC340", Slot = "15")]
		get
		{
			return default(JTokenType);
		}
	}

	[Token(Token = "0x170001D2")]
	public override JToken? this[object key]
	{
		[Token(Token = "0x6000B2D")]
		[Address(RVA = "0x55FCD90", Offset = "0x55FBD90", VA = "0x55FCD90", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B2E")]
		[Address(RVA = "0x55FCE90", Offset = "0x55FBE90", VA = "0x55FCE90", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170001D3")]
	public JToken this[int index]
	{
		[Token(Token = "0x6000B2F")]
		[Address(RVA = "0x55FCFA0", Offset = "0x55FBFA0", VA = "0x55FCFA0", Slot = "27")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B30")]
		[Address(RVA = "0x55FCFC0", Offset = "0x55FBFC0", VA = "0x55FCFC0", Slot = "28")]
		set
		{
		}
	}

	[Token(Token = "0x170001D4")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000B3B")]
		[Address(RVA = "0x55FD270", Offset = "0x55FC270", VA = "0x55FD270", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x55FC0B0", Offset = "0x55FB0B0", VA = "0x55FC0B0", Slot = "12")]
	[AsyncStateMachine(typeof(_003CWriteToAsync_003Ed__0))]
	public override Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x55FC1E0", Offset = "0x55FB1E0", VA = "0x55FC1E0")]
	public new static Task<JArray> LoadAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x55FC1F0", Offset = "0x55FB1F0", VA = "0x55FC1F0")]
	[AsyncStateMachine(typeof(_003CLoadAsync_003Ed__2))]
	public new static Task<JArray> LoadAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x55FC350", Offset = "0x55FB350", VA = "0x55FC350")]
	public JArray()
	{
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x55FC3D0", Offset = "0x55FB3D0", VA = "0x55FC3D0")]
	public JArray(JArray other)
	{
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x55FC450", Offset = "0x55FB450", VA = "0x55FC450")]
	internal JArray(JArray other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x55FC4E0", Offset = "0x55FB4E0", VA = "0x55FC4E0")]
	public JArray(params object[] content)
	{
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x55FC570", Offset = "0x55FB570", VA = "0x55FC570")]
	public JArray(object content)
	{
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x55FC600", Offset = "0x55FB600", VA = "0x55FC600", Slot = "14")]
	internal override bool DeepEquals(JToken node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x55FC680", Offset = "0x55FB680", VA = "0x55FC680", Slot = "13")]
	internal override JToken CloneToken([Optional] JsonCloneSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x55FC740", Offset = "0x55FB740", VA = "0x55FC740")]
	public new static JArray Load(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x55FC750", Offset = "0x55FB750", VA = "0x55FC750")]
	public new static JArray Load(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x55FC960", Offset = "0x55FB960", VA = "0x55FC960")]
	public new static JArray Parse(string json)
	{
		return null;
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x55FC970", Offset = "0x55FB970", VA = "0x55FC970")]
	public new static JArray Parse(string json, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x55FCB20", Offset = "0x55FBB20", VA = "0x55FCB20")]
	public new static JArray FromObject(object o)
	{
		return null;
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x55FCB40", Offset = "0x55FBB40", VA = "0x55FCB40")]
	public new static JArray FromObject(object o, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x55FCCB0", Offset = "0x55FBCB0", VA = "0x55FCCB0", Slot = "24")]
	public override void WriteTo(JsonWriter writer, params JsonConverter[] converters)
	{
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x55FCFE0", Offset = "0x55FBFE0", VA = "0x55FCFE0", Slot = "80")]
	internal override int IndexOfItem(JToken? item)
	{
		return default(int);
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x55FD040", Offset = "0x55FC040", VA = "0x55FD040", Slot = "92")]
	internal override void MergeItem(object content, JsonMergeSettings? settings)
	{
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x55FD110", Offset = "0x55FC110", VA = "0x55FD110", Slot = "29")]
	public int IndexOf(JToken item)
	{
		return default(int);
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x55FD130", Offset = "0x55FC130", VA = "0x55FD130", Slot = "30")]
	public void Insert(int index, JToken item)
	{
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x55FD150", Offset = "0x55FC150", VA = "0x55FD150", Slot = "31")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x55FD170", Offset = "0x55FC170", VA = "0x55FD170", Slot = "5")]
	public IEnumerator<JToken> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x55FD1F0", Offset = "0x55FC1F0", VA = "0x55FD1F0", Slot = "34")]
	public void Add(JToken item)
	{
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x55FD210", Offset = "0x55FC210", VA = "0x55FD210", Slot = "35")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x55FD230", Offset = "0x55FC230", VA = "0x55FD230", Slot = "36")]
	public bool Contains(JToken item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x55FD250", Offset = "0x55FC250", VA = "0x55FD250", Slot = "37")]
	public void CopyTo(JToken[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x55FD280", Offset = "0x55FC280", VA = "0x55FD280", Slot = "38")]
	public bool Remove(JToken item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x55FD2A0", Offset = "0x55FC2A0", VA = "0x55FD2A0", Slot = "25")]
	internal override int GetDeepHashCode()
	{
		return default(int);
	}
}
