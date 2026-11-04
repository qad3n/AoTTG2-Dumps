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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600142E")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CRefreshAfterSanitization_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600142F")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001430")]
		[Address(RVA = "0x2BBAE10", Offset = "0x2BB9410", VA = "0x182BBAE10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001432")]
		[Address(RVA = "0x2BBAF70", Offset = "0x2BB9570", VA = "0x182BBAF70", Slot = "8")]
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
	[Address(RVA = "0x2BAC5F0", Offset = "0x2BAABF0", VA = "0x182BAC5F0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x600142B")]
	[Address(RVA = "0x2BAC8B0", Offset = "0x2BAAEB0", VA = "0x182BAC8B0", Slot = "13")]
	public override void UpdateValueLabel()
	{
	}

	[Token(Token = "0x600142C")]
	[Address(RVA = "0x2BAC580", Offset = "0x2BAAB80", VA = "0x182BAC580")]
	[IteratorStateMachine(typeof(_003CRefreshAfterSanitization_003Ed__4))]
	private IEnumerator RefreshAfterSanitization()
	{
		return null;
	}

	[Token(Token = "0x600142D")]
	[Address(RVA = "0x2BAC540", Offset = "0x2BAAB40", VA = "0x182BAC540")]
	public DebugUIHandlerEnumHistory()
	{
	}
}
