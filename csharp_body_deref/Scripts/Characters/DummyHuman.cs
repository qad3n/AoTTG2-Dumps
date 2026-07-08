using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CustomSkins;
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004A9")]
internal class DummyHuman : DummyCharacter
{
	[Token(Token = "0x20004AC")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinCoroutine_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40014D7")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40014D8")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40014D9")]
		[FieldOffset(Offset = "0x20")]
		public DummyHuman _003C_003E4__this;

		[Token(Token = "0x1700095A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60031F1")]
			[Address(RVA = "0x3EA4230", Offset = "0x3EA4230", VA = "0x3EA4230", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700095B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60031F3")]
			[Address(RVA = "0x3EA4280", Offset = "0x3EA4280", VA = "0x3EA4280", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60031EE")]
		[Address(RVA = "0x3EA1AE0", Offset = "0x3EA1AE0", VA = "0x3EA1AE0")]
		[DebuggerHidden]
		public _003CLoadSkinCoroutine_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60031EF")]
		[Address(RVA = "0x3EA1CC0", Offset = "0x3EA1CC0", VA = "0x3EA1CC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60031F0")]
		[Address(RVA = "0x3EA1CD0", Offset = "0x3EA1CD0", VA = "0x3EA1CD0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60031F2")]
		[Address(RVA = "0x3EA4240", Offset = "0x3EA4240", VA = "0x3EA4240", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40014CD")]
	[FieldOffset(Offset = "0x30")]
	public HumanComponentCache Cache;

	[Token(Token = "0x40014CE")]
	[FieldOffset(Offset = "0x38")]
	public HumanSetup Setup;

	[Token(Token = "0x40014CF")]
	[FieldOffset(Offset = "0x40")]
	private HumanCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x40014D0")]
	[FieldOffset(Offset = "0x48")]
	private bool _isLoadingSkins;

	[Token(Token = "0x60031E2")]
	[Address(RVA = "0x3EA13E0", Offset = "0x3EA13E0", VA = "0x3EA13E0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60031E3")]
	[Address(RVA = "0x3EA1610", Offset = "0x3EA1610", VA = "0x3EA1610")]
	protected void Start()
	{
	}

	[Token(Token = "0x60031E4")]
	[Address(RVA = "0x3EA16C0", Offset = "0x3EA16C0", VA = "0x3EA16C0", Slot = "5")]
	protected override string GetIdleAnimation()
	{
		return null;
	}

	[Token(Token = "0x60031E5")]
	[Address(RVA = "0x3EA17D0", Offset = "0x3EA17D0", VA = "0x3EA17D0", Slot = "6")]
	protected override string GetEmoteAnimation(string emote)
	{
		return null;
	}

	[Token(Token = "0x60031E6")]
	[Address(RVA = "0x3EA19E0", Offset = "0x3EA19E0", VA = "0x3EA19E0")]
	public void LoadSkin()
	{
	}

	[Token(Token = "0x60031E7")]
	[Address(RVA = "0x3EA1A70", Offset = "0x3EA1A70", VA = "0x3EA1A70")]
	[IteratorStateMachine(typeof(_003CLoadSkinCoroutine_003Ed__9))]
	private IEnumerator LoadSkinCoroutine()
	{
		return null;
	}

	[Token(Token = "0x60031E8")]
	[Address(RVA = "0x3EA1B00", Offset = "0x3EA1B00", VA = "0x3EA1B00")]
	public DummyHuman()
	{
	}
}
