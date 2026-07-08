using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq;

[Token(Token = "0x2000173")]
public class JProperty : JContainer
{
	[Token(Token = "0x2000174")]
	private class JPropertyList : IList<JToken>, ICollection<JToken>, IEnumerable<JToken>, IEnumerable
	{
		[Token(Token = "0x2000175")]
		[CompilerGenerated]
		private sealed class _003CGetEnumerator_003Ed__1 : IEnumerator<JToken>, IEnumerator, IDisposable
		{
			[Token(Token = "0x40006DE")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			private int _003C_003E1__state;

			[Token(Token = "0x40006DF")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			private JToken _003C_003E2__current;

			[Token(Token = "0x40006E0")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public JPropertyList _003C_003E4__this;

			[Token(Token = "0x17000201")]
			private JToken System_002ECollections_002EGeneric_002EIEnumerator_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECurrent
			{
				[Token(Token = "0x6000C64")]
				[Address(RVA = "0x3B24830", Offset = "0x3B24830", VA = "0x3B24830", Slot = "4")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000202")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000C66")]
				[Address(RVA = "0x3B24880", Offset = "0x3B24880", VA = "0x3B24880", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000C61")]
			[Address(RVA = "0x3B24550", Offset = "0x3B24550", VA = "0x3B24550")]
			[DebuggerHidden]
			public _003CGetEnumerator_003Ed__1(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000C62")]
			[Address(RVA = "0x3B247C0", Offset = "0x3B247C0", VA = "0x3B247C0", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000C63")]
			[Address(RVA = "0x3B247D0", Offset = "0x3B247D0", VA = "0x3B247D0", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000C65")]
			[Address(RVA = "0x3B24840", Offset = "0x3B24840", VA = "0x3B24840", Slot = "8")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}
		}

		[Token(Token = "0x40006DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal JToken? _token;

		[Token(Token = "0x170001FE")]
		public int Count
		{
			[Token(Token = "0x6000C59")]
			[Address(RVA = "0x3B246C0", Offset = "0x3B246C0", VA = "0x3B246C0", Slot = "9")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170001FF")]
		public bool IsReadOnly
		{
			[Token(Token = "0x6000C5A")]
			[Address(RVA = "0x3B246D0", Offset = "0x3B246D0", VA = "0x3B246D0", Slot = "10")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000200")]
		public JToken this[int index]
		{
			[Token(Token = "0x6000C5E")]
			[Address(RVA = "0x3B24720", Offset = "0x3B24720", VA = "0x3B24720", Slot = "4")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000C5F")]
			[Address(RVA = "0x3B24770", Offset = "0x3B24770", VA = "0x3B24770", Slot = "5")]
			set
			{
			}
		}

		[Token(Token = "0x6000C52")]
		[Address(RVA = "0x3B244E0", Offset = "0x3B244E0", VA = "0x3B244E0", Slot = "16")]
		[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__1))]
		public IEnumerator<JToken> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000C53")]
		[Address(RVA = "0x3B24570", Offset = "0x3B24570", VA = "0x3B24570", Slot = "17")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000C54")]
		[Address(RVA = "0x3B245E0", Offset = "0x3B245E0", VA = "0x3B245E0", Slot = "11")]
		public void Add(JToken item)
		{
		}

		[Token(Token = "0x6000C55")]
		[Address(RVA = "0x3B245F0", Offset = "0x3B245F0", VA = "0x3B245F0", Slot = "12")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000C56")]
		[Address(RVA = "0x3B24610", Offset = "0x3B24610", VA = "0x3B24610", Slot = "13")]
		public bool Contains(JToken item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C57")]
		[Address(RVA = "0x3B24620", Offset = "0x3B24620", VA = "0x3B24620", Slot = "14")]
		public void CopyTo(JToken[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6000C58")]
		[Address(RVA = "0x3B24690", Offset = "0x3B24690", VA = "0x3B24690", Slot = "15")]
		public bool Remove(JToken item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C5B")]
		[Address(RVA = "0x3B23E20", Offset = "0x3B23E20", VA = "0x3B23E20", Slot = "6")]
		public int IndexOf(JToken item)
		{
			return default(int);
		}

		[Token(Token = "0x6000C5C")]
		[Address(RVA = "0x3B246E0", Offset = "0x3B246E0", VA = "0x3B246E0", Slot = "7")]
		public void Insert(int index, JToken item)
		{
		}

		[Token(Token = "0x6000C5D")]
		[Address(RVA = "0x3B24700", Offset = "0x3B24700", VA = "0x3B24700", Slot = "8")]
		public void RemoveAt(int index)
		{
		}

		[Token(Token = "0x6000C60")]
		[Address(RVA = "0x3B239D0", Offset = "0x3B239D0", VA = "0x3B239D0")]
		public JPropertyList()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000176")]
	[CompilerGenerated]
	private struct _003CLoadAsync_003Ed__4 : IAsyncStateMachine
	{
		[Token(Token = "0x40006E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40006E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<JProperty> _003C_003Et__builder;

		[Token(Token = "0x40006E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public JsonReader reader;

		[Token(Token = "0x40006E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40006E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public JsonLoadSettings settings;

		[Token(Token = "0x40006E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private JProperty _003Cp_003E5__2;

		[Token(Token = "0x40006E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x40006E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000C67")]
		[Address(RVA = "0x3B24890", Offset = "0x3B24890", VA = "0x3B24890", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000C68")]
		[Address(RVA = "0x3B25130", Offset = "0x3B25130", VA = "0x3B25130", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000177")]
	[CompilerGenerated]
	private struct _003CWriteToAsync_003Ed__1 : IAsyncStateMachine
	{
		[Token(Token = "0x40006E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40006EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x40006EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Task task;

		[Token(Token = "0x40006EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public JProperty _003C_003E4__this;

		[Token(Token = "0x40006ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public JsonWriter writer;

		[Token(Token = "0x40006EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40006EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public JsonConverter[] converters;

		[Token(Token = "0x40006F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000C69")]
		[Address(RVA = "0x3B251A0", Offset = "0x3B251A0", VA = "0x3B251A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000C6A")]
		[Address(RVA = "0x3B25530", Offset = "0x3B25530", VA = "0x3B25530", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40006DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly JPropertyList _content;

	[Token(Token = "0x40006DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly string _name;

	[Token(Token = "0x170001FA")]
	protected override IList<JToken> ChildrenTokens
	{
		[Token(Token = "0x6000C39")]
		[Address(RVA = "0x3B23920", Offset = "0x3B23920", VA = "0x3B23920", Slot = "75")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FB")]
	public string Name
	{
		[Token(Token = "0x6000C3A")]
		[Address(RVA = "0x3B23930", Offset = "0x3B23930", VA = "0x3B23930")]
		[DebuggerStepThrough]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FC")]
	public new JToken Value
	{
		[Token(Token = "0x6000C3B")]
		[Address(RVA = "0x3B1A640", Offset = "0x3B1A640", VA = "0x3B1A640")]
		[DebuggerStepThrough]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C3C")]
		[Address(RVA = "0x3B1F3B0", Offset = "0x3B1F3B0", VA = "0x3B1F3B0")]
		set
		{
		}
	}

	[Token(Token = "0x170001FD")]
	public override JTokenType Type
	{
		[Token(Token = "0x6000C4A")]
		[Address(RVA = "0x3B241F0", Offset = "0x3B241F0", VA = "0x3B241F0", Slot = "15")]
		[DebuggerStepThrough]
		get
		{
			return default(JTokenType);
		}
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x3B23520", Offset = "0x3B23520", VA = "0x3B23520", Slot = "12")]
	public override Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x3B23670", Offset = "0x3B23670", VA = "0x3B23670")]
	[AsyncStateMachine(typeof(_003CWriteToAsync_003Ed__1))]
	private Task WriteToAsync(Task task, JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x3B23620", Offset = "0x3B23620", VA = "0x3B23620")]
	private Task WriteValueAsync(JsonWriter writer, CancellationToken cancellationToken, JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x3B237D0", Offset = "0x3B237D0", VA = "0x3B237D0")]
	public new static Task<JProperty> LoadAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x3B237E0", Offset = "0x3B237E0", VA = "0x3B237E0")]
	[AsyncStateMachine(typeof(_003CLoadAsync_003Ed__4))]
	public new static Task<JProperty> LoadAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x3B23940", Offset = "0x3B23940", VA = "0x3B23940")]
	public JProperty(JProperty other)
	{
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x3B239E0", Offset = "0x3B239E0", VA = "0x3B239E0")]
	internal JProperty(JProperty other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x3B23A70", Offset = "0x3B23A70", VA = "0x3B23A70", Slot = "84")]
	internal override JToken GetItem(int index)
	{
		return null;
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x3B23AD0", Offset = "0x3B23AD0", VA = "0x3B23AD0", Slot = "85")]
	internal override void SetItem(int index, JToken? item)
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x3B23C90", Offset = "0x3B23C90", VA = "0x3B23C90", Slot = "83")]
	internal override bool RemoveItem(JToken? item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x3B23D40", Offset = "0x3B23D40", VA = "0x3B23D40", Slot = "82")]
	internal override void RemoveItemAt(int index)
	{
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x3B23DF0", Offset = "0x3B23DF0", VA = "0x3B23DF0", Slot = "80")]
	internal override int IndexOfItem(JToken? item)
	{
		return default(int);
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x3B23E30", Offset = "0x3B23E30", VA = "0x3B23E30", Slot = "81")]
	internal override bool InsertItem(int index, JToken? item, bool skipParentCheck, bool copyAnnotations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x3B23F40", Offset = "0x3B23F40", VA = "0x3B23F40", Slot = "88")]
	internal override bool ContainsItem(JToken? item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x3B23F60", Offset = "0x3B23F60", VA = "0x3B23F60", Slot = "92")]
	internal override void MergeItem(object content, JsonMergeSettings? settings)
	{
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x3B24050", Offset = "0x3B24050", VA = "0x3B24050", Slot = "86")]
	internal override void ClearItems()
	{
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x3B24100", Offset = "0x3B24100", VA = "0x3B24100", Slot = "14")]
	internal override bool DeepEquals(JToken node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x3B241A0", Offset = "0x3B241A0", VA = "0x3B241A0", Slot = "13")]
	internal override JToken CloneToken(JsonCloneSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x3B1AB90", Offset = "0x3B1AB90", VA = "0x3B1AB90")]
	internal JProperty(string name)
	{
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x3B24200", Offset = "0x3B24200", VA = "0x3B24200")]
	public JProperty(string name, params object[] content)
	{
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x3B204D0", Offset = "0x3B204D0", VA = "0x3B204D0")]
	public JProperty(string name, object? content)
	{
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x3B24210", Offset = "0x3B24210", VA = "0x3B24210", Slot = "24")]
	public override void WriteTo(JsonWriter writer, params JsonConverter[] converters)
	{
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x3B24290", Offset = "0x3B24290", VA = "0x3B24290", Slot = "25")]
	internal override int GetDeepHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x3B242F0", Offset = "0x3B242F0", VA = "0x3B242F0")]
	public new static JProperty Load(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x3B24300", Offset = "0x3B24300", VA = "0x3B24300")]
	public new static JProperty Load(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}
}
