// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JsonPath.QueryFilter
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
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq.JsonPath;

[Token(Token = "0x20001A2")]
internal class QueryFilter : PathFilter
{
	[Token(Token = "0x20001A3")]
	[CompilerGenerated]
	private sealed class _003CExecuteFilter_003Ed__2 : IEnumerable<JToken>, IEnumerable, IEnumerator<JToken>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40007BF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40007C0")]
		[FieldOffset(Offset = "0x18")]
		private JToken _003C_003E2__current;

		[Token(Token = "0x40007C1")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40007C2")]
		[FieldOffset(Offset = "0x28")]
		private IEnumerable<JToken> current;

		[Token(Token = "0x40007C3")]
		[FieldOffset(Offset = "0x30")]
		public IEnumerable<JToken> _003C_003E3__current;

		[Token(Token = "0x40007C4")]
		[FieldOffset(Offset = "0x38")]
		public QueryFilter _003C_003E4__this;

		[Token(Token = "0x40007C5")]
		[FieldOffset(Offset = "0x40")]
		private JToken root;

		[Token(Token = "0x40007C6")]
		[FieldOffset(Offset = "0x48")]
		public JToken _003C_003E3__root;

		[Token(Token = "0x40007C7")]
		[FieldOffset(Offset = "0x50")]
		private JsonSelectSettings settings;

		[Token(Token = "0x40007C8")]
		[FieldOffset(Offset = "0x58")]
		public JsonSelectSettings _003C_003E3__settings;

		[Token(Token = "0x40007C9")]
		[FieldOffset(Offset = "0x60")]
		private IEnumerator<JToken> _003C_003E7__wrap1;

		[Token(Token = "0x40007CA")]
		[FieldOffset(Offset = "0x68")]
		private IEnumerator<JToken> _003C_003E7__wrap2;

		[Token(Token = "0x17000244")]
		private JToken System_002ECollections_002EGeneric_002EIEnumerator_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECurrent
		{
			[Token(Token = "0x6000E6A")]
			[Address(RVA = "0x3E3BB20", Offset = "0x3E3BB20", VA = "0x3E3BB20", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000245")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E6C")]
			[Address(RVA = "0x3E3BB70", Offset = "0x3E3BB70", VA = "0x3E3BB70", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E65")]
		[Address(RVA = "0x3E3AFF0", Offset = "0x3E3AFF0", VA = "0x3E3AFF0")]
		[DebuggerHidden]
		public _003CExecuteFilter_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E66")]
		[Address(RVA = "0x3E3B020", Offset = "0x3E3B020", VA = "0x3E3B020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E67")]
		[Address(RVA = "0x3E3B290", Offset = "0x3E3B290", VA = "0x3E3B290", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E68")]
		[Address(RVA = "0x3E3BA80", Offset = "0x3E3BA80", VA = "0x3E3BA80")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000E69")]
		[Address(RVA = "0x3E3B9E0", Offset = "0x3E3B9E0", VA = "0x3E3B9E0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000E6B")]
		[Address(RVA = "0x3E3BB30", Offset = "0x3E3BB30", VA = "0x3E3BB30", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000E6D")]
		[Address(RVA = "0x3E3BB80", Offset = "0x3E3BB80", VA = "0x3E3BB80", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000E6E")]
		[Address(RVA = "0x3E3BC50", Offset = "0x3E3BC50", VA = "0x3E3BC50", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40007BE")]
	[FieldOffset(Offset = "0x10")]
	internal QueryExpression Expression;

	[Token(Token = "0x6000E63")]
	[Address(RVA = "0x3E37E60", Offset = "0x3E37E60", VA = "0x3E37E60")]
	public QueryFilter(QueryExpression expression)
	{
	}

	[Token(Token = "0x6000E64")]
	[Address(RVA = "0x3E3AF20", Offset = "0x3E3AF20", VA = "0x3E3AF20", Slot = "4")]
	[IteratorStateMachine(typeof(_003CExecuteFilter_003Ed__2))]
	public override IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings)
	{
		return null;
	}
}
