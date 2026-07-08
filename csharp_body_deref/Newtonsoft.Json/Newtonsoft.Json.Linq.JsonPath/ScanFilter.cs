using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq.JsonPath;

[Token(Token = "0x20001A7")]
internal class ScanFilter : PathFilter
{
	[Token(Token = "0x20001A8")]
	[CompilerGenerated]
	private sealed class _003CExecuteFilter_003Ed__2 : IEnumerable<JToken>, IEnumerable, IEnumerator<JToken>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40007DA")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40007DB")]
		[FieldOffset(Offset = "0x18")]
		private JToken _003C_003E2__current;

		[Token(Token = "0x40007DC")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40007DD")]
		[FieldOffset(Offset = "0x28")]
		private IEnumerable<JToken> current;

		[Token(Token = "0x40007DE")]
		[FieldOffset(Offset = "0x30")]
		public IEnumerable<JToken> _003C_003E3__current;

		[Token(Token = "0x40007DF")]
		[FieldOffset(Offset = "0x38")]
		public ScanFilter _003C_003E4__this;

		[Token(Token = "0x40007E0")]
		[FieldOffset(Offset = "0x40")]
		private IEnumerator<JToken> _003C_003E7__wrap1;

		[Token(Token = "0x40007E1")]
		[FieldOffset(Offset = "0x48")]
		private JToken _003Cc_003E5__3;

		[Token(Token = "0x40007E2")]
		[FieldOffset(Offset = "0x50")]
		private JToken _003Cvalue_003E5__4;

		[Token(Token = "0x17000248")]
		private JToken? System_002ECollections_002EGeneric_002EIEnumerator_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECurrent
		{
			[Token(Token = "0x6000E84")]
			[Address(RVA = "0x3B47DE0", Offset = "0x3B47DE0", VA = "0x3B47DE0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000249")]
		private object? System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E86")]
			[Address(RVA = "0x3B47E30", Offset = "0x3B47E30", VA = "0x3B47E30", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E80")]
		[Address(RVA = "0x3B47410", Offset = "0x3B47410", VA = "0x3B47410")]
		[DebuggerHidden]
		public _003CExecuteFilter_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E81")]
		[Address(RVA = "0x3B47440", Offset = "0x3B47440", VA = "0x3B47440", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E82")]
		[Address(RVA = "0x3B474F0", Offset = "0x3B474F0", VA = "0x3B474F0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E83")]
		[Address(RVA = "0x3B47D40", Offset = "0x3B47D40", VA = "0x3B47D40")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000E85")]
		[Address(RVA = "0x3B47DF0", Offset = "0x3B47DF0", VA = "0x3B47DF0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000E87")]
		[Address(RVA = "0x3B47E40", Offset = "0x3B47E40", VA = "0x3B47E40", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken?>? System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000E88")]
		[Address(RVA = "0x3B47EF0", Offset = "0x3B47EF0", VA = "0x3B47EF0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator? System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40007D9")]
	[FieldOffset(Offset = "0x10")]
	internal string? Name;

	[Token(Token = "0x6000E7E")]
	[Address(RVA = "0x3B40DE0", Offset = "0x3B40DE0", VA = "0x3B40DE0")]
	public ScanFilter(string? name)
	{
	}

	[Token(Token = "0x6000E7F")]
	[Address(RVA = "0x3B47370", Offset = "0x3B47370", VA = "0x3B47370", Slot = "4")]
	[IteratorStateMachine(typeof(_003CExecuteFilter_003Ed__2))]
	public override IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings)
	{
		return null;
	}
}
