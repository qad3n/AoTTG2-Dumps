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
			[Address(RVA = "0x3E31F60", Offset = "0x3E31F60", VA = "0x3E31F60", Slot = "6")]
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
			[Address(RVA = "0x3E31FB0", Offset = "0x3E31FB0", VA = "0x3E31FB0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000DF7")]
		[Address(RVA = "0x3E30FC0", Offset = "0x3E30FC0", VA = "0x3E30FC0")]
		[DebuggerHidden]
		public _003CExecuteFilter_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000DF8")]
		[Address(RVA = "0x3E31010", Offset = "0x3E31010", VA = "0x3E31010", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000DF9")]
		[Address(RVA = "0x3E31260", Offset = "0x3E31260", VA = "0x3E31260", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000DFA")]
		[Address(RVA = "0x3E31EC0", Offset = "0x3E31EC0", VA = "0x3E31EC0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000DFB")]
		[Address(RVA = "0x3E31E20", Offset = "0x3E31E20", VA = "0x3E31E20")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000DFD")]
		[Address(RVA = "0x3E31F70", Offset = "0x3E31F70", VA = "0x3E31F70", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000DFF")]
		[Address(RVA = "0x3E31FC0", Offset = "0x3E31FC0", VA = "0x3E31FC0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000E00")]
		[Address(RVA = "0x3E32080", Offset = "0x3E32080", VA = "0x3E32080", Slot = "5")]
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
		[Address(RVA = "0x3E30EF0", Offset = "0x3E30EF0", VA = "0x3E30EF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DF4")]
		[Address(RVA = "0x3E30F00", Offset = "0x3E30F00", VA = "0x3E30F00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x3E30F10", Offset = "0x3E30F10", VA = "0x3E30F10", Slot = "4")]
	[IteratorStateMachine(typeof(_003CExecuteFilter_003Ed__4))]
	public override IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x3E30FF0", Offset = "0x3E30FF0", VA = "0x3E30FF0")]
	public ArrayIndexFilter()
	{
	}
}
