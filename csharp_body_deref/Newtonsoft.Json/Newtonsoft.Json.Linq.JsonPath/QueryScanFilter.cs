// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JsonPath.QueryScanFilter
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

[Token(Token = "0x20001A4")]
internal class QueryScanFilter : PathFilter
{
	[Token(Token = "0x20001A5")]
	[CompilerGenerated]
	private sealed class _003CExecuteFilter_003Ed__2 : IEnumerable<JToken>, IEnumerable, IEnumerator<JToken>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40007CC")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40007CD")]
		[FieldOffset(Offset = "0x18")]
		private JToken _003C_003E2__current;

		[Token(Token = "0x40007CE")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40007CF")]
		[FieldOffset(Offset = "0x28")]
		private IEnumerable<JToken> current;

		[Token(Token = "0x40007D0")]
		[FieldOffset(Offset = "0x30")]
		public IEnumerable<JToken> _003C_003E3__current;

		[Token(Token = "0x40007D1")]
		[FieldOffset(Offset = "0x38")]
		public QueryScanFilter _003C_003E4__this;

		[Token(Token = "0x40007D2")]
		[FieldOffset(Offset = "0x40")]
		private JToken root;

		[Token(Token = "0x40007D3")]
		[FieldOffset(Offset = "0x48")]
		public JToken _003C_003E3__root;

		[Token(Token = "0x40007D4")]
		[FieldOffset(Offset = "0x50")]
		private JsonSelectSettings settings;

		[Token(Token = "0x40007D5")]
		[FieldOffset(Offset = "0x58")]
		public JsonSelectSettings _003C_003E3__settings;

		[Token(Token = "0x40007D6")]
		[FieldOffset(Offset = "0x60")]
		private IEnumerator<JToken> _003C_003E7__wrap1;

		[Token(Token = "0x40007D7")]
		[FieldOffset(Offset = "0x68")]
		private IEnumerator<JToken> _003C_003E7__wrap2;

		[Token(Token = "0x17000246")]
		private JToken System_002ECollections_002EGeneric_002EIEnumerator_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECurrent
		{
			[Token(Token = "0x6000E76")]
			[Address(RVA = "0x3E3CA60", Offset = "0x3E3CA60", VA = "0x3E3CA60", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000247")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E78")]
			[Address(RVA = "0x3E3CAB0", Offset = "0x3E3CAB0", VA = "0x3E3CAB0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E71")]
		[Address(RVA = "0x3E3BD30", Offset = "0x3E3BD30", VA = "0x3E3BD30")]
		[DebuggerHidden]
		public _003CExecuteFilter_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E72")]
		[Address(RVA = "0x3E3BD60", Offset = "0x3E3BD60", VA = "0x3E3BD60", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E73")]
		[Address(RVA = "0x3E3BFB0", Offset = "0x3E3BFB0", VA = "0x3E3BFB0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E74")]
		[Address(RVA = "0x3E3C9C0", Offset = "0x3E3C9C0", VA = "0x3E3C9C0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000E75")]
		[Address(RVA = "0x3E3C920", Offset = "0x3E3C920", VA = "0x3E3C920")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000E77")]
		[Address(RVA = "0x3E3CA70", Offset = "0x3E3CA70", VA = "0x3E3CA70", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000E79")]
		[Address(RVA = "0x3E3CAC0", Offset = "0x3E3CAC0", VA = "0x3E3CAC0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000E7A")]
		[Address(RVA = "0x3E3CB90", Offset = "0x3E3CB90", VA = "0x3E3CB90", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40007CB")]
	[FieldOffset(Offset = "0x10")]
	internal QueryExpression Expression;

	[Token(Token = "0x6000E6F")]
	[Address(RVA = "0x3E37E90", Offset = "0x3E37E90", VA = "0x3E37E90")]
	public QueryScanFilter(QueryExpression expression)
	{
	}

	[Token(Token = "0x6000E70")]
	[Address(RVA = "0x3E3BC60", Offset = "0x3E3BC60", VA = "0x3E3BC60", Slot = "4")]
	[IteratorStateMachine(typeof(_003CExecuteFilter_003Ed__2))]
	public override IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings)
	{
		return null;
	}
}
