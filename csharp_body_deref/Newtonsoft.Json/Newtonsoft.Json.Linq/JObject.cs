// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Dynamic;
using System.Linq.Expressions;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;
using Newtonsoft.Json.Utilities;

namespace Newtonsoft.Json.Linq;

[Token(Token = "0x200016C")]
public class JObject : JContainer, IDictionary<string, JToken>, ICollection<KeyValuePair<string, JToken>>, IEnumerable<KeyValuePair<string, JToken>>, IEnumerable, INotifyPropertyChanged, ICustomTypeDescriptor, INotifyPropertyChanging
{
	[Token(Token = "0x200016D")]
	private class JObjectDynamicProxy : DynamicProxy<JObject>
	{
		[Token(Token = "0x6000C1F")]
		[Address(RVA = "0x1C75D40", Offset = "0x1C74340", VA = "0x181C75D40", Slot = "11")]
		public override bool TryGetMember(JObject instance, GetMemberBinder binder, out object? result)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C20")]
		[Address(RVA = "0x1C75D90", Offset = "0x1C74390", VA = "0x181C75D90", Slot = "15")]
		public override bool TrySetMember(JObject instance, SetMemberBinder binder, object value)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C21")]
		[Address(RVA = "0x1C75BE0", Offset = "0x1C741E0", VA = "0x181C75BE0", Slot = "4")]
		public override IEnumerable<string> GetDynamicMemberNames(JObject instance)
		{
			return null;
		}

		[Token(Token = "0x6000C22")]
		[Address(RVA = "0x1C75E60", Offset = "0x1C74460", VA = "0x181C75E60")]
		public JObjectDynamicProxy()
		{
		}
	}

	[Token(Token = "0x2000171")]
	[CompilerGenerated]
	private sealed class _003CGetEnumerator_003Ed__64 : IEnumerator<KeyValuePair<string, JToken>>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40006CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40006D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private KeyValuePair<string, JToken?> _003C_003E2__current;

