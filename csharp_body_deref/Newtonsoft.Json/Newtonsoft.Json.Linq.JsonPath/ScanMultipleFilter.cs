using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq.JsonPath;

[Token(Token = "0x20001A9")]
internal class ScanMultipleFilter : PathFilter
{
	[Token(Token = "0x20001AA")]
	[CompilerGenerated]
	private sealed class _003CExecuteFilter_003Ed__2 : IEnumerable<JToken>, IEnumerable, IEnumerator<JToken>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40007E4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40007E5")]
		[FieldOffset(Offset = "0x18")]
		private JToken _003C_003E2__current;

		[Token(Token = "0x40007E6")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40007E7")]
		[FieldOffset(Offset = "0x28")]
		private IEnumerable<JToken> current;

		[Token(Token = "0x40007E8")]
		[FieldOffset(Offset = "0x30")]
		public IEnumerable<JToken> _003C_003E3__current;

		[Token(Token = "0x40007E9")]
		[FieldOffset(Offset = "0x38")]
		public ScanMultipleFilter _003C_003E4__this;

		[Token(Token = "0x40007EA")]
		[FieldOffset(Offset = "0x40")]
		private IEnumerator<JToken> _003C_003E7__wrap1;

		[Token(Token = "0x40007EB")]
		[FieldOffset(Offset = "0x48")]
		private JToken _003Cc_003E5__3;

		[Token(Token = "0x40007EC")]
		[FieldOffset(Offset = "0x50")]
		private JToken _003Cvalue_003E5__4;

		[Token(Token = "0x40007ED")]
		[FieldOffset(Offset = "0x58")]
		private JProperty _003Cproperty_003E5__5;

		[Token(Token = "0x40007EE")]
		[FieldOffset(Offset = "0x60")]
		private List<string>.Enumerator _003C_003E7__wrap5;

		[Token(Token = "0x1700024A")]
		private JToken System_002ECollections_002EGeneric_002EIEnumerator_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECurrent
		{
			[Token(Token = "0x6000E90")]
			[Address(RVA = "0x3B489D0", Offset = "0x3B489D0", VA = "0x3B489D0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700024B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E92")]
			[Address(RVA = "0x3B48A20", Offset = "0x3B48A20", VA = "0x3B48A20", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E8B")]
		[Address(RVA = "0x3B47FA0", Offset = "0x3B47FA0", VA = "0x3B47FA0")]
		[DebuggerHidden]
		public _003CExecuteFilter_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E8C")]
		[Address(RVA = "0x3B47FD0", Offset = "0x3B47FD0", VA = "0x3B47FD0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E8D")]
		[Address(RVA = "0x3B481D0", Offset = "0x3B481D0", VA = "0x3B481D0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E8E")]
		[Address(RVA = "0x3B48930", Offset = "0x3B48930", VA = "0x3B48930")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000E8F")]
		[Address(RVA = "0x3B488F0", Offset = "0x3B488F0", VA = "0x3B488F0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000E91")]
		[Address(RVA = "0x3B489E0", Offset = "0x3B489E0", VA = "0x3B489E0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000E93")]
		[Address(RVA = "0x3B48A30", Offset = "0x3B48A30", VA = "0x3B48A30", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000E94")]
		[Address(RVA = "0x3B48AE0", Offset = "0x3B48AE0", VA = "0x3B48AE0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40007E3")]
	[FieldOffset(Offset = "0x10")]
	private List<string> _names;

	[Token(Token = "0x6000E89")]
	[Address(RVA = "0x3B43A20", Offset = "0x3B43A20", VA = "0x3B43A20")]
	public ScanMultipleFilter(List<string> names)
	{
	}

	[Token(Token = "0x6000E8A")]
	[Address(RVA = "0x3B47F00", Offset = "0x3B47F00", VA = "0x3B47F00", Slot = "4")]
	[IteratorStateMachine(typeof(_003CExecuteFilter_003Ed__2))]
	public override IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings)
	{
		return null;
	}
}
