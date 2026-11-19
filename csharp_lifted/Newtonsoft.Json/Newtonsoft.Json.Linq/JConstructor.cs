// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JConstructor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq;

[Token(Token = "0x2000164")]
public class JConstructor : JContainer
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000165")]
	[CompilerGenerated]
	private struct _003CLoadAsync_003Ed__2 : IAsyncStateMachine
	{
		[Token(Token = "0x400068C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400068D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<JConstructor> _003C_003Et__builder;

		[Token(Token = "0x400068E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonReader reader;

		[Token(Token = "0x400068F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000690")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public JsonLoadSettings settings;

		[Token(Token = "0x4000691")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private JConstructor _003Cc_003E5__2;

		[Token(Token = "0x4000692")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000693")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000B59")]
		[Address(RVA = "0x5600B00", Offset = "0x55FFB00", VA = "0x5600B00", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B5A")]
		[Address(RVA = "0x56012F0", Offset = "0x56002F0", VA = "0x56012F0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000166")]
	[CompilerGenerated]
	private struct _003CWriteToAsync_003Ed__0 : IAsyncStateMachine
	{
		[Token(Token = "0x4000694")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000695")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000696")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonWriter writer;

		[Token(Token = "0x4000697")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JConstructor _003C_003E4__this;

		[Token(Token = "0x4000698")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000699")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public JsonConverter[] converters;

		[Token(Token = "0x400069A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x400069B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x6000B5B")]
		[Address(RVA = "0x5601360", Offset = "0x5600360", VA = "0x5601360", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B5C")]
		[Address(RVA = "0x5601800", Offset = "0x5600800", VA = "0x5601800", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x400068A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string? _name;

	[Token(Token = "0x400068B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly List<JToken> _values;

	[Token(Token = "0x170001D5")]
	protected override IList<JToken> ChildrenTokens
	{
		[Token(Token = "0x6000B45")]
		[Address(RVA = "0x55FE120", Offset = "0x55FD120", VA = "0x55FE120", Slot = "75")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D6")]
	public string? Name
	{
		[Token(Token = "0x6000B48")]
		[Address(RVA = "0x55FF340", Offset = "0x55FE340", VA = "0x55FF340")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B49")]
		[Address(RVA = "0x55FF350", Offset = "0x55FE350", VA = "0x55FF350")]
		set
		{
		}
	}

	[Token(Token = "0x170001D7")]
	public override JTokenType Type
	{
		[Token(Token = "0x6000B4A")]
		[Address(RVA = "0x55FF360", Offset = "0x55FE360", VA = "0x55FF360", Slot = "15")]
		get
		{
			return default(JTokenType);
		}
	}

	[Token(Token = "0x170001D8")]
	public override JToken? this[object key]
	{
		[Token(Token = "0x6000B54")]
		[Address(RVA = "0x5600050", Offset = "0x55FF050", VA = "0x5600050", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B55")]
		[Address(RVA = "0x5600150", Offset = "0x55FF150", VA = "0x5600150", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x55FDEA0", Offset = "0x55FCEA0", VA = "0x55FDEA0", Slot = "12")]
	[AsyncStateMachine(typeof(_003CWriteToAsync_003Ed__0))]
	public override Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x55FDFD0", Offset = "0x55FCFD0", VA = "0x55FDFD0")]
	public new static Task<JConstructor> LoadAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x55FDFE0", Offset = "0x55FCFE0", VA = "0x55FDFE0")]
	[AsyncStateMachine(typeof(_003CLoadAsync_003Ed__2))]
	public new static Task<JConstructor> LoadAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x55FE130", Offset = "0x55FD130", VA = "0x55FE130", Slot = "80")]
	internal override int IndexOfItem(JToken? item)
	{
		return default(int);
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x55FE190", Offset = "0x55FD190", VA = "0x55FE190", Slot = "92")]
	internal override void MergeItem(object content, JsonMergeSettings? settings)
	{
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x55FF370", Offset = "0x55FE370", VA = "0x55FF370")]
	public JConstructor()
	{
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x55FF490", Offset = "0x55FE490", VA = "0x55FF490")]
	public JConstructor(JConstructor other)
	{
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x55FF8F0", Offset = "0x55FE8F0", VA = "0x55FF8F0")]
	internal JConstructor(JConstructor other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x55FF9A0", Offset = "0x55FE9A0", VA = "0x55FF9A0")]
	public JConstructor(string name, params object[] content)
	{
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x55FF9D0", Offset = "0x55FE9D0", VA = "0x55FF9D0")]
	public JConstructor(string name, object content)
	{
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x55FFA00", Offset = "0x55FEA00", VA = "0x55FFA00")]
	public JConstructor(string name)
	{
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x55FFB60", Offset = "0x55FEB60", VA = "0x55FFB60", Slot = "14")]
	internal override bool DeepEquals(JToken node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x55FFF10", Offset = "0x55FEF10", VA = "0x55FFF10", Slot = "13")]
	internal override JToken CloneToken([Optional] JsonCloneSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x55FFF60", Offset = "0x55FEF60", VA = "0x55FFF60", Slot = "24")]
	public override void WriteTo(JsonWriter writer, params JsonConverter[] converters)
	{
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x5600260", Offset = "0x55FF260", VA = "0x5600260", Slot = "25")]
	internal override int GetDeepHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x56005C0", Offset = "0x55FF5C0", VA = "0x56005C0")]
	public new static JConstructor Load(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x56005D0", Offset = "0x55FF5D0", VA = "0x56005D0")]
	public new static JConstructor Load(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}
}
