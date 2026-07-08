using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UnityEngine.Rendering.UI;

[Token(Token = "0x200021B")]
public class DebugUIHandlerEnumHistory : DebugUIHandlerEnumField
{
	[Token(Token = "0x200021C")]
	[CompilerGenerated]
	private sealed class _003CRefreshAfterSanitization_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000871")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000872")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000873")]
		[FieldOffset(Offset = "0x20")]
		public DebugUIHandlerEnumHistory _003C_003E4__this;

		[Token(Token = "0x170001B1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000E99")]
			[Address(RVA = "0x48EE2F0", Offset = "0x48EE2F0", VA = "0x48EE2F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001B2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E9B")]
			[Address(RVA = "0x48EE340", Offset = "0x48EE340", VA = "0x48EE340", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E96")]
		[Address(RVA = "0x48EE190", Offset = "0x48EE190", VA = "0x48EE190")]
		[DebuggerHidden]
		public _003CRefreshAfterSanitization_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E97")]
		[Address(RVA = "0x48EE1F0", Offset = "0x48EE1F0", VA = "0x48EE1F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E98")]
		[Address(RVA = "0x48EE200", Offset = "0x48EE200", VA = "0x48EE200", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E9A")]
		[Address(RVA = "0x48EE300", Offset = "0x48EE300", VA = "0x48EE300", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400086F")]
	[FieldOffset(Offset = "0x88")]
	private Text[] historyValues;

	[Token(Token = "0x4000870")]
	private const float k_XOffset = 230f;

	[Token(Token = "0x6000E92")]
	[Address(RVA = "0x48EDBE0", Offset = "0x48EDBE0", VA = "0x48EDBE0", Slot = "5")]
	internal override void SetWidget(DebugUI.Widget widget)
	{
	}

	[Token(Token = "0x6000E93")]
	[Address(RVA = "0x48EDE70", Offset = "0x48EDE70", VA = "0x48EDE70", Slot = "13")]
	public override void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x48EE120", Offset = "0x48EE120", VA = "0x48EE120")]
	[IteratorStateMachine(typeof(_003CRefreshAfterSanitization_003Ed__4))]
	private IEnumerator RefreshAfterSanitization()
	{
		return null;
	}

	[Token(Token = "0x6000E95")]
	[Address(RVA = "0x48EE1B0", Offset = "0x48EE1B0", VA = "0x48EE1B0")]
	public DebugUIHandlerEnumHistory()
	{
	}
}
