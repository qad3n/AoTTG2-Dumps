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
			[Address(RVA = "0x3B3C610", Offset = "0x3B3C610", VA = "0x3B3C610", Slot = "6")]
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
			[Address(RVA = "0x3B3C660", Offset = "0x3B3C660", VA = "0x3B3C660", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000DF7")]
		[Address(RVA = "0x3B3B670", Offset = "0x3B3B670", VA = "0x3B3B670")]
		[DebuggerHidden]
		public _003CExecuteFilter_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000DF8")]
		[Address(RVA = "0x3B3B6C0", Offset = "0x3B3B6C0", VA = "0x3B3B6C0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000DF9")]
		[Address(RVA = "0x3B3B910", Offset = "0x3B3B910", VA = "0x3B3B910", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000DFA")]
		[Address(RVA = "0x3B3C570", Offset = "0x3B3C570", VA = "0x3B3C570")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000DFB")]
		[Address(RVA = "0x3B3C4D0", Offset = "0x3B3C4D0", VA = "0x3B3C4D0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000DFD")]
		[Address(RVA = "0x3B3C620", Offset = "0x3B3C620", VA = "0x3B3C620", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000DFF")]
		[Address(RVA = "0x3B3C670", Offset = "0x3B3C670", VA = "0x3B3C670", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000E00")]
		[Address(RVA = "0x3B3C730", Offset = "0x3B3C730", VA = "0x3B3C730", Slot = "5")]
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
		[Address(RVA = "0x3B3B5A0", Offset = "0x3B3B5A0", VA = "0x3B3B5A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DF4")]
		[Address(RVA = "0x3B3B5B0", Offset = "0x3B3B5B0", VA = "0x3B3B5B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x3B3B5C0", Offset = "0x3B3B5C0", VA = "0x3B3B5C0", Slot = "4")]
	[IteratorStateMachine(typeof(_003CExecuteFilter_003Ed__4))]
	public override IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x3B3B6A0", Offset = "0x3B3B6A0", VA = "0x3B3B6A0")]
	public ArrayIndexFilter()
	{
	}
}
