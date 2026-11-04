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
		[Address(RVA = "0x1C8A550", Offset = "0x1C88B50", VA = "0x181C8A550", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B5A")]
		[Address(RVA = "0x1C8ABD0", Offset = "0x1C891D0", VA = "0x181C8ABD0", Slot = "5")]
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
		[Address(RVA = "0x1C8D220", Offset = "0x1C8B820", VA = "0x181C8D220", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000B5C")]
		[Address(RVA = "0x1C8D640", Offset = "0x1C8BC40", VA = "0x181C8D640", Slot = "5")]
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
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220", Slot = "75")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D6")]
	public string? Name
	{
		[Token(Token = "0x6000B48")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B49")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		set
		{
		}
	}

	[Token(Token = "0x170001D7")]
	public override JTokenType Type
	{
		[Token(Token = "0x6000B4A")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "15")]
		get
		{
			return default(JTokenType);
		}
	}

	[Token(Token = "0x170001D8")]
	public override JToken? this[object key]
	{
		[Token(Token = "0x6000B54")]
		[Address(RVA = "0x1C71080", Offset = "0x1C6F680", VA = "0x181C71080", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B55")]
		[Address(RVA = "0x1C711A0", Offset = "0x1C6F7A0", VA = "0x181C711A0", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x1C70AA0", Offset = "0x1C6F0A0", VA = "0x181C70AA0", Slot = "12")]
	[AsyncStateMachine(typeof(_003CWriteToAsync_003Ed__0))]
	public override Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x1C707C0", Offset = "0x1C6EDC0", VA = "0x181C707C0")]
	public new static Task<JConstructor> LoadAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x1C70670", Offset = "0x1C6EC70", VA = "0x181C70670")]
	[AsyncStateMachine(typeof(_003CLoadAsync_003Ed__2))]
	public new static Task<JConstructor> LoadAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x1C70610", Offset = "0x1C6EC10", VA = "0x181C70610", Slot = "80")]
	internal override int IndexOfItem(JToken? item)
	{
		return default(int);
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x1C70A00", Offset = "0x1C6F000", VA = "0x181C70A00", Slot = "92")]
	internal override void MergeItem(object content, JsonMergeSettings? settings)
	{
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x1C70FD0", Offset = "0x1C6F5D0", VA = "0x181C70FD0")]
	public JConstructor()
	{
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x1C70D00", Offset = "0x1C6F300", VA = "0x181C70D00")]
	public JConstructor(JConstructor other)
	{
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x1C70F30", Offset = "0x1C6F530", VA = "0x181C70F30")]
	internal JConstructor(JConstructor other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x1C70CC0", Offset = "0x1C6F2C0", VA = "0x181C70CC0")]
	public JConstructor(string name, params object[] content)
	{
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x1C70CC0", Offset = "0x1C6F2C0", VA = "0x181C70CC0")]
	public JConstructor(string name, object content)
	{
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x1C70DB0", Offset = "0x1C6F3B0", VA = "0x181C70DB0")]
	public JConstructor(string name)
	{
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x1C70520", Offset = "0x1C6EB20", VA = "0x181C70520", Slot = "14")]
	internal override bool DeepEquals(JToken node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x1C70450", Offset = "0x1C6EA50", VA = "0x181C70450", Slot = "13")]
	internal override JToken CloneToken([Optional] JsonCloneSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x1C70BD0", Offset = "0x1C6F1D0", VA = "0x181C70BD0", Slot = "24")]
	public override void WriteTo(JsonWriter writer, params JsonConverter[] converters)
	{
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x1C705C0", Offset = "0x1C6EBC0", VA = "0x181C705C0", Slot = "25")]
	internal override int GetDeepHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x1C707D0", Offset = "0x1C6EDD0", VA = "0x181C707D0")]
	public new static JConstructor Load(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x1C707E0", Offset = "0x1C6EDE0", VA = "0x181C707E0")]
	public new static JConstructor Load(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}
}
