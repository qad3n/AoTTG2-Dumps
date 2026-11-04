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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E21")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CExecuteFilter_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E22")]
		[Address(RVA = "0x1CA6CB0", Offset = "0x1CA52B0", VA = "0x181CA6CB0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E23")]
		[Address(RVA = "0x1CA5930", Offset = "0x1CA3F30", VA = "0x181CA5930", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E24")]
		[Address(RVA = "0x1CA7510", Offset = "0x1CA5B10", VA = "0x181CA7510")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000E25")]
		[Address(RVA = "0x1CA76F0", Offset = "0x1CA5CF0", VA = "0x181CA76F0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000E27")]
		[Address(RVA = "0x1CA6A60", Offset = "0x1CA5060", VA = "0x181CA6A60", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000E29")]
		[Address(RVA = "0x1CA6510", Offset = "0x1CA4B10", VA = "0x181CA6510", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken?>? System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000E2A")]
		[Address(RVA = "0x1CA6510", Offset = "0x1CA4B10", VA = "0x181CA6510", Slot = "5")]
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
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public FieldFilter(string? name)
	{
	}

	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x1C94940", Offset = "0x1C92F40", VA = "0x181C94940", Slot = "4")]
	[IteratorStateMachine(typeof(_003CExecuteFilter_003Ed__2))]
	public override IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings)
	{
		return null;
	}
}
