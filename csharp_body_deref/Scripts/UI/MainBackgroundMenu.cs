// ==================== AoTTG2 cross-reference ====================
// Type: UI.MainBackgroundMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MainBackgroundMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MainBackgroundMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007F4")]
internal class MainBackgroundMenu : BaseMenu
{
	[Token(Token = "0x20007F5")]
	[CompilerGenerated]
	private sealed class _003CWaitAndFinishBackground_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002825")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002826")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002827")]
		[FieldOffset(Offset = "0x20")]
		public MainBackgroundMenu _003C_003E4__this;

		[Token(Token = "0x17000DE8")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004CDD")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DE9")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004CDF")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004CDA")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndFinishBackground_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004CDB")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004CDC")]
		[Address(RVA = "0x229D550", Offset = "0x229BB50", VA = "0x18229D550", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004CDE")]
		[Address(RVA = "0x229D660", Offset = "0x229BC60", VA = "0x18229D660", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002820")]
	[FieldOffset(Offset = "0x98")]
	public MainMenuBackgroundPanel _mainBackgroundPanelBack;

	[Token(Token = "0x4002821")]
	[FieldOffset(Offset = "0xA0")]
	public MainMenuBackgroundPanel _mainBackgroundPanelFront;

	[Token(Token = "0x4002822")]
	[FieldOffset(Offset = "0xA8")]
	private Vector2 currentVelocity;

	[Token(Token = "0x4002823")]
	[FieldOffset(Offset = "0xB0")]
	public float smoothTime;

	[Token(Token = "0x4002824")]
	[FieldOffset(Offset = "0xB4")]
	public float backgroundScale;

	[Token(Token = "0x6004CD1")]
	[Address(RVA = "0x228DA50", Offset = "0x228C050", VA = "0x18228DA50", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6004CD2")]
	[Address(RVA = "0x228D750", Offset = "0x228BD50", VA = "0x18228D750")]
	private void SetupMainBackground()
	{
	}

	[Token(Token = "0x6004CD3")]
	[Address(RVA = "0x228D4E0", Offset = "0x228BAE0", VA = "0x18228D4E0")]
	private void AddParallaxEffect(GameObject target, float intensity)
	{
	}

	[Token(Token = "0x6004CD4")]
	[Address(RVA = "0x228DA60", Offset = "0x228C060", VA = "0x18228DA60")]
	private void Update()
	{
	}

	[Token(Token = "0x6004CD5")]
	[Address(RVA = "0x228D610", Offset = "0x228BC10", VA = "0x18228D610")]
	private Vector2 GetConstrainedTargetPosition(Vector2 mousePosition)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6004CD6")]
	[Address(RVA = "0x1DABC40", Offset = "0x1DAA240", VA = "0x181DABC40")]
	private float MapRange(float value, float fromSource, float toSource, float fromTarget, float toTarget)
	{
		return default(float);
	}

	[Token(Token = "0x6004CD7")]
	[Address(RVA = "0x228D550", Offset = "0x228BB50", VA = "0x18228D550")]
	public void ChangeMainBackground()
	{
	}

	[Token(Token = "0x6004CD8")]
	[Address(RVA = "0x228DD60", Offset = "0x228C360", VA = "0x18228DD60")]
	[IteratorStateMachine(typeof(_003CWaitAndFinishBackground_003Ed__12))]
	private IEnumerator WaitAndFinishBackground()
	{
		return null;
	}

	[Token(Token = "0x6004CD9")]
	[Address(RVA = "0x228DDD0", Offset = "0x228C3D0", VA = "0x18228DDD0")]
	public MainBackgroundMenu()
	{
	}
}
