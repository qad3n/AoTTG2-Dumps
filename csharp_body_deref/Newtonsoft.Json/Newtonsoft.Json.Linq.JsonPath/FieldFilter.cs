// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JsonPath.FieldFilter
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

[Token(Token = "0x2000197")]
internal class FieldFilter : PathFilter
{
	[Token(Token = "0x2000198")]
	[CompilerGenerated]
	private sealed class _003CExecuteFilter_003Ed__2 : IEnumerable<JToken>, IEnumerable, IEnumerator<JToken>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400078F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000790")]
		[FieldOffset(Offset = "0x18")]
		private JToken _003C_003E2__current;

		[Token(Token = "0x4000791")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000792")]
		[FieldOffset(Offset = "0x28")]
		private IEnumerable<JToken> current;

		[Token(Token = "0x4000793")]
		[FieldOffset(Offset = "0x30")]
		public IEnumerable<JToken> _003C_003E3__current;

		[Token(Token = "0x4000794")]
		[FieldOffset(Offset = "0x38")]
		public FieldFilter _003C_003E4__this;

		[Token(Token = "0x4000795")]
		[FieldOffset(Offset = "0x40")]
		private JsonSelectSettings settings;

		[Token(Token = "0x4000796")]
		[FieldOffset(Offset = "0x48")]
		public JsonSelectSettings _003C_003E3__settings;

		[Token(Token = "0x4000797")]
		[FieldOffset(Offset = "0x50")]
		private IEnumerator<JToken> _003C_003E7__wrap1;

		[Token(Token = "0x4000798")]
		[FieldOffset(Offset = "0x58")]
		private IEnumerator<KeyValuePair<string, JToken?>> _003C_003E7__wrap2;

		[Token(Token = "0x1700023E")]
		private JToken? System_002ECollections_002EGeneric_002EIEnumerator_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECurrent
		{
			[Token(Token = "0x6000E26")]
			[Address(RVA = "0x3E34AC0", Offset = "0x3E34AC0", VA = "0x3E34AC0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700023F")]
		private object? System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E28")]
			[Address(RVA = "0x3E34B10", Offset = "0x3E34B10", VA = "0x3E34B10", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E21")]
		[Address(RVA = "0x3E33C70", Offset = "0x3E33C70", VA = "0x3E33C70")]
		[DebuggerHidden]
		public _003CExecuteFilter_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E22")]
		[Address(RVA = "0x3E33CA0", Offset = "0x3E33CA0", VA = "0x3E33CA0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E23")]
		[Address(RVA = "0x3E33EF0", Offset = "0x3E33EF0", VA = "0x3E33EF0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E24")]
		[Address(RVA = "0x3E34A20", Offset = "0x3E34A20", VA = "0x3E34A20")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000E25")]
		[Address(RVA = "0x3E34980", Offset = "0x3E34980", VA = "0x3E34980")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000E27")]
		[Address(RVA = "0x3E34AD0", Offset = "0x3E34AD0", VA = "0x3E34AD0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000E29")]
		[Address(RVA = "0x3E34B20", Offset = "0x3E34B20", VA = "0x3E34B20", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken?>? System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000E2A")]
		[Address(RVA = "0x3E34BE0", Offset = "0x3E34BE0", VA = "0x3E34BE0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator? System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x400078E")]
	[FieldOffset(Offset = "0x10")]
	internal string? Name;

	[Token(Token = "0x6000E1F")]
	[Address(RVA = "0x3E33B90", Offset = "0x3E33B90", VA = "0x3E33B90")]
	public FieldFilter(string? name)
	{
	}

	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x3E33BC0", Offset = "0x3E33BC0", VA = "0x3E33BC0", Slot = "4")]
	[IteratorStateMachine(typeof(_003CExecuteFilter_003Ed__2))]
	public override IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings)
	{
		return null;
	}
}
