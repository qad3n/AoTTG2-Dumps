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
		[Address(RVA = "0x3E17540", Offset = "0x3E17540", VA = "0x3E17540", Slot = "11")]
		public override bool TryGetMember(JObject instance, GetMemberBinder binder, out object? result)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C20")]
		[Address(RVA = "0x3E175E0", Offset = "0x3E175E0", VA = "0x3E175E0", Slot = "15")]
		public override bool TrySetMember(JObject instance, SetMemberBinder binder, object value)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C21")]
		[Address(RVA = "0x3E176A0", Offset = "0x3E176A0", VA = "0x3E176A0", Slot = "4")]
		public override IEnumerable<string> GetDynamicMemberNames(JObject instance)
		{
			return null;
		}

		[Token(Token = "0x6000C22")]
		[Address(RVA = "0x3E17500", Offset = "0x3E17500", VA = "0x3E17500")]
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
			[Address(RVA = "0x3E184C0", Offset = "0x3E184C0", VA = "0x3E184C0", Slot = "4")]
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
			[Address(RVA = "0x3E18510", Offset = "0x3E18510", VA = "0x3E18510", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C2B")]
		[Address(RVA = "0x3E16BA0", Offset = "0x3E16BA0", VA = "0x3E16BA0")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__64(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000C2C")]
		[Address(RVA = "0x3E17F00", Offset = "0x3E17F00", VA = "0x3E17F00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000C2D")]
		[Address(RVA = "0x3E17FB0", Offset = "0x3E17FB0", VA = "0x3E17FB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C2E")]
		[Address(RVA = "0x3E18420", Offset = "0x3E18420", VA = "0x3E18420")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000C30")]
		[Address(RVA = "0x3E184D0", Offset = "0x3E184D0", VA = "0x3E184D0", Slot = "8")]
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
		[Address(RVA = "0x3E18560", Offset = "0x3E18560", VA = "0x3E18560", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000C33")]
		[Address(RVA = "0x3E18E00", Offset = "0x3E18E00", VA = "0x3E18E00", Slot = "5")]
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
		[Address(RVA = "0x3E136D0", Offset = "0x3E136D0", VA = "0x3E136D0", Slot = "75")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F2")]
	public override JTokenType Type
	{
		[Token(Token = "0x6000BEE")]
		[Address(RVA = "0x3E14F30", Offset = "0x3E14F30", VA = "0x3E14F30", Slot = "15")]
		get
		{
			return default(JTokenType);
		}
	}

	[Token(Token = "0x170001F3")]
	public override JToken? this[object key]
	{
		[Token(Token = "0x6000BF3")]
		[Address(RVA = "0x3E15100", Offset = "0x3E15100", VA = "0x3E15100", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BF4")]
		[Address(RVA = "0x3E152B0", Offset = "0x3E152B0", VA = "0x3E152B0", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170001F4")]
	public JToken? this[string propertyName]
	{
		[Token(Token = "0x6000BF5")]
		[Address(RVA = "0x3E15240", Offset = "0x3E15240", VA = "0x3E15240", Slot = "93")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BF6")]
		[Address(RVA = "0x3E153A0", Offset = "0x3E153A0", VA = "0x3E153A0", Slot = "94")]
		set
		{
		}
	}

	[Token(Token = "0x170001F5")]
	private ICollection<string> System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EKeys
	{
		[Token(Token = "0x6000C03")]
		[Address(RVA = "0x3E16140", Offset = "0x3E16140", VA = "0x3E16140", Slot = "95")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F6")]
	private ICollection<JToken?> System_002ECollections_002EGeneric_002EIDictionary_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EValues
	{
		[Token(Token = "0x6000C06")]
		[Address(RVA = "0x3E16330", Offset = "0x3E16330", VA = "0x3E16330", Slot = "96")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F7")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000C0B")]
		[Address(RVA = "0x3E16A30", Offset = "0x3E16A30", VA = "0x3E16A30", Slot = "102")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000007")]
	public event PropertyChangedEventHandler? PropertyChanged
	{
		[Token(Token = "0x6000BDC")]
		[Address(RVA = "0x3E136E0", Offset = "0x3E136E0", VA = "0x3E136E0", Slot = "109")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000BDD")]
		[Address(RVA = "0x3E13770", Offset = "0x3E13770", VA = "0x3E13770", Slot = "110")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000008")]
	public event PropertyChangingEventHandler? PropertyChanging
	{
		[Token(Token = "0x6000BDE")]
		[Address(RVA = "0x3E13800", Offset = "0x3E13800", VA = "0x3E13800", Slot = "123")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000BDF")]
		[Address(RVA = "0x3E13890", Offset = "0x3E13890", VA = "0x3E13890", Slot = "124")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x3E13270", Offset = "0x3E13270", VA = "0x3E13270", Slot = "12")]
	public override Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x3E13580", Offset = "0x3E13580", VA = "0x3E13580")]
	public new static Task<JObject> LoadAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x3E13590", Offset = "0x3E13590", VA = "0x3E13590")]
	[AsyncStateMachine(typeof(_003CLoadAsync_003Ed__2))]
	public new static Task<JObject> LoadAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x3E0FFB0", Offset = "0x3E0FFB0", VA = "0x3E0FFB0")]
	public JObject()
	{
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x3E139A0", Offset = "0x3E139A0", VA = "0x3E139A0")]
	public JObject(JObject other)
	{
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x3E13A80", Offset = "0x3E13A80", VA = "0x3E13A80")]
	internal JObject(JObject other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x3E13B60", Offset = "0x3E13B60", VA = "0x3E13B60")]
	public JObject(params object[] content)
	{
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x3E13B70", Offset = "0x3E13B70", VA = "0x3E13B70")]
	public JObject(object content)
	{
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x3E13C90", Offset = "0x3E13C90", VA = "0x3E13C90", Slot = "14")]
	internal override bool DeepEquals(JToken node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x3E14120", Offset = "0x3E14120", VA = "0x3E14120", Slot = "80")]
	internal override int IndexOfItem(JToken? item)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x3E14270", Offset = "0x3E14270", VA = "0x3E14270", Slot = "81")]
	internal override bool InsertItem(int index, JToken? item, bool skipParentCheck, bool copyAnnotations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x3E142D0", Offset = "0x3E142D0", VA = "0x3E142D0", Slot = "90")]
	internal override void ValidateToken(JToken o, JToken? existing)
	{
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x3E14590", Offset = "0x3E14590", VA = "0x3E14590", Slot = "92")]
	internal override void MergeItem(object content, JsonMergeSettings? settings)
	{
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x3E14C80", Offset = "0x3E14C80", VA = "0x3E14C80")]
	private static bool IsNull(JToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x3E14D80", Offset = "0x3E14D80", VA = "0x3E14D80")]
	internal void InternalPropertyChanged(JProperty childProperty)
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x3E14EB0", Offset = "0x3E14EB0", VA = "0x3E14EB0")]
	internal void InternalPropertyChanging(JProperty childProperty)
	{
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x3E14EE0", Offset = "0x3E14EE0", VA = "0x3E14EE0", Slot = "13")]
	internal override JToken CloneToken(JsonCloneSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x3E14F40", Offset = "0x3E14F40", VA = "0x3E14F40")]
	public IEnumerable<JProperty> Properties()
	{
		return null;
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x3E14F80", Offset = "0x3E14F80", VA = "0x3E14F80")]
	public JProperty Property(string name)
	{
		return null;
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x3E10320", Offset = "0x3E10320", VA = "0x3E10320")]
	public JProperty Property(string name, StringComparison comparison)
	{
		return null;
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x3E14F90", Offset = "0x3E14F90", VA = "0x3E14F90")]
	public JEnumerable<JToken> PropertyValues()
	{
		return default(JEnumerable<JToken>);
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x3E154E0", Offset = "0x3E154E0", VA = "0x3E154E0")]
	public new static JObject Load(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x3E154F0", Offset = "0x3E154F0", VA = "0x3E154F0")]
	public new static JObject Load(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x3E156B0", Offset = "0x3E156B0", VA = "0x3E156B0")]
	public new static JObject Parse(string json)
	{
		return null;
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x3E156C0", Offset = "0x3E156C0", VA = "0x3E156C0")]
	public new static JObject Parse(string json, JsonLoadSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x3E158D0", Offset = "0x3E158D0", VA = "0x3E158D0")]
	public new static JObject FromObject(object o)
	{
		return null;
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x3E158F0", Offset = "0x3E158F0", VA = "0x3E158F0")]
	public new static JObject FromObject(object o, JsonSerializer jsonSerializer)
	{
		return null;
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x3E15C90", Offset = "0x3E15C90", VA = "0x3E15C90", Slot = "24")]
	public override void WriteTo(JsonWriter writer, params JsonConverter[] converters)
	{
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x3E15D80", Offset = "0x3E15D80", VA = "0x3E15D80")]
	public JToken? GetValue(string? propertyName)
	{
		return null;
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x3E15DB0", Offset = "0x3E15DB0", VA = "0x3E15DB0")]
	public JToken? GetValue(string? propertyName, StringComparison comparison)
	{
		return null;
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x3E15DE0", Offset = "0x3E15DE0", VA = "0x3E15DE0")]
	public bool TryGetValue(string propertyName, StringComparison comparison, [NotNullWhen(true)] out JToken? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x3E14C00", Offset = "0x3E14C00", VA = "0x3E14C00", Slot = "98")]
	public void Add(string propertyName, JToken? value)
	{
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x3E16040", Offset = "0x3E16040", VA = "0x3E16040", Slot = "97")]
	public bool ContainsKey(string propertyName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x3E161E0", Offset = "0x3E161E0", VA = "0x3E161E0", Slot = "99")]
	public bool Remove(string propertyName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x3E162D0", Offset = "0x3E162D0", VA = "0x3E162D0", Slot = "100")]
	public bool TryGetValue(string propertyName, [NotNullWhen(true)] out JToken? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x3E16370", Offset = "0x3E16370", VA = "0x3E16370", Slot = "103")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002EAdd(KeyValuePair<string, JToken?> item)
	{
	}

	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x3E16400", Offset = "0x3E16400", VA = "0x3E16400", Slot = "104")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002EClear()
	{
	}

	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x3E16420", Offset = "0x3E16420", VA = "0x3E16420", Slot = "105")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002EContains(KeyValuePair<string, JToken?> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x3E16490", Offset = "0x3E16490", VA = "0x3E16490", Slot = "106")]
	private void System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002ECopyTo(KeyValuePair<string, JToken?>[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x3E16A40", Offset = "0x3E16A40", VA = "0x3E16A40", Slot = "107")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CNewtonsoft_002EJson_002ELinq_002EJToken_003E_003E_002ERemove(KeyValuePair<string, JToken?> item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x3E16B90", Offset = "0x3E16B90", VA = "0x3E16B90", Slot = "25")]
	internal override int GetDeepHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x3E14B90", Offset = "0x3E14B90", VA = "0x3E14B90", Slot = "108")]
	[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__64))]
	public IEnumerator<KeyValuePair<string, JToken>> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x3E16BC0", Offset = "0x3E16BC0", VA = "0x3E16BC0", Slot = "125")]
	protected virtual void OnPropertyChanged(string propertyName)
	{
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x3E16C40", Offset = "0x3E16C40", VA = "0x3E16C40", Slot = "126")]
	protected virtual void OnPropertyChanging(string propertyName)
	{
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x3E16CC0", Offset = "0x3E16CC0", VA = "0x3E16CC0", Slot = "120")]
	private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties()
	{
		return null;
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x3E16D60", Offset = "0x3E16D60", VA = "0x3E16D60", Slot = "121")]
	private PropertyDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetProperties(Attribute[]? attributes)
	{
		return null;
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x3E171F0", Offset = "0x3E171F0", VA = "0x3E171F0", Slot = "111")]
	private AttributeCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetAttributes()
	{
		return null;
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x3E17260", Offset = "0x3E17260", VA = "0x3E17260", Slot = "112")]
	private string? System_002EComponentModel_002EICustomTypeDescriptor_002EGetClassName()
	{
		return null;
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x3E17270", Offset = "0x3E17270", VA = "0x3E17270", Slot = "113")]
	private string? System_002EComponentModel_002EICustomTypeDescriptor_002EGetComponentName()
	{
		return null;
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x3E17280", Offset = "0x3E17280", VA = "0x3E17280", Slot = "114")]
	private TypeConverter System_002EComponentModel_002EICustomTypeDescriptor_002EGetConverter()
	{
		return null;
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x3E172C0", Offset = "0x3E172C0", VA = "0x3E172C0", Slot = "115")]
	private EventDescriptor? System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultEvent()
	{
		return null;
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x3E172D0", Offset = "0x3E172D0", VA = "0x3E172D0", Slot = "116")]
	private PropertyDescriptor? System_002EComponentModel_002EICustomTypeDescriptor_002EGetDefaultProperty()
	{
		return null;
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x3E172E0", Offset = "0x3E172E0", VA = "0x3E172E0", Slot = "117")]
	private object System_002EComponentModel_002EICustomTypeDescriptor_002EGetEditor(Type editorBaseType)
	{
		return null;
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x3E172F0", Offset = "0x3E172F0", VA = "0x3E172F0", Slot = "119")]
	private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents(Attribute[]? attributes)
	{
		return null;
	}

	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x3E17360", Offset = "0x3E17360", VA = "0x3E17360", Slot = "118")]
	private EventDescriptorCollection System_002EComponentModel_002EICustomTypeDescriptor_002EGetEvents()
	{
		return null;
	}

	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x3E173D0", Offset = "0x3E173D0", VA = "0x3E173D0", Slot = "122")]
	private object? System_002EComponentModel_002EICustomTypeDescriptor_002EGetPropertyOwner(PropertyDescriptor? pd)
	{
		return null;
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x3E17440", Offset = "0x3E17440", VA = "0x3E17440", Slot = "26")]
	protected override DynamicMetaObject GetMetaObject(Expression parameter)
	{
		return null;
	}
}
