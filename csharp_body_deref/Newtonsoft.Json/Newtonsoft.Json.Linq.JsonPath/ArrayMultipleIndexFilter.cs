// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JsonPath.ArrayMultipleIndexFilter
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

[Token(Token = "0x2000193")]
internal class ArrayMultipleIndexFilter : PathFilter
{
	[Token(Token = "0x2000194")]
	[CompilerGenerated]
	private sealed class _003CExecuteFilter_003Ed__2 : IEnumerable<JToken>, IEnumerable, IEnumerator<JToken>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000772")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000773")]
		[FieldOffset(Offset = "0x18")]
		private JToken _003C_003E2__current;

		[Token(Token = "0x4000774")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000775")]
		[FieldOffset(Offset = "0x28")]
		private IEnumerable<JToken> current;

		[Token(Token = "0x4000776")]
		[FieldOffset(Offset = "0x30")]
		public IEnumerable<JToken> _003C_003E3__current;

		[Token(Token = "0x4000777")]
		[FieldOffset(Offset = "0x38")]
		public ArrayMultipleIndexFilter _003C_003E4__this;

		[Token(Token = "0x4000778")]
		[FieldOffset(Offset = "0x40")]
		private JsonSelectSettings settings;

		[Token(Token = "0x4000779")]
		[FieldOffset(Offset = "0x48")]
		public JsonSelectSettings _003C_003E3__settings;

		[Token(Token = "0x400077A")]
		[FieldOffset(Offset = "0x50")]
		private IEnumerator<JToken> _003C_003E7__wrap1;

		[Token(Token = "0x400077B")]
		[FieldOffset(Offset = "0x58")]
		private JToken _003Ct_003E5__3;

		[Token(Token = "0x400077C")]
		[FieldOffset(Offset = "0x60")]
		private List<int>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x17000237")]
		private JToken System_002ECollections_002EGeneric_002EIEnumerator_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECurrent
		{
			[Token(Token = "0x6000E08")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000238")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E0A")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E03")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CExecuteFilter_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E04")]
		[Address(RVA = "0x1CA7280", Offset = "0x1CA5880", VA = "0x181CA7280", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E05")]
		[Address(RVA = "0x1CA4360", Offset = "0x1CA2960", VA = "0x181CA4360", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E06")]
		[Address(RVA = "0x1CA7560", Offset = "0x1CA5B60", VA = "0x181CA7560")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000E07")]
		[Address(RVA = "0x1CA7790", Offset = "0x1CA5D90", VA = "0x181CA7790")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000E09")]
		[Address(RVA = "0x1CA6AE0", Offset = "0x1CA50E0", VA = "0x181CA6AE0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000E0B")]
		[Address(RVA = "0x1CA6750", Offset = "0x1CA4D50", VA = "0x181CA6750", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000E0C")]
		[Address(RVA = "0x1CA6750", Offset = "0x1CA4D50", VA = "0x181CA6750", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000771")]
	[FieldOffset(Offset = "0x10")]
	internal List<int> Indexes;

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public ArrayMultipleIndexFilter(List<int> indexes)
	{
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x1C8E0A0", Offset = "0x1C8C6A0", VA = "0x181C8E0A0", Slot = "4")]
	[IteratorStateMachine(typeof(_003CExecuteFilter_003Ed__2))]
	public override IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings)
	{
		return null;
	}
}
