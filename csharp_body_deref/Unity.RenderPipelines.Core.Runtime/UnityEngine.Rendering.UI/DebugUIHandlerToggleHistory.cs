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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60014B6")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CRefreshAfterSanitization_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60014B7")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60014B8")]
		[Address(RVA = "0x2BBAD60", Offset = "0x2BB9360", VA = "0x182BBAD60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60014BA")]
		[Address(RVA = "0x2BBAF30", Offset = "0x2BB9530", VA = "0x182BBAF30", Slot = "8")]
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
	[Address(RVA = "0x2BB0F30", Offset = "0x2BAF530", VA = "0x182BB0F30", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x60014B3")]
	[Address(RVA = "0x2BB1420", Offset = "0x2BAFA20", VA = "0x182BB1420", Slot = "13")]
	protected internal override void UpdateValueLabel()
	{
	}

	[Token(Token = "0x60014B4")]
	[Address(RVA = "0x2BB0EC0", Offset = "0x2BAF4C0", VA = "0x182BB0EC0")]
	[IteratorStateMachine(typeof(_003CRefreshAfterSanitization_003Ed__4))]
	private IEnumerator RefreshAfterSanitization()
	{
		return null;
	}

	[Token(Token = "0x60014B5")]
	[Address(RVA = "0x2BA8B70", Offset = "0x2BA7170", VA = "0x182BA8B70")]
	public DebugUIHandlerToggleHistory()
	{
	}
}
