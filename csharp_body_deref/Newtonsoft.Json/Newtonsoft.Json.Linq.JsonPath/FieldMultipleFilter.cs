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
			[Address(RVA = "0x56287B0", Offset = "0x56277B0", VA = "0x56287B0", Slot = "6")]
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
			[Address(RVA = "0x5628800", Offset = "0x5627800", VA = "0x5628800", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E30")]
		[Address(RVA = "0x5627B70", Offset = "0x5626B70", VA = "0x5627B70")]
		[DebuggerHidden]
		public _003CExecuteFilter_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E31")]
		[Address(RVA = "0x5627C60", Offset = "0x5626C60", VA = "0x5627C60", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E32")]
		[Address(RVA = "0x5627DE0", Offset = "0x5626DE0", VA = "0x5627DE0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E33")]
		[Address(RVA = "0x5628710", Offset = "0x5627710", VA = "0x5628710")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000E34")]
		[Address(RVA = "0x56286D0", Offset = "0x56276D0", VA = "0x56286D0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000E36")]
		[Address(RVA = "0x56287C0", Offset = "0x56277C0", VA = "0x56287C0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000E38")]
		[Address(RVA = "0x5628810", Offset = "0x5627810", VA = "0x5628810", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000E39")]
		[Address(RVA = "0x56288D0", Offset = "0x56278D0", VA = "0x56288D0", Slot = "5")]
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
	[Address(RVA = "0x5627AA0", Offset = "0x5626AA0", VA = "0x5627AA0")]
	public FieldMultipleFilter(List<string> names)
	{
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x5627AD0", Offset = "0x5626AD0", VA = "0x5627AD0", Slot = "4")]
	[IteratorStateMachine(typeof(_003CExecuteFilter_003Ed__2))]
	public override IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings)
	{
		return null;
	}
}
