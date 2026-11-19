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
		[Address(RVA = "0x560BD90", Offset = "0x560AD90", VA = "0x560BD90", Slot = "11")]
		public override bool TryGetMember(JObject instance, GetMemberBinder binder, out object? result)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C20")]
		[Address(RVA = "0x560BE30", Offset = "0x560AE30", VA = "0x560BE30", Slot = "15")]
		public override bool TrySetMember(JObject instance, SetMemberBinder binder, object value)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C21")]
		[Address(RVA = "0x560BEF0", Offset = "0x560AEF0", VA = "0x560BEF0", Slot = "4")]
		public override IEnumerable<string> GetDynamicMemberNames(JObject instance)
		{
			return null;
		}

		[Token(Token = "0x6000C22")]
		[Address(RVA = "0x560BD50", Offset = "0x560AD50", VA = "0x560BD50")]
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
			[Address(RVA = "0x560CB40", Offset = "0x560BB40", VA = "0x560CB40", Slot = "4")]
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
			[Address(RVA = "0x560CB90", Offset = "0x560BB90", VA = "0x560CB90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C2B")]
		[Address(RVA = "0x560B440", Offset = "0x560A440", VA = "0x560B440")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__64(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000C2C")]
		[Address(RVA = "0x560C640", Offset = "0x560B640", VA = "0x560C640", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000C2D")]
		[Address(RVA = "0x560C6F0", Offset = "0x560B6F0", VA = "0x560C6F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C2E")]
		[Address(RVA = "0x560CAA0", Offset = "0x560BAA0", VA = "0x560CAA0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000C30")]
		[Address(RVA = "0x560CB50", Offset = "0x560BB50", VA = "0x560CB50", Slot = "8")]
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
		[Address(RVA = "0x560CBE0", Offset = "0x560BBE0", VA = "0x560CBE0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000C33")]
		[Address(RVA = "0x560D290", Offset = "0x560C290", VA = "0x560D290", Slot = "5")]
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
		[Address(RVA = "0x56081F0", Offset = "0x56071F0", VA = "0x56081F0", Slot = "75")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F2")]
	public override JTokenType Type
	{
		[Token(Token = "0x6000BEE")]
		[Address(RVA = "0x5609930", Offset = "0x5608930", VA = "0x5609930", Slot = "15")]
		get
		{
			return default(JTokenType);
		}
	}

	[Token(Token = "0x170001F3")]
	public override JToken? this[object key]
	{
		[Token(Token = "0x6000BF3")]
		[Address(RVA = "0x5609B00", Offset = "0x5608B00", VA = "0x5609B00", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BF4")]
		[Address(RVA = "0x5609CB0", Offset = "0x5608CB0", VA = "0x5609CB0", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170001F4")]
	public JToken? this[string propertyName]
	{
		[Token(Token = "0x6000BF5")]
		[Address(RVA = "0x5609C40", Offset = "0x5608C40", VA = "0x5609C40", Slot = "93")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BF6")]
		[Address(RVA = "0x5609DA0", Offset = "0x5608DA0", VA = "0x5609DA0", Slot = "94")]
		set
		{
		}
	}

	[Token(Token = "0x170001F5")]
	private ICollection<string> System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EKeys
	{
		[Token(Token = "0x6000C03")]
		[Address(RVA = "0x560AA60", Offset = "0x5609A60", VA = "0x560AA60", Slot = "95")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F6")]
	private ICollection<JToken?> System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EValues
	{
		[Token(Token = "0x6000C06")]
		[Address(RVA = "0x560AC40", Offset = "0x5609C40", VA = "0x560AC40", Slot = "96")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F7")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000C0B")]
		[Address(RVA = "0x560B2D0", Offset = "0x560A2D0", VA = "0x560B2D0", Slot = "102")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000007")]
	public event PropertyChangedEventHandler? PropertyChanged
	{
		[Token(Token = "0x6000BDC")]
		[Address(RVA = "0x5608200", Offset = "0x5607200", VA = "0x5608200", Slot = "109")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000BDD")]
		[Address(RVA = "0x5608290", Offset = "0x5607290", VA = "0x5608290", Slot = "110")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000008")]
	public event PropertyChangingEventHandler? PropertyChanging
	{
		[Token(Token = "0x6000BDE")]
		[Address(RVA = "0x5608320", Offset = "0x5607320", VA = "0x5608320", Slot = "123")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000BDF")]
		[Address(RVA = "0x56083B0", Offset = "0x56073B0", VA = "0x56083B0", Slot = "124")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x5607DA0", Offset = "0x5606DA0", VA = "0x5607DA0", Slot = "12")]
	public override Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x56080A0", Offset = "0x56070A0", VA = "0x56080A0")]
	public new static Task<JObject> LoadAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x56080B0", Offset = "0x56070B0", VA = "0x56080B0")]
	[AsyncStateMachine(typeof(_003CLoadAsync_003Ed__2))]
	public new static Task<JObject> LoadAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x5605150", Offset = "0x5604150", VA = "0x5605150")]
	public JObject()
	{
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x56084C0", Offset = "0x56074C0", VA = "0x56084C0")]
	public JObject(JObject other)
	{
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x56085A0", Offset = "0x56075A0", VA = "0x56085A0")]
	internal JObject(JObject other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x5608680", Offset = "0x5607680", VA = "0x5608680")]
	public JObject(params object[] content)
	{
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x5608690", Offset = "0x5607690", VA = "0x5608690")]
	public JObject(object content)
	{
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x56087B0", Offset = "0x56077B0", VA = "0x56087B0", Slot = "14")]
	internal override bool DeepEquals(JToken node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x5608BB0", Offset = "0x5607BB0", VA = "0x5608BB0", Slot = "80")]
	internal override int IndexOfItem(JToken? item)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x5608D00", Offset = "0x5607D00", VA = "0x5608D00", Slot = "81")]
	internal override bool InsertItem(int index, JToken? item, bool skipParentCheck, bool copyAnnotations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x5608D60", Offset = "0x5607D60", VA = "0x5608D60", Slot = "90")]
	internal override void ValidateToken(JToken o, JToken? existing)
	{
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x5609020", Offset = "0x5608020", VA = "0x5609020", Slot = "92")]
	internal override void MergeItem(object content, JsonMergeSettings? settings)
	{
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x5609680", Offset = "0x5608680", VA = "0x5609680")]
	private static bool IsNull(JToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x5609780", Offset = "0x5608780", VA = "0x5609780")]
	internal void InternalPropertyChanged(JProperty childProperty)
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x56098B0", Offset = "0x56088B0", VA = "0x56098B0")]
	internal void InternalPropertyChanging(JProperty childProperty)
	{
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x56098E0", Offset = "0x56088E0", VA = "0x56098E0", Slot = "13")]
	internal override JToken CloneToken(JsonCloneSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x5609940", Offset = "0x5608940", VA = "0x5609940")]
	public IEnumerable<JProperty> Properties()
	{
		return null;
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x5609980", Offset = "0x5608980", VA = "0x5609980")]
	public JProperty Property(string name)
	{
		return null;
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x5605490", Offset = "0x5604490", VA = "0x5605490")]
	public JProperty Property(string name, StringComparison comparison)
	{
		return null;
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x5609990", Offset = "0x5608990", VA = "0x5609990")]
	public JEnumerable<JToken> PropertyValues()
	{
		return default(JEnumerable<JToken>);
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x5609EE0", Offset = "0x5608EE0", VA = "0x5609EE0")]
	public new static JObject Load(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x5609EF0", Offset = "0x5608EF0", VA = "0x5609EF0")]
	public new static JObject Load(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x560A0B0", Offset = "0x56090B0", VA = "0x560A0B0")]
	public new static JObject Parse(string json)
	{
		return null;
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x560A0C0", Offset = "0x56090C0", VA = "0x560A0C0")]
	public new static JObject Parse(string json, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x560A270", Offset = "0x5609270", VA = "0x560A270")]
	public new static JObject FromObject(object o)
	{
		return null;
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x560A290", Offset = "0x5609290", VA = "0x560A290")]
	public new static JObject FromObject(object o, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x560A5C0", Offset = "0x56095C0", VA = "0x560A5C0", Slot = "24")]
	public override void WriteTo(JsonWriter writer, params JsonConverter[] converters)
	{
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x560A6B0", Offset = "0x56096B0", VA = "0x560A6B0")]
	public JToken? GetValue(string? propertyName)
	{
		return null;
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x560A6E0", Offset = "0x56096E0", VA = "0x560A6E0")]
	public JToken? GetValue(string? propertyName, StringComparison comparison)
	{
		return null;
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x560A710", Offset = "0x5609710", VA = "0x560A710")]
	public bool TryGetValue(string propertyName, StringComparison comparison, [NotNullWhen(true)] out JToken? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x5609600", Offset = "0x5608600", VA = "0x5609600", Slot = "98")]
	public void Add(string propertyName, JToken? value)
	{
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x560A960", Offset = "0x5609960", VA = "0x560A960", Slot = "97")]
	public bool ContainsKey(string propertyName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x560AB00", Offset = "0x5609B00", VA = "0x560AB00", Slot = "99")]
	public bool Remove(string propertyName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x560ABF0", Offset = "0x5609BF0", VA = "0x560ABF0", Slot = "100")]
	public bool TryGetValue(string propertyName, [NotNullWhen(true)] out JToken? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x560AC80", Offset = "0x5609C80", VA = "0x560AC80", Slot = "103")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002EAdd(KeyValuePair<string, JToken?> item)
	{
	}

	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x560AD10", Offset = "0x5609D10", VA = "0x560AD10", Slot = "104")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002EClear()
	{
	}

	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x560AD30", Offset = "0x5609D30", VA = "0x560AD30", Slot = "105")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002EContains(KeyValuePair<string, JToken?> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x560ADA0", Offset = "0x5609DA0", VA = "0x560ADA0", Slot = "106")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002ECopyTo(KeyValuePair<string, JToken?>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x560B2E0", Offset = "0x560A2E0", VA = "0x560B2E0", Slot = "107")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002ERemove(KeyValuePair<string, JToken?> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x560B430", Offset = "0x560A430", VA = "0x560B430", Slot = "25")]
	internal override int GetDeepHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x5609590", Offset = "0x5608590", VA = "0x5609590", Slot = "108")]
	[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__64))]
	public IEnumerator<KeyValuePair<string, JToken>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x560B460", Offset = "0x560A460", VA = "0x560B460", Slot = "125")]
	protected virtual void OnPropertyChanged(string propertyName)
	{
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x560B4E0", Offset = "0x560A4E0", VA = "0x560B4E0", Slot = "126")]
	protected virtual void OnPropertyChanging(string propertyName)
	{
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x560B560", Offset = "0x560A560", VA = "0x560B560", Slot = "120")]
	private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
	{
		return null;
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x560B600", Offset = "0x560A600", VA = "0x560B600", Slot = "121")]
	private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[]? attributes)
	{
		return null;
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x560BA40", Offset = "0x560AA40", VA = "0x560BA40", Slot = "111")]
	private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
	{
		return null;
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x560BAB0", Offset = "0x560AAB0", VA = "0x560BAB0", Slot = "112")]
	private string? System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
	{
		return null;
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x560BAC0", Offset = "0x560AAC0", VA = "0x560BAC0", Slot = "113")]
	private string? System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
	{
		return null;
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x560BAD0", Offset = "0x560AAD0", VA = "0x560BAD0", Slot = "114")]
	private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
	{
		return null;
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x560BB10", Offset = "0x560AB10", VA = "0x560BB10", Slot = "115")]
	private EventDescriptor? System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
	{
		return null;
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x560BB20", Offset = "0x560AB20", VA = "0x560BB20", Slot = "116")]
	private PropertyDescriptor? System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
	{
		return null;
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x560BB30", Offset = "0x560AB30", VA = "0x560BB30", Slot = "117")]
	private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x560BB40", Offset = "0x560AB40", VA = "0x560BB40", Slot = "119")]
	private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[]? attributes)
	{
		return null;
	}

	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x560BBB0", Offset = "0x560ABB0", VA = "0x560BBB0", Slot = "118")]
	private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
	{
		return null;
	}

	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x560BC20", Offset = "0x560AC20", VA = "0x560BC20", Slot = "122")]
	private object? System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor? pd)
	{
		return null;
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x560BC90", Offset = "0x560AC90", VA = "0x560BC90", Slot = "26")]
	protected override DynamicMetaObject GetMetaObject(Expression parameter)
	{
		return null;
	}
}
