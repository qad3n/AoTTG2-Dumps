// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JsonPath.ArrayIndexFilter
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

[Token(Token = "0x2000191")]
internal class ArrayIndexFilter : PathFilter
{
	[Token(Token = "0x2000192")]
	[CompilerGenerated]
	private sealed class _003CExecuteFilter_003Ed__4 : IEnumerable<JToken>, IEnumerable, IEnumerator<JToken>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000767")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000768")]
		[FieldOffset(Offset = "0x18")]
		private JToken _003C_003E2__current;

		[Token(Token = "0x4000769")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400076A")]
		[FieldOffset(Offset = "0x28")]
		private IEnumerable<JToken> current;

		[Token(Token = "0x400076B")]
		[FieldOffset(Offset = "0x30")]
		public IEnumerable<JToken> _003C_003E3__current;

		[Token(Token = "0x400076C")]
		[FieldOffset(Offset = "0x38")]
		public ArrayIndexFilter _003C_003E4__this;

		[Token(Token = "0x400076D")]
		[FieldOffset(Offset = "0x40")]
		private JsonSelectSettings settings;

		[Token(Token = "0x400076E")]
		[FieldOffset(Offset = "0x48")]
		public JsonSelectSettings _003C_003E3__settings;

		[Token(Token = "0x400076F")]
		[FieldOffset(Offset = "0x50")]
		private IEnumerator<JToken> _003C_003E7__wrap1;

		[Token(Token = "0x4000770")]
		[FieldOffset(Offset = "0x58")]
		private IEnumerator<JToken> _003C_003E7__wrap2;

		[Token(Token = "0x17000235")]
		private JToken System_002ECollections_002EGeneric_002EIEnumerator_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECurrent
		{
			[Token(Token = "0x6000DFC")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000236")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000DFE")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000DF7")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CExecuteFilter_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000DF8")]
		[Address(RVA = "0x1CA7DA0", Offset = "0x1CA63A0", VA = "0x181CA7DA0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000DF9")]
		[Address(RVA = "0x1CA77E0", Offset = "0x1CA5DE0", VA = "0x181CA77E0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000DFA")]
		[Address(RVA = "0x1CA7EF0", Offset = "0x1CA64F0", VA = "0x181CA7EF0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000DFB")]
		[Address(RVA = "0x1CA7F40", Offset = "0x1CA6540", VA = "0x181CA7F40")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000DFD")]
		[Address(RVA = "0x1CA7D60", Offset = "0x1CA6360", VA = "0x181CA7D60", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000DFF")]
		[Address(RVA = "0x1CA7CA0", Offset = "0x1CA62A0", VA = "0x181CA7CA0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000E00")]
		[Address(RVA = "0x1CA7CA0", Offset = "0x1CA62A0", VA = "0x181CA7CA0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x17000234")]
	public int? Index
	{
		[Token(Token = "0x6000DF3")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DF4")]
		[Address(RVA = "0x560EC0", Offset = "0x55F4C0", VA = "0x180560EC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x1C8E000", Offset = "0x1C8C600", VA = "0x181C8E000", Slot = "4")]
	[IteratorStateMachine(typeof(_003CExecuteFilter_003Ed__4))]
	public override IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ArrayIndexFilter()
	{
	}
}
