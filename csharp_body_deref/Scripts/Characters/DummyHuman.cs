// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DummyHuman
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DummyHuman.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/DummyHuman.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CustomSkins;
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006A6")]
internal class DummyHuman : DummyCharacter
{
	[Token(Token = "0x20006A9")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinCoroutine_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001E06")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001E07")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001E08")]
		[FieldOffset(Offset = "0x20")]
		public DummyHuman _003C_003E4__this;

		[Token(Token = "0x17000B1F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600407A")]
			[Address(RVA = "0x5AE9D10", Offset = "0x5AE8D10", VA = "0x5AE9D10", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B20")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600407C")]
			[Address(RVA = "0x5AE9D60", Offset = "0x5AE8D60", VA = "0x5AE9D60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004077")]
		[Address(RVA = "0x5AE7710", Offset = "0x5AE6710", VA = "0x5AE7710")]
		[DebuggerHidden]
		public _003CLoadSkinCoroutine_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004078")]
		[Address(RVA = "0x5AE7900", Offset = "0x5AE6900", VA = "0x5AE7900", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004079")]
		[Address(RVA = "0x5AE7910", Offset = "0x5AE6910", VA = "0x5AE7910", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600407B")]
		[Address(RVA = "0x5AE9D20", Offset = "0x5AE8D20", VA = "0x5AE9D20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001DFC")]
	[FieldOffset(Offset = "0x30")]
	public HumanComponentCache Cache;

	[Token(Token = "0x4001DFD")]
	[FieldOffset(Offset = "0x38")]
	public HumanSetup Setup;

	[Token(Token = "0x4001DFE")]
	[FieldOffset(Offset = "0x40")]
	private HumanCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x4001DFF")]
	[FieldOffset(Offset = "0x48")]
	private bool _isLoadingSkins;

	[Token(Token = "0x600406B")]
	[Address(RVA = "0x5AE67D0", Offset = "0x5AE57D0", VA = "0x5AE67D0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600406C")]
	[Address(RVA = "0x5AE71E0", Offset = "0x5AE61E0", VA = "0x5AE71E0")]
	protected void Start()
	{
	}

	[Token(Token = "0x600406D")]
	[Address(RVA = "0x5AE7290", Offset = "0x5AE6290", VA = "0x5AE7290", Slot = "5")]
	protected override string GetIdleAnimation()
	{
		return null;
	}

	[Token(Token = "0x600406E")]
	[Address(RVA = "0x5AE73F0", Offset = "0x5AE63F0", VA = "0x5AE73F0", Slot = "6")]
	protected override string GetEmoteAnimation(string emote)
	{
		return null;
	}

	[Token(Token = "0x600406F")]
	[Address(RVA = "0x5AE7620", Offset = "0x5AE6620", VA = "0x5AE7620")]
	public void LoadSkin()
	{
	}

	[Token(Token = "0x6004070")]
	[Address(RVA = "0x5AE76A0", Offset = "0x5AE66A0", VA = "0x5AE76A0")]
	[IteratorStateMachine(typeof(_003CLoadSkinCoroutine_003Ed__9))]
	private IEnumerator LoadSkinCoroutine()
	{
		return null;
	}

	[Token(Token = "0x6004071")]
	[Address(RVA = "0x5AE7730", Offset = "0x5AE6730", VA = "0x5AE7730")]
	public DummyHuman()
	{
	}
}