		[Token(Token = "0x40006D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JObject _003C_003E4__this;

		[Token(Token = "0x40006D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private IEnumerator<JToken> _003C_003E7__wrap1;

		[Token(Token = "0x170001F8")]
		private KeyValuePair<string, JToken> System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002ECurrent
		{
			[Token(Token = "0x6000C2F")]
			[Address(RVA = "0x8E7990", Offset = "0x8E5F90", VA = "0x1808E7990", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return default(KeyValuePair<string, JToken>);
			}
		}

		[Token(Token = "0x170001F9")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000C31")]
			[Address(RVA = "0x1C89E40", Offset = "0x1C88440", VA = "0x181C89E40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C2B")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__64(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000C2C")]
		[Address(RVA = "0x1C89E90", Offset = "0x1C88490", VA = "0x181C89E90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000C2D")]
		[Address(RVA = "0x1C89B80", Offset = "0x1C88180", VA = "0x181C89B80", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C2E")]
		[Address(RVA = "0x1C89F20", Offset = "0x1C88520", VA = "0x181C89F20")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000C30")]
		[Address(RVA = "0x1C89E00", Offset = "0x1C88400", VA = "0x181C89E00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000172")]
	[CompilerGenerated]
	private struct _003CLoadAsync_003Ed__2 : IAsyncStateMachine
	{
		[Token(Token = "0x40006D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40006D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<JObject> _003C_003Et__builder;

		[Token(Token = "0x40006D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonReader reader;

		[Token(Token = "0x40006D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40006D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public JsonLoadSettings settings;

		[Token(Token = "0x40006D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private JObject _003Co_003E5__2;

		[Token(Token = "0x40006D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x40006DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000C32")]
		[Address(RVA = "0x1C89F70", Offset = "0x1C88570", VA = "0x181C89F70", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000C33")]
		[Address(RVA = "0x1C8AB60", Offset = "0x1C89160", VA = "0x181C8AB60", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40006BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly JPropertyKeyedCollection _properties;

	[Token(Token = "0x40006C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[CompilerGenerated]
	private PropertyChangedEventHandler? m_PropertyChanged;

	[Token(Token = "0x40006C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[CompilerGenerated]
	private PropertyChangingEventHandler? m_PropertyChanging;

	[Token(Token = "0x170001F1")]
	protected override IList<JToken> ChildrenTokens
	{
		[Token(Token = "0x6000BDB")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570", Slot = "75")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F2")]
	public override JTokenType Type
	{
		[Token(Token = "0x6000BEE")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "15")]
		get
		{
			return default(JTokenType);
		}
	}

	[Token(Token = "0x170001F3")]
	public override JToken? this[object key]
	{
		[Token(Token = "0x6000BF3")]
		[Address(RVA = "0x1C78E90", Offset = "0x1C77490", VA = "0x181C78E90", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BF4")]
		[Address(RVA = "0x1C79280", Offset = "0x1C77880", VA = "0x181C79280", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170001F4")]
	public JToken? this[string propertyName]
	{
		[Token(Token = "0x6000BF5")]
		[Address(RVA = "0x1C78F90", Offset = "0x1C77590", VA = "0x181C78F90", Slot = "93")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BF6")]
		[Address(RVA = "0x1C79150", Offset = "0x1C77750", VA = "0x181C79150", Slot = "94")]
		set
		{
		}
	}

	[Token(Token = "0x170001F5")]
	private ICollection<string> System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EKeys
	{
		[Token(Token = "0x6000C03")]
		[Address(RVA = "0x1C77D20", Offset = "0x1C76320", VA = "0x181C77D20", Slot = "95")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F6")]
	private ICollection<JToken?> System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EValues
	{
		[Token(Token = "0x6000C06")]
		[Address(RVA = "0x1C77D80", Offset = "0x1C76380", VA = "0x181C77D80", Slot = "96")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F7")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000C0B")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "102")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000007")]
	public event PropertyChangedEventHandler? PropertyChanged
	{
		[Token(Token = "0x6000BDC")]
		[Address(RVA = "0x1C78D50", Offset = "0x1C77350", VA = "0x181C78D50", Slot = "109")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000BDD")]
		[Address(RVA = "0x1C79010", Offset = "0x1C77610", VA = "0x181C79010", Slot = "110")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000008")]
	public event PropertyChangingEventHandler? PropertyChanging
	{
		[Token(Token = "0x6000BDE")]
		[Address(RVA = "0x1C78DF0", Offset = "0x1C773F0", VA = "0x181C78DF0", Slot = "123")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000BDF")]
		[Address(RVA = "0x1C790B0", Offset = "0x1C776B0", VA = "0x181C790B0", Slot = "124")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x1C78820", Offset = "0x1C76E20", VA = "0x181C78820", Slot = "12")]
	public override Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x1C76A70", Offset = "0x1C75070", VA = "0x181C76A70")]
	public new static Task<JObject> LoadAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x1C76920", Offset = "0x1C74F20", VA = "0x181C76920")]
	[AsyncStateMachine(typeof(_003CLoadAsync_003Ed__2))]
	public new static Task<JObject> LoadAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x1C78CB0", Offset = "0x1C772B0", VA = "0x181C78CB0")]
	public JObject()
	{
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x1C78BC0", Offset = "0x1C771C0", VA = "0x181C78BC0")]
	public JObject(JObject other)
	{
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x1C78C40", Offset = "0x1C77240", VA = "0x181C78C40")]
	internal JObject(JObject other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x1C78B00", Offset = "0x1C77100", VA = "0x181C78B00")]
	public JObject(params object[] content)
	{
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x1C78B00", Offset = "0x1C77100", VA = "0x181C78B00")]
	public JObject(object content)
	{
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x1C760A0", Offset = "0x1C746A0", VA = "0x181C760A0", Slot = "14")]
	internal override bool DeepEquals(JToken node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x1C765E0", Offset = "0x1C74BE0", VA = "0x181C765E0", Slot = "80")]
	internal override int IndexOfItem(JToken? item)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x1C766A0", Offset = "0x1C74CA0", VA = "0x181C766A0", Slot = "81")]
	internal override bool InsertItem(int index, JToken? item, bool skipParentCheck, bool copyAnnotations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x1C78540", Offset = "0x1C76B40", VA = "0x181C78540", Slot = "90")]
	internal override void ValidateToken(JToken o, JToken? existing)
	{
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x1C76C90", Offset = "0x1C75290", VA = "0x181C76C90", Slot = "92")]
	internal override void MergeItem(object content, JsonMergeSettings? settings)
	{
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x1C76890", Offset = "0x1C74E90", VA = "0x181C76890")]
	private static bool IsNull(JToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x1C76720", Offset = "0x1C74D20", VA = "0x181C76720")]
	internal void InternalPropertyChanged(JProperty childProperty)
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x1C76860", Offset = "0x1C74E60", VA = "0x181C76860")]
	internal void InternalPropertyChanging(JProperty childProperty)
	{
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x1C75F10", Offset = "0x1C74510", VA = "0x181C75F10", Slot = "13")]
	internal override JToken CloneToken(JsonCloneSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x1C772A0", Offset = "0x1C758A0", VA = "0x181C772A0")]
	public IEnumerable<JProperty> Properties()
	{
		return null;
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x1C77650", Offset = "0x1C75C50", VA = "0x181C77650")]
	public JProperty Property(string name)
	{
		return null;
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x1C77460", Offset = "0x1C75A60", VA = "0x181C77460")]
	public JProperty Property(string name, StringComparison comparison)
	{
		return null;
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x1C772E0", Offset = "0x1C758E0", VA = "0x181C772E0")]
	public JEnumerable<JToken> PropertyValues()
	{
		return default(JEnumerable<JToken>);
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x1C76A80", Offset = "0x1C75080", VA = "0x181C76A80")]
	public new static JObject Load(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x1C76A90", Offset = "0x1C75090", VA = "0x181C76A90")]
	public new static JObject Load(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x1C77140", Offset = "0x1C75740", VA = "0x181C77140")]
	public new static JObject Parse(string json)
	{
		return null;
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x1C77150", Offset = "0x1C75750", VA = "0x181C77150")]
	public new static JObject Parse(string json, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x1C76130", Offset = "0x1C74730", VA = "0x181C76130")]
	public new static JObject FromObject(object o)
	{
		return null;
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x1C762B0", Offset = "0x1C748B0", VA = "0x181C762B0")]
	public new static JObject FromObject(object o, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x1C789F0", Offset = "0x1C76FF0", VA = "0x181C789F0", Slot = "24")]
	public override void WriteTo(JsonWriter writer, params JsonConverter[] converters)
	{
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x1C765A0", Offset = "0x1C74BA0", VA = "0x181C765A0")]
	public JToken? GetValue(string? propertyName)
	{
		return null;
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x1C76560", Offset = "0x1C74B60", VA = "0x181C76560")]
	public JToken? GetValue(string? propertyName, StringComparison comparison)
	{
		return null;
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x1C78360", Offset = "0x1C76960", VA = "0x181C78360")]
	public bool TryGetValue(string propertyName, StringComparison comparison, [NotNullWhen(true)] out JToken? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x1C75EA0", Offset = "0x1C744A0", VA = "0x181C75EA0", Slot = "98")]
	public void Add(string propertyName, JToken? value)
	{
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x1C75FB0", Offset = "0x1C745B0", VA = "0x181C75FB0", Slot = "97")]
	public bool ContainsKey(string propertyName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x1C77660", Offset = "0x1C75C60", VA = "0x181C77660", Slot = "99")]
	public bool Remove(string propertyName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x1C783B0", Offset = "0x1C769B0", VA = "0x181C783B0", Slot = "100")]
	public bool TryGetValue(string propertyName, [NotNullWhen(true)] out JToken? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x1C77700", Offset = "0x1C75D00", VA = "0x181C77700", Slot = "103")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002EAdd(KeyValuePair<string, JToken?> item)
	{
	}

	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x1C55640", Offset = "0x1C53C40", VA = "0x181C55640", Slot = "104")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002EClear()
	{
	}

	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x1C77790", Offset = "0x1C75D90", VA = "0x181C77790", Slot = "105")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002EContains(KeyValuePair<string, JToken?> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x1C77820", Offset = "0x1C75E20", VA = "0x181C77820", Slot = "106")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002ECopyTo(KeyValuePair<string, JToken?>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x1C77BB0", Offset = "0x1C761B0", VA = "0x181C77BB0", Slot = "107")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002ERemove(KeyValuePair<string, JToken?> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x1C55AE0", Offset = "0x1C540E0", VA = "0x181C55AE0", Slot = "25")]
	internal override int GetDeepHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x1C76430", Offset = "0x1C74A30", VA = "0x181C76430", Slot = "108")]
	[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__64))]
	public IEnumerator<KeyValuePair<string, JToken>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x1C77020", Offset = "0x1C75620", VA = "0x181C77020", Slot = "125")]
	protected virtual void OnPropertyChanged(string propertyName)
	{
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x1C770B0", Offset = "0x1C756B0", VA = "0x181C770B0", Slot = "126")]
	protected virtual void OnPropertyChanging(string propertyName)
	{
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x1C78220", Offset = "0x1C76820", VA = "0x181C78220", Slot = "120")]
	private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
	{
		return null;
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x1C77F00", Offset = "0x1C76500", VA = "0x181C77F00", Slot = "121")]
	private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[]? attributes)
	{
		return null;
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x1C77DC0", Offset = "0x1C763C0", VA = "0x181C77DC0", Slot = "111")]
	private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
	{
		return null;
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "112")]
	private string? System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
	{
		return null;
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "113")]
	private string? System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
	{
		return null;
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x1C77E10", Offset = "0x1C76410", VA = "0x181C77E10", Slot = "114")]
	private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
	{
		return null;
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "115")]
	private EventDescriptor? System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
	{
		return null;
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "116")]
	private PropertyDescriptor? System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
	{
		return null;
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "117")]
	private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x1C77E60", Offset = "0x1C76460", VA = "0x181C77E60", Slot = "119")]
	private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[]? attributes)
	{
		return null;
	}

	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x1C77EB0", Offset = "0x1C764B0", VA = "0x181C77EB0", Slot = "118")]
	private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
	{
		return null;
	}

	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x1C782E0", Offset = "0x1C768E0", VA = "0x181C782E0", Slot = "122")]
	private object? System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor? pd)
	{
		return null;
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x1C764A0", Offset = "0x1C74AA0", VA = "0x181C764A0", Slot = "26")]
	protected override DynamicMetaObject GetMetaObject(Expression parameter)
	{
		return null;
	}
}
