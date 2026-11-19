// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UI.DebugUIHandlerToggleHistory
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

[Token(Token = "0x20002F0")]
public class DebugUIHandlerToggleHistory : DebugUIHandlerToggle
{
	[Token(Token = "0x20002F1")]
	[CompilerGenerated]
	private sealed class _003CRefreshAfterSanitization_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000D93")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000D94")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000D95")]
		[FieldOffset(Offset = "0x20")]
		public DebugUIHandlerToggleHistory _003C_003E4__this;

		[Token(Token = "0x17000271")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60014B9")]
			[Address(RVA = "0x65ACDA0", Offset = "0x65ABDA0", VA = "0x65ACDA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000272")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60014BB")]
			[Address(RVA = "0x65ACDF0", Offset = "0x65ABDF0", VA = "0x65ACDF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60014B6")]
		[Address(RVA = "0x65ACCA0", Offset = "0x65ABCA0", VA = "0x65ACCA0")]
		[DebuggerHidden]
		public _003CRefreshAfterSanitization_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60014B7")]
		[Address(RVA = "0x65ACCE0", Offset = "0x65ABCE0", VA = "0x65ACCE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60014B8")]
		[Address(RVA = "0x65ACCF0", Offset = "0x65ABCF0", VA = "0x65ACCF0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60014BA")]
		[Address(RVA = "0x65ACDB0", Offset = "0x65ABDB0", VA = "0x65ACDB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000D91")]
	[FieldOffset(Offset = "0x80")]
	private Toggle[] historyToggles;

	[Token(Token = "0x4000D92")]
	private const float k_XOffset = 230f;

	[Token(Token = "0x60014B2")]
	[Address(RVA = "0x65AC6D0", Offset = "0x65AB6D0", VA = "0x65AC6D0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60014B3")]
	[Address(RVA = "0x65ACA70", Offset = "0x65ABA70", VA = "0x65ACA70", Slot = "13")]
	protected internal override void UpdateValueLabel()
	{
	}

	[Token(Token = "0x60014B4")]
	[Address(RVA = "0x65ACC30", Offset = "0x65ABC30", VA = "0x65ACC30")]
	[IteratorStateMachine(typeof(_003CRefreshAfterSanitization_003Ed__4))]
	private IEnumerator RefreshAfterSanitization()
	{
		return null;
	}

	[Token(Token = "0x60014B5")]
	[Address(RVA = "0x65ACCC0", Offset = "0x65ABCC0", VA = "0x65ACCC0")]
	public DebugUIHandlerToggleHistory()
	{
	}
}
