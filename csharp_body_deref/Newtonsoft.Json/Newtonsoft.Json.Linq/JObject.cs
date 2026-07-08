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
		[Address(RVA = "0x3B21BF0", Offset = "0x3B21BF0", VA = "0x3B21BF0", Slot = "11")]
		public override bool TryGetMember(JObject instance, GetMemberBinder binder, out object? result)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C20")]
		[Address(RVA = "0x3B21C90", Offset = "0x3B21C90", VA = "0x3B21C90", Slot = "15")]
		public override bool TrySetMember(JObject instance, SetMemberBinder binder, object value)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C21")]
		[Address(RVA = "0x3B21D50", Offset = "0x3B21D50", VA = "0x3B21D50", Slot = "4")]
		public override IEnumerable<string> GetDynamicMemberNames(JObject instance)
		{
			return null;
		}

		[Token(Token = "0x6000C22")]
		[Address(RVA = "0x3B21BB0", Offset = "0x3B21BB0", VA = "0x3B21BB0")]
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
			[Address(RVA = "0x3B22B70", Offset = "0x3B22B70", VA = "0x3B22B70", Slot = "4")]
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
			[Address(RVA = "0x3B22BC0", Offset = "0x3B22BC0", VA = "0x3B22BC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C2B")]
		[Address(RVA = "0x3B21250", Offset = "0x3B21250", VA = "0x3B21250")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__64(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000C2C")]
		[Address(RVA = "0x3B225B0", Offset = "0x3B225B0", VA = "0x3B225B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000C2D")]
		[Address(RVA = "0x3B22660", Offset = "0x3B22660", VA = "0x3B22660", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C2E")]
		[Address(RVA = "0x3B22AD0", Offset = "0x3B22AD0", VA = "0x3B22AD0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000C30")]
		[Address(RVA = "0x3B22B80", Offset = "0x3B22B80", VA = "0x3B22B80", Slot = "8")]
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
		[Address(RVA = "0x3B22C10", Offset = "0x3B22C10", VA = "0x3B22C10", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000C33")]
		[Address(RVA = "0x3B234B0", Offset = "0x3B234B0", VA = "0x3B234B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40006BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly JPropertyKeyedCollection _properties;

	[Token(Token = "0x170001F1")]
	protected override IList<JToken> ChildrenTokens
	{
		[Token(Token = "0x6000BDB")]
		[Address(RVA = "0x3B1DD80", Offset = "0x3B1DD80", VA = "0x3B1DD80", Slot = "75")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F2")]
	public override JTokenType Type
	{
		[Token(Token = "0x6000BEE")]
		[Address(RVA = "0x3B1F5E0", Offset = "0x3B1F5E0", VA = "0x3B1F5E0", Slot = "15")]
		get
		{
			return default(JTokenType);
		}
	}

	[Token(Token = "0x170001F3")]
	public override JToken? this[object key]
	{
		[Token(Token = "0x6000BF3")]
		[Address(RVA = "0x3B1F7B0", Offset = "0x3B1F7B0", VA = "0x3B1F7B0", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BF4")]
		[Address(RVA = "0x3B1F960", Offset = "0x3B1F960", VA = "0x3B1F960", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170001F4")]
	public JToken? this[string propertyName]
	{
		[Token(Token = "0x6000BF5")]
		[Address(RVA = "0x3B1F8F0", Offset = "0x3B1F8F0", VA = "0x3B1F8F0", Slot = "93")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BF6")]
		[Address(RVA = "0x3B1FA50", Offset = "0x3B1FA50", VA = "0x3B1FA50", Slot = "94")]
		set
		{
		}
	}

	[Token(Token = "0x170001F5")]
	private ICollection<string> System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EKeys
	{
		[Token(Token = "0x6000C03")]
		[Address(RVA = "0x3B207F0", Offset = "0x3B207F0", VA = "0x3B207F0", Slot = "95")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F6")]
	private ICollection<JToken?> System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EValues
	{
		[Token(Token = "0x6000C06")]
		[Address(RVA = "0x3B209E0", Offset = "0x3B209E0", VA = "0x3B209E0", Slot = "96")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F7")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000C0B")]
		[Address(RVA = "0x3B210E0", Offset = "0x3B210E0", VA = "0x3B210E0", Slot = "102")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000007")]
	public event PropertyChangedEventHandler? PropertyChanged
	{
		[Token(Token = "0x6000BDC")]
		[Address(RVA = "0x3B1DD90", Offset = "0x3B1DD90", VA = "0x3B1DD90", Slot = "109")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000BDD")]
		[Address(RVA = "0x3B1DE20", Offset = "0x3B1DE20", VA = "0x3B1DE20", Slot = "110")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000008")]
	public event PropertyChangingEventHandler? PropertyChanging
	{
		[Token(Token = "0x6000BDE")]
		[Address(RVA = "0x3B1DEB0", Offset = "0x3B1DEB0", VA = "0x3B1DEB0", Slot = "123")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000BDF")]
		[Address(RVA = "0x3B1DF40", Offset = "0x3B1DF40", VA = "0x3B1DF40", Slot = "124")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x3B1D920", Offset = "0x3B1D920", VA = "0x3B1D920", Slot = "12")]
	public override Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x3B1DC30", Offset = "0x3B1DC30", VA = "0x3B1DC30")]
	public new static Task<JObject> LoadAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x3B1DC40", Offset = "0x3B1DC40", VA = "0x3B1DC40")]
	[AsyncStateMachine(typeof(_003CLoadAsync_003Ed__2))]
	public new static Task<JObject> LoadAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x3B1A660", Offset = "0x3B1A660", VA = "0x3B1A660")]
	public JObject()
	{
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x3B1E050", Offset = "0x3B1E050", VA = "0x3B1E050")]
	public JObject(JObject other)
	{
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x3B1E130", Offset = "0x3B1E130", VA = "0x3B1E130")]
	internal JObject(JObject other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x3B1E210", Offset = "0x3B1E210", VA = "0x3B1E210")]
	public JObject(params object[] content)
	{
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x3B1E220", Offset = "0x3B1E220", VA = "0x3B1E220")]
	public JObject(object content)
	{
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x3B1E340", Offset = "0x3B1E340", VA = "0x3B1E340", Slot = "14")]
	internal override bool DeepEquals(JToken node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x3B1E7D0", Offset = "0x3B1E7D0", VA = "0x3B1E7D0", Slot = "80")]
	internal override int IndexOfItem(JToken? item)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x3B1E920", Offset = "0x3B1E920", VA = "0x3B1E920", Slot = "81")]
	internal override bool InsertItem(int index, JToken? item, bool skipParentCheck, bool copyAnnotations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x3B1E980", Offset = "0x3B1E980", VA = "0x3B1E980", Slot = "90")]
	internal override void ValidateToken(JToken o, JToken? existing)
	{
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x3B1EC40", Offset = "0x3B1EC40", VA = "0x3B1EC40", Slot = "92")]
	internal override void MergeItem(object content, JsonMergeSettings? settings)
	{
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x3B1F330", Offset = "0x3B1F330", VA = "0x3B1F330")]
	private static bool IsNull(JToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x3B1F430", Offset = "0x3B1F430", VA = "0x3B1F430")]
	internal void InternalPropertyChanged(JProperty childProperty)
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x3B1F560", Offset = "0x3B1F560", VA = "0x3B1F560")]
	internal void InternalPropertyChanging(JProperty childProperty)
	{
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x3B1F590", Offset = "0x3B1F590", VA = "0x3B1F590", Slot = "13")]
	internal override JToken CloneToken(JsonCloneSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x3B1F5F0", Offset = "0x3B1F5F0", VA = "0x3B1F5F0")]
	public IEnumerable<JProperty> Properties()
	{
		return null;
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x3B1F630", Offset = "0x3B1F630", VA = "0x3B1F630")]
	public JProperty Property(string name)
	{
		return null;
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x3B1A9D0", Offset = "0x3B1A9D0", VA = "0x3B1A9D0")]
	public JProperty Property(string name, StringComparison comparison)
	{
		return null;
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x3B1F640", Offset = "0x3B1F640", VA = "0x3B1F640")]
	public JEnumerable<JToken> PropertyValues()
	{
		return default(JEnumerable<JToken>);
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x3B1FB90", Offset = "0x3B1FB90", VA = "0x3B1FB90")]
	public new static JObject Load(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x3B1FBA0", Offset = "0x3B1FBA0", VA = "0x3B1FBA0")]
	public new static JObject Load(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x3B1FD60", Offset = "0x3B1FD60", VA = "0x3B1FD60")]
	public new static JObject Parse(string json)
	{
		return null;
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x3B1FD70", Offset = "0x3B1FD70", VA = "0x3B1FD70")]
	public new static JObject Parse(string json, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x3B1FF80", Offset = "0x3B1FF80", VA = "0x3B1FF80")]
	public new static JObject FromObject(object o)
	{
		return null;
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x3B1FFA0", Offset = "0x3B1FFA0", VA = "0x3B1FFA0")]
	public new static JObject FromObject(object o, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x3B20340", Offset = "0x3B20340", VA = "0x3B20340", Slot = "24")]
	public override void WriteTo(JsonWriter writer, params JsonConverter[] converters)
	{
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x3B20430", Offset = "0x3B20430", VA = "0x3B20430")]
	public JToken? GetValue(string? propertyName)
	{
		return null;
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x3B20460", Offset = "0x3B20460", VA = "0x3B20460")]
	public JToken? GetValue(string? propertyName, StringComparison comparison)
	{
		return null;
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x3B20490", Offset = "0x3B20490", VA = "0x3B20490")]
	public bool TryGetValue(string propertyName, StringComparison comparison, [NotNullWhen(true)] out JToken? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x3B1F2B0", Offset = "0x3B1F2B0", VA = "0x3B1F2B0", Slot = "98")]
	public void Add(string propertyName, JToken? value)
	{
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x3B206F0", Offset = "0x3B206F0", VA = "0x3B206F0", Slot = "97")]
	public bool ContainsKey(string propertyName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x3B20890", Offset = "0x3B20890", VA = "0x3B20890", Slot = "99")]
	public bool Remove(string propertyName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x3B20980", Offset = "0x3B20980", VA = "0x3B20980", Slot = "100")]
	public bool TryGetValue(string propertyName, [NotNullWhen(true)] out JToken? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x3B20A20", Offset = "0x3B20A20", VA = "0x3B20A20", Slot = "103")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002EAdd(KeyValuePair<string, JToken?> item)
	{
	}

	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x3B20AB0", Offset = "0x3B20AB0", VA = "0x3B20AB0", Slot = "104")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002EClear()
	{
	}

	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x3B20AD0", Offset = "0x3B20AD0", VA = "0x3B20AD0", Slot = "105")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002EContains(KeyValuePair<string, JToken?> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x3B20B40", Offset = "0x3B20B40", VA = "0x3B20B40", Slot = "106")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002ECopyTo(KeyValuePair<string, JToken?>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x3B210F0", Offset = "0x3B210F0", VA = "0x3B210F0", Slot = "107")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002ERemove(KeyValuePair<string, JToken?> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x3B21240", Offset = "0x3B21240", VA = "0x3B21240", Slot = "25")]
	internal override int GetDeepHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x3B1F240", Offset = "0x3B1F240", VA = "0x3B1F240", Slot = "108")]
	[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__64))]
	public IEnumerator<KeyValuePair<string, JToken>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x3B21270", Offset = "0x3B21270", VA = "0x3B21270", Slot = "125")]
	protected virtual void OnPropertyChanged(string propertyName)
	{
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x3B212F0", Offset = "0x3B212F0", VA = "0x3B212F0", Slot = "126")]
	protected virtual void OnPropertyChanging(string propertyName)
	{
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x3B21370", Offset = "0x3B21370", VA = "0x3B21370", Slot = "120")]
	private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
	{
		return null;
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x3B21410", Offset = "0x3B21410", VA = "0x3B21410", Slot = "121")]
	private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[]? attributes)
	{
		return null;
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x3B218A0", Offset = "0x3B218A0", VA = "0x3B218A0", Slot = "111")]
	private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
	{
		return null;
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x3B21910", Offset = "0x3B21910", VA = "0x3B21910", Slot = "112")]
	private string? System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
	{
		return null;
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x3B21920", Offset = "0x3B21920", VA = "0x3B21920", Slot = "113")]
	private string? System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
	{
		return null;
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x3B21930", Offset = "0x3B21930", VA = "0x3B21930", Slot = "114")]
	private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
	{
		return null;
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x3B21970", Offset = "0x3B21970", VA = "0x3B21970", Slot = "115")]
	private EventDescriptor? System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
	{
		return null;
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x3B21980", Offset = "0x3B21980", VA = "0x3B21980", Slot = "116")]
	private PropertyDescriptor? System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
	{
		return null;
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x3B21990", Offset = "0x3B21990", VA = "0x3B21990", Slot = "117")]
	private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x3B219A0", Offset = "0x3B219A0", VA = "0x3B219A0", Slot = "119")]
	private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[]? attributes)
	{
		return null;
	}

	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x3B21A10", Offset = "0x3B21A10", VA = "0x3B21A10", Slot = "118")]
	private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
	{
		return null;
	}

	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x3B21A80", Offset = "0x3B21A80", VA = "0x3B21A80", Slot = "122")]
	private object? System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor? pd)
	{
		return null;
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x3B21AF0", Offset = "0x3B21AF0", VA = "0x3B21AF0", Slot = "26")]
	protected override DynamicMetaObject GetMetaObject(Expression parameter)
	{
		return null;
	}
}
