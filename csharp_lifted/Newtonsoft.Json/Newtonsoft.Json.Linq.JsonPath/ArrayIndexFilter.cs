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
			[Address(RVA = "0x5625420", Offset = "0x5624420", VA = "0x5625420", Slot = "6")]
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
			[Address(RVA = "0x5625470", Offset = "0x5624470", VA = "0x5625470", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000DF7")]
		[Address(RVA = "0x5624660", Offset = "0x5623660", VA = "0x5624660")]
		[DebuggerHidden]
		public _003CExecuteFilter_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000DF8")]
		[Address(RVA = "0x56246B0", Offset = "0x56236B0", VA = "0x56246B0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000DF9")]
		[Address(RVA = "0x5624870", Offset = "0x5623870", VA = "0x5624870", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000DFA")]
		[Address(RVA = "0x5625380", Offset = "0x5624380", VA = "0x5625380")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000DFB")]
		[Address(RVA = "0x56252E0", Offset = "0x56242E0", VA = "0x56252E0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000DFD")]
		[Address(RVA = "0x5625430", Offset = "0x5624430", VA = "0x5625430", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000DFF")]
		[Address(RVA = "0x5625480", Offset = "0x5624480", VA = "0x5625480", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<JToken> System_002ECollections_002EGeneric_002EIEnumerable_003CNewtonsoft_002EJson_002ELinq_002EJToken_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000E00")]
		[Address(RVA = "0x5625540", Offset = "0x5624540", VA = "0x5625540", Slot = "5")]
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
		[Address(RVA = "0x56245A0", Offset = "0x56235A0", VA = "0x56245A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DF4")]
		[Address(RVA = "0x56245B0", Offset = "0x56235B0", VA = "0x56245B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x56245C0", Offset = "0x56235C0", VA = "0x56245C0", Slot = "4")]
	[IteratorStateMachine(typeof(_003CExecuteFilter_003Ed__4))]
	public override IEnumerable<JToken> ExecuteFilter(JToken root, IEnumerable<JToken> current, JsonSelectSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x5624690", Offset = "0x5623690", VA = "0x5624690")]
	public ArrayIndexFilter()
	{
	}
}
