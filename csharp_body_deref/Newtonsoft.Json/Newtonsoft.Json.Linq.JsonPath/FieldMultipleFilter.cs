using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq.JsonPath;

[Token(Token = "0x2000199")]
internal class FieldMultipleFilter : PathFilter
{
	[Token(Token = "0x200019B")]
	[CompilerGenerated]
	private sealed class _003CExecuteFilter_003Ed__2 : IEnumerable<JToken>, IEnumerable, IEnumerator<JToken>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400079C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400079D")]
		[FieldOffset(Offset = "0x18")]
		private JToken _003C_003E2__current;

		[Token(Token = "0x400079E")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400079F")]
		[FieldOffset(Offset = "0x28")]
		private IEnumerable<JToken> current;

		[Token(Token = "0x40007A0")]
		[FieldOffset(Offset = "0x30")]
		public IEnumerable<JToken> _003C_003E3__current;

		[Token(Token = "0x40007A1")]
		[FieldOffset(Offset = "0x38")]
		public FieldMultipleFilter _003C_003E4__this;

		[Token(Token = "0x40007A2")]
		[FieldOffset(Offset = "0x40")]
		private JsonSelectSettings settings;

		[Token(Token = "0x40007A3")]
		[FieldOffset(Offset = "0x48")]
		public JsonSelectSettings _003C_003E3__settings;

		[Token(Token = "0x40007A4")]
		[FieldOffset(Offset = "0x50")]
		private IEnumerator<JToken> _003C_003E7__wrap1;

		[Token(Token = "0x40007A5")]
		[FieldOffset(Offset = "0x58")]
		private JObject _003Co_003E5__3;

		[Token(Token = "0x40007A6")]
		[FieldOffset(Offset = "0x60")]
		private List<string>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x40007A7")]
		[FieldOffset(Offset = "0x78")]
		private string _003Cname_003E5__5;

		[Token(Token = "0x17000240")]
		private JToken System_002ECollections_002EGeneric_002EIEnumerator_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECurrent
		{
			[Token(Token = "0x6000E35")]
			[Address(RVA = "0x3B40160", Offset = "0x3B40160", VA = "0x3B40160", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000241")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E37")]
			[Address(RVA = "0x3B401B0", Offset = "0x3B401B0", VA = "0x3B401B0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E30")]
		[Address(RVA = "0x3B3F380", Offset = "0x3B3F380", VA = "0x3B3F380")]
		[DebuggerHidden]
		public _003CExecuteFilter_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E31")]
		[Address(RVA = "0x3B3F470", Offset = "0x3B3F470", VA = "0x3B3F470", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E32")]
		[Address(RVA = "0x3B3F670", Offset = "0x3B3F670", VA = "0x3B3F670", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E33")]
		[Address(RVA = "0x3B400C0", Offset = "0x3B400C0", VA = "0x3B400C0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000E34")]
		[Address(RVA = "0x3B40080", Offset = "0x3B40080", VA = "0x3B40080")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000E36")]
		[Address(RVA = "0x3B40170", Offset = "0x3B40170", VA = "0x3B40170", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000E38")]
		[Address(RVA = "0x3B401C0", Offset = "0x3B401C0", VA = "0x3B401C0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000E39")]
		[Address(RVA = "0x3B40280", Offset = "0x3B40280", VA = "0x3B40280", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000799")]
	[FieldOffset(Offset = "0x10")]
	internal List<string> Names;

	[Token(Token = "0x6000E2B")]
	[Address(RVA = "0x3B3F2A0", Offset = "0x3B3F2A0", VA = "0x3B3F2A0")]
	public FieldMultipleFilter(List<string> names)
	{
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x3B3F2D0", Offset = "0x3B3F2D0", VA = "0x3B3F2D0", Slot = "4")]
	[IteratorStateMachine(typeof(_003CExecuteFilter_003Ed__2))]
	public override IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings)
	{
		return null;
	}
}
