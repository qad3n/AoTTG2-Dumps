// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JProperty
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
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
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000C61")]
			[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
			[DebuggerHidden]
			public _003CGetEnumerator_003Ed__1(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000C62")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000C63")]
			[Address(RVA = "0x1C89AD0", Offset = "0x1C880D0", VA = "0x181C89AD0", Slot = "6")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000C65")]
			[Address(RVA = "0x1C89B40", Offset = "0x1C88140", VA = "0x181C89B40", Slot = "8")]
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
			[Address(RVA = "0x1C7AAF0", Offset = "0x1C790F0", VA = "0x181C7AAF0", Slot = "9")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170001FF")]
		public bool IsReadOnly
		{
			[Token(Token = "0x6000C5A")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "10")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000200")]
		public JToken this[int index]
		{
			[Token(Token = "0x6000C5E")]
			[Address(RVA = "0x1C7AB00", Offset = "0x1C79100", VA = "0x181C7AB00", Slot = "4")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000C5F")]
			[Address(RVA = "0x1C7AB60", Offset = "0x1C79160", VA = "0x181C7AB60", Slot = "5")]
			set
			{
			}
		}

		[Token(Token = "0x6000C52")]
		[Address(RVA = "0x1C7AA00", Offset = "0x1C79000", VA = "0x181C7AA00", Slot = "16")]
		[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__1))]
		public IEnumerator<JToken> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000C53")]
		[Address(RVA = "0x1C7AA00", Offset = "0x1C79000", VA = "0x181C7AA00", Slot = "17")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000C54")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00", Slot = "11")]
		public void Add(JToken item)
		{
		}

		[Token(Token = "0x6000C55")]
		[Address(RVA = "0x1A5E5A0", Offset = "0x1A5CBA0", VA = "0x181A5E5A0", Slot = "12")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000C56")]
		[Address(RVA = "0x1C7A970", Offset = "0x1C78F70", VA = "0x181C7A970", Slot = "13")]
		public bool Contains(JToken item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C57")]
		[Address(RVA = "0x1C7A980", Offset = "0x1C78F80", VA = "0x181C7A980", Slot = "14")]
		public void CopyTo(JToken[] array, int arrayIndex)
		{
		}

		[Token(Token = "0x6000C58")]
		[Address(RVA = "0x1C7AAC0", Offset = "0x1C790C0", VA = "0x181C7AAC0", Slot = "15")]
		public bool Remove(JToken item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C5B")]
		[Address(RVA = "0x1C7AA70", Offset = "0x1C79070", VA = "0x181C7AA70", Slot = "6")]
		public int IndexOf(JToken item)
		{
			return default(int);
		}

		[Token(Token = "0x6000C5C")]
		[Address(RVA = "0x1C7AA80", Offset = "0x1C79080", VA = "0x181C7AA80", Slot = "7")]
		public void Insert(int index, JToken item)
		{
		}

		[Token(Token = "0x6000C5D")]
		[Address(RVA = "0x1C7AAA0", Offset = "0x1C790A0", VA = "0x181C7AAA0", Slot = "8")]
		public void RemoveAt(int index)
		{
		}

		[Token(Token = "0x6000C60")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x1C8AC40", Offset = "0x1C89240", VA = "0x181C8AC40", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000C68")]
		[Address(RVA = "0x1C8B250", Offset = "0x1C89850", VA = "0x181C8B250", Slot = "5")]
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
		[Address(RVA = "0x1C8D6A0", Offset = "0x1C8BCA0", VA = "0x181C8D6A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000C6A")]
		[Address(RVA = "0x1C8D940", Offset = "0x1C8BF40", VA = "0x181C8D940", Slot = "5")]
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
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570", Slot = "75")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FB")]
	public string Name
	{
		[Token(Token = "0x6000C3A")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
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
		[Address(RVA = "0x1C7C140", Offset = "0x1C7A740", VA = "0x181C7C140")]
		[DebuggerStepThrough]
		get
		{
			return null;
		}
		[Token(Token = "0x6000C3C")]
		[Address(RVA = "0x1C7C160", Offset = "0x1C7A760", VA = "0x181C7C160")]
		set
		{
		}
	}

	[Token(Token = "0x170001FD")]
	public override JTokenType Type
	{
		[Token(Token = "0x6000C4A")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "15")]
		[DebuggerStepThrough]
		get
		{
			return default(JTokenType);
		}
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x1C7BA30", Offset = "0x1C7A030", VA = "0x181C7BA30", Slot = "12")]
	public override Task WriteToAsync(JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x1C7B900", Offset = "0x1C79F00", VA = "0x181C7B900")]
	[AsyncStateMachine(typeof(_003CWriteToAsync_003Ed__1))]
	private Task WriteToAsync(Task task, JsonWriter writer, CancellationToken cancellationToken, params JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x1C7BCD0", Offset = "0x1C7A2D0", VA = "0x181C7BCD0")]
	private Task WriteValueAsync(JsonWriter writer, CancellationToken cancellationToken, JsonConverter[] converters)
	{
		return null;
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x1C7B180", Offset = "0x1C79780", VA = "0x181C7B180")]
	public new static Task<JProperty> LoadAsync(JsonReader reader, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x1C7B030", Offset = "0x1C79630", VA = "0x181C7B030")]
	[AsyncStateMachine(typeof(_003CLoadAsync_003Ed__4))]
	public new static Task<JProperty> LoadAsync(JsonReader reader, JsonLoadSettings? settings, [Optional] CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x1C7BD40", Offset = "0x1C7A340", VA = "0x181C7BD40")]
	public JProperty(JProperty other)
	{
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x1C7BDE0", Offset = "0x1C7A3E0", VA = "0x181C7BDE0")]
	internal JProperty(JProperty other, JsonCloneSettings? settings)
	{
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x1C7AE60", Offset = "0x1C79460", VA = "0x181C7AE60", Slot = "84")]
	internal override JToken GetItem(int index)
	{
		return null;
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x1C7B620", Offset = "0x1C79C20", VA = "0x181C7B620", Slot = "85")]
	internal override void SetItem(int index, JToken? item)
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x1C7B570", Offset = "0x1C79B70", VA = "0x181C7B570", Slot = "83")]
	internal override bool RemoveItem(JToken? item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x1C7B4C0", Offset = "0x1C79AC0", VA = "0x181C7B4C0", Slot = "82")]
	internal override void RemoveItemAt(int index)
	{
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x1C7AED0", Offset = "0x1C794D0", VA = "0x181C7AED0", Slot = "80")]
	internal override int IndexOfItem(JToken? item)
	{
		return default(int);
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x1C7AF10", Offset = "0x1C79510", VA = "0x181C7AF10", Slot = "81")]
	internal override bool InsertItem(int index, JToken? item, bool skipParentCheck, bool copyAnnotations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x1C7AD30", Offset = "0x1C79330", VA = "0x181C7AD30", Slot = "88")]
	internal override bool ContainsItem(JToken? item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x1C7B3C0", Offset = "0x1C799C0", VA = "0x181C7B3C0", Slot = "92")]
	internal override void MergeItem(object content, JsonMergeSettings? settings)
	{
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x1C7ABC0", Offset = "0x1C791C0", VA = "0x181C7ABC0", Slot = "86")]
	internal override void ClearItems()
	{
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x1C7AD50", Offset = "0x1C79350", VA = "0x181C7AD50", Slot = "14")]
	internal override bool DeepEquals(JToken node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x1C7AC70", Offset = "0x1C79270", VA = "0x181C7AC70", Slot = "13")]
	internal override JToken CloneToken(JsonCloneSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x1C7BE70", Offset = "0x1C7A470", VA = "0x181C7BE70")]
	internal JProperty(string name)
	{
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x1C7BD30", Offset = "0x1C7A330", VA = "0x181C7BD30")]
	public JProperty(string name, params object[] content)
	{
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x1C7BF50", Offset = "0x1C7A550", VA = "0x181C7BF50")]
	public JProperty(string name, object? content)
	{
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x1C7BC30", Offset = "0x1C7A230", VA = "0x181C7BC30", Slot = "24")]
	public override void WriteTo(JsonWriter writer, params JsonConverter[] converters)
	{
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x1C7ADF0", Offset = "0x1C793F0", VA = "0x181C7ADF0", Slot = "25")]
	internal override int GetDeepHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x1C7B190", Offset = "0x1C79790", VA = "0x181C7B190")]
	public new static JProperty Load(JsonReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x1C7B1A0", Offset = "0x1C797A0", VA = "0x181C7B1A0")]
	public new static JProperty Load(JsonReader reader, JsonLoadSettings? settings)
	{
		return null;
	}
}
