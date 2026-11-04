// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E30")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CExecuteFilter_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E31")]
		[Address(RVA = "0x1CA6F50", Offset = "0x1CA5550", VA = "0x181CA6F50", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E32")]
		[Address(RVA = "0x1CA46B0", Offset = "0x1CA2CB0", VA = "0x181CA46B0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E33")]
		[Address(RVA = "0x1CA74C0", Offset = "0x1CA5AC0", VA = "0x181CA74C0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000E34")]
		[Address(RVA = "0x1CA7600", Offset = "0x1CA5C00", VA = "0x181CA7600")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000E36")]
		[Address(RVA = "0x1CA69A0", Offset = "0x1CA4FA0", VA = "0x181CA69A0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000E38")]
		[Address(RVA = "0x1CA6810", Offset = "0x1CA4E10", VA = "0x181CA6810", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000E39")]
		[Address(RVA = "0x1CA6810", Offset = "0x1CA4E10", VA = "0x181CA6810", Slot = "5")]
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
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public FieldMultipleFilter(List<string> names)
	{
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x1C949E0", Offset = "0x1C92FE0", VA = "0x181C949E0", Slot = "4")]
	[IteratorStateMachine(typeof(_003CExecuteFilter_003Ed__2))]
	public override IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings)
	{
		return null;
	}
}
