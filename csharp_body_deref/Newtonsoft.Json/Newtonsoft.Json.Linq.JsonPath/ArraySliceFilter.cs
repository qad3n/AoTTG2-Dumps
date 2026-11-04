// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JsonPath.ArraySliceFilter
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

[Token(Token = "0x2000195")]
internal class ArraySliceFilter : PathFilter
{
	[Token(Token = "0x2000196")]
	[CompilerGenerated]
	private sealed class _003CExecuteFilter_003Ed__12 : IEnumerable<JToken>, IEnumerable, IEnumerator<JToken>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000780")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000781")]
		[FieldOffset(Offset = "0x18")]
		private JToken _003C_003E2__current;

		[Token(Token = "0x4000782")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000783")]
		[FieldOffset(Offset = "0x28")]
		public ArraySliceFilter _003C_003E4__this;

		[Token(Token = "0x4000784")]
		[FieldOffset(Offset = "0x30")]
		private IEnumerable<JToken> current;

		[Token(Token = "0x4000785")]
		[FieldOffset(Offset = "0x38")]
		public IEnumerable<JToken> _003C_003E3__current;

		[Token(Token = "0x4000786")]
		[FieldOffset(Offset = "0x40")]
		private JsonSelectSettings settings;

		[Token(Token = "0x4000787")]
		[FieldOffset(Offset = "0x48")]
		public JsonSelectSettings _003C_003E3__settings;

		[Token(Token = "0x4000788")]
		[FieldOffset(Offset = "0x50")]
		private IEnumerator<JToken> _003C_003E7__wrap1;

		[Token(Token = "0x4000789")]
		[FieldOffset(Offset = "0x58")]
		private JArray _003Ca_003E5__3;

		[Token(Token = "0x400078A")]
		[FieldOffset(Offset = "0x60")]
		private int _003CstepCount_003E5__4;

		[Token(Token = "0x400078B")]
		[FieldOffset(Offset = "0x64")]
		private int _003CstopIndex_003E5__5;

		[Token(Token = "0x400078C")]
		[FieldOffset(Offset = "0x68")]
		private bool _003CpositiveStep_003E5__6;

		[Token(Token = "0x400078D")]
		[FieldOffset(Offset = "0x6C")]
		private int _003Ci_003E5__7;

		[Token(Token = "0x1700023C")]
		private JToken System_002ECollections_002EGeneric_002EIEnumerator_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002ECurrent
		{
			[Token(Token = "0x6000E1A")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700023D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E1C")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E16")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CExecuteFilter_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E17")]
		[Address(RVA = "0x1CA4280", Offset = "0x1CA2880", VA = "0x181CA4280", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E18")]
		[Address(RVA = "0x1CA3810", Offset = "0x1CA1E10", VA = "0x181CA3810", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E19")]
		[Address(RVA = "0x1CA4310", Offset = "0x1CA2910", VA = "0x181CA4310")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000E1B")]
		[Address(RVA = "0x1CA4240", Offset = "0x1CA2840", VA = "0x181CA4240", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000E1D")]
		[Address(RVA = "0x1CA4180", Offset = "0x1CA2780", VA = "0x181CA4180", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000E1E")]
		[Address(RVA = "0x1CA4180", Offset = "0x1CA2780", VA = "0x181CA4180", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x17000239")]
	public int? Start
	{
		[Token(Token = "0x6000E0D")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E0E")]
		[Address(RVA = "0x560EC0", Offset = "0x55F4C0", VA = "0x180560EC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700023A")]
	public int? End
	{
		[Token(Token = "0x6000E0F")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E10")]
		[Address(RVA = "0x111C9B0", Offset = "0x111AFB0", VA = "0x18111C9B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700023B")]
	public int? Step
	{
		[Token(Token = "0x6000E11")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000E12")]
		[Address(RVA = "0x1112310", Offset = "0x1110910", VA = "0x181112310")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000E13")]
	[Address(RVA = "0x1C8E140", Offset = "0x1C8C740", VA = "0x181C8E140", Slot = "4")]
	[IteratorStateMachine(typeof(_003CExecuteFilter_003Ed__12))]
	public override IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x1C8E1E0", Offset = "0x1C8C7E0", VA = "0x181C8E1E0")]
	private bool IsValid(int index, int stopIndex, bool positiveStep)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ArraySliceFilter()
	{
	}
}
