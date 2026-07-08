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
		[Address(RVA = "0x3B15B70", Offset = "0x3B15B70", VA = "0x3B15B70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B5A")]
		[Address(RVA = "0x3B16560", Offset = "0x3B16560", VA = "0x3B16560", Slot = "5")]
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
		[Address(RVA = "0x3B165D0", Offset = "0x3B165D0", VA = "0x3B165D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B5C")]
		[Address(RVA = "0x3B16B70", Offset = "0x3B16B70", VA = "0x3B16B70", Slot = "5")]
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
		[Address(RVA = "0x3B12C50", Offset = "0x3B12C50", VA = "0x3B12C50", Slot = "75")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D6")]
	public string? Name
	{
		[Token(Token = "0x6000B48")]
		[Address(RVA = "0x3B14350", Offset = "0x3B14350", VA = "0x3B14350")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B49")]
		[Address(RVA = "0x3B14360", Offset = "0x3B14360", VA = "0x3B14360")]
		set
		{
		}
	}

	[Token(Token = "0x170001D7")]
	public override JTokenType Type
	{
		[Token(Token = "0x6000B4A")]
		[Address(RVA = "0x3B14370", Offset = "0x3B14370", VA = "0x3B14370", Slot = "15")]
		get
		{
			return default(JTokenType);
		}
	}

	[Token(Token = "0x170001D8")]
	public override JToken? this[object key]
	{
		[Token(Token = "0x6000B54")]
		[Address(RVA = "0x3B15080", Offset = "0x3B15080", VA = "0x3B15080", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B55")]
		[Address(RVA = "0x3B15180", Offset = "0x3B15180", VA = "0x3B15180", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x3B129C0", Offset = "0x3B129C0", VA = "0x3B129C0", Slot = "12")]
	[AsyncStateMachine(typeof(_003CWriteToAsync_003Ed__0))]
	public override Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x3B12B00", Offset = "0x3B12B00", VA = "0x3B12B00")]
	public new static Task<JConstructor> LoadAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x3B12B10", Offset = "0x3B12B10", VA = "0x3B12B10")]
	[AsyncStateMachine(typeof(_003CLoadAsync_003Ed__2))]
	public new static Task<JConstructor> LoadAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x3B12C60", Offset = "0x3B12C60", VA = "0x3B12C60", Slot = "80")]
	internal override int IndexOfItem(JToken? item)
	{
		return default(int);
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x3B12CC0", Offset = "0x3B12CC0", VA = "0x3B12CC0", Slot = "92")]
	internal override void MergeItem(object content, JsonMergeSettings? settings)
	{
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x3B14380", Offset = "0x3B14380", VA = "0x3B14380")]
	public JConstructor()
	{
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x3B144A0", Offset = "0x3B144A0", VA = "0x3B144A0")]
	public JConstructor(JConstructor other)
	{
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x3B14950", Offset = "0x3B14950", VA = "0x3B14950")]
	internal JConstructor(JConstructor other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x3B14A00", Offset = "0x3B14A00", VA = "0x3B14A00")]
	public JConstructor(string name, params object[] content)
	{
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x3B14A30", Offset = "0x3B14A30", VA = "0x3B14A30")]
	public JConstructor(string name, object content)
	{
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x3B14A60", Offset = "0x3B14A60", VA = "0x3B14A60")]
	public JConstructor(string name)
	{
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x3B14BC0", Offset = "0x3B14BC0", VA = "0x3B14BC0", Slot = "14")]
	internal override bool DeepEquals(JToken node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x3B14F50", Offset = "0x3B14F50", VA = "0x3B14F50", Slot = "13")]
	internal override JToken CloneToken([Optional] JsonCloneSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x3B14FA0", Offset = "0x3B14FA0", VA = "0x3B14FA0", Slot = "24")]
	public override void WriteTo(JsonWriter writer, params JsonConverter[] converters)
	{
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x3B15290", Offset = "0x3B15290", VA = "0x3B15290", Slot = "25")]
	internal override int GetDeepHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x3B15630", Offset = "0x3B15630", VA = "0x3B15630")]
	public new static JConstructor Load(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x3B15640", Offset = "0x3B15640", VA = "0x3B15640")]
	public new static JConstructor Load(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}
}
