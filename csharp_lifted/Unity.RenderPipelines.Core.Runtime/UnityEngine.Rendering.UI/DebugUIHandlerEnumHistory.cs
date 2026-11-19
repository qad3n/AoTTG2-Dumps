// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerEnumHistory
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
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x20002DA")]
public class DebugUIHandlerEnumHistory : DebugUIHandlerEnumField
{
	[Token(Token = "0x20002DB")]
	[CompilerGenerated]
	private sealed class _003CRefreshAfterSanitization_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000D43")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000D44")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000D45")]
		[FieldOffset(Offset = "0x20")]
		public DebugUIHandlerEnumHistory _003C_003E4__this;

		[Token(Token = "0x1700026F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001431")]
			[Address(RVA = "0x65A82C0", Offset = "0x65A72C0", VA = "0x65A82C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000270")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001433")]
			[Address(RVA = "0x65A8310", Offset = "0x65A7310", VA = "0x65A8310", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600142E")]
		[Address(RVA = "0x65A8160", Offset = "0x65A7160", VA = "0x65A8160")]
		[DebuggerHidden]
		public _003CRefreshAfterSanitization_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600142F")]
		[Address(RVA = "0x65A81C0", Offset = "0x65A71C0", VA = "0x65A81C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001430")]
		[Address(RVA = "0x65A81D0", Offset = "0x65A71D0", VA = "0x65A81D0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001432")]
		[Address(RVA = "0x65A82D0", Offset = "0x65A72D0", VA = "0x65A82D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000D41")]
	[FieldOffset(Offset = "0x88")]
	private Text[] historyValues;

	[Token(Token = "0x4000D42")]
	private const float k_XOffset = 230f;

	[Token(Token = "0x600142A")]
	[Address(RVA = "0x65A7BF0", Offset = "0x65A6BF0", VA = "0x65A7BF0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x600142B")]
	[Address(RVA = "0x65A7E80", Offset = "0x65A6E80", VA = "0x65A7E80", Slot = "13")]
	public override void UpdateValueLabel()
	{
	}

	[Token(Token = "0x600142C")]
	[Address(RVA = "0x65A80F0", Offset = "0x65A70F0", VA = "0x65A80F0")]
	[IteratorStateMachine(typeof(_003CRefreshAfterSanitization_003Ed__4))]
	private IEnumerator RefreshAfterSanitization()
	{
		return null;
	}

	[Token(Token = "0x600142D")]
	[Address(RVA = "0x65A8180", Offset = "0x65A7180", VA = "0x65A8180")]
	public DebugUIHandlerEnumHistory()
	{
	}
}
